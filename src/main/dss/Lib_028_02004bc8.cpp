/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void pad_02004bb0(void);
    void func_02004bc8(void);
    void func_02004f7c(void);
    void func_02005198(void);
    void func_020051a0(void);
    void func_02005238(void);
    void func_020052d4(void);
    void func_02005360(void);
    void func_020053bc(void);
    void func_02005418(void);
    void func_020044b8(void);
    void func_02005bb8(void);
}

#pragma thumb off

extern "C" asm void pad_02004bb0(void)
{
	dcd 0xE0211003
	dcd 0xE0213003
	dcd 0xE0211003
	dcd 0xE0200002
	dcd 0xE0202002
	dcd 0xE0200002
}

extern "C" asm void func_02004bc8(void)
{
	stmdb sp!, {r4, lr}
	eors r12, r1, r3
	eormi r3, r3, #0x80000000
	bmi func_020044b8
	subs r12, r0, r2
	sbcs lr, r1, r3
	bcs lbl_02004bf8
	eor lr, lr, #0x80000000
	adds r2, r2, r12
	adc r3, r3, lr
	subs r0, r0, r12
	sbc r1, r1, lr
lbl_02004bf8:
	mov lr, #0x80000000
	mov r12, r1, lsr #0x14
	orr r1, lr, r1, lsl #11
	orr r1, r1, r0, lsr #21
	mov r0, r0, lsl #0xb
	movs r4, r12, lsl #0x15
	cmnne r4, #0x200000
	beq lbl_02004dfc
	mov r4, r3, lsr #0x14
	orr r3, lr, r3, lsl #11
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs lr, r4, lsl #0x15
	beq lbl_02004e44
lbl_02004c30:
	subs r4, r12, r4
	beq lbl_02004cd8
	cmp r4, #0x20
	ble lbl_02004c6c
	cmp r4, #0x38
	movge r4, #0x3f
	sub r4, r4, #0x20
	rsb lr, r4, #0x20
	orrs lr, r2, r3, lsl lr
	mov r2, r3, lsr r4
	orrne r2, r2, #1
	subs r0, r0, r2
	sbcs r1, r1, #0
	bmi lbl_02004c94
	b lbl_02004d84
lbl_02004c6c:
	rsb lr, r4, #0x20
	movs lr, r2, lsl lr
	rsb lr, r4, #0x20
	mov r2, r2, lsr r4
	orr r2, r2, r3, lsl lr
	mov r3, r3, lsr r4
	orrne r2, r2, #1
	subs r0, r0, r2
	sbcs r1, r1, r3
	bpl lbl_02004d84
lbl_02004c94:
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	mov r1, r1, lsr #0xc
	orr r1, r1, r12, lsl #20
	tst r2, #0x80000000
	ldmeqia sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, lr}
	bxeq lr
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004cd8:
	subs r0, r0, r2
	sbc r1, r1, r3
	orrs lr, r1, r0
	beq lbl_02004f68
	mov lr, r12, lsl #0x14
	and lr, lr, #0x80000000
	bic r12, r12, #0x800
	cmp r1, #0
	bmi lbl_02004d60
	bne lbl_02004d10
	sub r12, r12, #0x20
	movs r1, r0
	mov r0, #0
	bmi lbl_02004d2c
lbl_02004d10:
	clz r4, r1
	movs r1, r1, lsl r4
	rsb r4, r4, #0x20
	orr r1, r1, r0, lsr r4
	rsb r4, r4, #0x20
	mov r0, r0, lsl r4
	sub r12, r12, r4
lbl_02004d2c:
	cmp r12, #0
	bgt lbl_02004d68
	rsb r12, r12, #0xc
	cmp r12, #0x20
	movge r0, r1
	movge r1, #0
	subge r12, r12, #0x20
	rsb r4, r12, #0x20
	mov r0, r0, lsr r12
	orr r0, r0, r1, lsl r4
	orr r1, lr, r1, lsr r12
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004d60:
	cmp r1, #0
	subges r12, r12, #1
lbl_02004d68:
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, r12, lsl #20
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004d84:
	mov lr, r12, lsl #0x14
	and lr, lr, #0x80000000
	bic r12, r12, #0x800
	cmp r1, #0
	bne lbl_02004da8
	sub r12, r12, #0x20
	movs r1, r0
	mov r0, #0
	bmi lbl_02004dc4
lbl_02004da8:
	clz r4, r1
	movs r1, r1, lsl r4
	rsb r4, r4, #0x20
	orr r1, r1, r0, lsr r4
	rsb r4, r4, #0x20
	mov r0, r0, lsl r4
	sub r12, r12, r4
lbl_02004dc4:
	cmp r12, #0
	orrgt r12, r12, lr, lsr #20
	bgt lbl_02004c94
	rsb r12, r12, #0xc
	cmp r12, #0x20
	movge r0, r1
	movge r1, #0
	subge r12, r12, #0x20
	rsb r4, r12, #0x20
	mov r0, r0, lsr r12
	orr r0, r0, r1, lsl r4
	orr r1, lr, r1, lsr r12
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004dfc:
	cmp r12, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bics r12, r12, #0x800
	beq lbl_02004e68
	orrs r4, r0, r1, lsl #1
	bne lbl_02004f44
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	beq lbl_02004f30
	cmn r4, #0x200000
	bne lbl_02004f30
	orrs r4, r2, r3, lsl #1
	beq lbl_02004f58
	b lbl_02004f44
lbl_02004e44:
	cmp r4, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bic r12, r12, #0x800
	bics r4, r4, #0x800
	beq lbl_02004ee0
	orrs r4, r2, r3, lsl #1
	bne lbl_02004f44
	b lbl_02004f30
lbl_02004e68:
	orrs r4, r0, r1, lsl #1
	beq lbl_02004ea8
	mov r12, #1
	bic r1, r1, #0x80000000
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	cmnne r4, #0x200000
	mov r4, r4, lsr #0x15
	orr r4, r4, lr, lsr #20
	beq lbl_02004e44
	orr r3, r3, #0x80000000
	orr r12, r12, lr, lsr #20
	b lbl_02004c30
lbl_02004ea8:
	mov r12, r3, lsr #0x14
	mov r1, r3, lsl #0xb
	orr r1, r1, r2, lsr #21
	mov r0, r2, lsl #0xb
	movs r4, r12, lsl #0x15
	beq lbl_02004ed4
	cmn r4, #0x200000
	bne lbl_02004efc
	orrs r4, r0, r1, lsl #1
	bne lbl_02004f48
	b lbl_02004f30
lbl_02004ed4:
	orrs r4, r0, r1, lsl #1
	beq lbl_02004f68
	b lbl_02004efc
lbl_02004ee0:
	orrs r4, r2, r3, lsl #1
	beq lbl_02004f0c
	mov r4, #1
	bic r3, r3, #0x80000000
	orr r12, r12, lr, lsr #20
	orr r4, r4, lr, lsr #20
	b lbl_02004c30
lbl_02004efc:
	mov r1, r3
	mov r0, r2
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004f0c:
	cmp r1, #0
	subges r12, r12, #1
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, r12, lsl #20
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004f30:
	ldr r1, =0x7FF00000
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004f44:
	mov r1, r3
lbl_02004f48:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004f58:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004f68:
	mov r1, #0
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr
}

extern "C" asm void func_02004f7c(void)
{
	eors r2, r0, r1
	eormi r1, r1, #0x80000000
	bmi func_02005bb8
	subs r12, r0, r1
	subcc r0, r0, r12
	addcc r1, r1, r12
	mov r2, #0x80000000
	mov r3, r0, lsr #0x17
	orr r0, r2, r0, lsl #8
	ands r12, r3, #0xff
	cmpne r12, #0xff
	beq lbl_0200501c
	mov r12, r1, lsr #0x17
	orr r1, r2, r1, lsl #8
	ands r2, r12, #0xff
	beq lbl_0200505c
lbl_02004fbc:
	subs r12, r3, r12
	beq lbl_02004fd4
	rsb r2, r12, #0x20
	movs r2, r1, lsl r2
	mov r1, r1, lsr r12
	orrne r1, r1, #1
lbl_02004fd4:
	adds r0, r0, r1
	bcc lbl_02004ff4
	and r1, r0, #1
	orr r0, r1, r0, rrx
	add r3, r3, #1
	and r2, r3, #0xff
	cmp r2, #0xff
	beq lbl_02005164
lbl_02004ff4:
	ands r1, r0, #0xff
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
lbl_0200501c:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	ands r3, r3, #0xff
	beq lbl_02005080
	movs r0, r0, lsl #1
	bne lbl_02005190
	mov r12, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands r12, r12, #0xff
	beq lbl_02005184
	cmp r12, #0xff
	blt lbl_02005184
	cmp r1, #0
	beq lbl_02005184
	b lbl_02005190
lbl_0200505c:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	and r3, r3, #0xff
	ands r12, r12, #0xff
	beq lbl_020050dc
lbl_02005074:
	movs r1, r1, lsl #1
	bne lbl_02005190
	b lbl_02005184
lbl_02005080:
	movs r0, r0, lsl #1
	beq lbl_020050b8
	mov r3, #1
	mov r0, r0, lsr #1
	mov r12, r1, lsr #0x17
	mov r1, r1, lsl #8
	ands r12, r12, #0xff
	beq lbl_020050dc
	cmp r12, #0xff
	beq lbl_02005074
	orr r1, r1, #0x80000000
	orr r3, r3, r2, lsr #23
	orr r12, r12, r2, lsr #23
	b lbl_02004fbc
lbl_020050b8:
	mov r3, r1, lsr #0x17
	mov r0, r1, lsl #9
	ands r3, r3, #0xff
	beq lbl_02005144
	cmp r3, #0xff
	blt lbl_02005144
	cmp r0, #0
	beq lbl_02005184
	b lbl_0200517c
lbl_020050dc:
	movs r1, r1, lsl #1
	beq lbl_0200514c
	mov r1, r1, lsr #1
	mov r12, #1
	orr r3, r3, r2, lsr #23
	orr r12, r12, r2, lsr #23
	cmp r0, #0
	bmi lbl_02004fbc
	adds r0, r0, r1
	bcc lbl_02005110
	and r1, r0, #1
	orr r0, r1, r0, rrx
	add r12, r12, #1
lbl_02005110:
	cmp r0, #0
	subge r12, r12, #1
	ands r1, r0, #0xff
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r12, lsl #23
	bxeq lr
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
lbl_02005144:
	mov r0, r1
	bx lr
lbl_0200514c:
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
lbl_02005164:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
lbl_0200517c:
	mvn r0, #0x80000000
	bx lr
lbl_02005184:
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
lbl_02005190:
	mvn r0, #0x80000000
	bx lr
}

extern "C" asm void func_02005198(void)
{
	mvn r0, #0x80000000
	bx lr
}

extern "C" asm void func_020051a0(void)
{
	mov r12, #0x200000
	cmn r12, r1, lsl #1
	bcs lbl_02005214
	cmn r12, r3, lsl #1
	bcs lbl_02005228
lbl_020051b4:
	orrs r12, r3, r1
	bmi lbl_020051e4
	cmp r1, r3
	cmpeq r0, r2
	movhi r0, #1
	movls r0, #0
	bx lr
lbl_020051d0:
	mov r0, #0
	mrs r12, cpsr
	bic r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
lbl_020051e4:
	orr r12, r0, r12, lsl #1
	orrs r12, r12, r2
	moveq r0, #0
	mrs r12, cpsr
	bic r12, r12, #0x20000000
	msr cpsr_f, r12
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	movhi r0, #1
	movls r0, #0
	bx lr
lbl_02005214:
	bne lbl_020051d0
	cmp r0, #0
	bhi lbl_020051d0
	cmn r12, r3, lsl #1
	bcc lbl_020051b4
lbl_02005228:
	bne lbl_020051d0
	cmp r2, #0
	bhi lbl_020051d0
	b lbl_020051b4
}

extern "C" asm void func_02005238(void)
{
	mov r12, #0x200000
	cmn r12, r1, lsl #1
	bcs lbl_020052b0
	cmn r12, r3, lsl #1
	bcs lbl_020052c4
lbl_0200524c:
	orrs r12, r3, r1
	bmi lbl_0200527c
	cmp r1, r3
	cmpeq r0, r2
	movcc r0, #1
	movcs r0, #0
	bx lr
lbl_02005268:
	mov r0, #0
	mrs r12, cpsr
	orr r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
lbl_0200527c:
	orr r12, r0, r12, lsl #1
	orrs r12, r12, r2
	moveq r0, #0
	bne lbl_0200529c
	mrs r12, cpsr
	orr r12, r12, #0x20000000
	msr cpsr_f, r12
	bxeq lr
lbl_0200529c:
	cmp r3, r1
	cmpeq r2, r0
	movcc r0, #1
	movcs r0, #0
	bx lr
lbl_020052b0:
	bne lbl_02005268
	cmp r0, #0
	bhi lbl_02005268
	cmn r12, r3, lsl #1
	bcc lbl_0200524c
lbl_020052c4:
	bne lbl_02005268
	cmp r2, #0
	bhi lbl_02005268
	b lbl_0200524c
}

extern "C" asm void func_020052d4(void)
{
	mov r12, #0x200000
	cmn r12, r1, lsl #1
	bcs lbl_0200533c
	cmn r12, r3, lsl #1
	bcs lbl_02005350
lbl_020052e8:
	orrs r12, r3, r1
	bmi lbl_02005318
	cmp r1, r3
	cmpeq r0, r2
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_02005304:
	mov r0, #0
	mrs r12, cpsr
	bic r12, r12, #0x40000000
	msr cpsr_f, r12
	bx lr
lbl_02005318:
	orr r12, r0, r12, lsl #1
	orrs r12, r12, r2
	moveq r0, #1
	bxeq lr
	cmp r3, r1
	cmpeq r2, r0
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_0200533c:
	bne lbl_02005304
	cmp r0, #0
	bhi lbl_02005304
	cmn r12, r3, lsl #1
	bcc lbl_020052e8
lbl_02005350:
	bne lbl_02005304
	cmp r2, #0
	bhi lbl_02005304
	b lbl_020052e8
}

extern "C" asm void func_02005360(void)
{
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	bcc lbl_020053a8
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	movge r0, #1
	movlt r0, #0
	mrs r12, cpsr
	biclt r12, r12, #0x20000000
	orrge r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
lbl_020053a8:
	mov r0, #0
	mrs r12, cpsr
	bic r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
}

extern "C" asm void func_020053bc(void)
{
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	bcc lbl_02005404
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	movgt r0, #1
	movle r0, #0
	mrs r12, cpsr
	bicle r12, r12, #0x20000000
	orrgt r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
lbl_02005404:
	mov r0, #0
	mrs r12, cpsr
	bic r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
}

extern "C" asm void func_02005418(void)
{
	mov r3, #0xff000000
	cmp r3, r0, lsl #1
	cmpcs r3, r1, lsl #1
	bcc lbl_02005460
	cmp r0, #0
	bicmi r0, r0, #0x80000000
	rsbmi r0, r0, #0
	cmp r1, #0
	bicmi r1, r1, #0x80000000
	rsbmi r1, r1, #0
	cmp r0, r1
	movlt r0, #1
	movge r0, #0
	mrs r12, cpsr
	orrge r12, r12, #0x20000000
	biclt r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
lbl_02005460:
	mov r0, #0
	mrs r12, cpsr
	orr r12, r12, #0x20000000
	msr cpsr_f, r12
	bx lr
}

#pragma thumb on
