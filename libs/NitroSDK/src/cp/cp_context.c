#include <nitro/types.h>

/* Divider / square-root unit state (0x1C bytes). */
typedef struct UnkCPContext {
    /* 0x00 */ u32 unk_00[4]; /* DIV_NUMER, DIV_DENOM */
    /* 0x10 */ u32 unk_10[2]; /* SQRT_PARAM */
    /* 0x18 */ u16 unk_18;    /* DIVCNT mode */
    /* 0x1A */ u16 unk_1a;    /* SQRTCNT mode */
} UnkCPContext;

// clang-format off
asm void CP_SaveContext(register UnkCPContext* context) {
    ldr     r1, =0x04000290
    stmdb   sp!, {r4}
    ldmia   r1, {r2, r3, r4, r12}
    stmia   r0!, {r2, r3, r4, r12}
    ldrh    r12, [r1, #-0x10]
    add     r1, r1, #0x28
    ldmia   r1, {r2, r3}
    stmia   r0!, {r2, r3}
    and     r12, r12, #3
    ldrh    r2, [r1, #-0x8]
    strh    r12, [r0]
    and     r2, r2, #1
    strh    r2, [r0, #2]
    ldmia   sp!, {r4}
    bx      lr
}

asm void CPi_RestoreContext(register const UnkCPContext* context) {
    stmdb   sp!, {r4}
    ldr     r1, =0x04000290
    ldmia   r0, {r2, r3, r4, r12}
    stmia   r1, {r2, r3, r4, r12}
    ldrh    r2, [r0, #0x18]
    ldrh    r3, [r0, #0x1a]
    strh    r2, [r1, #-0x10]
    strh    r3, [r1, #0x20]
    add     r0, r0, #0x10
    add     r1, r1, #0x28
    ldmia   r0, {r2, r3}
    stmia   r1, {r2, r3}
    ldmia   sp!, {r4}
    bx      lr
}
// clang-format on
