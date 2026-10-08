#include "../sdk_internal.h"

typedef union UnkPxiFifoMessage {
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
    u32 raw;
} UnkPxiFifoMessage;

typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2]; // registered callback bits per processor
} UnkPxiSystemWork;

static inline UnkPxiSystemWork* GetPxiSystemWork(void) {
    return (UnkPxiSystemWork*)0x027ffc00;
}

#define PXI_SYSTEM_WORK GetPxiSystemWork()

#define REG_PXI_SYNC     (*(vu16*)0x04000180)
#define REG_PXI_FIFO_CNT (*(vu16*)0x04000184)
#define REG_PXI_SEND     (*(vu32*)0x04000188)
#define REG_PXI_RECV     (*(vu32*)0x04100000)

u16 data_0211451c;
PxiCallback data_02114520[32];

void func_0207a080(void) {
    u32 enabled = OS_DisableIRQ();
    s32 i;

    if (!data_0211451c) {
        data_0211451c = TRUE;
        PXI_SYSTEM_WORK->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            data_02114520[i] = NULL;
        }
        REG_PXI_FIFO_CNT = 0xc408;
        func_020776b0(0x40000);
        func_02077480(0x40000, PXIi_HandlerRecvFifoNotEmpty);
        func_02077650(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync = REG_PXI_SYNC & 0xf;
            REG_PXI_SYNC = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while ((REG_PXI_SYNC & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    OS_RestoreIRQ(enabled);
}

void func_0207a180(u32 tag, PxiCallback callback) {
    u32 enabled = OS_DisableIRQ();

    data_02114520[tag] = callback;
    if (callback) {
        PXI_SYSTEM_WORK->unk_388[0] |= (1 << tag);
    } else {
        PXI_SYSTEM_WORK->unk_388[0] &= ~(1 << tag);
    }
    OS_RestoreIRQ(enabled);
}

BOOL func_0207a1cc(u32 tag, u32 proc) {
    UnkPxiSystemWork* work = PXI_SYSTEM_WORK;
    return (work->unk_388[proc] & (1 << tag)) ? TRUE : FALSE;
}

static inline s32 PxiSetToFifo(u32 data) {
    u32 enabled;

    if (REG_PXI_FIFO_CNT & 0x4000) {
        REG_PXI_FIFO_CNT |= 0xc000;
        return -1;
    }
    enabled = OS_DisableIRQ();
    if (REG_PXI_FIFO_CNT & 2) {
        OS_RestoreIRQ(enabled);
        return -2;
    }
    REG_PXI_SEND = data;
    OS_RestoreIRQ(enabled);
    return 0;
}

static inline s32 PxiGetFromFifo(u32* data) {
    u32 enabled;

    if (REG_PXI_FIFO_CNT & 0x4000) {
        REG_PXI_FIFO_CNT |= 0xc000;
        return -3;
    }
    enabled = OS_DisableIRQ();
    if (REG_PXI_FIFO_CNT & 0x100) {
        OS_RestoreIRQ(enabled);
        return -4;
    }
    *data = REG_PXI_RECV;
    OS_RestoreIRQ(enabled);
    return 0;
}

s32 PXI_SendWordByFifo(u32 tag, u32 data, BOOL err) {
    UnkPxiFifoMessage msg;

    msg.e.tag = tag;
    msg.e.err = err;
    msg.e.data = data;
    return PxiSetToFifo(msg.raw);
}

void PXIi_HandlerRecvFifoNotEmpty(void) {
    UnkPxiFifoMessage msg;
    s32 ret;
    u32 tag;

    while (TRUE) {
        ret = PxiGetFromFifo(&msg.raw);
        if (ret == -4) {
            return;
        }
        if (ret == -3) {
            continue;
        }
        tag = msg.e.tag;
        if (tag) {
            if (data_02114520[tag]) {
                data_02114520[tag](tag, msg.e.data, msg.e.err);
            } else if (!msg.e.err) {
                msg.e.err = 1;
                PxiSetToFifo(msg.raw);
            }
        }
    }
}
