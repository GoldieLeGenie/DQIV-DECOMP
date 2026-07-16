/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0203ab40(void);
    void func_0203ab44(void);
    void func_0203ab48(void);
    void func_0203ab9c(void);
    void func_0203abb0(void);
    void func_0203abb4(void);
    void func_0203abf8(void);
    void func_0203accc(void);
    void func_0203ae78(void);
    void func_0203aeb8(void);
    void func_0203af48(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN3dss11Fx32Vector3aSERKS0_(void);
    void _ZN3dss4Fx32C1ERKS0_(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status11StageStatus12getWorldTimeEv(void);
    void _ZN6status11StageStatus12setWorldTimeEi(void);
    void __register_global_object(void);
    void data_020f17a8(void);
    void data_020f17b0(void);
    void func_020870fc(void);
    void func_02087108(void);
    void func_0208722c(void);
    void func_020888e8(void);
    void func_02088a28(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_0203ab40(void)
{
	bx lr
}

extern "C" asm void func_0203ab44(void)
{
	bx lr
}

extern "C" asm void func_0203ab48(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020f17a8
	ldr r0, [r0, #4]
	tst r0, #1
	bne lbl_0203ab84
	ldr r0, =data_020f17a8
	bl func_0203ab40
	ldr r0, =data_020f17a8
	ldr r1, =func_0203ab44
	ldr r2, =data_020f17b0
	bl __register_global_object
	ldr r0, =data_020f17a8
	ldr r1, [r0, #4]
	orr r1, r1, #1
	str r1, [r0, #4]
lbl_0203ab84:
	ldr r0, =data_020f17a8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0203ab9c(void)
{
	ldr r1, =_ZN6status10excelParamE
	ldr r1, [r1, #0x74]
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0203abb0(void)
{
	bx lr
}

extern "C" asm void func_0203abb4(void)
{
	ldr r2, [r0]
	cmp r2, #0
	addlt r2, r2, #0x1000000
	strlt r2, [r0]
	blt lbl_0203abd4
	cmp r2, #0x1000000
	addge r2, r2, #0xff000000
	strge r2, [r0]
lbl_0203abd4:
	ldr r0, [r1]
	cmp r0, #0
	addlt r0, r0, #0x1000000
	strlt r0, [r1]
	bxlt lr
	cmp r0, #0x1000000
	addge r0, r0, #0xff000000
	strge r0, [r1]
	bx lr
}

extern "C" asm void func_0203abf8(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x44
	mov r6, r0
	add r0, sp, #0x38
	mov r5, r1
	mov r7, r2
	mov r4, r3
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x2c
	bl _ZN3dss11Fx32Vector3C1Ev
	mov r0, r6
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #4
	bl func_020870fc
	mov r0, #0x1000
	str r0, [sp, #4]
	ldr r1, [r5]
	add r0, sp, #0
	ldr r2, [r1, r7, lsl #4]
	add r12, r1, r7, lsl #4
	str r2, [sp, #0x38]
	ldr r3, [r12, #4]
	ldr r2, [sp, #0x58]
	str r3, [sp, #0x3c]
	ldr r3, [r12, #8]
	add r1, sp, #4
	str r3, [sp, #0x40]
	ldr r3, [r5]
	add r5, r3, r4, lsl #4
	ldr r3, [r3, r4, lsl #4]
	str r3, [sp, #0x2c]
	ldr r3, [r5, #4]
	str r3, [sp, #0x30]
	ldr r3, [r5, #8]
	str r3, [sp, #0x34]
	bl func_0208722c
	add r0, sp, #0x14
	add r1, sp, #0x38
	add r2, sp, #0
	bl func_02088a28
	ldr r2, [sp, #0x58]
	add r0, sp, #8
	add r1, sp, #0x2c
	bl func_02088a28
	add r0, sp, #0x20
	add r1, sp, #0x14
	add r2, sp, #8
	bl func_020888e8
	mov r0, r6
	add r1, sp, #0x20
	bl _ZN3dss11Fx32Vector3aSERKS0_
	add sp, sp, #0x44
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_0203accc(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0xc
	mov r5, r0
	add r0, sp, #8
	mov r8, r2
	mov r4, r1
	bl func_020870fc
	cmp r8, #0x80
	bge lbl_0203ad10
	mov r1, r8, lsl #0xc
	mov r0, r1, asr #6
	add r0, r1, r0, lsr #25
	mov r0, r0, asr #7
	str r0, [sp, #8]
	mov r7, #0xd
	mov r6, #0
	b lbl_0203ae48
lbl_0203ad10:
	cmp r8, #0x380
	bge lbl_0203ad2c
	mov r0, #0x1000
	mov r7, #0
	mov r6, r7
	str r0, [sp, #8]
	b lbl_0203ae48
lbl_0203ad2c:
	cmp r8, #0x400
	bge lbl_0203ad58
	sub r0, r8, #0x380
	mov r1, r0, lsl #0xc
	mov r0, r1, asr #6
	add r0, r1, r0, lsr #25
	mov r0, r0, asr #7
	str r0, [sp, #8]
	mov r7, #0
	mov r6, #0xa
	b lbl_0203ae48
lbl_0203ad58:
	cmp r8, #0x740
	bge lbl_0203ad74
	mov r0, #0x1000
	str r0, [sp, #8]
	mov r7, #0
	mov r6, #0xa
	b lbl_0203ae48
lbl_0203ad74:
	cmp r8, #0x7c0
	bge lbl_0203ada0
	sub r0, r8, #0x740
	mov r1, r0, lsl #0xc
	mov r0, r1, asr #6
	add r0, r1, r0, lsr #25
	mov r0, r0, asr #7
	str r0, [sp, #8]
	mov r7, #0xa
	mov r6, #0xb
	b lbl_0203ae48
lbl_0203ada0:
	cmp r8, #0x840
	bge lbl_0203adbc
	mov r0, #0x1000
	str r0, [sp, #8]
	mov r7, #0
	mov r6, #0xb
	b lbl_0203ae48
lbl_0203adbc:
	cmp r8, #0x8c0
	bge lbl_0203ade8
	sub r0, r8, #0x840
	mov r1, r0, lsl #0xc
	mov r0, r1, asr #6
	add r0, r1, r0, lsr #25
	mov r0, r0, asr #7
	str r0, [sp, #8]
	mov r7, #0xb
	mov r6, #0xc
	b lbl_0203ae48
lbl_0203ade8:
	cmp r8, #0xc40
	bge lbl_0203ae04
	mov r0, #0x1000
	str r0, [sp, #8]
	mov r7, #0
	mov r6, #0xc
	b lbl_0203ae48
lbl_0203ae04:
	cmp r8, #0xcc0
	bge lbl_0203ae30
	sub r0, r8, #0xc40
	mov r1, r0, lsl #0xc
	mov r0, r1, asr #6
	add r0, r1, r0, lsr #25
	mov r0, r0, asr #7
	str r0, [sp, #8]
	mov r7, #0xc
	mov r6, #0xd
	b lbl_0203ae48
lbl_0203ae30:
	cmp r8, #0xd40
	bge lbl_0203ae48
	mov r0, #0x1000
	str r0, [sp, #8]
	mov r7, #0
	mov r6, #0xd
lbl_0203ae48:
	add r0, sp, #4
	add r1, sp, #8
	bl _ZN3dss4Fx32C1ERKS0_
	add r12, sp, #4
	mov r0, r5
	mov r1, r4
	mov r2, r7
	mov r3, r6
	str r12, [sp]
	bl func_0203abf8
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0203ae78(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #8
	mov r5, r0
	mov r4, r1
	add r0, sp, #4
	mov r1, #0x1000
	bl func_02087108
	add r12, sp, #4
	mov r0, r5
	mov r1, r4
	mov r2, #0
	mov r3, #0xe
	str r12, [sp]
	bl func_0203abf8
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0203aeb8(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus12getWorldTimeEv
	mov r1, r0
	cmp r1, #0x80
	bge lbl_0203aee0
	ldr r0, =g_Stage
	mov r2, #1
	str r2, [r0, #0xb4]
	b lbl_0203af38
lbl_0203aee0:
	cmp r1, #0x7c0
	bge lbl_0203aef8
	ldr r0, =g_Stage
	mov r2, #2
	str r2, [r0, #0xb4]
	b lbl_0203af38
lbl_0203aef8:
	cmp r1, #0x8c0
	bge lbl_0203af10
	ldr r0, =g_Stage
	mov r2, #3
	str r2, [r0, #0xb4]
	b lbl_0203af38
lbl_0203af10:
	cmp r1, #0xcc0
	bge lbl_0203af28
	ldr r0, =g_Stage
	mov r2, #4
	str r2, [r0, #0xb4]
	b lbl_0203af38
lbl_0203af28:
	cmp r1, #0xd40
	ldrlt r0, =g_Stage
	movlt r2, #1
	strlt r2, [r0, #0xb4]
lbl_0203af38:
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus12setWorldTimeEi
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0203af48(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus12getWorldTimeEv
	cmp r0, #0x80
	movlt r0, #1
	ldmltia sp!, {r3, pc}
	cmp r0, #0x7c0
	movlt r0, #2
	ldmltia sp!, {r3, pc}
	cmp r0, #0x8c0
	movlt r0, #3
	ldmltia sp!, {r3, pc}
	cmp r0, #0xcc0
	movlt r0, #4
	movge r0, #1
	ldmia sp!, {r3, pc}

	dcd 0x00000000
}

#pragma thumb on
