/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_020883d8(void);
    void func_02088484(void);
    void func_02088544(void);
    void func_02088554(void);
    void func_0208858c(void);
    void func_020885f8(void);
    void func_0208860c(void);
    void func_02088618(void);
    void func_02088648(void);
    void func_02088670(void);
    void func_02088698(void);
    void func_020886d0(void);
    void func_02088708(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void data_020b638c(void);
    void data_020c4974(void);
    void data_02120544(void);
    void func_02061f58(void);
    void func_02061fe8(void);
    void func_02062008(void);
    void func_02062024(void);
    void func_020623cc(void);
    void func_020626a0(void);
    void func_02069030(void);
    void func_02069060(void);
    void func_020690a8(void);
    void func_02069d94(void);
}

#pragma thumb off

extern "C" asm void func_020883d8(void)
{
	cmp r0, #0
	mvneq r0, #0
	bxeq lr
	cmp r1, #0
	mvneq r0, #0
	bxeq lr
	cmp r2, #0
	mvneq r0, #0
	bxeq lr
	ldrsb r3, [r0]
	mov r12, r0
	sub r1, r1, #1
	cmp r3, #0
	beq lbl_02088438
lbl_02088410:
	cmp r1, #0
	bne lbl_02088428
	mov r1, #0
	strb r1, [r0]
	sub r0, r1, #1
	bx lr
lbl_02088428:
	ldrsb r3, [r0, #1]!
	sub r1, r1, #1
	cmp r3, #0
	bne lbl_02088410
lbl_02088438:
	ldrsb r3, [r2]
	cmp r3, #0
	beq lbl_02088474
lbl_02088444:
	cmp r1, #0
	bne lbl_0208845c
	mov r0, #0
	strb r0, [r12]
	sub r0, r0, #1
	bx lr
lbl_0208845c:
	ldrsb r3, [r2]
	sub r1, r1, #1
	strb r3, [r0], #1
	ldrsb r3, [r2, #1]!
	cmp r3, #0
	bne lbl_02088444
lbl_02088474:
	mov r1, #0
	strb r1, [r0]
	mov r0, r1
	bx lr
}

extern "C" asm void func_02088484(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r4, [r0, #8]
	ldr lr, [r0, #0xc]
	ldr r5, [r0, #0x10]
	ldr r6, [r0, #0x14]
	ldr r7, [r0, #0x18]
	ldr r3, =data_020c4974
	mvn r12, #0
	ldr r2, =data_02120544
	mov r8, #0
	cmp r4, r1
	str r12, [r3]
	str r8, [r2]
	str r12, [r3, #4]
	movhi r0, r8
	ldmhiia sp!, {r4, r5, r6, r7, r8, pc}
	cmp lr, r1
	movcc r0, r8
	ldmccia sp!, {r4, r5, r6, r7, r8, pc}
	cmp r5, #0
	sub r1, r1, r4
	add r4, r0, #0x20
	bls lbl_02088534
lbl_020884ec:
	ldrh r2, [r4]
	cmp r2, r1
	bne lbl_02088524
	ldrh r3, [r4, #4]
	add r2, r6, r7
	ldrh lr, [r4, #2]
	add r12, r2, r3, lsl #2
	ldr r3, =data_020c4974
	ldr r2, =data_02120544
	add r0, r0, r12
	str r1, [r3]
	str r0, [r2]
	str lr, [r3, #4]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02088524:
	add r8, r8, #1
	cmp r8, r5
	add r4, r4, #6
	bcc lbl_020884ec
lbl_02088534:
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02088544(void)
{
	mov r1, #0
	str r1, [r0, #8]
	str r1, [r0, #0xc]
	bx lr
}

extern "C" asm void func_02088554(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r2
	bl func_02069030
	mov r0, r5
	mov r1, #0x25
	bl func_02069060
	ldr r1, =0x0000FFFF
	cmp r0, r1
	ldrne r1, [r5]
	strneh r0, [r1, #2]
	str r4, [r5, #0xc]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0208858c(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	mov r4, r0
	cmp r1, #0
	bne lbl_020885d0
	ldrh r1, [sp, #0x14]
	bl func_02069060
	ldr r2, =0x0000FFFF
	mov r1, r0
	cmp r1, r2
	ldreq r0, [r4]
	ldreqh r1, [r0, #2]
	mov r0, r4
	bl func_020690a8
	add sp, sp, #8
	ldrsb r0, [r0, #2]
	ldmia sp!, {r4, pc}
lbl_020885d0:
	ldr lr, [sp, #0x10]
	ldrh r12, [sp, #0x14]
	mov r0, r1
	str lr, [sp]
	mov r1, r4
	str r12, [sp, #4]
	bl func_02069d94
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020885f8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02061f58
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208860c(void)
{
	ldr r12, =func_02061f58
	bx r12
}

extern "C" asm void func_02088618(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	mov lr, r1
	mov r12, r4
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia lr, {r0, r1, r2, r3}
	stmia r12, {r0, r1, r2, r3}
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02088648(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_020885f8
	mov r0, r5
	mov r1, r4
	mov r2, r6
	bl func_020623cc
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02088670(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl _ZN3dss11Fx32Vector3C1Ev
	mov r0, r4
	mov r1, r5
	mov r2, r6
	bl func_020626a0
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02088698(void)
{
	stmdb sp!, {r3, lr}
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	mov r1, r1, asr #4
	mov r2, r1, lsl #1
	add r1, r2, #1
	ldr r3, =data_020b638c
	mov r12, r2, lsl #1
	mov r2, r1, lsl #1
	ldrsh r1, [r3, r12]
	ldrsh r2, [r3, r2]
	bl func_02061fe8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020886d0(void)
{
	stmdb sp!, {r3, lr}
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	mov r1, r1, asr #4
	mov r2, r1, lsl #1
	add r1, r2, #1
	ldr r3, =data_020b638c
	mov r12, r2, lsl #1
	mov r2, r1, lsl #1
	ldrsh r1, [r3, r12]
	ldrsh r2, [r3, r2]
	bl func_02062008
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02088708(void)
{
	stmdb sp!, {r3, lr}
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	mov r1, r1, asr #4
	mov r2, r1, lsl #1
	add r1, r2, #1
	ldr r3, =data_020b638c
	mov r12, r2, lsl #1
	mov r2, r1, lsl #1
	ldrsh r1, [r3, r12]
	ldrsh r2, [r3, r2]
	bl func_02062024
	ldmia sp!, {r3, pc}
}

#pragma thumb on
