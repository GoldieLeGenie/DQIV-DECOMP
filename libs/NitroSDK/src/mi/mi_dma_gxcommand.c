#include "../gx/gx_internal.h"

#define REG_GXSTAT_V (*(vu32 *)0x04000600)
#define UNK_GXFIFO   ((void *)0x04000400)
#define UNK_IE_GXFIFO 0x200000

typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);

/* data_0210ceb4 (0x20 bytes): geometry command DMA transfer state */
typedef struct {
    /* 0x00 */ volatile BOOL isBusy;
    /* 0x04 */ u32 dmaNo;
    /* 0x08 */ u32 src;
    /* 0x0c */ u32 size;
    /* 0x10 */ UnkDmaCallback callback;
    /* 0x14 */ void *arg;
    /* 0x18 */ u32 fifoCond;
    /* 0x1c */ UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
UnkGxCmdDmaState data_0210ceb4;

void func_01ff8000(u32 dmaNo, const void *src, void *dest, u32 ctrl);
void func_02077594(u32 dmaNo, UnkDmaCallback callback, void *arg);
void func_02077480(u32 mask, UnkIrqHandler handler);
UnkIrqHandler func_02077508(u32 mask);
void func_02077650(u32 mask);
void func_02077680(u32 mask);
void func_020776b0(u32 mask);
void func_02067468(u32 dmaNo, u32 dmaType);
void func_020674ec(u32 dmaNo, u32 src, u32 size, u32 dir);
void func_02067638(void);
void func_020676e4(void *arg);
void func_020677fc(void *arg);

static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}

/* Send geometry commands to the FIFO with DMA, refilled from the FIFO interrupt */
void func_02067540(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0210ceb4.isBusy) {
    }
    while (!(((REG_GXSTAT_V & 0x7000000) >> 24) & 2)) {
    }
    data_0210ceb4.isBusy   = TRUE;
    data_0210ceb4.dmaNo    = dmaNo;
    data_0210ceb4.src      = (u32)src;
    data_0210ceb4.size     = size;
    data_0210ceb4.callback = callback;
    data_0210ceb4.arg      = arg;
    func_020674ec(dmaNo, (u32)src, size, 0);
    func_02067384(dmaNo);

    e = OS_DisableIRQ();
    data_0210ceb4.fifoCond        = (REG_GXSTAT_V & 0xc0000000) >> 30;
    data_0210ceb4.fifoIntrHandler = func_02077508(UNK_IE_GXFIFO);
    REG_GXSTAT_V = (REG_GXSTAT_V & ~0xc0000000) | 0x40000000;
    func_02077480(UNK_IE_GXFIFO, func_02067638);
    func_02077650(UNK_IE_GXFIFO);
    func_02067638();
    OS_RestoreIRQ(e);
}

void func_02067638(void) {
    u32 src;
    u32 size;

    if (data_0210ceb4.size == 0) {
        return;
    }
    size = data_0210ceb4.size;
    if (size >= 0x1d8) {
        size = 0x1d8;
    }
    src = data_0210ceb4.src;
    data_0210ceb4.size -= size;
    data_0210ceb4.src += size;
    if (data_0210ceb4.size == 0) {
        func_02077594(data_0210ceb4.dmaNo, func_020676e4, NULL);
        func_01ff8000(data_0210ceb4.dmaNo, (const void *)src, UNK_GXFIFO, 0xc4400000 | (size >> 2));
        func_020776b0(UNK_IE_GXFIFO);
    } else {
        func_01ff8000(data_0210ceb4.dmaNo, (const void *)src, UNK_GXFIFO, 0x84400000 | (size >> 2));
        func_020776b0(UNK_IE_GXFIFO);
    }
}

void func_020676e4(void *arg) {
    func_02077680(UNK_IE_GXFIFO);
    REG_GXSTAT_V = (data_0210ceb4.fifoCond << 30) | (REG_GXSTAT_V & ~0xc0000000);
    func_02077480(UNK_IE_GXFIFO, data_0210ceb4.fifoIntrHandler);
    data_0210ceb4.isBusy = FALSE;
    UnkCallCallback(data_0210ceb4.callback, data_0210ceb4.arg);
}

/* Send geometry commands to the FIFO with a geometry-FIFO-timed DMA */
void func_02067744(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0210ceb4.isBusy) {
    }
    data_0210ceb4.isBusy   = TRUE;
    data_0210ceb4.dmaNo    = dmaNo;
    data_0210ceb4.callback = callback;
    data_0210ceb4.arg      = arg;
    func_02067468(dmaNo, 0x38000000);
    func_020674ec(dmaNo, (u32)src, size, 0);
    func_02067384(dmaNo);
    func_02077594(dmaNo, func_020677fc, NULL);
    func_01ff8000(dmaNo, src, UNK_GXFIFO, 0xfc400000 | (size >> 2));
}

void func_020677fc(void *arg) {
    data_0210ceb4.isBusy = FALSE;
    UnkCallCallback(data_0210ceb4.callback, data_0210ceb4.arg);
}
