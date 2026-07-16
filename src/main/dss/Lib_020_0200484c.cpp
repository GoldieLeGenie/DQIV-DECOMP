/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0200484c(void);
}

#pragma thumb off

extern "C" asm void func_0200484c(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	eor lr, r1, r3
	and lr, lr, #0x80000000
	mov r12, r1, lsr #0x14
	mov r1, r1, lsl #0xb
	orr r1, r1, r0, lsr #21
	mov r0, r0, lsl #0xb
	movs r6, r12, lsl #0x15
	cmnne r6, #0x200000
	beq lbl_02004954
	orr r1, r1, #0x80000000
	bic r12, r12, #0x800
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r5, r4, lsl #0x15
	cmnne r5, #0x200000
	beq lbl_0200499c
	orr r3, r3, #0x80000000
	bic r4, r4, #0x800
lbl_020048a0:
	add r12, r4, r12
	umull r5, r4, r0, r2
	umull r7, r6, r0, r3
	adds r4, r7, r4
	adc r6, r6, #0
	umull r7, r0, r1, r2
	adds r4, r7, r4
	adcs r0, r0, r6
	umull r7, r2, r1, r3
	adc r1, r2, #0
	adds r0, r0, r7
	adc r1, r1, #0
	orrs r4, r4, r5
	orrne r0, r0, #1
	cmp r1, #0
	blt lbl_020048ec
	sub r12, r12, #1
	adds r0, r0, r0
	adc r1, r1, r1
lbl_020048ec:
	add r12, r12, #2
	subs r12, r12, #0x400
	bmi lbl_02004a88
	beq lbl_02004a88
	mov r6, r12, lsl #0x14
	cmn r6, #0x100000
	bmi lbl_02004b88
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, r12, lsl #20
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	tst r2, #0x80000000
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004954:
	bics r12, r12, #0x800
	beq lbl_020049b0
	orrs r6, r0, r1, lsl #1
	bne lbl_02004b3c
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r5, r4, lsl #0x15
	beq lbl_02004990
	cmn r5, #0x200000
	bne lbl_02004b28
	orrs r5, r2, r3, lsl #1
	beq lbl_02004b28
	b lbl_02004b3c
lbl_02004990:
	orrs r5, r3, r2
	beq lbl_02004b50
	b lbl_02004b28
lbl_0200499c:
	bics r4, r4, #0x800
	beq lbl_02004a44
	orrs r6, r2, r3, lsl #1
	bne lbl_02004b3c
	b lbl_02004b28
lbl_020049b0:
	orrs r6, r0, r1, lsl #1
	beq lbl_02004a18
	mov r12, #1
	cmp r1, #0
	bne lbl_020049d4
	sub r12, r12, #0x20
	movs r1, r0
	mov r0, #0
	bmi lbl_020049f0
lbl_020049d4:
	clz r6, r1
	movs r1, r1, lsl r6
	rsb r6, r6, #0x20
	orr r1, r1, r0, lsr r6
	rsb r6, r6, #0x20
	mov r0, r0, lsl r6
	sub r12, r12, r6
lbl_020049f0:
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r5, r4, lsl #0x15
	cmnne r5, #0x200000
	beq lbl_0200499c
	orr r3, r3, #0x80000000
	bic r4, r4, #0x800
	b lbl_020048a0
lbl_02004a18:
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r5, r4, lsl #0x15
	beq lbl_02004b9c
	cmn r5, #0x200000
	bne lbl_02004b9c
	orrs r6, r2, r3, lsl #1
	beq lbl_02004b50
	b lbl_02004b3c
lbl_02004a44:
	orrs r5, r2, r3, lsl #1
	beq lbl_02004b9c
	mov r4, #1
	cmp r3, #0
	bne lbl_02004a68
	sub r4, r4, #0x20
	movs r3, r2
	mov r2, #0
	bmi lbl_020048a0
lbl_02004a68:
	clz r6, r3
	movs r3, r3, lsl r6
	rsb r6, r6, #0x20
	orr r3, r3, r2, lsr r6
	rsb r6, r6, #0x20
	mov r2, r2, lsl r6
	sub r4, r4, r6
	b lbl_020048a0
lbl_02004a88:
	cmn r12, #0x34
	beq lbl_02004b20
	bmi lbl_02004b78
	mov r2, r1
	mov r3, r0
	add r4, r12, #0x34
	cmp r4, #0x20
	movge r2, r3
	movge r3, #0
	subge r4, r4, #0x20
	rsb r5, r4, #0x20
	mov r2, r2, lsl r4
	orr r2, r2, r3, lsr r5
	movs r3, r3, lsl r4
	orrne r2, r2, #1
	rsb r12, r12, #0xc
	cmp r12, #0x20
	movge r0, r1
	movge r1, #0
	subge r12, r12, #0x20
	rsb r4, r12, #0x20
	mov r0, r0, lsr r12
	orr r0, r0, r1, lsl r4
	orr r1, lr, r1, lsr r12
	cmp r2, #0
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	tst r2, #0x80000000
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, r5, r6, r7, lr}
	bxeq lr
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b20:
	orr r0, r0, r1, lsl #1
	b lbl_02004b60
lbl_02004b28:
	ldr r1, =0x7FF00000
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b3c:
	mov r1, r3
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b50:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b60:
	movs r2, r0
	mov r1, lr
	mov r0, #0
	addne r0, r0, #1
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b78:
	mov r1, lr
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b88:
	ldr r1, =0x7FF00000
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
lbl_02004b9c:
	mov r1, lr
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, lr}
	bx lr
}

#pragma thumb on
