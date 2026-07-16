/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void pad_0205f728(void);
    void func_0205f73c(void);
    void func_0205f9bc(void);
    void func_0205fa18(void);
    void func_0205fba8(void);
    void func_0205fbf8(void);
    void func_0205fcb8(void);
    void func_0205fcec(void);
    void func_0205fd18(void);
    void func_0205fd44(void);
    void func_0205fddc(void);
    void func_0205ff08(void);
    void func_020600ec(void);
    void func_02060498(void);
    void func_02060518(void);
    void func_02060540(void);
    void func_02060548(void);
    void func_020605a0(void);
    void func_020605bc(void);
    void func_020605dc(void);
    void func_020605f4(void);
    void func_02060808(void);
    void func_0206089c(void);
    void func_020608e0(void);
    void func_02060a84(void);
    void func_02060ab0(void);
    void func_02060af0(void);
    void func_02060ba4(void);
    void func_02060c14(void);
    void func_02060d38(void);
    void func_02060d58(void);
    void func_02060ddc(void);
    void func_02060e04(void);
    void func_02060e2c(void);
    void func_02060f70(void);
    void func_02060fec(void);
    void func_0206102c(void);
    void func_02061074(void);
    void func_020610e4(void);
    void func_0206112c(void);
    void func_02061168(void);
    void func_02061228(void);
    void func_02061270(void);
    void func_02061280(void);
    void func_020612ec(void);
    void func_02061310(void);
    void func_02061358(void);
    void func_02061360(void);
    void func_020613cc(void);
    void func_020613d4(void);
    void func_020613dc(void);
    void func_02061524(void);
    void func_02061544(void);
    void func_02061560(void);
    void func_0206159c(void);
    void func_020615c4(void);
    void func_020616bc(void);
    void func_020617b8(void);
    void func_02061848(void);
    void func_020618dc(void);
    void func_020619d0(void);
    void func_02061ac0(void);
    void func_02061ad0(void);
    void func_02061b24(void);
    void func_02061b70(void);
    void func_02061b88(void);
    void func_02061bac(void);
    void data_020b6328(void);
    void data_020c3da8(void);
    void data_020c3dac(void);
    void data_020c3db0(void);
    void data_020c4a08(void);
    void data_020c4f6c(void);
    void data_0210cdd0(void);
    void data_0210cdd4(void);
    void data_0210cde0(void);
    void data_0210cde4(void);
    void data_0210cdec(void);
    void data_0210cdf4(void);
    void data_0210cdfc(void);
    void func_000fdd98(void);
    void func_02000950(void);
    void func_0205d6c0(void);
    void func_0205d6dc(void);
    void func_0205e308(void);
    void func_0205e400(void);
    void func_0205e6dc(void);
    void func_0205f4dc(void);
    void func_020679ac(void);
    void func_02067a40(void);
    void func_02077a14(void);
    void func_020789d0(void);
    void func_02078a20(void);
    void func_020791ac(void);
    void func_020791e4(void);
    void func_02079214(void);
    void func_02079cfc(void);
    void func_02079d10(void);
    void func_0207a058(void);
    void func_0390fe98(void);
}

#pragma thumb off

extern "C" asm void pad_0205f728(void)
{
	dcd 0x00FF00FF
	dcd 0x5A827999
	dcd 0x6ED9EBA1
	dcd 0x8F1BBCDC
	dcd 0xCA62C1D6
}

extern "C" asm void func_0205f73c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, lr}
	ldmia r0, {r3, r9, r10, r11, r12}
	sub sp, sp, #0x84
	str r2, [sp, #0x80]
lbl_0205f74c:
	ldr r8, [pc, #-0x28]
	ldr r7, [pc, #-0x30]
	mov r6, sp
	mov r5, #0
lbl_0205f75c:
	ldr r4, [r1], #4
	add r2, r8, r12
	add r2, r2, r3, ror #27
	and lr, r4, r7
	and r4, r7, r4, ror #24
	orr r4, r4, lr, ror #8
	str r4, [r6, #0x40]
	str r4, [r6], #4
	add r2, r2, r4
	eor r4, r10, r11
	and r4, r4, r9
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov r12, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r5, r5, #4
	cmp r5, #0x40
	blt lbl_0205f75c
	mov r7, #0
	mov r6, sp
lbl_0205f7bc:
	ldr r2, [r6]
	ldr r5, [r6, #8]
	ldr r4, [r6, #0x20]
	ldr lr, [r6, #0x34]
	eor r2, r2, r5
	eor r4, r4, lr
	eor r2, r2, r4
	mov r2, r2, ror #0x1f
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, r12
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor r4, r10, r11
	and r4, r4, r9
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov r12, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #4
	cmp r7, #0x10
	blt lbl_0205f7bc
	ldr r8, [pc, #-0xfc]
	mov r7, #0
lbl_0205f82c:
	ldr r2, [r6]
	ldr r4, [r6, #8]
	ldr lr, [r6, #0x20]
	ldr r5, [r6, #0x34]
	eor r2, r2, r4
	eor lr, lr, r5
	eor r2, r2, lr
	mov r2, r2, ror #0x1f
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, r12
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor lr, r9, r10
	eor lr, lr, r11
	add r2, r2, lr
	mov r9, r9, ror #2
	mov r12, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #0xc
	moveq r6, sp
	cmp r7, #0x14
	blt lbl_0205f82c
	ldr r8, [pc, #-0x16c]
	mov r7, #0
lbl_0205f8a0:
	ldr r2, [r6]
	ldr lr, [r6, #8]
	ldr r5, [r6, #0x20]
	ldr r4, [r6, #0x34]
	eor r2, r2, lr
	eor r5, r5, r4
	eor r2, r2, r5
	mov r2, r2, ror #0x1f
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, r12
	add r2, r2, r8
	add r2, r2, r3, ror #27
	orr r5, r9, r10
	and r5, r5, r11
	and r4, r9, r10
	orr r5, r5, r4
	add r2, r2, r5
	mov r9, r9, ror #2
	mov r12, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #8
	moveq r6, sp
	cmp r7, #0x14
	blt lbl_0205f8a0
	ldr r8, [pc, #-0x1e4]
	mov r7, #0
lbl_0205f91c:
	ldr r2, [r6]
	ldr r5, [r6, #8]
	ldr r4, [r6, #0x20]
	ldr lr, [r6, #0x34]
	eor r2, r2, r5
	eor r4, r4, lr
	eor r2, r2, r4
	mov r2, r2, ror #0x1f
	str r2, [r6, #0x40]
	str r2, [r6], #4
	add r2, r2, r12
	add r2, r2, r8
	add r2, r2, r3, ror #27
	eor r4, r9, r10
	eor r4, r4, r11
	add r2, r2, r4
	mov r9, r9, ror #2
	mov r12, r11
	mov r11, r10
	mov r10, r9
	mov r9, r3
	mov r3, r2
	add r7, r7, #1
	cmp r7, #4
	moveq r6, sp
	cmp r7, #0x14
	blt lbl_0205f91c
	ldmia r0, {r2, r4, r6, r7, lr}
	add r3, r3, r2
	add r9, r9, r4
	add r10, r10, r6
	add r11, r11, r7
	add r12, r12, lr
	stmia r0, {r3, r9, r10, r11, r12}
	ldr lr, [sp, #0x80]
	subs lr, lr, #0x40
	str lr, [sp, #0x80]
	bgt lbl_0205f74c
	add sp, sp, #0x84
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, r12, pc}
}

extern "C" asm void func_0205f9bc(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r0
	mov r4, r1
	bl func_02079cfc
	ldr r1, [r5]
	mov r6, r0
	ldr r0, [r5, #4]
	cmp r1, #0
	strne r0, [r1, #4]
	cmp r0, #0
	strne r1, [r0]
	mov r0, #0
	str r0, [r5]
	str r0, [r5, #4]
	ldr r1, [r5, #0xc]
	add r0, r5, #0x18
	bic r1, r1, #0x4f
	str r1, [r5, #0xc]
	str r4, [r5, #0x14]
	bl func_02078a20
	mov r0, r6
	bl func_02079d10
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0205fa18(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r8, r0
	ldr r0, [r8, #0xc]
	ldr r5, [r8, #8]
	mov r7, r1
	mov r1, #1
	tst r0, #4
	mov r6, r1, lsl r7
	moveq r1, #0
	ldr r0, [r5, #0x1c]
	cmp r1, #0
	orrne r0, r0, #0x200
	orreq r0, r0, #0x100
	str r0, [r5, #0x1c]
	ldr r0, [r5, #0x58]
	tst r0, r6
	beq lbl_0205fac0
	ldr r2, [r5, #0x54]
	mov r0, r8
	mov r1, r7
	blx r2
	mov r4, r0
	cmp r4, #8
	addls pc, pc, r4, lsl #2
	b lbl_0205fac4
	b lbl_0205faa0
	b lbl_0205faa0
	b lbl_0205fac4
	b lbl_0205fac4
	b lbl_0205faa0
	b lbl_0205fac4
	b lbl_0205fac4
	b lbl_0205fac4
	b lbl_0205faa8
lbl_0205faa0:
	str r4, [r8, #0x14]
	b lbl_0205fac4
lbl_0205faa8:
	ldr r1, [r5, #0x58]
	mvn r0, r6
	and r0, r1, r0
	str r0, [r5, #0x58]
	mov r4, #7
	b lbl_0205fac4
lbl_0205fac0:
	mov r4, #7
lbl_0205fac4:
	cmp r4, #7
	bne lbl_0205fae0
	ldr r1, =data_020b6328
	mov r0, r8
	ldr r1, [r1, r7, lsl #2]
	blx r1
	mov r4, r0
lbl_0205fae0:
	cmp r4, #6
	bne lbl_0205fb58
	ldr r0, [r8, #0xc]
	tst r0, #4
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_0205fb9c
	bl func_02079cfc
	ldr r1, [r5, #0x1c]
	mov r7, r0
	tst r1, #0x200
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_0205fb48
	mov r4, #0
	mov r6, #1
lbl_0205fb28:
	add r0, r5, #0xc
	bl func_020789d0
	ldr r0, [r5, #0x1c]
	tst r0, #0x200
	movne r0, r6
	moveq r0, r4
	cmp r0, #0
	bne lbl_0205fb28
lbl_0205fb48:
	mov r0, r7
	ldr r4, [r8, #0x14]
	bl func_02079d10
	b lbl_0205fb9c
lbl_0205fb58:
	ldr r0, [r8, #0xc]
	tst r0, #4
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	bne lbl_0205fb8c
	ldr r1, [r5, #0x1c]
	mov r0, r8
	bic r2, r1, #0x100
	mov r1, r4
	str r2, [r5, #0x1c]
	bl func_0205f9bc
	b lbl_0205fb9c
lbl_0205fb8c:
	ldr r0, [r5, #0x1c]
	bic r0, r0, #0x200
	str r0, [r5, #0x1c]
	str r4, [r8, #0x14]
lbl_0205fb9c:
	mov r0, r4
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0205fba8(void)
{
	stmdb sp!, {r3, lr}
	cmp r2, #0
	mov lr, #0
	bls lbl_0205fbf0
lbl_0205fbb8:
	ldrb r12, [r0, lr]
	ldrb r3, [r1, lr]
	sub r12, r12, #0x41
	cmp r12, #0x19
	sub r3, r3, #0x41
	addls r12, r12, #0x20
	cmp r3, #0x19
	addls r3, r3, #0x20
	cmp r12, r3
	subne r0, r12, r3
	ldmneia sp!, {r3, pc}
	add lr, lr, #1
	cmp lr, r2
	bcc lbl_0205fbb8
lbl_0205fbf0:
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205fbf8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r7, r0
	ldr r4, [r7]
	mov r6, r2
	ldr r2, [r4, #0x1c]
	mov r0, r4
	orr r2, r2, #0x200
	str r2, [r4, #0x1c]
	ldr r2, [r7, #4]
	ldr r5, [r4, #0x50]
	mov r3, r6
	blx r5
	cmp r0, #0
	cmpne r0, #1
	beq lbl_0205fc40
	cmp r0, #6
	beq lbl_0205fc50
	b lbl_0205fca8
lbl_0205fc40:
	ldr r1, [r4, #0x1c]
	bic r1, r1, #0x200
	str r1, [r4, #0x1c]
	b lbl_0205fca8
lbl_0205fc50:
	bl func_02079cfc
	ldr r1, [r4, #0x1c]
	mov r5, r0
	tst r1, #0x200
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_0205fc98
	mov r8, #0
	mov r9, #1
lbl_0205fc78:
	add r0, r4, #0xc
	bl func_020789d0
	ldr r0, [r4, #0x1c]
	tst r0, #0x200
	movne r0, r9
	moveq r0, r8
	cmp r0, #0
	bne lbl_0205fc78
lbl_0205fc98:
	mov r0, r5
	bl func_02079d10
	ldr r0, [r4, #0x24]
	ldr r0, [r0, #0x14]
lbl_0205fca8:
	ldr r1, [r7, #4]
	add r1, r1, r6
	str r1, [r7, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0205fcb8(void)
{
	ldr r3, [r0, #0xc]
	mov r2, #0
	orr r3, r3, #4
	str r3, [r0, #0xc]
	ldr r3, [r0, #8]
	ldr r12, =func_0205fa18
	str r3, [r0, #0x30]
	str r2, [r0, #0x38]
	strh r2, [r0, #0x36]
	strh r1, [r0, #0x34]
	mov r1, #2
	bx r12
}

extern "C" asm void func_0205fcec(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #0x2c]
	ldr r3, [r0, #0x38]
	ldr lr, [r0, #8]
	ldr r1, [r0, #0x30]
	add r12, r2, r3
	str r12, [r0, #0x2c]
	ldr r12, [lr, #0x48]
	mov r0, lr
	blx r12
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205fd18(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #0x2c]
	ldr r3, [r0, #0x38]
	ldr lr, [r0, #8]
	ldr r1, [r0, #0x30]
	add r12, r2, r3
	str r12, [r0, #0x2c]
	ldr r12, [lr, #0x4c]
	mov r0, lr
	blx r12
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0205fd44(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x10
	mov r6, r0
	ldr r4, [r6, #8]
	add r5, r6, #0x30
	str r4, [sp]
	ldrh r1, [r5, #4]
	ldr r2, [r4, #0x34]
	add r0, sp, #0
	add r3, r2, r1, lsl #3
	add r1, sp, #8
	mov r2, #8
	str r3, [sp, #4]
	bl func_0205fbf8
	movs r3, r0
	bne lbl_0205fdcc
	add r12, r6, #0x20
	ldmia r5, {r0, r1, r2}
	stmia r12, {r0, r1, r2}
	ldrh r0, [r5, #6]
	cmp r0, #0
	ldreq r0, [r5, #8]
	cmpeq r0, #0
	bne lbl_0205fdbc
	ldrh r0, [sp, #0xc]
	strh r0, [r6, #0x26]
	ldr r1, [r4, #0x34]
	ldr r0, [sp, #8]
	add r0, r1, r0
	str r0, [r6, #0x28]
lbl_0205fdbc:
	ldrh r1, [sp, #0xe]
	ldr r0, =0x00000FFF
	and r0, r1, r0
	str r0, [r6, #0x2c]
lbl_0205fdcc:
	mov r0, r3
	add sp, sp, #0x10
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0205fddc(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0xc
	mov r5, r0
	ldr r4, [r5, #0x30]
	ldr r1, [r5, #8]
	add r0, sp, #4
	str r1, [sp, #4]
	ldr r3, [r5, #0x28]
	add r1, sp, #0
	mov r2, #1
	str r3, [sp, #8]
	bl func_0205fbf8
	cmp r0, #0
	addne sp, sp, #0xc
	ldmneia sp!, {r4, r5, pc}
	ldrb r1, [sp]
	and r2, r1, #0x7f
	mov r1, r1, asr #7
	str r2, [r4, #0x10]
	and r1, r1, #1
	str r1, [r4, #0xc]
	ldr r2, [r4, #0x10]
	cmp r2, #0
	addeq sp, sp, #0xc
	moveq r0, #1
	ldmeqia sp!, {r4, r5, pc}
	ldr r1, [r5, #0x34]
	cmp r1, #0
	bne lbl_0205fe7c
	add r0, sp, #4
	add r1, r4, #0x14
	bl func_0205fbf8
	cmp r0, #0
	addne sp, sp, #0xc
	ldmneia sp!, {r4, r5, pc}
	ldr r1, [r4, #0x10]
	mov r2, #0
	add r1, r4, r1
	strb r2, [r1, #0x14]
	b lbl_0205fe88
lbl_0205fe7c:
	ldr r1, [sp, #8]
	add r1, r1, r2
	str r1, [sp, #8]
lbl_0205fe88:
	ldr r1, [r4, #0xc]
	cmp r1, #0
	beq lbl_0205fed8
	add r0, sp, #4
	add r1, sp, #2
	mov r2, #2
	bl func_0205fbf8
	cmp r0, #0
	addne sp, sp, #0xc
	ldmneia sp!, {r4, r5, pc}
	ldr r2, [r5, #8]
	ldr r1, =0x00000FFF
	str r2, [r4]
	ldrh r3, [sp, #2]
	mov r2, #0
	and r1, r3, r1
	strh r1, [r4, #4]
	strh r2, [r4, #6]
	str r2, [r4, #8]
	b lbl_0205fef4
lbl_0205fed8:
	ldr r1, [r5, #8]
	str r1, [r4]
	ldrh r1, [r5, #0x26]
	str r1, [r4, #4]
	ldrh r1, [r5, #0x26]
	add r1, r1, #1
	strh r1, [r5, #0x26]
lbl_0205fef4:
	ldr r1, [sp, #8]
	str r1, [r5, #0x28]
	add sp, sp, #0xc
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_0205ff08(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x94
	mov r9, r0
	ldr r5, [r9, #0x3c]
	mov r1, #2
	ldr r6, [r9, #0x40]
	bl func_0205fa18
	ldrb r3, [r5]
	cmp r3, #0
	beq lbl_020600c0
lbl_0205ff30:
	mov r8, #0
	mov r0, #1
	mov r1, r8
	b lbl_0205ff44
lbl_0205ff40:
	add r8, r8, #1
lbl_0205ff44:
	ldrb r7, [r5, r8]
	mov r2, r1
	cmp r7, #0
	cmpne r7, #0x2f
	cmpne r7, #0x5c
	movne r2, r0
	cmp r2, #0
	bne lbl_0205ff40
	cmp r7, #0
	cmpeq r6, #0
	movne r7, #1
	cmp r8, #0
	addeq sp, sp, #0x94
	moveq r0, #1
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
	cmp r3, #0x2e
	bne lbl_0205ffd8
	cmp r8, #1
	addeq r5, r5, #1
	beq lbl_020600a4
	ldrb r0, [r5, #1]
	cmp r8, #2
	moveq r1, #1
	movne r1, #0
	cmp r0, #0x2e
	moveq r0, #1
	movne r0, #0
	tst r1, r0
	beq lbl_0205ffd8
	ldrh r0, [r9, #0x24]
	cmp r0, #0
	beq lbl_0205ffd0
	ldr r1, [r9, #0x2c]
	mov r0, r9
	bl func_0205fcb8
lbl_0205ffd0:
	add r5, r5, #2
	b lbl_020600a4
lbl_0205ffd8:
	cmp r8, #0x7f
	addgt sp, sp, #0x94
	movgt r0, #1
	ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
	add r1, sp, #0
	mov r0, #0
	str r1, [r9, #0x30]
	str r0, [r9, #0x34]
	add r10, sp, #0x14
	mov r4, #3
lbl_02060000:
	mov r0, r9
	mov r1, r4
	bl func_0205fa18
	cmp r0, #0
	addne sp, sp, #0x94
	movne r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r0, [sp, #0xc]
	cmp r7, r0
	ldreq r0, [sp, #0x10]
	cmpeq r8, r0
	bne lbl_02060000
	mov r0, r5
	mov r1, r10
	mov r2, r8
	bl func_0205fba8
	cmp r0, #0
	bne lbl_02060000
	cmp r7, #0
	beq lbl_02060074
	add r0, sp, #0
	add r3, r9, #0x30
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	mov r0, r9
	mov r1, #2
	add r5, r5, r8
	bl func_0205fa18
	b lbl_020600a4
lbl_02060074:
	cmp r6, #0
	addne sp, sp, #0x94
	movne r0, #1
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r3, [r9, #0x44]
	ldr r2, [sp]
	ldr r1, [sp, #4]
	add sp, sp, #0x94
	str r2, [r3]
	mov r0, #0
	str r1, [r3, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
lbl_020600a4:
	ldrb r0, [r5]
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldrb r3, [r5, r0]!
	cmp r3, #0
	bne lbl_0205ff30
lbl_020600c0:
	cmp r6, #0
	addeq sp, sp, #0x94
	moveq r0, #1
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
	ldr r3, [r9, #0x44]
	add r0, r9, #0x20
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	mov r0, #0
	add sp, sp, #0x94
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020600ec(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xe0
	mov r10, r0
	ldr r1, [r10, #8]
	add r0, sp, #4
	str r1, [sp]
	bl func_02060e04
	ldr r0, [r10, #8]
	str r0, [sp, #0xc]
	ldr r0, [r10, #0xc]
	tst r0, #0x20
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	ldrneh r9, [r10, #0x24]
	movne r6, #0x10000
	bne lbl_020601d0
	ldrh r0, [r10, #0x38]
	ldr r6, [r10, #0x20]
	cmp r0, #0
	ldrneh r9, [r10, #0x3a]
	bne lbl_020601d0
	mov r7, #0
	mov r8, r7
	mov r9, #0x10000
	add r5, sp, #4
	mov r4, #3
	add r11, sp, #0x4c
lbl_0206015c:
	mov r0, r5
	mov r1, r7
	bl func_0205fcb8
	mov r2, #1
	cmp r7, #0
	mov r0, r5
	mov r1, #3
	ldreq r8, [sp, #0x30]
	str r11, [sp, #0x34]
	str r2, [sp, #0x38]
	bl func_0205fa18
	cmp r0, #0
	bne lbl_020601bc
lbl_02060190:
	ldr r0, [sp, #0x58]
	cmp r0, #0
	ldreq r0, [sp, #0x50]
	cmpeq r0, r6
	ldreqh r9, [sp, #0x28]
	beq lbl_020601bc
	mov r0, r5
	mov r1, r4
	bl func_0205fa18
	cmp r0, #0
	beq lbl_02060190
lbl_020601bc:
	cmp r9, #0x10000
	bne lbl_020601d0
	add r7, r7, #1
	cmp r7, r8
	bcc lbl_0206015c
lbl_020601d0:
	cmp r9, #0x10000
	bne lbl_020601ec
	mov r0, #0
	strh r0, [r10, #0x38]
	add sp, sp, #0xe0
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_020601ec:
	ldrh r0, [r10, #0x38]
	cmp r0, #0
	bne lbl_020602d0
	ldr r0, [sp]
	mov r1, #0
	ldr r0, [r0]
	cmp r0, #0xff
	addls r8, r1, #1
	bls lbl_0206021c
	cmp r0, #0xff00
	addls r8, r1, #2
	addhi r8, r1, #3
lbl_0206021c:
	cmp r6, #0x10000
	ldrne r0, [sp, #0x5c]
	add r8, r8, #2
	addne r8, r8, r0
	mov r7, r9
	cmp r9, #0
	beq lbl_020602c4
	add r0, sp, #4
	mov r1, r9
	bl func_0205fcb8
	add r5, sp, #4
	mov r4, #3
	add r11, sp, #0x4c
lbl_02060250:
	ldr r1, [sp, #0x30]
	mov r0, r5
	bl func_0205fcb8
	mov r1, #1
	str r1, [sp, #0x38]
	mov r0, r5
	mov r1, #3
	str r11, [sp, #0x34]
	bl func_0205fa18
	cmp r0, #0
	bne lbl_020602b8
lbl_0206027c:
	ldr r0, [sp, #0x58]
	cmp r0, #0
	beq lbl_020602a4
	ldrh r0, [sp, #0x50]
	cmp r0, r7
	bne lbl_020602a4
	ldr r0, [sp, #0x5c]
	add r0, r0, #1
	add r8, r8, r0
	b lbl_020602b8
lbl_020602a4:
	mov r0, r5
	mov r1, r4
	bl func_0205fa18
	cmp r0, #0
	beq lbl_0206027c
lbl_020602b8:
	ldrh r7, [sp, #0x28]
	cmp r7, #0
	bne lbl_02060250
lbl_020602c4:
	add r0, r8, #1
	strh r0, [r10, #0x38]
	strh r9, [r10, #0x3a]
lbl_020602d0:
	ldr r5, [r10, #0x30]
	cmp r5, #0
	addeq sp, sp, #0xe0
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldrh r4, [r10, #0x38]
	ldr r0, [r10, #0x34]
	cmp r0, r4
	addcc sp, sp, #0xe0
	movcc r0, #1
	ldmccia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, [sp]
	mov r7, #0
	ldr r0, [r0]
	cmp r0, #0xff
	movls r8, #1
	bls lbl_02060320
	cmp r0, #0xff00
	movls r8, #2
	movhi r8, #3
lbl_02060320:
	ldr r0, [sp]
	mov r1, r5
	mov r2, r8
	bl func_02067a40
	add r1, r7, r8
	ldr r0, =data_020c3da8
	add r1, r5, r1
	mov r2, #2
	bl func_02067a40
	add r0, sp, #4
	mov r1, r9
	bl func_0205fcb8
	cmp r6, #0x10000
	beq lbl_020603d0
	add r3, sp, #0x4c
	mov r2, #0
	add r0, sp, #4
	mov r1, #3
	str r3, [sp, #0x34]
	str r2, [sp, #0x38]
	bl func_0205fa18
	cmp r0, #0
	bne lbl_020603ac
	add r8, sp, #4
	mov r7, #3
lbl_02060384:
	ldr r0, [sp, #0x58]
	cmp r0, #0
	ldreq r0, [sp, #0x50]
	cmpeq r0, r6
	beq lbl_020603ac
	mov r0, r8
	mov r1, r7
	bl func_0205fa18
	cmp r0, #0
	beq lbl_02060384
lbl_020603ac:
	ldr r0, [sp, #0x5c]
	add r1, r5, r4
	add r6, r0, #1
	add r0, sp, #0x60
	mov r2, r6
	sub r1, r1, r6
	bl func_02067a40
	sub r4, r4, r6
	b lbl_020603e0
lbl_020603d0:
	add r0, r5, r4
	mov r1, #0
	strb r1, [r0, #-1]
	sub r4, r4, #1
lbl_020603e0:
	cmp r9, #0
	beq lbl_02060488
	add r10, sp, #4
	mov r6, #3
	add r8, sp, #0x4c
	mov r7, #0
	mov r11, #0x2f
lbl_020603fc:
	ldr r1, [sp, #0x30]
	mov r0, r10
	bl func_0205fcb8
	add r1, r5, r4
	str r8, [sp, #0x34]
	str r7, [sp, #0x38]
	strb r11, [r1, #-1]
	mov r0, r10
	mov r1, #3
	sub r4, r4, #1
	bl func_0205fa18
	cmp r0, #0
	bne lbl_0206047c
lbl_02060430:
	ldr r0, [sp, #0x58]
	cmp r0, #0
	beq lbl_02060468
	ldrh r0, [sp, #0x50]
	cmp r0, r9
	bne lbl_02060468
	ldr r9, [sp, #0x5c]
	add r1, r5, r4
	add r0, sp, #0x60
	mov r2, r9
	sub r1, r1, r9
	bl func_02067a40
	sub r4, r4, r9
	b lbl_0206047c
lbl_02060468:
	mov r0, r10
	mov r1, r6
	bl func_0205fa18
	cmp r0, #0
	beq lbl_02060430
lbl_0206047c:
	ldrh r9, [sp, #0x28]
	cmp r9, #0
	bne lbl_020603fc
lbl_02060488:
	mov r0, #0
	add sp, sp, #0xe0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02060498(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x10
	mov r5, r0
	ldr r1, [r5, #8]
	ldr r4, [r5, #0x34]
	ldr r0, [r1, #0x30]
	mov r2, r4, lsl #3
	cmp r0, r4, lsl #3
	addls sp, sp, #0x10
	movls r0, #1
	ldmlsia sp!, {r3, r4, r5, pc}
	str r1, [sp]
	ldr r1, [r1, #0x2c]
	add r0, sp, #0
	add r3, r1, r2
	add r1, sp, #8
	mov r2, #8
	str r3, [sp, #4]
	bl func_0205fbf8
	cmp r0, #0
	addne sp, sp, #0x10
	ldmneia sp!, {r3, r4, r5, pc}
	ldr r1, [sp, #8]
	mov r0, r5
	str r1, [r5, #0x30]
	ldr r2, [sp, #0xc]
	mov r1, #7
	str r2, [r5, #0x34]
	str r4, [r5, #0x38]
	bl func_0205fa18
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02060518(void)
{
	ldr r1, [r0, #0x30]
	str r1, [r0, #0x24]
	ldr r1, [r0, #0x30]
	str r1, [r0, #0x2c]
	ldr r1, [r0, #0x34]
	str r1, [r0, #0x28]
	ldr r1, [r0, #0x38]
	str r1, [r0, #0x20]
	mov r0, #0
	bx lr
}

extern "C" asm void func_02060540(void)
{
	mov r0, #0
	bx lr
}

extern "C" asm void func_02060548(void)
{
	stmdb sp!, {r3, lr}
	cmp r1, #3
	mov r3, #0
	bgt lbl_02060598
	mov r12, r3
	cmp r1, #0
	ble lbl_02060598
	mov lr, r3
lbl_02060568:
	ldrb r2, [r0, r12]
	cmp r2, #0
	beq lbl_02060598
	sub r2, r2, #0x41
	cmp r2, #0x19
	addls r2, r2, #0x61
	addhi r2, r2, #0x41
	add r12, r12, #1
	orr r3, r3, r2, lsl lr
	cmp r12, r1
	add lr, lr, #8
	blt lbl_02060568
lbl_02060598:
	mov r0, r3
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020605a0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, [r0, #0x28]
	add r0, r0, r2
	mov r2, r3
	bl func_02067a40
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020605bc(void)
{
	stmdb sp!, {r3, lr}
	ldr r12, [r0, #0x28]
	mov r0, r1
	add r1, r12, r2
	mov r2, r3
	bl func_02067a40
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020605dc(void)
{
	stmdb sp!, {r3, lr}
	mov r0, r2
	mov r2, r3
	bl func_02067a40
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020605f4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x48
	mov r6, r0
	bl func_02079cfc
	ldr r1, [r6, #0x1c]
	mov r4, r0
	tst r1, #0x20
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_02060688
	ldr r0, [r6, #0x1c]
	bic r0, r0, #0x20
	str r0, [r6, #0x1c]
	ldr r0, [r6, #0x24]
	cmp r0, #0
	beq lbl_02060688
	mov r8, #0
	mov r9, #1
	mov r7, #3
lbl_02060644:
	ldr r1, [r0, #0xc]
	ldr r5, [r0, #4]
	tst r1, #2
	movne r1, r9
	moveq r1, r8
	cmp r1, #0
	beq lbl_0206067c
	ldr r1, [r6, #0x24]
	cmp r1, r0
	mov r1, r7
	streq r5, [r6, #0x24]
	bl func_0205f9bc
	cmp r5, #0
	ldreq r5, [r6, #0x24]
lbl_0206067c:
	mov r0, r5
	cmp r5, #0
	bne lbl_02060644
lbl_02060688:
	ldr r0, [r6, #0x1c]
	tst r0, #0x40
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	bne lbl_02060778
	ldr r0, [r6, #0x1c]
	tst r0, #8
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	bne lbl_02060778
	ldr r5, [r6, #0x24]
	cmp r5, #0
	beq lbl_02060778
	ldr r0, [r6, #0x1c]
	tst r0, #0x10
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	moveq r7, #1
	movne r7, #0
	cmp r7, #0
	ldrne r0, [r6, #0x1c]
	orrne r0, r0, #0x10
	strne r0, [r6, #0x1c]
	mov r0, r4
	bl func_02079d10
	cmp r7, #0
	beq lbl_0206071c
	ldr r0, [r6, #0x58]
	tst r0, #0x200
	beq lbl_0206071c
	ldr r2, [r6, #0x54]
	mov r0, r5
	mov r1, #9
	blx r2
lbl_0206071c:
	bl func_02079cfc
	ldr r1, [r5, #0xc]
	mov r4, r0
	orr r0, r1, #0x40
	str r0, [r5, #0xc]
	ldr r0, [r5, #0xc]
	tst r0, #4
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_02060764
	add r0, r5, #0x18
	bl func_02078a20
	mov r0, r4
	bl func_02079d10
	add sp, sp, #0x48
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02060764:
	mov r0, r4
	bl func_02079d10
	add sp, sp, #0x48
	mov r0, r5
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02060778:
	ldr r0, [r6, #0x1c]
	tst r0, #0x10
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_020607c4
	ldr r0, [r6, #0x1c]
	bic r0, r0, #0x10
	str r0, [r6, #0x1c]
	ldr r0, [r6, #0x58]
	tst r0, #0x400
	beq lbl_020607c4
	add r0, sp, #0
	bl func_02060e04
	str r6, [sp, #8]
	ldr r2, [r6, #0x54]
	add r0, sp, #0
	mov r1, #0xa
	blx r2
lbl_020607c4:
	ldr r0, [r6, #0x1c]
	tst r0, #0x40
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_020607f4
	ldr r1, [r6, #0x1c]
	add r0, r6, #0x14
	bic r1, r1, #0x40
	orr r1, r1, #8
	str r1, [r6, #0x1c]
	bl func_02078a20
lbl_020607f4:
	mov r0, r4
	bl func_02079d10
	mov r0, #0
	add sp, sp, #0x48
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02060808(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	movs r6, r0
	ldr r4, [r6, #8]
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	mov r7, #0
	mov r8, #1
lbl_02060820:
	bl func_02079cfc
	ldr r1, [r6, #0xc]
	mov r5, r0
	orr r0, r1, #0x40
	str r0, [r6, #0xc]
	ldr r0, [r6, #0xc]
	tst r0, #4
	movne r0, r8
	moveq r0, r7
	cmp r0, #0
	beq lbl_02060860
	add r0, r6, #0x18
	bl func_02078a20
	mov r0, r5
	bl func_02079d10
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02060860:
	ldr r1, [r6, #0xc]
	mov r0, r5
	orr r1, r1, #8
	str r1, [r6, #0xc]
	bl func_02079d10
	ldr r1, [r6, #0x10]
	mov r0, r6
	bl func_0205fa18
	cmp r0, #6
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	mov r0, r4
	bl func_020605f4
	movs r6, r0
	bne lbl_02060820
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0206089c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, [r4, #0x10]
	bl func_0205fa18
	mov r1, r0
	mov r0, r4
	bl func_0205f9bc
	ldr r0, [r4, #8]
	bl func_020605f4
	cmp r0, #0
	beq lbl_020608cc
	bl func_02060808
lbl_020608cc:
	ldr r0, [r4, #0x14]
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020608e0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r6, r0
	ldr r4, [r6, #8]
	mov r2, #1
	str r1, [r6, #0x10]
	mov r0, #2
	str r0, [r6, #0x14]
	ldr r0, [r6, #0xc]
	mov r7, r2, lsl r1
	orr r0, r0, #1
	str r0, [r6, #0xc]
	bl func_02079cfc
	ldr r1, [r4, #0x1c]
	mov r5, r0
	tst r1, #0x80
	beq lbl_0206093c
	mov r0, r6
	mov r1, #3
	bl func_0205f9bc
	mov r0, r5
	bl func_02079d10
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206093c:
	tst r7, #0x1fc
	ldrne r0, [r6, #0xc]
	orrne r0, r0, #4
	strne r0, [r6, #0xc]
	ldr r1, [r6]
	ldr r2, [r6, #4]
	cmp r1, #0
	strne r2, [r1, #4]
	cmp r2, #0
	add r0, r4, #0x20
	strne r1, [r2]
	ldr r1, [r0, #4]
	cmp r1, #0
	beq lbl_02060984
lbl_02060974:
	mov r0, r1
	ldr r1, [r1, #4]
	cmp r1, #0
	bne lbl_02060974
lbl_02060984:
	str r6, [r0, #4]
	str r0, [r6]
	mov r1, #0
	str r1, [r6, #4]
	ldr r0, [r4, #0x1c]
	tst r0, #8
	movne r1, #1
	cmp r1, #0
	bne lbl_02060a34
	ldr r0, [r4, #0x1c]
	tst r0, #0x10
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	bne lbl_02060a34
	ldr r1, [r4, #0x1c]
	mov r0, r5
	orr r1, r1, #0x10
	str r1, [r4, #0x1c]
	bl func_02079d10
	ldr r0, [r4, #0x58]
	tst r0, #0x200
	beq lbl_020609f0
	ldr r2, [r4, #0x54]
	mov r0, r6
	mov r1, #9
	blx r2
lbl_020609f0:
	bl func_02079cfc
	ldr r1, [r6, #0xc]
	orr r1, r1, #0x40
	str r1, [r6, #0xc]
	ldr r1, [r6, #0xc]
	tst r1, #4
	movne r1, #1
	moveq r1, #0
	cmp r1, #0
	bne lbl_02060a2c
	bl func_02079d10
	mov r0, r6
	bl func_02060808
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02060a2c:
	bl func_02079d10
	b lbl_02060a78
lbl_02060a34:
	ldr r0, [r6, #0xc]
	tst r0, #4
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	bne lbl_02060a5c
	mov r0, r5
	bl func_02079d10
	mov r0, #1
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02060a5c:
	add r0, r6, #0x18
	bl func_020789d0
	ldr r0, [r6, #0xc]
	tst r0, #0x40
	beq lbl_02060a5c
	mov r0, r5
	bl func_02079d10
lbl_02060a78:
	mov r0, r6
	bl func_0206089c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02060a84(void)
{
	stmdb sp!, {r4, lr}
	mov r1, #0
	mov r2, #0x5c
	mov r4, r0
	bl func_020679ac
	mov r0, #0
	str r0, [r4, #0x10]
	str r0, [r4, #0xc]
	str r0, [r4, #0x18]
	str r0, [r4, #0x14]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02060ab0(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	bl func_02060548
	mov r4, r0
	bl func_02079cfc
	ldr r1, =data_0210cdd0
	ldr r5, [r1]
	b lbl_02060ad0
lbl_02060acc:
	ldr r5, [r5, #4]
lbl_02060ad0:
	cmp r5, #0
	ldrne r1, [r5]
	cmpne r1, r4
	bne lbl_02060acc
	bl func_02079d10
	mov r0, r5
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02060af0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r6, r1
	mov r5, r2
	mov r7, r0
	mov r8, #0
	bl func_02079cfc
	mov r4, r0
	mov r0, r6
	mov r1, r5
	bl func_02060ab0
	cmp r0, #0
	bne lbl_02060b90
	ldr r0, =data_0210cdd0
	ldr r1, [r0]
	cmp r1, #0
	bne lbl_02060b4c
	str r7, [r0]
	str r7, [r0, #4]
	mov r1, r8
	str r1, [r0, #0xc]
	strh r1, [r0, #0xa]
	strh r1, [r0, #8]
	b lbl_02060b70
lbl_02060b4c:
	ldr r0, [r1, #4]
	cmp r0, #0
	beq lbl_02060b68
lbl_02060b58:
	mov r1, r0
	ldr r0, [r0, #4]
	cmp r0, #0
	bne lbl_02060b58
lbl_02060b68:
	str r7, [r1, #4]
	str r1, [r7, #8]
lbl_02060b70:
	mov r0, r6
	mov r1, r5
	bl func_02060548
	str r0, [r7]
	ldr r0, [r7, #0x1c]
	mov r8, #1
	orr r0, r0, #1
	str r0, [r7, #0x1c]
lbl_02060b90:
	mov r0, r4
	bl func_02079d10
	mov r0, r8
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02060ba4(void)
{
	str r1, [r0, #0x28]
	str r3, [r0, #0x30]
	str r2, [r0, #0x3c]
	ldr r3, [sp, #4]
	str r2, [r0, #0x2c]
	ldr r12, [sp, #8]
	ldr r1, [sp]
	str r3, [r0, #0x38]
	str r1, [r0, #0x40]
	str r1, [r0, #0x34]
	cmp r12, #0
	ldreq r12, =func_020605a0
	ldr r1, [sp, #0xc]
	str r12, [r0, #0x48]
	cmp r1, #0
	ldreq r1, =func_020605bc
	str r1, [r0, #0x4c]
	ldr r2, [r0, #0x48]
	mov r1, #0
	str r2, [r0, #0x50]
	str r1, [r0, #0x44]
	ldr r1, [r0, #0x1c]
	orr r1, r1, #2
	str r1, [r0, #0x1c]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02060c14(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x4c
	mov r7, r0
	ldr r3, [r7, #0x30]
	ldr r0, [r7, #0x38]
	mov r6, r1
	add r0, r3, r0
	add r0, r0, #0x3f
	bic r4, r0, #0x1f
	cmp r4, r2
	bhi lbl_02060d28
	add r1, r6, #0x1f
	add r0, sp, #4
	bic r5, r1, #0x1f
	bl func_02060e04
	ldr r2, [r7, #0x2c]
	mvn r0, #0
	str r0, [sp]
	ldr r3, [r7, #0x30]
	add r0, sp, #4
	mov r1, r7
	add r3, r2, r3
	bl func_0206102c
	cmp r0, #0
	beq lbl_02060ca8
	ldr r2, [r7, #0x30]
	add r0, sp, #4
	mov r1, r5
	bl func_02061270
	cmp r0, #0
	bge lbl_02060ca0
	ldr r2, [r7, #0x30]
	mov r0, r5
	mov r1, #0
	bl func_020679ac
lbl_02060ca0:
	add r0, sp, #4
	bl func_0206112c
lbl_02060ca8:
	str r5, [r7, #0x2c]
	ldr r12, [r7, #0x30]
	ldr r2, [r7, #0x34]
	mvn r0, #0
	str r0, [sp]
	ldr r3, [r7, #0x38]
	add r0, sp, #4
	mov r1, r7
	add r3, r2, r3
	add r5, r5, r12
	bl func_0206102c
	cmp r0, #0
	beq lbl_02060d0c
	ldr r2, [r7, #0x38]
	add r0, sp, #4
	mov r1, r5
	bl func_02061270
	cmp r0, #0
	bge lbl_02060d04
	ldr r2, [r7, #0x38]
	mov r0, r5
	mov r1, #0
	bl func_020679ac
lbl_02060d04:
	add r0, sp, #4
	bl func_0206112c
lbl_02060d0c:
	str r5, [r7, #0x34]
	ldr r0, =func_020605dc
	str r6, [r7, #0x44]
	str r0, [r7, #0x50]
	ldr r0, [r7, #0x1c]
	orr r0, r0, #4
	str r0, [r7, #0x1c]
lbl_02060d28:
	mov r0, r4
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_02060d38(void)
{
	cmp r2, #0
	moveq r1, #0
	beq lbl_02060d4c
	cmp r1, #0
	moveq r2, #0
lbl_02060d4c:
	str r1, [r0, #0x54]
	str r2, [r0, #0x58]
	bx lr
}

extern "C" asm void func_02060d58(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r4, r0
	ldr r0, [r4, #0x1c]
	mov r6, r1
	tst r0, #0x100
	movne r0, #1
	moveq r0, #0
	cmp r0, #0
	beq lbl_02060dac
	ldr r1, [r4, #0x1c]
	ldr r0, [r4, #0x24]
	bic r2, r1, #0x100
	mov r1, r6
	str r2, [r4, #0x1c]
	bl func_0205f9bc
	mov r0, r4
	bl func_020605f4
	cmp r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	bl func_02060808
	ldmia sp!, {r4, r5, r6, pc}
lbl_02060dac:
	ldr r5, [r4, #0x24]
	bl func_02079cfc
	str r6, [r5, #0x14]
	ldr r1, [r4, #0x1c]
	mov r5, r0
	bic r1, r1, #0x200
	add r0, r4, #0xc
	str r1, [r4, #0x1c]
	bl func_02078a20
	mov r0, r5
	bl func_02079d10
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02060ddc(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210cde0
	ldr r2, [r1]
	cmp r2, #0
	ldmneia sp!, {r3, pc}
	mov r2, #1
	str r2, [r1]
	bl func_020613dc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02060e04(void)
{
	mov r2, #0
	str r2, [r0]
	str r2, [r0, #4]
	str r2, [r0, #0x1c]
	str r2, [r0, #0x18]
	str r2, [r0, #8]
	mov r1, #0xe
	str r1, [r0, #0x10]
	str r2, [r0, #0xc]
	bx lr
}

extern "C" asm void func_02060e2c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0xc
	mov r7, r1
	ldrb r1, [r7]
	mov r8, r0
	mov r6, r2
	cmp r1, #0x2f
	mov r5, r3
	cmpne r1, #0x5c
	bne lbl_02060e78
	ldr r0, =data_0210cdd4
	mov r1, #0
	ldr r0, [r0]
	strh r1, [sp, #4]
	str r0, [sp]
	str r1, [sp, #8]
	strh r1, [sp, #6]
	add r7, r7, #1
	b lbl_02060f1c
lbl_02060e78:
	ldr r0, =data_0210cdd4
	add r3, sp, #0
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	mov r4, #0
lbl_02060e8c:
	ldrb r0, [r7, r4]
	cmp r0, #0
	cmpne r0, #0x2f
	cmpne r0, #0x5c
	beq lbl_02060f1c
	cmp r0, #0x3a
	bne lbl_02060f10
	mov r0, r7
	mov r1, r4
	bl func_02060ab0
	cmp r0, #0
	addeq sp, sp, #0xc
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
	ldr r1, [r0, #0x1c]
	tst r1, #2
	movne r1, #1
	moveq r1, #0
	cmp r1, #0
	addeq sp, sp, #0xc
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
	mov r1, #0
	str r0, [sp]
	str r1, [sp, #8]
	strh r1, [sp, #6]
	strh r1, [sp, #4]
	add r0, r4, #1
	ldrb r0, [r7, r0]!
	cmp r0, #0x2f
	cmpne r0, #0x5c
	addeq r7, r7, #1
	b lbl_02060f1c
lbl_02060f10:
	add r4, r4, #1
	cmp r4, #3
	ble lbl_02060e8c
lbl_02060f1c:
	ldr r1, [sp]
	add r0, sp, #0
	str r1, [r8, #8]
	str r7, [r8, #0x3c]
	add r3, r8, #0x30
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	cmp r5, #0
	moveq r0, #0
	streq r0, [r8, #0x40]
	streq r6, [r8, #0x44]
	beq lbl_02060f58
	mov r0, #1
	str r0, [r8, #0x40]
	str r5, [r8, #0x44]
lbl_02060f58:
	mov r0, r8
	mov r1, #4
	bl func_020608e0
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02060f70(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r7, r0
	ldr r4, [r7, #0x2c]
	ldr r0, [r7, #0x28]
	mov r6, r2
	str r1, [r7, #0x30]
	sub r0, r0, r4
	cmp r6, r0
	movgt r6, r0
	cmp r6, #0
	movlt r6, #0
	str r2, [r7, #0x34]
	mov r5, r3
	str r6, [r7, #0x38]
	cmp r5, #0
	ldreq r0, [r7, #0xc]
	mov r1, #0
	orreq r0, r0, #4
	streq r0, [r7, #0xc]
	mov r0, r7
	bl func_020608e0
	cmp r5, #0
	bne lbl_02060fe4
	mov r0, r7
	bl func_02061168
	cmp r0, #0
	ldrne r0, [r7, #0x2c]
	subne r6, r0, r4
	mvneq r6, #0
lbl_02060fe4:
	mov r0, r6
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02060fec(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x48
	mov r5, r0
	add r0, sp, #0
	mov r4, r1
	bl func_02060e04
	add r0, sp, #0
	mov r1, r4
	mov r2, r5
	mov r3, #0
	bl func_02060e2c
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	add sp, sp, #0x48
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206102c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	str r1, [r4, #8]
	ldr r12, [sp, #8]
	mov r1, #7
	str r12, [r4, #0x38]
	str r2, [r4, #0x30]
	str r3, [r4, #0x34]
	bl func_020608e0
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4, #0xc]
	mov r0, #1
	orr r1, r1, #0x10
	bic r1, r1, #0x20
	str r1, [r4, #0xc]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02061074(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, lr}
	ldr r1, [sp, #0xc]
	mov r4, r0
	cmp r1, #0
	moveq r0, #0
	ldmeqia sp!, {r4, lr}
	addeq sp, sp, #0x10
	bxeq lr
	str r1, [r4, #8]
	str r1, [r4, #0x30]
	ldr r2, [sp, #0x10]
	mov r1, #6
	str r2, [r4, #0x34]
	bl func_020608e0
	cmp r0, #0
	moveq r0, #0
	ldmeqia sp!, {r4, lr}
	addeq sp, sp, #0x10
	bxeq lr
	ldr r1, [r4, #0xc]
	mov r0, #1
	orr r1, r1, #0x10
	bic r1, r1, #0x20
	str r1, [r4, #0xc]
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020610e4(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	mov r4, r0
	add r0, sp, #0
	bl func_02060fec
	cmp r0, #0
	beq lbl_02061120
	add r1, sp, #0
	mov r0, r4
	ldmia r1, {r1, r2}
	bl func_02061074
	cmp r0, #0
	addne sp, sp, #8
	movne r0, #1
	ldmneia sp!, {r4, pc}
lbl_02061120:
	mov r0, #0
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206112c(void)
{
	stmdb sp!, {r4, lr}
	mov r1, #8
	mov r4, r0
	bl func_020608e0
	cmp r0, #0
	mov r0, #0
	ldmeqia sp!, {r4, pc}
	str r0, [r4, #8]
	mov r0, #0xe
	str r0, [r4, #0x10]
	ldr r1, [r4, #0xc]
	mov r0, #1
	bic r1, r1, #0x30
	str r1, [r4, #0xc]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02061168(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r6, r0
	mov r5, #0
	bl func_02079cfc
	ldr r1, [r6, #0xc]
	mov r4, r0
	tst r1, #1
	movne r0, #1
	moveq r0, r5
	cmp r0, #0
	beq lbl_020611f8
	ldr r0, [r6, #0xc]
	tst r0, #0x44
	moveq r5, #1
	movne r5, #0
	cmp r5, #0
	beq lbl_020611d0
	ldr r0, [r6, #0xc]
	orr r0, r0, #4
	str r0, [r6, #0xc]
lbl_020611b8:
	add r0, r6, #0x18
	bl func_020789d0
	ldr r0, [r6, #0xc]
	tst r0, #0x40
	beq lbl_020611b8
	b lbl_020611f8
lbl_020611d0:
	mov r7, #0
	mov r8, #1
lbl_020611d8:
	add r0, r6, #0x18
	bl func_020789d0
	ldr r0, [r6, #0xc]
	tst r0, #1
	movne r0, r8
	moveq r0, r7
	cmp r0, #0
	bne lbl_020611d8
lbl_020611f8:
	mov r0, r4
	bl func_02079d10
	cmp r5, #0
	beq lbl_02061214
	mov r0, r6
	bl func_0206089c
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02061214:
	ldr r0, [r6, #0x14]
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02061228(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02079cfc
	ldr r1, [r4, #0xc]
	tst r1, #1
	movne r1, #1
	moveq r1, #0
	cmp r1, #0
	beq lbl_02061268
	ldr r1, [r4, #0xc]
	orr r1, r1, #2
	str r1, [r4, #0xc]
	ldr r2, [r4, #8]
	ldr r1, [r2, #0x1c]
	orr r1, r1, #0x20
	str r1, [r2, #0x1c]
lbl_02061268:
	bl func_02079d10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02061270(void)
{
	ldr r12, =func_02060f70
	mov r3, #0
	bx r12
}

extern "C" asm void func_02061280(void)
{
	cmp r2, #0
	beq lbl_0206129c
	cmp r2, #1
	beq lbl_020612a8
	cmp r2, #2
	beq lbl_020612b4
	b lbl_020612c0
lbl_0206129c:
	ldr r2, [r0, #0x24]
	add r1, r1, r2
	b lbl_020612c8
lbl_020612a8:
	ldr r2, [r0, #0x2c]
	add r1, r1, r2
	b lbl_020612c8
lbl_020612b4:
	ldr r2, [r0, #0x28]
	add r1, r1, r2
	b lbl_020612c8
lbl_020612c0:
	mov r0, #0
	bx lr
lbl_020612c8:
	ldr r2, [r0, #0x24]
	cmp r1, r2
	movlt r1, r2
	ldr r2, [r0, #0x28]
	cmp r1, r2
	movgt r1, r2
	str r1, [r0, #0x2c]
	mov r0, #1
	bx lr
}

extern "C" asm void func_020612ec(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_0205e6dc
	cmp r0, #0
	movne r1, #5
	moveq r1, #0
	mov r0, r4
	bl func_02060d58
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02061310(void)
{
	stmdb sp!, {lr}
	sub sp, sp, #0xc
	ldr r12, =func_020612ec
	mov lr, r1
	str r12, [sp]
	str r0, [sp, #4]
	mov r1, #1
	ldr r0, =data_0210cde4
	str r1, [sp, #8]
	mov r1, r2
	ldr r0, [r0, #4]
	mov r2, lr
	bl func_0205e308
	mov r0, #6
	add sp, sp, #0xc
	ldmia sp!, {pc}
}

extern "C" asm void func_02061358(void)
{
	mov r0, #1
	bx lr
}

extern "C" asm void func_02061360(void)
{
	stmdb sp!, {r3, lr}
	cmp r1, #1
	beq lbl_020613b8
	cmp r1, #9
	beq lbl_02061380
	cmp r1, #0xa
	beq lbl_0206139c
	b lbl_020613c0
lbl_02061380:
	ldr r0, =data_0210cde4
	ldr r0, [r0]
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	bl func_0205d6c0
	mov r0, #0
	ldmia sp!, {r3, pc}
lbl_0206139c:
	ldr r0, =data_0210cde4
	ldr r0, [r0]
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	bl func_0205d6dc
	mov r0, #0
	ldmia sp!, {r3, pc}
lbl_020613b8:
	mov r0, #4
	ldmia sp!, {r3, pc}
lbl_020613c0:
	mov r0, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020613cc(void)
{
	mov r0, #1
	bx lr
}

extern "C" asm void func_020613d4(void)
{
	mov r0, #4
	bx lr
}

extern "C" asm void func_020613dc(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #0x10
	ldr r1, =data_0210cde4
	str r0, [r1, #4]
	bl func_02077a14
	ldr r1, =data_0210cde4
	mov r2, #0
	str r0, [r1]
	str r2, [r1, #8]
	str r2, [r1, #0xc]
	str r2, [r1, #0x10]
	str r2, [r1, #0x14]
	bl func_0205e400
	ldr r0, =data_0210cdfc
	bl func_02060a84
	ldr r0, =data_0210cdfc
	ldr r1, =data_020c3dac
	mov r2, #3
	bl func_02060af0
	ldr r4, =0x027FFC40
	ldrh r0, [r4]
	cmp r0, #2
	bne lbl_02061494
	ldr r3, =data_0210cde4
	mvn r2, #0
	str r2, [r3, #8]
	mov r12, #0
	str r12, [r3, #0xc]
	str r2, [r3, #0x10]
	ldr r0, =data_0210cdfc
	ldr r1, =func_020613d4
	str r12, [r3, #0x14]
	bl func_02060d38
	mov r1, #0
	str r1, [sp]
	ldr r0, =func_020613cc
	str r1, [sp, #4]
	str r0, [sp, #8]
	ldr r12, =func_02061358
	ldr r0, =data_0210cdfc
	mov r2, r1
	mov r3, r1
	str r12, [sp, #0xc]
	bl func_02060ba4
	add sp, sp, #0x10
	ldmia sp!, {r4, pc}
lbl_02061494:
	ldr r0, =data_0210cdfc
	ldr r1, =func_02061360
	ldr r2, =0x00000602
	bl func_02060d38
	ldr r1, [r4, #0x200]
	mvn r0, #0
	cmp r1, r0
	cmpne r1, #0
	ldrne r2, [r4, #0x208]
	cmpne r2, r0
	cmpne r2, #0
	addeq sp, sp, #0x10
	ldmeqia sp!, {r4, pc}
	str r1, [sp]
	ldr r0, [r4, #0x204]
	ldr r1, =func_02061310
	str r0, [sp, #4]
	ldr r0, =func_02061358
	str r1, [sp, #8]
	str r0, [sp, #0xc]
	ldr r3, [r4, #0x20c]
	ldr r0, =data_0210cdfc
	mov r1, #0
	bl func_02060ba4
	add sp, sp, #0x10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02061524(void)
{
	ldr r12, =func_02060c14
	mov r3, r0
	mov r2, r1
	ldr r0, =data_0210cdfc
	mov r1, r3
	bx r12
}

extern "C" asm void func_02061544(void)
{
	ldr r1, [r0, #0x1c]
	mov r2, r1, lsr #0x18
	tst r2, #1
	movne r0, r1, lsl #8
	movne r0, r0, lsr #8
	ldreq r0, [r0, #8]
	bx lr
}

extern "C" asm void func_02061560(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r1, [r0, #0xc]
	ldmib r0, {r4, r5}
	add r6, r5, r1
	mov r0, r4
	mov r1, r6
	bl func_02079214
	mov r0, r4
	mov r1, r6
	bl func_020791ac
	add r0, r4, r5
	sub r2, r6, r5
	mov r1, #0
	bl func_020679ac
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206159c(void)
{
	sub sp, sp, #8
	ldr r1, [r1, #0x18]
	ldr r2, =data_0210cdfc
	str r1, [sp, #4]
	str r2, [r0]
	str r2, [sp]
	str r1, [r0, #4]
	add sp, sp, #8
	bx lr
}

extern "C" asm void func_020615c4(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x54
	movs r9, r1
	ldreq r7, [sp, #0x74]
	ldreq r6, [sp, #0x70]
	ldrne r7, [sp, #0x7c]
	ldrne r6, [sp, #0x78]
	cmp r7, r2, lsl #5
	mov r4, r0
	mov r8, r3
	mov r5, r2, lsl #5
	addls sp, sp, #0x54
	movls r0, #0
	ldmlsia sp!, {r4, r5, r6, r7, r8, r9, pc}
	add r0, sp, #0xc
	bl func_02060e04
	mvn r12, #0
	add r0, sp, #0xc
	mov r1, r8
	add r2, r6, r5
	add r3, r6, r7
	str r12, [sp]
	bl func_0206102c
	cmp r0, #0
	addeq sp, sp, #0x54
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	add r0, sp, #0xc
	mov r1, r4
	mov r2, #0x20
	bl func_02061270
	cmp r0, #0x20
	add r0, sp, #0xc
	beq lbl_0206165c
	bl func_0206112c
	add sp, sp, #0x54
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
lbl_0206165c:
	bl func_0206112c
	add r0, sp, #4
	mov r1, r4
	str r9, [r4, #0x20]
	bl func_0206159c
	add r1, sp, #4
	add r0, sp, #0xc
	ldmia r1, {r1, r2}
	bl func_02061074
	cmp r0, #0
	addeq sp, sp, #0x54
	moveq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	ldr r1, [sp, #0x30]
	add r0, sp, #0xc
	str r1, [r4, #0x24]
	ldr r2, [sp, #0x34]
	ldr r1, [sp, #0x30]
	sub r1, r2, r1
	str r1, [r4, #0x28]
	bl func_0206112c
	mov r0, #1
	add sp, sp, #0x54
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020616bc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x60
	movs r4, r1
	mov r5, r0
	ldreq r0, =data_0210cdec
	ldrne r0, =data_0210cdf4
	ldr r12, [r0]
	cmp r12, #0
	beq lbl_0206176c
	ldr r0, [r0, #4]
	mov r3, r2, lsl #5
	cmp r0, r2, lsl #5
	addls sp, sp, #0x60
	movls r0, #0
	ldmlsia sp!, {r3, r4, r5, pc}
	mov r1, r5
	add r0, r12, r3
	mov r2, #0x20
	bl func_02067a40
	add r0, sp, #0x18
	str r4, [r5, #0x20]
	bl func_02060e04
	add r0, sp, #0x10
	mov r1, r5
	bl func_0206159c
	add r1, sp, #0x10
	add r0, sp, #0x18
	ldmia r1, {r1, r2}
	bl func_02061074
	cmp r0, #0
	addeq sp, sp, #0x60
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	ldr r1, [sp, #0x3c]
	add r0, sp, #0x18
	str r1, [r5, #0x24]
	ldr r2, [sp, #0x40]
	ldr r1, [sp, #0x3c]
	sub r1, r2, r1
	str r1, [r5, #0x28]
	bl func_0206112c
	add sp, sp, #0x60
	mov r0, #1
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206176c:
	ldr r12, =0x027FFE50
	ldr r3, =data_0210cdfc
	ldr r1, [r12]
	mov r0, r5
	str r1, [sp]
	ldr r5, [r12, #4]
	mov r1, r4
	str r5, [sp, #4]
	ldr r4, [r12, #8]
	str r4, [sp, #8]
	ldr r4, [r12, #0xc]
	str r4, [sp, #0xc]
	bl func_020615c4
	add sp, sp, #0x60
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020617b8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x50
	mov r5, r0
	add r0, sp, #8
	bl func_02060e04
	add r0, sp, #0
	mov r1, r5
	bl func_0206159c
	add r1, sp, #0
	add r0, sp, #8
	ldmia r1, {r1, r2}
	bl func_02061074
	cmp r0, #0
	addeq sp, sp, #0x50
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	mov r0, r5
	bl func_02061544
	mov r4, r0
	mov r0, r5
	bl func_02061560
	ldr r1, [r5, #4]
	add r0, sp, #8
	mov r2, r4
	bl func_02061270
	cmp r4, r0
	add r0, sp, #8
	beq lbl_02061838
	bl func_0206112c
	add sp, sp, #0x50
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02061838:
	bl func_0206112c
	mov r0, #1
	add sp, sp, #0x50
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02061848(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x58
	mov r4, r0
	mov r6, r1
	mov r5, r2
	add r0, sp, #0x44
	mov r1, #0
	mov r2, #0x14
	bl func_020679ac
	ldr r2, =data_020c3db0
	add r1, sp, #4
	ldmia r2, {r0, r2}
	bl func_02067a40
	ldr r3, =data_020c3db0
	mov r1, r6
	ldr r12, [r3, #4]
	mov r2, r5
	add r0, sp, #0x44
	add r3, sp, #4
	str r12, [sp]
	bl func_0205f4dc
	add r3, sp, #0x44
	mov r2, #0
lbl_020618a4:
	ldr r1, [r3]
	ldr r0, [r4, r2]
	cmp r1, r0
	bne lbl_020618c4
	add r2, r2, #4
	cmp r2, #0x14
	add r3, r3, #4
	bcc lbl_020618a4
lbl_020618c4:
	cmp r2, #0x14
	moveq r0, #1
	movne r0, #0
	add sp, sp, #0x58
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020618dc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	bl func_02061544
	ldr r1, =0x027FFC40
	mov r4, r0
	ldrh r0, [r1]
	cmp r0, #2
	bne lbl_0206196c
	ldr r1, [r5, #0x1c]
	mov r0, #0
	mov r1, r1, lsr #0x18
	tst r1, #2
	beq lbl_0206194c
	ldr r1, =data_020c4a08
	ldr r3, =data_020c4a08
	ldr r2, =0x66666667
	sub r12, r1, r3
	smull r1, lr, r2, r12
	mov r1, r12, lsr #0x1f
	ldr r2, [r5]
	add lr, r1, lr, asr #3
	cmp r2, lr
	bcs lbl_0206194c
	mov r0, #0x14
	mla r0, r2, r0, r3
	ldr r1, [r5, #4]
	mov r2, r4
	bl func_02061848
lbl_0206194c:
	cmp r0, #0
	bne lbl_0206196c
	ldr r0, [r5, #4]
	mov r2, r4
	mov r1, #0
	bl func_020679ac
	bl func_0207a058
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206196c:
	ldr r0, [r5, #0x1c]
	mov r0, r0, lsr #0x18
	tst r0, #1
	beq lbl_02061988
	ldr r0, [r5, #4]
	add r0, r0, r4
	bl func_02000950
lbl_02061988:
	ldmib r5, {r0, r1}
	bl func_020791e4
	ldr r4, [r5, #0x10]
	ldr r5, [r5, #0x14]
	cmp r4, r5
	ldmcsia sp!, {r3, r4, r5, pc}
lbl_020619a0:
	ldr r0, [r4]
	cmp r0, #0
	beq lbl_020619b0
	blx r0
lbl_020619b0:
	add r4, r4, #4
	cmp r4, r5
	bcc lbl_020619a0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020619d0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	mov r11, r0
lbl_020619d8:
	ldr r1, [r11, #8]
	ldr r0, [r11, #0xc]
	mov r4, #0
	ldr r6, [r11, #4]
	add r0, r1, r0
	mov r5, r4
	add r7, r6, r0
	bl func_02079cfc
	ldr r1, =data_020c4f6c
	mov r12, r4
	ldr lr, [r1]
	mov r8, lr
	cmp lr, #0
	beq lbl_02061a84
	mov r2, r4
lbl_02061a14:
	ldr r10, [r8, #8]
	ldr r9, [r8]
	cmp r10, #0
	ldr r3, [r8, #4]
	bne lbl_02061a38
	cmp r3, r6
	bcc lbl_02061a38
	cmp r3, r7
	bcc lbl_02061a48
lbl_02061a38:
	cmp r10, r6
	bcc lbl_02061a74
	cmp r10, r7
	bcs lbl_02061a74
lbl_02061a48:
	cmp r5, #0
	strne r8, [r5]
	moveq r4, r8
	cmp lr, r8
	streq r9, [r1]
	moveq lr, r9
	str r2, [r8]
	cmp r12, #0
	mov r5, r8
	strne r9, [r12]
	b lbl_02061a78
lbl_02061a74:
	mov r12, r8
lbl_02061a78:
	mov r8, r9
	cmp r9, #0
	bne lbl_02061a14
lbl_02061a84:
	bl func_02079d10
	cmp r4, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02061a90:
	ldr r1, [r4, #4]
	ldr r5, [r4]
	cmp r1, #0
	beq lbl_02061aa8
	ldr r0, [r4, #8]
	blx r1
lbl_02061aa8:
	mov r4, r5
	cmp r5, #0
	bne lbl_02061a90
	b lbl_020619d8
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02061ac0(void)
{
	stmdb sp!, {r3, lr}
	bl func_020619d0
	mov r0, #1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02061ad0(void)
{
	stmdb sp!, {lr}
	sub sp, sp, #0x2c
	mov r3, r0
	mov r2, r1
	add r0, sp, #0
	mov r1, r3
	bl func_020616bc
	cmp r0, #0
	beq lbl_02061b04
	add r0, sp, #0
	bl func_020617b8
	cmp r0, #0
	bne lbl_02061b10
lbl_02061b04:
	add sp, sp, #0x2c
	mov r0, #0
	ldmia sp!, {pc}
lbl_02061b10:
	add r0, sp, #0
	bl func_020618dc
	mov r0, #1
	add sp, sp, #0x2c
	ldmia sp!, {pc}
}

extern "C" asm void func_02061b24(void)
{
	stmdb sp!, {lr}
	sub sp, sp, #0x2c
	mov r3, r0
	mov r2, r1
	add r0, sp, #0
	mov r1, r3
	bl func_020616bc
	cmp r0, #0
	beq lbl_02061b58
	add r0, sp, #0
	bl func_02061ac0
	cmp r0, #0
	bne lbl_02061b64
lbl_02061b58:
	add sp, sp, #0x2c
	mov r0, #0
	ldmia sp!, {pc}
lbl_02061b64:
	mov r0, #1
	add sp, sp, #0x2c
	ldmia sp!, {pc}
}

extern "C" asm void func_02061b70(void)
{
	mov r1, #0
	mov r2, #0x1000
	mov r3, #0
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r2}
	bx lr
}

extern "C" asm void func_02061b88(void)
{
	mov r2, #0x1000
	str r2, [r0, #0x20]
	mov r3, #0
	stmia r0!, {r2, r3}
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r2, r3}
	stmia r0!, {r1, r3}
	bx lr
}

extern "C" asm void func_02061bac(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r0]
	ldr r12, [sp, #8]
	smull lr, r4, r2, r4
	mov lr, lr, lsr #0xc
	orr lr, lr, r4, lsl #20
	str lr, [r1]
	ldr r4, [r0, #4]
	smull lr, r4, r2, r4
	mov lr, lr, lsr #0xc
	orr lr, lr, r4, lsl #20
	str lr, [r1, #4]
	ldr lr, [r0, #8]
	smull r4, lr, r2, lr
	mov r2, r4, lsr #0xc
	orr r2, r2, lr, lsl #20
	str r2, [r1, #8]
	ldr r2, [r0, #0xc]
	smull lr, r2, r3, r2
	mov lr, lr, lsr #0xc
	orr lr, lr, r2, lsl #20
	str lr, [r1, #0xc]
	ldr r2, [r0, #0x10]
	smull lr, r2, r3, r2
	mov lr, lr, lsr #0xc
	orr lr, lr, r2, lsl #20
	str lr, [r1, #0x10]
	ldr r2, [r0, #0x14]
	smull lr, r2, r3, r2
	mov r3, lr, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r1, #0x14]
	ldr r2, [r0, #0x18]
	smull r3, r2, r12, r2
	mov r3, r3, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r1, #0x18]
	ldr r2, [r0, #0x1c]
	smull r3, r2, r12, r2
	mov r3, r3, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r1, #0x1c]
	ldr r0, [r0, #0x20]
	smull r2, r0, r12, r0
	mov r2, r2, lsr #0xc
	orr r2, r2, r0, lsl #20
	str r2, [r1, #0x20]
	ldmia sp!, {r4, pc}

	dcd 0x00000000
}

#pragma thumb on
