/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_020563d0(void);
    void func_0205643c(void);
    void func_0205645c(void);
    void func_020564c8(void);
    void func_020564f0(void);
    void func_02056518(void);
    void func_020565b0(void);
    void func_02056604(void);
    void func_0205661c(void);
    void func_02056644(void);
    void func_020566a8(void);
    void func_020566ac(void);
    void func_020566d8(void);
    void func_020566dc(void);
    void func_02056728(void);
    void func_02056740(void);
    void func_02056754(void);
    void func_02056784(void);
    void func_020567a4(void);
    void func_02056848(void);
    void func_02056898(void);
    void func_020568dc(void);
    void func_02056908(void);
    void func_02056940(void);
    void func_02056960(void);
    void func_02056998(void);
    void func_020569b8(void);
    void func_02056a98(void);
    void _ZN3dss8DssUtils8strcpy_sEPciS1_(void);
    void __cxa_vec_cleanup(void);
    void __cxa_vec_ctor(void);
    void data_020c33d0(void);
    void data_020c33e4(void);
    void data_020c33f0(void);
    void data_020c33f2(void);
    void data_020c3908(void);
    void data_020c3924(void);
    void data_020c39ac(void);
    void func_02036654(void);
    void func_020573c4(void);
    void func_02057400(void);
    void func_02057474(void);
    void func_020574bc(void);
    void func_02086790(void);
    void func_02086794(void);
    void func_02086798(void);
    void func_02086868(void);
    void func_02088258(void);
    void func_020882ec(void);
}

#pragma thumb off

extern "C" asm void func_020563d0(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	ldr r1, =data_020c33e4
	mov r4, r0
	str r1, [r4]
	ldr r12, =func_02036654
	ldr r3, =func_0205643c
	add r0, r4, #0x28
	mov r1, #4
	mov r2, #0x10
	str r12, [sp]
	bl __cxa_vec_ctor
	mov r3, #0
	mvn r2, #0
	mov r0, r3
lbl_0205640c:
	add r1, r4, r3, lsl #2
	str r2, [r1, #8]
	add r3, r3, #1
	str r0, [r1, #0x18]
	cmp r3, #4
	blt lbl_0205640c
	mov r0, r4
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_0205643c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020573c4
	ldr r1, =data_020c39ac
	mov r0, r4
	str r1, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0205645c(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	ldr r1, =data_020c33e4
	mov r4, r0
	str r1, [r4]
	ldr r12, =func_02036654
	ldr r3, =func_0205643c
	add r0, r4, #0x28
	mov r1, #4
	mov r2, #0x10
	str r12, [sp]
	bl __cxa_vec_ctor
	mov r3, #0
	mvn r2, #0
	mov r0, r3
lbl_02056498:
	add r1, r4, r3, lsl #2
	str r2, [r1, #8]
	add r3, r3, #1
	str r0, [r1, #0x18]
	cmp r3, #4
	blt lbl_02056498
	mov r0, r4
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_020564c8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r3, =func_02036654
	add r0, r4, #0x28
	mov r1, #4
	mov r2, #0x10
	bl __cxa_vec_cleanup
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020564f0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r3, =func_02036654
	add r0, r4, #0x28
	mov r1, #4
	mov r2, #0x10
	bl __cxa_vec_cleanup
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02056518(void)
{
	stmdb sp!, {r3, lr}
	mvn r2, #0
	str r2, [r0, #4]
	mov r12, #0
lbl_02056528:
	add r2, r0, r12, lsl #2
	ldr r2, [r2, #8]
	cmp r1, r2
	bne lbl_02056550
	str r12, [r0, #4]
	add r3, r0, #0x18
	ldr r2, [r3, r12, lsl #2]
	add r2, r2, #1
	str r2, [r3, r12, lsl #2]
	b lbl_0205655c
lbl_02056550:
	add r12, r12, #1
	cmp r12, #4
	blt lbl_02056528
lbl_0205655c:
	ldr r3, [r0, #4]
	mvn r2, #0
	cmp r3, r2
	ldmneia sp!, {r3, pc}
	mov lr, #0
lbl_02056570:
	add r12, r0, lr, lsl #2
	ldr r3, [r12, #8]
	cmp r3, r2
	bne lbl_020565a0
	str lr, [r0, #4]
	add r2, r0, #0x18
	str r1, [r12, #8]
	ldr r1, [r2, lr, lsl #2]
	add r1, r1, #1
	str r1, [r2, lr, lsl #2]
	bl func_02056644
	ldmia sp!, {r3, pc}
lbl_020565a0:
	add lr, lr, #1
	cmp lr, #4
	blt lbl_02056570
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020565b0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r6, r0
	mov r5, r1
	mov r4, #0
	mvn r7, #0
lbl_020565c4:
	add r1, r6, r4, lsl #2
	ldr r0, [r1, #8]
	cmp r5, r0
	bne lbl_020565f4
	ldr r0, [r1, #0x18]
	subs r0, r0, #1
	str r0, [r1, #0x18]
	bne lbl_020565f4
	str r4, [r6, #4]
	mov r0, r6
	str r7, [r1, #8]
	bl func_020566ac
lbl_020565f4:
	add r4, r4, #1
	cmp r4, #4
	blt lbl_020565c4
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02056604(void)
{
	ldr r12, =_ZN3dss8DssUtils8strcpy_sEPciS1_
	mov r2, r1
	add r0, r0, #0x68
	mov r1, #0x80
	bx r12
}

extern "C" asm void func_0205661c(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #4]
	mvn r1, #0
	cmp r2, r1
	moveq r0, #0
	ldmeqia sp!, {r3, pc}
	add r0, r0, #0x28
	add r0, r0, r2, lsl #4
	bl func_020574bc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02056644(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #0x80
	mov r4, r0
	ldr r1, [r4, #4]
	add r0, sp, #0
	add r1, r4, r1, lsl #2
	ldr r2, [r1, #8]
	add r1, r4, #0x68
	bl func_02088258
	ldr r0, [r4, #4]
	add r1, r4, #0x28
	add r0, r1, r0, lsl #4
	ldr r12, [r0]
	mov r2, #1
	ldr r12, [r12]
	add r1, sp, #0
	mov r3, r2
	blx r12
	mov r0, r4
	ldr r2, [r0]
	ldr r1, [r4, #4]
	ldr r2, [r2, #4]
	blx r2
	add sp, sp, #0x80
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020566a8(void)
{
	bx lr
}

extern "C" asm void func_020566ac(void)
{
	stmdb sp!, {r4, lr}
	ldr r2, [r0]
	mov r4, r0
	ldr r1, [r4, #4]
	ldr r2, [r2, #8]
	blx r2
	ldr r0, [r4, #4]
	add r1, r4, #0x28
	add r0, r1, r0, lsl #4
	bl func_02057474
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020566d8(void)
{
	bx lr
}

extern "C" asm void func_020566dc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	add r0, r5, #0x28
	add r0, r0, r1, lsl #4
	bl func_020574bc
	mov r1, #1
	mov r4, r0
	bl func_02086798
	ldr r1, [r5, #4]
	add r0, r5, #0xe8
	mov r2, #0x70
	mla r0, r1, r2, r0
	mov r1, r4
	bl func_020882ec
	ldr r0, [r5, #4]
	add r1, r5, #0x28
	add r0, r1, r0, lsl #4
	bl func_02057474
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02056728(void)
{
	add r2, r0, #0xe8
	mov r0, #0x70
	mla r0, r1, r0, r2
	ldr r12, =func_02086868
	bx r12
}

extern "C" asm void func_02056740(void)
{
	ldr r1, [r0, #4]
	add r2, r0, #0xe8
	mov r0, #0x70
	mla r0, r1, r0, r2
	bx lr
}

extern "C" asm void func_02056754(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020573c4
	ldr r1, =data_020c39ac
	add r0, r4, #0x10
	str r1, [r4]
	bl func_020573c4
	ldr r1, =data_020c39ac
	mov r0, r4
	str r1, [r4, #0x10]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02056784(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x10
	bl func_02057400
	mov r0, r4
	bl func_02057400
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020567a4(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	mov r4, r0
	ldr r12, =func_02056784
	ldr r3, =func_02056754
	add r0, r4, #0x1c
	mov r1, #4
	mov r2, #0x20
	str r12, [sp]
	bl __cxa_vec_ctor
	add r0, r4, #0xbc
	bl func_020563d0
	ldr r0, =data_020c33d0
	ldr r2, =func_02086794
	str r0, [r4, #0xbc]
	str r2, [sp]
	ldr r3, =func_02086790
	add r0, r4, #0x1a4
	mov r1, #4
	mov r2, #0x70
	bl __cxa_vec_ctor
	add r0, r4, #0x364
	bl func_0205645c
	mov r3, #0
	mvn r2, #0
	mov r0, r3
lbl_0205680c:
	add r1, r4, r3, lsl #2
	str r2, [r1, #0xc]
	str r2, [r1, #0x9c]
	add r3, r3, #1
	str r0, [r1, #0xac]
	cmp r3, #4
	blt lbl_0205680c
	mov r0, r4
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02056848(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x364
	bl func_020564c8
	ldr r3, =func_02086794
	add r0, r4, #0x1a4
	mov r1, #4
	mov r2, #0x70
	bl __cxa_vec_cleanup
	add r0, r4, #0xbc
	bl func_020564f0
	add r0, r4, #0x1c
	mov r1, #4
	mov r2, #0x20
	ldr r3, =func_02056784
	bl __cxa_vec_cleanup
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02056898(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_02056908
	mov r0, r5
	mov r1, r4
	bl func_02056960
	mov r0, r5
	mov r1, r4
	bl func_020569b8
	ldr r1, [r5, #8]
	mvn r0, #0
	cmp r1, r0
	moveq r0, #0
	addne r0, r5, #0x1c
	addne r0, r0, r1, lsl #5
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020568dc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_02056a98
	mov r0, r5
	mov r1, r4
	bl func_02056940
	mov r0, r5
	mov r1, r4
	bl func_02056998
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02056908(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	ldr r1, =data_020c3908
	add r0, r5, #0xbc
	bl func_02056604
	ldr r0, =data_020c33f0
	mov r1, r4, lsl #2
	ldrsh r1, [r0, r1]
	add r0, r5, #0xbc
	bl func_02056518
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02056940(void)
{
	ldr r2, =data_020c33f0
	mov r1, r1, lsl #2
	ldr r12, =func_020565b0
	ldrsh r1, [r2, r1]
	add r0, r0, #0xbc
	bx r12
}

extern "C" asm void func_02056960(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	ldr r1, =data_020c3924
	add r0, r5, #0x364
	bl func_02056604
	ldr r0, =data_020c33f2
	mov r1, r4, lsl #2
	ldrsh r1, [r0, r1]
	add r0, r5, #0x364
	bl func_02056518
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02056998(void)
{
	ldr r2, =data_020c33f2
	mov r1, r1, lsl #2
	ldr r12, =func_020565b0
	ldrsh r1, [r2, r1]
	add r0, r0, #0x364
	bx r12
}

extern "C" asm void func_020569b8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r5, r0
	mvn r0, #0
	str r0, [r5, #8]
	mov r2, #0
lbl_020569cc:
	add r0, r5, r2, lsl #2
	ldr r0, [r0, #0x9c]
	cmp r1, r0
	bne lbl_020569f4
	str r2, [r5, #8]
	add r1, r5, #0xac
	ldr r0, [r1, r2, lsl #2]
	add r0, r0, #1
	str r0, [r1, r2, lsl #2]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_020569f4:
	add r2, r2, #1
	cmp r2, #4
	blt lbl_020569cc
	mov r4, #0
	mvn r0, #0
lbl_02056a08:
	add r3, r5, r4, lsl #2
	ldr r2, [r3, #0x9c]
	cmp r2, r0
	bne lbl_02056a88
	add r2, r5, #0xac
	str r1, [r3, #0x9c]
	ldr r1, [r2, r4, lsl #2]
	add r0, r5, #0x364
	add r1, r1, #1
	str r1, [r2, r4, lsl #2]
	ldr r1, [r0]
	ldr r1, [r1]
	blx r1
	mov r6, r0
	add r0, r5, #0xbc
	ldr r1, [r0]
	ldr r1, [r1]
	blx r1
	add r1, r5, #0x1c
	add r7, r1, r4, lsl #5
	mov r1, r0
	mov r0, r7
	ldr r2, [r0]
	ldr r2, [r2, #4]
	blx r2
	add r0, r7, #0x10
	ldr r2, [r0]
	mov r1, r6
	ldr r2, [r2, #4]
	blx r2
	str r4, [r5, #8]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02056a88:
	add r4, r4, #1
	cmp r4, #4
	blt lbl_02056a08
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02056a98(void)
{
	stmdb sp!, {r4, lr}
	mov r12, #0
lbl_02056aa0:
	add r3, r0, r12, lsl #2
	ldr r2, [r3, #0x9c]
	cmp r1, r2
	bne lbl_02056af0
	add r2, r0, #0xac
	ldr r1, [r2, r12, lsl #2]
	sub r1, r1, #1
	str r1, [r2, r12, lsl #2]
	ldr r1, [r3, #0xac]
	cmp r1, #0
	ldmneia sp!, {r4, pc}
	add r0, r0, #0x1c
	add r4, r0, r12, lsl #5
	mvn r1, #0
	add r0, r4, #0x10
	str r1, [r3, #0x9c]
	bl func_02057474
	mov r0, r4
	bl func_02057474
	ldmia sp!, {r4, pc}
lbl_02056af0:
	add r12, r12, #1
	cmp r12, #4
	blt lbl_02056aa0
	ldmia sp!, {r4, pc}
}

#pragma thumb on
