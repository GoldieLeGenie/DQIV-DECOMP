/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void Entry(void);
    void func_0200093c(void);
    void func_02000950(void);
    void func_020009fc(void);
    void AutoloadCallback(void);
    void func_02000a78(void);
    void func_02000b60(void);
    void pad_02000b64(void);
    void BuildInfo(void);
    void data_01ff8138(void);
    void data_020c4a20(void);
    void data_020c4d80(void);
    void data_020c4d98(void);
    void data_027e0000(void);
    void data_027e0021(void);
    void func_0200641c(void);
    void func_02007940(void);
    void func_02007eec(void);
    void main(void);
}

#pragma thumb off

extern "C" asm void Entry(void)
{
	mov r12, #0x4000000
	str r12, [r12, #0x208]
lbl_02000808:
	ldrh r0, [r12, #6]
	cmp r0, #0
	bne lbl_02000808
	bl func_02000a78
	mov r0, #0x13
	msr cpsr_c, r0
	ldr r0, =data_027e0000
	add r0, r0, #0x3fc0
	mov sp, r0
	mov r0, #0x12
	msr cpsr_c, r0
	ldr r0, =data_027e0000
	add r0, r0, #0x3fc0
	sub r0, r0, #0x40
	sub sp, r0, #4
	tst sp, #4
	subeq sp, sp, #4
	ldr r1, =0x00001000
	sub r1, r0, r1
	mov r0, #0x1f
	msr cpsr_fsxc, r0
	sub sp, r1, #4
	mov r0, #0
	ldr r1, =data_027e0000
	mov r2, #0x4000
	bl func_0200093c
	mov r0, #0
	ldr r1, =0x05000000
	mov r2, #0x400
	bl func_0200093c
	mov r0, #0x200
	ldr r1, =0x07000000
	mov r2, #0x400
	bl func_0200093c
	ldr r1, =BuildInfo
	ldr r0, [r1, #0x14]
	bl func_02000950
	bl func_020009fc
	ldr r0, =BuildInfo
	ldr r1, [r0, #0xc]
	ldr r2, [r0, #0x10]
	mov r3, r1
	mov r0, #0
lbl_020008b4:
	cmp r1, r2
	strcc r0, [r1], #4
	bcc lbl_020008b4
	bic r1, r3, #0x1f
lbl_020008c4:
	mcr p15, 0, r0, c7, c10, 4
	mcr p15, 0, r1, c7, c5, 1
	mcr p15, 0, r1, c7, c14, 1
	add r1, r1, #0x20
	cmp r1, r2
	blt lbl_020008c4
	ldr r1, =0x027FFF9C
	str r0, [r1]
	ldr r1, =data_027e0000
	add r1, r1, #0x3fc0
	add r1, r1, #0x3c
	ldr r0, =data_01ff8138
	str r0, [r1]
	bl func_0200641c
	bl func_02007eec
	bl func_02007940
	ldr r1, =main
	ldr lr, =0xFFFF0000
	tst sp, #4
	subne sp, sp, #4
	bx r1
}

extern "C" asm void func_0200093c(void)
{
	add r12, r1, r2
lbl_02000940:
	cmp r1, r12
	stmltia r1!, {r0}
	blt lbl_02000940
	bx lr
}

extern "C" asm void func_02000950(void)
{
	cmp r0, #0
	beq lbl_020009f8
	stmdb sp!, {r4, r5, r6, r7}
	ldmdb r0, {r1, r2}
	add r2, r0, r2
	sub r3, r0, r1, lsr #24
	bic r1, r1, #0xff000000
	sub r1, r0, r1
	mov r4, r2
lbl_02000974:
	cmp r3, r1
	ble lbl_020009d4
	ldrb r5, [r3, #-1]!
	mov r6, #8
lbl_02000984:
	subs r6, r6, #1
	blt lbl_02000974
	tst r5, #0x80
	bne lbl_020009a0
	ldrb r0, [r3, #-1]!
	strb r0, [r2, #-1]!
	b lbl_020009c8
lbl_020009a0:
	ldrb r12, [r3, #-1]!
	ldrb r7, [r3, #-1]!
	orr r7, r7, r12, lsl #8
	bic r7, r7, #0xf000
	add r7, r7, #2
	add r12, r12, #0x20
lbl_020009b8:
	ldrb r0, [r2, r7]
	strb r0, [r2, #-1]!
	subs r12, r12, #0x10
	bge lbl_020009b8
lbl_020009c8:
	cmp r3, r1
	mov r5, r5, lsl #1
	bgt lbl_02000984
lbl_020009d4:
	mov r0, #0
	bic r3, r1, #0x1f
lbl_020009dc:
	mcr p15, 0, r0, c7, c10, 4
	mcr p15, 0, r3, c7, c5, 1
	mcr p15, 0, r3, c7, c14, 1
	add r3, r3, #0x20
	cmp r3, r4
	blt lbl_020009dc
	ldmia sp!, {r4, r5, r6, r7}
lbl_020009f8:
	bx lr
}

extern "C" asm void func_020009fc(void)
{
	ldr r0, =BuildInfo
	ldr r1, [r0]
	ldr r2, [r0, #4]
	ldr r3, [r0, #8]
lbl_02000a0c:
	cmp r1, r2
	beq lbl_02000a6c
	ldr r5, [r1], #4
	ldr r7, [r1], #4
	add r6, r5, r7
	mov r4, r5
lbl_02000a24:
	cmp r4, r6
	ldrmi r7, [r3], #4
	strmi r7, [r4], #4
	bmi lbl_02000a24
	ldr r7, [r1], #4
	add r6, r4, r7
	mov r7, #0
lbl_02000a40:
	cmp r4, r6
	strcc r7, [r4], #4
	bcc lbl_02000a40
	bic r4, r5, #0x1f
lbl_02000a50:
	mcr p15, 0, r7, c7, c10, 4
	mcr p15, 0, r4, c7, c5, 1
	mcr p15, 0, r4, c7, c14, 1
	add r4, r4, #0x20
	cmp r4, r6
	blt lbl_02000a50
	b lbl_02000a0c
lbl_02000a6c:
	b AutoloadCallback
}

extern "C" asm void AutoloadCallback(void)
{
	bx lr
}

extern "C" asm void func_02000a78(void)
{
	mrc p15, 0, r0, c1, c0, 0
	ldr r1, =0x000F9005
	bic r0, r0, r1
	mcr p15, 0, r0, c1, c0, 0
	mov r0, #0
	mcr p15, 0, r0, c7, c5, 0
	mcr p15, 0, r0, c7, c6, 0
	mcr p15, 0, r0, c7, c10, 4
	ldr r0, =0x04000033
	mcr p15, 0, r0, c6, c0, 0
	ldr r0, =0x0200002D
	mcr p15, 0, r0, c6, c1, 0
	ldr r0, =data_027e0021
	mcr p15, 0, r0, c6, c2, 0
	ldr r0, =0x08000035
	mcr p15, 0, r0, c6, c3, 0
	ldr r0, =data_027e0000
	orr r0, r0, #0x1a
	orr r0, r0, #1
	mcr p15, 0, r0, c6, c4, 0
	ldr r0, =0x0100002F
	mcr p15, 0, r0, c6, c5, 0
	ldr r0, =0xFFFF001D
	mcr p15, 0, r0, c6, c6, 0
	ldr r0, =0x027FF017
	mcr p15, 0, r0, c6, c7, 0
	mov r0, #0x20
	mcr p15, 0, r0, c9, c1, 1
	ldr r0, =data_027e0000
	orr r0, r0, #0xa
	mcr p15, 0, r0, c9, c1, 0
	mov r0, #0x42
	mcr p15, 0, r0, c2, c0, 1
	mov r0, #0x42
	mcr p15, 0, r0, c2, c0, 0
	mov r0, #2
	mcr p15, 0, r0, c3, c0, 0
	ldr r0, =0x05100011
	mcr p15, 0, r0, c5, c0, 3
	ldr r0, =0x15111011
	mcr p15, 0, r0, c5, c0, 2
	mrc p15, 0, r0, c1, c0, 0
	ldr r1, =0x0005707D
	orr r0, r0, r1
	mcr p15, 0, r0, c1, c0, 0
	bx lr
}

extern "C" asm void func_02000b60(void)
{
	bx lr
}

extern "C" asm void pad_02000b64(void)
{
	dcd 0x020C4D80
	dcd 0x020C4D98
	dcd 0x020C4A20
	dcd 0x020C4A20
	dcd 0x021210E0
	dcd 0x00000000
	dcd 0x04007531
	dcd 0xDEC00621
	dcd 0x2106C0DE
	dcd 0x4B44535B
	dcd 0x4E494E2B
	dcd 0x444E4554
	dcd 0x41423A4F
	dcd 0x50554B43
	dcd 0x0000005D
}

#pragma thumb on
