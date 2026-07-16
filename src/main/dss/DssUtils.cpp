#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

extern "C" {
    void func_0207c338(void);
    void func_0207c23c(void);
    void func_0207c360(void);
    void func_0207c2d0(void);
    void func_0207c384(void);
    void func_0207c3b0(void);
    void func_02003670(void);
    void* func_02007abc(void* dst, int c, int n);
    void* func_02007a0c(void* dst, void* src, int n);
    int func_02003528(char* a, char* b);

    void func_02088280(void);
    void func_0208828c(void);
    void func_02088298(void);
    void func_020882a4(void);
    int func_020882b0(const char* a, const char* b);
    void func_020882bc(void);
    void func_020882c8(void);
    void* func_020882d4(void* dst, int c, int n);
    void* func_020882ec(void* dst, void* src, int n);
    int func_02088308(char* dest, int size, char* fmt, ...);
    int func_020031e8(char* dest, int size, char* fmt, void* va);
}

#pragma thumb off

extern "C" asm void func_02088280(void)
{
    ldr r12, =func_0207c338
    bx r12
}

extern "C" asm void func_0208828c(void)
{
    ldr r12, =func_0207c23c
    bx r12
}

extern "C" asm void func_02088298(void)
{
    ldr r12, =func_0207c360
    bx r12
}

extern "C" asm void func_020882a4(void)
{
    ldr r12, =func_0207c2d0
    bx r12
}

extern "C" asm int func_020882b0(const char* a, const char* b)
{
    ldr r12, =func_0207c384
    bx r12
}

extern "C" asm void func_020882bc(void)
{
    ldr r12, =func_0207c3b0
    bx r12
}

extern "C" asm void func_020882c8(void)
{
    ldr r12, =func_02003670
    bx r12
}

#pragma thumb on

ARM void* func_020882d4(void* dst, int c, int n)
{
    void* r;
    c = c & 0xFF;
    r = dst;
    func_02007abc(dst, c, n);
    return r;
}

ARM void* func_020882ec(void* dst, void* src, int n)
{
    void* r = dst;
    func_02007a0c(src, dst, n);
    return r;
}

#pragma thumb off
extern "C" asm int func_02088308(char* dest, int size, char* fmt, ...)
{
    stmdb sp!, {r0, r1, r2, r3}
    stmdb sp!, {r3, r4, r5, lr}
    add r3, sp, #0x18
    bic r3, r3, #0x3
    ldr r2, [sp, #0x18]
    mov r4, r1
    add r3, r3, #0x4
    mov r5, r0
    bl func_020031e8
    cmp r0, r4
    bge L_fail
    mvn r1, #0x0
    cmp r0, r1
    ldmneia sp!, {r3, r4, r5, lr}
    addne sp, sp, #0x10
    bxne lr
L_fail:
    mov r0, #0x0
    strb r0, [r5, #0x0]
    sub r0, r0, #0x1
    ldmia sp!, {r3, r4, r5, lr}
    add sp, sp, #0x10
    bx lr
}
#pragma thumb on

ARM int dss::DssUtils::strcpy_s(char* dest, int size, char* src)
{
    if (dest == 0) return -1;
    if (size == 0) return -1;
    if (src == 0) return -1;

    size = size - 1;
    char* p = dest;

    while (*src != '\0') {
        if (size == 0) {
            *p = '\0';
            return -1;
        }

        size--;
        *dest++ = *src++;
    }

    *dest = '\0';
    return 0;
}
