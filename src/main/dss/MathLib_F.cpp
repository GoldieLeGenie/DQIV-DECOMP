/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02080038(void);
    void func_02080098(void);
    void func_020800c0(void);
    void func_02080100(void);
    void func_02080110(void);
    void func_0208011c(void);
    void func_02080130(void);
    void func_0208015c(void);
    void func_020801ec(void);
    void func_0208021c(void);
    void func_02080278(void);
    void func_02080288(void);
    void func_020802a0(void);
    void func_020802b4(void);
    void func_02080334(void);
    void func_020803b8(void);
    void func_020803ec(void);
    void func_02080430(void);
    void func_02080444(void);
    void func_020805bc(void);
    void func_0208060c(void);
    void func_0208062c(void);
    void func_0208066c(void);
    void func_02080694(void);
    void func_020806dc(void);
    void func_020808cc(void);
    void func_02080a68(void);
    void func_02080b7c(void);
    void func_02080ba0(void);
    void func_02080c20(void);
    void func_02080c84(void);
    void func_02080cec(void);
    void _ZN7dssrand7dssrandE(void);
    void data_0211a664(void);
    void data_0211a6a8(void);
    void func_00b2b06c(void);
    void func_02006238(void);
    void func_02067828(void);
    void func_020678a0(void);
    void func_02067a40(void);
    void func_02079f88(void);
    void func_02086e50(void);
}

#pragma thumb off

extern "C" asm void func_02080038(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	cmp r5, #0xc
	ldr r4, =data_0211a664
	bne lbl_02080068
	add r2, r4, #4
	add r1, r4, #0x24
	mov r0, #0xc
	str r2, [r4, #0x150]
	str r1, [r4, #0x154]
	bl func_02080098
	str r0, [r4, #0x158]
lbl_02080068:
	cmp r5, #0xa
	bne lbl_0208008c
	add r2, r4, #0x14
	add r1, r4, #0x34
	mov r0, #0xa
	str r2, [r4, #0x150]
	str r1, [r4, #0x154]
	bl func_02080098
	str r0, [r4, #0x158]
lbl_0208008c:
	str r5, [r4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02080098(void)
{
	cmp r0, #0xa
	beq lbl_020800b0
	cmp r0, #0xc
	bne lbl_020800b8
	mov r0, #0xc
	bx lr
lbl_020800b0:
	mov r0, #0xa
	bx lr
lbl_020800b8:
	mov r0, #0
	bx lr
}

extern "C" asm void func_020800c0(void)
{
	stmdb sp!, {r4, lr}
	ldr r2, =data_0211a664
	mov r4, r1
	ldr r2, [r2, #0x144]
	mov r1, r0
	cmp r4, r2
	mvnlt r0, #0
	ldmltia sp!, {r4, pc}
	movgt r4, r2
	ldr r0, =data_0211a6a8
	mov r2, r4
	bl func_02067a40
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080100(void)
{
	ldr r0, =data_0211a664
	ldr r0, [r0, #0x148]
	bx lr
}

extern "C" asm void func_02080110(void)
{
	stmia r0, {r1, r2, r3}
	str r2, [r0, #0xc]
	bx lr
}

extern "C" asm void func_0208011c(void)
{
	ldr r3, [r0, #0xc]
	ldr r12, [r0]
	mla r0, r2, r3, r1
	add r0, r12, r0, lsl #5
	bx lr
}

extern "C" asm void func_02080130(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #8
	ldr r2, [r0, #8]
	str r2, [sp]
	str r1, [sp, #4]
	mov r1, #0
	ldr r3, [r0, #4]
	mov r2, r1
	bl func_0208015c
	add sp, sp, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0208015c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r8, r0
	ldr r12, [r8, #4]
	mov r7, r1
	cmp r7, r12
	ldr r5, [sp, #0x20]
	ldr r4, [sp, #0x24]
	ldrle r1, [r8, #8]
	mov r6, r2
	cmple r6, r1
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	add r0, r7, r3
	cmp r0, r12
	add r0, r6, r5
	subgt r3, r12, r7
	cmp r0, r1
	subgt r5, r1, r6
	cmp r3, #0
	cmpne r5, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	mov r9, r3, lsl #5
	mov r10, #0
	cmp r5, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_020801bc:
	mov r0, r8
	mov r1, r7
	add r2, r6, r10
	bl func_0208011c
	mov r1, r0
	mov r0, r4
	mov r2, r9
	bl func_020678a0
	add r10, r10, #1
	cmp r10, r5
	blt lbl_020801bc
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020801ec(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r1
	mov r5, r2
	mov r4, r3
	mov r1, r6, asr #3
	mov r2, r5, asr #3
	bl func_0208011c
	mov r3, r4
	and r1, r6, #7
	and r2, r5, #7
	bl func_02080b7c
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208021c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldr r12, [sp, #0x18]
	mov r7, r0
	cmp r12, #0
	movne r0, #1
	moveq r0, #0
	mov r6, r1
	mov r4, r2
	mov r5, r3
	bl func_02086e50
	ldrh r3, [sp, #0x1c]
	mov r2, r4
	mov r1, r6
	add r4, r0, r3, lsl #5
	mov r0, r7
	bl func_0208011c
	cmp r5, #0
	mov r1, r4
	beq lbl_02080270
	bl func_02080c84
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02080270:
	bl func_02080c20
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02080278(void)
{
	stmdb sp!, {r3, lr}
	str r2, [sp]
	bl func_02080288
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02080288(void)
{
	str r1, [r0]
	stmib r0, {r1, r2}
	ldr r1, [sp]
	str r3, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void func_020802a0(void)
{
	ldr r3, [r0, #0x10]
	ldr r12, [r0]
	mla r0, r2, r3, r1
	add r0, r12, r0, lsl #1
	bx lr
}

extern "C" asm void func_020802b4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r5, r0
	ldr r3, [r5, #8]
	ldr r0, [r5, #0x10]
	mov r4, r1
	cmp r3, r0
	ldr r0, [r5, #0xc]
	bne lbl_020802ec
	mul r2, r3, r0
	ldr r1, [r5]
	mov r0, r4
	mov r2, r2, lsl #1
	bl func_02067828
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_020802ec:
	mov r7, #0
	cmp r0, #0
	ldmleia sp!, {r3, r4, r5, r6, r7, pc}
	mov r6, r7
lbl_020802fc:
	mov r0, r5
	mov r1, r6
	mov r2, r7
	bl func_020802a0
	ldr r2, [r5, #8]
	mov r1, r0
	mov r0, r4
	mov r2, r2, lsl #1
	bl func_02067828
	ldr r0, [r5, #0xc]
	add r7, r7, #1
	cmp r7, r0
	blt lbl_020802fc
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02080334(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r9, r0
	mov r8, r1
	mov r7, r2
	mov r6, r3
	ldr r5, [sp, #0x20]
	ldr r4, [sp, #0x24]
	bl func_020802a0
	ldr r2, [r9, #0x10]
	mov r1, r0
	cmp r6, r2
	bne lbl_02080378
	mul r2, r6, r5
	mov r0, r4
	mov r2, r2, lsl #1
	bl func_02067828
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_02080378:
	mov r10, #0
	cmp r5, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	mov r6, r6, lsl #1
lbl_02080388:
	mov r0, r9
	mov r1, r8
	add r2, r7, r10
	bl func_020802a0
	mov r1, r0
	mov r0, r4
	mov r2, r6
	bl func_02067828
	add r10, r10, #1
	cmp r10, r5
	blt lbl_02080388
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020803b8(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldrh lr, [sp, #0x18]
	ldr r12, [sp, #0x14]
	ldr r4, [sp, #0x10]
	orr r12, lr, r12, lsl #12
	mov r12, r12, lsl #0x10
	str r4, [sp]
	mov r12, r12, lsr #0x10
	str r12, [sp, #4]
	bl func_02080334
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020803ec(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldrh lr, [sp, #0x20]
	ldr r12, [sp, #0x1c]
	ldr r4, [sp, #0x18]
	orr r12, lr, r12, lsl #10
	ldr lr, [sp, #0x14]
	orr r4, r12, r4, lsl #11
	orr r4, r4, lr, lsl #12
	ldr lr, [sp, #0x10]
	mov r12, r4, lsl #0x10
	str lr, [sp]
	mov r12, r12, lsr #0x10
	str r12, [sp, #4]
	bl func_02080334
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080430(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r3
	bl func_020802a0
	strh r4, [r0]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02080444(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x10
	mov r10, r0
	ldr r4, [r10, #8]
	mov r9, r1
	cmp r9, r4
	ldrle r1, [r10, #0xc]
	mov r8, r2
	ldr r6, [sp, #0x38]
	ldr r5, [sp, #0x3c]
	cmple r8, r1
	mov r7, r3
	addgt sp, sp, #0x10
	ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r0, r9, r7
	cmp r0, r4
	add r0, r8, r6
	subgt r7, r4, r9
	cmp r0, r1
	subgt r6, r1, r8
	cmp r7, #0
	cmpne r6, #0
	addeq sp, sp, #0x10
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	cmp r7, r4
	movgt r7, r4
	cmp r6, r1
	movgt r6, r1
	ldr r1, [r10]
	ldr r0, [r10, #4]
	ldr r4, [r10, #0x10]
	sub r0, r1, r0
	mov r0, r0, lsr #1
	str r0, [sp, #4]
	mov r1, r4
	bl func_02006238
	mov r11, r1
	ldr r0, [sp, #4]
	mov r1, r4
	bl func_02006238
	cmp r6, #0
	mov r4, #0
	addle sp, sp, #0x10
	ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r0, r0, r8
	str r0, [sp]
	mov r0, r5, lsl #0x10
	mov r0, r0, lsr #0x10
	add r1, r11, #0x80
	str r0, [sp, #8]
	mvn r0, #0
	add r11, r9, r1
	str r0, [sp, #0xc]
lbl_02080518:
	mov r0, r10
	mov r1, r9
	add r2, r8, r4
	bl func_020802a0
	ldr r1, [sp, #0xc]
	cmp r5, r1
	bne lbl_02080544
	mov r2, #0
	mov r3, r2
	mov r12, #0xf
	b lbl_02080578
lbl_02080544:
	ldr r1, [sp]
	ldr r2, =0xAAAAAAAB
	add r1, r4, r1
	umull r2, r3, r1, r2
	mov r3, r3, lsr #4
	mov r2, #0x18
	umull r3, r12, r2, r3
	sub r3, r1, r3
	add r1, r11, r3, lsl #5
	mov r1, r1, lsl #0x10
	ldr r12, [sp, #8]
	mov r2, r1, lsr #0x10
	mov r3, #1
lbl_02080578:
	cmp r7, #0
	mov lr, #0
	ble lbl_020805a4
lbl_02080584:
	orr r1, r2, r12, lsl #12
	strh r1, [r0], #2
	add r1, r2, r3
	mov r1, r1, lsl #0x10
	mov r2, r1, lsr #0x10
	add lr, lr, #1
	cmp lr, r7
	blt lbl_02080584
lbl_020805a4:
	add r4, r4, #1
	cmp r4, r6
	blt lbl_02080518
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020805bc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, [r0]
	mov r5, r1
	mov r4, r3
	cmp r12, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	bl func_020802a0
	ldrsb r1, [r4]
	cmp r1, #0
	ldmeqia sp!, {r3, r4, r5, pc}
lbl_020805e4:
	cmp r5, #0x20
	ldmgeia sp!, {r3, r4, r5, pc}
	ldrsb r1, [r4]
	add r5, r5, #1
	orr r1, r1, #0xf000
	strh r1, [r0], #2
	ldrsb r1, [r4, #1]!
	cmp r1, #0
	bne lbl_020805e4
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0208060c(void)
{
	mvn r2, #0
	cmp r1, r2
	moveq r1, #0xf
	mov r1, r1, lsl #0x1c
	ldr r12, =func_020802b4
	mov r1, r1, lsr #0x10
	bx r12
}

extern "C" asm void func_0208062c(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #8
	ldr lr, [sp, #0x14]
	mvn r12, #0
	cmp lr, r12
	moveq r12, #0xf
	streq r12, [sp, #0x14]
	ldr r12, [sp, #0x14]
	ldr lr, [sp, #0x10]
	mov r12, r12, lsl #0x1c
	str lr, [sp]
	mov r12, r12, lsr #0x10
	str r12, [sp, #4]
	bl func_02080334
	add sp, sp, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0208066c(void)
{
	stmdb sp!, {r3, lr}
	mvn r12, #0
	cmp r3, r12
	moveq r3, #0xf
	mov r3, r3, lsl #0xc
	orr r3, r3, #0x7f
	mov r3, r3, lsl #0x10
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02080694(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #8
	ldr lr, [sp, #0x14]
	mvn r12, #0
	cmp lr, r12
	moveq r12, #0xf
	streq r12, [sp, #0x14]
	ldr r12, [sp, #0x14]
	ldr lr, [sp, #0x10]
	mov r12, r12, lsl #0xc
	orr r12, r12, #7
	mov r12, r12, lsl #0x10
	str lr, [sp]
	mov r12, r12, lsr #0x10
	str r12, [sp, #4]
	bl func_02080334
	add sp, sp, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020806dc(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x10
	mov r10, r0
	ldr r0, [sp, #0x38]
	ldr r6, [sp, #0x3c]
	mvn r5, #0
	cmp r6, r5
	str r0, [sp, #0x38]
	moveq r0, #0xf
	streq r0, [sp, #0x3c]
	mov r9, r1
	mov r4, r3
	ldr r1, [sp, #0x3c]
	ldr r0, [sp, #0x38]
	mov r8, r2
	sub r2, r0, #1
	mov r0, r1, lsl #0xc
	str r0, [sp, #8]
	orr r0, r0, #7
	mov r1, r0, lsl #0x10
	str r2, [sp]
	mov r5, r1, lsr #0x10
	mov r0, r10
	add r1, r9, #1
	add r2, r8, #1
	sub r3, r4, #1
	str r5, [sp, #4]
	bl func_02080334
	ldr r0, [sp, #8]
	mov r1, r9
	orr r0, r0, #4
	mov r3, r0, lsl #0x10
	mov r0, r10
	mov r2, r8
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldr r3, [sp, #8]
	ldr r0, [sp, #0x38]
	orr r3, r3, #4
	sub r6, r0, #1
	orr r3, r3, #0x800
	mov r3, r3, lsl #0x10
	mov r0, r10
	mov r1, r9
	add r2, r8, r6
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldr r3, [sp, #8]
	sub r0, r4, #1
	str r0, [sp, #0xc]
	orr r3, r3, #4
	ldr r1, [sp, #0xc]
	orr r3, r3, #0x400
	mov r3, r3, lsl #0x10
	mov r0, r10
	add r1, r9, r1
	mov r2, r8
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldr r3, [sp, #8]
	ldr r1, [sp, #0xc]
	orr r3, r3, #4
	orr r3, r3, #0xc00
	mov r3, r3, lsl #0x10
	mov r0, r10
	add r1, r9, r1
	add r2, r8, r6
	mov r3, r3, lsr #0x10
	bl func_02080430
	sub r5, r4, #1
	cmp r5, #1
	mov r7, #1
	ble lbl_02080854
	ldr r0, [sp, #8]
	orr r1, r0, #5
	orr r0, r0, #5
	orr r1, r1, #0x800
	mov r0, r0, lsl #0x10
	mov r1, r1, lsl #0x10
	mov r4, r0, lsr #0x10
	mov r11, r1, lsr #0x10
lbl_02080820:
	mov r0, r10
	mov r2, r8
	mov r3, r4
	add r1, r9, r7
	bl func_02080430
	mov r0, r10
	add r1, r9, r7
	add r2, r8, r6
	mov r3, r11
	bl func_02080430
	add r7, r7, #1
	cmp r7, r5
	blt lbl_02080820
lbl_02080854:
	ldr r0, [sp, #0x38]
	mov r7, #1
	sub r6, r0, #1
	cmp r6, #1
	addle sp, sp, #0x10
	ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [sp, #8]
	orr r1, r0, #6
	orr r0, r0, #6
	orr r1, r1, #0x400
	mov r0, r0, lsl #0x10
	mov r1, r1, lsl #0x10
	mov r5, r0, lsr #0x10
	mov r4, r1, lsr #0x10
lbl_0208088c:
	mov r0, r10
	mov r1, r9
	mov r3, r5
	add r2, r8, r7
	bl func_02080430
	ldr r1, [sp, #0xc]
	mov r0, r10
	mov r3, r4
	add r1, r9, r1
	add r2, r8, r7
	bl func_02080430
	add r7, r7, #1
	cmp r7, r6
	blt lbl_0208088c
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020808cc(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #8
	mov r10, r0
	ldr r0, [sp, #0x30]
	ldr r6, [sp, #0x34]
	mvn r5, #0
	cmp r6, r5
	str r0, [sp, #0x30]
	moveq r0, #0xf
	streq r0, [sp, #0x34]
	mov r9, r1
	ldr r1, [sp, #0x34]
	mov r8, r2
	mov r1, r1, lsl #0xc
	str r1, [sp]
	orr r1, r1, #0x10
	mov r4, r3
	mov r3, r1, lsl #0x10
	mov r0, r10
	mov r1, r9
	mov r2, r8
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldr r0, [sp]
	sub r6, r4, #1
	orr r0, r0, #0xf
	mov r1, r0, lsl #0x10
	mov r3, r1, lsr #0x10
	mov r0, r10
	mov r2, r8
	add r1, r9, r6
	bl func_02080430
	ldr r3, [sp]
	ldr r0, [sp, #0x30]
	orr r3, r3, #0xe
	sub r5, r0, #1
	mov r3, r3, lsl #0x10
	mov r0, r10
	mov r1, r9
	add r2, r8, r5
	mov r3, r3, lsr #0x10
	bl func_02080430
	ldr r3, [sp]
	mov r0, r10
	orr r3, r3, #0xd
	mov r3, r3, lsl #0x10
	add r1, r9, r6
	add r2, r8, r5
	mov r3, r3, lsr #0x10
	bl func_02080430
	sub r4, r4, #1
	cmp r4, #1
	mov r7, #1
	ble lbl_020809f8
	ldr r0, [sp]
	orr r1, r0, #0x18
	orr r2, r0, #0x11
	mov r0, r2, lsl #0x10
	mov r1, r1, lsl #0x10
	mov r11, r0, lsr #0x10
	mov r0, r1, lsr #0x10
	str r0, [sp, #4]
lbl_020809c4:
	mov r0, r10
	mov r2, r8
	mov r3, r11
	add r1, r9, r7
	bl func_02080430
	ldr r3, [sp, #4]
	mov r0, r10
	add r1, r9, r7
	add r2, r8, r5
	bl func_02080430
	add r7, r7, #1
	cmp r7, r4
	blt lbl_020809c4
lbl_020809f8:
	ldr r0, [sp, #0x30]
	mov r7, #1
	sub r5, r0, #1
	cmp r5, #1
	addle sp, sp, #8
	ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [sp]
	orr r1, r0, #0x19
	orr r2, r0, #0x12
	mov r0, r2, lsl #0x10
	mov r1, r1, lsl #0x10
	mov r4, r0, lsr #0x10
	mov r11, r1, lsr #0x10
lbl_02080a2c:
	mov r0, r10
	mov r1, r9
	mov r3, r4
	add r2, r8, r7
	bl func_02080430
	mov r0, r10
	mov r3, r11
	add r1, r9, r6
	add r2, r8, r7
	bl func_02080430
	add r7, r7, #1
	cmp r7, r5
	blt lbl_02080a2c
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02080a68(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	ldr r9, [sp, #0x20]
	mvn r8, #0
	mov r7, r0
	cmp r9, r8
	moveq r0, #0xf
	streq r0, [sp, #0x20]
	ldr r0, [sp, #0x24]
	mov r6, r1
	mov r5, r2
	mov r4, r3
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	b lbl_02080af0
	b lbl_02080ab0
	b lbl_02080ac0
	b lbl_02080ad0
	b lbl_02080ae0
lbl_02080ab0:
	mov r1, #0x13
	mov r9, #0x14
	mov r10, #0x17
	b lbl_02080afc
lbl_02080ac0:
	mov r1, #8
	mov r9, #9
	mov r10, #0xa
	b lbl_02080afc
lbl_02080ad0:
	mov r1, #0x15
	mov r9, #0x11
	mov r10, #0x16
	b lbl_02080afc
lbl_02080ae0:
	mov r1, #0x1a
	mov r9, #0x18
	mov r10, #0x1b
	b lbl_02080afc
lbl_02080af0:
	mov r1, #0xc
	mov r9, r1
	mov r10, r1
lbl_02080afc:
	ldr r8, [sp, #0x20]
	mov r0, r7
	orr r1, r1, r8, lsl #12
	mov r3, r1, lsl #0x10
	mov r1, r6
	mov r2, r5
	mov r3, r3, lsr #0x10
	bl func_02080430
	orr r0, r10, r8, lsl #12
	mov r3, r0, lsl #0x10
	sub r1, r4, #1
	mov r0, r7
	mov r2, r5
	add r1, r6, r1
	mov r3, r3, lsr #0x10
	bl func_02080430
	sub r4, r4, #1
	mov r10, #1
	cmp r4, #1
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	orr r0, r9, r8, lsl #12
	mov r0, r0, lsl #0x10
	mov r8, r0, lsr #0x10
lbl_02080b58:
	mov r0, r7
	mov r2, r5
	mov r3, r8
	add r1, r6, r10
	bl func_02080430
	add r10, r10, #1
	cmp r10, r4
	blt lbl_02080b58
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02080b7c(void)
{
	stmdb sp!, {r3, lr}
	mov lr, r1, lsl #2
	mov r1, #0xf
	mvn r1, r1, lsl lr
	ldr r12, [r0, r2, lsl #2]
	and r1, r12, r1
	orr r1, r1, r3, lsl lr
	str r1, [r0, r2, lsl #2]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02080ba0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	cmp r1, #0
	moveq r1, r0
	mov r2, #0
lbl_02080bb0:
	ldr r8, [r1], #4
	add r2, r2, #1
	mov r7, r8, lsr #4
	mov r6, r7, lsr #4
	mov r5, r6, lsr #4
	mov r4, r5, lsr #4
	mov lr, r4, lsr #4
	mov r12, lr, lsr #4
	mov r3, r12, lsr #4
	mov r8, r8, lsl #0x1c
	and r7, r7, #0xf
	orr r7, r7, r8, lsr #24
	and r6, r6, #0xf
	orr r6, r6, r7, lsl #4
	and r5, r5, #0xf
	orr r5, r5, r6, lsl #4
	and r4, r4, #0xf
	orr r4, r4, r5, lsl #4
	and lr, lr, #0xf
	orr lr, lr, r4, lsl #4
	and r12, r12, #0xf
	orr r12, r12, lr, lsl #4
	and r3, r3, #0xf
	orr r3, r3, r12, lsl #4
	cmp r2, #8
	str r3, [r0], #4
	blt lbl_02080bb0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02080c20(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, =0x11111111
	mov r3, #0
lbl_02080c2c:
	ldr r2, [r1], #4
	cmp r2, #0
	beq lbl_02080c6c
	orr r4, r2, r2, lsr #1
	orr r4, r4, r2, lsr #2
	orr r4, r4, r2, lsr #3
	and r5, r4, r12
	orr r4, r5, r5, lsl #1
	orr r4, r4, r5, lsl #2
	orr r5, r4, r5, lsl #3
	ldr r4, [r0]
	mvn lr, r5
	and r4, r4, lr
	and r2, r2, r5
	orr r2, r4, r2
	str r2, [r0]
lbl_02080c6c:
	add r3, r3, #1
	cmp r3, #8
	add r0, r0, #4
	blt lbl_02080c2c
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02080c84(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, =0x11111111
	add r2, r0, #0x1c
	mov r3, #0
lbl_02080c94:
	ldr r0, [r1], #4
	cmp r0, #0
	beq lbl_02080cd4
	orr r4, r0, r0, lsr #1
	orr r4, r4, r0, lsr #2
	orr r4, r4, r0, lsr #3
	and r5, r4, r12
	orr r4, r5, r5, lsl #1
	orr r4, r4, r5, lsl #2
	orr r5, r4, r5, lsl #3
	ldr r4, [r2]
	mvn lr, r5
	and r4, r4, lr
	and r0, r0, r5
	orr r0, r4, r0
	str r0, [r2]
lbl_02080cd4:
	add r3, r3, #1
	cmp r3, #8
	sub r2, r2, #4
	blt lbl_02080c94
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02080cec(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #0x20
	add r0, sp, #0
	mov r4, #0
	bl func_02079f88
	mov r2, r4
	add r1, sp, #0
lbl_02080d08:
	ldr r0, [r1, r2, lsl #2]
	add r2, r2, #1
	cmp r2, #8
	add r4, r4, r0
	blt lbl_02080d08
	ldr r0, =_ZN7dssrand7dssrandE
	ldr r2, =0x5D588B65
	str r4, [r0]
	ldr r1, =0x00269EC3
	str r2, [r0, #4]
	str r1, [r0, #8]
	add sp, sp, #0x20
	ldmia sp!, {r4, pc}
}

#pragma thumb on
