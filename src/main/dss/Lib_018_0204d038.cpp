/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0204d038(void);
    void func_0204d04c(void);
    void func_0204d084(void);
    void func_0204d0ac(void);
    void func_0204d0b8(void);
    void func_0204d0c4(void);
    void func_0204d0dc(void);
    void data_020f4ec0(void);
    void func_02056898(void);
    void func_020568dc(void);
    void func_02056908(void);
    void func_02056940(void);
    void func_020574bc(void);
    void func_0205a91c(void);
    void func_0205a958(void);
    void func_0205aa24(void);
    void func_0205b1fc(void);
    void func_0205b298(void);
}

#pragma thumb off

extern "C" asm void func_0204d038(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_0205a91c
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0204d04c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_020f4ec0
	str r1, [r4, #0xd30]
	bl func_02056898
	str r0, [r4, #0xd34]
	bl func_020574bc
	ldr r2, [r4, #0xd34]
	mov r1, r0
	mov r0, r4
	add r2, r2, #0x10
	bl func_0205a958
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0204d084(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_0205aa24
	ldr r1, [r4, #0xd30]
	ldr r0, =data_020f4ec0
	bl func_020568dc
	mov r0, #0
	str r0, [r4, #0xd34]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0204d0ac(void)
{
	ldr r12, =func_0205b1fc
	bx r12
}

extern "C" asm void func_0204d0b8(void)
{
	ldr r12, =func_0205b298
	bx r12
}

extern "C" asm void func_0204d0c4(void)
{
	ldr r12, =func_02056908
	mov r1, r0
	ldr r0, =data_020f4ec0
	bx r12
}

extern "C" asm void func_0204d0dc(void)
{
	ldr r12, =func_02056940
	mov r1, r0
	ldr r0, =data_020f4ec0
	bx r12
}

#pragma thumb on
