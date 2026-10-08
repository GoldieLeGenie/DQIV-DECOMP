#include "../gx/gx_internal.h"

#define UNK_DMA_BASE      0x040000b0
#define UNK_DMA_CNT(n)    (((vu32 *)UNK_DMA_BASE)[(n) * 3 + 2])
#define UNK_DMA_CNT_H(n)  (((vu16 *)UNK_DMA_BASE)[(n) * 6 + 5])
#define UNK_DMA_FILL(n)   (((vu32 *)0x040000e0)[(n)])
#define UNK_DMA_BUSY      0x80000000

typedef void (*UnkDmaCallback)(void *arg);

void func_01ff8000(u32 dmaNo, const void *src, void *dest, u32 ctrl);
void func_01ff8040(u32 dmaNo, const void *src, void *dest, u32 ctrl);
void func_01ff80b0(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
void func_01ff80d4(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
void func_02077594(u32 dmaNo, UnkDmaCallback callback, void *arg);
void func_020674ec(u32 dmaNo, u32 src, u32 size, u32 dir);

static inline void UnkWaitDmaBusy(u32 dmaNo) {
    vu32 *cnt = &UNK_DMA_CNT(dmaNo);
    while (*cnt & UNK_DMA_BUSY) {
    }
}

static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}

static inline void UnkDmaFillAsync(u32 dmaNo, void *dest, u32 data, u32 ctrl) {
    u32 e = OS_DisableIRQ();
    UNK_DMA_FILL(dmaNo) = data;
    func_01ff80b0(dmaNo, &UNK_DMA_FILL(dmaNo), dest, ctrl);
    OS_RestoreIRQ(e);
}

/* Fill memory with a 32-bit value using DMA (synchronous) */
void func_020670cc(u32 dmaNo, void *dest, u32 data, u32 size) {
    vu32 *cnt;
    if (size == 0) {
        return;
    }
    cnt = &UNK_DMA_CNT(dmaNo);
    while (*cnt & UNK_DMA_BUSY) {
    }
    {
        u32 e = OS_DisableIRQ();
        UNK_DMA_FILL(dmaNo) = data;
        func_01ff80d4(dmaNo, &UNK_DMA_FILL(dmaNo), dest, 0x85000000 | (size >> 2));
        OS_RestoreIRQ(e);
    }
    while (*cnt & UNK_DMA_BUSY) {
    }
}

/* Copy memory in 32-bit units using DMA (synchronous) */
void func_0206714c(u32 dmaNo, const void *src, void *dest, u32 size) {
    vu32 *cnt;
    func_020674ec(dmaNo, (u32)src, size, 0);
    if (size == 0) {
        return;
    }
    cnt = &UNK_DMA_CNT(dmaNo);
    while (*cnt & UNK_DMA_BUSY) {
    }
    func_01ff8040(dmaNo, src, dest, 0x84000000 | (size >> 2));
    while (*cnt & UNK_DMA_BUSY) {
    }
}

/* Copy memory in 16-bit units using DMA (synchronous) */
void func_020671bc(u32 dmaNo, const void *src, void *dest, u32 size) {
    vu32 *cnt;
    if (size == 0) {
        return;
    }
    func_020674ec(dmaNo, (u32)src, size, 0);
    cnt = &UNK_DMA_CNT(dmaNo);
    while (*cnt & UNK_DMA_BUSY) {
    }
    func_01ff8040(dmaNo, src, dest, 0x80000000 | (size >> 1));
    while (*cnt & UNK_DMA_BUSY) {
    }
}

/* Fill memory with a 32-bit value using DMA (asynchronous) */
void func_02067228(u32 dmaNo, void *dest, u32 data, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    func_02067384(dmaNo);
    if (callback) {
        func_02077594(dmaNo, callback, arg);
        {
            u32 e = OS_DisableIRQ();
            u32 ctrl = 0xc5000000 | (size >> 2);
            vu32 *fill = &UNK_DMA_FILL(dmaNo);
            *fill = data;
            func_01ff80b0(dmaNo, fill, dest, ctrl);
            OS_RestoreIRQ(e);
        }
    } else {
        UnkDmaFillAsync(dmaNo, dest, data, 0x85000000 | (size >> 2));
    }
}

/* Copy memory in 32-bit units using DMA (asynchronous) */
void func_020672ec(u32 dmaNo, const void *src, void *dest, u32 size, UnkDmaCallback callback, void *arg) {
    func_020674ec(dmaNo, (u32)src, size, 0);
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    func_02067384(dmaNo);
    if (callback) {
        func_02077594(dmaNo, callback, arg);
        func_01ff8000(dmaNo, src, dest, 0xc4000000 | (size >> 2));
    } else {
        func_01ff8000(dmaNo, src, dest, 0x84000000 | (size >> 2));
    }
}

/* Wait for a DMA channel to finish */
void func_02067384(u32 dmaNo) {
    u32 e = OS_DisableIRQ();
    UnkWaitDmaBusy(dmaNo);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *)(UNK_DMA_BASE + dmaNo * 12);
        p[0] = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    OS_RestoreIRQ(e);
}

/* Stop a DMA channel */
void func_020673ec(u32 dmaNo) {
    u32 e = OS_DisableIRQ();
    UNK_DMA_CNT_H(dmaNo) &= ~0x3a00;
    UNK_DMA_CNT_H(dmaNo) &= ~0x8000;
    UNK_DMA_CNT_H(dmaNo);
    UNK_DMA_CNT_H(dmaNo);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *)(UNK_DMA_BASE + dmaNo * 12);
        p[0] = 0;
        p[1] = 0;
        p[2] = 0x81400001;
    }
    OS_RestoreIRQ(e);
}

/* Stop if another channel runs an auto-start DMA that conflicts with the given start timing */
void func_02067468(u32 dmaNo, u32 dmaType) {
    s32 i;
    vu32 *cnt = &UNK_DMA_CNT(0);

    for (i = 0; i < 3; i++, cnt += 3) {
        u32 dmaCnt;
        if (i == dmaNo) {
            continue;
        }
        dmaCnt = *cnt;
        if (!(dmaCnt & UNK_DMA_BUSY)) {
            continue;
        }
        dmaCnt &= 0x38000000;
        if (dmaCnt == dmaType) {
            continue;
        }
        if (dmaCnt == 0x08000000 && dmaType == 0x10000000) {
            continue;
        }
        if (dmaCnt == 0x10000000 && dmaType == 0x08000000) {
            continue;
        }
        if (dmaCnt == 0x18000000 || dmaCnt == 0x20000000 || dmaCnt == 0x28000000 || dmaCnt == 0x30000000 ||
            dmaCnt == 0x38000000 || dmaCnt == 0x08000000 || dmaCnt == 0x10000000) {
            OS_Terminate();
        }
    }
}

/* Stop if DMA channel 0 would access I/O registers or the cartridge area */
void func_020674ec(u32 dmaNo, u32 src, u32 size, u32 dir) {
    u32 srcHead, srcEnd;

    if (dmaNo != 0) {
        return;
    }
    srcHead = src & 0xff000000;
    if (dir != 0) {
        if (dir == 0x800000) {
            src -= size;
        }
    } else {
        src += size;
    }
    srcEnd = src & 0xff000000;
    if (srcHead == 0x04000000 || srcHead >= 0x08000000 || srcEnd == 0x04000000 || srcEnd >= 0x08000000) {
        OS_Terminate();
    }
}
