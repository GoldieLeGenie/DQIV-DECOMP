#include "card_internal.h"

typedef BOOL (*UnkCardPulledOutCallback)(void);

/* Card pull-out state (data_0210c7c0, 8 bytes). */
typedef struct UnkCardPullOut {
    /* 0x00 */ volatile BOOL            unk_00; /* card pulled out */
    /* 0x04 */ volatile UnkCardPulledOutCallback unk_04; /* user callback, return TRUE to terminate */
} UnkCardPullOut;

UnkCardPullOut data_0210c7c0;

void func_0205e65c(void) {
    func_0207a074();
    func_0207a180(14, func_0205e688);
    data_0210c7c0.unk_04 = NULL;
}

/* PXI callback of the pull-out FIFO tag. */
void func_0205e688(u32 tag, u32 data, BOOL err) {
    if ((data & 0x3F) == 17) {
        UnkCardPullOut* const s = &data_0210c7c0;
        if (!s->unk_00) {
            BOOL                     terminate = TRUE;
            UnkCardPulledOutCallback callback;
            s->unk_00 = terminate;
            callback  = s->unk_04;
            if (callback != NULL) {
                terminate = callback();
            }
            if (terminate) {
                func_0205e6ec();
            }
        }
    } else {
        OS_Terminate();
    }
}

BOOL CARD_IsPulledOut(void) {
    return data_0210c7c0.unk_00;
}

/* Stops all DMA, waits for the power LED state and asks the ARM7 to shut down. */
void func_0205e6ec(void) {
    BOOL shutdown = TRUE;

    func_020673ec(0);
    func_020673ec(1);
    func_020673ec(2);
    func_020673ec(3);

    if ((*(u16*)0x027FFFA8 & 0x8000) >> 15) {
        u32 state = func_0207bd04();
        while (state == 4) {
            OS_Delay(0xA3A47);
            state = func_0207bd04();
        }
        if (state == 0) {
            shutdown = FALSE;
        }
    }
    if (shutdown) {
        func_0205e7d8(1, 1);
    }
    OS_Terminate();
}

/* Compares the current card ID with the one read at boot. */
void func_0205e778(u32 id) {
    vu32 boot_id = *(u32*)((*(u16*)0x027FFC10 == 0) ? 0x027FF800 : 0x027FFC00);
    if (id != boot_id) {
        ENTER_CRITICAL_SECTION();
        func_0205e688(14, 17, FALSE);
        LEAVE_CRITICAL_SECTION();
    }
}

void func_0205e7d8(u32 data, s32 wait) {
    while (PXI_SendWordByFifo(14, data, FALSE) != 0) {
        WaitByLoop(wait);
    }
}
