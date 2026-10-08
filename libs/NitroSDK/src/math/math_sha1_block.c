#include "math_internal.h"
#pragma define_section sdk_text ".text.keep" ".text.keep" ".text.keep" RX

/* SHA-1 block transform (hand-written).
   It reads its constants pc-relative from the 5 words just before the function
   (0x0205f728: 0x00FF00FF, 0x5A827999, 0x6ED9EBA1, 0x8F1BBCDC, 0xCA62C1D6), which carry no symbol. */
// clang-format off
/* Retain the entire handwritten transform section, including its PC-relative constants. */
__declspec(sdk_text) asm void func_0205f728(void) {
    dcd 0x00ff00ff
    dcd 0x5a827999
    dcd 0x6ed9eba1
    dcd 0x8f1bbcdc
    dcd 0xca62c1d6
}

__declspec(sdk_text) asm void func_0205f73c(register UnkSha1Context* context, register const void* data, register u32 len) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
    ldmia r0, {r3, r9, r10, r11, r12}
    sub sp, sp, 0x84
    str r2, [sp, 0x80]
loop_205f74c:
    ldr r8, [pc, -0x28]
    ldr r7, [pc, -0x30]
    mov r6, sp
    mov r5, 0
loop_205f75c:
    ldr r4, [r1], 4
    add r2, r8, r12
    add r2, r2, r3, ror 27
    and lr, r4, r7
    and r4, r7, r4, ror 24
    orr r4, r4, lr, ror 8
    str r4, [r6, 0x40]
    str r4, [r6], 4
    add r2, r2, r4
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror 2
    mov r12, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r5, r5, 4
    cmp r5, 0x40
    blt loop_205f75c
    mov r7, 0
    mov r6, sp
loop_205f7bc:
    ldr r2, [r6]
    ldr r5, [r6, 8]
    ldr r4, [r6, 0x20]
    ldr lr, [r6, 0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror 0x1f
    str r2, [r6, 0x40]
    str r2, [r6], 4
    add r2, r2, r12
    add r2, r2, r8
    add r2, r2, r3, ror 27
    eor r4, r10, r11
    and r4, r4, r9
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror 2
    mov r12, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, 4
    cmp r7, 0x10
    blt loop_205f7bc
    ldr r8, [pc, -0xfc]
    mov r7, 0
loop_205f82c:
    ldr r2, [r6]
    ldr r4, [r6, 8]
    ldr lr, [r6, 0x20]
    ldr r5, [r6, 0x34]
    eor r2, r2, r4
    eor lr, lr, r5
    eor r2, r2, lr
    mov r2, r2, ror 0x1f
    str r2, [r6, 0x40]
    str r2, [r6], 4
    add r2, r2, r12
    add r2, r2, r8
    add r2, r2, r3, ror 27
    eor lr, r9, r10
    eor lr, lr, r11
    add r2, r2, lr
    mov r9, r9, ror 2
    mov r12, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, 1
    cmp r7, 0xc
    moveq r6, sp
    cmp r7, 0x14
    blt loop_205f82c
    ldr r8, [pc, -0x16c]
    mov r7, 0
loop_205f8a0:
    ldr r2, [r6]
    ldr lr, [r6, 8]
    ldr r5, [r6, 0x20]
    ldr r4, [r6, 0x34]
    eor r2, r2, lr
    eor r5, r5, r4
    eor r2, r2, r5
    mov r2, r2, ror 0x1f
    str r2, [r6, 0x40]
    str r2, [r6], 4
    add r2, r2, r12
    add r2, r2, r8
    add r2, r2, r3, ror 27
    orr r5, r9, r10
    and r5, r5, r11
    and r4, r9, r10
    orr r5, r5, r4
    add r2, r2, r5
    mov r9, r9, ror 2
    mov r12, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, 1
    cmp r7, 8
    moveq r6, sp
    cmp r7, 0x14
    blt loop_205f8a0
    ldr r8, [pc, -0x1e4]
    mov r7, 0
loop_205f91c:
    ldr r2, [r6]
    ldr r5, [r6, 8]
    ldr r4, [r6, 0x20]
    ldr lr, [r6, 0x34]
    eor r2, r2, r5
    eor r4, r4, lr
    eor r2, r2, r4
    mov r2, r2, ror 0x1f
    str r2, [r6, 0x40]
    str r2, [r6], 4
    add r2, r2, r12
    add r2, r2, r8
    add r2, r2, r3, ror 27
    eor r4, r9, r10
    eor r4, r4, r11
    add r2, r2, r4
    mov r9, r9, ror 2
    mov r12, r11
    mov r11, r10
    mov r10, r9
    mov r9, r3
    mov r3, r2
    add r7, r7, 1
    cmp r7, 4
    moveq r6, sp
    cmp r7, 0x14
    blt loop_205f91c
    ldmia r0, {r2, r4, r6, r7, lr}
    add r3, r3, r2
    add r9, r9, r4
    add r10, r10, r6
    add r11, r11, r7
    add r12, r12, lr
    stmia r0, {r3, r9, r10, r11, r12}
    ldr lr, [sp, 0x80]
    subs lr, lr, 0x40
    str lr, [sp, 0x80]
    bgt loop_205f74c
    add sp, sp, 0x84
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
}
// clang-format on
