/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02052aac(void);
    void func_02052b7c(void);
    void func_02052c50(void);
    void func_02052d68(void);
    void func_02053040(void);
    void func_02053278(void);
    void func_0205336c(void);
    void func_02053458(void);
    void func_020534f4(void);
    void func_02053524(void);
    void func_020538ac(void);
    void func_02053abc(void);
    void func_0203fe94(void);
    void func_02062e04(void);
    void func_02062e50(void);
    void func_02062f98(void);
    void func_020630ec(void);
    void func_02063330(void);
}

#pragma thumb off

extern "C" asm void func_02052aac(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, [r3, #0x44]
	ldr r4, [r3, #0x50]
	sub r12, r12, r0
	ldr r5, [r3, #0x4c]
	sub r0, r4, r0
	cmp r12, #0
	ldr r3, [r3, #0x58]
	sub r4, r5, r1
	sub r1, r3, r1
	cmpgt r0, #0
	bgt lbl_02052ae8
	cmp r12, #0
	cmplt r0, #0
	bge lbl_02052af0
lbl_02052ae8:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02052af0:
	sub r5, r0, r12
	sub r3, r1, r4
	smull r0, r1, r4, r5
	adds r4, r0, #0x800
	smull r0, r3, r12, r3
	adc lr, r1, #0
	adds r12, r0, #0x800
	mov r4, r4, lsr #0xc
	smull r1, r0, r2, r5
	adc r2, r3, #0
	adds r1, r1, #0x800
	mov r3, r12, lsr #0xc
	adc r0, r0, #0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	orr r4, r4, lr, lsl #20
	orr r3, r3, r2, lsl #20
	cmp r1, #0
	sub r0, r4, r3
	mov r2, #0
	ble lbl_02052b60
	cmp r0, #0
	movgt r2, #1
	cmp r0, r1
	movlt r0, #1
	movge r0, #0
	and r0, r2, r0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02052b60:
	cmp r0, #0
	movlt r2, #1
	cmp r0, r1
	movgt r0, #1
	movle r0, #0
	and r0, r2, r0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02052b7c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r5, [r3, #0x4c]
	ldr r12, [r3, #0x44]
	ldr r4, [r3, #0x50]
	sub lr, r5, r1
	ldr r3, [r3, #0x58]
	sub r12, r12, r0
	sub r1, r3, r1
	cmp lr, #0
	sub r0, r4, r0
	cmpgt r1, #0
	bgt lbl_02052bb8
	cmp lr, #0
	cmplt r1, #0
	bge lbl_02052bc0
lbl_02052bb8:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02052bc0:
	sub r5, r1, lr
	sub r0, r0, r12
	smull r0, r1, lr, r0
	adds r4, r0, #0x800
	smull r0, r3, r12, r5
	adc lr, r1, #0
	adds r12, r0, #0x800
	mov r4, r4, lsr #0xc
	smull r1, r0, r2, r5
	adc r2, r3, #0
	adds r1, r1, #0x800
	mov r3, r12, lsr #0xc
	adc r0, r0, #0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	rsb r1, r1, #0
	orr r4, r4, lr, lsl #20
	orr r3, r3, r2, lsl #20
	cmp r1, #0
	sub r0, r4, r3
	mov r2, #0
	ble lbl_02052c34
	cmp r0, #0
	movgt r2, #1
	cmp r0, r1
	movlt r0, #1
	movge r0, #0
	and r0, r2, r0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02052c34:
	cmp r0, #0
	movlt r2, #1
	cmp r0, r1
	movgt r0, #1
	movle r0, #0
	and r0, r2, r0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02052c50(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	mov r6, r1
	mov r5, r2
	ldr r0, [r7]
	ldr r1, [r5, #0x44]
	mov r4, r6, lsl #1
	subs r1, r1, r0
	rsbmi r1, r1, #0
	cmp r1, r6
	bge lbl_02052c98
	ldr r2, [r5, #0x4c]
	ldr r1, [r7, #8]
	subs r1, r2, r1
	rsbmi r1, r1, #0
	cmp r1, r6
	movlt r0, #0x10
	ldmltia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02052c98:
	ldr r1, [r5, #0x50]
	subs r1, r1, r0
	rsbmi r1, r1, #0
	cmp r1, r6
	bge lbl_02052cc8
	ldr r2, [r5, #0x58]
	ldr r1, [r7, #8]
	subs r1, r2, r1
	rsbmi r1, r1, #0
	cmp r1, r6
	movlt r0, #0x20
	ldmltia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02052cc8:
	ldr r1, [r7, #8]
	mov r2, r4
	mov r3, r5
	sub r0, r0, r6
	sub r1, r1, r6
	bl func_02052b7c
	cmp r0, #0
	movne r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r0, [r7]
	ldr r1, [r7, #8]
	mov r2, r4
	mov r3, r5
	sub r0, r0, r6
	add r1, r1, r6
	bl func_02052b7c
	cmp r0, #0
	movne r0, #2
	ldmneia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r0, [r7]
	ldr r1, [r7, #8]
	mov r2, r4
	mov r3, r5
	sub r0, r0, r6
	sub r1, r1, r6
	bl func_02052aac
	cmp r0, #0
	movne r0, #4
	ldmneia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r0, [r7]
	ldr r1, [r7, #8]
	mov r2, r4
	mov r3, r5
	add r0, r0, r6
	sub r1, r1, r6
	bl func_02052aac
	cmp r0, #0
	movne r0, #8
	moveq r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02052d68(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xc
	mov r10, r0
	mov r9, r2
	ldr r5, [r10, #4]
	ldr r4, [r9, #0x48]
	mov r8, r3
	cmp r4, r5
	bgt lbl_02052d9c
	ldr r4, [r9, #0x54]
	sub r3, r5, r1
	cmp r4, r3
	bge lbl_02052da8
lbl_02052d9c:
	add sp, sp, #0xc
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02052da8:
	sub r1, r1, #1
	bl func_02052c50
	cmp r0, #0
	addeq sp, sp, #0xc
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r3, [r9, #0x4c]
	ldr r0, [r9, #0x58]
	ldr r2, [r9, #0x44]
	ldr r1, [r9, #0x50]
	sub r5, r0, r3
	subs r4, r1, r2
	cmpeq r5, #0
	addeq sp, sp, #0xc
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r1, [r10]
	ldr r0, [r10, #8]
	sub r6, r1, r2
	sub r7, r0, r3
	smull r0, r1, r4, r6
	adds r3, r0, #0x800
	smull r0, r2, r5, r7
	adc r12, r1, #0
	mov lr, r3, lsr #0xc
	smull r3, r1, r4, r4
	adds r0, r0, #0x800
	adc r2, r2, #0
	adds r11, r3, #0x800
	mov r3, r0, lsr #0xc
	str r1, [sp, #8]
	smull r0, r1, r5, r5
	str r1, [sp]
	ldr r1, [sp, #8]
	orr r3, r3, r2, lsl #20
	adc r2, r1, #0
	mov r1, r11, lsr #0xc
	str r0, [sp, #4]
	orr r1, r1, r2, lsl #20
	orr lr, lr, r12, lsl #20
	ldr r2, [sp, #4]
	add r0, lr, r3
	adds r3, r2, #0x800
	ldr r2, [sp]
	mov r3, r3, lsr #0xc
	adc r2, r2, #0
	orr r3, r3, r2, lsl #20
	add r1, r1, r3
	bl func_02062e04
	smull r1, r3, r0, r4
	adds r11, r1, #0x800
	smull r2, r1, r0, r5
	adc r4, r3, #0
	adds r2, r2, #0x800
	mov r3, r11, lsr #0xc
	orr r3, r3, r4, lsl #20
	ldr r5, [r9, #0x44]
	adc r1, r1, #0
	add r5, r5, r3
	mov r2, r2, lsr #0xc
	str r5, [r8]
	orr r2, r2, r1, lsl #20
	ldr r5, [r9, #0x4c]
	cmp r0, #0
	add r5, r5, r2
	str r5, [r8, #8]
	ldr r5, [r10, #4]
	mov r1, #0
	mov r4, #0x800
	str r5, [r8, #4]
	bgt lbl_02052f40
	ldr r6, [r9, #0x44]
	ldr r5, [r10]
	ldr r0, [r9, #0x30]
	sub r5, r6, r5
	smull r0, r6, r5, r0
	adds r7, r0, r4
	ldr r3, [r9, #0x4c]
	ldr r2, [r10, #8]
	ldr r0, [r9, #0x38]
	sub r2, r3, r2
	smull r3, r0, r2, r0
	adc r5, r6, r1
	adds r2, r3, r4
	mov r3, r7, lsr #0xc
	adc r0, r0, r1
	mov r2, r2, lsr #0xc
	orr r3, r3, r5, lsl #20
	orr r2, r2, r0, lsl #20
	add r0, r3, r2
	cmp r0, #0
	addgt sp, sp, #0xc
	movgt r0, r1
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [r9, #0x44]
	str r0, [r8, #0xc]
	ldr r0, [r9, #0x48]
	str r0, [r8, #0x10]
	ldr r0, [r9, #0x4c]
	str r0, [r8, #0x14]
	str r1, [r8, #0x10]
	b lbl_02053034
lbl_02052f40:
	cmp r0, #0x1000
	blt lbl_02052fc8
	ldr r6, [r9, #0x50]
	ldr r5, [r10]
	ldr r0, [r9, #0x30]
	sub r5, r6, r5
	smull r0, r6, r5, r0
	adds r7, r0, r4
	ldr r3, [r9, #0x58]
	ldr r2, [r10, #8]
	ldr r0, [r9, #0x38]
	sub r2, r3, r2
	smull r3, r0, r2, r0
	adc r5, r6, r1
	adds r2, r3, r4
	mov r3, r7, lsr #0xc
	adc r0, r0, r1
	mov r2, r2, lsr #0xc
	orr r3, r3, r5, lsl #20
	orr r2, r2, r0, lsl #20
	add r0, r3, r2
	cmp r0, #0
	addgt sp, sp, #0xc
	movgt r0, r1
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r1, [r9, #0x50]
	mov r0, #1
	str r1, [r8, #0xc]
	ldr r1, [r9, #0x54]
	str r1, [r8, #0x10]
	ldr r1, [r9, #0x58]
	str r1, [r8, #0x14]
	str r0, [r8, #0x10]
	b lbl_02053034
lbl_02052fc8:
	ldr r0, [r9, #0x30]
	sub r3, r3, r6
	smull r0, r5, r3, r0
	adds r6, r0, r4
	ldr r0, [r9, #0x38]
	sub r2, r2, r7
	smull r3, r0, r2, r0
	adc r5, r5, r1
	adds r2, r3, r4
	mov r3, r6, lsr #0xc
	adc r0, r0, r1
	mov r2, r2, lsr #0xc
	orr r3, r3, r5, lsl #20
	orr r2, r2, r0, lsl #20
	add r0, r3, r2
	cmp r0, #0
	addgt sp, sp, #0xc
	movgt r0, r1
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r1, [r8]
	mov r0, #2
	str r1, [r8, #0xc]
	ldr r1, [r8, #4]
	str r1, [r8, #0x10]
	ldr r1, [r8, #8]
	str r1, [r8, #0x14]
	str r0, [r8, #0x10]
lbl_02053034:
	mov r0, #1
	add sp, sp, #0xc
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02053040(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x1c
	ldr r7, [sp, #0x40]
	movs r10, r0
	mov r9, r1
	mov r8, r2
	mov r4, r3
	addeq sp, sp, #0x1c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	cmp r4, #0
	bne lbl_02053140
	ldr r0, [r9]
	sub r5, r0, r8
	str r5, [sp, #0x10]
	ldr r0, [r9]
	add r3, r0, r8
	str r3, [sp, #4]
	ldr r0, [r9, #8]
	sub r2, r0, r8
	str r2, [sp, #0x18]
	ldr r0, [r9, #8]
	add r1, r0, r8
	str r1, [sp, #0xc]
	ldr r0, [r10, #0xc]
	cmp r0, r5
	ldrle r0, [r10, #0x14]
	cmple r0, r2
	bgt lbl_020530c8
	ldr r0, [r10, #0x18]
	cmp r0, r3
	ldrge r0, [r10, #0x20]
	cmpge r0, r1
	bge lbl_02053140
lbl_020530c8:
	ldr r5, [sp, #0x10]
	ldr r3, [sp, #4]
	mov r0, #0
	ldr r2, [sp, #0x18]
	ldr r1, [sp, #0xc]
	sub r5, r5, r8
	add r3, r3, r8
	sub r2, r2, r8
	add r1, r1, r8
	str r2, [sp, #0x18]
	str r1, [sp, #0xc]
	str r5, [sp, #0x10]
	str r3, [sp, #4]
	str r0, [sp, #0x14]
	str r0, [sp, #8]
	str r5, [r10, #0xc]
	ldr r0, [sp, #0x14]
	add r1, sp, #0x10
	str r0, [r10, #0x10]
	ldr r0, [sp, #0x18]
	add r2, sp, #4
	str r0, [r10, #0x14]
	ldr r3, [sp, #4]
	mov r0, r10
	str r3, [r10, #0x18]
	ldr r3, [sp, #8]
	str r3, [r10, #0x1c]
	ldr r3, [sp, #0xc]
	str r3, [r10, #0x20]
	bl func_0203fe94
lbl_02053140:
	ldrh r0, [r10, #2]
	ldrh r2, [r10, #4]
	ldrh r1, [r10, #6]
	cmp r4, #0
	movlt r4, #0
	add r1, r2, r1
	add r11, r0, r1
	str r0, [sp]
	cmp r0, r4
	strlt r4, [sp]
	ldr r4, [sp]
	ldr r1, [r10, #0x44]
	mov r0, r4
	cmp r0, r11
	add r5, r1, r0
	bge lbl_020531f0
	mov r1, #0x60
	mul r6, r0, r1
lbl_02053188:
	ldrsb r0, [r5], #1
	and r0, r0, #0xf
	cmp r0, #0xf
	beq lbl_020531ac
	ldr r0, [r10, #0x24]
	add r0, r0, r6
	ldrsh r0, [r0, #0x40]
	tst r0, #2
	beq lbl_020531e0
lbl_020531ac:
	ldr r0, [r10, #0x24]
	add r2, r0, r6
	ldrsh r0, [r2, #0x40]
	tst r0, #1
	bne lbl_020531e0
	mov r0, r9
	mov r1, r8
	mov r3, r7
	bl func_02052d68
	cmp r0, #0
	addne sp, sp, #0x1c
	movne r0, r4
	ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_020531e0:
	add r4, r4, #1
	cmp r4, r11
	add r6, r6, #0x60
	blt lbl_02053188
lbl_020531f0:
	ldrh r1, [r10]
	ldr r0, [sp]
	subs r5, r0, r1
	ldr r1, [r10, #0x28]
	movmi r5, #0
	ldr r0, [r1, #4]
	cmp r5, r0
	bge lbl_0205326c
	mov r0, #0x60
	mul r4, r5, r0
lbl_02053218:
	add r0, r1, r4
	ldrsh r0, [r0, #0x48]
	tst r0, #1
	bne lbl_02053254
	add r2, r1, #8
	mov r0, r9
	mov r1, r8
	mov r3, r7
	add r2, r2, r4
	bl func_02052d68
	cmp r0, #0
	ldrneh r0, [r10]
	addne sp, sp, #0x1c
	addne r0, r5, r0
	ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02053254:
	ldr r1, [r10, #0x28]
	add r5, r5, #1
	ldr r0, [r1, #4]
	add r4, r4, #0x60
	cmp r5, r0
	blt lbl_02053218
lbl_0205326c:
	mvn r0, #0
	add sp, sp, #0x1c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02053278(void)
{
	ldr r3, [r0, #8]
	cmp r3, #0
	bne lbl_02053298
	ldr r0, [r1, #8]
	cmp r0, #0
	movlt r0, #8
	movge r0, #0
	bx lr
lbl_02053298:
	ldr r2, [r0]
	cmp r2, #0
	bne lbl_020532b8
	ldr r0, [r1]
	cmp r0, #0
	movlt r0, #4
	movge r0, #0xc
	bx lr
lbl_020532b8:
	mov r0, r3
	rsblt r0, r3, #0
	cmp r2, #0
	rsblt r2, r2, #0
	cmp r3, #0
	rsblt r3, r3, #0
	subs r12, r2, r3
	rsbmi r12, r12, #0
	cmp r12, #8
	bge lbl_0205330c
	cmp r0, #0
	ldr r0, [r1]
	bge lbl_020532fc
	cmp r0, #0
	movlt r0, #6
	movge r0, #0xe
	bx lr
lbl_020532fc:
	cmp r0, #0
	movlt r0, #2
	movge r0, #0xa
	bx lr
lbl_0205330c:
	cmp r3, r2
	bge lbl_02053340
	cmp r0, #0
	ldr r0, [r1, #8]
	bge lbl_02053330
	cmp r0, #0
	movlt r0, #7
	movge r0, #0xf
	bx lr
lbl_02053330:
	cmp r0, #0
	movlt r0, #9
	movge r0, #1
	bx lr
lbl_02053340:
	cmp r0, #0
	ldr r0, [r1]
	bge lbl_0205335c
	cmp r0, #0
	movlt r0, #5
	movge r0, #0xd
	bx lr
lbl_0205335c:
	cmp r0, #0
	movlt r0, #3
	movge r0, #0xb
	bx lr
}

extern "C" asm void func_0205336c(void)
{
	ldr r3, [r1]
	ldr r2, [r0]
	ldr r1, [r1, #8]
	ldr r0, [r0, #8]
	subs r2, r3, r2
	sub r0, r1, r0
	rsbmi r1, r2, #0
	movpl r1, r2
	cmp r0, #0
	rsblt r3, r0, #0
	movge r3, r0
	cmp r2, #0
	bne lbl_020533b0
	cmp r0, #0
	movlt r0, #1
	movge r0, #0x100
	bx lr
lbl_020533b0:
	cmp r0, #0
	bne lbl_020533c8
	cmp r2, #0
	movlt r0, #0x1000
	movge r0, #0x10
	bx lr
lbl_020533c8:
	subs r12, r1, r3
	rsbmi r12, r12, #0
	cmp r12, #8
	bge lbl_02053400
	cmp r0, #0
	bge lbl_020533f0
	cmp r2, #0
	movlt r0, #0x4000
	movge r0, #4
	bx lr
lbl_020533f0:
	cmp r2, #0
	movlt r0, #0x400
	movge r0, #0x40
	bx lr
lbl_02053400:
	cmp r3, r1
	bge lbl_02053430
	cmp r0, #0
	bge lbl_02053420
	cmp r2, #0
	movlt r0, #0x2000
	movge r0, #8
	bx lr
lbl_02053420:
	cmp r2, #0
	movlt r0, #0x800
	movge r0, #0x20
	bx lr
lbl_02053430:
	cmp r0, #0
	bge lbl_02053448
	cmp r2, #0
	movlt r0, #0x8000
	movge r0, #2
	bx lr
lbl_02053448:
	cmp r2, #0
	movlt r0, #0x200
	movge r0, #0x80
	bx lr
}

extern "C" asm void func_02053458(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r0, r2
	add r1, r3, #0x30
	bl func_02053278
	mov r4, r0
	mov r0, r6
	add r1, r5, #0xc
	bl func_0205336c
	cmp r4, #8
	bgt lbl_020534ac
	bge lbl_020534c4
	cmp r4, #4
	bgt lbl_020534dc
	cmp r4, #0
	blt lbl_020534dc
	beq lbl_020534b8
	cmp r4, #4
	beq lbl_020534cc
	b lbl_020534dc
lbl_020534ac:
	cmp r4, #0xc
	beq lbl_020534d4
	b lbl_020534dc
lbl_020534b8:
	ldr r1, =0xFFFF7FFC
	and r0, r0, r1
	ldmia sp!, {r4, r5, r6, pc}
lbl_020534c4:
	bic r0, r0, #0x380
	ldmia sp!, {r4, r5, r6, pc}
lbl_020534cc:
	bic r0, r0, #0x38
	ldmia sp!, {r4, r5, r6, pc}
lbl_020534d4:
	bic r0, r0, #0x3800
	ldmia sp!, {r4, r5, r6, pc}
lbl_020534dc:
	mov r1, #1
	cmp r0, r1, lsl r4
	moveq r1, #0
	mov r0, r1
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020534f4(void)
{
	ldrh r2, [r0]
	cmp r1, r2
	ldrlt r2, [r0, #0x24]
	movlt r0, #0x60
	mlalt r0, r1, r0, r2
	bxlt lr
	ldr r0, [r0, #0x28]
	sub r2, r1, r2
	add r1, r0, #8
	mov r0, #0x60
	mla r0, r2, r0, r1
	bx lr
}

extern "C" asm void func_02053524(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x18
	mov r10, r1
	ldr r1, [sp, #0x3c]
	ldr r7, [sp, #0x38]
	mov r9, r2
	mov r8, r3
	bl func_020534f4
	mov r4, r0
	add r2, sp, #0xc
	mov r0, r10
	mov r1, r7
	bl func_02062f98
	ldr r0, [sp, #0xc]
	cmp r0, #0
	ldreq r0, [sp, #0x14]
	cmpeq r0, #0
	addeq sp, sp, #0x18
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r1, [r4, #0x44]
	ldr r0, [r4, #0x50]
	add r2, sp, #0
	sub r0, r1, r0
	str r0, [sp]
	ldr r3, [r4, #0x4c]
	ldr r1, [r4, #0x58]
	mov r0, r10
	sub r5, r3, r1
	mov r1, r7
	mov r3, r4
	str r5, [sp, #8]
	bl func_02053458
	cmp r0, #0
	bne lbl_020537a8
	add r0, sp, #0xc
	mov r1, r0
	bl func_020630ec
	ldr r1, [sp]
	cmp r1, #0
	ldrne r0, [sp, #8]
	cmpne r0, #0
	bne lbl_020535f4
	ldr r0, [r7, #0x10]
	cmp r0, #2
	blt lbl_020537a8
	add r1, sp, #0xc
	mov r2, r7
	mov r3, r10
	add r0, r9, #8
	bl func_02063330
	add sp, sp, #0x18
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_020535f4:
	ldr r3, [r7]
	ldr r2, [r10]
	cmp r3, r2
	rsblt r5, r9, #0
	ldr r3, [r7, #8]
	ldr r2, [r10, #8]
	movge r5, r9
	cmp r3, r2
	smull r2, r12, r1, r1
	rsblt r6, r9, #0
	movge r6, r9
	adds r1, r2, #0x800
	smull r3, r2, r0, r0
	adc r0, r12, #0
	mov r12, r1, lsr #0xc
	adds r3, r3, #0x800
	adc r1, r2, #0
	mov r2, r3, lsr #0xc
	orr r12, r12, r0, lsl #20
	orr r2, r2, r1, lsl #20
	add r0, r12, r2
	bl func_02062e50
	ldr r2, [sp]
	ldr r12, [sp, #8]
	mov r1, r0
	smull r6, r3, r2, r6
	smull r2, r0, r5, r12
	adds r12, r2, #0x800
	adc r2, r0, #0
	mov r0, r12, lsr #0xc
	adds r6, r6, #0x800
	orr r0, r0, r2, lsl #20
	adc r2, r3, #0
	mov r3, r6, lsr #0xc
	orr r3, r3, r2, lsl #20
	smull r2, r1, r8, r1
	sub r0, r0, r3
	adds r3, r2, #0x800
	adc r2, r1, #0
	mov r1, r3, lsr #0xc
	orr r1, r1, r2, lsl #20
	bl func_02062e04
	smull r2, r1, r0, r8
	adds r2, r2, #0x800
	str r0, [sp, #0x3c]
	adc r0, r1, #0
	mov r8, r2, lsr #0xc
	orrs r8, r8, r0, lsl #20
	ldr r6, [r10]
	ldr r0, [r10, #8]
	rsbmi r8, r8, #0
	str r0, [sp, #4]
	add r1, sp, #0xc
	mov r2, r7
	mov r3, r10
	add r0, r8, #8
	bl func_02063330
	ldr r0, [r10]
	ldr r3, [r4, #0x44]
	add r0, r0, r5
	subs r1, r0, r3
	ldr r2, [r4, #0x50]
	rsbmi r1, r1, #0
	subs r0, r0, r2
	rsbmi r0, r0, #0
	cmp r1, r0
	bge lbl_02053724
	ldr r1, [sp]
	sub r0, r0, #8
	cmp r1, #0
	rsblt r1, r1, #0
	cmp r0, r1
	addle sp, sp, #0x18
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r1, [r4, #0x4c]
	b lbl_02053748
lbl_02053724:
	ldr r3, [sp]
	sub r0, r1, #8
	cmp r3, #0
	rsblt r3, r3, #0
	cmp r0, r3
	addle sp, sp, #0x18
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r1, [r4, #0x58]
	mov r3, r2
lbl_02053748:
	ldr r0, [sp, #8]
	ldr r2, [sp]
	cmp r0, #0
	rsblt r0, r0, #0
	cmp r2, #0
	rsblt r2, r2, #0
	cmp r2, r0
	bge lbl_0205377c
	add r0, r9, #8
	cmp r6, r3
	rsblt r0, r0, #0
	add r6, r3, r0
	b lbl_02053794
lbl_0205377c:
	ldr r0, [sp, #4]
	cmp r0, r1
	add r0, r9, #8
	rsblt r0, r0, #0
	add r0, r1, r0
	str r0, [sp, #4]
lbl_02053794:
	str r6, [r10]
	ldr r0, [sp, #4]
	add sp, sp, #0x18
	str r0, [r10, #8]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_020537a8:
	ldr r0, [r7, #0x10]
	cmp r0, #0
	ldreq r2, [r4, #0x44]
	ldreq r3, [r4, #0x4c]
	ldrne r2, [r4, #0x50]
	ldr r0, [r10]
	ldrne r3, [r4, #0x58]
	subs r0, r0, r2
	rsbmi r1, r0, #0
	movpl r1, r0
	str r1, [sp]
	ldr r1, [r10, #8]
	ldr r4, [sp]
	subs r1, r1, r3
	rsbmi r5, r1, #0
	movpl r5, r1
	str r5, [sp, #8]
	cmp r4, r5
	ble lbl_02053850
	add r1, r9, #8
	cmp r4, r1
	addge sp, sp, #0x18
	ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	cmp r5, r1, asr #3
	blt lbl_02053834
	ldr r1, [r7, #0x1c]
	cmp r1, #0
	beq lbl_02053834
	ldr r4, [r10, #8]
	ldr r1, [r7, #0x18]
	cmp r4, r3
	sublt r1, r4, r1, asr #3
	strlt r1, [r10, #8]
	addge r1, r4, r1, asr #3
	strge r1, [r10, #8]
lbl_02053834:
	cmp r0, #0
	add r0, r9, #8
	rsblt r0, r0, #0
	add r0, r2, r0
	add sp, sp, #0x18
	str r0, [r10]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_02053850:
	add r0, r9, #8
	cmp r5, r0
	addge sp, sp, #0x18
	ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	cmp r4, r0, asr #3
	blt lbl_02053890
	ldr r0, [r7, #0x1c]
	cmp r0, #0
	beq lbl_02053890
	ldr r4, [r10]
	ldr r0, [r7, #0x20]
	cmp r4, r2
	sublt r0, r4, r0, asr #3
	strlt r0, [r10]
	addge r0, r4, r0, asr #3
	strge r0, [r10]
lbl_02053890:
	add r0, r9, #8
	cmp r1, #0
	rsblt r0, r0, #0
	add r0, r3, r0
	str r0, [r10, #8]
	add sp, sp, #0x18
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020538ac(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x4c
	ldr r4, =0x000016A0
	mov r9, r3
	umull r6, r5, r9, r4
	mov r7, #0
	mla r5, r9, r7, r5
	mov r3, r9, asr #0x1f
	adds r8, r6, #0x800
	mla r5, r3, r4, r5
	mov r10, r0
	adc r3, r5, #0
	mov r0, r8, lsr #0xc
	sub r6, r7, #1
	orr r0, r0, r3, lsl #20
	cmp r10, #0
	cmpne r1, #0
	ldr r8, [sp, #0x70]
	cmpne r2, #0
	str r6, [sp, #0xc]
	str r0, [sp, #8]
	cmpne r8, #0
	addeq sp, sp, #0x4c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r3, [r2]
	ldr r0, [r1]
	add r4, sp, #0x40
	subs r0, r3, r0
	rsbmi r0, r0, #0
	str r0, [r4]
	ldr r3, [r2, #8]
	ldr r0, [r1, #8]
	subs r1, r3, r0
	rsbmi r1, r1, #0
	ldr r0, [r4]
	str r1, [r4, #8]
	cmp r0, r1
	bge lbl_02053950
	cmp r0, r1, asr #3
	b lbl_02053954
lbl_02053950:
	cmp r1, r0, asr #3
lbl_02053954:
	movle r0, #1
	movgt r0, #0
	str r0, [r4, #4]
	ldr r0, [r2]
	str r0, [r8]
	ldr r0, [r2, #4]
	str r0, [r8, #4]
	ldr r0, [r2, #8]
	str r0, [r8, #8]
lbl_02053978:
	cmp r7, #2
	add r7, r7, #1
	addge sp, sp, #0x4c
	movge r0, r6
	ldmgeia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	cmp r7, #1
	movgt r0, #1
	movle r0, #0
	mvn r5, #0x80000000
	rsb r3, r0, #0
	add r11, sp, #0x10
	mvn r4, #0
lbl_020539a8:
	str r11, [sp]
	mov r0, r10
	mov r1, r8
	mov r2, r9
	bl func_02053040
	mov r3, r0
	cmp r3, r4
	bne lbl_02053a18
	mvn r0, #0x80000000
	cmp r5, r0
	addeq sp, sp, #0x4c
	moveq r0, r6
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [sp, #0xc]
	cmp r0, r6
	addeq sp, sp, #0x4c
	moveq r0, r6
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r1, sp, #0x28
	str r1, [sp]
	ldr r3, [sp, #8]
	mov r0, r10
	mov r1, r8
	mov r2, r9
	str r6, [sp, #4]
	bl func_02053524
	str r6, [sp, #0xc]
	b lbl_02053978
lbl_02053a18:
	ldr r1, [sp, #0x24]
	ldr r0, [r8, #8]
	ldr r12, [sp, #0x1c]
	sub r0, r1, r0
	smull r2, r1, r0, r0
	ldr r0, [r8]
	sub r0, r12, r0
	smull lr, r12, r0, r0
	mov r0, #0x800
	adds lr, lr, r0
	mov r0, #0
	adc r0, r12, r0
	mov r12, lr, lsr #0xc
	orr r12, r12, r0, lsl #20
	mov r0, #0x800
	adds r0, r2, r0
	adc r1, r1, #0
	mov r0, r0, lsr #0xc
	orr r0, r0, r1, lsl #20
	add r0, r12, r0
	cmp r5, r0
	ble lbl_02053aa8
	mov r5, r0
	mov r6, r3
	ldr r1, [sp, #0x10]
	ldr r0, [sp, #0x14]
	str r1, [sp, #0x28]
	str r0, [sp, #0x2c]
	ldr r1, [sp, #0x18]
	ldr r0, [sp, #0x1c]
	str r1, [sp, #0x30]
	str r0, [sp, #0x34]
	ldr r1, [sp, #0x20]
	ldr r0, [sp, #0x24]
	str r1, [sp, #0x38]
	str r0, [sp, #0x3c]
lbl_02053aa8:
	add r3, r3, #1
	b lbl_020539a8
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02053abc(void)
{
	mov r12, r2
	cmp r2, #0
	blt lbl_02053af4
	ldr r3, [r0, #0x24]
	mov r0, #0x60
	mla r3, r2, r0, r3
lbl_02053ad4:
	ldrsh r0, [r3, #0x42]
	cmp r1, r0
	addne r0, r12, #1
	subne r0, r2, r0
	bxne lr
	sub r3, r3, #0x60
	subs r12, r12, #1
	bpl lbl_02053ad4
lbl_02053af4:
	mvn r0, #0
	bx lr
}

#pragma thumb on
