#include "../sdk_internal.h"

u32 data_02114504;    // locked bank mask
u16 data_02114508[9]; // lock id per bank

// clang-format off
asm u32 func_02079ec4(register u32 value) {
    clz r0, r0
    bx lr
}
// clang-format on

void func_02079ecc(void) {
    s32 i;

    data_02114504 = 0;
    for (i = 0; i < 9; i++) {
        data_02114508[i] = 0;
    }
}

/* Releases every bank of `bank` held by `lockID`. */
void func_02079f00(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = OS_DisableIRQ();

    mask = bank & data_02114504 & 0x1ff;

    while (TRUE) {
        s32 i = 31 - func_02079ec4(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_02114508[i] == lockID) {
            data_02114508[i] = 0;
            data_02114504 &= ~(1 << i);
        }
    }
    OS_RestoreIRQ(enabled);
}
