#include "os_internal.h"
#include <nitro/os/interrupt.h>

extern char           unk_IrqStackSize[]; // linker constant (0x1000)

UnkIrqCallbackInfo data_02114140[8]; // DMA 0-3 / timer 0-3 callbacks

#define STACK_BOTTOM_MAGIC 0xFDDB597D
#define STACK_TOP_MAGIC    0x7BF9DD5B

void OS_InitIRQQueue(void) {
    data_027e0060.tail = NULL;
    data_027e0060.head = NULL;
}

// Sets the handler for each IRQ of the mask
void func_02077480(u32 mask, UnkIrqFunction func) {
    s32 i;
    for (i = 0; i < 22; i++) {
        if (mask & 1) {
            UnkIrqCallbackInfo* info = NULL;

            if (8 <= i && i <= 11) {
                info = &data_02114140[i - 8];
            } else if (3 <= i && i <= 6) {
                info = &data_02114140[i + 1];
            } else {
                data_027e0000[i] = func;
            }

            if (info != NULL) {
                info->func   = (void (*)(void*))func;
                info->arg    = NULL;
                info->enable = TRUE;
            }
        }
        mask >>= 1;
    }
}

// Gets the handler of the first IRQ of the mask
UnkIrqFunction func_02077508(u32 mask) {
    s32 i;
    UnkIrqFunction* func = data_027e0000;
    for (i = 0; i < 22; i++) {
        if (mask & 1) {
            if (8 <= i && i <= 11) {
                return (UnkIrqFunction)data_02114140[i - 8].func;
            } else if (3 <= i && i <= 6) {
                return (UnkIrqFunction)data_02114140[i + 1].func;
            }
            return *func;
        }
        mask >>= 1;
        func++;
    }
    return NULL;
}

// Sets the DMA interrupt callback
void func_02077594(u32 dmaNo, void (*func)(void*), void* arg) {
    u32 mask = 1 << (dmaNo + 8);
    data_02114140[dmaNo].func   = func;
    data_02114140[dmaNo].arg    = arg;
    data_02114140[dmaNo].enable = func_02077650(mask) & mask;
}

// Sets the timer interrupt callback
void func_020775dc(u32 timerNo, void (*func)(void*), void* arg) {
    u32 mask = 1 << (timerNo + 3);
    (data_02114140 + 4)[timerNo].func = func;
    (data_02114140 + 4)[timerNo].arg  = arg;
    func_02077650(mask);
    (data_02114140 + 4)[timerNo].enable = TRUE;
}

// Sets the IE register
u32 func_02077624(u32 mask) {
    BOOL ime  = OS_DisableIME();
    u32  prev = REG_IE;
    REG_IE    = mask;
    OS_RestoreIME(ime);
    return prev;
}

// Enables interrupts of the mask
u32 func_02077650(u32 mask) {
    BOOL ime  = OS_DisableIME();
    u32  prev = REG_IE;
    REG_IE    = prev | mask;
    OS_RestoreIME(ime);
    return prev;
}

// Disables interrupts of the mask
u32 func_02077680(u32 mask) {
    BOOL ime  = OS_DisableIME();
    u32  prev = REG_IE;
    REG_IE    = prev & ~mask;
    OS_RestoreIME(ime);
    return prev;
}

// Clears IRQ request flags
u32 func_020776b0(u32 mask) {
    BOOL ime  = OS_DisableIME();
    u32  prev = REG_IF;
    REG_IF    = mask;
    OS_RestoreIME(ime);
    return prev;
}

// Puts check values at both ends of the IRQ stack
void func_020776dc(void) {
    *(u32*)((u32)data_027e0000 + 0x3f7c)                          = STACK_BOTTOM_MAGIC;
    *(u32*)((u32)data_027e0000 + 0x3f80 - (u32)unk_IrqStackSize) = STACK_TOP_MAGIC;
}
