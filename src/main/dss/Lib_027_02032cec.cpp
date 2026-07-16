/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02032cec(void);
    void func_02032d58(void);
    void func_02032db4(void);
    void func_02032ee8(void);
    void func_02033288(void);
    void func_020332ac(void);
    void func_020332cc(void);
    void func_02033320(void);
    void func_02033324(void);
    void func_02033328(void);
    void func_0203333c(void);
    void func_02033358(void);
    void func_02033370(void);
    void func_020333dc(void);
    void func_020333f8(void);
    void func_02033468(void);
    void func_020334ac(void);
    void func_0203351c(void);
    void func_02033584(void);
    void func_0203359c(void);
    void func_020335b0(void);
    void func_020335ec(void);
    void func_02033664(void);
    void func_02033680(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status11PartyStatus13setBattleModeEv(void);
    void _ZN6status11PartyStatus14getPlayerIndexEi(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus19getCarriageOutCountEv(void);
    void _ZN6status12PlayerStatus10walkDamageE11StageDamage(void);
    void _ZN6status12PlayerStatus10walkNormalEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status7g_StoryE(void);
    void _ZN6status8GameFlag3setEj(void);
    void _ZN6status8GameFlag5checkEj(void);
    void __register_global_object(void);
    void _s32_div_f(void);
    void data_0201d89d(void);
    void data_020b5fbc(void);
    void data_020becf0(void);
    void data_020ef710(void);
    void data_020ef71c(void);
    void data_020ef740(void);
    void data_020ef794(void);
    void data_020ef79c(void);
    void data_020ef7a0(void);
    void func_0200a6c8(void);
    void func_0200a8b8(void);
    void func_02026cc8(void);
    void func_02088cf4(void);
    void g_GlobalFlag(void);
    void g_Stage(void);
    void g_cmnPartyInfo(void);
}

#pragma thumb off

extern "C" asm void func_02032cec(void)
{
	ldr r3, =data_020ef740
	mov r2, #0
	mov r1, #2
lbl_02032cf8:
	add r2, r2, #1
	cmp r2, #0x52
	strb r1, [r3], #1
	blt lbl_02032cf8
	ldr r3, =data_020ef710
	mov r2, #0
	mov r1, #2
lbl_02032d14:
	add r2, r2, #1
	cmp r2, #4
	str r1, [r3], #0xc
	blt lbl_02032d14
	ldr r1, =g_cmnPartyInfo
	mov r3, #0
	mov r2, #1
	str r3, [r1]
	str r2, [r1, #0xc]
	str r2, [r1, #8]
	str r2, [r1, #4]
	sub r1, r2, #2
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02032d58(void)
{
	ldr r3, =data_020ef740
	mov r2, #0
	mov r1, #2
lbl_02032d64:
	add r2, r2, #1
	cmp r2, #0x52
	strb r1, [r3], #1
	blt lbl_02032d64
	ldr r3, =data_020ef710
	mov r2, #0
	mov r1, #2
lbl_02032d80:
	add r2, r2, #1
	cmp r2, #4
	str r1, [r3], #0xc
	blt lbl_02032d80
	ldr r1, =g_cmnPartyInfo
	mov r2, #0
	str r2, [r1]
	sub r1, r2, #1
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02032db4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	ldr r1, =g_cmnPartyInfo
	mov r4, #0
	ldr r0, [r1, #0x24]
	ldr r1, [r1, #0x18]
	bl _s32_div_f
	cmp r1, #0
	ldr r1, =g_cmnPartyInfo
	ldr r0, =data_020ef740
	ldr r2, [r1, #0x1c]
	moveq r4, #1
	strb r2, [r0]
	cmp r2, #2
	ldrne r0, [r1, #0x24]
	addne r0, r0, #1
	strne r0, [r1, #0x24]
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus13setBattleModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus19getCarriageOutCountEv
	cmp r0, #1
	mov r1, #1
	ble lbl_02032e80
	ldr r12, =g_cmnPartyInfo
	ldr r2, =data_020ef71c
	ldr r3, [r12, #0x14]
	ldr r12, [r12, #0x18]
	ldr r7, =data_020ef740
	mov lr, r3
	mov r5, #0
lbl_02032e2c:
	add r8, r7, r3
	ldr r9, [r2, #8]
	ldrsb r6, [r8, #-1]
	add r9, r9, #1
	str r9, [r2, #8]
	str r6, [r2]
	cmp r6, #2
	beq lbl_02032e58
	ldrsb r6, [r8]
	cmp r6, #2
	beq lbl_02032e64
lbl_02032e58:
	ldr r6, [r2, #8]
	cmp r6, r12
	blt lbl_02032e6c
lbl_02032e64:
	str r5, [r2, #4]
	str r5, [r2, #8]
lbl_02032e6c:
	add r1, r1, #1
	cmp r1, r0
	add r2, r2, #0xc
	add r3, r3, lr
	blt lbl_02032e2c
lbl_02032e80:
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus19getCarriageOutCountEv
	ldr r1, =g_cmnPartyInfo
	mov r5, #0
	ldr r1, [r1, #0x14]
	mul r3, r1, r0
	cmp r3, #0
	ble lbl_02032ec0
	ldr r2, =data_020ef740
lbl_02032ea4:
	sub r1, r3, r5
	add r0, r2, r1
	ldrsb r0, [r0, #-1]
	add r5, r5, #1
	cmp r5, r3
	strb r0, [r2, r1]
	blt lbl_02032ea4
lbl_02032ec0:
	ldr r1, =g_cmnPartyInfo
	mov r0, r4
	ldr r2, [r1, #0x10]
	add r2, r2, #1
	str r2, [r1, #0x10]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02032ee8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	mov r10, r0
	ldr r0, =_ZN6status7g_PartyE
	mov r5, r1
	mov r4, r2
	bl _ZN6status11PartyStatus13setBattleModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus19getCarriageOutCountEv
	mov r6, r0
	mov r0, r10
	ldr r1, [r0]
	mov r7, #2
	ldr r1, [r1]
	blx r1
	cmp r0, #1
	bne lbl_02032f40
	ldr r0, =g_cmnPartyInfo
	mov r1, #0
	str r1, [r0, #0x1c]
	mov r1, #1
	str r1, [r0]
	b lbl_02032f80
lbl_02032f40:
	mov r0, r10
	ldr r1, [r0]
	ldr r1, [r1, #4]
	blx r1
	cmp r0, #1
	bne lbl_02032f6c
	ldr r0, =g_cmnPartyInfo
	mov r1, #1
	str r1, [r0, #0x1c]
	str r1, [r0]
	b lbl_02032f80
lbl_02032f6c:
	ldr r0, =g_cmnPartyInfo
	mov r1, r7
	str r1, [r0, #0x1c]
	mov r1, #0
	str r1, [r0, #0x24]
lbl_02032f80:
	mov r0, r5
	mov r1, r4
	bl func_02088cf4
	cmp r0, #0
	beq lbl_02033064
	ldr r0, =g_cmnPartyInfo
	ldr r0, [r0, #4]
	cmp r0, #1
	bne lbl_02032fac
	bl func_0200a6c8
	bl func_0200a8b8
lbl_02032fac:
	ldr r0, =g_cmnPartyInfo
	ldr r0, [r0]
	cmp r0, #1
	bne lbl_02032fe4
	mov r0, r10
	bl func_02032db4
	cmp r0, #1
	bne lbl_02032fe4
	ldr r0, =g_cmnPartyInfo
	ldr r1, [r0, #0x1c]
	cmp r1, #2
	movne r1, #0
	strne r1, [r0, #0x20]
	strne r1, [r0, #0x10]
lbl_02032fe4:
	ldr r11, =g_cmnPartyInfo
	ldr r0, [r11, #8]
	cmp r0, #1
	bne lbl_02033064
	cmp r6, #0
	mov r8, #0
	ble lbl_02033064
	ldr r9, =data_020ef710
	ldr r5, =_ZN6status7g_PartyE
	mov r4, r8
lbl_0203300c:
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	bl _ZN6status12PlayerStatus10walkNormalEv
	cmp r0, #1
	ldreq r0, [r11, #0xc]
	cmpeq r0, #1
	bne lbl_02033054
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus14getPlayerIndexEi
	mov r1, r0
	mov r0, r10
	ldr r3, [r0]
	mov r2, #1
	ldr r3, [r3, #8]
	blx r3
	str r4, [r9, #4]
lbl_02033054:
	add r8, r8, #1
	cmp r8, r6
	add r9, r9, #0xc
	blt lbl_0203300c
lbl_02033064:
	cmp r6, #0
	mov r8, #0
	ble lbl_0203316c
	ldr r9, =data_020ef710
	ldr r5, =_ZN6status7g_PartyE
	ldr r4, =g_cmnPartyInfo
	mov r11, #1
lbl_02033080:
	ldr r0, [r4]
	cmp r0, #1
	bne lbl_02033120
	ldr r0, [r9]
	cmp r0, #2
	beq lbl_02033120
	ldr r0, [r9, #4]
	cmp r0, #0
	bne lbl_0203311c
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	moveq r0, r11
	movne r0, #0
	cmp r0, #1
	ldreq r0, [r4, #8]
	cmpeq r0, #1
	bne lbl_0203311c
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	ldr r1, [r9]
	bl _ZN6status12PlayerStatus10walkDamageE11StageDamage
	cmp r0, #1
	ldreq r0, [r4, #0xc]
	cmpeq r0, #1
	bne lbl_0203311c
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus14getPlayerIndexEi
	mov r1, r0
	mov r0, r10
	ldr r2, [r9]
	ldr r3, [r0]
	ldr r3, [r3, #8]
	blx r3
lbl_0203311c:
	ldr r7, [r9]
lbl_02033120:
	ldr r0, [r9, #4]
	cmp r0, #4
	bne lbl_02033150
	mov r0, r5
	mov r1, r8
	bl _ZN6status11PartyStatus14getPlayerIndexEi
	mov r1, r0
	mov r0, r10
	ldr r3, [r0]
	mov r2, #2
	ldr r3, [r3, #8]
	blx r3
lbl_02033150:
	ldr r0, [r9, #4]
	add r8, r8, #1
	add r0, r0, #1
	str r0, [r9, #4]
	cmp r8, r6
	add r9, r9, #0xc
	blt lbl_02033080
lbl_0203316c:
	ldr r0, =g_cmnPartyInfo
	ldr r1, [r0]
	cmp r1, #1
	cmpeq r7, #2
	bne lbl_02033208
	ldr r2, [r0, #0x14]
	sub r1, r6, #1
	mul r1, r2, r1
	ldr r2, [r0, #0x10]
	cmp r2, r1
	ble lbl_02033208
	mov r7, #0
	str r7, [r0]
	cmp r6, #0
	ble lbl_020331e0
	ldr r5, =_ZN6status7g_PartyE
	mov r4, #2
lbl_020331b0:
	mov r0, r5
	mov r1, r7
	bl _ZN6status11PartyStatus14getPlayerIndexEi
	mov r1, r0
	mov r0, r10
	ldr r3, [r0]
	mov r2, r4
	ldr r3, [r3, #8]
	blx r3
	add r7, r7, #1
	cmp r7, r6
	blt lbl_020331b0
lbl_020331e0:
	ldr r2, =data_020ef740
	mov r1, #0
	mov r0, #2
lbl_020331ec:
	add r1, r1, #1
	cmp r1, #0x52
	strb r0, [r2], #1
	blt lbl_020331ec
	ldr r0, =g_cmnPartyInfo
	mov r1, #0
	str r1, [r0, #0x10]
lbl_02033208:
	ldr r0, [r10, #4]
	mvn r1, #0
	cmp r0, r1
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r0, r0, #1
	str r0, [r10, #4]
	cmp r0, #0xc
	ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	str r1, [r10, #4]
	ldr r0, [r10, #8]
	cmp r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [r10, #0xc]
	cmp r0, #0
	bne lbl_02033254
	mov r0, #0x13c
	mov r1, #0
	bl func_02026cc8
	b lbl_02033268
lbl_02033254:
	cmp r0, #1
	bne lbl_02033268
	add r0, r1, #0x13c
	mov r1, #0
	bl func_02026cc8
lbl_02033268:
	mov r0, #0
	str r0, [r10, #8]
	str r0, [r10, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02033288(void)
{
	ldr r2, [r0, #4]
	mvn r1, #0
	cmp r2, r1
	movne r0, #0
	bxne lr
	mov r1, #0
	str r1, [r0, #4]
	mov r0, #1
	bx lr
}

extern "C" asm void func_020332ac(void)
{
	cmp r1, #1
	bxhi lr
	ldr r2, [r0, #4]
	cmp r2, #0
	movgt r2, #1
	strgt r2, [r0, #8]
	strgt r1, [r0, #0xc]
	bx lr
}

extern "C" asm void func_020332cc(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020ef794
	ldr r0, [r0]
	tst r0, #1
	bne lbl_02033308
	ldr r0, =data_020ef79c
	bl func_02033320
	ldr r0, =data_020ef79c
	ldr r1, =func_02033324
	ldr r2, =data_020ef7a0
	bl __register_global_object
	ldr r0, =data_020ef794
	ldr r1, [r0]
	orr r1, r1, #1
	str r1, [r0]
lbl_02033308:
	ldr r0, =data_020ef79c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02033320(void)
{
	bx lr
}

extern "C" asm void func_02033324(void)
{
	bx lr
}

extern "C" asm void func_02033328(void)
{
	ldr r1, =_ZN6status10excelParamE
	ldr r1, [r1, #0xb4]
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0203333c(void)
{
	ldr r0, =g_Stage
	mov r2, #1
	ldr r3, [r0, #0x104]
	orr r1, r3, r2, lsl r1
	str r1, [r0, #0x104]
	bx lr
}

extern "C" asm void func_02033358(void)
{
	ldr r2, =data_020b5fbc
	ldr r12, =func_0203333c
	ldr r1, [r2, r1, lsl #3]
	bx r12
}

extern "C" asm void func_02033370(void)
{
	stmdb sp!, {r4, lr}
	ldr r2, =_ZN6status7g_StoryE
	ldr lr, [r2, #4]
	cmp lr, #5
	movge r0, #0
	ldmgeia sp!, {r4, pc}
	ldr r3, =data_020b5fbc
	mov r12, #0
lbl_02033390:
	add r2, r3, r12, lsl #3
	ldr r2, [r2, #4]
	cmp lr, r2
	bne lbl_020333c0
	add r1, r12, r1
	ldr r4, [r3, r1, lsl #3]
	mov r1, r4
	bl func_020333dc
	cmp r0, #0
	mvneq r4, #0
	mov r0, r4
	ldmia sp!, {r4, pc}
lbl_020333c0:
	add r12, r12, #1
	cmp r12, #0x2a
	blt lbl_02033390
	mvn r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020333dc(void)
{
	ldr r2, =g_Stage
	mov r0, #1
	ldr r2, [r2, #0x104]
	tst r2, r0, lsl r1
	moveq r0, #0
	bx lr
}

extern "C" asm void func_020333f8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r6, #0
	ldr r4, =data_020b5fbc
	ldr r9, =_ZN6status7g_StoryE
	mov r8, r0
	mov r7, r6
	mov r5, #5
lbl_02033414:
	ldr r1, [r9, #4]
	add r0, r4, r7, lsl #3
	cmp r1, #5
	ldr r0, [r0, #4]
	movge r1, r5
	cmp r1, r0
	cmpne r1, #0
	bne lbl_0203344c
	ldr r1, [r4, r7, lsl #3]
	mov r0, r8
	bl func_020333dc
	cmp r0, #0
	cmpne r7, #0x1d
	addne r6, r6, #1
lbl_0203344c:
	add r7, r7, #1
	cmp r7, #0x2a
	blt lbl_02033414
	mov r0, r6
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02033468(void)
{
	ldr r1, =_ZN6status7g_StoryE
	ldr r2, =data_020b5fbc
	ldr r3, [r1, #4]
	mov r0, #0
	cmp r3, #5
	movgt r3, #5
	mov r12, #0
lbl_02033484:
	add r1, r2, r12, lsl #3
	ldr r1, [r1, #4]
	add r12, r12, #1
	cmp r3, r1
	addeq r0, r0, #1
	cmp r12, #0x2a
	blt lbl_02033484
	bx lr
}

extern "C" asm void func_020334ac(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	ldr r1, =_ZN6status7g_StoryE
	ldr r5, =data_020b5fbc
	ldr r7, [r1, #4]
	ldr r6, =g_GlobalFlag
	cmp r7, #5
	mov r4, r0
	movgt r7, #5
	mov r8, #0
lbl_020334d0:
	mov r0, r6
	mov r1, r8
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #0
	beq lbl_02033500
	add r0, r5, r8, lsl #3
	ldr r0, [r0, #4]
	cmp r7, r0
	bne lbl_02033500
	mov r0, r4
	mov r1, r8
	bl func_02033358
lbl_02033500:
	add r8, r8, #1
	cmp r8, #0x2a
	blt lbl_020334d0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0203351c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	ldr r8, =g_GlobalFlag
	ldr r4, =data_020b5fbc
	ldr r7, =_ZN6status7g_StoryE
	mov r6, r0
	mov r5, #0
lbl_02033534:
	ldr r1, [r4, r5, lsl #3]
	mov r0, r6
	bl func_020333dc
	cmp r0, #1
	bne lbl_02033568
	add r0, r4, r5, lsl #3
	ldr r1, [r0, #4]
	ldr r0, [r7, #4]
	cmp r1, r0
	bgt lbl_02033568
	mov r0, r8
	mov r1, r5
	bl _ZN6status8GameFlag3setEj
lbl_02033568:
	add r5, r5, #1
	cmp r5, #0x2a
	blt lbl_02033534
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02033584(void)
{
	ldr r12, =data_0201d89d
	ldr r0, =g_GlobalFlag
	mov r1, #0x1d
	bx r12
}

extern "C" asm void func_0203359c(void)
{
	ldr r2, [r0]
	mov r0, #0x18
	mla r0, r1, r0, r2
	ldrb r0, [r0, #0x11]
	bx lr
}

extern "C" asm void func_020335b0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r4, r0
	mov r6, r1
	mov r5, r2
	bl _ZN3dss11Fx32Vector3C1Ev
	mov r0, #0x18
	mul r1, r5, r0
	ldr r0, [r6]
	ldr r0, [r0, r1]
	str r0, [r4]
	ldr r0, [r6]
	add r0, r0, r1
	ldr r0, [r0, #4]
	str r0, [r4, #4]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020335ec(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r2
	mov r5, r0
	mov r4, r1
	bl _ZN3dss11Fx32Vector3C1Ev
	sub r0, r6, #0x16
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	b lbl_02033634
	b lbl_02033620
	b lbl_02033620
	b lbl_02033620
	b lbl_02033620
lbl_02033620:
	ldr r0, =0x004B8000
	str r0, [r5]
	add r0, r0, #0x130000
	str r0, [r5, #4]
	ldmia sp!, {r4, r5, r6, pc}
lbl_02033634:
	mov r0, #0x18
	mul r1, r6, r0
	ldr r0, [r4]
	add r0, r0, r1
	ldr r0, [r0, #8]
	str r0, [r5]
	ldr r0, [r4]
	add r0, r0, r1
	ldr r0, [r0, #0xc]
	str r0, [r5, #4]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02033664(void)
{
	ldr r2, [r0]
	mov r0, #0x18
	mla r0, r1, r0, r2
	ldrb r0, [r0, #0x10]
	cmp r0, #3
	movcs r0, #0
	bx lr
}

extern "C" asm void func_02033680(void)
{
	ldr r0, =data_020becf0
	ldr r0, [r0]
	bx lr
}

#pragma thumb on
