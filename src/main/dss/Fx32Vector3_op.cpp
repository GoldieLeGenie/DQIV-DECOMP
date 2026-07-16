#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

extern "C" void func_0208718c(void* dst, void* src);

#pragma thumb off
namespace dss {
extern "C" asm Fx32Vector3& Fx32Vector3::operator=(const Fx32Vector3& o)
{
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    mov r4, r1
    bl func_0208718c
    add r0, r5, #0x4
    add r1, r4, #0x4
    bl func_0208718c
    add r0, r5, #0x8
    add r1, r4, #0x8
    bl func_0208718c
    ldmia sp!, {r3, r4, r5, pc}
}
}
#pragma thumb on
