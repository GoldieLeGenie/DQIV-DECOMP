/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02030f6c(void);
    void func_02030f7c(void);
    void func_02030f80(void);
    void func_02030f84(void);
    void func_02030f88(void);
    void func_02030f9c(void);
    void func_02030fa8(void);
    void func_02030fc8(void);
    void func_02030fcc(void);
    void func_02030fe0(void);
    void func_02031010(void);
    void func_0203102c(void);
    void func_0203103c(void);
    void func_02031070(void);
    void func_02031080(void);
    void func_020310d0(void);
    void func_020310f4(void);
    void func_02031154(void);
    void func_02031160(void);
    void func_020311c8(void);
    void func_020311d4(void);
    void func_020311f0(void);
    void func_0203122c(void);
    void func_02031278(void);
    void func_020312e8(void);
    void func_0203133c(void);
    void func_020313cc(void);
    void func_02031498(void);
    void func_0203150c(void);
    void func_02031580(void);
    void func_020315fc(void);
    void func_02031664(void);
    void func_020316ac(void);
    void func_020316f4(void);
    void func_020317a4(void);
    void func_020318dc(void);
    void func_02031908(void);
    void func_020319d8(void);
    void func_02031a5c(void);
    void func_02031b04(void);
    void func_02031bd8(void);
    void func_02031c90(void);
    void func_02031cd8(void);
    void func_02031d04(void);
    void func_02031d6c(void);
    void func_02031d84(void);
    void func_02031db8(void);
    void func_02031e84(void);
    void func_02031e90(void);
    void func_02031eb4(void);
    void func_02031fc0(void);
    void func_0203201c(void);
    void func_020320ac(void);
    void func_0203232c(void);
    void func_02032398(void);
    void func_02032424(void);
    void func_0203244c(void);
    void func_02032498(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN3dss11Fx32Vector3aSERKS0_(void);
    void _ZN3dss4Fx32C1ERKS0_(void);
    void _ZN6status16BaseActionStatus3absEi(void);
    void _s32_div_f(void);
    void data_020b5f78(void);
    void data_020b5f90(void);
    void data_020b5faa(void);
    void data_020beca0(void);
    void data_020becb8(void);
    void data_020becc8(void);
    void data_020beccc(void);
    void data_020becd0(void);
    void data_020becd4(void);
    void data_020becd8(void);
    void data_020becdc(void);
    void data_020bece0(void);
    void data_020bece4(void);
    void data_020eed20(void);
    void data_020eed34(void);
    void data_020eed38(void);
    void func_00adc5b4(void);
    void func_02008eb8(void);
    void func_020870fc(void);
    void func_02087110(void);
    void func_0208718c(void);
    void func_020871f4(void);
    void func_0208722c(void);
    void func_02087254(void);
    void func_02087268(void);
    void func_02087320(void);
    void func_02087348(void);
    void func_020873a8(void);
    void func_020873c0(void);
    void func_020873d8(void);
    void func_020873f0(void);
    void func_02087408(void);
    void func_02087420(void);
    void func_020885f8(void);
    void func_02088670(void);
    void func_020886d0(void);
    void func_02088824(void);
    void func_02088854(void);
    void func_020888e8(void);
    void func_0208895c(void);
    void func_02088988(void);
    void func_020889fc(void);
    void func_02088a9c(void);
    void func_02088b10(void);
    void func_02088b68(void);
    void func_02088bdc(void);
    void func_02088c7c(void);
    void func_02088d40(void);
    void func_02088e90(void);
    void func_02089168(void);
}

#pragma thumb off

extern "C" asm void func_02030f6c(void)
{
	ldr r1, =data_020beca0
	str r1, [r0]
	bx lr
}

extern "C" asm void func_02030f7c(void)
{
	bx lr
}

extern "C" asm void func_02030f80(void)
{
	bx lr
}

extern "C" asm void func_02030f84(void)
{
	bx lr
}

extern "C" asm void func_02030f88(void)
{
	mov r2, #1
	str r2, [r0, #4]
	mov r1, r1, lsl #0xd
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_02030f9c(void)
{
	mov r1, #0
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02030fa8(void)
{
	ldr r2, =data_020becb8
	mov r1, #0
	str r2, [r0]
	str r1, [r0, #4]
	mov r1, #1
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_02030fc8(void)
{
	bx lr
}

extern "C" asm void func_02030fcc(void)
{
	ldr r0, =data_020eed20
	mov r1, #0
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_02030fe0(void)
{
	cmp r0, #0
	ldreq r0, =data_020eed20
	ldreq r1, [r0, #8]
	subeq r1, r1, #1
	streq r1, [r0, #8]
	bxeq lr
	ldr r0, =data_020eed20
	ldr r1, [r0, #8]
	add r1, r1, #1
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_02031010(void)
{
	ldr r0, =data_020eed20
	ldr r0, [r0, #8]
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	bx lr
}

extern "C" asm void func_0203102c(void)
{
	ldr r0, =data_020eed20
	ldr r0, [r0, #8]
	bx lr
}

extern "C" asm void func_0203103c(void)
{
	ldr r1, =data_020eed20
	cmp r0, #4
	cmpne r0, #6
	str r0, [r1, #4]
	cmpne r0, #8
	bne lbl_02031060
	ldr r1, =data_020eed20
	str r0, [r1]
	bx lr
lbl_02031060:
	mov r0, #0
	str r0, [r1]
	bx lr
}

extern "C" asm void func_02031070(void)
{
	ldr r0, =data_020eed20
	ldr r0, [r0, #4]
	bx lr
}

extern "C" asm void func_02031080(void)
{
	ldr r0, =data_020eed20
	ldr r1, [r0]
	cmp r1, #4
	beq lbl_020310a8
	cmp r1, #6
	beq lbl_020310b4
	cmp r1, #8
	moveq r1, #9
	streq r1, [r0, #4]
	b lbl_020310bc
lbl_020310a8:
	mov r1, #5
	str r1, [r0, #4]
	b lbl_020310bc
lbl_020310b4:
	mov r1, #7
	str r1, [r0, #4]
lbl_020310bc:
	ldr r0, =data_020eed20
	mov r1, #0
	str r1, [r0]
	bx lr
}

extern "C" asm void func_020310d0(void)
{
	mov r1, #0
	strh r1, [r0, #0x36]
	strh r1, [r0, #0x38]
	strh r1, [r0, #0x3a]
	strh r1, [r0, #0x3c]
	str r1, [r0, #0x48]
	str r1, [r0, #0x44]
	str r1, [r0, #0x50]
	bx lr
}

extern "C" asm void func_020310f4(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #0x50]
	cmp r2, #6
	addls pc, pc, r2, lsl #2
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	b lbl_02031124
	b lbl_0203112c
	b lbl_02031134
	b lbl_0203113c
	b lbl_02031144
	b lbl_0203114c
lbl_02031124:
	bl func_02031498
	ldmia sp!, {r3, pc}
lbl_0203112c:
	bl func_020317a4
	ldmia sp!, {r3, pc}
lbl_02031134:
	bl func_020319d8
	ldmia sp!, {r3, pc}
lbl_0203113c:
	bl func_02031c90
	ldmia sp!, {r3, pc}
lbl_02031144:
	bl func_02031d6c
	ldmia sp!, {r3, pc}
lbl_0203114c:
	bl func_02031db8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02031154(void)
{
	ldr r12, =func_0203150c
	bx r12
}

extern "C" asm void func_02031160(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0, #0x50]
	cmp r1, #6
	addls pc, pc, r1, lsl #2
	b lbl_020311c0
	b lbl_020311c0
	b lbl_02031190
	b lbl_02031198
	b lbl_020311a0
	b lbl_020311a8
	b lbl_020311b0
	b lbl_020311b8
lbl_02031190:
	bl func_02031664
	ldmia sp!, {r3, pc}
lbl_02031198:
	bl func_020318dc
	ldmia sp!, {r3, pc}
lbl_020311a0:
	bl func_02031a5c
	ldmia sp!, {r3, pc}
lbl_020311a8:
	bl func_02031cd8
	ldmia sp!, {r3, pc}
lbl_020311b0:
	bl func_02031d84
	ldmia sp!, {r3, pc}
lbl_020311b8:
	bl func_02031e90
	ldmia sp!, {r3, pc}
lbl_020311c0:
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020311c8(void)
{
	ldr r12, =func_020316ac
	bx r12
}

extern "C" asm void func_020311d4(void)
{
	ldr r1, [r0, #0x48]
	cmp r1, #0
	ldreq r0, [r0, #0x44]
	cmpeq r0, #0
	moveq r0, #1
	movne r0, #0
	bx lr
}

extern "C" asm void func_020311f0(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r3, #1
	mov r4, r2
	add r0, r5, #0xc
	str r3, [r5, #0x50]
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, r5
	mov r1, r4
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, #1
	str r0, [r5, #0x48]
	mov r0, #0
	strh r0, [r5, #0x3a]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0203122c(void)
{
	stmdb sp!, {r3, lr}
	mov lr, #1
	str lr, [r0, #0x50]
	ldrsh r12, [r1]
	mov r3, #0
	strh r12, [r0, #0x2a]
	ldrsh r12, [r1, #2]
	strh r12, [r0, #0x2c]
	ldrsh r1, [r1, #4]
	strh r1, [r0, #0x2e]
	ldrsh r1, [r2]
	strh r1, [r0, #0x24]
	ldrsh r1, [r2, #2]
	strh r1, [r0, #0x26]
	ldrsh r1, [r2, #4]
	strh r1, [r0, #0x28]
	str lr, [r0, #0x44]
	strh r3, [r0, #0x3c]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02031278(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x14
	mov r5, r0
	mov r4, r1
	add r0, sp, #8
	mov r1, r5
	add r2, r5, #0xc
	bl func_02088988
	add r1, sp, #8
	add r0, r5, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add r0, sp, #0
	add r1, r5, #0x18
	bl func_02088e90
	add r0, sp, #4
	mov r2, r4
	add r1, sp, #0
	bl func_02087348
	ldr r2, [sp, #4]
	mov r0, r5
	mov r1, r2, asr #0xb
	add r1, r2, r1, lsr #20
	mov r1, r1, asr #0xc
	strh r1, [r5, #0x36]
	ldrsh r1, [r5, #0x36]
	bl func_020312e8
	add sp, sp, #0x14
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_020312e8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x18
	mov r5, r0
	mov r0, r1
	strh r1, [r5, #0x36]
	mov r1, #1
	bl func_02008eb8
	mov r4, r0
	add r0, sp, #0
	mov r1, r5
	add r2, r5, #0xc
	bl func_02088988
	add r0, sp, #0xc
	add r1, sp, #0
	mov r2, r4
	bl func_02088bdc
	add r1, sp, #0xc
	add r0, r5, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0203133c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	movs r5, r1
	mov r6, r0
	strh r5, [r6, #0x38]
	ldrsh r3, [r6, #0x24]
	ldrsh r1, [r6, #0x2a]
	mov r4, r2
	sub r1, r3, r1
	strh r1, [r6, #0x30]
	ldrsh r2, [r6, #0x26]
	ldrsh r1, [r6, #0x2c]
	sub r1, r2, r1
	strh r1, [r6, #0x32]
	ldrsh r2, [r6, #0x28]
	ldrsh r1, [r6, #0x2e]
	sub r1, r2, r1
	strh r1, [r6, #0x34]
	ldmeqia sp!, {r4, r5, r6, pc}
	ldrsh r1, [r6, #0x30]
	mov r2, r5
	mov r3, r4
	bl func_020313cc
	strh r0, [r6, #0x30]
	ldrsh r1, [r6, #0x32]
	mov r0, r6
	mov r2, r5
	mov r3, r4
	bl func_020313cc
	strh r0, [r6, #0x32]
	ldrsh r1, [r6, #0x34]
	mov r0, r6
	mov r2, r5
	mov r3, r4
	bl func_020313cc
	strh r0, [r6, #0x34]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020313cc(void)
{
	stmdb sp!, {r3, lr}
	cmp r1, #0
	moveq r0, r1
	ldmeqia sp!, {r3, pc}
	cmp r3, #1
	beq lbl_020313f0
	cmp r3, #2
	beq lbl_02031434
	b lbl_02031478
lbl_020313f0:
	cmp r1, #0
	bge lbl_02031410
	mov r0, r1
	mov r1, r2
	bl _s32_div_f
	mov r0, r0, lsl #0x10
	mov r1, r0, asr #0x10
	b lbl_0203148c
lbl_02031410:
	ldr r0, =0x0000FFFF
	sub r0, r0, r1
	mov r1, r2
	bl _s32_div_f
	mvn r1, #0
	smulbb r0, r0, r1
	mov r0, r0, lsl #0x10
	mov r1, r0, asr #0x10
	b lbl_0203148c
lbl_02031434:
	cmp r1, #0
	ble lbl_02031454
	mov r0, r1
	mov r1, r2
	bl _s32_div_f
	mov r0, r0, lsl #0x10
	mov r1, r0, asr #0x10
	b lbl_0203148c
lbl_02031454:
	mov r0, r1, lsl #0x10
	mov r1, r2
	mov r0, r0, lsr #0x10
	bl _s32_div_f
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, lsl #0x10
	mov r1, r0, asr #0x10
	b lbl_0203148c
lbl_02031478:
	mov r0, r1
	mov r1, r2
	bl _s32_div_f
	mov r0, r0, lsl #0x10
	mov r1, r0, asr #0x10
lbl_0203148c:
	mov r0, r1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02031498(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x18
	mov r5, r0
	ldr r0, [r5, #0x48]
	mov r4, r1
	cmp r0, #1
	addne sp, sp, #0x18
	ldmneia sp!, {r3, r4, r5, pc}
	ldrsh r2, [r5, #0x3a]
	ldrsh r0, [r5, #0x36]
	cmp r2, r0
	bge lbl_020314f8
	add r0, sp, #0
	add r1, r5, #0x18
	bl func_02088a9c
	add r0, sp, #0xc
	add r2, sp, #0
	add r1, r5, #0xc
	bl func_020888e8
	add r1, sp, #0xc
	mov r0, r4
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
lbl_020314f8:
	mov r0, r4
	mov r1, r5
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0203150c(void)
{
	ldr r2, [r0, #0x44]
	cmp r2, #1
	bxne lr
	ldrsh r12, [r0, #0x3c]
	ldrsh r2, [r0, #0x38]
	cmp r12, r2
	bge lbl_02031564
	ldrsh r3, [r0, #0x2a]
	ldrsh r2, [r0, #0x30]
	smlabb r2, r2, r12, r3
	strh r2, [r1]
	ldrsh r12, [r0, #0x2c]
	ldrsh r3, [r0, #0x32]
	ldrsh r2, [r0, #0x3c]
	smlabb r2, r3, r2, r12
	strh r2, [r1, #2]
	ldrsh r3, [r0, #0x2e]
	ldrsh r2, [r0, #0x34]
	ldrsh r0, [r0, #0x3c]
	smlabb r0, r2, r0, r3
	strh r0, [r1, #4]
	bx lr
lbl_02031564:
	ldrsh r2, [r0, #0x24]
	strh r2, [r1]
	ldrsh r2, [r0, #0x26]
	strh r2, [r1, #2]
	ldrsh r0, [r0, #0x28]
	strh r0, [r1, #4]
	bx lr
}

extern "C" asm void func_02031580(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldrsh r4, [r2]
	mov lr, #0
	mov r12, #1
	strh r4, [r0, #0x30]
	ldrsh r4, [r2, #2]
	strh r4, [r0, #0x32]
	ldrsh r4, [r2, #4]
	strh r4, [r0, #0x34]
	strh r3, [r0, #0x38]
	ldrsh r4, [r1]
	strh r4, [r0, #0x2a]
	ldrsh r4, [r1, #2]
	strh r4, [r0, #0x2c]
	ldrsh r4, [r1, #4]
	strh r4, [r0, #0x2e]
	ldrsh r5, [r1]
	ldrsh r4, [r2]
	mla r5, r4, r3, r5
	strh r5, [r0, #0x24]
	ldrsh r5, [r1, #2]
	ldrsh r4, [r2, #2]
	mla r5, r4, r3, r5
	strh r5, [r0, #0x26]
	ldrsh r4, [r1, #4]
	ldrsh r1, [r2, #4]
	mla r2, r1, r3, r4
	strh r2, [r0, #0x28]
	strh lr, [r0, #0x3c]
	str r12, [r0, #0x44]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020315fc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	mov r0, #0
	strh r0, [r4, #0x30]
	ldrsh r2, [r4, #0x26]
	ldrsh r0, [r4, #0x2c]
	sub r0, r2, r0
	strh r0, [r4, #0x32]
	ldrsh r0, [r4, #0x32]
	bl _s32_div_f
	strh r0, [r4, #0x38]
	ldrsh r0, [r4, #0x38]
	bl _ZN6status16BaseActionStatus3absEi
	strh r0, [r4, #0x38]
	mov r3, #0
	strh r3, [r4, #0x34]
	ldrsh r1, [r4, #0x32]
	ldrsh r2, [r4, #0x38]
	mov r0, r4
	bl func_020313cc
	strh r0, [r4, #0x32]
	mov r0, #0
	strh r0, [r4, #0x3c]
	mov r0, #1
	str r0, [r4, #0x44]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02031664(void)
{
	ldr r1, [r0, #0x48]
	cmp r1, #1
	bne lbl_0203169c
	ldrsh r2, [r0, #0x3a]
	ldrsh r1, [r0, #0x36]
	cmp r2, r1
	blt lbl_02031690
	mov r1, #0
	str r1, [r0, #0x48]
	mov r0, #1
	bx lr
lbl_02031690:
	add r1, r2, #1
	strh r1, [r0, #0x3a]
	b lbl_020316a4
lbl_0203169c:
	mov r0, #1
	bx lr
lbl_020316a4:
	mov r0, #0
	bx lr
}

extern "C" asm void func_020316ac(void)
{
	ldr r1, [r0, #0x44]
	cmp r1, #1
	bne lbl_020316e4
	ldrsh r2, [r0, #0x3c]
	ldrsh r1, [r0, #0x38]
	cmp r2, r1
	blt lbl_020316d8
	mov r1, #0
	str r1, [r0, #0x44]
	mov r0, #1
	bx lr
lbl_020316d8:
	add r1, r2, #1
	strh r1, [r0, #0x3c]
	b lbl_020316ec
lbl_020316e4:
	mov r0, #1
	bx lr
lbl_020316ec:
	mov r0, #0
	bx lr
}

extern "C" asm void func_020316f4(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x24
	mov r4, r0
	ldr r12, [sp, #0x3c]
	mov r7, r1
	add r0, r4, #0xc
	mov r6, r2
	mov r5, r3
	strh r12, [r4, #0x36]
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, r4
	mov r1, r7
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r1, r6
	mov r2, r7
	add r0, sp, #0
	bl func_02088988
	add r0, sp, #0xc
	add r1, sp, #0
	mov r2, #4
	bl func_02088a9c
	add r0, sp, #0x18
	add r1, sp, #0xc
	mov r2, #8
	bl func_02088bdc
	add r0, r4, #0x18
	add r1, sp, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r1, #0
	ldr r2, [sp, #0x38]
	strh r1, [r4, #0x3a]
	strh r2, [r4, #0x3e]
	mov r0, #2
	strh r5, [r4, #0x40]
	str r0, [r4, #0x50]
	mov r0, #1
	str r0, [r4, #0x48]
	ldr r0, =data_020eed38
	mov r2, r1
	mov r3, r1
	bl func_02088854
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_020317a4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #0x48
	mov r5, r0
	ldrsh r0, [r5, #0x3a]
	mov r4, r1
	mov r1, r0, lsr #0x1f
	rsb r0, r1, r0, lsl #29
	add r0, r1, r0, ror #29
	mov r1, r0, lsr #0x1f
	cmp r0, #4
	rsb r0, r1, r0, lsl #30
	movlt r3, #1
	add r0, r1, r0, ror #30
	mvnge r3, #0
	cmp r0, #2
	rsbge r0, r0, #4
	mul r2, r3, r0
	add r0, sp, #0x30
	add r1, r5, #0x18
	bl func_02088a9c
	add r0, sp, #0x3c
	add r1, sp, #0x30
	mov r2, #2
	bl func_02088bdc
	ldrsh r6, [r5, #0x40]
	ldrsh r2, [r5, #0x3a]
	cmp r2, r6
	bge lbl_02031840
	add r0, sp, #0x18
	add r1, sp, #0x3c
	bl func_02088a9c
	add r0, sp, #0x24
	add r1, sp, #0x18
	mov r2, r6
	bl func_02088bdc
	add r0, sp, #0x3c
	add r1, sp, #0x24
	bl _ZN3dss11Fx32Vector3aSERKS0_
	b lbl_0203187c
lbl_02031840:
	ldrsh r6, [r5, #0x3e]
	cmp r2, r6
	ble lbl_0203187c
	ldrsh r7, [r5, #0x36]
	add r0, sp, #0
	add r1, sp, #0x3c
	sub r2, r7, r2
	bl func_02088a9c
	add r0, sp, #0xc
	add r1, sp, #0
	sub r2, r7, r6
	bl func_02088bdc
	add r0, sp, #0x3c
	add r1, sp, #0xc
	bl _ZN3dss11Fx32Vector3aSERKS0_
lbl_0203187c:
	ldr r0, =data_020eed38
	add r1, sp, #0x3c
	bl func_0208895c
	ldr r0, [r5, #0x4c]
	cmp r0, #1
	bne lbl_020318a4
	ldr r1, =data_020eed38
	mov r0, r4
	bl func_0208895c
	b lbl_020318b0
lbl_020318a4:
	add r1, sp, #0x3c
	mov r0, r4
	bl func_0208895c
lbl_020318b0:
	ldrsh r1, [r5, #0x3a]
	ldrsh r0, [r5, #0x36]
	cmp r1, r0
	addlt sp, sp, #0x48
	ldmltia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r1, =data_020eed38
	mov r0, r4
	bl func_020889fc
	add sp, sp, #0x48
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020318dc(void)
{
	ldrsh r2, [r0, #0x3a]
	ldrsh r1, [r0, #0x36]
	cmp r2, r1
	addlt r1, r2, #1
	strlth r1, [r0, #0x3a]
	movlt r0, #0
	bxlt lr
	mov r1, #0
	str r1, [r0, #0x48]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02031908(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x24
	mov r4, r0
	mov r0, #3
	str r0, [r4, #0x50]
	mov r0, #0
	strh r0, [r4, #0x3e]
	strh r0, [r4, #0x3a]
	mov r12, #2
	add r0, r4, #0xc
	mov r7, r1
	mov r6, r2
	mov r5, r3
	strh r12, [r4, #0x36]
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add r0, sp, #0x18
	mov r1, r6
	mov r2, r7
	bl func_02088988
	add r0, sp, #0x18
	bl func_02089168
	ldr r1, =data_020eed34
	add r0, sp, #0x18
	bl func_02088b10
	mov r1, r7
	add r0, sp, #0xc
	add r2, sp, #0x18
	bl func_020888e8
	mov r0, r4
	add r1, sp, #0xc
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, #6
	mul r0, r5, r0
	strh r0, [r4, #0x40]
	ldrsh r2, [r4, #0x3e]
	add r0, sp, #0
	mov r1, r4
	bl func_02031b04
	add r0, r4, #0x18
	add r1, sp, #0
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r1, #0
	mov r0, #1
	str r0, [r4, #0x48]
	ldr r0, =data_020eed38
	mov r2, r1
	mov r3, r1
	bl func_02088854
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_020319d8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	ldr r0, =data_020eed38
	add r1, r5, #0x18
	bl func_0208895c
	ldr r0, [r5, #0x4c]
	cmp r0, #1
	bne lbl_02031a0c
	ldr r1, =data_020eed38
	mov r0, r4
	bl func_0208895c
	b lbl_02031a18
lbl_02031a0c:
	mov r0, r4
	add r1, r5, #0x18
	bl func_0208895c
lbl_02031a18:
	ldrsh r1, [r5, #0x3a]
	ldrsh r0, [r5, #0x36]
	cmp r1, r0
	ldreqsh r1, [r5, #0x3e]
	ldreqsh r0, [r5, #0x40]
	cmpeq r1, r0
	ldmneia sp!, {r3, r4, r5, pc}
	ldr r1, =data_020eed38
	mov r0, r4
	bl func_020889fc
	mov r1, #0
	ldr r0, =data_020eed38
	mov r2, r1
	mov r3, r1
	bl func_02088854
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02031a5c(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #0xc
	mov r4, r0
	ldrsh r1, [r4, #0x3a]
	ldrsh r0, [r4, #0x36]
	cmp r1, r0
	blt lbl_02031aec
	ldrsh r0, [r4, #0x3e]
	add r0, r0, #1
	strh r0, [r4, #0x3e]
	ldrsh r12, [r4, #0x3e]
	ldrsh r0, [r4, #0x40]
	cmp r12, r0
	ble lbl_02031aac
	mov r0, #0
	str r0, [r4, #0x50]
	str r0, [r4, #0x48]
	add sp, sp, #0xc
	mov r0, #1
	ldmia sp!, {r3, r4, pc}
lbl_02031aac:
	ldr r3, =0x2AAAAAAB
	mov r1, #6
	smull r0, r2, r3, r12
	add r2, r2, r12, lsr #31
	smull r2, r0, r1, r2
	add r0, sp, #0
	mov r1, r4
	sub r2, r12, r2
	bl func_02031b04
	add r1, sp, #0
	add r0, r4, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, #0
	add sp, sp, #0xc
	strh r0, [r4, #0x3a]
	ldmia sp!, {r3, r4, pc}
lbl_02031aec:
	add r0, r1, #1
	strh r0, [r4, #0x3a]
	mov r0, #0
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02031b04(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x44
	mov r6, r0
	add r0, sp, #0x2c
	mov r5, r1
	mov r4, r2
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x38
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x20
	mov r1, r5
	add r2, r5, #0xc
	bl func_02088988
	add r0, sp, #0x2c
	add r1, sp, #0x20
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add r0, sp, #0x2c
	bl func_02089168
	ldr r1, =data_020eed34
	add r0, sp, #0x2c
	bl func_02088b10
	ldr r1, =data_020beccc
	add r0, sp, #0
	bl func_02087110
	ldr r1, =data_020becd0
	add r0, sp, #4
	bl func_02087110
	ldr r2, =data_020eed34
	add r0, sp, #0x38
	add r1, sp, #4
	add r3, sp, #0
	bl func_02088824
	ldr r2, =data_020b5f90
	add r0, sp, #0x14
	ldr r2, [r2, r4, lsl #2]
	add r1, sp, #0x2c
	bl func_02088a9c
	ldr r2, =data_020b5f78
	add r0, sp, #8
	ldr r2, [r2, r4, lsl #2]
	add r1, sp, #0x38
	bl func_02088a9c
	mov r0, r6
	add r1, sp, #0x14
	add r2, sp, #8
	bl func_020888e8
	add sp, sp, #0x44
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02031bd8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #0x18
	mov r7, r0
	mov r5, r2
	add r0, r7, #0xc
	mov r6, r1
	mov r4, r3
	bl _ZN3dss11Fx32Vector3aSERKS0_
	mov r0, r7
	mov r1, r5
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add r0, sp, #0xc
	mov r1, r5
	mov r2, r6
	strh r4, [r7, #0x36]
	mov r3, #0
	strh r3, [r7, #0x3a]
	bl func_02088988
	add r1, sp, #0xc
	add r0, r7, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	ldr r1, =data_020becc8
	add r0, sp, #0
	mov r2, r4
	bl func_02087268
	add r0, sp, #4
	add r1, sp, #0
	mov r2, r4
	bl func_02087268
	add r0, sp, #8
	add r1, sp, #4
	mov r2, #2
	bl func_02087320
	add r0, r7, #0x1c
	add r1, sp, #8
	bl func_020871f4
	mov r1, r4
	add r0, r7, #0x18
	bl func_02088c7c
	mov r0, #4
	str r0, [r7, #0x50]
	mov r0, #1
	str r0, [r7, #0x48]
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02031c90(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	mov r0, r4
	add r1, r5, #0x18
	bl func_0208895c
	ldr r1, =data_020becc8
	add r0, r5, #0x1c
	bl func_02087254
	ldrsh r1, [r5, #0x3a]
	ldrsh r0, [r5, #0x36]
	cmp r1, r0
	ldmltia sp!, {r3, r4, r5, pc}
	mov r0, r4
	mov r1, r5
	bl _ZN3dss11Fx32Vector3aSERKS0_
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02031cd8(void)
{
	ldrsh r2, [r0, #0x3a]
	ldrsh r1, [r0, #0x36]
	cmp r2, r1
	addlt r1, r2, #1
	strlth r1, [r0, #0x3a]
	movlt r0, #0
	bxlt lr
	mov r1, #0
	str r1, [r0, #0x48]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02031d04(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0xc
	mov r5, r0
	mov r4, r3
	mov r12, r1
	mov r1, r2
	add r0, sp, #0
	mov r2, r12
	strh r4, [r5, #0x36]
	mov r3, #0
	strh r3, [r5, #0x3a]
	bl func_02088988
	add r1, sp, #0
	add r0, r5, #0x18
	bl _ZN3dss11Fx32Vector3aSERKS0_
	cmp r4, #0
	beq lbl_02031d54
	mov r1, r4
	add r0, r5, #0x18
	bl func_02088c7c
lbl_02031d54:
	mov r0, #5
	str r0, [r5, #0x50]
	mov r0, #1
	str r0, [r5, #0x48]
	add sp, sp, #0xc
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02031d6c(void)
{
	ldr r12, =func_0208895c
	mov r2, r0
	mov r0, r1
	add r1, r2, #0x18
	bx r12
}

extern "C" asm void func_02031d84(void)
{
	ldrsh r1, [r0, #0x3a]
	add r1, r1, #1
	strh r1, [r0, #0x3a]
	ldrsh r2, [r0, #0x3a]
	ldrsh r1, [r0, #0x36]
	cmp r2, r1
	movlt r0, #0
	bxlt lr
	mov r1, #0
	str r1, [r0, #0x48]
	str r1, [r0, #0x50]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02031db8(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x14
	mov r5, r0
	mov r4, r1
	mov r0, r4
	add r1, r5, #0x18
	bl func_0208895c
	add r0, sp, #0x10
	bl func_020870fc
	add r0, sp, #0xc
	bl func_020870fc
	ldr r1, =data_020becd4
	add r0, sp, #8
	bl func_02087110
	add r1, sp, #8
	mov r0, r5
	bl func_020873c0
	cmp r0, #0
	beq lbl_02031e30
	add r0, sp, #4
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r0, sp, #0x10
	add r1, sp, #4
	bl func_0208718c
	add r0, sp, #0xc
	add r1, r5, #0x18
	bl func_0208718c
	b lbl_02031e58
lbl_02031e30:
	add r0, sp, #0
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, sp, #0x10
	add r1, sp, #0
	bl func_0208718c
	add r0, sp, #0xc
	add r1, r5, #0x1c
	bl func_0208718c
lbl_02031e58:
	ldr r0, [sp, #0x10]
	bl func_02031e84
	mov r4, r0
	ldr r0, [sp, #0xc]
	bl func_02031e84
	cmp r4, r0
	movlt r0, #0
	strlth r0, [r5, #0x3a]
	add sp, sp, #0x14
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02031e84(void)
{
	cmp r0, #0
	rsblt r0, r0, #0
	bx lr
}

extern "C" asm void func_02031e90(void)
{
	ldrsh r1, [r0, #0x3a]
	cmp r1, #0
	movne r0, #0
	bxne lr
	mov r1, #0
	str r1, [r0, #0x48]
	str r1, [r0, #0x50]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02031eb4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #8
	mov r6, r1
	mov r7, r0
	mov r1, #0
	mov r5, r2
	mov r4, r3
	str r1, [r7, #0x48]
	mov r12, #6
	str r12, [r7, #0x50]
	mov r12, #1
	mov r2, r1
	mov r3, r1
	strh r12, [r7, #0x3a]
	bl func_02088854
	mov r1, #0
	mov r2, r1
	mov r3, r1
	add r0, r7, #0x18
	bl func_02088854
	cmp r5, #3
	addls pc, pc, r5, lsl #2
	b lbl_02031fb8
	b lbl_02031f20
	b lbl_02031f40
	b lbl_02031f60
	b lbl_02031f90
lbl_02031f20:
	mov r1, r4
	add r0, r7, #0x1c
	bl func_0208718c
	mov r1, r6
	add r0, r7, #4
	bl func_0208718c
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02031f40:
	mov r1, r4
	add r0, r7, #0x18
	bl func_0208718c
	mov r0, r7
	mov r1, r6
	bl func_0208718c
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02031f60:
	add r0, sp, #4
	mov r1, r4
	mvn r2, #0
	bl func_02087268
	add r1, sp, #4
	add r0, r7, #0x1c
	bl func_0208718c
	mov r1, r6
	add r0, r7, #4
	bl func_0208718c
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02031f90:
	add r0, sp, #0
	mov r1, r4
	mvn r2, #0
	bl func_02087268
	add r1, sp, #0
	add r0, r7, #0x18
	bl func_0208718c
	mov r0, r7
	mov r1, r6
	bl func_0208718c
lbl_02031fb8:
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02031fc0(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x3c
	mov r4, r1
	mov r1, #0
	mov r5, r0
	mov r0, r4
	mov r2, r1
	mov r3, #0x1000
	bl func_02088854
	add r0, sp, #0xc
	bl func_020885f8
	add r0, sp, #0xc
	mov r1, r5
	bl func_020886d0
	add r0, sp, #0
	add r1, sp, #0xc
	mov r2, r4
	bl func_02088670
	mov r0, r4
	add r1, sp, #0
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add sp, sp, #0x3c
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_0203201c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r4, r2
	mov r5, r1
	mov r1, r4
	mov r6, r0
	bl func_02087420
	cmp r0, #0
	beq lbl_020320a4
	mov r0, r5
	mov r1, r4
	bl func_020873f0
	cmp r0, #0
	beq lbl_020320a4
	add r0, r6, #4
	add r1, r4, #4
	bl func_02087420
	cmp r0, #0
	beq lbl_020320a4
	add r0, r5, #4
	add r1, r4, #4
	bl func_020873f0
	cmp r0, #0
	beq lbl_020320a4
	add r0, r6, #8
	add r1, r4, #8
	bl func_02087420
	cmp r0, #0
	beq lbl_020320a4
	add r0, r5, #8
	add r1, r4, #8
	bl func_020873f0
	cmp r0, #0
	movne r0, #1
	ldmneia sp!, {r4, r5, r6, pc}
lbl_020320a4:
	mov r0, #0
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020320ac(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x40
	mov r9, r0
	mov r7, r2
	mov r8, r1
	mov r0, r7
	mov r1, r9
	mov r5, r3
	ldr r4, [sp, #0x60]
	ldr r6, [sp, #0x64]
	bl func_02087408
	cmp r0, #0
	beq lbl_02032168
	mov r0, r5
	mov r1, r9
	bl func_020873d8
	cmp r0, #0
	beq lbl_02032168
	add r0, r7, #4
	add r1, r9, #4
	bl func_02087408
	cmp r0, #0
	beq lbl_02032168
	add r0, r5, #4
	add r1, r9, #4
	bl func_020873d8
	cmp r0, #0
	beq lbl_02032168
	add r0, r7, #8
	add r1, r9, #8
	bl func_02087408
	cmp r0, #0
	beq lbl_02032168
	add r0, r5, #8
	add r1, r9, #8
	bl func_020873d8
	cmp r0, #0
	beq lbl_02032168
	cmp r6, #7
	addeq sp, sp, #0x40
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	cmp r4, #0
	bne lbl_02032188
	add sp, sp, #0x40
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02032168:
	cmp r6, #6
	addeq sp, sp, #0x40
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	cmp r4, #0
	addeq sp, sp, #0x40
	moveq r0, #1
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02032188:
	add r0, sp, #0x10
	mov r1, r7
	mov r2, r5
	bl func_020888e8
	add r0, sp, #0x1c
	add r1, sp, #0x10
	mov r2, #2
	bl func_02088bdc
	add r0, sp, #0x34
	add r1, sp, #0x1c
	mov r2, r9
	bl func_02088988
	add r0, sp, #0x28
	bl _ZN3dss11Fx32Vector3C1Ev
	cmp r4, #5
	addls pc, pc, r4, lsl #2
	b lbl_02032254
	b lbl_02032254
	b lbl_020321e4
	b lbl_020321f4
	b lbl_0203220c
	b lbl_02032224
	b lbl_0203223c
lbl_020321e4:
	add r1, sp, #0x28
	mov r0, r8
	bl func_02031fc0
	b lbl_02032254
lbl_020321f4:
	mov r1, #0
	add r0, sp, #0x28
	mov r2, r1
	mov r3, #0x1000
	bl func_02088854
	b lbl_02032254
lbl_0203220c:
	mov r2, #0
	add r0, sp, #0x28
	mov r3, r2
	mov r1, #0x1000
	bl func_02088854
	b lbl_02032254
lbl_02032224:
	mov r1, #0
	add r0, sp, #0x28
	mov r2, r1
	sub r3, r1, #0x1000
	bl func_02088854
	b lbl_02032254
lbl_0203223c:
	mov r1, #0x1000
	mov r2, #0
	add r0, sp, #0x28
	mov r3, r2
	rsb r1, r1, #0
	bl func_02088854
lbl_02032254:
	add r0, sp, #0xc
	add r1, sp, #0x28
	add r2, sp, #0x34
	bl func_02088d40
	cmp r4, #1
	bne lbl_020322ec
	ldr r1, =data_020becd8
	add r0, sp, #8
	mov r4, #1
	mov r5, #0
	bl func_02087110
	add r0, sp, #0xc
	add r1, sp, #8
	bl func_020873d8
	cmp r0, #0
	beq lbl_0203229c
	cmp r6, #6
	moveq r5, r4
lbl_0203229c:
	cmp r5, #0
	bne lbl_020322d8
	ldr r1, =data_020bece0
	add r0, sp, #4
	mov r5, #0
	bl func_02087110
	add r0, sp, #0xc
	add r1, sp, #4
	bl func_02087408
	cmp r0, #0
	beq lbl_020322d0
	cmp r6, #7
	moveq r5, #1
lbl_020322d0:
	cmp r5, #0
	moveq r4, #0
lbl_020322d8:
	cmp r4, #0
	beq lbl_02032314
	add sp, sp, #0x40
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_020322ec:
	ldr r1, =data_020becdc
	add r0, sp, #0
	bl func_02087110
	add r0, sp, #0xc
	add r1, sp, #0
	bl func_020873d8
	cmp r0, #0
	addne sp, sp, #0x40
	movne r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02032314:
	mov r0, #0
	add sp, sp, #0x40
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0203232c(void)
{
	cmp r0, #4
	beq lbl_0203236c
	ldr r2, =data_020b5faa
	mov r0, r0, lsl #1
	ldrsh r2, [r2, r0]
	mov r3, #0
	sub r0, r2, #0x1000
	cmp r0, r1
	bgt lbl_0203235c
	add r0, r2, #0x1000
	cmp r1, r0
	movlt r3, #1
lbl_0203235c:
	cmp r3, #0
	movne r0, #1
	moveq r0, #0
	bx lr
lbl_0203236c:
	cmp r1, #0x7000
	bge lbl_02032384
	mov r0, #0x7000
	rsb r0, r0, #0
	cmp r1, r0
	bge lbl_0203238c
lbl_02032384:
	mov r0, #1
	bx lr
lbl_0203238c:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02032398(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x20
	mov r5, r1
	mov r6, r0
	ldr r1, =data_020bece4
	add r0, sp, #4
	mov r4, r2
	bl func_02087110
	add r1, sp, #4
	mov r0, r4
	bl func_020873a8
	cmp r0, #0
	addne sp, sp, #0x20
	movne r0, #0
	ldmneia sp!, {r4, r5, r6, pc}
	add r0, sp, #8
	mov r1, r5
	mov r2, r6
	bl func_02088988
	add r0, sp, #0x14
	add r1, sp, #8
	mov r2, r4
	bl func_02088b68
	add r0, sp, #0
	add r1, sp, #0x14
	bl func_02088e90
	ldr r2, [sp]
	mov r1, #1
	mov r0, r2, asr #0xb
	add r0, r2, r0, lsr #20
	mov r0, r0, asr #0xc
	bl func_02008eb8
	add sp, sp, #0x20
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02032424(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	mov r6, r1
	mov r5, r2
	mov r4, r3
	bl _ZN3dss11Fx32Vector3C1Ev
	str r6, [r7]
	str r5, [r7, #4]
	str r4, [r7, #8]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0203244c(void)
{
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	b lbl_02032490
	b lbl_02032468
	b lbl_02032470
	b lbl_02032478
	b lbl_02032484
lbl_02032468:
	mov r0, #0
	bx lr
lbl_02032470:
	mov r0, #0x4000
	bx lr
lbl_02032478:
	mov r0, #0x8000
	rsb r0, r0, #0
	bx lr
lbl_02032484:
	mov r0, #0x4000
	rsb r0, r0, #0
	bx lr
lbl_02032490:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02032498(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r6, r1
	ldr r1, [sp, #0x18]
	mov r7, r0
	mov r5, r2
	mov r4, r3
	bl _ZN3dss4Fx32C1ERKS0_
	ldr r1, [sp, #0x18]
	add r0, r7, #4
	add r1, r1, #4
	bl _ZN3dss4Fx32C1ERKS0_
	ldr r1, [sp, #0x18]
	add r0, r7, #8
	add r1, r1, #8
	bl _ZN3dss4Fx32C1ERKS0_
	add r0, sp, #0
	bl func_020870fc
	str r4, [sp]
	cmp r5, #1
	bne lbl_02032534
	cmp r6, #0
	beq lbl_02032504
	cmp r6, #1
	beq lbl_02032514
	cmp r6, #2
	beq lbl_02032524
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032504:
	add r1, sp, #0
	mov r0, r7
	bl func_020871f4
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032514:
	add r1, sp, #0
	add r0, r7, #4
	bl func_020871f4
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032524:
	add r1, sp, #0
	add r0, r7, #8
	bl func_020871f4
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032534:
	cmp r5, #0
	ldmneia sp!, {r3, r4, r5, r6, r7, pc}
	cmp r6, #0
	beq lbl_02032558
	cmp r6, #1
	beq lbl_02032568
	cmp r6, #2
	beq lbl_02032578
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032558:
	add r1, sp, #0
	mov r0, r7
	bl func_0208718c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032568:
	add r1, sp, #0
	add r0, r7, #4
	bl func_0208718c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02032578:
	add r1, sp, #0
	add r0, r7, #8
	bl func_0208718c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

#pragma thumb on
