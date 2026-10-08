#include "os_internal.h"

typedef struct UnkContext {
    /* 0x00 */ u32 cpsr;
    /* 0x04 */ u32 r[13];
    /* 0x38 */ u32 sp;
    /* 0x3c */ u32 lr;
    /* 0x40 */ u32 pc_plus4;
    /* 0x44 */ u32 sp_svc;
    /* 0x48 */ u8  cp_context[0x1c];
} UnkContext; // size 0x64

// clang-format off
// Initializes a thread context to start at newpc with stack newsp
asm void func_02078c44(register UnkContext* context, register u32 newpc, register u32 newsp) {
    add     r1, r1, #4
    str     r1, [r0, #0x40]
    str     r2, [r0, #0x44]
    sub     r2, r2, #0x40
    tst     r2, #4
    subne   r2, r2, #4
    str     r2, [r0, #0x38]
    ands    r1, r1, #1
    movne   r1, #0x3f
    moveq   r1, #0x1f
    str     r1, [r0]
    mov     r1, #0
    str     r1, [r0, #0x4]
    str     r1, [r0, #0x8]
    str     r1, [r0, #0xc]
    str     r1, [r0, #0x10]
    str     r1, [r0, #0x14]
    str     r1, [r0, #0x18]
    str     r1, [r0, #0x1c]
    str     r1, [r0, #0x20]
    str     r1, [r0, #0x24]
    str     r1, [r0, #0x28]
    str     r1, [r0, #0x2c]
    str     r1, [r0, #0x30]
    str     r1, [r0, #0x34]
    str     r1, [r0, #0x3c]
    bx      lr
}

asm BOOL OS_SaveContext(register UnkContext* context) {
    stmfd   sp!, {r0, lr}
    add     r0, r0, #0x48
    ldr     r1, =CP_SaveContext
    blx     r1
    ldmfd   sp!, {r0, lr}
    add     r1, r0, #0
    mrs     r2, cpsr
    str     r2, [r1], #4
    mov     r0, #0xd3
    msr     cpsr_c, r0
    str     sp, [r1, #0x40]
    msr     cpsr_c, r2
    mov     r0, #1
    stmia   r1, {r0-r14}
    add     r0, pc, #8
    str     r0, [r1, #0x3c]
    mov     r0, #0
    bx      lr
}

asm void OS_LoadContext(register UnkContext* context) {
    stmfd   sp!, {r0, lr}
    add     r0, r0, #0x48
    ldr     r1, =CPi_RestoreContext
    blx     r1
    ldmfd   sp!, {r0, lr}
    mrs     r1, cpsr
    bic     r1, r1, #0x1f
    orr     r1, r1, #0xd3
    msr     cpsr_c, r1
    ldr     r1, [r0], #4
    msr     spsr_fsxc, r1
    ldr     sp, [r0, #0x40]
    ldr     lr, [r0, #0x3c]
    ldmia   r0, {r0-r14}^
    mov     r0, r0
    subs    pc, lr, #4
}
// clang-format on
