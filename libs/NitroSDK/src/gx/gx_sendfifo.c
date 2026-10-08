#include <nitro/types.h>

/* Write 48 bytes to a FIFO register (destination address not incremented) */
// clang-format off
asm void func_02066dcc(register const void *src, register volatile void *fifo) {
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    ldmia   r0!, {r2, r3, r12}
    stmia   r1, {r2, r3, r12}
    bx      lr
}
// clang-format on
