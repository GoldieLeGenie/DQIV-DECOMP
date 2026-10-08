#include <nitro/types.h>

/* Byte-oriented decompressors (LZ77 / Huffman / run-length) that write through swp/swpb. */

// clang-format off
/* LZ77 decompression: src = compressed data with header, dest = output. */
asm void func_02067b88(register const void* src, register void* dest) {
    stmfd sp!, {r4, r5, r6, lr}
    ldr r5, [r0], #4
    mov r2, r5, lsr #8
_2067b94:
    cmp r2, #0
    ble _2067c14
    ldrb lr, [r0], #1
    mov r4, #8
_2067ba4:
    subs r4, r4, #1
    blt _2067b94
    tst lr, #0x80
    bne _2067bc8
    ldrb r6, [r0], #1
    swpb r6, r6, [r1]
    add r1, r1, #1
    sub r2, r2, #1
    b _2067c04
_2067bc8:
    ldrb r5, [r0]
    mov r6, #3
    add r3, r6, r5, asr #4
    ldrb r6, [r0], #1
    and r5, r6, #0xf
    mov r12, r5, lsl #8
    ldrb r6, [r0], #1
    orr r5, r6, r12
    add r12, r5, #1
    sub r2, r2, r3
_2067bf0:
    ldrb r5, [r1, -r12]
    swpb r5, r5, [r1]
    add r1, r1, #1
    subs r3, r3, #1
    bgt _2067bf0
_2067c04:
    cmp r2, #0
    movgt lr, lr, lsl #1
    bgt _2067ba4
    b _2067b94
_2067c14:
    ldmfd sp!, {r4, r5, r6, lr}
    bx lr
}

/* Huffman decompression. */
asm void func_02067c1c(register const void* src, register void* dest) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    add r2, r0, #4
    add r7, r2, #1
    ldrb r10, [r0]
    and r4, r10, #0xf
    mov r3, #0
    mov lr, #0
    and r10, r4, #7
    add r11, r10, #4
    str r11, [sp]
    ldr r10, [r0]
    mov r12, r10, lsr #8
    ldrb r10, [r2]
    add r10, r10, #1
    add r0, r2, r10, lsl #1
    mov r2, r7
_2067c60:
    cmp r12, #0
    ble _2067ce8
    mov r8, #0x20
    ldr r5, [r0], #4
_2067c70:
    subs r8, r8, #1
    blt _2067c60
    mov r10, #1
    and r9, r10, r5, lsr #31
    ldrb r6, [r2]
    mov r6, r6, lsl r9
    mov r10, r2, lsr #1
    mov r10, r10, lsl #1
    ldrb r11, [r2]
    and r11, r11, #0x3f
    add r11, r11, #1
    add r10, r10, r11, lsl #1
    add r2, r10, r9
    tst r6, #0x80
    beq _2067cd8
    mov r3, r3, lsr r4
    ldrb r10, [r2]
    rsb r11, r4, #0x20
    orr r3, r3, r10, lsl r11
    mov r2, r7
    add lr, lr, #1
    ldr r11, [sp]
    cmp lr, r11
    streq r3, [r1], #4
    subeq r12, r12, #4
    moveq lr, #0
_2067cd8:
    cmp r12, #0
    movgt r5, r5, lsl #1
    bgt _2067c70
    b _2067c60
_2067ce8:
    add sp, sp, #4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}

/* Run-length decompression. */
asm void func_02067cf4(register const void* src, register void* dest) {
    stmfd sp!, {r4, r5, r7}
    ldmia r0!, {r3}
    mov r7, r3, lsr #8
_2067d00:
    cmp r7, #0
    ble _2067d58
    ldrb r4, [r0], #1
    ands r2, r4, #0x7f
    tst r4, #0x80
    bne _2067d38
    add r2, r2, #1
    sub r7, r7, r2
_2067d20:
    ldrb r3, [r0], #1
    swpb r3, r3, [r1]
    add r1, r1, #1
    subs r2, r2, #1
    bgt _2067d20
    b _2067d00
_2067d38:
    add r2, r2, #3
    sub r7, r7, r2
    ldrb r5, [r0], #1
_2067d44:
    swpb r4, r5, [r1]
    add r1, r1, #1
    subs r2, r2, #1
    bgt _2067d44
    b _2067d00
_2067d58:
    ldmfd sp!, {r4, r5, r7}
    bx lr
}

// clang-format on
