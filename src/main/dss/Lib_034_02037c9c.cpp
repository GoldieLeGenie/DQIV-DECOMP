/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02037c9c(void);
    void func_02037ca0(void);
    void func_02037ca4(void);
    void func_02037d28(void);
    void func_02037d50(void);
    void func_02037d6c(void);
    void func_02037da4(void);
    void func_02037db0(void);
    void func_02037e20(void);
    void func_02037ef4(void);
    void func_02037f40(void);
    void func_02037f84(void);
    void func_02037f98(void);
    void func_02038034(void);
    void func_02038140(void);
    void func_020381d0(void);
    void func_02038204(void);
    void func_0203822c(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status11StageStatus13getSymbolFlagEi(void);
    void _ZN6status13HaveEquipment16getAbsoluteValueEi(void);
    void _ZN6status8GameFlag5checkEj(void);
    void data_020c135c(void);
    void data_020efba0(void);
    void data_020f0078(void);
    void func_0203a34c(void);
    void func_0203a388(void);
    void func_0203a5ec(void);
    void func_02057cdc(void);
    void func_02057d04(void);
    void func_02057e88(void);
    void func_02057ec0(void);
    void func_02057f40(void);
    void g_GlobalFlag(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_02037c9c(void)
{
	bx lr
}

extern "C" asm void func_02037ca0(void)
{
	bx lr
}

extern "C" asm void func_02037ca4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r4, r0
	mov r2, #0
	mov r0, #0xff
lbl_02037cb4:
	add r1, r4, r2
	strb r0, [r1, #4]
	strb r0, [r1, #0x2e]
	add r2, r2, #1
	strb r0, [r1, #0x58]
	cmp r2, #0x2a
	blt lbl_02037cb4
	ldr r0, =data_020f0078
	mov r1, #0
	str r1, [r4]
	bl func_0203a388
	mov r6, r0
	mov r7, #0
	cmp r6, #0
	ldmleia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r5, =data_020f0078
lbl_02037cf4:
	mov r0, r5
	mov r1, r7
	bl func_0203a34c
	mov r0, r5
	bl func_0203a5ec
	mov r1, r0
	mov r0, r4
	bl func_02037d50
	add r7, r7, #1
	cmp r7, r6
	blt lbl_02037cf4
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02037d28(void)
{
	mov r3, #0
	str r3, [r0, #0x88]
	str r3, [r0, #0x84]
	mov r2, #0xff
lbl_02037d38:
	add r1, r0, r3
	add r3, r3, #1
	strb r2, [r1, #0x2e]
	cmp r3, #0x2a
	blt lbl_02037d38
	bx lr
}

extern "C" asm void func_02037d50(void)
{
	ldr r2, [r0]
	add r2, r0, r2
	strb r1, [r2, #4]
	ldr r1, [r0]
	add r1, r1, #1
	str r1, [r0]
	bx lr
}

extern "C" asm void func_02037d6c(void)
{
	ldr r12, [r0]
	mov r3, #0
	cmp r12, #0
	ble lbl_02037d9c
lbl_02037d7c:
	add r2, r0, r3
	ldrb r2, [r2, #4]
	cmp r1, r2
	moveq r0, #1
	bxeq lr
	add r3, r3, #1
	cmp r3, r12
	blt lbl_02037d7c
lbl_02037d9c:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02037da4(void)
{
	ldr r0, =data_020efba0
	bx lr
}

extern "C" asm void func_02037db0(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r0, #0x84]
	mov lr, #0
	cmp r4, #0
	ble lbl_02037de8
lbl_02037dc4:
	add r12, r0, lr
	ldrb r3, [r12, #0x8c]
	cmp r1, r3
	ldreqb r3, [r12, #0xa0]
	cmpeq r2, r3
	ldmeqia sp!, {r4, pc}
	add lr, lr, #1
	cmp lr, r4
	blt lbl_02037dc4
lbl_02037de8:
	ldr r4, [r0]
	mov lr, #0
	cmp r4, #0
	ldmleia sp!, {r4, pc}
lbl_02037df8:
	add r12, r0, lr
	ldrb r3, [r12, #0x2e]
	cmp r3, #0xff
	streqb r1, [r12, #0x2e]
	streqb r2, [r12, #0x58]
	ldmeqia sp!, {r4, pc}
	add lr, lr, #1
	cmp lr, r4
	blt lbl_02037df8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02037e20(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	mov r10, r0
	ldr r0, [r10]
	mov r9, r1
	mov r11, r2
	mov r8, r3
	cmp r0, #0
	ldr r7, [sp, #0x28]
	mov r6, #0
	ble lbl_02037ec4
lbl_02037e48:
	mov r4, #0
	cmp r8, #0
	ble lbl_02037eb4
	add r5, r10, r6
lbl_02037e58:
	ldr r2, [r7, r4, lsl #2]
	mov r0, r10
	mov r1, r6
	bl func_02038034
	cmp r0, #1
	bne lbl_02037e80
	add r0, r10, r6
	strb r9, [r0, #0x2e]
	strb r11, [r0, #0x58]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02037e80:
	ldrb r1, [r5, #4]
	ldr r0, [r7, r4, lsl #2]
	cmp r1, r0
	ldreqb r0, [r5, #0x2e]
	cmpeq r0, #0xff
	bne lbl_02037ea8
	add r0, r10, r6
	strb r9, [r0, #0x2e]
	strb r11, [r0, #0x58]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02037ea8:
	add r4, r4, #1
	cmp r4, r8
	blt lbl_02037e58
lbl_02037eb4:
	ldr r0, [r10]
	add r6, r6, #1
	cmp r6, r0
	blt lbl_02037e48
lbl_02037ec4:
	mov r0, #1
	str r0, [r10, #0x88]
	ldr r0, [r10, #0x84]
	add r0, r10, r0
	strb r9, [r0, #0x8c]
	ldr r0, [r10, #0x84]
	add r0, r10, r0
	strb r11, [r0, #0xa0]
	ldr r0, [r10, #0x84]
	add r0, r0, #1
	str r0, [r10, #0x84]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02037ef4(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r0]
	mov lr, #0
	cmp r4, #0
	ble lbl_02037f38
lbl_02037f08:
	add r12, r0, lr
	ldrb r3, [r12, #0x2e]
	cmp r1, r3
	ldreqb r3, [r12, #0x58]
	cmpeq r2, r3
	bne lbl_02037f2c
	ldrb r1, [r12, #4]
	bl func_02037f84
	ldmia sp!, {r4, pc}
lbl_02037f2c:
	add lr, lr, #1
	cmp lr, r4
	blt lbl_02037f08
lbl_02037f38:
	mov r0, #0xff
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02037f40(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r0]
	mov lr, #0
	cmp r4, #0
	ble lbl_02037f7c
lbl_02037f54:
	add r12, r0, lr
	ldrb r3, [r12, #0x2e]
	cmp r1, r3
	ldreqb r3, [r12, #0x58]
	cmpeq r2, r3
	moveq r0, lr
	ldmeqia sp!, {r4, pc}
	add lr, lr, #1
	cmp lr, r4
	blt lbl_02037f54
lbl_02037f7c:
	mov r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02037f84(void)
{
	ldr r0, =_ZN6status10excelParamE
	ldr r0, [r0, #0x7c]
	ldrb r0, [r0, r1, lsl #2]
	bx lr
}

extern "C" asm void func_02037f98(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r1, [r0, #0x88]
	cmp r1, #1
	ldmneia sp!, {r3, r4, r5, pc}
	ldr r4, [r0, #0x84]
	mov r12, #0
	cmp r4, #0
	ble lbl_02038028
	mov r3, r12
lbl_02037fbc:
	ldr r5, [r0]
	mov lr, r3
	cmp r5, #0
	ble lbl_02038018
lbl_02037fcc:
	add r2, r0, lr
	ldrb r1, [r2, #0x2e]
	cmp r1, #0xff
	bne lbl_0203800c
	sub r1, r4, #1
	sub r1, r1, r12
	add r1, r0, r1
	ldrb r1, [r1, #0x8c]
	strb r1, [r2, #0x2e]
	ldr r1, [r0, #0x84]
	sub r1, r1, #1
	sub r1, r1, r12
	add r1, r0, r1
	ldrb r1, [r1, #0xa0]
	strb r1, [r2, #0x58]
	b lbl_02038018
lbl_0203800c:
	add lr, lr, #1
	cmp lr, r5
	blt lbl_02037fcc
lbl_02038018:
	ldr r4, [r0, #0x84]
	add r12, r12, #1
	cmp r12, r4
	blt lbl_02037fbc
lbl_02038028:
	mov r1, #0
	str r1, [r0, #0x88]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02038034(void)
{
	add r1, r0, r1
	ldrb r0, [r1, #0x2e]
	cmp r0, #0xff
	movne r0, #0
	bxne lr
	cmp r2, #0x64
	movlt r0, #0
	bxlt lr
	ldr r0, =_ZN6status10excelParamE
	ldrb r1, [r1, #4]
	ldr r0, [r0, #0x7c]
	add r0, r0, r1, lsl #2
	ldrsb r1, [r0, #2]
	and r0, r1, #0x30
	and r3, r1, #0xc
	mov r1, r0, asr #4
	mov r0, r3, lsl #0x16
	mov r1, r1, lsl #0x18
	mov r3, r0, asr #0x18
	movs r1, r1, asr #0x18
	beq lbl_0203809c
	cmp r1, #1
	beq lbl_020380a4
	cmp r1, #2
	moveq r1, #0x68
	b lbl_020380a8
lbl_0203809c:
	mov r1, #0x67
	b lbl_020380a8
lbl_020380a4:
	mov r1, #0x66
lbl_020380a8:
	cmp r3, #0
	beq lbl_020380c0
	cmp r3, #1
	beq lbl_020380c8
	cmp r3, #2
	bne lbl_020380cc
lbl_020380c0:
	mov r3, #0x64
	b lbl_020380cc
lbl_020380c8:
	mov r3, #0x65
lbl_020380cc:
	sub r0, r2, #0x64
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	b lbl_02038134
	b lbl_020380ec
	b lbl_020380fc
	b lbl_02038120
	b lbl_0203810c
lbl_020380ec:
	cmp r3, #0x64
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_020380fc:
	cmp r3, #0x65
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_0203810c:
	cmp r3, #0x64
	cmpeq r1, #0x67
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_02038120:
	cmp r3, #0x64
	cmpeq r1, #0x66
	moveq r0, #1
	movne r0, #0
	bx lr
lbl_02038134:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02038140(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =g_GlobalFlag
	mov r1, #0x1f8
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #1
	moveq r0, #5
	ldmeqia sp!, {r3, pc}
	ldr r0, =g_GlobalFlag
	ldr r1, =0x000001F6
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #1
	moveq r0, #4
	ldmeqia sp!, {r3, pc}
	ldr r0, =g_GlobalFlag
	ldr r1, =0x000001EA
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #1
	moveq r0, #3
	ldmeqia sp!, {r3, pc}
	ldr r0, =g_GlobalFlag
	mov r1, #0x1e4
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #1
	moveq r0, #2
	ldmeqia sp!, {r3, pc}
	ldr r0, =g_GlobalFlag
	ldr r1, =0x000001E1
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #1
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020381d0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, =data_020c135c
	add r0, r4, #8
	str r1, [r4]
	bl func_02057cdc
	add r0, r4, #0x58
	bl func_02057cdc
	add r0, r4, #0xa8
	bl func_02057cdc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02038204(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0xa8
	bl func_02057d04
	add r0, r4, #0x58
	bl func_02057d04
	add r0, r4, #8
	bl func_02057d04
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203822c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	ldr r2, =_ZN6status10excelParamE
	mov r7, #0
	ldr r8, [r2, #0x90]
	ldr r6, =g_Stage
	mov r10, r0
	mov r9, r1
	mov r5, #0x1f
	mov r4, r7
lbl_02038250:
	ldrb r0, [r8, #5]
	cmp r9, r0
	bne lbl_020382e8
	ldrb r0, [r8, #9]
	cmp r0, #1
	bne lbl_020382c8
	mov r0, r6
	mov r1, r7
	bl _ZN6status11StageStatus13getSymbolFlagEi
	cmp r0, #0
	beq lbl_020382e8
	ldrb r1, [r8, #7]
	ldrb r2, [r8, #8]
	add r0, r10, #0x58
	sub r1, r1, #1
	sub r2, r2, #3
	bl func_02057e88
	ldr r1, [r10, #0xf8]
	mov r0, r1, asr #1
	add r0, r1, r0, lsr #30
	mov r0, r0, asr #2
	bl _ZN6status13HaveEquipment16getAbsoluteValueEi
	and r2, r0, #0xff
	add r0, r10, #0x58
	mov r1, r5
	mov r3, r4
	bl func_02057f40
	add r0, r10, #0x58
	bl func_02057ec0
	b lbl_020382e8
lbl_020382c8:
	cmp r0, #3
	bne lbl_020382e8
	ldrb r1, [r8, #7]
	ldrb r2, [r8, #8]
	add r0, r10, #0xa8
	sub r1, r1, #8
	sub r2, r2, #8
	bl func_02057e88
lbl_020382e8:
	add r7, r7, #1
	cmp r7, #0x72
	add r8, r8, #0xc
	blt lbl_02038250
	ldr r0, [r10, #0xf8]
	add r0, r0, #1
	str r0, [r10, #0xf8]
	cmp r0, #0x80
	mvnge r0, #0x7e
	strge r0, [r10, #0xf8]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

#pragma thumb on
