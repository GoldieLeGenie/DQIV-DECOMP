/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02061cbc(void);
    void func_02061edc(void);
    void func_02061f58(void);
    void func_02061f80(void);
    void func_02061fb4(void);
    void func_02061bac(void);
}

#pragma thumb off

extern "C" asm void func_02061cbc(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x40
	mov r12, r2
	ldr r3, [r0, #4]
	ldr r2, [r1, #0xc]
	cmp r12, r1
	smull r7, r5, r3, r2
	ldr r6, [r0]
	ldr r4, [r1]
	addeq r10, sp, #0x1c
	smlal r7, r5, r6, r4
	ldr r2, [r0, #8]
	ldr r4, [r1, #0x18]
	movne r10, r12
	smlal r7, r5, r2, r4
	mov r4, r7, lsr #0xc
	orr r4, r4, r5, lsl #20
	str r4, [r10]
	ldr r4, [r1, #0x10]
	ldr r5, [r1, #4]
	smull r8, r7, r3, r4
	smlal r8, r7, r6, r5
	ldr r4, [r1, #0x1c]
	smlal r8, r7, r2, r4
	mov r4, r8, lsr #0xc
	orr r4, r4, r7, lsl #20
	str r4, [r10, #4]
	ldr r4, [r1, #0x14]
	ldr r5, [r1, #8]
	smull r8, r7, r3, r4
	smlal r8, r7, r6, r5
	ldr r3, [r1, #0x20]
	smlal r8, r7, r2, r3
	mov r2, r8, lsr #0xc
	orr r2, r2, r7, lsl #20
	str r2, [r10, #8]
	ldr r9, [r0, #0x10]
	ldr r2, [r0, #0xc]
	smull r7, r6, r9, r4
	smlal r7, r6, r2, r5
	ldr r4, [r0, #0x14]
	smlal r7, r6, r4, r3
	mov r3, r7, lsr #0xc
	orr r3, r3, r6, lsl #20
	str r3, [r10, #0x14]
	ldr r3, [r1, #0x10]
	ldr r5, [r1, #4]
	smull r7, r6, r9, r3
	smlal r7, r6, r2, r5
	ldr r5, [r1, #0x1c]
	mov r3, r9, asr #0x1f
	smlal r7, r6, r4, r5
	str r3, [sp]
	mov r3, r7, lsr #0xc
	orr r3, r3, r6, lsl #20
	str r3, [r10, #0x10]
	mov r3, r2, asr #0x1f
	str r3, [sp, #4]
	mov r3, r4, asr #0x1f
	ldr r8, [r1, #0xc]
	str r3, [sp, #8]
	mov r3, r8, asr #0x1f
	str r3, [sp, #0x18]
	ldr r7, [r1]
	ldr r6, [r1, #0x18]
	mov r3, r7, asr #0x1f
	str r3, [sp, #0xc]
	umull r3, r5, r4, r6
	mov r11, r6, asr #0x1f
	str r3, [sp, #0x10]
	mla r5, r4, r11, r5
	ldr r3, [sp, #8]
	add lr, sp, #0x1c
	mla r5, r3, r6, r5
	umull r3, r4, r2, r7
	str r3, [sp, #0x14]
	ldr r3, [sp, #0xc]
	mla r4, r2, r3, r4
	ldr r2, [sp, #4]
	umull r3, r11, r9, r8
	mla r4, r2, r7, r4
	ldr r2, [sp, #0x14]
	adds r3, r2, r3
	ldr r2, [sp, #0x18]
	mla r11, r9, r2, r11
	ldr r2, [sp]
	mla r11, r2, r8, r11
	adc r4, r4, r11
	ldr r2, [sp, #0x10]
	ldr r11, [sp, #0x18]
	adds r3, r2, r3
	adc r2, r5, r4
	mov r3, r3, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0xc]
	ldr r2, [r0, #0x1c]
	ldr r5, [r0, #0x18]
	ldr r4, [r0, #0x20]
	umull r3, r0, r2, r8
	mla r0, r2, r11, r0
	mov r9, r2, asr #0x1f
	mla r0, r9, r8, r0
	smlal r3, r0, r5, r7
	smlal r3, r0, r4, r6
	mov r3, r3, lsr #0xc
	orr r3, r3, r0, lsl #20
	str r3, [r10, #0x18]
	ldr r0, [r1, #0x10]
	ldr r3, [r1, #4]
	smull r7, r0, r2, r0
	cmp r10, lr
	smlal r7, r0, r5, r3
	ldr r6, [r1, #0x1c]
	addne sp, sp, #0x40
	smlal r7, r0, r4, r6
	mov r3, r7, lsr #0xc
	orr r3, r3, r0, lsl #20
	str r3, [r10, #0x1c]
	ldr r0, [r1, #0x14]
	ldr r6, [r1, #0x20]
	ldr r3, [r1, #8]
	smull r1, r0, r2, r0
	smlal r1, r0, r5, r3
	smlal r1, r0, r4, r6
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	str r1, [r10, #0x20]
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldr r0, [lr]
	str r0, [r12]
	add sp, sp, #0x40
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02061edc(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r4, [r1, #0xc]
	ldmia r0, {r3, r12}
	smull r6, r5, r12, r4
	ldr r4, [r1]
	ldr r0, [r0, #8]
	smlal r6, r5, r3, r4
	ldr r4, [r1, #0x18]
	smlal r6, r5, r0, r4
	mov r4, r6, lsr #0xc
	orr r4, r4, r5, lsl #20
	str r4, [r2]
	ldr r4, [r1, #0x10]
	ldr r5, [r1, #4]
	smull r6, lr, r12, r4
	smlal r6, lr, r3, r5
	ldr r4, [r1, #0x1c]
	smlal r6, lr, r0, r4
	mov r4, r6, lsr #0xc
	orr r4, r4, lr, lsl #20
	str r4, [r2, #4]
	ldr lr, [r1, #0x14]
	ldr r4, [r1, #8]
	smull r5, lr, r12, lr
	smlal r5, lr, r3, r4
	ldr r1, [r1, #0x20]
	smlal r5, lr, r0, r1
	mov r0, r5, lsr #0xc
	orr r0, r0, lr, lsl #20
	str r0, [r2, #8]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02061f58(void)
{
	mov r2, #0x1000
	mov r3, #0
	stmia r0!, {r2, r3}
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r3}
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r3}
	bx lr
}

extern "C" asm void func_02061f80(void)
{
	stmdb sp!, {r4}
	mov r12, #0
	ldmia r0!, {r2, r3, r4}
	stmia r1!, {r2, r3, r4, r12}
	ldmia r0!, {r2, r3, r4}
	stmia r1!, {r2, r3, r4, r12}
	ldmia r0!, {r2, r3, r4}
	stmia r1!, {r2, r3, r4, r12}
	mov r12, #0x1000
	ldmia r0!, {r2, r3, r4}
	stmia r1!, {r2, r3, r4, r12}
	ldmia sp!, {r4}
	bx lr
}

extern "C" asm void func_02061fb4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, [sp, #0x10]
	mov r5, r0
	str r12, [sp]
	mov r4, r1
	bl func_02061bac
	ldr r0, [r5, #0x24]
	str r0, [r4, #0x24]
	ldr r0, [r5, #0x28]
	str r0, [r4, #0x28]
	ldr r0, [r5, #0x2c]
	str r0, [r4, #0x2c]
	ldmia sp!, {r3, r4, r5, pc}
}

#pragma thumb on
