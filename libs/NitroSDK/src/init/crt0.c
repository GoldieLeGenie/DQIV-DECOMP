// The module parameter block BuildInfo follows the startup code inside .text: it is defined at the end of
// this file in a data section named ".text", which is emitted after the code sections only when the
// functions are generated as they are parsed.
#pragma ipa function
#pragma defer_codegen off

#include "crt0_local.h"

#pragma define_section CRT0_TEXT_DATA ".text" ".text"

// clang-format off

// ROM entry point: waits for the IME/VCOUNT state, sets up CP15, the IRQ/SVC/SYS stacks,
// clears DTCM, palette and OAM, unpacks the static module, runs the autoloads, clears .bss
// and jumps to main with lr = 0xffff0000.
asm void Entry(void) {
    mov     r12, #0x4000000
    str     r12, [r12, #0x208]
_wait_vcount:
    ldrh    r0, [r12, #0x6]
    cmp     r0, #0x0
    bne     _wait_vcount
    bl      init_cp15
    mov     r0, #0x13
    msr     cpsr_c, r0
    ldr     r0, =data_027e0000
    add     r0, r0, #0x3fc0
    mov     sp, r0
    mov     r0, #0x12
    msr     cpsr_c, r0
    ldr     r0, =data_027e0000
    add     r0, r0, #0x3fc0
    sub     r0, r0, #0x40
    sub     sp, r0, #0x4
    tst     sp, #0x4
    subeq   sp, sp, #0x4
    ldr     r1, =0x1000
    sub     r1, r0, r1
    mov     r0, #0x1f
    msr     cpsr_fsxc, r0
    sub     sp, r1, #0x4
    mov     r0, #0x0
    ldr     r1, =data_027e0000
    mov     r2, #0x4000
    bl      func_0200093c
    mov     r0, #0x0
    ldr     r1, =0x5000000
    mov     r2, #0x400
    bl      func_0200093c
    mov     r0, #0x200
    ldr     r1, =0x7000000
    mov     r2, #0x400
    bl      func_0200093c
    ldr     r1, =BuildInfo
    ldr     r0, [r1, #0x14]
    bl      MIi_UncompressBackward
    bl      do_autoload
    ldr     r0, =BuildInfo
    ldr     r1, [r0, #0xc]
    ldr     r2, [r0, #0x10]
    mov     r3, r1
    mov     r0, #0x0
_clear_bss:
    cmp     r1, r2
    strlo   r0, [r1], #0x4
    blo     _clear_bss
    bic     r1, r3, #0x1f
_flush_bss:
    mcr     p15, 0, r0, c7, c10, 4
    mcr     p15, 0, r1, c7, c5, 1
    mcr     p15, 0, r1, c7, c14, 1
    add     r1, r1, #0x20
    cmp     r1, r2
    blt     _flush_bss
    ldr     r1, =0x27fff9c
    str     r0, [r1]
    ldr     r1, =data_027e0000
    add     r1, r1, #0x3fc0
    add     r1, r1, #0x3c
    ldr     r0, =func_01ff8138
    str     r0, [r1]
    bl      func_0200641c
    bl      func_02007eec
    bl      __call_static_initializers
    ldr     r1, =main
    ldr     lr, =0xffff0000
    tst     sp, #0x4
    subne   sp, sp, #0x4
    bx      r1
}

// Fills size bytes at dst with the word value
asm void func_0200093c(unsigned long value, void* dst, unsigned long size) {
    add     r12, r1, r2
_loop:
    cmp     r1, r12
    stmltia r1!, {r0}
    blt     _loop
    bx      lr
}

// In-place backward LZ decompression of the static module (bottom = end of the compressed data)
asm void MIi_UncompressBackward(void* bottom) {
    cmp     r0, #0x0
    beq     _end
    stmfd   sp!, {r4-r7}
    ldmdb   r0, {r1, r2}
    add     r2, r0, r2
    sub     r3, r0, r1, lsr #24
    bic     r1, r1, #0xff000000
    sub     r1, r0, r1
    mov     r4, r2
_loop:
    cmp     r3, r1
    ble     _done
    ldrb    r5, [r3, #-1]!
    mov     r6, #0x8
_flags:
    subs    r6, r6, #0x1
    blt     _loop
    tst     r5, #0x80
    bne     _copy
    ldrb    r0, [r3, #-1]!
    strb    r0, [r2, #-1]!
    b       _next
_copy:
    ldrb    r12, [r3, #-1]!
    ldrb    r7, [r3, #-1]!
    orr     r7, r7, r12, lsl #8
    bic     r7, r7, #0xf000
    add     r7, r7, #0x2
    add     r12, r12, #0x20
_copy_loop:
    ldrb    r0, [r2, r7]
    strb    r0, [r2, #-1]!
    subs    r12, r12, #0x10
    bge     _copy_loop
_next:
    cmp     r3, r1
    mov     r5, r5, lsl #1
    bgt     _flags
_done:
    mov     r0, #0x0
    bic     r3, r1, #0x1f
_flush:
    mcr     p15, 0, r0, c7, c10, 4
    mcr     p15, 0, r3, c7, c5, 1
    mcr     p15, 0, r3, c7, c14, 1
    add     r3, r3, #0x20
    cmp     r3, r4
    blt     _flush
    ldmfd   sp!, {r4-r7}
_end:
    bx      lr
}

// Copies every autoload block of the module parameter list to its destination and clears its bss
asm void do_autoload(void) {
    ldr     r0, =BuildInfo
    ldr     r1, [r0]
    ldr     r2, [r0, #0x4]
    ldr     r3, [r0, #0x8]
_next_block:
    cmp     r1, r2
    beq     _done
    ldr     r5, [r1], #0x4
    ldr     r7, [r1], #0x4
    add     r6, r5, r7
    mov     r4, r5
_copy:
    cmp     r4, r6
    ldrmi   r7, [r3], #0x4
    strmi   r7, [r4], #0x4
    bmi     _copy
    ldr     r7, [r1], #0x4
    add     r6, r4, r7
    mov     r7, #0x0
_clear:
    cmp     r4, r6
    strlo   r7, [r4], #0x4
    blo     _clear
    bic     r4, r5, #0x1f
_flush:
    mcr     p15, 0, r7, c7, c10, 4
    mcr     p15, 0, r4, c7, c5, 1
    mcr     p15, 0, r4, c7, c14, 1
    add     r4, r4, #0x20
    cmp     r4, r6
    blt     _flush
    b       _next_block
_done:
    b       AutoloadCallback
}

asm void AutoloadCallback(void) {
    bx      lr
}

// Sets up the CP15 control register, protection regions, TCMs and cache/write-buffer settings
asm void init_cp15(void) {
    mrc     p15, 0, r0, c1, c0, 0
    ldr     r1, =0xf9005
    bic     r0, r0, r1
    mcr     p15, 0, r0, c1, c0, 0
    mov     r0, #0x0
    mcr     p15, 0, r0, c7, c5, 0
    mcr     p15, 0, r0, c7, c6, 0
    mcr     p15, 0, r0, c7, c10, 4
    ldr     r0, =0x4000033
    mcr     p15, 0, r0, c6, c0, 0
    ldr     r0, =0x200002d
    mcr     p15, 0, r0, c6, c1, 0
    ldr     r0, =data_027e0000 + 0x21
    mcr     p15, 0, r0, c6, c2, 0
    ldr     r0, =0x8000035
    mcr     p15, 0, r0, c6, c3, 0
    ldr     r0, =data_027e0000
    orr     r0, r0, #0x1a
    orr     r0, r0, #0x1
    mcr     p15, 0, r0, c6, c4, 0
    ldr     r0, =0x100002f
    mcr     p15, 0, r0, c6, c5, 0
    ldr     r0, =0xffff001d
    mcr     p15, 0, r0, c6, c6, 0
    ldr     r0, =0x27ff017
    mcr     p15, 0, r0, c6, c7, 0
    mov     r0, #0x20
    mcr     p15, 0, r0, c9, c1, 1
    ldr     r0, =data_027e0000
    orr     r0, r0, #0xa
    mcr     p15, 0, r0, c9, c1, 0
    mov     r0, #0x42
    mcr     p15, 0, r0, c2, c0, 1
    mov     r0, #0x42
    mcr     p15, 0, r0, c2, c0, 0
    mov     r0, #0x2
    mcr     p15, 0, r0, c3, c0, 0
    ldr     r0, =0x5100011
    mcr     p15, 0, r0, c5, c0, 3
    ldr     r0, =0x15111011
    mcr     p15, 0, r0, c5, c0, 2
    mrc     p15, 0, r0, c1, c0, 0
    ldr     r1, =0x5707d
    orr     r0, r0, r1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}

asm void func_02000b60(void) {
    bx      lr
}

// clang-format on

// Module parameters read by Entry/do_autoload and by the ROM tools (at 0x02000b64, right after the code)
__declspec(CRT0_TEXT_DATA) UnkBuildInfo BuildInfo = {
    data_020c4d80,
    data_020c4d98,
    ARM9_BSS_START,
    ARM9_BSS_START,
    ARM9_BSS_END,
    0,
    0x04007531,
    0xdec00621,
    0x2106c0de,
    "[SDK+NINTENDO:BACKUP]",
};
