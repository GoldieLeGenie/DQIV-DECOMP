#include "os_internal.h"

// clang-format off

// Returns the DTCM base address
asm u32 func_020798c0(void) {
    mrc     p15, 0, r0, c9, c1, 0
    ldr     r1, =0xfffff000
    and     r0, r0, r1
    bx      lr
}

asm void OS_EnableProtectionUnit(void) {
    mrc     p15, 0, r0, c1, c0, 0
    orr     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}

asm void OS_DisableProtectionUnit(void) {
    mrc     p15, 0, r0, c1, c0, 0
    bic     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}

// Sets the data access permissions of the protection regions
asm void func_020798f4(register u32 clearBits, register u32 setBits) {
    mrc     p15, 0, r2, c5, c0, 2
    bic     r2, r2, r0
    orr     r2, r2, r1
    mcr     p15, 0, r2, c5, c0, 2
    bx      lr
}

// Sets protection region 1
asm void func_02079908(register u32 param) {
    mcr     p15, 0, r0, c6, c1, 0
    bx      lr
}

// Sets protection region 2
asm void func_02079910(register u32 param) {
    mcr     p15, 0, r0, c6, c2, 0
    bx      lr
}

// clang-format on
