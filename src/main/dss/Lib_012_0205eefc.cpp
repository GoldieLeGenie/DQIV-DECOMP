/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0205eefc(void);
    void func_0205ef28(void);
    void func_0205ef84(void);
    void func_0205ef98(void);
    void func_0205efac(void);
    void func_0205f038(void);
    void func_0205f04c(void);
    void func_0205f13c(void);
    void func_0205f18c(void);
    void func_0205f2e0(void);
    void func_0205f4dc(void);
    void func_0205f570(void);
    void data_020b62d4(void);
    void data_020c3c90(void);
    void data_0210c7cc(void);
    void data_0210c7e0(void);
    void data_0210c9a8(void);
    void data_0210c9ac(void);
    void data_0210cdd0(void);
    void func_0205ebbc(void);
    void func_0206785c(void);
    void func_020679ac(void);
    void func_02067a40(void);
    void func_020787c4(void);
    void func_020788c0(void);
    void func_020789d0(void);
    void func_02078a88(void);
    void func_02079cfc(void);
    void func_02079d10(void);
    void func_0207a058(void);
}

#pragma thumb off

extern "C" asm void func_0205eefc(void)
{
	stmdb sp!, {r3, lr}
	and r0, r1, #0x3f
	cmp r0, #1
	bne lbl_0205ef1c
	ldr r0, =data_0210c7cc
	mov r1, #1
	strh r1, [r0]
	ldmia sp!, {r3, pc}
lbl_0205ef1c:
	bl func_0207a058
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205ef28(void)
{
	stmdb sp!, {r3, lr}
	and r0, r1, #0x3f
	cmp r0, #0x11
	bne lbl_0205ef78
	ldr r0, =data_0210c7e0
	ldr r1, [r0, #0xc]
	cmp r1, #0
	ldmneia sp!, {r3, pc}
	ldr r1, [r0, #0x18]
	mov r0, #0
	cmp r1, #0
	beq lbl_0205ef5c
	blx r1
lbl_0205ef5c:
	cmp r0, #0
	beq lbl_0205ef68
	bl func_0205ef84
lbl_0205ef68:
	ldr r0, =data_0210c7e0
	mov r1, #1
	str r1, [r0, #0xc]
	ldmia sp!, {r3, pc}
lbl_0205ef78:
	bl func_0207a058
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205ef84(void)
{
	stmdb sp!, {r3, lr}
	mov r0, #2
	bl func_0205ebbc
	bl func_0207a058
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205ef98(void)
{
	ldr r0, =data_0210c7e0
	mov r1, #0
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_0205efac(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #8
	mov r5, r0
	bl func_02079cfc
	ldr r1, =data_0210c9a8
	mov r4, r0
	ldr r0, [r1]
	cmp r0, #0
	bne lbl_0205f018
	add r0, r5, #0xc4
	str r5, [r1]
	bl func_0205f038
	ldr r0, =data_0210c9ac
	bl func_0205f038
	mov r0, #0
	str r0, [r5, #0xc0]
	mov r2, #0x400
	ldr r1, =func_0205f04c
	ldr r3, =data_0210cdd0
	mov r0, r5
	str r2, [sp]
	mov r2, #0x14
	str r2, [sp, #4]
	mov r2, r5
	bl func_020787c4
	mov r0, r5
	bl func_02078a88
lbl_0205f018:
	mov r0, r4
	bl func_02079d10
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0205f038(void)
{
	ldr r12, =func_020679ac
	mov r1, #0
	mov r2, #0x24
	bx r12
}

extern "C" asm void func_0205f04c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x24
	mov r4, #0
	mov r8, r0
	add r6, sp, #0
	mov r10, r4
	mov r9, r4
	mov r5, r4
	mov r11, #0x24
lbl_0205f070:
	mov r0, r6
	mov r1, r5
	mov r2, r11
	bl func_020679ac
	bl func_02079cfc
	ldr r1, [r8, #0xc0]
	mov r7, r0
	cmp r1, #0
	bne lbl_0205f0a8
lbl_0205f094:
	mov r0, r4
	bl func_020789d0
	ldr r0, [r8, #0xc0]
	cmp r0, #0
	beq lbl_0205f094
lbl_0205f0a8:
	ldr lr, [r8, #0xc0]
	add r12, sp, #0
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldr r1, [lr]
	mov r0, r7
	str r1, [r12]
	bl func_02079d10
	ldr r1, [sp]
	cmp r1, #0
	beq lbl_0205f0e8
	mov r0, r6
	blx r1
	str r0, [sp, #8]
lbl_0205f0e8:
	bl func_02079cfc
	ldr r2, [sp, #4]
	ldr r1, =data_0210c9a8
	mov r7, r0
	strb r10, [r1, #0x26]
	cmp r2, #0
	beq lbl_0205f10c
	mov r0, r6
	blx r2
lbl_0205f10c:
	ldr r0, =data_0210c9a8
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_0205f12c
	mov r0, r7
	str r9, [r8, #0xc0]
	bl func_02079d10
	b lbl_0205f070
lbl_0205f12c:
	bl func_020788c0
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0205f13c(void)
{
	ldr r1, =0x67452301
	ldr r2, =0xEFCDAB89
	str r1, [r0]
	ldr r1, =0x98BADCFE
	str r2, [r0, #4]
	ldr r2, =0x10325476
	str r1, [r0, #8]
	ldr r1, =0xC3D2E1F0
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	mov r1, #0
	str r1, [r0, #0x14]
	str r1, [r0, #0x18]
	str r1, [r0, #0x1c]
	bx lr
}

extern "C" asm void func_0205f18c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	mov r10, r0
	movs r8, r2
	mov r9, r1
	add r6, r10, #0x20
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [r10, #0x14]
	add r1, r0, r8, lsl #3
	cmp r1, r0
	ldrcc r0, [r10, #0x18]
	addcc r0, r0, #1
	strcc r0, [r10, #0x18]
	ldr r0, [r10, #0x18]
	add r0, r0, r8, lsr #29
	str r0, [r10, #0x18]
	str r1, [r10, #0x14]
	ldr r1, [r10, #0x1c]
	cmp r1, #0
	beq lbl_0205f244
	add r0, r1, r8
	cmp r0, #0x40
	bcc lbl_0205f224
	rsb r4, r1, #0x40
	mov r0, r9
	mov r2, r4
	add r1, r6, r1
	bl func_02067a40
	ldr r1, =data_020c3c90
	mov r0, r10
	ldr r3, [r1]
	mov r1, r6
	mov r2, #0x40
	sub r8, r8, r4
	add r9, r9, r4
	blx r3
	mov r0, #0
	str r0, [r10, #0x1c]
	b lbl_0205f244
lbl_0205f224:
	mov r0, r9
	mov r2, r8
	add r1, r6, r1
	bl func_02067a40
	ldr r0, [r10, #0x1c]
	add r0, r0, r8
	str r0, [r10, #0x1c]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_0205f244:
	cmp r8, #0x40
	bcc lbl_0205f2bc
	bic r7, r8, #0x3f
	tst r9, #3
	sub r8, r8, r7
	bne lbl_0205f27c
	ldr r1, =data_020c3c90
	mov r0, r10
	ldr r3, [r1]
	mov r1, r9
	mov r2, r7
	blx r3
	add r9, r9, r7
	b lbl_0205f2bc
lbl_0205f27c:
	mov r5, #0x40
	ldr r4, =data_020c3c90
	mov r11, r5
lbl_0205f288:
	mov r0, r9
	mov r1, r6
	mov r2, r5
	bl func_02067a40
	ldr r3, [r4]
	mov r0, r10
	mov r1, r6
	add r9, r9, #0x40
	mov r2, r11
	blx r3
	sub r7, r7, #0x40
	cmp r7, #0
	bgt lbl_0205f288
lbl_0205f2bc:
	str r8, [r10, #0x1c]
	cmp r8, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	mov r0, r9
	mov r1, r6
	mov r2, r8
	bl func_02067a40
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0205f2e0(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, r5, r6, lr}
	ldr r0, [sp, #0x10]
	mov r6, r1
	ldr r3, [r0, #0x1c]
	add r4, r0, #0x20
	tst r3, #3
	mov r2, r3, asr #2
	moveq r0, #0
	streq r0, [r4, r2, lsl #2]
	ldr r1, [sp, #0x10]
	mov r0, #0x80
	add r5, r1, #0x20
	strb r0, [r5, r3]
	add r3, r3, #1
	tst r3, #3
	beq lbl_0205f338
	mov r0, #0
lbl_0205f328:
	strb r0, [r5, r3]
	add r3, r3, #1
	tst r3, #3
	bne lbl_0205f328
lbl_0205f338:
	ldr r0, [sp, #0x10]
	add r2, r2, #1
	ldr r0, [r0, #0x1c]
	cmp r0, #0x38
	blt lbl_0205f384
	cmp r2, #0x10
	bge lbl_0205f368
	mov r0, #0
lbl_0205f358:
	str r0, [r4, r2, lsl #2]
	add r2, r2, #1
	cmp r2, #0x10
	blt lbl_0205f358
lbl_0205f368:
	ldr r1, =data_020c3c90
	ldr r0, [sp, #0x10]
	ldr r3, [r1]
	mov r1, r4
	mov r2, #0x40
	blx r3
	mov r2, #0
lbl_0205f384:
	cmp r2, #0xe
	bge lbl_0205f3a0
	mov r0, #0
lbl_0205f390:
	str r0, [r4, r2, lsl #2]
	add r2, r2, #1
	cmp r2, #0xe
	blt lbl_0205f390
lbl_0205f3a0:
	ldr r0, [sp, #0x10]
	ldr r3, =data_020c3c90
	ldr r2, [r0, #0x14]
	mov r1, r4
	strb r2, [r5, #0x3f]
	mov r0, r2, lsr #8
	strb r0, [r5, #0x3e]
	mov r0, r2, lsr #0x10
	strb r0, [r5, #0x3d]
	mov r0, r2, lsr #0x18
	strb r0, [r5, #0x3c]
	ldr r0, [sp, #0x10]
	mov r2, #0x40
	ldr r4, [r0, #0x18]
	strb r4, [r5, #0x3b]
	mov r0, r4, lsr #8
	strb r0, [r5, #0x3a]
	mov r0, r4, lsr #0x10
	strb r0, [r5, #0x39]
	mov r0, r4, lsr #0x18
	strb r0, [r5, #0x38]
	ldr r0, [sp, #0x10]
	ldr r3, [r3]
	blx r3
	ldr r0, [sp, #0x10]
	ldr r1, [r0]
	mov r0, r1, lsr #0x18
	strb r0, [r6]
	mov r0, r1, lsr #0x10
	strb r0, [r6, #1]
	mov r0, r1, lsr #8
	strb r0, [r6, #2]
	strb r1, [r6, #3]
	ldr r0, [sp, #0x10]
	ldr r1, [r0, #4]
	mov r0, r1, lsr #0x18
	strb r0, [r6, #4]
	mov r0, r1, lsr #0x10
	strb r0, [r6, #5]
	mov r0, r1, lsr #8
	strb r0, [r6, #6]
	strb r1, [r6, #7]
	ldr r0, [sp, #0x10]
	ldr r1, [r0, #8]
	mov r0, r1, lsr #0x18
	strb r0, [r6, #8]
	mov r0, r1, lsr #0x10
	strb r0, [r6, #9]
	mov r0, r1, lsr #8
	strb r0, [r6, #0xa]
	strb r1, [r6, #0xb]
	ldr r0, [sp, #0x10]
	ldr r1, [r0, #0xc]
	mov r0, r1, lsr #0x18
	strb r0, [r6, #0xc]
	mov r0, r1, lsr #0x10
	strb r0, [r6, #0xd]
	mov r0, r1, lsr #8
	strb r0, [r6, #0xe]
	strb r1, [r6, #0xf]
	ldr r0, [sp, #0x10]
	ldr r1, [r0, #0x10]
	mov r0, r1, lsr #0x18
	strb r0, [r6, #0x10]
	mov r0, r1, lsr #0x10
	strb r0, [r6, #0x11]
	mov r0, r1, lsr #8
	strb r0, [r6, #0x12]
	strb r1, [r6, #0x13]
	ldr r3, [sp, #0x10]
	mov r0, #0
	add r1, sp, #0x10
	mov r2, #4
	str r0, [r3, #0x1c]
	bl func_0206785c
	ldmia sp!, {r4, r5, r6, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_0205f4dc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0xa0
	ldr lr, =data_020b62d4
	add r12, sp, #8
	mov r8, r0
	mov r7, r1
	mov r6, r2
	mov r5, r3
	mov r4, r12
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia lr, {r0, r1, r2}
	stmia r12, {r0, r1, r2}
	add lr, sp, #0x38
	add r12, sp, #0x24
	str lr, [sp, #0x10]
	ldr lr, =func_0205f13c
	str r12, [sp, #0x14]
	ldr r12, =func_0205f18c
	str lr, [sp, #0x18]
	ldr lr, =func_0205f2e0
	str r12, [sp, #0x1c]
	ldr r12, [sp, #0xb8]
	str lr, [sp, #0x20]
	str r12, [sp]
	mov r3, r5
	mov r0, r8
	mov r1, r7
	mov r2, r6
	str r4, [sp, #4]
	bl func_0205f570
	add sp, sp, #0xa0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0205f570(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0xc0
	ldr r5, [sp, #0xe0]
	ldr r4, [sp, #0xe4]
	mov r8, r1
	movs r9, r0
	mov r7, r2
	cmpne r8, #0
	mov r6, r3
	cmpne r7, #0
	cmpne r6, #0
	cmpne r5, #0
	cmpne r4, #0
	addeq sp, sp, #0xc0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	ldr r0, [r4, #4]
	cmp r5, r0
	ble lbl_0205f5f0
	ldr r0, [r4, #8]
	ldr r1, [r4, #0x10]
	blx r1
	ldr r0, [r4, #8]
	ldr r3, [r4, #0x14]
	mov r1, r6
	mov r2, r5
	blx r3
	ldr r0, [r4, #8]
	ldr r2, [r4, #0x18]
	add r1, sp, #0x80
	blx r2
	ldr r5, [r4]
	add r6, sp, #0x80
lbl_0205f5f0:
	cmp r5, #0
	mov r2, #0
	ble lbl_0205f618
	add r1, sp, #0x40
lbl_0205f600:
	ldrb r0, [r6, r2]
	add r2, r2, #1
	cmp r2, r5
	eor r0, r0, #0x36
	strb r0, [r1], #1
	blt lbl_0205f600
lbl_0205f618:
	ldr r0, [r4, #4]
	cmp r2, r0
	bge lbl_0205f644
	add r0, sp, #0x40
	add r3, r0, r2
	mov r1, #0x36
lbl_0205f630:
	strb r1, [r3], #1
	ldr r0, [r4, #4]
	add r2, r2, #1
	cmp r2, r0
	blt lbl_0205f630
lbl_0205f644:
	ldr r0, [r4, #8]
	ldr r1, [r4, #0x10]
	blx r1
	ldr r0, [r4, #8]
	ldr r2, [r4, #4]
	ldr r3, [r4, #0x14]
	add r1, sp, #0x40
	blx r3
	ldr r0, [r4, #8]
	ldr r3, [r4, #0x14]
	mov r1, r8
	mov r2, r7
	blx r3
	ldr r0, [r4, #8]
	ldr r1, [r4, #0xc]
	ldr r2, [r4, #0x18]
	blx r2
	cmp r5, #0
	mov r3, #0
	ble lbl_0205f6b0
	add r1, sp, #0
lbl_0205f698:
	ldrb r0, [r6, r3]
	add r3, r3, #1
	cmp r3, r5
	eor r0, r0, #0x5c
	strb r0, [r1], #1
	blt lbl_0205f698
lbl_0205f6b0:
	ldr r0, [r4, #4]
	cmp r3, r0
	bge lbl_0205f6dc
	add r0, sp, #0
	add r2, r0, r3
	mov r1, #0x5c
lbl_0205f6c8:
	strb r1, [r2], #1
	ldr r0, [r4, #4]
	add r3, r3, #1
	cmp r3, r0
	blt lbl_0205f6c8
lbl_0205f6dc:
	ldr r0, [r4, #8]
	ldr r1, [r4, #0x10]
	blx r1
	ldr r0, [r4, #8]
	ldr r2, [r4, #4]
	ldr r3, [r4, #0x14]
	add r1, sp, #0
	blx r3
	ldr r0, [r4, #8]
	ldr r1, [r4, #0xc]
	ldr r2, [r4]
	ldr r3, [r4, #0x14]
	blx r3
	ldr r0, [r4, #8]
	ldr r2, [r4, #0x18]
	mov r1, r9
	blx r2
	add sp, sp, #0xc0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

#pragma thumb on
