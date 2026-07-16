/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0208877c(void);
    void func_020887d0(void);
    void func_02088824(void);
    void func_02088854(void);
    void func_0208885c(void);
    void func_0208888c(void);
    void func_020870fc(void);
    void func_02087154(void);
    void func_02087168(void);
    void func_0208718c(void);
}

#pragma thumb off

extern "C" asm void func_0208877c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	mov r6, r1
	mov r5, r2
	mov r4, r3
	bl func_020870fc
	add r0, r7, #4
	bl func_020870fc
	add r0, r7, #8
	bl func_020870fc
	mov r0, r7
	mov r1, r6
	bl func_02087154
	mov r1, r5
	add r0, r7, #4
	bl func_02087154
	mov r1, r4
	add r0, r7, #8
	bl func_02087154
	mov r0, r7
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020887d0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	mov r6, r1
	mov r5, r2
	mov r4, r3
	bl func_020870fc
	add r0, r7, #4
	bl func_020870fc
	add r0, r7, #8
	bl func_020870fc
	mov r0, r7
	mov r1, r6
	bl func_02087168
	mov r1, r5
	add r0, r7, #4
	bl func_02087168
	mov r1, r4
	add r0, r7, #8
	bl func_02087168
	mov r0, r7
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02088824(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r2
	mov r4, r3
	bl func_0208718c
	mov r1, r5
	add r0, r6, #4
	bl func_0208718c
	mov r1, r4
	add r0, r6, #8
	bl func_0208718c
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02088854(void)
{
	stmia r0, {r1, r2, r3}
	bx lr
}

extern "C" asm void func_0208885c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r2
	mov r4, r3
	bl func_02087168
	mov r1, r5
	add r0, r6, #4
	bl func_02087168
	mov r1, r4
	add r0, r6, #8
	bl func_02087168
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208888c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r2
	mov r4, r3
	bl func_02087154
	mov r1, r5
	add r0, r6, #4
	bl func_02087154
	mov r1, r4
	add r0, r6, #8
	bl func_02087154
	ldmia sp!, {r4, r5, r6, pc}
}

#pragma thumb on
