// IRQ wait helper and the DMA/timer interrupt callback dispatchers.
#include <nitro/types.h>
#include <nitro/os/cpustat.h>
#include <nitro/os/thread.h>

typedef struct UnkIrqCallbackInfo {
    /* 0x00 */ void (*func)(void*);
    /* 0x04 */ u32 enable;
    /* 0x08 */ void* arg;
} UnkIrqCallbackInfo;

extern u8 data_027e0000[];                  // DTCM start (interrupt check flag at +0x3FF8)
extern OSThreadQueue data_027e0060;         // threads waiting for an interrupt
extern UnkIrqCallbackInfo data_02114140[8]; // DMA 0-3 / timer 0-3 callbacks
u16 data_020c404c[8] = {8, 9, 10, 11, 3, 4, 5, 6}; // interrupt bit of each callback slot

#define UNK_IRQ_CHECK (*(vu32*)((u32)data_027e0000 + 0x3FF8))

u32 func_02077680(u32 mask);

void func_020772e8(BOOL clear, u32 irqFlags) {
    u32 irq = OS_DisableIRQ();
    if (clear) {
        UNK_IRQ_CHECK &= ~irqFlags;
    }
    OS_RestoreIRQ(irq);

    if (irqFlags & UNK_IRQ_CHECK) {
        return;
    }

    do {
        OS_PauseThread(&data_027e0060);
    } while (!(irqFlags & UNK_IRQ_CHECK));
}

void func_0207735c(void) {
}

void func_02077360(int index) {
    u32 mask = 1 << data_020c404c[index];
    void (*func)(void*) = data_02114140[index].func;

    data_02114140[index].func = NULL;
    if (func != NULL) {
        func(data_02114140[index].arg);
    }

    UNK_IRQ_CHECK |= mask;

    if (!data_02114140[index].enable) {
        func_02077680(mask);
    }
}

void func_020773e8(void) {
    func_02077360(0);
}

void func_020773f8(void) {
    func_02077360(1);
}

void func_02077408(void) {
    func_02077360(2);
}

void func_02077418(void) {
    func_02077360(3);
}

void func_02077428(void) {
    func_02077360(4);
}

void func_02077438(void) {
    func_02077360(5);
}

void func_02077448(void) {
    func_02077360(6);
}

void func_02077458(void) {
    func_02077360(7);
}
