/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0206ba78(void);
    void func_0206bbf4(void);
    void func_0206bcc0(void);
    void func_0206c118(void);
    void func_0206c198(void);
    void func_0206c26c(void);
    void func_0206c2d8(void);
    void func_0206c708(void);
    void func_0206ca10(void);
    void func_0206cd74(void);
    void func_0206d4d0(void);
    void func_0206d5ac(void);
    void func_0206d61c(void);
    void func_0206d930(void);
    void func_0206dcb0(void);
    void func_0206dcd0(void);
    void func_0206dcf0(void);
    void func_0206dd4c(void);
    void func_0206dd64(void);
    void func_0206dd70(void);
    void func_0206dd80(void);
    void func_0206de34(void);
    void func_0206df18(void);
    void func_0206dfa4(void);
    void func_0206dfcc(void);
    void func_0206e154(void);
    void func_0206e3d8(void);
    void func_0206e3e8(void);
    void func_0206e3f4(void);
    void func_0206e418(void);
    void func_0206e424(void);
    void func_0206e484(void);
    void func_0206e4e4(void);
    void func_0206e528(void);
    void func_0206e56c(void);
    void func_0206e5b0(void);
    void func_0206e5f4(void);
    void func_0206e630(void);
    void func_0206e664(void);
    void func_0206e7a0(void);
    void func_0206e8c0(void);
    void func_0206e8d0(void);
    void func_0206e910(void);
    void func_0206e948(void);
    void func_0206e958(void);
    void func_0206e968(void);
    void func_0206e9dc(void);
    void func_0206e9f8(void);
    void func_0206ea74(void);
    void func_0206eab0(void);
    void func_0206eb18(void);
    void func_0206eb7c(void);
    void func_0206eccc(void);
    void func_0206f080(void);
    void func_0206f1e0(void);
    void func_0206f33c(void);
    void func_0206f530(void);
    void data_020ba5c0(void);
    void data_020ba5e0(void);
    void data_020ba5e1(void);
    void data_020ba5e2(void);
    void data_020ba5e3(void);
    void data_020ba604(void);
    void data_020ba605(void);
    void data_020ba606(void);
    void data_020ba607(void);
    void data_020c3dbc(void);
    void data_020c3dc8(void);
    void data_020c3e5c(void);
    void data_020c3e60(void);
    void data_020c3e68(void);
    void data_020c3e6c(void);
    void data_020c3e7c(void);
    void data_020c3e8c(void);
    void data_020c3ecc(void);
    void data_020c3ed0(void);
    void data_020c3ed8(void);
    void data_020c3efc(void);
    void data_020c3f08(void);
    void data_020c3f14(void);
    void data_020c3f18(void);
    void data_020c3f20(void);
    void data_020c3f44(void);
    void data_020c3f50(void);
    void data_0210cf28(void);
    void data_0210cf30(void);
    void data_0210cf74(void);
    void data_0210cfe4(void);
    void data_0210d008(void);
    void data_0210d18c(void);
    void data_0210d190(void);
    void data_0210e590(void);
    void data_0210e5d0(void);
    void data_0210fe90(void);
    void data_0210fe94(void);
    void func_02061f80(void);
    void func_020626a0(void);
    void func_0206276c(void);
    void func_020627a0(void);
    void func_02062e04(void);
    void func_02062e84(void);
    void func_02062ee0(void);
    void func_0206308c(void);
    void func_020630ec(void);
    void func_02065034(void);
    void func_02065050(void);
    void func_0206506c(void);
    void func_02065088(void);
    void func_020653a8(void);
    void func_020653d8(void);
    void func_02067540(void);
    void func_02067744(void);
    void func_02067828(void);
    void func_02067888(void);
    void func_020678a0(void);
    void func_020678ec(void);
    void func_02067b70(void);
    void func_02068a1c(void);
    void func_02068a30(void);
    void func_0206a26c(void);
    void func_0206ac78(void);
    void func_0206aed4(void);
    void func_0206b1bc(void);
    void func_0206b1f4(void);
    void func_0206b22c(void);
    void func_0206b294(void);
    void func_0206f6c4(void);
    void func_0206facc(void);
    void func_0206fe00(void);
}

#pragma thumb off

extern "C" asm void func_0206ba78(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r0, [r6, #8]
	tst r0, #0x200
	bne lbl_0206bbe4
	ldr r1, [r6]
	add r0, r6, #0x184
	ldrb r4, [r1, #1]
	strb r4, [r6, #0xac]
	ldr r1, [r6, #8]
	orr r1, r1, #4
	str r1, [r6, #8]
	str r0, [r6, #0xb8]
	ldr r0, [r6, #0x14]
	cmp r0, #0
	ldrneb r5, [r6, #0x8e]
	moveq r5, #0
	cmp r5, #1
	bne lbl_0206baf8
	ldr r1, [r6, #8]
	mov r0, r6
	bic r1, r1, #0x40
	str r1, [r6, #8]
	ldr r1, [r6, #0x14]
	blx r1
	ldr r0, [r6, #0x14]
	cmp r0, #0
	ldrneb r5, [r6, #0x8e]
	ldr r0, [r6, #8]
	moveq r5, #0
	and r0, r0, #0x40
	b lbl_0206bafc
lbl_0206baf8:
	mov r0, #0
lbl_0206bafc:
	cmp r0, #0
	bne lbl_0206bb5c
	ldr r12, [r6, #4]
	ldr r1, [r12, #0x18]
	cmp r1, #0
	beq lbl_0206bb48
	mov r0, r4, lsr #5
	add r0, r12, r0, lsl #2
	ldr r0, [r0, #0x4c]
	and r2, r4, #0x1f
	mov r3, #1
	tst r0, r3, lsl r2
	beq lbl_0206bb48
	ldr r0, [r6, #0xb8]
	ldr r3, [r12, #0x1c]
	mov r2, r4
	blx r3
	cmp r0, #0
	bne lbl_0206bb5c
lbl_0206bb48:
	ldr r1, [r6]
	ldr r0, [r6, #0xb8]
	ldrb r1, [r1, #2]
	and r1, r1, #1
	str r1, [r0]
lbl_0206bb5c:
	cmp r5, #2
	bne lbl_0206bb98
	ldr r1, [r6, #8]
	mov r0, r6
	bic r1, r1, #0x40
	str r1, [r6, #8]
	ldr r1, [r6, #0x14]
	blx r1
	ldr r0, [r6, #0x14]
	cmp r0, #0
	ldrneb r5, [r6, #0x8e]
	ldr r0, [r6, #8]
	moveq r5, #0
	and r0, r0, #0x40
	b lbl_0206bb9c
lbl_0206bb98:
	mov r0, #0
lbl_0206bb9c:
	cmp r0, #0
	bne lbl_0206bbc4
	ldr r0, [r6, #0xb8]
	ldr r0, [r0]
	cmp r0, #0
	ldr r0, [r6, #8]
	orrne r0, r0, #1
	strne r0, [r6, #8]
	biceq r0, r0, #1
	streq r0, [r6, #8]
lbl_0206bbc4:
	cmp r5, #3
	bne lbl_0206bbe4
	ldr r1, [r6, #8]
	mov r0, r6
	bic r1, r1, #0x40
	str r1, [r6, #8]
	ldr r1, [r6, #0x14]
	blx r1
lbl_0206bbe4:
	ldr r0, [r6]
	add r0, r0, #3
	str r0, [r6]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206bbf4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	ldr r0, [r4, #8]
	tst r0, #0x200
	bne lbl_0206bcb0
	tst r0, #1
	beq lbl_0206bcb0
	ldr r0, [r4, #0x18]
	cmp r0, #0
	ldrneb r5, [r4, #0x8f]
	moveq r5, #0
	cmp r5, #1
	bne lbl_0206bc5c
	ldr r1, [r4, #8]
	mov r0, r4
	bic r1, r1, #0x40
	str r1, [r4, #8]
	ldr r1, [r4, #0x18]
	blx r1
	ldr r0, [r4, #0x18]
	cmp r0, #0
	ldrneb r5, [r4, #0x8f]
	ldr r0, [r4, #8]
	moveq r5, #0
	and r0, r0, #0x40
	b lbl_0206bc60
lbl_0206bc5c:
	mov r0, #0
lbl_0206bc60:
	cmp r0, #0
	bne lbl_0206bc90
	ldr r0, [r4]
	ldrb r0, [r0, #1]
	str r0, [sp]
	ldr r0, [r4, #8]
	tst r0, #0x100
	bne lbl_0206bc90
	add r1, sp, #0
	mov r0, #0x14
	mov r2, #1
	bl func_0206de34
lbl_0206bc90:
	cmp r5, #3
	bne lbl_0206bcb0
	ldr r1, [r4, #8]
	mov r0, r4
	bic r1, r1, #0x40
	str r1, [r4, #8]
	ldr r1, [r4, #0x18]
	blx r1
lbl_0206bcb0:
	ldr r0, [r4]
	add r0, r0, #2
	str r0, [r4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206bcc0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0x1c
	mov r7, r0
	mov r5, r3
	strb r5, [r7, #0xad]
	ldr r3, [r7, #8]
	add r0, r7, #0xf4
	orr r3, r3, #8
	str r3, [r7, #8]
	str r0, [r7, #0xb0]
	ldr r0, [r7, #0x1c]
	mov r8, r1
	cmp r0, #0
	ldrneb r4, [r7, #0x90]
	mov r6, r2
	moveq r4, #0
	cmp r4, #1
	bne lbl_0206bd3c
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x1c]
	blx r1
	ldr r0, [r7, #0x1c]
	cmp r0, #0
	ldrneb r4, [r7, #0x90]
	ldr r0, [r7, #8]
	moveq r4, #0
	and r0, r0, #0x40
	b lbl_0206bd40
lbl_0206bd3c:
	mov r0, #0
lbl_0206bd40:
	cmp r0, #0
	bne lbl_0206bff0
	ldr r0, [r7, #4]
	ldr r0, [r0, #0x38]
	cmp r0, #0
	beq lbl_0206bd6c
	ldr r1, [r7, #8]
	tst r1, #0x80
	moveq r1, #0x38
	mlaeq r8, r5, r1, r0
	beq lbl_0206bfec
lbl_0206bd6c:
	cmp r8, #0x20
	cmpne r8, #0x40
	bne lbl_0206bdb4
	mov r1, r5, lsr #5
	add r1, r7, r1, lsl #2
	ldr r1, [r1, #0xbc]
	and r2, r5, #0x1f
	mov r3, #1
	tst r1, r3, lsl r2
	beq lbl_0206bdb4
	cmp r0, #0
	movne r1, #0x38
	mlane r8, r5, r1, r0
	bne lbl_0206bfec
	ldr r1, =data_0210d190
	mov r0, #0x38
	mla r8, r5, r0, r1
	b lbl_0206bfec
lbl_0206bdb4:
	cmp r0, #0
	beq lbl_0206bdec
	add r8, r7, #0xbc
	mov r3, r5, lsr #5
	ldr r2, [r8, r3, lsl #2]
	and r0, r5, #0x1f
	mov r1, #1
	orr r0, r2, r1, lsl r0
	str r0, [r8, r3, lsl #2]
	ldr r1, [r7, #4]
	mov r0, #0x38
	ldr r1, [r1, #0x38]
	mla r8, r5, r0, r1
	b lbl_0206be20
lbl_0206bdec:
	cmp r8, #0x40
	addne r8, r7, #0xf4
	bne lbl_0206be20
	add lr, r7, #0xbc
	mov r12, r5, lsr #5
	ldr r1, =data_0210d190
	ldr r8, [lr, r12, lsl #2]
	mov r0, #0x38
	and r2, r5, #0x1f
	mov r3, #1
	orr r2, r8, r3, lsl r2
	mla r8, r5, r0, r1
	str r2, [lr, r12, lsl #2]
lbl_0206be20:
	mov r0, #0
	str r0, [r8]
	ldr r3, [r7, #0xd8]
	ldrh r0, [r3, #0xa]
	add r2, r3, #4
	ldrh r1, [r2, r0]
	add r0, r2, r0
	mla r0, r1, r5, r0
	ldr r0, [r0, #4]
	ldr r1, =data_0210cf28
	add r0, r3, r0
	ldrh r0, [r0, #0x1e]
	tst r0, #0x20
	ldrne r0, [r8]
	orrne r0, r0, #0x20
	strne r0, [r8]
	ldrh r2, [r6, #0x1e]
	ldr r0, =data_020ba5c0
	ldr r12, [r1, #0x94]
	mov r2, r2, asr #6
	and r2, r2, #7
	ldr lr, [r0, r2, lsl #2]
	ldr r2, [r6, #4]
	mvn r3, lr
	and r3, r12, r3
	and r2, r2, lr
	orr r2, r3, r2
	str r2, [r8, #4]
	ldrh r12, [r6, #0x1e]
	ldr r3, [r1, #0x98]
	ldr r2, [r6, #8]
	mov r12, r12, asr #9
	and r12, r12, #7
	ldr r12, [r0, r12, lsl #2]
	mvn r0, r12
	and r3, r3, r0
	and r0, r2, r12
	orr r0, r3, r0
	str r0, [r8, #8]
	ldr r3, [r6, #0x10]
	ldr r0, [r6, #0xc]
	ldr r2, [r1, #0x9c]
	mvn r1, r3
	and r1, r2, r1
	and r0, r0, r3
	orr r0, r1, r0
	str r0, [r8, #0xc]
	ldr r0, [r6, #0x14]
	str r0, [r8, #0x10]
	ldrh r0, [r6, #0x1c]
	str r0, [r8, #0x14]
	ldrh r0, [r6, #0x1e]
	tst r0, #1
	beq lbl_0206bf84
	tst r0, #2
	ldrne r1, [r8]
	add r0, r6, #0x2c
	orrne r1, r1, #1
	strne r1, [r8]
	bne lbl_0206bf24
	ldr r1, [r0]
	str r1, [r8, #0x18]
	ldr r1, [r0, #4]
	add r0, r0, #8
	str r1, [r8, #0x1c]
lbl_0206bf24:
	ldrh r1, [r6, #0x1e]
	tst r1, #4
	ldrne r1, [r8]
	orrne r1, r1, #2
	strne r1, [r8]
	bne lbl_0206bf50
	ldrsh r1, [r0]
	strh r1, [r8, #0x20]
	ldrsh r1, [r0, #2]
	add r0, r0, #4
	strh r1, [r8, #0x22]
lbl_0206bf50:
	ldrh r1, [r6, #0x1e]
	tst r1, #8
	ldrne r0, [r8]
	orrne r0, r0, #4
	strne r0, [r8]
	bne lbl_0206bf78
	ldr r1, [r0]
	str r1, [r8, #0x24]
	ldr r0, [r0, #4]
	str r0, [r8, #0x28]
lbl_0206bf78:
	ldr r0, [r8]
	orr r0, r0, #8
	str r0, [r8]
lbl_0206bf84:
	ldr r12, [r7, #4]
	ldr r1, [r12, #8]
	cmp r1, #0
	beq lbl_0206bfc0
	mov r0, r5, lsr #5
	add r0, r12, r0, lsl #2
	ldr r0, [r0, #0x3c]
	and r2, r5, #0x1f
	mov r3, #1
	tst r0, r3, lsl r2
	beq lbl_0206bfc0
	ldr r3, [r12, #0xc]
	mov r0, r8
	mov r2, r5
	blx r3
lbl_0206bfc0:
	ldr r0, [r8]
	tst r0, #0x18
	beq lbl_0206bfec
	ldrh r0, [r6, #0x20]
	strh r0, [r8, #0x2c]
	ldrh r0, [r6, #0x22]
	strh r0, [r8, #0x2e]
	ldr r0, [r6, #0x24]
	str r0, [r8, #0x30]
	ldr r0, [r6, #0x28]
	str r0, [r8, #0x34]
lbl_0206bfec:
	str r8, [r7, #0xb0]
lbl_0206bff0:
	cmp r4, #2
	bne lbl_0206c02c
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x1c]
	blx r1
	ldr r0, [r7, #0x1c]
	cmp r0, #0
	ldrneb r4, [r7, #0x90]
	ldr r0, [r7, #8]
	moveq r4, #0
	and r0, r0, #0x40
	b lbl_0206c030
lbl_0206c02c:
	mov r0, #0
lbl_0206c030:
	cmp r0, #0
	bne lbl_0206c0d8
	ldr r5, [r7, #0xb0]
	ldr r1, [r5, #0xc]
	tst r1, #0x1f0000
	beq lbl_0206c0cc
	ldr r0, [r5]
	tst r0, #0x20
	bicne r0, r1, #0x1f0000
	strne r0, [r5, #0xc]
	ldr r0, [r7, #8]
	bic r0, r0, #2
	str r0, [r7, #8]
	tst r0, #0x100
	bne lbl_0206c0d8
	ldr r0, =0x00293130
	ldr r3, =0x00002B2A
	str r0, [sp]
	ldr r2, [r5, #4]
	add r1, sp, #4
	str r2, [sp, #4]
	ldr r6, [r5, #8]
	mov r2, #6
	str r6, [sp, #8]
	ldr r6, [r5, #0xc]
	str r6, [sp, #0xc]
	str r3, [sp, #0x10]
	ldr r3, [r5, #0x10]
	str r3, [sp, #0x14]
	ldr r3, [r5, #0x14]
	str r3, [sp, #0x18]
	bl func_0206de34
	ldr r0, [r5]
	tst r0, #0x18
	beq lbl_0206c0d8
	ldr r1, [r7, #0xf0]
	mov r0, r5
	blx r1
	b lbl_0206c0d8
lbl_0206c0cc:
	ldr r0, [r7, #8]
	orr r0, r0, #2
	str r0, [r7, #8]
lbl_0206c0d8:
	cmp r4, #3
	addne sp, sp, #0x1c
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, pc}
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x1c]
	blx r1
	add sp, sp, #0x1c
	ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0206c118(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r4, r0
	ldr r2, [r4, #8]
	tst r2, #0x200
	bne lbl_0206c184
	ldr r0, [r4]
	tst r2, #1
	ldrb r3, [r0, #1]
	bne lbl_0206c150
	tst r2, #8
	beq lbl_0206c150
	ldrb r0, [r4, #0xad]
	cmp r3, r0
	beq lbl_0206c184
lbl_0206c150:
	ldr r6, [r4, #0xd8]
	ldr r12, =data_020c3e6c
	ldrh r2, [r6, #0xa]
	add r5, r6, #4
	mov r0, r4
	ldrh lr, [r5, r2]
	add r2, r5, r2
	mla r2, lr, r3, r2
	ldr r2, [r2, #4]
	ldrh lr, [r6, r2]
	add r2, r6, r2
	ldr r12, [r12, lr, lsl #2]
	blx r12
lbl_0206c184:
	ldr r0, [r4]
	add r0, r0, #2
	str r0, [r4]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206c198(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r0
	ldr r0, [r5, #0x20]
	mov r4, r2
	cmp r0, #0
	ldrneb r6, [r5, #0x91]
	moveq r6, #0
	cmp r6, #1
	bne lbl_0206c1f0
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x20]
	blx r1
	ldr r0, [r5, #0x20]
	cmp r0, #0
	ldrneb r6, [r5, #0x91]
	ldr r0, [r5, #8]
	moveq r6, #0
	and r0, r0, #0x40
	b lbl_0206c1f4
lbl_0206c1f0:
	mov r0, #0
lbl_0206c1f4:
	cmp r0, #0
	bne lbl_0206c218
	ldr r0, [r5, #8]
	tst r0, #0x100
	bne lbl_0206c218
	ldr r0, [r4, #8]
	ldr r1, [r4, #0xc]
	add r0, r4, r0
	bl func_0206dd80
lbl_0206c218:
	cmp r6, #2
	bne lbl_0206c248
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x20]
	blx r1
	ldr r0, [r5, #0x20]
	cmp r0, #0
	ldrneb r6, [r5, #0x91]
	moveq r6, #0
lbl_0206c248:
	cmp r6, #3
	ldmneia sp!, {r4, r5, r6, pc}
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x20]
	blx r1
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206c26c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	ldr r2, [r4, #8]
	tst r2, #0x200
	bne lbl_0206c2c4
	tst r2, #1
	beq lbl_0206c2c4
	tst r2, #2
	bne lbl_0206c2c4
	ldr r5, [r4, #0xdc]
	ldr r3, [r4]
	ldrh r2, [r5, #6]
	ldrb r3, [r3, #1]
	ldr r12, =data_020c3e7c
	ldrh lr, [r5, r2]
	add r2, r5, r2
	mla r2, lr, r3, r2
	ldr r2, [r2, #4]
	ldrh lr, [r5, r2]
	add r2, r5, r2
	ldr r12, [r12, lr, lsl #2]
	blx r12
lbl_0206c2c4:
	ldr r0, [r4]
	add r0, r0, #2
	str r0, [r4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206c2d8(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x14
	mov r10, r0
	ldr r0, [r10]
	mov r9, r1
	ldrb r6, [r0, #1]
	mov r4, #4
	strb r6, [r10, #0xae]
	ldr r0, [r10, #8]
	orr r0, r0, #0x10
	str r0, [r10, #8]
	tst r0, #0x400
	beq lbl_0206c360
	cmp r9, #0x40
	cmpne r9, #0x60
	addeq r4, r4, #1
	cmp r9, #0x20
	cmpne r9, #0x60
	bne lbl_0206c34c
	tst r0, #0x100
	add r4, r4, #1
	bne lbl_0206c34c
	ldr r0, [r10]
	add r1, sp, #0x10
	ldrb r3, [r0, #4]
	mov r0, #0x14
	mov r2, #1
	str r3, [sp, #0x10]
	bl func_0206de34
lbl_0206c34c:
	ldr r0, [r10]
	add sp, sp, #0x14
	add r0, r0, r4
	str r0, [r10]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_0206c360:
	cmp r9, #0x40
	cmpne r9, #0x60
	bne lbl_0206c3a4
	ldr r0, [r10]
	cmp r9, #0x40
	ldreqb r0, [r0, #4]
	add r4, r4, #1
	streq r0, [sp, #0xc]
	ldrneb r0, [r0, #5]
	strne r0, [sp, #0xc]
	ldr r0, [r10, #8]
	tst r0, #0x100
	bne lbl_0206c3a4
	add r1, sp, #0xc
	mov r0, #0x14
	mov r2, #1
	bl func_0206de34
lbl_0206c3a4:
	add r0, r10, #0x12c
	str r0, [r10, #0xb4]
	ldr r0, [r10, #0x24]
	cmp r0, #0
	ldrneb r8, [r10, #0x92]
	moveq r8, #0
	cmp r8, #1
	bne lbl_0206c3f8
	ldr r1, [r10, #8]
	mov r0, r10
	bic r1, r1, #0x40
	str r1, [r10, #8]
	ldr r1, [r10, #0x24]
	blx r1
	ldr r0, [r10, #0x24]
	cmp r0, #0
	ldrneb r8, [r10, #0x92]
	ldr r0, [r10, #8]
	moveq r8, #0
	and r0, r0, #0x40
	b lbl_0206c3fc
lbl_0206c3f8:
	mov r0, #0
lbl_0206c3fc:
	cmp r0, #0
	bne lbl_0206c614
	ldr r0, [r10, #4]
	ldr r1, [r0, #0x34]
	cmp r1, #0
	beq lbl_0206c430
	mov r0, #0x58
	mla r5, r6, r0, r1
	ldr r0, [r10, #8]
	tst r0, #0x80
	moveq r0, #1
	movne r0, #0
	b lbl_0206c438
lbl_0206c430:
	add r5, r10, #0x12c
	mov r0, #0
lbl_0206c438:
	cmp r0, #0
	bne lbl_0206c610
	mov r0, #0
	str r0, [r5]
	ldr r0, [r10, #4]
	ldr r1, [r0, #0x10]
	cmp r1, #0
	beq lbl_0206c470
	ldr r3, [r0, #0x14]
	mov r0, r5
	mov r2, r6
	blx r3
	cmp r0, #0
	bne lbl_0206c610
lbl_0206c470:
	ldr r2, [r10, #0xd4]
	ldrh r0, [r2, #6]
	ldrh r1, [r2, r0]
	add r0, r2, r0
	mla r0, r1, r6, r0
	ldr r1, [r0, #4]
	ldrh r0, [r2, r1]
	add r7, r2, r1
	add r6, r7, #4
	tst r0, #1
	beq lbl_0206c4ac
	ldr r0, [r5]
	orr r0, r0, #4
	str r0, [r5]
	b lbl_0206c4c8
lbl_0206c4ac:
	ldr r0, [r6]
	str r0, [r5, #0x4c]
	ldr r0, [r6, #4]
	str r0, [r5, #0x50]
	ldr r0, [r6, #8]
	add r6, r6, #0xc
	str r0, [r5, #0x54]
lbl_0206c4c8:
	ldrh r0, [r7]
	tst r0, #2
	beq lbl_0206c4e4
	ldr r0, [r5]
	orr r0, r0, #2
	str r0, [r5]
	b lbl_0206c5f8
lbl_0206c4e4:
	tst r0, #8
	beq lbl_0206c5ac
	and r1, r0, #0xf0
	mov r11, r1, asr #4
	ldrsh r1, [r6]
	add r0, r5, #0x28
	str r1, [sp]
	ldrsh r1, [r6, #2]
	str r1, [sp, #4]
	bl func_02067b70
	ldrh r0, [r7]
	ldr r2, =data_020ba5e0
	ldr r1, =data_020ba5e1
	tst r0, #0x100
	mov r0, #0x1000
	ldrb r2, [r2, r11, lsl #2]
	ldrb r1, [r1, r11, lsl #2]
	rsbne r0, r0, #0
	add r3, r5, r11, lsl #2
	str r0, [r3, #0x28]
	ldr r0, [sp]
	add r2, r5, r2, lsl #2
	str r0, [r2, #0x28]
	ldr r0, [sp, #4]
	add r1, r5, r1, lsl #2
	str r0, [r1, #0x28]
	ldrh r0, [r7]
	tst r0, #0x200
	beq lbl_0206c564
	ldr r0, [sp, #4]
	rsb r0, r0, #0
	str r0, [sp, #4]
lbl_0206c564:
	ldr r0, =data_020ba5e2
	ldrb r0, [r0, r11, lsl #2]
	add r1, r5, r0, lsl #2
	ldr r0, [sp, #4]
	str r0, [r1, #0x28]
	ldrh r0, [r7]
	tst r0, #0x400
	beq lbl_0206c590
	ldr r0, [sp]
	rsb r0, r0, #0
	str r0, [sp]
lbl_0206c590:
	ldr r0, =data_020ba5e3
	add r6, r6, #4
	ldrb r0, [r0, r11, lsl #2]
	add r1, r5, r0, lsl #2
	ldr r0, [sp]
	str r0, [r1, #0x28]
	b lbl_0206c5f8
lbl_0206c5ac:
	ldrsh r0, [r7, #2]
	str r0, [r5, #0x28]
	ldrsh r0, [r6]
	str r0, [r5, #0x2c]
	ldrsh r0, [r6, #2]
	str r0, [r5, #0x30]
	ldrsh r0, [r6, #4]
	str r0, [r5, #0x34]
	ldrsh r0, [r6, #6]
	str r0, [r5, #0x38]
	ldrsh r0, [r6, #8]
	str r0, [r5, #0x3c]
	ldrsh r0, [r6, #0xa]
	str r0, [r5, #0x40]
	ldrsh r0, [r6, #0xc]
	str r0, [r5, #0x44]
	ldrsh r0, [r6, #0xe]
	add r6, r6, #0x10
	str r0, [r5, #0x48]
lbl_0206c5f8:
	ldrh r3, [r7]
	ldr r2, [r10]
	ldr r7, [r10, #0xe8]
	mov r0, r5
	mov r1, r6
	blx r7
lbl_0206c610:
	str r5, [r10, #0xb4]
lbl_0206c614:
	cmp r8, #2
	bne lbl_0206c650
	ldr r1, [r10, #8]
	mov r0, r10
	bic r1, r1, #0x40
	str r1, [r10, #8]
	ldr r1, [r10, #0x24]
	blx r1
	ldr r0, [r10, #0x24]
	cmp r0, #0
	ldrneb r8, [r10, #0x92]
	ldr r0, [r10, #8]
	moveq r8, #0
	and r0, r0, #0x40
	b lbl_0206c654
lbl_0206c650:
	mov r0, #0
lbl_0206c654:
	cmp r0, #0
	bne lbl_0206c674
	ldr r0, [r10, #8]
	tst r0, #0x100
	bne lbl_0206c674
	ldr r0, [r10, #0xb4]
	ldr r1, [r10, #0xec]
	blx r1
lbl_0206c674:
	mov r0, #0
	str r0, [r10, #0xb4]
	cmp r8, #3
	bne lbl_0206c6a4
	ldr r1, [r10, #8]
	mov r0, r10
	bic r1, r1, #0x40
	str r1, [r10, #8]
	ldr r1, [r10, #0x24]
	blx r1
	ldr r0, [r10, #8]
	and r0, r0, #0x40
lbl_0206c6a4:
	cmp r9, #0x20
	cmpne r9, #0x60
	bne lbl_0206c6e4
	cmp r0, #0
	add r4, r4, #1
	bne lbl_0206c6e4
	ldr r0, [r10, #8]
	tst r0, #0x100
	bne lbl_0206c6e4
	ldr r0, [r10]
	add r1, sp, #8
	ldrb r3, [r0, #4]
	mov r0, #0x13
	mov r2, #1
	str r3, [sp, #8]
	bl func_0206de34
lbl_0206c6e4:
	ldr r0, [r10]
	add r0, r0, r4
	str r0, [r10]
	add sp, sp, #0x14
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0206c708(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0xc8
	mov r9, r0
	ldr r0, [r9, #8]
	mov r8, r1
	tst r0, #0x200
	mov r4, #2
	ldr r5, =data_020c3efc
	ldr r6, =data_020c3f08
	beq lbl_0206c75c
	cmp r8, #0x40
	cmpne r8, #0x60
	addeq r4, r4, #1
	cmp r8, #0x20
	cmpne r8, #0x60
	ldr r0, [r9]
	addeq r4, r4, #1
	add r0, r0, r4
	add sp, sp, #0xc8
	str r0, [r9]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
lbl_0206c75c:
	cmp r8, #0x40
	cmpne r8, #0x60
	bne lbl_0206c79c
	tst r0, #0x100
	add r4, r4, #1
	bne lbl_0206c79c
	ldr r0, [r9]
	cmp r8, #0x40
	ldreqb r0, [r0, #2]
	add r1, sp, #4
	mov r2, #1
	streq r0, [sp, #4]
	ldrneb r0, [r0, #3]
	strne r0, [sp, #4]
	mov r0, #0x14
	bl func_0206de34
lbl_0206c79c:
	ldr r0, [r9, #0x28]
	cmp r0, #0
	ldrneb r7, [r9, #0x93]
	moveq r7, #0
	cmp r7, #1
	bne lbl_0206c7e8
	ldr r1, [r9, #8]
	mov r0, r9
	bic r1, r1, #0x40
	str r1, [r9, #8]
	ldr r1, [r9, #0x28]
	blx r1
	ldr r0, [r9, #0x28]
	cmp r0, #0
	ldrneb r7, [r9, #0x93]
	ldr r0, [r9, #8]
	moveq r7, #0
	and r1, r0, #0x40
	b lbl_0206c7ec
lbl_0206c7e8:
	mov r1, #0
lbl_0206c7ec:
	ldr r0, [r9, #8]
	tst r0, #0x100
	cmpeq r1, #0
	bne lbl_0206c964
	bl func_0206dcf0
	ldr r2, =0x00151110
	ldr r1, =0x04000400
	mov r0, #0
	str r2, [r1]
	str r0, [r1]
	str r0, [r1]
	add r10, sp, #0x88
lbl_0206c81c:
	mov r0, r10
	bl func_020653a8
	cmp r0, #0
	bne lbl_0206c81c
	ldr r0, =data_0210cf28
	ldr r0, [r0, #0xfc]
	tst r0, #1
	beq lbl_0206c85c
	bl func_0206b1bc
	add r1, sp, #0x48
	bl func_02061f80
	add r0, sp, #0x88
	add r1, sp, #0x48
	mov r2, r0
	bl func_020627a0
	b lbl_0206c880
lbl_0206c85c:
	tst r0, #2
	beq lbl_0206c880
	ldr r0, =data_0210cf74
	add r1, sp, #8
	bl func_02061f80
	add r0, sp, #0x88
	add r1, sp, #8
	mov r2, r0
	bl func_020627a0
lbl_0206c880:
	ldr r3, [sp, #0xb8]
	ldr r2, [sp, #0xbc]
	ldr r1, [sp, #0xc0]
	add r0, sp, #0x88
	str r3, [r5]
	str r2, [r5, #4]
	str r1, [r5, #8]
	bl func_0206308c
	str r0, [r6]
	add r0, sp, #0x98
	bl func_0206308c
	str r0, [r6, #4]
	add r0, sp, #0xa8
	bl func_0206308c
	ldr r1, =data_0210cf28
	str r0, [r6, #8]
	ldr r0, [r1, #0xfc]
	ldr r1, =0x04000400
	tst r0, #1
	beq lbl_0206c910
	ldr r3, =0x00171012
	ldr r0, =data_020c3ed0
	mov r2, #8
	str r3, [r1]
	bl func_02067888
	bl func_0206b1f4
	ldr r1, =0x04000400
	mov r2, #0x30
	bl func_02067888
	ldr r2, =0x00001B19
	ldr r1, =0x04000400
	ldr r0, =data_020c3ed8
	str r2, [r1]
	mov r2, #0x3c
	bl func_02067888
	b lbl_0206c964
lbl_0206c910:
	tst r0, #2
	beq lbl_0206c958
	ldr r3, =0x00171012
	ldr r0, =data_020c3ed0
	mov r2, #8
	str r3, [r1]
	bl func_02067888
	bl func_0206aed4
	ldr r1, =0x04000400
	mov r2, #0x30
	bl func_02067888
	ldr r2, =0x00001B19
	ldr r1, =0x04000400
	ldr r0, =data_020c3ed8
	str r2, [r1]
	mov r2, #0x3c
	bl func_02067888
	b lbl_0206c964
lbl_0206c958:
	ldr r0, =data_020c3ecc
	mov r2, #0x48
	bl func_02067888
lbl_0206c964:
	cmp r7, #3
	movne r0, #0
	bne lbl_0206c990
	ldr r1, [r9, #8]
	mov r0, r9
	bic r1, r1, #0x40
	str r1, [r9, #8]
	ldr r1, [r9, #0x28]
	blx r1
	ldr r0, [r9, #8]
	and r0, r0, #0x40
lbl_0206c990:
	cmp r8, #0x20
	cmpne r8, #0x60
	bne lbl_0206c9d0
	cmp r0, #0
	add r4, r4, #1
	bne lbl_0206c9d0
	ldr r0, [r9, #8]
	tst r0, #0x100
	bne lbl_0206c9d0
	ldr r0, [r9]
	add r1, sp, #0
	ldrb r3, [r0, #2]
	mov r0, #0x13
	mov r2, #1
	str r3, [sp]
	bl func_0206de34
lbl_0206c9d0:
	ldr r0, [r9]
	add r0, r0, r4
	str r0, [r9]
	add sp, sp, #0xc8
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0206ca10(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xc8
	mov r10, r0
	ldr r0, [r10, #8]
	mov r9, r1
	tst r0, #0x200
	mov r5, #2
	ldr r11, =data_020c3f44
	ldr r6, =data_020c3f50
	ldr r7, =data_020c3f20
	beq lbl_0206ca68
	cmp r9, #0x40
	cmpne r9, #0x60
	addeq r5, r5, #1
	cmp r9, #0x20
	cmpne r9, #0x60
	ldr r0, [r10]
	addeq r5, r5, #1
	add r0, r0, r5
	add sp, sp, #0xc8
	str r0, [r10]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_0206ca68:
	cmp r9, #0x40
	cmpne r9, #0x60
	bne lbl_0206caa8
	tst r0, #0x100
	add r5, r5, #1
	bne lbl_0206caa8
	ldr r0, [r10]
	cmp r9, #0x40
	ldreqb r0, [r0, #2]
	add r1, sp, #4
	mov r2, #1
	streq r0, [sp, #4]
	ldrneb r0, [r0, #3]
	strne r0, [sp, #4]
	mov r0, #0x14
	bl func_0206de34
lbl_0206caa8:
	ldr r0, [r10, #0x2c]
	cmp r0, #0
	ldrneb r8, [r10, #0x94]
	moveq r8, #0
	cmp r8, #1
	bne lbl_0206caf4
	ldr r1, [r10, #8]
	mov r0, r10
	bic r1, r1, #0x40
	str r1, [r10, #8]
	ldr r1, [r10, #0x2c]
	blx r1
	ldr r0, [r10, #0x2c]
	cmp r0, #0
	ldrneb r8, [r10, #0x94]
	ldr r0, [r10, #8]
	moveq r8, #0
	and r1, r0, #0x40
	b lbl_0206caf8
lbl_0206caf4:
	mov r1, #0
lbl_0206caf8:
	ldr r0, [r10, #8]
	tst r0, #0x100
	cmpeq r1, #0
	bne lbl_0206ccc8
	bl func_0206dcf0
	ldr r2, =0x00151110
	ldr r1, =0x04000400
	mov r0, #0
	str r2, [r1]
	str r0, [r1]
	str r0, [r1]
	add r4, sp, #0x88
lbl_0206cb28:
	mov r0, r4
	bl func_020653a8
	cmp r0, #0
	bne lbl_0206cb28
	ldr r0, =data_0210cf28
	ldr r0, [r0, #0xfc]
	tst r0, #1
	beq lbl_0206cb68
	bl func_0206b1bc
	add r1, sp, #0x48
	bl func_02061f80
	add r0, sp, #0x88
	add r1, sp, #0x48
	mov r2, r0
	bl func_020627a0
	b lbl_0206cb8c
lbl_0206cb68:
	tst r0, #2
	beq lbl_0206cb8c
	ldr r0, =data_0210cf74
	add r1, sp, #8
	bl func_02061f80
	add r0, sp, #0x88
	add r1, sp, #8
	mov r2, r0
	bl func_020627a0
lbl_0206cb8c:
	ldr r3, [sp, #0xb8]
	ldr r2, [sp, #0xbc]
	ldr r1, [sp, #0xc0]
	add r0, sp, #0x88
	str r3, [r11]
	str r2, [r11, #4]
	str r1, [r11, #8]
	bl func_0206308c
	str r0, [r6]
	add r0, sp, #0x98
	bl func_0206308c
	str r0, [r6, #4]
	add r0, sp, #0xa8
	bl func_0206308c
	ldr r1, [sp, #0x9c]
	str r0, [r6, #8]
	cmp r1, #0
	ldreq r0, [sp, #0xa0]
	cmpeq r0, #0
	beq lbl_0206cc00
	add r0, sp, #0x98
	add r1, r7, #0xc
	bl func_020630ec
	ldr r1, [r7, #0x14]
	ldr r0, [r7, #0x10]
	rsb r1, r1, #0
	str r1, [r7, #0x1c]
	str r0, [r7, #0x20]
	b lbl_0206cc20
lbl_0206cc00:
	add r0, sp, #0xa8
	add r1, r7, #0x18
	bl func_020630ec
	ldr r1, [r7, #0x1c]
	ldr r0, [r7, #0x20]
	rsb r1, r1, #0
	str r1, [r7, #0x14]
	str r0, [r7, #0x10]
lbl_0206cc20:
	ldr r0, =data_0210cf28
	ldr r1, =0x04000400
	ldr r0, [r0, #0xfc]
	tst r0, #1
	beq lbl_0206cc74
	ldr r3, =0x00171012
	ldr r0, =data_020c3f18
	mov r2, #8
	str r3, [r1]
	bl func_02067888
	bl func_0206b1f4
	ldr r1, =0x04000400
	mov r2, #0x30
	bl func_02067888
	ldr r2, =0x00001B19
	ldr r1, =0x04000400
	ldr r0, =data_020c3f20
	str r2, [r1]
	mov r2, #0x3c
	bl func_02067888
	b lbl_0206ccc8
lbl_0206cc74:
	tst r0, #2
	beq lbl_0206ccbc
	ldr r3, =0x00171012
	ldr r0, =data_020c3f18
	mov r2, #8
	str r3, [r1]
	bl func_02067888
	bl func_0206aed4
	ldr r1, =0x04000400
	mov r2, #0x30
	bl func_02067888
	ldr r2, =0x00001B19
	ldr r1, =0x04000400
	ldr r0, =data_020c3f20
	str r2, [r1]
	mov r2, #0x3c
	bl func_02067888
	b lbl_0206ccc8
lbl_0206ccbc:
	ldr r0, =data_020c3f14
	mov r2, #0x48
	bl func_02067888
lbl_0206ccc8:
	cmp r8, #3
	movne r0, #0
	bne lbl_0206ccf4
	ldr r1, [r10, #8]
	mov r0, r10
	bic r1, r1, #0x40
	str r1, [r10, #8]
	ldr r1, [r10, #0x2c]
	blx r1
	ldr r0, [r10, #8]
	and r0, r0, #0x40
lbl_0206ccf4:
	cmp r9, #0x20
	cmpne r9, #0x60
	bne lbl_0206cd34
	cmp r0, #0
	add r5, r5, #1
	bne lbl_0206cd34
	ldr r0, [r10, #8]
	tst r0, #0x100
	bne lbl_0206cd34
	ldr r0, [r10]
	add r1, sp, #0
	ldrb r3, [r0, #2]
	mov r0, #0x13
	mov r2, #1
	str r3, [sp]
	bl func_0206de34
lbl_0206cd34:
	ldr r0, [r10]
	add r0, r0, r5
	str r0, [r10]
	add sp, sp, #0xc8
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0206cd74(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x104
	ldr r1, [r0, #4]
	ldr r6, [r0]
	ldr r7, [r1, #4]
	ldrb r2, [r6, #2]
	ldr r3, [r7, #0x10]
	mov r5, #0
	str r0, [sp]
	str r2, [sp, #0x10]
	add r3, r7, r3
	add r1, sp, #0xb0
	mov r0, r5
	mov r2, #0x54
	mov r4, r5
	str r3, [sp, #0x14]
	add r6, r6, #3
	bl func_020678a0
	bl func_0206dcf0
	mov r0, r5
	ldr r1, =0x04000440
	str r0, [sp, #0xc]
	str r0, [r1]
	mov r0, #1
	str r0, [r1, #0xc]
	ldr r0, [sp, #0xc]
	str r0, [r1, #0x14]
	mov r0, #2
	str r0, [r1]
	ldr r0, [sp, #0x10]
	cmp r0, #0
	bls lbl_0206d264
lbl_0206cdf4:
	ldrb r11, [r6, #1]
	mov r1, #0x64
	ldr r0, [sp]
	smulbb r1, r11, r1
	mov r2, r11, lsr #5
	str r1, [sp, #4]
	add r0, r0, r2, lsl #2
	ldr r3, =data_0210e590
	ldr r2, [sp, #4]
	ldr r9, [r0, #0xcc]
	add r7, r3, r2
	and r1, r11, #0x1f
	mov r2, #1
	ands r3, r9, r2, lsl r1
	str r3, [sp, #8]
	bne lbl_0206ce60
	ldr r9, [r0, #0xcc]
	ldr r3, =0x04000450
	orr r1, r9, r2, lsl r1
	str r1, [r0, #0xcc]
	ldr r0, [sp, #0x14]
	mov r1, #0x54
	mla r0, r11, r1, r0
	ldrb r9, [r6]
	str r9, [r3]
	str r2, [r3, #-0x10]
	bl func_02065050
lbl_0206ce60:
	ldr r0, [sp, #0xc]
	cmp r0, #0
	beq lbl_0206d088
	ldr r0, [sp, #0xe0]
	ldmia r8, {r9, lr}
	str r0, [sp, #0x18]
	mov r0, r9, asr #0x1f
	str r0, [sp, #0x20]
	ldr r0, [sp, #0xe4]
	ldr r12, [r8, #8]
	str r0, [sp, #0x24]
	mov r0, lr, asr #0x1f
	str r0, [sp, #0x28]
	ldr r0, [sp, #0xe8]
	ldr r3, [r8, #0xc]
	str r0, [sp, #0x2c]
	ldr r0, [sp, #0xec]
	ldr r2, [r8, #0x10]
	str r0, [sp, #0x34]
	mov r0, r12, asr #0x1f
	str r0, [sp, #0x30]
	ldr r0, [sp, #0xf0]
	ldr r1, [r8, #0x14]
	str r0, [sp, #0x3c]
	mov r0, r3, asr #0x1f
	str r0, [sp, #0x38]
	ldr r0, [sp, #0xf4]
	str r0, [sp, #0x44]
	mov r0, r2, asr #0x1f
	str r0, [sp, #0x40]
	ldr r0, [sp, #0xf8]
	str r0, [sp, #0x4c]
	mov r0, r1, asr #0x1f
	str r0, [sp, #0x48]
	ldr r0, [r8, #0x18]
	str r0, [sp, #0x50]
	ldr r0, [sp, #0xfc]
	str r0, [sp, #0x58]
	ldr r0, [sp, #0x50]
	mov r0, r0, asr #0x1f
	str r0, [sp, #0x54]
	ldr r0, [r8, #0x1c]
	str r0, [sp, #0xa8]
	ldr r0, [r8, #0x20]
	ldr r8, [sp, #0xa8]
	mov r8, r8, asr #0x1f
	str r8, [sp, #0x5c]
	ldr r8, [sp, #0x100]
	str r8, [sp, #0x60]
	mov r8, r0, asr #0x1f
	str r8, [sp, #0x64]
	umull r10, r8, r5, r9
	str r10, [sp, #0x1c]
	ldr r10, [sp, #0x20]
	mla r8, r5, r10, r8
	mla r8, r4, r9, r8
	ldr r9, [sp, #0x1c]
	mov r9, r9, lsr #0xc
	orr r9, r9, r8, lsl #20
	ldr r8, [sp, #0x18]
	adds r8, r8, r9
	str r8, [sp, #0xe0]
	umull r10, r9, r5, lr
	ldr r8, [sp, #0x28]
	mov r10, r10, lsr #0xc
	mla r9, r5, r8, r9
	mla r9, r4, lr, r9
	ldr r8, [sp, #0x24]
	orr r10, r10, r9, lsl #20
	adds r8, r8, r10
	str r8, [sp, #0xe4]
	umull r10, r9, r5, r12
	ldr r8, [sp, #0x30]
	mov r10, r10, lsr #0xc
	mla r9, r5, r8, r9
	mla r9, r4, r12, r9
	ldr r8, [sp, #0x2c]
	orr r10, r10, r9, lsl #20
	adds r8, r8, r10
	str r8, [sp, #0xe8]
	ldr r8, [sp, #0x38]
	umull r10, r9, r5, r3
	mla r9, r5, r8, r9
	mla r9, r4, r3, r9
	mov r8, r10, lsr #0xc
	ldr r3, [sp, #0x34]
	orr r8, r8, r9, lsl #20
	adds r3, r3, r8
	str r3, [sp, #0xec]
	ldr r3, [sp, #0x40]
	umull r9, r8, r5, r2
	mla r8, r5, r3, r8
	mla r8, r4, r2, r8
	mov r3, r9, lsr #0xc
	ldr r2, [sp, #0x3c]
	orr r3, r3, r8, lsl #20
	adds r2, r2, r3
	str r2, [sp, #0xf0]
	ldr r2, [sp, #0x48]
	umull r8, r3, r5, r1
	mla r3, r5, r2, r3
	mla r3, r4, r1, r3
	mov r2, r8, lsr #0xc
	ldr r1, [sp, #0x44]
	orr r2, r2, r3, lsl #20
	adds r1, r1, r2
	str r1, [sp, #0xf4]
	ldr r1, [sp, #0x50]
	umull r3, r2, r5, r1
	ldr r1, [sp, #0x54]
	mov r3, r3, lsr #0xc
	mla r2, r5, r1, r2
	ldr r1, [sp, #0x50]
	mla r2, r4, r1, r2
	ldr r1, [sp, #0x4c]
	orr r3, r3, r2, lsl #20
	adds r1, r1, r3
	str r1, [sp, #0xf8]
	ldr r1, [sp, #0xa8]
	umull r3, r2, r5, r1
	ldr r1, [sp, #0x5c]
	mov r3, r3, lsr #0xc
	mla r2, r5, r1, r2
	ldr r1, [sp, #0xa8]
	mla r2, r4, r1, r2
	ldr r1, [sp, #0x58]
	orr r3, r3, r2, lsl #20
	adds r1, r1, r3
	str r1, [sp, #0xfc]
	ldr r1, [sp, #0x64]
	umull r3, r2, r5, r0
	mla r2, r5, r1, r2
	mla r2, r4, r0, r2
	mov r1, r3, lsr #0xc
	ldr r0, [sp, #0x60]
	orr r1, r1, r2, lsl #20
	adds r0, r0, r1
	str r0, [sp, #0x100]
lbl_0206d088:
	ldr r0, [sp, #8]
	cmp r0, #0
	bne lbl_0206d0c4
lbl_0206d094:
	mov r0, r7
	bl func_020653a8
	cmp r0, #0
	bne lbl_0206d094
	ldr r0, [sp, #0x14]
	mov r1, #0x54
	mla r0, r11, r1, r0
	ldr r1, =0x04000440
	mov r2, #2
	add r0, r0, #0x30
	str r2, [r1]
	bl func_0206506c
lbl_0206d0c4:
	ldrb r0, [r6, #2]
	ldr r2, [r7]
	ldr r1, [r7, #4]
	mov r5, r0, lsl #4
	ldr r0, [r7, #8]
	ldr r4, [r7, #0x10]
	ldr r3, [r7, #0x14]
	smull r2, r8, r5, r2
	mov r2, r2, lsr #0xc
	orr r2, r2, r8, lsl #20
	smull r1, r8, r5, r1
	mov r1, r1, lsr #0xc
	orr r1, r1, r8, lsl #20
	smull r0, r8, r5, r0
	mov r0, r0, lsr #0xc
	orr r0, r0, r8, lsl #20
	smull r8, r4, r5, r4
	mov r9, r8, lsr #0xc
	orr r9, r9, r4, lsl #20
	smull r4, r3, r5, r3
	mov r8, r4, lsr #0xc
	orr r8, r8, r3, lsl #20
	mov r4, r5, asr #0x1f
	ldr r10, [sp, #0xb0]
	ldr r3, [sp, #0xb4]
	adds r2, r10, r2
	adds r1, r3, r1
	str r2, [sp, #0xb0]
	str r1, [sp, #0xb4]
	ldr r2, [sp, #0xb8]
	ldr r1, [sp, #0xbc]
	adds r2, r2, r0
	adds r0, r1, r9
	str r2, [sp, #0xb8]
	str r0, [sp, #0xbc]
	ldr r0, [sp, #0xc0]
	ldr r2, [sp, #0xc4]
	adds r0, r0, r8
	str r0, [sp, #0xc0]
	ldr r0, [r7, #0x18]
	ldr r3, [sp, #0xc8]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	adds r0, r2, r1
	str r0, [sp, #0xc4]
	ldr r0, [r7, #0x20]
	ldr r2, [sp, #0xcc]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	adds r0, r3, r1
	str r0, [sp, #0xc8]
	ldr r0, [r7, #0x24]
	ldr r3, [sp, #0xd0]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	adds r0, r2, r1
	str r0, [sp, #0xcc]
	ldr r0, [r7, #0x28]
	ldr r2, [sp, #0xd4]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	adds r0, r3, r1
	str r0, [sp, #0xd0]
	ldr r0, [r7, #0x30]
	ldr r3, [sp, #0xd8]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	adds r0, r2, r1
	str r0, [sp, #0xd4]
	ldr r1, [r7, #0x34]
	ldr r0, [r7, #0x38]
	smull r2, r1, r5, r1
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	adds r1, r3, r2
	str r1, [sp, #0xd8]
	smull r1, r0, r5, r0
	mov r1, r1, lsr #0xc
	orr r1, r1, r0, lsl #20
	ldr r0, [sp, #0xdc]
	adds r0, r0, r1
	str r0, [sp, #0xdc]
	ldr r1, =data_0210e5d0
	ldr r0, [sp, #8]
	cmp r0, #0
	add r6, r6, #3
	ldr r0, [sp, #4]
	add r8, r1, r0
	bne lbl_0206d24c
lbl_0206d23c:
	mov r0, r8
	bl func_020653d8
	cmp r0, #0
	bne lbl_0206d23c
lbl_0206d24c:
	ldr r0, [sp, #0xc]
	add r1, r0, #1
	ldr r0, [sp, #0x10]
	str r1, [sp, #0xc]
	cmp r1, r0
	bcc lbl_0206cdf4
lbl_0206d264:
	ldmia r8, {r0, r11}
	ldr r10, [r8, #8]
	ldr r9, [r8, #0xc]
	ldr r7, [r8, #0x10]
	ldr r6, [r8, #0x14]
	ldr r3, [r8, #0x18]
	ldr r2, [r8, #0x1c]
	ldr r1, [r8, #0x20]
	umull r12, r8, r5, r0
	mov lr, r12, lsr #0xc
	ldr r12, [sp, #0xe0]
	str r12, [sp, #0x68]
	mov r12, r0, asr #0x1f
	mla r8, r5, r12, r8
	mla r8, r4, r0, r8
	orr lr, lr, r8, lsl #20
	umull r12, r8, r5, r11
	ldr r0, [sp, #0x68]
	str r12, [sp, #0x6c]
	adds r0, r0, lr
	str r0, [sp, #0xe0]
	mov r0, r11, asr #0x1f
	str r0, [sp, #0xac]
	ldr r12, [sp, #0xac]
	ldr r0, [sp, #0xe8]
	mla r8, r5, r12, r8
	mla r8, r4, r11, r8
	ldr r11, [sp, #0x6c]
	str r0, [sp, #0x70]
	mov r11, r11, lsr #0xc
	mov r0, r10, asr #0x1f
	str r0, [sp, #0x74]
	ldr r0, [sp, #0xec]
	ldr lr, [sp, #0xe4]
	orr r11, r11, r8, lsl #20
	adds r8, lr, r11
	str r8, [sp, #0xe4]
	str r0, [sp, #0x78]
	mov r0, r9, asr #0x1f
	str r0, [sp, #0x7c]
	ldr r0, [sp, #0xf0]
	ldr r8, [sp, #0x74]
	umull r12, r11, r5, r10
	mla r11, r5, r8, r11
	mla r11, r4, r10, r11
	mov r10, r12, lsr #0xc
	str r0, [sp, #0x80]
	mov r0, r7, asr #0x1f
	str r0, [sp, #0x84]
	ldr r0, [sp, #0xf4]
	ldr r8, [sp, #0x70]
	orr r10, r10, r11, lsl #20
	adds r8, r8, r10
	str r8, [sp, #0xe8]
	str r0, [sp, #0x88]
	mov r0, r6, asr #0x1f
	str r0, [sp, #0x8c]
	ldr r0, [sp, #0xf8]
	ldr r8, [sp, #0x7c]
	umull r11, r10, r5, r9
	mla r10, r5, r8, r10
	mla r10, r4, r9, r10
	mov r9, r11, lsr #0xc
	str r0, [sp, #0x90]
	mov r0, r3, asr #0x1f
	str r0, [sp, #0x94]
	ldr r0, [sp, #0xfc]
	ldr r8, [sp, #0x78]
	orr r9, r9, r10, lsl #20
	adds r8, r8, r9
	str r8, [sp, #0xec]
	str r0, [sp, #0x98]
	mov r0, r2, asr #0x1f
	str r0, [sp, #0x9c]
	ldr r0, [sp, #0x100]
	ldr r8, [sp, #0x84]
	umull r10, r9, r5, r7
	mla r9, r5, r8, r9
	mla r9, r4, r7, r9
	mov r8, r10, lsr #0xc
	str r0, [sp, #0xa0]
	mov r0, r1, asr #0x1f
	str r0, [sp, #0xa4]
	ldr r7, [sp, #0x80]
	orr r8, r8, r9, lsl #20
	adds r7, r7, r8
	str r7, [sp, #0xf0]
	ldr r7, [sp, #0x8c]
	umull r9, r8, r5, r6
	mla r8, r5, r7, r8
	mla r8, r4, r6, r8
	mov r7, r9, lsr #0xc
	ldr r6, [sp, #0x88]
	orr r7, r7, r8, lsl #20
	adds r6, r6, r7
	str r6, [sp, #0xf4]
	ldr r6, [sp, #0x94]
	umull r8, r7, r5, r3
	mla r7, r5, r6, r7
	mla r7, r4, r3, r7
	mov r6, r8, lsr #0xc
	ldr r3, [sp, #0x90]
	orr r6, r6, r7, lsl #20
	adds r3, r3, r6
	str r3, [sp, #0xf8]
	ldr r3, [sp, #0x9c]
	umull r7, r6, r5, r2
	mla r6, r5, r3, r6
	mla r6, r4, r2, r6
	mov r3, r7, lsr #0xc
	ldr r2, [sp, #0x98]
	orr r3, r3, r6, lsl #20
	adds r2, r2, r3
	str r2, [sp, #0xfc]
	ldr r2, [sp, #0xa4]
	umull r6, r3, r5, r1
	mla r3, r5, r2, r3
	mla r3, r4, r1, r3
	mov r2, r6, lsr #0xc
	ldr r1, [sp, #0xa0]
	orr r2, r2, r3, lsl #20
	adds r1, r1, r2
	add r0, sp, #0xe0
	str r1, [sp, #0x100]
	bl func_02065034
	ldr r1, =0x04000440
	mov r2, #1
	add r0, sp, #0xb0
	str r2, [r1]
	bl func_02065034
	ldr r1, =0x04000440
	mov r2, #0
	mov r0, #1
	str r2, [r1]
	str r0, [r1, #0x10]
	mov r0, #2
	str r0, [r1]
	ldr r0, [sp]
	ldr r0, [r0]
	ldrb r0, [r0, #1]
	str r0, [r1, #0xc]
	ldr r0, [sp]
	ldr r1, [r0]
	ldrb r0, [r1, #2]
	add r0, r0, #1
	add r0, r0, r0, lsl #1
	add r1, r1, r0
	ldr r0, [sp]
	str r1, [r0]
	add sp, sp, #0x104
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0206d4d0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r0
	ldr r0, [r5, #0x34]
	cmp r0, #0
	ldrneb r4, [r5, #0x96]
	moveq r4, #0
	cmp r4, #1
	bne lbl_0206d524
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x34]
	blx r1
	ldr r0, [r5, #0x34]
	cmp r0, #0
	ldrneb r4, [r5, #0x96]
	ldr r0, [r5, #8]
	moveq r4, #0
	and r1, r0, #0x40
	b lbl_0206d528
lbl_0206d524:
	mov r1, #0
lbl_0206d528:
	ldr r0, [r5, #8]
	tst r0, #0x100
	cmpeq r1, #0
	bne lbl_0206d57c
	ldr r0, [r5]
	ldrb r12, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb lr, [r0, #3]
	ldrb r2, [r0, #5]
	ldrb r1, [r0, #6]
	orr r3, r12, r3, lsl #8
	ldrb r6, [r0, #4]
	orr r12, r3, lr, lsl #16
	ldrb r3, [r0, #7]
	orr r1, r2, r1, lsl #8
	orr r6, r12, r6, lsl #24
	ldrb r2, [r0, #8]
	orr r1, r1, r3, lsl #16
	add r0, r0, r6
	orr r1, r1, r2, lsl #24
	bl func_0206dd80
lbl_0206d57c:
	cmp r4, #3
	bne lbl_0206d59c
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x34]
	blx r1
lbl_0206d59c:
	ldr r0, [r5]
	add r0, r0, #9
	str r0, [r5]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206d5ac(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #0xc
	mov r4, r0
	ldr r0, [r4, #8]
	tst r0, #0x100
	bne lbl_0206d608
	tst r0, #0x200
	bne lbl_0206d608
	cmp r1, #0
	bne lbl_0206d5e8
	ldr r0, [r4, #0xe0]
	str r0, [sp, #8]
	str r0, [sp, #4]
	str r0, [sp]
	b lbl_0206d5f8
lbl_0206d5e8:
	ldr r0, [r4, #0xe4]
	str r0, [sp, #8]
	str r0, [sp, #4]
	str r0, [sp]
lbl_0206d5f8:
	add r1, sp, #0
	mov r0, #0x1b
	mov r2, #3
	bl func_0206de34
lbl_0206d608:
	ldr r0, [r4]
	add r0, r0, #1
	str r0, [r4]
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_0206d61c(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x44
	mov r7, r0
	ldr r0, [r7, #8]
	tst r0, #0x200
	bne lbl_0206d908
	tst r0, #1
	beq lbl_0206d908
	ldr r2, [r7, #0xb0]
	ldr r0, [r2, #0x10]
	and r1, r0, #0xc0000000
	cmp r1, #0x80000000
	beq lbl_0206d688
	bic r0, r0, #0xc0000000
	str r0, [r2, #0x10]
	ldr r3, [r7, #0xb0]
	ldr r0, =data_020c3e5c
	ldr r2, [r3, #0x10]
	ldr r1, =data_020c3e68
	orr r2, r2, #0x80000000
	str r2, [r3, #0x10]
	ldr r3, [r7, #0xb0]
	mov r2, #1
	ldr r3, [r3, #0x10]
	str r3, [r0, #0xc]
	ldr r0, [r0, #8]
	bl func_0206de34
lbl_0206d688:
	mov r0, #3
	str r0, [sp, #0x10]
	add r1, sp, #0x10
	mov r0, #0x10
	mov r2, #1
	bl func_0206de34
	ldr r0, [r7, #0x3c]
	cmp r0, #0
	ldrneb r6, [r7, #0x98]
	moveq r6, #0
	cmp r6, #1
	bne lbl_0206d6ec
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x3c]
	blx r1
	ldr r0, [r7, #0x3c]
	cmp r0, #0
	ldrneb r6, [r7, #0x98]
	ldr r0, [r7, #8]
	moveq r6, #0
	and r0, r0, #0x40
	b lbl_0206d6f0
lbl_0206d6ec:
	mov r0, #0
lbl_0206d6f0:
	cmp r0, #0
	bne lbl_0206d768
	ldr r0, [r7, #0xb0]
	add r1, sp, #0x14
	ldrh r5, [r0, #0x2e]
	ldrh r4, [r0, #0x2c]
	mov r3, #0x10000
	rsb r0, r5, #0
	mov r12, r0, lsl #0xf
	mov lr, r4, lsl #0xf
	mov r0, #0x1b
	mov r2, #3
	str lr, [sp, #0x14]
	str r12, [sp, #0x18]
	str r3, [sp, #0x1c]
	bl func_0206de34
	mov r0, r5, lsl #0x13
	mov r1, r0, asr #0x10
	mov r0, r4, lsl #0x13
	mov r1, r1, lsl #0x10
	mov r0, r0, asr #0x10
	mov r1, r1, lsr #0x10
	mov r0, r0, lsl #0x10
	mov r1, r1, lsl #0x10
	orr r3, r1, r0, lsr #16
	add r1, sp, #0xc
	mov r0, #0x22
	mov r2, #1
	str r3, [sp, #0xc]
	bl func_0206de34
lbl_0206d768:
	cmp r6, #2
	bne lbl_0206d7a4
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x3c]
	blx r1
	ldr r0, [r7, #0x3c]
	cmp r0, #0
	ldrneb r6, [r7, #0x98]
	ldr r0, [r7, #8]
	moveq r6, #0
	and r0, r0, #0x40
	b lbl_0206d7a8
lbl_0206d7a4:
	mov r0, #0
lbl_0206d7a8:
	cmp r0, #0
	bne lbl_0206d80c
	ldr r4, [r7, #0xd8]
	ldr r0, [r7]
	ldrh r2, [r4, #0xa]
	add r3, r4, #4
	ldrb r0, [r0, #1]
	ldrh r1, [r3, r2]
	add r2, r3, r2
	mla r0, r1, r0, r2
	ldr r0, [r0, #4]
	add r0, r4, r0
	ldrh r2, [r0, #0x1e]
	tst r2, #0x2000
	beq lbl_0206d80c
	add r1, r0, #0x2c
	tst r2, #2
	addeq r1, r1, #8
	tst r2, #4
	addeq r1, r1, #4
	tst r2, #8
	addeq r1, r1, #8
	mov r0, #0x18
	mov r2, #0x10
	bl func_0206de34
lbl_0206d80c:
	cmp r6, #3
	movne r0, #0
	bne lbl_0206d838
	ldr r1, [r7, #8]
	mov r0, r7
	bic r1, r1, #0x40
	str r1, [r7, #8]
	ldr r1, [r7, #0x3c]
	blx r1
	ldr r0, [r7, #8]
	and r0, r0, #0x40
lbl_0206d838:
	cmp r0, #0
	bne lbl_0206d8f0
	mov r3, #2
	add r1, sp, #8
	mov r0, #0x10
	mov r2, #1
	str r3, [sp, #8]
	bl func_0206de34
	add r1, sp, #0x20
	mov r0, #0
	bl func_0206df18
	mov r3, #3
	add r1, sp, #4
	mov r0, #0x10
	mov r2, #1
	str r3, [sp, #4]
	bl func_0206de34
	ldr r0, =data_0210cf28
	mov r2, #9
	ldr r0, [r0, #0xfc]
	tst r0, #1
	beq lbl_0206d8c0
	ldr r1, =data_0210cf74
	mov r0, #0x1a
	bl func_0206de34
	ldr r1, =data_0210cfe4
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
	add r1, sp, #0x20
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
	b lbl_0206d8f0
lbl_0206d8c0:
	tst r0, #2
	mov r0, #0x1a
	beq lbl_0206d8e8
	ldr r1, =data_0210cf74
	bl func_0206de34
	add r1, sp, #0x20
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
	b lbl_0206d8f0
lbl_0206d8e8:
	add r1, sp, #0x20
	bl func_0206de34
lbl_0206d8f0:
	mov r3, #2
	add r1, sp, #0
	mov r0, #0x10
	mov r2, #1
	str r3, [sp]
	bl func_0206de34
lbl_0206d908:
	ldr r0, [r7]
	add r0, r0, #3
	str r0, [r7]
	add sp, sp, #0x44
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_0206d930(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x80
	mov r5, r0
	ldr r0, [r5, #8]
	tst r0, #0x200
	bne lbl_0206dc7c
	tst r0, #1
	beq lbl_0206dc7c
	add r0, sp, #0x50
	mov r1, #0
	bl func_0206df18
	mov r0, #0x1e
	str r0, [sp, #0xc]
	add r1, sp, #0xc
	mov r0, #0x13
	mov r2, #1
	bl func_0206de34
	ldr r2, [r5, #0xb0]
	ldr r0, [r2, #0x10]
	and r1, r0, #0xc0000000
	cmp r1, #0xc0000000
	beq lbl_0206d9c0
	bic r0, r0, #0xc0000000
	str r0, [r2, #0x10]
	ldr r3, [r5, #0xb0]
	ldr r0, =data_020c3e5c
	ldr r2, [r3, #0x10]
	ldr r1, =data_020c3e60
	orr r2, r2, #0xc0000000
	str r2, [r3, #0x10]
	ldr r3, [r5, #0xb0]
	mov r2, #1
	ldr r3, [r3, #0x10]
	str r3, [r0, #4]
	ldr r0, [r0]
	bl func_0206de34
lbl_0206d9c0:
	ldr r0, [r5, #0x40]
	cmp r0, #0
	ldrneb r4, [r5, #0x99]
	moveq r4, #0
	cmp r4, #1
	bne lbl_0206da0c
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x40]
	blx r1
	ldr r0, [r5, #0x40]
	cmp r0, #0
	ldrneb r4, [r5, #0x99]
	ldr r0, [r5, #8]
	moveq r4, #0
	and r0, r0, #0x40
	b lbl_0206da10
lbl_0206da0c:
	mov r0, #0
lbl_0206da10:
	cmp r0, #0
	bne lbl_0206da58
	ldr r0, [r5, #0xb0]
	ldr r3, =data_020c3e5c
	ldrh r12, [r0, #0x2e]
	ldrh r2, [r0, #0x2c]
	ldr r1, =data_020c3e8c
	rsb r0, r12, #0
	mov r2, r2, lsl #0xf
	str r2, [r3, #0x30]
	mov r0, r0, lsl #0xf
	str r0, [r3, #0x44]
	str r2, [r3, #0x60]
	mov r12, r12, lsl #0xf
	mov r0, #0x16
	mov r2, #0x10
	str r12, [r3, #0x64]
	bl func_0206de34
lbl_0206da58:
	cmp r4, #2
	bne lbl_0206da94
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x40]
	blx r1
	ldr r0, [r5, #0x40]
	cmp r0, #0
	ldrneb r4, [r5, #0x99]
	ldr r0, [r5, #8]
	moveq r4, #0
	and r0, r0, #0x40
	b lbl_0206da98
lbl_0206da94:
	mov r0, #0
lbl_0206da98:
	cmp r0, #0
	bne lbl_0206dafc
	ldr r12, [r5, #0xd8]
	ldr r0, [r5]
	ldrh r2, [r12, #0xa]
	add r3, r12, #4
	ldrb r0, [r0, #1]
	ldrh r1, [r3, r2]
	add r2, r3, r2
	mla r0, r1, r0, r2
	ldr r0, [r0, #4]
	add r0, r12, r0
	ldrh r2, [r0, #0x1e]
	tst r2, #0x2000
	beq lbl_0206dafc
	add r1, r0, #0x2c
	tst r2, #2
	addeq r1, r1, #8
	tst r2, #4
	addeq r1, r1, #4
	tst r2, #8
	addeq r1, r1, #8
	mov r0, #0x18
	mov r2, #0x10
	bl func_0206de34
lbl_0206dafc:
	cmp r4, #3
	movne r0, #0
	bne lbl_0206db28
	ldr r1, [r5, #8]
	mov r0, r5
	bic r1, r1, #0x40
	str r1, [r5, #8]
	ldr r1, [r5, #0x40]
	blx r1
	ldr r0, [r5, #8]
	and r0, r0, #0x40
lbl_0206db28:
	cmp r0, #0
	bne lbl_0206dc4c
	ldr r0, =data_0210cf28
	ldr r0, [r0, #0xfc]
	tst r0, #1
	beq lbl_0206db74
	ldr r1, =data_0210d008
	mov r0, #0x1c
	mov r2, #3
	bl func_0206de34
	ldr r1, =data_0210cfe4
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
	add r1, sp, #0x50
	mov r0, #0x19
	mov r2, #0xc
	bl func_0206de34
	b lbl_0206dbb4
lbl_0206db74:
	tst r0, #2
	beq lbl_0206db90
	add r1, sp, #0x50
	mov r0, #0x19
	mov r2, #0xc
	bl func_0206de34
	b lbl_0206dbb4
lbl_0206db90:
	bl func_0206aed4
	mov r1, r0
	mov r0, #0x19
	mov r2, #0xc
	bl func_0206de34
	add r1, sp, #0x50
	mov r0, #0x19
	mov r2, #0xc
	bl func_0206de34
lbl_0206dbb4:
	bl func_0206dcf0
	ldr r0, =0x04000440
	mov r1, #0
	str r1, [r0]
	str r1, [r0, #4]
	str r1, [r0, #0x14]
	add r4, sp, #0x10
lbl_0206dbd0:
	mov r0, r4
	bl func_020653a8
	cmp r0, #0
	bne lbl_0206dbd0
	ldr r2, =0x04000448
	mov r0, #1
	str r0, [r2]
	mov r0, #3
	str r0, [r2, #-8]
	add r1, sp, #0x10
	mov r0, #0x16
	mov r2, #0x10
	bl func_0206de34
	ldr r0, [sp, #0x44]
	ldr r1, [sp, #0x40]
	mov r0, r0, asr #4
	mov r0, r0, lsl #8
	mov r2, r1, asr #4
	mov r1, r0, asr #0x10
	mov r0, r2, lsl #8
	mov r1, r1, lsl #0x10
	mov r0, r0, asr #0x10
	mov r1, r1, lsr #0x10
	mov r0, r0, lsl #0x10
	mov r1, r1, lsl #0x10
	orr r3, r1, r0, lsr #16
	add r1, sp, #8
	mov r0, #0x22
	mov r2, #1
	str r3, [sp, #8]
	bl func_0206de34
lbl_0206dc4c:
	mov r3, #2
	add r1, sp, #4
	mov r0, #0x10
	mov r2, #1
	str r3, [sp, #4]
	bl func_0206de34
	mov r3, #0x1e
	add r1, sp, #0
	mov r0, #0x14
	mov r2, #1
	str r3, [sp]
	bl func_0206de34
lbl_0206dc7c:
	ldr r0, [r5]
	add r0, r0, #3
	str r0, [r5]
	add sp, sp, #0x80
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206dcb0(void)
{
	ldr r1, =data_0210fe90
	ldr r2, [r1]
	cmp r2, #0
	moveq r2, #0
	streq r2, [r0]
	streq r0, [r1]
	bx lr
}

extern "C" asm void func_0206dcd0(void)
{
	stmdb sp!, {r3, lr}
	bl func_0206dcf0
	ldr r1, =data_0210fe90
	mov r2, #0
	ldr r0, [r1]
	str r2, [r1]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206dcf0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_0210fe90
	ldr r0, [r0, #4]
	cmp r0, #0
	beq lbl_0206dd08
	bl func_0206dd4c
lbl_0206dd08:
	ldr r0, =data_0210fe90
	ldr r0, [r0]
	cmp r0, #0
	ldrne r2, [r0]
	cmpne r2, #0
	ldmeqia sp!, {r3, pc}
	ldr r1, =0x04000400
	add r0, r0, #4
	mov r2, r2, lsl #2
	bl func_02067888
	ldr r0, =data_0210fe90
	mov r1, #0
	ldr r0, [r0]
	str r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206dd4c(void)
{
	ldr r0, =data_0210fe90
lbl_0206dd50:
	ldr r1, [r0, #4]
	cmp r1, #0
	bne lbl_0206dd50
	bx lr
}

extern "C" asm void func_0206dd64(void)
{
	mov r1, #0
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0206dd70(void)
{
	ldr r1, =data_0210fe90
	str r0, [r1, #8]
	bx lr
}

extern "C" asm void func_0206dd80(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	cmp r4, #0x100
	bcc lbl_0206dda8
	ldr r1, =data_020c3dbc
	mvn r0, #0
	ldr r1, [r1]
	cmp r1, r0
	bne lbl_0206ddc0
lbl_0206dda8:
	mov r2, r4, lsr #2
	ldr r0, [r5]
	add r1, r5, #4
	sub r2, r2, #1
	bl func_0206de34
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206ddc0:
	bl func_0206dcf0
	ldr r0, =data_0210fe90
	mov r1, #1
	str r1, [r0, #4]
	ldr r0, [r0, #8]
	cmp r0, #0
	beq lbl_0206de00
	ldr r1, =data_0210fe94
	ldr r0, =data_020c3dbc
	str r1, [sp]
	ldr r0, [r0]
	ldr r3, =func_0206dd64
	mov r1, r5
	mov r2, r4
	bl func_02067744
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206de00:
	ldr r1, =data_0210fe94
	ldr r0, =data_020c3dbc
	str r1, [sp]
	ldr r0, [r0]
	ldr r3, =func_0206dd64
	mov r1, r5
	mov r2, r4
	bl func_02067540
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206de34(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r3, =data_0210fe90
	mov r6, r0
	ldr r12, [r3]
	mov r5, r1
	mov r4, r2
	cmp r12, #0
	beq lbl_0206dee8
	ldr r0, [r3, #4]
	cmp r0, #0
	beq lbl_0206debc
	ldr r2, [r12]
	add r0, r2, #1
	add r1, r0, r4
	cmp r1, #0xc0
	bhi lbl_0206debc
	str r0, [r12]
	ldr r0, [r3]
	cmp r4, #0
	add r0, r0, r2, lsl #2
	str r6, [r0, #4]
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r2, [r3]
	mov r0, r5
	ldr r1, [r2], #4
	add r1, r2, r1, lsl #2
	mov r2, r4, lsl #2
	bl func_020678ec
	ldr r0, =data_0210fe90
	ldr r1, [r0]
	ldr r0, [r1]
	add r0, r0, r4
	str r0, [r1]
	ldmia sp!, {r4, r5, r6, pc}
lbl_0206debc:
	ldr r0, [r12]
	cmp r0, #0
	beq lbl_0206ded0
	bl func_0206dcf0
	b lbl_0206def8
lbl_0206ded0:
	ldr r0, =data_0210fe90
	ldr r0, [r0, #4]
	cmp r0, #0
	beq lbl_0206def8
	bl func_0206dd4c
	b lbl_0206def8
lbl_0206dee8:
	ldr r0, [r3, #4]
	cmp r0, #0
	beq lbl_0206def8
	bl func_0206dd4c
lbl_0206def8:
	ldr r1, =0x04000400
	mov r0, r5
	mov r2, r4, lsl #2
	str r6, [r1]
	bl func_02067888
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206df18(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x40
	mov r6, r0
	mov r5, r1
	bl func_0206dcf0
	ldr r0, =0x04000440
	mov r1, #0
	str r1, [r0]
	str r1, [r0, #4]
	str r1, [r0, #0x14]
	cmp r6, #0
	beq lbl_0206df68
	add r4, sp, #0
lbl_0206df4c:
	mov r0, r4
	bl func_020653a8
	cmp r0, #0
	bne lbl_0206df4c
	add r0, sp, #0
	mov r1, r6
	bl func_0206276c
lbl_0206df68:
	cmp r5, #0
	beq lbl_0206df80
lbl_0206df70:
	mov r0, r5
	bl func_020653d8
	cmp r0, #0
	bne lbl_0206df70
lbl_0206df80:
	ldr r1, =0x04000448
	mov r0, #1
	str r0, [r1]
	mov r0, #2
	str r0, [r1, #-8]
	add sp, sp, #0x40
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206dfa4(void)
{
	stmdb sp!, {r3, lr}
	bl func_02065088
	bl func_0206ac78
	ldr r1, =0x04000600
	ldr r0, [r1]
	bic r0, r0, #0xc0000000
	orr r0, r0, #0x80000000
	str r0, [r1]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206dfcc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x1c
	mov r5, r1
	mov r4, r2
	ldr r6, =data_0210cf30
	ldr r1, =data_0210cf74
	add r2, sp, #0x10
	bl func_020626a0
	ldr r1, [sp, #0x14]
	ldr r0, [r6, #0x1c]
	ldr r2, [sp, #0x10]
	smull r8, r7, r1, r0
	ldr r0, [r6, #0xc]
	ldr r3, [sp, #0x18]
	smlal r8, r7, r2, r0
	ldr r1, [r6, #0x2c]
	ldr r0, [r6, #0x3c]
	smlal r8, r7, r3, r1
	mov r1, r8, lsr #0xc
	orr r1, r1, r7, lsl #20
	add r0, r1, r0
	bl func_02062ee0
	ldr r2, [sp, #0x14]
	ldr r1, [r6, #0x10]
	ldr r0, [r6, #0x14]
	smull r9, r8, r2, r1
	smull lr, r12, r2, r0
	ldr r1, [sp, #0x10]
	ldr r3, [r6]
	ldr r0, [sp, #0x18]
	smlal r9, r8, r1, r3
	ldr r7, [r6, #0x20]
	ldr r2, [r6, #0x30]
	smlal r9, r8, r0, r7
	mov r3, r9, lsr #0xc
	orr r3, r3, r8, lsl #20
	add r7, r3, r2
	ldr r3, [r6, #4]
	ldr r8, [r6, #0x24]
	smlal lr, r12, r1, r3
	smlal lr, r12, r0, r8
	mov r0, lr, lsr #0xc
	ldr r2, [r6, #0x34]
	orr r0, r0, r12, lsl #20
	add r8, r0, r2
	bl func_02062e84
	umull lr, r12, r0, r7
	mov r2, r7, asr #0x1f
	mla r12, r0, r2, r12
	mla r12, r1, r7, r12
	adds lr, lr, #0x80000000
	adc r2, r12, #0
	add r2, r2, #0x1000
	add r2, r2, r2, lsr #31
	mov r7, r2, asr #1
	mov r3, r8, asr #0x1f
	umull r12, r2, r0, r8
	mla r2, r0, r3, r2
	mla r2, r1, r8, r2
	adds r0, r12, #0x80000000
	adc r0, r2, #0
	add r0, r0, #0x1000
	add r0, r0, r0, lsr #31
	mov r8, r0, asr #1
	cmp r7, #0
	mov r6, #0
	cmpge r8, #0
	blt lbl_0206e0e8
	cmp r7, #0x1000
	cmple r8, #0x1000
	ble lbl_0206e0ec
lbl_0206e0e8:
	mvn r6, #0
lbl_0206e0ec:
	add r0, sp, #0xc
	add r1, sp, #8
	add r2, sp, #4
	add r3, sp, #0
	bl func_0206b294
	ldr r2, [sp, #0xc]
	ldr r0, [sp, #4]
	ldr r12, [sp]
	sub r0, r0, r2
	mul r0, r7, r0
	add r1, r0, #0x800
	ldr r3, [sp, #8]
	add r1, r2, r1, asr #12
	sub r0, r12, r3
	mul r0, r8, r0
	str r1, [r5]
	ldr r1, [sp, #8]
	add r0, r0, #0x800
	rsb r1, r1, #0xbf
	sub r1, r1, r0, asr #12
	mov r0, r6
	str r1, [r4]
	add sp, sp, #0x1c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0206e154(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x24
	mov r7, r0
	mov r6, r1
	mov r11, r2
	mov r4, r3
	add r0, sp, #0x20
	add r1, sp, #0x1c
	add r2, sp, #0x18
	add r3, sp, #0x14
	bl func_0206b294
	ldr r1, [sp, #0x14]
	ldr r0, [sp, #0x1c]
	ldr r2, [sp, #0x20]
	sub r5, r1, r0
	ldr r1, [sp, #0x18]
	sub r0, r7, r2
	sub r1, r1, r2
	mov r0, r0, lsl #0xc
	mov r1, r1, lsl #0xc
	bl func_02062e04
	rsb r1, r5, #0
	mov r5, r0
	ldr r0, [sp, #0x1c]
	mov r1, r1, lsl #0xc
	add r0, r6, r0
	sub r0, r0, #0xbf
	mov r0, r0, lsl #0xc
	bl func_02062e04
	cmp r5, #0
	cmpge r0, #0
	blt lbl_0206e1e0
	cmp r5, #0x1000
	cmple r0, #0x1000
	ble lbl_0206e1ec
lbl_0206e1e0:
	mvn r1, #0
	str r1, [sp, #0x10]
	b lbl_0206e1f4
lbl_0206e1ec:
	mov r1, #0
	str r1, [sp, #0x10]
lbl_0206e1f4:
	sub r1, r5, #0x800
	sub r0, r0, #0x800
	mov r8, r1, lsl #1
	mov r10, r0, lsl #1
	bl func_0206b22c
	mov r5, r0
	ldr r0, [r5, #0x1c]
	ldr r1, [r5, #0xc]
	smull r2, r0, r10, r0
	smlal r2, r0, r8, r1
	mov r2, r2, lsr #0xc
	orr r2, r2, r0, lsl #20
	ldr r0, [r5, #0x3c]
	ldr r1, [r5, #0x2c]
	add r0, r0, r2
	str r0, [sp, #0xc]
	sub r0, r0, r1
	bl func_02062ee0
	ldr r0, [r5, #0x10]
	ldr r2, [r5]
	smull r3, r0, r10, r0
	smlal r3, r0, r8, r2
	mov r2, r3, lsr #0xc
	orr r2, r2, r0, lsl #20
	ldr r6, [r5, #0x30]
	ldr r3, [r5, #4]
	add r6, r6, r2
	ldr r2, [r5, #0x14]
	ldr r1, [r5, #0x34]
	smull r7, r2, r10, r2
	smlal r7, r2, r8, r3
	mov r3, r7, lsr #0xc
	orr r3, r3, r2, lsl #20
	add r7, r1, r3
	ldr r1, [r5, #0x18]
	ldr r2, [r5, #8]
	smull r3, r1, r10, r1
	smlal r3, r1, r8, r2
	mov r2, r3, lsr #0xc
	ldr r0, [r5, #0x38]
	orr r2, r2, r1, lsl #20
	cmp r4, #0
	add r8, r0, r2
	beq lbl_0206e2d4
	ldr r0, [r5, #0x20]
	ldr r3, [r5, #0x24]
	add r0, r6, r0
	str r0, [sp, #4]
	add r0, r7, r3
	str r0, [sp]
	ldr r2, [r5, #0x28]
	ldr r1, [r5, #0x2c]
	ldr r0, [sp, #0xc]
	add r9, r8, r2
	add r0, r0, r1
	str r0, [sp, #8]
lbl_0206e2d4:
	ldr r2, [r5, #0x20]
	ldr r1, [r5, #0x24]
	ldr r0, [r5, #0x28]
	sub r6, r6, r2
	sub r7, r7, r1
	sub r8, r8, r0
	bl func_02062e84
	mov r5, r0
	mov r10, r1
	cmp r4, #0
	beq lbl_0206e308
	ldr r0, [sp, #8]
	bl func_02062ee0
lbl_0206e308:
	mov r0, r6, asr #0x1f
	umull r2, r1, r5, r6
	adds r2, r2, #0x80000000
	mla r1, r5, r0, r1
	mla r1, r10, r6, r1
	adc r2, r1, #0
	umull r0, r1, r5, r7
	str r2, [r11]
	adds r0, r0, #0x80000000
	mov r0, r7, asr #0x1f
	mla r1, r5, r0, r1
	mla r1, r10, r7, r1
	adc r0, r1, #0
	str r0, [r11, #4]
	umull r0, r1, r5, r8
	adds r0, r0, #0x80000000
	mov r0, r8, asr #0x1f
	mla r1, r5, r0, r1
	mla r1, r10, r8, r1
	adc r0, r1, #0
	str r0, [r11, #8]
	cmp r4, #0
	beq lbl_0206e3cc
	bl func_02062e84
	ldr r2, [sp, #4]
	umull r6, r5, r0, r2
	mov r2, r2, asr #0x1f
	mla r5, r0, r2, r5
	ldr r2, [sp]
	adds r6, r6, #0x80000000
	mov r7, r2, asr #0x1f
	umull r3, r2, r0, r2
	mla r2, r0, r7, r2
	mov r7, r9, asr #0x1f
	umull r8, r6, r0, r9
	mla r6, r0, r7, r6
	ldr r0, [sp, #4]
	mla r6, r1, r9, r6
	mla r5, r1, r0, r5
	adc r0, r5, #0
	str r0, [r4]
	ldr r0, [sp]
	mla r2, r1, r0, r2
	adds r0, r3, #0x80000000
	adc r2, r2, #0
	adds r0, r8, #0x80000000
	str r2, [r4, #4]
	adc r0, r6, #0
	str r0, [r4, #8]
lbl_0206e3cc:
	ldr r0, [sp, #0x10]
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0206e3d8(void)
{
	ldr r12, =func_02068a1c
	mov r1, #0x54
	bx r12
}

extern "C" asm void func_0206e3e8(void)
{
	ldr r12, =func_02068a30
	bx r12
}

extern "C" asm void func_0206e3f4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	mov r0, r1
	mov r1, r2
	bl func_0206a26c
	mov r1, r0
	mov r0, r4
	bl func_02068a1c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206e418(void)
{
	ldr r12, =func_02068a30
	bx r12
}

extern "C" asm void func_0206e424(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldrb r3, [r0, #0x18]
	ldr r4, [r0, #8]
	mov r12, #0
	cmp r3, #0
	add lr, r0, r4
	ldmlsia sp!, {r4, r5, r6, pc}
	mvn r4, r2
	add r0, lr, #4
lbl_0206e448:
	ldrh r5, [lr, #0xa]
	cmp r1, #0
	ldrh r6, [r0, r5]
	add r5, r0, r5
	mla r5, r6, r12, r5
	ldr r5, [r5, #4]
	add r12, r12, #1
	add r6, lr, r5
	ldrh r5, [r6, #0x1e]
	orrne r5, r5, r2
	andeq r5, r5, r4
	strh r5, [r6, #0x1e]
	cmp r12, r3
	bcc lbl_0206e448
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206e484(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldrb r3, [r0, #0x18]
	ldr r4, [r0, #8]
	mov r12, #0
	cmp r3, #0
	add lr, r0, r4
	ldmlsia sp!, {r4, r5, r6, pc}
	mvn r4, r2
	add r0, lr, #4
lbl_0206e4a8:
	ldrh r5, [lr, #0xa]
	cmp r1, #0
	ldrh r6, [r0, r5]
	add r5, r0, r5
	mla r5, r6, r12, r5
	ldr r5, [r5, #4]
	add r12, r12, #1
	add r6, lr, r5
	ldr r5, [r6, #0x10]
	orrne r5, r5, r2
	andeq r5, r5, r4
	str r5, [r6, #0x10]
	cmp r12, r3
	bcc lbl_0206e4a8
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206e4e4(void)
{
	stmdb sp!, {r4, lr}
	ldr r12, [r0, #8]
	mov r3, #0x8000
	add r4, r0, r12
	ldrh r0, [r4, #0xa]
	add lr, r4, #4
	rsb r3, r3, #0
	ldrh r12, [lr, r0]
	add r0, lr, r0
	mla r0, r12, r1, r0
	ldr r0, [r0, #4]
	add r1, r4, r0
	ldr r0, [r1, #4]
	and r0, r0, r3
	orr r0, r0, r2
	str r0, [r1, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206e528(void)
{
	stmdb sp!, {r4, lr}
	ldr r12, [r0, #8]
	ldr r3, =0x8000FFFF
	add r4, r0, r12
	ldrh r0, [r4, #0xa]
	add lr, r4, #4
	ldrh r12, [lr, r0]
	add r0, lr, r0
	mla r0, r12, r1, r0
	ldr r0, [r0, #4]
	add r1, r4, r0
	ldr r0, [r1, #4]
	and r0, r0, r3
	orr r0, r0, r2, lsl #16
	str r0, [r1, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206e56c(void)
{
	stmdb sp!, {r4, lr}
	ldr r12, [r0, #8]
	mov r3, #0x8000
	add r4, r0, r12
	ldrh r0, [r4, #0xa]
	add lr, r4, #4
	rsb r3, r3, #0
	ldrh r12, [lr, r0]
	add r0, lr, r0
	mla r0, r12, r1, r0
	ldr r0, [r0, #4]
	add r1, r4, r0
	ldr r0, [r1, #8]
	and r0, r0, r3
	orr r0, r0, r2
	str r0, [r1, #8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206e5b0(void)
{
	stmdb sp!, {r4, lr}
	ldr r12, [r0, #8]
	ldr r3, =0x8000FFFF
	add r4, r0, r12
	ldrh r0, [r4, #0xa]
	add lr, r4, #4
	ldrh r12, [lr, r0]
	add r0, lr, r0
	mla r0, r12, r1, r0
	ldr r0, [r0, #4]
	add r1, r4, r0
	ldr r0, [r1, #8]
	and r0, r0, r3
	orr r0, r0, r2, lsl #16
	str r0, [r1, #8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206e5f4(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, [r0, #8]
	add lr, r0, r3
	ldrh r0, [lr, #0xa]
	add r12, lr, #4
	ldrh r3, [r12, r0]
	add r0, r12, r0
	mla r0, r3, r1, r0
	ldr r0, [r0, #4]
	add r1, lr, r0
	ldr r0, [r1, #0xc]
	bic r0, r0, #0x1f0000
	orr r0, r0, r2, lsl #16
	str r0, [r1, #0xc]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206e630(void)
{
	ldr r2, [r0, #8]
	add r12, r0, r2
	ldrh r0, [r12, #0xa]
	add r3, r12, #4
	ldrh r2, [r3, r0]
	add r0, r3, r0
	mla r0, r2, r1, r0
	ldr r0, [r0, #4]
	add r0, r12, r0
	ldr r0, [r0, #0xc]
	and r0, r0, #0x1f0000
	mov r0, r0, lsr #0x10
	bx lr
}

extern "C" asm void func_0206e664(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldrb r2, [r0, #1]
	cmp r2, #0x10
	bcs lbl_0206e6f0
	cmp r2, #0
	ldmia r1, {r2, r3, r12, lr}
	mov r1, #0
	bls lbl_0206e798
	ldrh r5, [r0, #6]
	mov r4, r1
	add r5, r0, r5
lbl_0206e690:
	ldrh r6, [r5, #2]
	add r7, r5, r6
	ldr r6, [r7, r4]
	add r7, r7, r4
	cmp r6, r2
	ldreq r6, [r7, #4]
	cmpeq r6, r3
	ldreq r6, [r7, #8]
	cmpeq r6, r12
	ldreq r6, [r7, #0xc]
	cmpeq r6, lr
	bne lbl_0206e6d8
	ldrh r3, [r0, #6]
	ldrh r2, [r0, r3]
	add r0, r0, r3
	add r0, r0, #4
	mla r0, r2, r1, r0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206e6d8:
	ldrb r6, [r0, #1]
	add r1, r1, #1
	add r4, r4, #0x10
	cmp r1, r6
	bcc lbl_0206e690
	b lbl_0206e798
lbl_0206e6f0:
	add r4, r0, #8
	ldrb r3, [r4, #1]
	cmp r3, #0
	beq lbl_0206e798
	ldrb r6, [r4, r3, lsl #2]
	ldrb r2, [r4]
	add r5, r4, r3, lsl #2
	cmp r2, r6
	bls lbl_0206e744
lbl_0206e714:
	mov r2, r6, asr #5
	ldr r3, [r1, r2, lsl #2]
	and r2, r6, #0x1f
	mov r2, r3, lsr r2
	and r2, r2, #1
	add r2, r5, r2
	ldrb r3, [r2, #1]
	ldrb r2, [r5]
	ldrb r6, [r4, r3, lsl #2]
	add r5, r4, r3, lsl #2
	cmp r2, r6
	bhi lbl_0206e714
lbl_0206e744:
	ldrh r4, [r0, #6]
	ldrb r2, [r5, #3]
	ldr r3, [r1]
	add r0, r0, r4
	ldrh r4, [r0, #2]
	add r5, r0, r4
	ldr r4, [r5, r2, lsl #4]
	add r5, r5, r2, lsl #4
	cmp r4, r3
	ldreq r4, [r5, #4]
	ldreq r3, [r1, #4]
	cmpeq r4, r3
	ldreq r4, [r5, #8]
	ldreq r3, [r1, #8]
	cmpeq r4, r3
	ldreq r3, [r5, #0xc]
	ldreq r1, [r1, #0xc]
	cmpeq r3, r1
	ldreqh r1, [r0], #4
	mlaeq r0, r1, r2, r0
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206e798:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0206e7a0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldrb r2, [r0, #1]
	cmp r2, #0x10
	bcs lbl_0206e818
	cmp r2, #0
	ldmia r1, {r2, r3, r12, lr}
	mov r1, #0
	bls lbl_0206e8b8
	ldrh r5, [r0, #6]
	mov r4, r1
	add r5, r0, r5
lbl_0206e7cc:
	ldrh r6, [r5, #2]
	add r7, r5, r6
	ldr r6, [r7, r4]
	add r7, r7, r4
	cmp r6, r2
	ldreq r6, [r7, #4]
	cmpeq r6, r3
	ldreq r6, [r7, #8]
	cmpeq r6, r12
	ldreq r6, [r7, #0xc]
	cmpeq r6, lr
	moveq r0, r1
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	ldrb r6, [r0, #1]
	add r1, r1, #1
	add r4, r4, #0x10
	cmp r1, r6
	bcc lbl_0206e7cc
	b lbl_0206e8b8
lbl_0206e818:
	add r5, r0, #8
	ldrb r2, [r5, #1]
	cmp r2, #0
	beq lbl_0206e8b8
	ldrb r6, [r5, r2, lsl #2]
	ldrb r3, [r5]
	add r2, r5, r2, lsl #2
	cmp r3, r6
	bls lbl_0206e86c
lbl_0206e83c:
	mov r3, r6, asr #5
	ldr r4, [r1, r3, lsl #2]
	and r3, r6, #0x1f
	mov r3, r4, lsr r3
	and r3, r3, #1
	add r3, r2, r3
	ldrb r4, [r3, #1]
	ldrb r3, [r2]
	ldrb r6, [r5, r4, lsl #2]
	add r2, r5, r4, lsl #2
	cmp r3, r6
	bhi lbl_0206e83c
lbl_0206e86c:
	ldrh r4, [r0, #6]
	ldr r3, [r1]
	add r5, r0, r4
	ldrh r4, [r5, #2]
	ldrb r0, [r2, #3]
	add r4, r5, r4
	ldr r2, [r4, r0, lsl #4]
	add r4, r4, r0, lsl #4
	cmp r2, r3
	ldreq r3, [r4, #4]
	ldreq r2, [r1, #4]
	cmpeq r3, r2
	ldreq r3, [r4, #8]
	ldreq r2, [r1, #8]
	cmpeq r3, r2
	ldreq r2, [r4, #0xc]
	ldreq r1, [r1, #0xc]
	cmpeq r2, r1
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206e8b8:
	mvn r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0206e8c0(void)
{
	ldrh r1, [r0, #0xc]
	ldr r1, [r0, r1]
	add r0, r0, r1
	bx lr
}

extern "C" asm void func_0206e8d0(void)
{
	ldrh r2, [r0, #0xc]
	ldrh r1, [r0, #0xe]
	add r3, r0, r2
	cmp r1, #1
	bne lbl_0206e900
	ldr r2, [r0]
	ldr r1, =0x30585442
	cmp r2, r1
	ldreq r1, [r3]
	addeq r0, r0, r1
	movne r0, #0
	bx lr
lbl_0206e900:
	ldr r1, [r3, #4]
	add r0, r0, r1
	bx lr
}

extern "C" asm void func_0206e910(void)
{
	ldrh r2, [r0, #0xc]
	ldr r2, [r0, r2]
	add r12, r0, r2
	ldrh r2, [r12, #0xe]
	add r3, r12, #8
	ldrh r0, [r3, r2]
	add r2, r3, r2
	add r2, r2, #4
	mul r1, r0, r1
	adds r0, r2, r1
	ldrne r0, [r0]
	addne r0, r12, r0
	moveq r0, #0
	bx lr
}

extern "C" asm void func_0206e948(void)
{
	ldrh r2, [r0, #8]
	add r0, r0, r2
	add r0, r0, r1, lsl #4
	bx lr
}

extern "C" asm void func_0206e958(void)
{
	ldrh r2, [r0, #0xa]
	add r0, r0, r2
	add r0, r0, r1, lsl #4
	bx lr
}

extern "C" asm void func_0206e968(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r2
	bl func_0206e9dc
	ldrsh r1, [r0, #4]
	ldrh r3, [r0, #6]
	mul r2, r1, r4
	add r3, r5, r3
	mov r2, r2, lsr #0xc
	b lbl_0206e994
lbl_0206e990:
	sub r2, r2, #1
lbl_0206e994:
	cmp r2, #0
	beq lbl_0206e9ac
	mov r1, r2, lsl #2
	ldrh r1, [r3, r1]
	cmp r1, r4
	bcs lbl_0206e990
lbl_0206e9ac:
	ldrh r1, [r0]
	b lbl_0206e9b8
lbl_0206e9b4:
	add r2, r2, #1
lbl_0206e9b8:
	add r0, r2, #1
	cmp r0, r1
	bcs lbl_0206e9d4
	add r0, r3, r2, lsl #2
	ldrh r0, [r0, #4]
	cmp r0, r4
	bls lbl_0206e9b4
lbl_0206e9d4:
	add r0, r3, r2, lsl #2
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206e9dc(void)
{
	ldrh r3, [r0, #0x12]
	add r0, r0, #0xc
	ldrh r2, [r0, r3]
	add r0, r0, r3
	add r0, r0, #4
	mla r0, r2, r1, r0
	bx lr
}

extern "C" asm void func_0206e9f8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	ldr r0, =data_020c3dc8
	str r4, [r5, #8]
	ldr r0, [r0]
	add r1, r5, #0x1a
	str r0, [r5, #0xc]
	ldrb r2, [r2, #0x17]
	mov r0, #0
	strb r2, [r5, #0x19]
	mov r2, r2, lsl #1
	bl func_02067828
	ldrh r0, [r4, #6]
	add r3, r4, #0x14
	mov r2, #0
	cmp r0, #0
	ldmlsia sp!, {r3, r4, r5, pc}
lbl_0206ea40:
	mov r0, r2, lsl #1
	ldrh r1, [r3, r0]
	add r0, r5, r2, lsl #1
	add r2, r2, #1
	ldr r1, [r4, r1]
	mov r1, r1, lsr #0x18
	orr r1, r1, #0x100
	strh r1, [r0, #0x1a]
	ldrh r0, [r4, #6]
	cmp r2, r0
	bcc lbl_0206ea40
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206ea74(void)
{
	stmdb sp!, {r3, lr}
	mov r3, r0
	ldr r0, [r1, #8]
	ldr r12, [r1]
	ldrh r1, [r0, #4]
	cmp r12, r1, lsl #12
	mov r1, r1, lsl #0xc
	subge r12, r1, #1
	bge lbl_0206eaa0
	cmp r12, #0
	movlt r12, #0
lbl_0206eaa0:
	mov r1, r2
	mov r2, r12
	bl func_0206eccc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206eab0(void)
{
	ldr r1, =data_0210d18c
	ldr r1, [r1]
	ldr r12, [r1, #0xd4]
	ldr r1, [r1]
	ldrh r3, [r12, #6]
	ldrb r1, [r1, #1]
	ldrh r2, [r12, r3]
	add r3, r12, r3
	mla r1, r2, r1, r3
	ldr r2, [r1, #4]
	ldrh r1, [r12, r2]
	add r2, r12, r2
	tst r1, #1
	beq lbl_0206eaf8
	ldr r1, [r0]
	orr r1, r1, #4
	str r1, [r0]
	bx lr
lbl_0206eaf8:
	ldr r1, [r2, #4]
	str r1, [r0, #0x4c]
	ldr r1, [r2, #8]
	str r1, [r0, #0x50]
	ldr r1, [r2, #0xc]
	str r1, [r0, #0x54]
	bx lr
}

extern "C" asm void func_0206eb18(void)
{
	stmdb sp!, {r4, lr}
	ldr r1, =data_0210d18c
	ldr r4, [r1]
	ldr lr, [r4, #0xd4]
	ldr r2, [r4]
	ldrh r12, [lr, #6]
	ldrb r1, [r2, #1]
	ldrh r3, [lr, r12]
	add r12, lr, r12
	mla r1, r3, r1, r12
	ldr r1, [r1, #4]
	ldrh r3, [lr, r1]
	add r1, lr, r1
	add r1, r1, #4
	tst r3, #1
	addeq r1, r1, #0xc
	tst r3, #2
	bne lbl_0206eb6c
	tst r3, #8
	addne r1, r1, #4
	addeq r1, r1, #0x10
lbl_0206eb6c:
	ldr r12, [r4, #0xe8]
	blx r12
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206eb7c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	ldr r1, =data_0210d18c
	mov r8, r0
	ldr r0, [r1]
	ldr r3, [r0, #0xd4]
	ldr r0, [r0]
	ldrh r2, [r3, #6]
	ldrb r0, [r0, #1]
	ldrh r1, [r3, r2]
	add r2, r3, r2
	mla r0, r1, r0, r2
	ldr r0, [r0, #4]
	ldrh r2, [r3, r0]
	add r5, r3, r0
	add r1, r5, #4
	tst r2, #1
	addeq r1, r1, #0xc
	tst r2, #2
	bne lbl_0206eca8
	tst r2, #8
	beq lbl_0206ec5c
	and r2, r2, #0xf0
	add r0, r8, #0x28
	mov r4, r2, asr #4
	ldrsh r7, [r1]
	ldrsh r6, [r1, #2]
	bl func_02067b70
	ldrh r0, [r5]
	ldr r1, =data_020ba604
	mov r3, #0x1000
	tst r0, #0x100
	ldr r0, =data_020ba605
	ldrb r1, [r1, r4, lsl #2]
	ldrb r0, [r0, r4, lsl #2]
	rsbne r3, r3, #0
	add r2, r8, r4, lsl #2
	str r3, [r2, #0x28]
	add r1, r8, r1, lsl #2
	str r7, [r1, #0x28]
	add r0, r8, r0, lsl #2
	str r6, [r0, #0x28]
	ldrh r0, [r5]
	tst r0, #0x200
	ldr r0, =data_020ba606
	rsbne r6, r6, #0
	ldrb r0, [r0, r4, lsl #2]
	add r0, r8, r0, lsl #2
	str r6, [r0, #0x28]
	ldrh r0, [r5]
	tst r0, #0x400
	ldr r0, =data_020ba607
	rsbne r7, r7, #0
	ldrb r0, [r0, r4, lsl #2]
	add r0, r8, r0, lsl #2
	str r7, [r0, #0x28]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_0206ec5c:
	ldrsh r0, [r5, #2]
	str r0, [r8, #0x28]
	ldrsh r0, [r1]
	str r0, [r8, #0x2c]
	ldrsh r0, [r1, #2]
	str r0, [r8, #0x30]
	ldrsh r0, [r1, #4]
	str r0, [r8, #0x34]
	ldrsh r0, [r1, #6]
	str r0, [r8, #0x38]
	ldrsh r0, [r1, #8]
	str r0, [r8, #0x3c]
	ldrsh r0, [r1, #0xa]
	str r0, [r8, #0x40]
	ldrsh r0, [r1, #0xc]
	str r0, [r8, #0x44]
	ldrsh r0, [r1, #0xe]
	str r0, [r8, #0x48]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_0206eca8:
	ldr r0, [r8]
	orr r0, r0, #2
	str r0, [r8]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0206eccc(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x30
	mov r9, r0
	add r0, r9, r1, lsl #1
	ldrh r0, [r0, #0x14]
	mov r7, r3
	mov r8, r2
	ldr r4, [r9, r0]
	add r1, r9, r0
	tst r4, #1
	movne r0, #7
	strne r0, [r7]
	bne lbl_0206f044
	ldr r0, =0x00000FFF
	add r5, r1, #4
	tst r8, r0
	beq lbl_0206ed20
	ldr r0, [r9, #8]
	tst r0, #1
	movne r6, #1
	bne lbl_0206ed24
lbl_0206ed20:
	mov r6, #0
lbl_0206ed24:
	mov r0, #0
	str r0, [r7]
	tst r4, #6
	bne lbl_0206ee04
	tst r4, #8
	bne lbl_0206ed70
	cmp r6, #0
	mov r1, r8
	mov r2, r5
	beq lbl_0206ed5c
	mov r3, r9
	add r0, r7, #0x4c
	bl func_0206f1e0
	b lbl_0206ed68
lbl_0206ed5c:
	mov r3, r9
	add r0, r7, #0x4c
	bl func_0206f080
lbl_0206ed68:
	add r5, r5, #8
	b lbl_0206ed78
lbl_0206ed70:
	ldr r0, [r5], #4
	str r0, [r7, #0x4c]
lbl_0206ed78:
	tst r4, #0x10
	bne lbl_0206edb4
	cmp r6, #0
	mov r1, r8
	mov r2, r5
	beq lbl_0206eda0
	mov r3, r9
	add r0, r7, #0x50
	bl func_0206f1e0
	b lbl_0206edac
lbl_0206eda0:
	mov r3, r9
	add r0, r7, #0x50
	bl func_0206f080
lbl_0206edac:
	add r5, r5, #8
	b lbl_0206edbc
lbl_0206edb4:
	ldr r0, [r5], #4
	str r0, [r7, #0x50]
lbl_0206edbc:
	tst r4, #0x20
	bne lbl_0206edf8
	cmp r6, #0
	mov r1, r8
	mov r2, r5
	beq lbl_0206ede4
	mov r3, r9
	add r0, r7, #0x54
	bl func_0206f1e0
	b lbl_0206edf0
lbl_0206ede4:
	mov r3, r9
	add r0, r7, #0x54
	bl func_0206f080
lbl_0206edf0:
	add r5, r5, #8
	b lbl_0206ee24
lbl_0206edf8:
	ldr r0, [r5], #4
	str r0, [r7, #0x54]
	b lbl_0206ee24
lbl_0206ee04:
	tst r4, #2
	beq lbl_0206ee1c
	ldr r0, [r7]
	orr r0, r0, #4
	str r0, [r7]
	b lbl_0206ee24
lbl_0206ee1c:
	mov r0, r7
	bl func_0206eab0
lbl_0206ee24:
	tst r4, #0xc0
	bne lbl_0206eee8
	tst r4, #0x100
	bne lbl_0206ee68
	cmp r6, #0
	mov r1, r8
	mov r2, r5
	beq lbl_0206ee54
	mov r3, r9
	add r0, r7, #0x28
	bl func_0206facc
	b lbl_0206ee60
lbl_0206ee54:
	mov r3, r9
	add r0, r7, #0x28
	bl func_0206f6c4
lbl_0206ee60:
	add r5, r5, #8
	b lbl_0206ef08
lbl_0206ee68:
	ldr r1, [r9, #0xc]
	ldr r2, [r9, #0x10]
	ldr r3, [r5]
	add r0, r7, #0x28
	add r1, r9, r1
	add r2, r9, r2
	bl func_0206fe00
	cmp r0, #0
	beq lbl_0206eee0
	ldr r12, [r7, #0x3c]
	ldr r0, [r7, #0x2c]
	ldr r3, [r7, #0x28]
	ldr r11, [r7, #0x38]
	ldr r1, [r7, #0x30]
	ldr r2, [r7, #0x34]
	mul r10, r0, r12
	mul lr, r1, r11
	sub r10, r10, lr
	mov r10, r10, asr #0xc
	mul lr, r1, r2
	mul r1, r3, r12
	sub r1, lr, r1
	mul r11, r3, r11
	mul r2, r0, r2
	sub r0, r11, r2
	str r10, [r7, #0x40]
	mov r1, r1, asr #0xc
	str r1, [r7, #0x44]
	mov r0, r0, asr #0xc
	str r0, [r7, #0x48]
lbl_0206eee0:
	add r5, r5, #4
	b lbl_0206ef08
lbl_0206eee8:
	tst r4, #0x40
	beq lbl_0206ef00
	ldr r0, [r7]
	orr r0, r0, #2
	str r0, [r7]
	b lbl_0206ef08
lbl_0206ef00:
	mov r0, r7
	bl func_0206eb7c
lbl_0206ef08:
	tst r4, #0x600
	bne lbl_0206f01c
	tst r4, #0x800
	bne lbl_0206ef58
	cmp r6, #0
	add r0, sp, #0x10
	mov r1, r8
	beq lbl_0206ef38
	mov r2, r5
	mov r3, r9
	bl func_0206f530
	b lbl_0206ef44
lbl_0206ef38:
	mov r2, r5
	mov r3, r9
	bl func_0206f33c
lbl_0206ef44:
	ldr r1, [sp, #0x10]
	ldr r0, [sp, #0x14]
	str r1, [sp, #0x18]
	str r0, [sp, #0x24]
	b lbl_0206ef68
lbl_0206ef58:
	ldr r0, [r5]
	str r0, [sp, #0x18]
	ldr r0, [r5, #4]
	str r0, [sp, #0x24]
lbl_0206ef68:
	tst r4, #0x1000
	bne lbl_0206efb0
	cmp r6, #0
	add r0, sp, #8
	mov r1, r8
	beq lbl_0206ef90
	mov r3, r9
	add r2, r5, #8
	bl func_0206f530
	b lbl_0206ef9c
lbl_0206ef90:
	mov r3, r9
	add r2, r5, #8
	bl func_0206f33c
lbl_0206ef9c:
	ldr r1, [sp, #8]
	ldr r0, [sp, #0xc]
	str r1, [sp, #0x1c]
	str r0, [sp, #0x28]
	b lbl_0206efc0
lbl_0206efb0:
	ldr r0, [r5, #8]
	str r0, [sp, #0x1c]
	ldr r0, [r5, #0xc]
	str r0, [sp, #0x28]
lbl_0206efc0:
	tst r4, #0x2000
	bne lbl_0206f008
	cmp r6, #0
	add r0, sp, #0
	mov r1, r8
	beq lbl_0206efe8
	mov r3, r9
	add r2, r5, #0x10
	bl func_0206f530
	b lbl_0206eff4
lbl_0206efe8:
	mov r3, r9
	add r2, r5, #0x10
	bl func_0206f33c
lbl_0206eff4:
	ldr r1, [sp]
	ldr r0, [sp, #4]
	str r1, [sp, #0x20]
	str r0, [sp, #0x2c]
	b lbl_0206f044
lbl_0206f008:
	ldr r0, [r5, #0x10]
	str r0, [sp, #0x20]
	ldr r0, [r5, #0x14]
	str r0, [sp, #0x2c]
	b lbl_0206f044
lbl_0206f01c:
	tst r4, #0x200
	beq lbl_0206f034
	ldr r0, [r7]
	orr r0, r0, #1
	str r0, [r7]
	b lbl_0206f044
lbl_0206f034:
	mov r0, r7
	bl func_0206eb18
	add sp, sp, #0x30
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_0206f044:
	ldr r0, [r7]
	add r1, sp, #0x18
	tst r0, #1
	ldr r0, =data_0210d18c
	movne r3, #4
	ldr r4, [r0]
	moveq r3, #0
	ldr r2, [r4]
	ldr r4, [r4, #0xe8]
	mov r0, r7
	blx r4
	add sp, sp, #0x30
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0206f080(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r4, [r2, #4]
	ldr r12, [r2]
	mov r5, r1, asr #0xc
	tst r12, #0xc0000000
	add r1, r3, r4
	beq lbl_0206f1bc
	ldr r2, =0x1FFF0000
	tst r12, #0x40000000
	and r2, r12, r2
	mov r3, r2, lsr #0x10
	beq lbl_0206f0d8
	tst r5, #1
	beq lbl_0206f0d0
	cmp r5, r3
	movhi r2, r3, lsr #1
	addhi r5, r2, #1
	bhi lbl_0206f1bc
	mov r4, r5, lsr #1
	b lbl_0206f17c
lbl_0206f0d0:
	mov r5, r5, lsr #1
	b lbl_0206f1bc
lbl_0206f0d8:
	ands r2, r5, #3
	beq lbl_0206f174
	cmp r5, r3
	addhi r5, r2, r3, lsr #2
	bhi lbl_0206f1bc
	tst r5, #1
	beq lbl_0206f16c
	tst r5, #2
	movne r5, r5, lsr #2
	addne r2, r5, #1
	moveq r2, r5, lsr #2
	addeq r5, r2, #1
	tst r12, #0x20000000
	beq lbl_0206f134
	mov r3, r2, lsl #1
	mov r2, r5, lsl #1
	ldrsh r3, [r1, r3]
	ldrsh r1, [r1, r2]
	add r2, r3, r3, lsl #1
	add r1, r2, r1
	mov r1, r1, asr #2
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206f134:
	ldr r12, [r1, r2, lsl #2]
	mov r2, #3
	mov r3, #0
	umull r4, lr, r12, r2
	mla lr, r12, r3, lr
	mov r3, r12, asr #0x1f
	mla lr, r3, r2, lr
	ldr r1, [r1, r5, lsl #2]
	adds r2, r4, r1
	adc r1, lr, r1, asr #31
	mov r2, r2, lsr #2
	orr r2, r2, r1, lsl #30
	str r2, [r0]
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206f16c:
	mov r4, r5, lsr #2
	b lbl_0206f17c
lbl_0206f174:
	mov r5, r5, lsr #2
	b lbl_0206f1bc
lbl_0206f17c:
	tst r12, #0x20000000
	beq lbl_0206f1a0
	mov r3, r4, lsl #1
	add r2, r1, r4, lsl #1
	ldrsh r3, [r1, r3]
	ldrsh r1, [r2, #2]
	add r1, r3, r1
	mov r1, r1, asr #1
	b lbl_0206f1b4
lbl_0206f1a0:
	add r2, r1, r4, lsl #2
	ldr r2, [r2, #4]
	ldr r3, [r1, r4, lsl #2]
	mov r1, r2, asr #1
	add r1, r1, r3, asr #1
lbl_0206f1b4:
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206f1bc:
	tst r12, #0x20000000
	ldreq r1, [r1, r5, lsl #2]
	streq r1, [r0]
	ldmeqia sp!, {r3, r4, r5, pc}
	mov r2, r5, lsl #1
	ldrsh r1, [r1, r2]
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206f1e0(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldrh r4, [r3, #4]
	ldr r12, [r2, #4]
	mov lr, r1, asr #0xc
	sub r4, r4, #1
	cmp r4, r1, asr #12
	add r12, r3, r12
	ldr r2, [r2]
	bne lbl_0206f27c
	tst r2, #0xc0000000
	beq lbl_0206f220
	tst r2, #0x40000000
	andne r4, lr, #1
	addne lr, r4, lr, lsr #1
	andeq r4, lr, #3
	addeq lr, r4, lr, lsr #2
lbl_0206f220:
	ldr r3, [r3, #8]
	tst r3, #2
	beq lbl_0206f264
	ldr r3, =0x00000FFF
	tst r2, #0x20000000
	and r2, r1, r3
	ldreq r3, [r12, lr, lsl #2]
	ldreq r1, [r12]
	beq lbl_0206f250
	mov r1, lr, lsl #1
	ldrsh r3, [r12, r1]
	ldrsh r1, [r12]
lbl_0206f250:
	sub r1, r1, r3
	mul r1, r2, r1
	add r1, r3, r1, asr #12
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206f264:
	tst r2, #0x20000000
	movne r1, lr, lsl #1
	ldrnesh r1, [r12, r1]
	ldreq r1, [r12, lr, lsl #2]
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
lbl_0206f27c:
	tst r2, #0xc0000000
	beq lbl_0206f2e0
	ldr r3, =0x1FFF0000
	tst r2, #0x40000000
	and r4, r2, r3
	mov r4, r4, lsr #0x10
	beq lbl_0206f2b8
	cmp lr, r4
	movcs lr, r4, lsr #1
	bcs lbl_0206f2e0
	mov lr, lr, lsr #1
	and r1, r1, r3, lsr #16
	mov r4, #2
	mov r5, #1
	b lbl_0206f2f0
lbl_0206f2b8:
	cmp lr, r4
	andcs r3, lr, #3
	addcs lr, r3, lr, lsr #2
	bcs lbl_0206f2e0
	ldr r3, =0x00003FFF
	mov lr, lr, lsr #2
	and r1, r1, r3
	mov r4, #4
	mov r5, #2
	b lbl_0206f2f0
lbl_0206f2e0:
	ldr r3, =0x00000FFF
	mov r4, #1
	and r1, r1, r3
	mov r5, #0
lbl_0206f2f0:
	tst r2, #0x20000000
	addeq r2, r12, lr, lsl #2
	ldreq r12, [r12, lr, lsl #2]
	ldreq r2, [r2, #4]
	beq lbl_0206f314
	add r2, r12, lr, lsl #1
	mov r3, lr, lsl #1
	ldrsh r12, [r12, r3]
	ldrsh r2, [r2, #2]
lbl_0206f314:
	sub r2, r2, r12
	mul r3, r12, r4
	mul r2, r1, r2
	add r1, r3, r2, asr #12
	mov r1, r1, asr r5
	str r1, [r0]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0206f33c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldr r4, [r2, #4]
	ldr r5, [r2]
	mov r6, r1, asr #0xc
	tst r5, #0xc0000000
	add r1, r3, r4
	beq lbl_0206f488
	ldr r2, =0x1FFF0000
	tst r5, #0x40000000
	and r2, r5, r2
	mov r3, r2, lsr #0x10
	beq lbl_0206f394
	tst r6, #1
	beq lbl_0206f38c
	cmp r6, r3
	movhi r2, r3, lsr #1
	addhi r6, r2, #1
	bhi lbl_0206f488
	mov r4, r6, lsr #1
	b lbl_0206f4c0
lbl_0206f38c:
	mov r6, r6, lsr #1
	b lbl_0206f488
lbl_0206f394:
	ands r2, r6, #3
	beq lbl_0206f484
	cmp r6, r3
	addhi r6, r2, r3, lsr #2
	bhi lbl_0206f488
	tst r6, #1
	beq lbl_0206f47c
	tst r6, #2
	movne r3, r6, lsr #2
	addne r2, r3, #1
	moveq r2, r6, lsr #2
	addeq r3, r2, #1
	tst r5, #0x20000000
	beq lbl_0206f410
	mov r5, r2, lsl #2
	mov r4, r3, lsl #2
	ldrsh r6, [r1, r5]
	ldrsh r5, [r1, r4]
	add r2, r1, r2, lsl #2
	add r4, r6, r6, lsl #1
	add r4, r5, r4
	mov r4, r4, asr #2
	str r4, [r0]
	add r1, r1, r3, lsl #2
	ldrsh r3, [r2, #2]
	ldrsh r2, [r1, #2]
	add r1, r3, r3, lsl #1
	add r1, r2, r1
	mov r1, r1, asr #2
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206f410:
	ldr r4, [r1, r2, lsl #3]
	mov r12, #3
	mov lr, #0
	umull r6, r5, r4, r12
	mla r5, r4, lr, r5
	mov r4, r4, asr #0x1f
	ldr r7, [r1, r3, lsl #3]
	add r2, r1, r2, lsl #3
	mla r5, r4, r12, r5
	adds r6, r6, r7
	adc r4, r5, r7, asr #31
	mov r5, r6, lsr #2
	orr r5, r5, r4, lsl #30
	str r5, [r0]
	add r1, r1, r3, lsl #3
	ldr r2, [r2, #4]
	ldr r1, [r1, #4]
	umull r4, r3, r2, r12
	mla r3, r2, lr, r3
	mov r2, r2, asr #0x1f
	mla r3, r2, r12, r3
	adds r4, r4, r1
	adc r1, r3, r1, asr #31
	mov r2, r4, lsr #2
	orr r2, r2, r1, lsl #30
	str r2, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206f47c:
	mov r4, r6, lsr #2
	b lbl_0206f4c0
lbl_0206f484:
	mov r6, r6, lsr #2
lbl_0206f488:
	tst r5, #0x20000000
	beq lbl_0206f4a8
	mov r2, r6, lsl #2
	ldrsh r2, [r1, r2]
	add r1, r1, r6, lsl #2
	str r2, [r0]
	ldrsh r1, [r1, #2]
	b lbl_0206f4b8
lbl_0206f4a8:
	ldr r2, [r1, r6, lsl #3]
	add r1, r1, r6, lsl #3
	str r2, [r0]
	ldr r1, [r1, #4]
lbl_0206f4b8:
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206f4c0:
	tst r5, #0x20000000
	beq lbl_0206f4fc
	mov r2, r4, lsl #2
	add r3, r1, r4, lsl #2
	ldrsh r2, [r1, r2]
	ldrsh r1, [r3, #4]
	add r1, r2, r1
	mov r1, r1, asr #1
	str r1, [r0]
	ldrsh r2, [r3, #2]
	ldrsh r1, [r3, #6]
	add r1, r2, r1
	mov r1, r1, asr #1
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206f4fc:
	add r3, r1, r4, lsl #3
	ldr r2, [r1, r4, lsl #3]
	ldr r1, [r3, #8]
	add r1, r2, r1
	mov r1, r1, asr #1
	str r1, [r0]
	ldr r2, [r3, #4]
	ldr r1, [r3, #0xc]
	add r1, r2, r1
	mov r1, r1, asr #1
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0206f530(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldrh r4, [r3, #4]
	ldr r5, [r2, #4]
	mov lr, r1, asr #0xc
	sub r4, r4, #1
	cmp r4, r1, asr #12
	add r12, r3, r5
	ldr r2, [r2]
	bne lbl_0206f5b8
	tst r2, #0xc0000000
	beq lbl_0206f570
	tst r2, #0x40000000
	andne r4, lr, #1
	addne lr, r4, lr, lsr #1
	andeq r4, lr, #3
	addeq lr, r4, lr, lsr #2
lbl_0206f570:
	ldr r3, [r3, #8]
	tst r3, #2
	movne r3, #0
	bne lbl_0206f634
	tst r2, #0x20000000
	beq lbl_0206f5a0
	mov r1, lr, lsl #2
	ldrsh r2, [r12, r1]
	add r1, r12, lr, lsl #2
	str r2, [r0]
	ldrsh r1, [r1, #2]
	b lbl_0206f5b0
lbl_0206f5a0:
	ldr r2, [r12, lr, lsl #3]
	add r1, r12, lr, lsl #3
	str r2, [r0]
	ldr r1, [r1, #4]
lbl_0206f5b0:
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0206f5b8:
	tst r2, #0xc0000000
	beq lbl_0206f630
	ldr r4, =0x1FFF0000
	tst r2, #0x40000000
	and r3, r2, r4
	mov r3, r3, lsr #0x10
	beq lbl_0206f5fc
	cmp lr, r3
	movcs lr, r3, lsr #1
	addcs r3, lr, #1
	bcs lbl_0206f634
	mov lr, lr, lsr #1
	add r3, lr, #1
	and r1, r1, r4, lsr #16
	mov r4, #2
	mov r5, #1
	b lbl_0206f644
lbl_0206f5fc:
	cmp lr, r3
	bcc lbl_0206f614
	and r3, lr, #3
	add lr, r3, lr, lsr #2
	add r3, lr, #1
	b lbl_0206f634
lbl_0206f614:
	ldr r4, =0x00003FFF
	mov lr, lr, lsr #2
	add r3, lr, #1
	and r1, r1, r4
	mov r4, #4
	mov r5, #2
	b lbl_0206f644
lbl_0206f630:
	add r3, lr, #1
lbl_0206f634:
	ldr r5, =0x00000FFF
	mov r4, #1
	and r1, r1, r5
	mov r5, #0
lbl_0206f644:
	tst r2, #0x20000000
	beq lbl_0206f670
	mov r2, lr, lsl #2
	add r7, r12, lr, lsl #2
	mov r6, r3, lsl #2
	add r3, r12, r3, lsl #2
	ldrsh r2, [r12, r2]
	ldrsh lr, [r7, #2]
	ldrsh r7, [r12, r6]
	ldrsh r3, [r3, #2]
	b lbl_0206f684
lbl_0206f670:
	add r7, r12, lr, lsl #3
	ldmia r7, {r2, lr}
	add r6, r12, r3, lsl #3
	ldr r7, [r12, r3, lsl #3]
	ldr r3, [r6, #4]
lbl_0206f684:
	sub r12, r7, r2
	sub r3, r3, lr
	mul r6, r2, r4
	mul r2, r1, r12
	add r2, r6, r2, asr #12
	mov r6, r2, asr r5
	mul r4, lr, r4
	mul r2, r1, r3
	add r1, r4, r2, asr #12
	mov r1, r1, asr r5
	str r6, [r0]
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

#pragma thumb on
