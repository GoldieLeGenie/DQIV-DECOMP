/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02087208(void);
    void func_0208722c(void);
    void func_02087254(void);
    void func_02087268(void);
    void func_020872a0(void);
    void func_020872d8(void);
    void func_020872fc(void);
    void func_02087320(void);
    void func_02087348(void);
    void func_02087370(void);
    void func_0208738c(void);
    void func_020873a8(void);
    void func_020873c0(void);
    void func_020873d8(void);
    void func_020873f0(void);
    void func_02087408(void);
    void func_02087420(void);
    void func_02087438(void);
    void func_02087458(void);
    void func_02087474(void);
    void func_02087484(void);
    void func_02087490(void);
    void func_0208749c(void);
    void func_020874c0(void);
    void func_020874cc(void);
    void func_020874d8(void);
    void func_02087504(void);
    void func_02087528(void);
    void func_02087538(void);
    void func_0208753c(void);
    void func_02087564(void);
    void func_02087590(void);
    void func_020875a4(void);
    void func_020875b8(void);
    void func_020875ec(void);
    void func_02087610(void);
    void func_02087634(void);
    void func_02087674(void);
    void func_020876a8(void);
    void func_020876dc(void);
    void func_020876f4(void);
    void func_0208771c(void);
    void func_02087734(void);
    void func_020877b8(void);
    void func_02087800(void);
    void func_02087850(void);
    void func_020878b8(void);
    void func_020878e8(void);
    void func_02087900(void);
    void func_02087940(void);
    void func_020879dc(void);
    void func_02087a74(void);
    void func_02087bd0(void);
    void func_02087c00(void);
    void func_02087c98(void);
    void func_02087d48(void);
    void func_02087e08(void);
    void func_02087ee4(void);
    void func_02087f14(void);
    void func_02087fbc(void);
    void func_02088078(void);
    void func_020880c4(void);
    void func_020880ec(void);
    void func_02088110(void);
    void func_02088190(void);
    void func_020881bc(void);
    void func_020881d8(void);
    void func_02088238(void);
    void func_02088258(void);
    void data_020c4524(void);
    void data_020c4544(void);
    void data_020c495c(void);
    void data_0211fd34(void);
    void data_0211fd44(void);
    void func_02003250(void);
    void func_02005480(void);
    void func_020058bc(void);
    void func_02005930(void);
    void func_020059c0(void);
    void func_02061ad0(void);
    void func_02061b24(void);
    void func_02062e04(void);
    void func_02062e50(void);
    void func_020870fc(void);
}

#pragma thumb off

extern "C" asm void func_02087208(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r6, r0
	mov r4, r2
	bl func_020870fc
	ldr r0, [r5]
	sub r0, r0, r4
	str r0, [r6]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208722c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl func_020870fc
	ldr r1, [r5]
	ldr r0, [r4]
	sub r0, r1, r0
	str r0, [r6]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02087254(void)
{
	ldr r2, [r0]
	ldr r1, [r1]
	sub r1, r2, r1
	str r1, [r0]
	bx lr
}

extern "C" asm void func_02087268(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r1
	mov r4, r0
	mov r5, r2
	bl func_020870fc
	ldr r1, [r6]
	mov r0, r5, lsl #0xc
	smull r2, r0, r1, r0
	adds r1, r2, #0x800
	adc r0, r0, #0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	str r1, [r4]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020872a0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r1
	mov r5, r2
	mov r4, r0
	bl func_020870fc
	ldr r1, [r6]
	ldr r0, [r5]
	smull r2, r0, r1, r0
	adds r1, r2, #0x800
	adc r0, r0, #0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	str r1, [r4]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020872d8(void)
{
	ldr r2, [r0]
	mov r1, r1, lsl #0xc
	smull r3, r1, r2, r1
	adds r2, r3, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	str r2, [r0]
	bx lr
}

extern "C" asm void func_020872fc(void)
{
	ldr r2, [r0]
	ldr r1, [r1]
	smull r3, r1, r2, r1
	adds r2, r3, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	str r2, [r0]
	bx lr
}

extern "C" asm void func_02087320(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r6, r0
	mov r4, r2
	bl func_020870fc
	ldr r0, [r5]
	mov r1, r4, lsl #0xc
	bl func_02062e04
	str r0, [r6]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02087348(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl func_020870fc
	ldr r0, [r5]
	ldr r1, [r4]
	bl func_02062e04
	str r0, [r6]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02087370(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4]
	mov r1, r1, lsl #0xc
	bl func_02062e04
	str r0, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208738c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4]
	ldr r1, [r1]
	bl func_02062e04
	str r0, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020873a8(void)
{
	ldr r2, [r0]
	ldr r0, [r1]
	cmp r2, r0
	moveq r0, #1
	movne r0, #0
	bx lr
}

extern "C" asm void func_020873c0(void)
{
	stmdb sp!, {r3, lr}
	bl func_020873a8
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020873d8(void)
{
	ldr r2, [r0]
	ldr r0, [r1]
	cmp r2, r0
	movgt r0, #1
	movle r0, #0
	bx lr
}

extern "C" asm void func_020873f0(void)
{
	ldr r2, [r0]
	ldr r0, [r1]
	cmp r2, r0
	movge r0, #1
	movlt r0, #0
	bx lr
}

extern "C" asm void func_02087408(void)
{
	ldr r2, [r0]
	ldr r0, [r1]
	cmp r2, r0
	movlt r0, #1
	movge r0, #0
	bx lr
}

extern "C" asm void func_02087420(void)
{
	ldr r2, [r0]
	ldr r0, [r1]
	cmp r2, r0
	movle r0, #1
	movgt r0, #0
	bx lr
}

extern "C" asm void func_02087438(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	bl func_020870fc
	ldr r0, [r4]
	bl func_02062e50
	str r0, [r5]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02087458(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, [r0]
	bl func_02005930
	ldr r1, =0x45800000
	bl func_02005480
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02087474(void)
{
	ldr r1, [r1]
	mov r1, r1, lsl #0xc
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_02087484(void)
{
	ldrsh r1, [r1]
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_02087490(void)
{
	mov r1, r1, lsl #0xc
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_0208749c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =0x45800000
	bl func_020059c0
	bl func_020058bc
	strh r0, [r4]
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020874c0(void)
{
	ldrsh r1, [r1]
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_020874cc(void)
{
	ldr r1, [r1]
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_020874d8(void)
{
	mov r3, #0
	strh r3, [r0]
	ldrsh r3, [r1]
	mov r1, r2, lsl #0xc
	smull r2, r1, r3, r1
	adds r2, r2, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	strh r2, [r0]
	bx lr
}

extern "C" asm void func_02087504(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	mov r0, #0
	strh r0, [r4]
	ldrsh r0, [r1]
	mov r1, r2, lsl #0xc
	bl func_02062e04
	strh r0, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02087528(void)
{
	mov r1, #0
	str r1, [r0]
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02087538(void)
{
	bx lr
}

extern "C" asm void func_0208753c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	bl func_02087564
	mov r1, r4
	mov r0, #0
	bl func_02061ad0
	mov r0, #1
	stmia r5, {r0, r4}
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02087564(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4]
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4, #4]
	mov r0, #0
	bl func_02061b24
	mov r0, #0
	str r0, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02087590(void)
{
	ldr r12, =func_02061ad0
	mov r1, r0
	mov r0, #0
	bx r12
}

extern "C" asm void func_020875a4(void)
{
	ldr r12, =func_02061b24
	mov r1, r0
	mov r0, #0
	bx r12
}

extern "C" asm void func_020875b8(void)
{
	ldr r2, =data_020c4524
	mov r1, #0
	str r2, [r0]
	str r1, [r0, #4]
	str r1, [r0, #8]
	str r1, [r0, #0xc]
	str r1, [r0, #0x10]
	str r1, [r0, #0x14]
	str r1, [r0, #0x18]
	str r1, [r0, #0x1c]
	str r1, [r0, #0x20]
	bx lr
}

extern "C" asm void func_020875ec(void)
{
	str r1, [r0, #8]
	mov r1, #0
	str r1, [r0, #0xc]
	str r1, [r0, #0x10]
	str r1, [r0, #0x1c]
	str r1, [r0, #0x14]
	str r1, [r0, #0x20]
	str r1, [r0, #0x18]
	bx lr
}

extern "C" asm void func_02087610(void)
{
	str r1, [r0, #8]
	mov r1, #0
	str r1, [r0, #0xc]
	str r1, [r0, #0x10]
	str r1, [r0, #0x1c]
	str r1, [r0, #0x14]
	str r1, [r0, #0x20]
	str r2, [r0, #0x18]
	bx lr
}

extern "C" asm void func_02087634(void)
{
	str r1, [r0, #8]
	mov r3, #0
	str r3, [r0, #0xc]
	str r3, [r0, #0x10]
	str r3, [r0, #0x1c]
	str r3, [r0, #0x14]
	str r3, [r0, #0x20]
	str r2, [r0, #0x18]
	ldr r2, [r0, #8]
	ldr r1, [r0, #0xc]
	strb r3, [r2, r1]
	ldr r1, [r0, #0xc]
	ldr r2, [r0, #8]
	add r0, r1, #1
	strb r3, [r2, r0]
	bx lr
}

extern "C" asm void func_02087674(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, [r4, #0x1c]
	cmp r1, #0
	bne lbl_020876a0
	ldr r1, [r0]
	ldr r1, [r1, #0x10]
	blx r1
	str r0, [r4, #0x10]
	mov r0, #1
	str r0, [r4, #0x1c]
lbl_020876a0:
	ldr r0, [r4, #0x10]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020876a8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, [r4, #0x20]
	cmp r1, #0
	bne lbl_020876d4
	ldr r1, [r0]
	ldr r1, [r1, #0x14]
	blx r1
	str r0, [r4, #0x14]
	mov r0, #1
	str r0, [r4, #0x20]
lbl_020876d4:
	ldr r0, [r4, #0x14]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020876dc(void)
{
	ldr r2, [r0, #8]
	mov r3, #0
	strb r3, [r2, r1]
	str r3, [r0, #0x1c]
	str r3, [r0, #0x20]
	bx lr
}

extern "C" asm void func_020876f4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020875b8
	ldr r0, =data_020c4544
	mov r1, #1
	str r0, [r4]
	mov r0, r4
	str r1, [r4, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208771c(void)
{
	ldr r2, [r0, #8]
	ldr r1, [r0, #0xc]
	ldr r12, =func_02087940
	add r1, r2, r1
	bx r12
}

extern "C" asm void func_02087734(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r0
	mov r6, r1
	bl func_02087674
	mov r0, r5
	bl func_020876a8
	mov r4, r0
	ldr r0, [r5, #0x18]
	add r1, r4, #4
	cmp r1, r0
	movhi r0, #0
	ldmhiia sp!, {r4, r5, r6, pc}
	ldr r1, [r5, #8]
	mov r0, r5
	mov r2, r6
	add r1, r1, r4
	bl func_020879dc
	ldr r2, [r5, #0x14]
	ldr r1, [r5, #0x18]
	add r2, r2, r0
	cmp r2, r1
	ldrcs r1, [r5, #8]
	movcs r0, #0
	strcsb r0, [r1, r4]
	ldmcsia sp!, {r4, r5, r6, pc}
	ldr r1, [r5, #0x10]
	add r1, r1, #1
	str r1, [r5, #0x10]
	ldr r1, [r5, #0x14]
	add r0, r1, r0
	str r0, [r5, #0x14]
	mov r0, #1
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020877b8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r2, [r4, #8]
	ldr r1, [r4, #0xc]
	add r1, r2, r1
	bl func_02087900
	mvn r1, #0
	cmp r0, r1
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4, #0xc]
	add r0, r1, r0
	str r0, [r4, #0xc]
	mov r0, #1
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02087800(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #0xc]
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	beq lbl_02087848
lbl_0208781c:
	ldr r1, [r4, #0xc]
	mov r0, r4
	sub r2, r1, #1
	str r2, [r4, #0xc]
	ldr r1, [r4, #8]
	add r1, r1, r2
	bl func_020878e8
	cmp r0, #1
	ldrne r0, [r4, #0xc]
	cmpne r0, #0
	bne lbl_0208781c
lbl_02087848:
	mov r0, #1
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02087850(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r1, [r6, #8]
	cmp r1, #0
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r4, [r6, #0xc]
	bl func_02087900
	mov r5, #0
	mov r0, r6
	str r5, [r6, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	beq lbl_020878ac
lbl_02087890:
	mov r0, r6
	ldr r1, [r0]
	add r5, r5, #1
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	bne lbl_02087890
lbl_020878ac:
	mov r0, r5
	str r4, [r6, #0xc]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020878b8(void)
{
	ldr r2, [r0, #8]
	mov r0, #0
	cmp r2, #0
	bxeq lr
	ldrb r1, [r2]
	cmp r1, #0
	bxeq lr
lbl_020878d4:
	ldrb r1, [r2, #1]!
	add r0, r0, #1
	cmp r1, #0
	bne lbl_020878d4
	bx lr
}

extern "C" asm void func_020878e8(void)
{
	ldrb r0, [r1]
	and r0, r0, #0xc0
	cmp r0, #0x80
	movne r0, #1
	moveq r0, #0
	bx lr
}

extern "C" asm void func_02087900(void)
{
	ldrb r1, [r1]
	cmp r1, #0
	moveq r0, #0
	bxeq lr
	tst r1, #0x80
	moveq r0, #1
	bxeq lr
	and r0, r1, #0xe0
	cmp r0, #0xc0
	moveq r0, #2
	bxeq lr
	and r0, r1, #0xf0
	cmp r0, #0xe0
	moveq r0, #3
	mvnne r0, #0
	bx lr
}

extern "C" asm void func_02087940(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r1
	bl func_02087900
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	cmp r0, #1
	ldreqb r0, [r4]
	ldmeqia sp!, {r4, pc}
	cmp r0, #2
	bne lbl_02087990
	ldrb r1, [r4]
	ldrb r0, [r4, #1]
	and r2, r1, #0x1f
	and r1, r0, #0x3f
	mov r0, r2, lsl #0x16
	orr r0, r1, r0, lsr #16
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r4, pc}
lbl_02087990:
	cmp r0, #3
	ldrne r0, =0x0000FFFF
	ldmneia sp!, {r4, pc}
	ldrb r1, [r4, #1]
	ldrb r2, [r4]
	ldrb r0, [r4, #2]
	and r1, r1, #0x3f
	and r3, r2, #0xf
	and r2, r0, #0x3f
	mov r1, r1, lsl #0x16
	mov r0, r3, lsl #0x1c
	mov r3, r1, lsr #0x10
	mov r1, r2, lsl #0x10
	orr r0, r3, r0, lsr #16
	orr r0, r0, r1, lsr #16
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020879dc(void)
{
	cmp r2, #0x7f
	bhi lbl_020879fc
	and r0, r2, #0x7f
	strb r0, [r1]
	mov r0, #0
	strb r0, [r1, #1]
	mov r0, #1
	bx lr
lbl_020879fc:
	ldr r0, =0x000007FF
	cmp r2, r0
	bhi lbl_02087a34
	mov r0, r2, asr #6
	and r0, r0, #0x1f
	orr r3, r0, #0xc0
	and r0, r2, #0x3f
	strb r3, [r1]
	orr r0, r0, #0x80
	strb r0, [r1, #1]
	mov r0, #0
	strb r0, [r1, #2]
	mov r0, #2
	bx lr
lbl_02087a34:
	mov r0, r2, asr #0xc
	and r3, r0, #0xf
	mov r0, r2, asr #6
	orr r12, r3, #0xe0
	and r3, r0, #0x3f
	and r0, r2, #0x3f
	strb r12, [r1]
	orr r2, r3, #0x80
	strb r2, [r1, #1]
	orr r0, r0, #0x80
	strb r0, [r1, #2]
	mov r0, #0
	strb r0, [r1, #3]
	mov r0, #3
	bx lr
}

extern "C" asm void func_02087a74(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x24
	mov r10, r0
	add r0, sp, #0
	mov r5, r1
	mov r4, r2
	mov r9, #0
	bl func_020876f4
	add r0, sp, #0
	mov r1, r5
	mov r2, r4
	bl func_02087634
	ldr r8, =0x0000FFFF
	ldr r6, =0x00002026
	sub r7, r8, #0xf1
	sub r5, r8, #0xe0
	sub r4, r8, #0xfe
	mov r11, r9
lbl_02087abc:
	mov r0, r10
	ldr r1, [r0]
	ldr r1, [r1]
	blx r1
	cmp r0, #0
	cmpne r0, r8
	beq lbl_02087b40
	mov r1, r11
	cmp r0, #9
	moveq r1, #1
	cmp r0, #0x20
	moveq r1, #1
	cmp r0, #0xd
	moveq r1, #1
	cmp r0, #0xa
	moveq r1, #1
	cmp r0, #0x3000
	moveq r1, #1
	cmp r0, r7
	moveq r1, #1
	cmp r0, r6
	moveq r1, #1
	cmp r0, r5
	moveq r1, #1
	cmp r0, r4
	moveq r1, #1
	cmp r1, #0
	beq lbl_02087b40
	mov r0, r10
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	b lbl_02087abc
lbl_02087b40:
	ldr r7, =0x0000FFFF
	ldr r11, =0x00002026
	sub r6, r7, #0xf1
	sub r5, r7, #0xe0
	sub r4, r7, #0xfe
lbl_02087b54:
	mov r0, r10
	ldr r1, [r0]
	ldr r1, [r1]
	blx r1
	mov r8, r0
	mov r0, r10
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r8, #0
	cmpne r8, r7
	cmpne r8, #9
	cmpne r8, #0x20
	cmpne r8, #0xd
	cmpne r8, #0xa
	cmpne r8, #0x3000
	cmpne r8, r6
	cmpne r8, r11
	cmpne r8, r5
	cmpne r8, r4
	beq lbl_02087bbc
	add r0, sp, #0
	mov r1, r8
	bl func_02087734
	mov r9, #1
	b lbl_02087b54
lbl_02087bbc:
	mov r0, r9
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02087bd0(void)
{
	stmdb sp!, {r3, lr}
	ldr lr, =data_0211fd34
	ldr r12, =data_0211fd44
	str r0, [lr, #0xc]
	str r2, [lr]
	str r1, [lr, #8]
	str r3, [lr, #4]
	mov r0, #0
	strb r0, [r12]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02087c00(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #0x48
	mov r6, r0
	add r0, sp, #0x24
	mov r5, r1
	mov r4, r2
	bl func_020876f4
	add r0, sp, #0x24
	mov r1, r6
	mov r2, r5
	bl func_02087634
	add r0, sp, #0
	bl func_020880c4
	add r0, sp, #0
	mov r1, r4
	bl func_020875ec
	ldr r4, =0x0000FFFF
	add r5, sp, #0x24
	add r7, sp, #0
lbl_02087c4c:
	mov r0, r7
	bl func_020880ec
	mov r6, r0
	mov r0, r7
	bl func_02088190
	cmp r6, #0
	beq lbl_02087c88
	cmp r6, r4
	addeq sp, sp, #0x48
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	mov r0, r5
	mov r1, r6
	bl func_02087734
	b lbl_02087c4c
lbl_02087c88:
	mov r0, #1
	add sp, sp, #0x48
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02087c98(void)
{
	cmp r0, #0x1f
	bxls lr
	cmp r0, #0x7f
	bxls lr
	cmp r0, #0xff
	movls r0, #0x3f
	bxls lr
	ldr r1, =data_0211fd34
	mov r12, #0
	ldr r2, [r1, #8]
	ldr r3, [r1, #0xc]
	movs r2, r2, lsr #1
	beq lbl_02087cf8
lbl_02087ccc:
	mov r1, r12, lsl #1
	ldrh r1, [r3, r1]
	cmp r0, r1
	bne lbl_02087cec
	add r0, r12, #0x8100
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	bx lr
lbl_02087cec:
	add r12, r12, #1
	cmp r12, r2
	bcc lbl_02087ccc
lbl_02087cf8:
	ldr r1, =data_0211fd34
	mov r12, #0
	ldr r2, [r1, #4]
	ldr r3, [r1]
	movs r2, r2, lsr #1
	beq lbl_02087d3c
lbl_02087d10:
	mov r1, r12, lsl #1
	ldrh r1, [r3, r1]
	cmp r0, r1
	bne lbl_02087d30
	add r0, r12, #0xe000
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	bx lr
lbl_02087d30:
	add r12, r12, #1
	cmp r12, r2
	bcc lbl_02087d10
lbl_02087d3c:
	mov r0, #0x3f
	bx lr
}

extern "C" asm void func_02087d48(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x24
	mov r4, r0
	add r0, sp, #0
	mov r5, r2
	mov r6, r1
	bl func_020876f4
	add r0, sp, #0
	mov r1, r5
	bl func_020875ec
	ldr r5, =0x0000FFFF
	mov r9, #0
	sub r6, r6, #2
	add r8, sp, #0
lbl_02087d80:
	mov r0, r8
	bl func_0208771c
	mov r7, r0
	mov r0, r8
	bl func_020877b8
	cmp r7, #0
	beq lbl_02087dec
	cmp r7, r5
	addeq sp, sp, #0x24
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	mov r0, r7
	bl func_02087c98
	cmp r0, #0x100
	strccb r0, [r4], #1
	addcc r9, r9, #1
	bcc lbl_02087dd8
	mov r1, r0, asr #8
	strb r1, [r4]
	strb r0, [r4, #1]
	add r4, r4, #2
	add r9, r9, #2
lbl_02087dd8:
	cmp r9, r6
	bls lbl_02087d80
	add sp, sp, #0x24
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
lbl_02087dec:
	mov r0, #0
	strb r0, [r4]
	strb r0, [r4, #1]
	mov r0, #1
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02087e08(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x24
	mov r5, r0
	add r0, sp, #0
	mov r4, r1
	mov r6, r2
	bl func_020876f4
	add r0, sp, #0
	mov r1, r5
	mov r2, r4
	bl func_02087634
	ldrb r0, [r6]
	cmp r0, #0
	beq lbl_02087ed4
	ldr r7, =data_0211fd34
	mov r4, #0
	add r5, sp, #0
lbl_02087e4c:
	cmp r0, #0x80
	bcs lbl_02087e64
	ldrb r1, [r6], #1
	mov r0, r5
	bl func_02087734
	b lbl_02087ec8
lbl_02087e64:
	ldrb r0, [r6]
	ldrb r1, [r6, #1]
	mov r2, r4
	cmp r0, #0x81
	add r6, r6, #2
	bcc lbl_02087e8c
	cmp r0, #0x9f
	subls r0, r0, #0x81
	ldrls r2, [r7, #0xc]
	andls r0, r0, #0xff
lbl_02087e8c:
	cmp r0, #0xe0
	bcc lbl_02087ea4
	cmp r0, #0xef
	subls r0, r0, #0xe0
	ldrls r2, [r7]
	andls r0, r0, #0xff
lbl_02087ea4:
	cmp r2, #0
	beq lbl_02087ec8
	add r0, r1, r0, lsl #8
	mov r0, r0, lsl #1
	ldrh r1, [r2, r0]
	cmp r1, #0
	beq lbl_02087ec8
	mov r0, r5
	bl func_02087734
lbl_02087ec8:
	ldrb r0, [r6]
	cmp r0, #0
	bne lbl_02087e4c
lbl_02087ed4:
	mov r0, #1
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_02087ee4(void)
{
	ldrh r3, [r1]
	cmp r3, #0
	beq lbl_02087f0c
lbl_02087ef0:
	cmp r2, r3
	ldreqh r0, [r0]
	bxeq lr
	ldrh r3, [r1, #2]!
	add r0, r0, #2
	cmp r3, #0
	bne lbl_02087ef0
lbl_02087f0c:
	mov r0, r2
	bx lr
}

extern "C" asm void func_02087f14(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x48
	mov r5, r0
	add r0, sp, #0x24
	mov r4, r1
	mov r7, r2
	mov r6, r3
	bl func_020876f4
	ldr r1, [sp, #0x68]
	add r0, sp, #0x24
	bl func_020875ec
	add r0, sp, #0
	bl func_020876f4
	mov r1, r7
	mov r2, r6
	add r0, sp, #0
	bl func_02087634
	ldr r6, =0x0000FFFF
	add r9, sp, #0x24
	add r7, sp, #0
lbl_02087f64:
	mov r0, r9
	bl func_0208771c
	movs r8, r0
	beq lbl_02087fac
	cmp r8, r6
	addeq sp, sp, #0x48
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	mov r0, r9
	bl func_020877b8
	mov r0, r5
	mov r1, r4
	mov r2, r8
	bl func_02087ee4
	mov r1, r0
	mov r0, r7
	bl func_02087734
	b lbl_02087f64
lbl_02087fac:
	mov r0, #1
	add sp, sp, #0x48
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02087fbc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x48
	mov r5, r0
	add r0, sp, #0x24
	mov r4, r1
	mov r7, r2
	mov r6, r3
	ldr r10, [sp, #0x6c]
	bl func_020876f4
	ldr r1, [sp, #0x68]
	add r0, sp, #0x24
	bl func_020875ec
	add r0, sp, #0
	bl func_020876f4
	mov r1, r7
	mov r2, r6
	add r0, sp, #0
	bl func_02087634
	ldr r6, =0x0000FFFF
	add r8, sp, #0x24
	add r7, sp, #0
lbl_02088010:
	mov r0, r8
	bl func_0208771c
	movs r9, r0
	beq lbl_02088068
	cmp r9, r6
	addeq sp, sp, #0x48
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	mov r0, r8
	bl func_020877b8
	cmp r10, #0
	ble lbl_02088058
	mov r0, r5
	mov r1, r4
	mov r2, r9
	bl func_02087ee4
	mov r9, r0
	sub r10, r10, #1
lbl_02088058:
	mov r0, r7
	mov r1, r9
	bl func_02087734
	b lbl_02088010
lbl_02088068:
	mov r0, #1
	add sp, sp, #0x48
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02088078(void)
{
	stmdb sp!, {r3, lr}
	mov r2, r0
	ldr r0, =data_0211fd44
	mov r1, #0x800
	bl func_02087d48
	ldr r2, =data_0211fd44
	ldrb r0, [r2]
	cmp r0, #0
	beq lbl_020880b8
	mov r1, #0x7c
lbl_020880a0:
	ldrb r0, [r2]
	cmp r0, #0xa
	streqb r1, [r2]
	ldrb r0, [r2, #1]!
	cmp r0, #0
	bne lbl_020880a0
lbl_020880b8:
	ldr r0, =data_0211fd44
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020880c4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020875b8
	ldr r0, =data_020c495c
	mov r1, #2
	str r0, [r4]
	mov r0, r4
	str r1, [r4, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020880ec(void)
{
	ldr r3, [r0, #0xc]
	ldr r2, [r0, #8]
	add r0, r3, #1
	ldrb r1, [r2, r0]
	ldrb r0, [r2, r3]
	orr r0, r0, r1, lsl #8
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	bx lr
}

extern "C" asm void func_02088110(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	mov r5, r1
	bl func_02087674
	mov r0, r4
	bl func_020876a8
	ldr r1, [r4, #0x18]
	add r2, r0, #4
	cmp r2, r1
	movhi r0, #0
	ldmhiia sp!, {r3, r4, r5, pc}
	ldr r1, [r4, #8]
	mov r3, r5, asr #8
	strb r5, [r1, r0]
	ldr r1, [r4, #8]
	mov r2, #0
	add r1, r1, r0
	strb r3, [r1, #1]
	ldr r1, [r4, #8]
	add r1, r1, r0
	strb r2, [r1, #2]
	ldr r1, [r4, #8]
	add r0, r1, r0
	strb r2, [r0, #3]
	ldr r1, [r4, #0x10]
	mov r0, #1
	add r1, r1, #1
	str r1, [r4, #0x10]
	ldr r1, [r4, #0x14]
	add r1, r1, #2
	str r1, [r4, #0x14]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088190(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020880ec
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4, #0xc]
	mov r0, #1
	add r1, r1, #2
	str r1, [r4, #0xc]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020881bc(void)
{
	ldr r1, [r0, #0xc]
	cmp r1, #0
	moveq r0, #0
	subne r1, r1, #2
	strne r1, [r0, #0xc]
	movne r0, #1
	bx lr
}

extern "C" asm void func_020881d8(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r1, [r6, #8]
	cmp r1, #0
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r4, [r6, #0xc]
	mov r5, #0
	str r5, [r6, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	beq lbl_0208822c
lbl_02088210:
	mov r0, r6
	ldr r1, [r0]
	add r5, r5, #1
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	bne lbl_02088210
lbl_0208822c:
	mov r0, r5
	str r4, [r6, #0xc]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02088238(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0, #8]
	cmp r1, #0
	moveq r0, #0
	ldmeqia sp!, {r3, pc}
	bl func_020881d8
	mov r0, r0, lsl #1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02088258(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, lr}
	add r2, sp, #0xc
	bic r2, r2, #3
	ldr r1, [sp, #0xc]
	add r2, r2, #4
	bl func_02003250
	ldmia sp!, {r3, lr}
	add sp, sp, #0x10
	bx lr
}

#pragma thumb on
