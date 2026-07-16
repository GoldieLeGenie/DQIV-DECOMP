/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02036058(void);
    void func_020360a8(void);
    void func_020360dc(void);
    void func_020360f8(void);
    void func_02036104(void);
    void func_02036124(void);
    void func_02036158(void);
    void func_0203617c(void);
    void func_020361b8(void);
    void func_020361e4(void);
    void func_020361e8(void);
    void func_020361fc(void);
    void func_02036200(void);
    void func_02036214(void);
    void func_0203624c(void);
    void func_02036260(void);
    void func_02036280(void);
    void func_020362a8(void);
    void func_0203632c(void);
    void func_0203635c(void);
    void func_020363a0(void);
    void func_020363b8(void);
    void func_02036414(void);
    void func_0203641c(void);
    void func_0203644c(void);
    void func_0203645c(void);
    void func_02036484(void);
    void func_020364c4(void);
    void func_0203650c(void);
    void func_02036588(void);
    void func_020365c0(void);
    void func_020365d4(void);
    void func_020365e4(void);
    void func_02036614(void);
    void func_02036628(void);
    void func_0203663c(void);
    void func_02036644(void);
    void func_0203664c(void);
    void func_02036654(void);
    void func_02036668(void);
    void func_02036688(void);
    void func_0203669c(void);
    void func_0203673c(void);
    void func_02036750(void);
    void func_02036784(void);
    void func_02036794(void);
    void func_020367a8(void);
    void func_020367bc(void);
    void func_020367e8(void);
    void func_02036804(void);
    void func_02036818(void);
    void func_02036850(void);
    void func_02036868(void);
    void func_02036870(void);
    void _ZN3dss4Fx32C1ERKS0_(void);
    void __cxa_vec_cleanup(void);
    void __cxa_vec_ctor(void);
    void data_020c1244(void);
    void data_020c125c(void);
    void data_020c1290(void);
    void data_020c12c4(void);
    void data_020c12f0(void);
    void data_020c130c(void);
    void data_020c39ac(void);
    void data_020ef7c8(void);
    void data_02116ce8(void);
    void func_0203475c(void);
    void func_0203476c(void);
    void func_02034770(void);
    void func_020347b4(void);
    void func_020347b8(void);
    void func_020348f4(void);
    void func_02034934(void);
    void func_020573c4(void);
    void func_020573fc(void);
    void func_02057400(void);
    void func_02057474(void);
    void func_020574bc(void);
    void func_02058768(void);
    void func_0205887c(void);
    void func_02058a2c(void);
    void func_02058af4(void);
    void func_02058bcc(void);
    void func_02058f00(void);
    void func_02058f20(void);
    void func_02058f70(void);
    void func_02058f80(void);
    void func_02059300(void);
    void func_02059328(void);
    void func_0205a02c(void);
    void func_0205a03c(void);
    void func_0205a0cc(void);
    void func_0205a0e8(void);
    void func_0205b3d0(void);
    void func_0205b44c(void);
    void func_0205b648(void);
    void func_0205cafc(void);
    void func_0207ebd4(void);
    void func_0207f8ac(void);
    void func_0207f8c4(void);
    void func_0207f8dc(void);
    void func_02086798(void);
    void func_02086868(void);
    void func_020870fc(void);
    void func_0208718c(void);
    void func_02088308(void);
    void func_0208877c(void);
    void func_02088a28(void);
}

#pragma thumb off

extern "C" asm void func_02036058(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	mov r4, r0
	bl func_0203475c
	ldr r1, =data_020c1244
	add r0, r4, #8
	ldr r12, =func_02036688
	str r1, [r4]
	ldr r3, =func_02036668
	add r0, r0, #0x800
	mov r1, #5
	mov r2, #0x14
	str r12, [sp]
	bl __cxa_vec_ctor
	mov r0, r4
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_020360a8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #8
	ldr r3, =func_02036688
	add r0, r0, #0x800
	mov r1, #5
	mov r2, #0x14
	bl __cxa_vec_cleanup
	mov r0, r4
	bl func_0203476c
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020360dc(void)
{
	ldr r1, =data_020ef7c8
	mov r2, #5
	ldr r12, =func_02034770
	str r2, [r1]
	bx r12
}

extern "C" asm void func_020360f8(void)
{
	ldr r12, =func_020347b4
	bx r12
}

extern "C" asm void func_02036104(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020347b8
	add r1, r4, #8
	add r2, r1, #0x800
	mov r1, #0x14
	mla r0, r1, r0, r2
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036124(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	mov r5, r1
	bl func_020348f4
	add r1, r4, #8
	mov r4, r0
	add r1, r1, #0x800
	mov r0, #0x14
	mla r0, r4, r0, r1
	mov r1, r5
	bl func_0203669c
	mov r0, r4
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02036158(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02034934
	add r1, r4, #8
	add r2, r1, #0x800
	mov r1, #0x14
	mla r0, r1, r0, r2
	bl func_02036750
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203617c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	add r0, r0, #8
	mov r4, #0
	mov r5, r4
	add r6, r0, #0x800
lbl_02036190:
	mov r0, r6
	bl func_02036850
	cmp r0, #0
	add r5, r5, #1
	addeq r4, r4, #1
	cmp r5, #5
	add r6, r6, #0x14
	bcc lbl_02036190
	mov r0, r4
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020361b8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, =data_020c12c4
	add r0, r4, #8
	str r1, [r4]
	bl func_020870fc
	mov r1, #0
	mov r0, r4
	str r1, [r4, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020361e4(void)
{
	bx lr
}

extern "C" asm void func_020361e8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_0207f8ac
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020361fc(void)
{
	bx lr
}

extern "C" asm void func_02036200(void)
{
	ldr r0, [r0, #4]
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	bx lr
}

extern "C" asm void func_02036214(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020361b8
	ldr r1, =data_020c125c
	add r0, r4, #0x10
	str r1, [r4]
	bl func_0205a02c
	mov r1, #0
	add r0, r4, #0x230
	str r1, [r4, #0x20]
	bl func_0205a0e8
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203624c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02058f00
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036260(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x230
	bl func_02058f00
	mov r0, r4
	bl func_020361fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036280(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x230
	bl func_02058f00
	mov r0, r4
	bl func_020361fc
	mov r0, r4
	bl func_0207f8ac
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020362a8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	mov r0, r1
	str r1, [r4, #4]
	bl func_02036794
	str r0, [r4, #0xc]
	ldr r0, [r4, #4]
	bl func_020367a8
	mov r1, r0
	add r0, r4, #0x230
	bl func_02058f20
	ldr r1, [r4, #0xc]
	add r0, r4, #0x230
	bl func_02058f70
	mov r0, #3
	str r0, [r4, #0x2cc]
	ldr r0, [r4, #4]
	bl func_020367e8
	cmp r0, #0
	beq lbl_02036320
	ldr r0, [r4, #4]
	bl func_020367bc
	mov r1, r0
	add r0, r4, #0x10
	bl func_0205a03c
	ldr r1, [r4, #0xc]
	add r0, r4, #0x10
	str r1, [r4, #0x20]
	bl func_0205a0cc
	str r0, [r4, #0x24]
lbl_02036320:
	mov r0, #0x1000
	str r0, [r4, #8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203632c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02036200
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	add r0, r4, #0x10
	bl func_0205b648
	add r0, r4, #0x230
	bl func_02058f80
	mov r0, #0
	str r0, [r4, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203635c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x230
	ldr r1, [r0]
	ldr r1, [r1, #0x14]
	blx r1
	add r0, r4, #0x230
	ldr r1, [r0]
	ldr r1, [r1, #0x18]
	blx r1
	ldr r0, [r4, #4]
	bl func_020367e8
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	add r0, r4, #0x10
	bl func_0205b44c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020363a0(void)
{
	stmdb sp!, {r3, lr}
	add r0, r0, #0x230
	ldr r2, [r0]
	ldr r2, [r2]
	blx r2
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020363b8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x18
	mov r4, r1
	mov r1, #1
	mov r5, r0
	add r0, sp, #0xc
	mov r2, r1
	mov r3, r1
	bl func_0208877c
	add r0, sp, #0
	add r1, sp, #0xc
	mov r2, r4
	bl func_02088a28
	add r0, r5, #0x230
	ldr r2, [r0]
	add r1, sp, #0
	ldr r2, [r2, #8]
	blx r2
	mov r1, r4
	add r0, r5, #8
	bl func_0208718c
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02036414(void)
{
	str r1, [r0, #0x2cc]
	bx lr
}

extern "C" asm void func_0203641c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x230
	mov r1, #0
	bl func_02059300
	ldr r0, [r4, #4]
	bl func_020367e8
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	add r0, r4, #0x10
	bl func_0205b3d0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203644c(void)
{
	ldr r12, =func_02059328
	add r0, r0, #0x230
	bx r12
}

extern "C" asm void func_0203645c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020361b8
	ldr r1, =data_020c1290
	add r0, r4, #0xc
	str r1, [r4]
	bl func_0205cafc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036484(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x308
	ldr r3, =func_020573fc
	add r0, r0, #0x800
	mov r1, #6
	mov r2, #0x10
	bl __cxa_vec_cleanup
	add r0, r4, #0x2f8
	add r0, r0, #0x800
	bl func_020573fc
	mov r0, r4
	bl func_020361fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020364c4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x308
	ldr r3, =func_020573fc
	add r0, r0, #0x800
	mov r1, #6
	mov r2, #0x10
	bl __cxa_vec_cleanup
	add r0, r4, #0x2f8
	add r0, r0, #0x800
	bl func_020573fc
	mov r0, r4
	bl func_020361fc
	mov r0, r4
	bl func_0207f8ac
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203650c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r2
	mov r0, r1
	str r1, [r6, #4]
	mov r4, #0
	bl func_02036804
	mov r1, r0
	mov r2, r5
	add r0, r6, #0xc
	bl func_02058768
	mov r5, r4
lbl_0203653c:
	ldr r0, [r6, #4]
	mov r1, r4
	bl func_02036818
	cmp r0, #0
	beq lbl_02036570
	ldr r0, [r6, #4]
	mov r1, r4
	bl func_02036818
	mov r1, r0
	mov r2, r4
	add r0, r6, #0xc
	bl func_0205887c
	add r4, r4, #1
lbl_02036570:
	add r5, r5, #1
	cmp r5, #4
	blt lbl_0203653c
	mov r0, #0x1000
	str r0, [r6, #8]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02036588(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_02036200
	cmp r0, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	add r0, r5, #0xc
	ldr r2, [r0]
	mov r1, r4
	ldr r2, [r2, #0xc]
	blx r2
	mov r0, #0
	str r0, [r5, #4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020365c0(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0, #0xc]!
	ldr r1, [r1, #8]
	blx r1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020365d4(void)
{
	ldr r12, =func_02058bcc
	add r0, r0, #0xc
	bx r12
}

extern "C" asm void func_020365e4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	add r0, sp, #0
	mov r4, r1
	bl _ZN3dss4Fx32C1ERKS0_
	add r1, sp, #0
	add r0, r5, #0xc
	bl func_02058af4
	mov r1, r4
	add r0, r5, #8
	bl func_0208718c
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02036614(void)
{
	ldr r12, =func_02058a2c
	add r0, r0, #0xc
	mov r1, #0
	bx r12
}

extern "C" asm void func_02036628(void)
{
	ldr r0, [r0, #0xc34]
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	bx lr
}

extern "C" asm void func_0203663c(void)
{
	str r1, [r0, #0xc40]
	bx lr
}

extern "C" asm void func_02036644(void)
{
	mov r0, #1
	bx lr
}

extern "C" asm void func_0203664c(void)
{
	mov r0, #0
	bx lr
}

extern "C" asm void func_02036654(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02057400
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036668(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020573c4
	ldr r1, =data_020c39ac
	mov r0, r4
	str r1, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036688(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02057400
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203669c(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #0x80
	ldr r2, =0x00002710
	mov r3, r1
	mov r4, r0
	cmp r3, r2
	add r0, sp, #0
	bge lbl_020366cc
	ldr r2, =data_020c12f0
	mov r1, #0x80
	bl func_02088308
	b lbl_020366e0
lbl_020366cc:
	rsb r1, r2, #0
	add r3, r3, r1
	ldr r2, =data_020c130c
	mov r1, #0x80
	bl func_02088308
lbl_020366e0:
	mov r0, r4
	ldr r12, [r0]
	mov r2, #1
	ldr r12, [r12]
	add r1, sp, #0
	mov r3, r2
	blx r12
	mov r0, r4
	bl func_020574bc
	mov r1, #0
	bl func_0207f8dc
	ldr r0, [r0]
	cmp r0, #0
	addne sp, sp, #0x80
	str r0, [r4, #0x10]
	ldmneia sp!, {r4, pc}
	mov r0, r4
	bl func_0203673c
	add sp, sp, #0x80
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203673c(void)
{
	stmdb sp!, {r3, lr}
	bl func_02036794
	mov r1, #0
	bl func_02086798
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02036750(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02036850
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #0x10]
	cmp r0, #0
	bne lbl_02036778
	mov r0, r4
	bl func_02036784
lbl_02036778:
	mov r0, r4
	bl func_02057474
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02036784(void)
{
	stmdb sp!, {r3, lr}
	bl func_02036794
	bl func_02086868
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02036794(void)
{
	stmdb sp!, {r3, lr}
	bl func_020574bc
	mov r1, #1
	bl func_0207f8dc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020367a8(void)
{
	stmdb sp!, {r3, lr}
	bl func_020574bc
	mov r1, #2
	bl func_0207f8dc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020367bc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020367e8
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	mov r0, r4
	bl func_020574bc
	mov r1, #3
	bl func_0207f8dc
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020367e8(void)
{
	stmdb sp!, {r3, lr}
	bl func_020574bc
	bl func_0207f8c4
	cmp r0, #3
	movgt r0, #1
	movle r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02036804(void)
{
	stmdb sp!, {r3, lr}
	bl func_020574bc
	mov r1, #1
	bl func_0207f8dc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02036818(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	bl func_020574bc
	bl func_0207f8c4
	add r1, r4, #2
	cmp r0, r1
	movle r0, #0
	ldmleia sp!, {r3, r4, r5, pc}
	mov r0, r5
	bl func_020574bc
	add r1, r4, #2
	bl func_0207f8dc
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02036850(void)
{
	stmdb sp!, {r3, lr}
	bl func_020574bc
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02036868(void)
{
	ldr r0, [r0, #0x10]
	bx lr
}

extern "C" asm void func_02036870(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #0x100
	ldr r2, =data_020c130c
	mov r3, r0
	add r0, sp, #0
	mov r1, #0x80
	bl func_02088308
	ldr r0, =data_02116ce8
	add r1, sp, #0
	bl func_0207ebd4
	add sp, sp, #0x100
	ldmia sp!, {r3, pc}
}

#pragma thumb on
