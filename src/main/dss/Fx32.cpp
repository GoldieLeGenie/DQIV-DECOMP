#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

namespace dss {

ARM Fx32::Fx32(const Fx32& other)
{
    this->value = other.value;
}

ARM Fx32& Fx32::operator=(fx32 v)
{
    this->value = v;
    return *this;
}

ARM Fx32& Fx32::operator=(const Fx32& other)
{
    this->value = other.value;
    return *this;
}

}

extern "C" {

void func_020870fc(int* p)
{
    *p = 0;
}

void func_02087108(int* p, int v)
{
    *p = v;
}

void func_02087110(int* p, int* src)
{
    *p = (*src) << 12;
}

void func_02087154(int* p, int v)
{
    *p = v << 12;
}

void func_02087160(int* p, int v)
{
    *p = v;
}

void func_0208718c(int* dst, int* src)
{
    *dst = *src;
}

void func_020871e4(int* p, int v)
{
    *p = *p + v;
}

void func_020871f4(int* dst, int* src)
{
    *dst = *dst + *src;
}

void func_02087198(int* dst, int* a, int b)
{
    func_020870fc(dst);
    *dst = *a + b;
}

void func_020871bc(int* dst, int* a, int* b)
{
    func_020870fc(dst);
    *dst = *a + *b;
}

extern int func_020059c0(int);
extern int func_020058bc(int);

}

#pragma thumb off

extern "C" asm void func_02087120(int* p, int* src)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r1, [r1]
    ldr r0, =0x45800000
    bl func_020059c0
    bl func_020058bc
    str r0, [r4]
    mov r0, r4
    ldmia sp!, {r4, pc}
}

extern "C" asm void func_02087168(int* p, int v)
{
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldr r0, =0x45800000
    bl func_020059c0
    bl func_020058bc
    str r0, [r4]
    mov r0, r4
    ldmia sp!, {r4, pc}
}

#pragma thumb on
