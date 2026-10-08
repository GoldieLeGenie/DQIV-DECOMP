#include "os_internal.h"

#define EXCEPTION_VECTOR_MAIN (*(u32*)0x027ffd9c)
#define EXCEPTION_VECTOR_BUF  (*(u32*)((u32)(u8*)data_027e0000 + 0x3fdc)) // DTCM + 0x3fdc

typedef void (*UnkExceptionHandler)(void* context, void* arg);

/* definition order chosen for the .bss layout (the compiler sorts the objects by size) */
UnkExceptionHandler data_0211444c;       // user exception handler
u32                 data_02114454;       // debugger exception handler
void*               data_02114450;       // user exception handler argument
u8                  data_02114458[0x80]; // exception context

void func_02079988(void);
void func_020799fc(void);
void func_02079a10(void);
void func_02079aa0(void);
void OS_EnableProtectionUnit(void);
void OS_DisableProtectionUnit(void);

// Installs the exception handler (unless a debugger already has one)
void func_02079918(void) {
    if (0x02600000 <= EXCEPTION_VECTOR_MAIN && EXCEPTION_VECTOR_MAIN < 0x02800000) {
        data_02114454 = EXCEPTION_VECTOR_MAIN;
    } else {
        data_02114454 = 0;
    }

    if (data_02114454 == 0) {
        EXCEPTION_VECTOR_MAIN = (u32)func_02079988;
        EXCEPTION_VECTOR_BUF  = (u32)func_02079988;
    }

    data_0211444c = NULL;
}

// Sets the user exception handler like the library code that is not linked into the ROM
// (keeps data_02114450 in the pooled .bss).
static void unkfunc_unused_27(UnkExceptionHandler handler, void* arg) {
    data_0211444c = handler;
    data_02114450 = arg;
}

// clang-format off

// Exception vector entry
asm void func_02079988(void) {
    ldr     r12, =data_02114454
    ldr     r12, [r12]
    cmp     r12, #0
    movne   lr, pc
    bxne    r12

    ldr     r12, =0x02000000
    stmdb   r12!, {r0-r3, sp, lr}
    and     r0, sp, #1
    mov     sp, r12

    mrs     r1, cpsr
    and     r1, r1, #0x1f
    teq     r1, #0x17
    bne     _not_abort
    bl      func_020799fc
    b       _done
_not_abort:
    teq     r1, #0x1b
    bne     _done
    bl      func_020799fc
_done:
    ldr     r12, =data_02114454
    ldr     r12, [r12]
    cmp     r12, #0
_stop:
    beq     _stop
_loop:
    mov     r0, r0
    b       _loop

    ldmia   sp!, {r0-r3, r12, lr}
    mov     sp, r12
    bx      lr
}

asm void func_020799fc(void) {
    stmfd   sp!, {r0, lr}
    bl      func_02079a10
    bl      func_02079aa0
    ldmfd   sp!, {r0, lr}
    bx      lr
}

// Saves the exception context
asm void func_02079a10(void) {
    ldr     r1, =data_02114458
    mrs     r2, cpsr
    str     r2, [r1, #0x74]
    str     r0, [r1, #0x6c]
    ldr     r0, [r12]
    str     r0, [r1, #4]
    ldr     r0, [r12, #4]
    str     r0, [r1, #8]
    ldr     r0, [r12, #8]
    str     r0, [r1, #0xc]
    ldr     r0, [r12, #0xc]
    str     r0, [r1, #0x10]
    ldr     r2, [r12, #0x10]
    bic     r2, r2, #1
    add     r0, r1, #0x14
    stmia   r0, {r4-r11}
    str     r12, [r1, #0x70]
    ldr     r0, [r2]
    str     r0, [r1, #0x64]
    ldr     r3, [r2, #4]
    str     r3, [r1]
    ldr     r0, [r2, #8]
    str     r0, [r1, #0x34]
    ldr     r0, [r2, #0xc]
    str     r0, [r1, #0x40]
    mrs     r0, cpsr
    orr     r3, r3, #0x80
    bic     r3, r3, #0x20
    msr     cpsr_fsxc, r3
    str     sp, [r1, #0x38]
    str     lr, [r1, #0x3c]
    mrs     r2, spsr
    str     r2, [r1, #0x7c]
    msr     cpsr_fsxc, r0
    bx      lr
}

// Calls the user exception handler in system mode
asm void func_02079aa0(void) {
    stmfd   sp!, {r3, lr}
    ldr     r0, =data_0211444c
    ldr     r0, [r0]
    cmp     r0, #0
    ldmeqfd sp!, {r3, pc}
    mov     r0, sp
    ldr     r1, =0x9f
    msr     cpsr_fsxc, r1
    mov     sp, r0
    bl      OS_EnableProtectionUnit
    ldr     r1, =data_0211444c
    ldr     r0, =data_0211444c
    ldr     r1, [r1, #4]
    ldr     r2, [r0]
    ldr     r0, =data_02114458
    blx     r2
    bl      OS_DisableProtectionUnit
    ldmfd   sp!, {r3, pc}
}

// clang-format on
