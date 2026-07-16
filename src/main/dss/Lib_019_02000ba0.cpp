/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void main(void);
    void func_02000bc0(void);
    void func_02000be4(void);
    void func_02000c30(void);
    void func_02000d58(void);
    void func_02000dc0(void);
    void func_02000dcc(void);
    void func_02000dd0(void);
    void func_02000e00(void);
    void func_02000e88(void);
    void func_02000f70(void);
    void func_02000fa8(void);
    void func_02000fbc(void);
    void func_02000fd8(void);
    void func_02001050(void);
    void func_02001070(void);
    void func_02001084(void);
    void func_020010b0(void);
    void func_02001160(void);
    void func_020016f0(void);
    void func_0200193c(void);
    void func_02001c1c(void);
    void func_020020f8(void);
    void func_0200221c(void);
    void func_02002980(void);
    void func_020031a4(void);
    void func_020031e8(void);
    void func_02003250(void);
    void func_02003268(void);
    void func_02003294(void);
    void func_020033c4(void);
    void func_020033e0(void);
    void func_020034a8(void);
    void func_020034f8(void);
    void func_02003528(void);
    void func_0200363c(void);
    void func_02003670(void);
    void func_020036ac(void);
    void func_020036d4(void);
    void func_020036f4(void);
    void func_020037b0(void);
    void func_020039fc(void);
    void func_02003a68(void);
    void func_02003ab4(void);
    void func_02003ab8(void);
    void func_02003af8(void);
    void func_02003bc4(void);
    void func_02003d48(void);
    void func_02003de4(void);
    void func_02004168(void);
    void func_020042e8(void);
    void func_02004390(void);
    void func_02004424(void);
    void func_02004438(void);
    void func_020044a8(void);
    void func_020047c0(void);
    void data_0208c830(void);
    void data_020bb4e0(void);
    void data_020bb6d8(void);
    void data_020bb7e0(void);
    void data_020bb7e8(void);
    void data_020bb7f0(void);
    void data_020bb7f8(void);
    void data_020bb7fc(void);
    void data_020bb800(void);
    void data_020bb808(void);
    void data_020bb810(void);
    void data_020bb814(void);
    void data_020bb818(void);
    void data_020bb81c(void);
    void data_020bb820(void);
    void data_020bb850(void);
    void data_020bb878(void);
    void data_020bb890(void);
    void data_020bb8a0(void);
    void data_020bb8a8(void);
    void data_020bb8b0(void);
    void data_020bb8b8(void);
    void data_020bb8c0(void);
    void data_020bb8c4(void);
    void data_020bb8c8(void);
    void data_020bb8cc(void);
    void data_020bb8d0(void);
    void data_020bb8d4(void);
    void data_020bb8d8(void);
    void data_020bb8dc(void);
    void data_020bb8e0(void);
    void data_020bb8e4(void);
    void data_020bb8e8(void);
    void data_020bb8ec(void);
    void data_020bb8f0(void);
    void data_020c4a20(void);
    void data_020c4a30(void);
    void data_020c4b30(void);
    void data_020c4b54(void);
    void data_020c4b78(void);
    void data_020c4c20(void);
    void data_020c4f50(void);
    void data_020c4fe4(void);
    void data_021141c8(void);
    void func_0200484c(void);
    void func_02004bc8(void);
    void func_02004bd8(void);
    void func_02005238(void);
    void func_020052d4(void);
    void func_02005fe4(void);
    void func_02005ff0(void);
    void func_02006238(void);
    void func_0200796c(void);
    void func_02007ee0(void);
    void func_02057f8c(void);
    void func_02057fc4(void);
    void func_02078f74(void);
    void func_02078ff8(void);
    void func_02079090(void);
}

#pragma thumb off

extern "C" asm void main(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c4fe4
	mov r1, #0
	bl func_02057f8c
	ldr r0, =data_020c4fe4
	bl func_02057fc4
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02000bc0(void)
{
	stmdb sp!, {r3, lr}
	mov r0, #1
	bl func_02003294
	ldr r1, =data_020c4a20
	mov r0, #1
	str r0, [r1, #0xc]
	bl func_02000be4
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02000be4(void)
{
	stmdb sp!, {r4, lr}
	ldr r1, =data_020c4a20
	mov r4, r0
	ldr r0, [r1, #0xc]
	cmp r0, #0
	bne lbl_02000c20
	bl func_0200796c
	ldr r0, =data_020c4a20
	ldr r0, [r0, #4]
	cmp r0, #0
	beq lbl_02000c20
	blx r0
	ldr r0, =data_020c4a20
	mov r1, #0
	str r1, [r0, #4]
lbl_02000c20:
	mov r0, r4
	bl func_02000c30
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02000c30(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r0, =data_020c4b78
	bl func_02079090
	cmp r0, #0
	bne lbl_02000c68
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r2, [r0, #4]
	ldr r0, =data_020c4b54
	ldr r3, [r2, #0x6c]
	mov r2, #1
	str r3, [r1]
	str r2, [r0]
	b lbl_02000cc0
lbl_02000c68:
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r0, [r0, #4]
	ldr r1, [r1]
	ldr r0, [r0, #0x6c]
	cmp r1, r0
	bne lbl_02000c98
	ldr r0, =data_020c4b54
	ldr r1, [r0]
	add r1, r1, #1
	str r1, [r0]
	b lbl_02000cc0
lbl_02000c98:
	ldr r0, =data_020c4b78
	bl func_02078f74
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r2, [r0, #4]
	ldr r0, =data_020c4b54
	ldr r3, [r2, #0x6c]
	mov r2, #1
	str r3, [r1]
	str r2, [r0]
lbl_02000cc0:
	ldr r4, =data_020c4a20
	ldr r0, [r4, #8]
	cmp r0, #0
	ble lbl_02000cf4
	ldr r5, =data_020c4a30
lbl_02000cd4:
	ldr r0, [r4, #8]
	sub r1, r0, #1
	ldr r0, [r5, r1, lsl #2]
	str r1, [r4, #8]
	blx r0
	ldr r0, [r4, #8]
	cmp r0, #0
	bgt lbl_02000cd4
lbl_02000cf4:
	ldr r0, =data_020c4b54
	ldr r1, [r0]
	subs r1, r1, #1
	str r1, [r0]
	bne lbl_02000d10
	ldr r0, =data_020c4b78
	bl func_02078ff8
lbl_02000d10:
	ldr r0, =data_020c4a20
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_02000d30
	blx r0
	ldr r0, =data_020c4a20
	mov r1, #0
	str r1, [r0]
lbl_02000d30:
	mov r0, #0
	bl func_02000e88
	bl func_02007ee0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02000d58(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	ldr r0, =data_020bb4e0
	mov r4, #0
	mov r5, #1
	mov r8, r0
	mvn r9, #0
	mov r7, r4
	mov r6, #0x4c
lbl_02000d78:
	ldr r1, [r0, #4]
	mov r1, r1, lsl #0x16
	movs r1, r1, lsr #0x1d
	beq lbl_02000d94
	bl func_02000e88
	cmp r0, #0
	movne r4, r9
lbl_02000d94:
	cmp r5, #3
	movge r0, r7
	bge lbl_02000dac
	mul r0, r5, r6
	add r5, r5, #1
	add r0, r8, r0
lbl_02000dac:
	cmp r0, #0
	bne lbl_02000d78
	mov r0, r4
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02000dc0(void)
{
	cmp r0, #0
	rsblt r0, r0, #0
	bx lr
}

extern "C" asm void func_02000dcc(void)
{
	bx lr
}

extern "C" asm void func_02000dd0(void)
{
	ldr r1, [r0, #0x1c]
	str r1, [r0, #0x24]
	ldr r3, [r0, #0x20]
	str r3, [r0, #0x28]
	ldr r2, [r0, #0x18]
	ldr r1, [r0, #0x2c]
	and r1, r2, r1
	sub r1, r3, r1
	str r1, [r0, #0x28]
	ldr r1, [r0, #0x18]
	str r1, [r0, #0x34]
	bx lr
}

extern "C" asm void func_02000e00(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	ldr r2, [r5, #0x24]
	ldr r0, [r5, #0x1c]
	mov r4, r1
	subs r0, r2, r0
	beq lbl_02000e78
	str r0, [r5, #0x28]
	ldr r0, [r5, #4]
	mov r0, r0, lsl #0x13
	movs r0, r0, lsr #0x1f
	bne lbl_02000e3c
	ldr r0, [r5, #0x1c]
	add r1, r5, #0x28
	bl func_02000dcc
lbl_02000e3c:
	ldr r0, [r5]
	ldr r1, [r5, #0x1c]
	ldr r3, [r5, #0x48]
	ldr r12, [r5, #0x40]
	add r2, r5, #0x28
	blx r12
	cmp r4, #0
	ldrne r1, [r5, #0x28]
	strne r1, [r4]
	cmp r0, #0
	ldmneia sp!, {r3, r4, r5, pc}
	ldr r1, [r5, #0x18]
	ldr r0, [r5, #0x28]
	add r0, r1, r0
	str r0, [r5, #0x18]
lbl_02000e78:
	mov r0, r5
	bl func_02000dd0
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02000e88(void)
{
	stmdb sp!, {r4, lr}
	movs r4, r0
	bne lbl_02000e9c
	bl func_02000d58
	ldmia sp!, {r4, pc}
lbl_02000e9c:
	ldrb r0, [r4, #0xd]
	cmp r0, #0
	bne lbl_02000eb8
	ldr r0, [r4, #4]
	mov r1, r0, lsl #0x16
	movs r1, r1, lsr #0x1d
	bne lbl_02000ec0
lbl_02000eb8:
	mvn r0, #0
	ldmia sp!, {r4, pc}
lbl_02000ec0:
	mov r0, r0, lsl #0x1b
	mov r0, r0, lsr #0x1d
	cmp r0, #1
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #8]
	mov r1, r0, lsl #0x1d
	mov r1, r1, lsr #0x1d
	cmp r1, #3
	biccs r0, r0, #7
	orrcs r0, r0, #2
	strcs r0, [r4, #8]
	ldr r0, [r4, #8]
	mov r0, r0, lsl #0x1d
	mov r0, r0, lsr #0x1d
	cmp r0, #2
	moveq r0, #0
	streq r0, [r4, #0x28]
	ldr r0, [r4, #8]
	mov r1, r0, lsl #0x1d
	mov r1, r1, lsr #0x1d
	cmp r1, #1
	beq lbl_02000f2c
	bic r0, r0, #7
	str r0, [r4, #8]
	mov r0, #0
	ldmia sp!, {r4, pc}
lbl_02000f2c:
	mov r0, r4
	mov r1, #0
	bl func_02000e00
	cmp r0, #0
	mov r0, #0
	beq lbl_02000f58
	mov r1, #1
	strb r1, [r4, #0xd]
	str r0, [r4, #0x28]
	sub r0, r0, #1
	ldmia sp!, {r4, pc}
lbl_02000f58:
	ldr r1, [r4, #8]
	bic r1, r1, #7
	str r1, [r4, #8]
	str r0, [r4, #0x18]
	str r0, [r4, #0x28]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02000f70(void)
{
	cmp r1, #0
	moveq r0, #0
	bxeq lr
	cmp r2, #0
	mvneq r0, #0
	bxeq lr
	cmp r0, #0
	ldrneb r2, [r1]
	strneh r2, [r0]
	ldrsb r0, [r1]
	cmp r0, #0
	moveq r0, #0
	movne r0, #1
	bx lr
}

extern "C" asm void func_02000fa8(void)
{
	cmp r0, #0
	moveq r0, #0
	strneb r1, [r0]
	movne r0, #1
	bx lr
}

extern "C" asm void func_02000fbc(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, =data_020bb6d8
	ldr r2, [r2, #8]
	ldr r2, [r2, #4]
	blx r2
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02000fd8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	movs r4, r0
	mov r9, r1
	cmpne r9, #0
	mov r8, r2
	mov r7, #0
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	add r6, sp, #0
lbl_02000ffc:
	ldrh r1, [r9]
	cmp r1, #0
	moveq r0, #0
	streqb r0, [r4, r7]
	beq lbl_02001048
	mov r0, r6
	add r9, r9, #2
	bl func_02000fbc
	mov r5, r0
	add r0, r7, r5
	cmp r0, r8
	bhi lbl_02001048
	mov r1, r6
	mov r2, r5
	add r0, r4, r7
	bl func_020034a8
	add r7, r7, r5
	cmp r7, r8
	bls lbl_02000ffc
lbl_02001048:
	mov r0, r7
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02001050(void)
{
	mov r12, r0
	cmp r2, #0
	bxeq lr
lbl_0200105c:
	ldrsb r3, [r1], #1
	subs r2, r2, #1
	strb r3, [r12], #1
	bne lbl_0200105c
	bx lr
}

extern "C" asm void func_02001070(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020010b0
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02001084(void)
{
	cmp r2, #0
	and r3, r1, #0xff
	beq lbl_020010a8
lbl_02001090:
	ldrb r1, [r0], #1
	cmp r1, r3
	subeq r0, r0, #1
	bxeq lr
	subs r2, r2, #1
	bne lbl_02001090
lbl_020010a8:
	mov r0, #0
	bx lr
}

extern "C" asm void func_020010b0(void)
{
	cmp r2, #0x20
	and r3, r1, #0xff
	bcc lbl_02001144
	rsb r1, r0, #0
	ands r12, r1, #3
	beq lbl_020010dc
	sub r2, r2, r12
	and r1, r3, #0xff
lbl_020010d0:
	strb r1, [r0], #1
	subs r12, r12, #1
	bne lbl_020010d0
lbl_020010dc:
	cmp r3, #0
	beq lbl_020010f4
	mov r1, r3, lsl #0x10
	orr r1, r1, r3, lsl #24
	orr r1, r1, r3, lsl #8
	orr r3, r3, r1
lbl_020010f4:
	movs r1, r2, lsr #5
	beq lbl_02001128
lbl_020010fc:
	str r3, [r0]
	str r3, [r0, #4]
	str r3, [r0, #8]
	str r3, [r0, #0xc]
	str r3, [r0, #0x10]
	str r3, [r0, #0x14]
	str r3, [r0, #0x18]
	str r3, [r0, #0x1c]
	add r0, r0, #0x20
	subs r1, r1, #1
	bne lbl_020010fc
lbl_02001128:
	and r1, r2, #0x1f
	movs r1, r1, lsr #2
	beq lbl_02001140
lbl_02001134:
	str r3, [r0], #4
	subs r1, r1, #1
	bne lbl_02001134
lbl_02001140:
	and r2, r2, #3
lbl_02001144:
	cmp r2, #0
	bxeq lr
	and r1, r3, #0xff
lbl_02001150:
	strb r1, [r0], #1
	subs r2, r2, #1
	bne lbl_02001150
	bx lr
}

extern "C" asm void func_02001160(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0x10
	ldrsb r3, [r0, #1]
	mov r4, #0
	mov r5, #1
	mov lr, r2
	strb r5, [sp]
	strb r4, [sp, #1]
	strb r4, [sp, #2]
	strb r4, [sp, #3]
	strb r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #0xc]
	cmp r3, #0x25
	add r12, r0, #1
	bne lbl_020011bc
	add r0, sp, #0
	strb r3, [sp, #5]
	ldmia r0, {r0, r1, r2, r3}
	stmia lr, {r0, r1, r2, r3}
	add sp, sp, #0x10
	add r0, r12, #1
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_020011bc:
	mov r2, #2
	mov r0, r4
	mov r5, r2
	mov r6, r4
	mov r7, #1
lbl_020011d0:
	mov r8, r7
	cmp r3, #0x2b
	bgt lbl_02001200
	bge lbl_02001228
	cmp r3, #0x23
	bgt lbl_02001258
	cmp r3, #0x20
	blt lbl_02001258
	beq lbl_02001230
	cmp r3, #0x23
	beq lbl_02001240
	b lbl_02001258
lbl_02001200:
	cmp r3, #0x30
	bgt lbl_02001258
	cmp r3, #0x2d
	blt lbl_02001258
	beq lbl_02001220
	cmp r3, #0x30
	beq lbl_02001248
	b lbl_02001258
lbl_02001220:
	strb r6, [sp]
	b lbl_0200125c
lbl_02001228:
	strb r7, [sp, #1]
	b lbl_0200125c
lbl_02001230:
	ldrb r4, [sp, #1]
	cmp r4, #1
	strneb r5, [sp, #1]
	b lbl_0200125c
lbl_02001240:
	strb r7, [sp, #3]
	b lbl_0200125c
lbl_02001248:
	ldrb r4, [sp]
	cmp r4, #0
	strneb r2, [sp]
	b lbl_0200125c
lbl_02001258:
	mov r8, r0
lbl_0200125c:
	cmp r8, #0
	ldrnesb r3, [r12, #1]!
	bne lbl_020011d0
	cmp r3, #0x2a
	bne lbl_020012a4
	ldr r0, [r1]
	add r0, r0, #4
	str r0, [r1]
	ldr r0, [r0, #-4]
	str r0, [sp, #8]
	cmp r0, #0
	bge lbl_0200129c
	rsb r0, r0, #0
	mov r2, #0
	strb r2, [sp]
	str r0, [sp, #8]
lbl_0200129c:
	ldrsb r3, [r12, #1]!
	b lbl_020012f4
lbl_020012a4:
	ldr r4, =data_0208c830
	mov r5, #0
	mov r0, #0xa
	b lbl_020012c8
lbl_020012b4:
	ldr r2, [sp, #8]
	sub r3, r3, #0x30
	mla r6, r2, r0, r3
	ldrsb r3, [r12, #1]!
	str r6, [sp, #8]
lbl_020012c8:
	cmp r3, #0
	blt lbl_020012d8
	cmp r3, #0x80
	blt lbl_020012e0
lbl_020012d8:
	mov r2, r5
	b lbl_020012ec
lbl_020012e0:
	mov r2, r3, lsl #1
	ldrh r2, [r4, r2]
	and r2, r2, #8
lbl_020012ec:
	cmp r2, #0
	bne lbl_020012b4
lbl_020012f4:
	ldr r2, [sp, #8]
	ldr r0, =0x000001FD
	cmp r2, r0
	ble lbl_02001324
	mov r1, #0xff
	add r0, sp, #0
	strb r1, [sp, #5]
	ldmia r0, {r0, r1, r2, r3}
	stmia lr, {r0, r1, r2, r3}
	add sp, sp, #0x10
	add r0, r12, #1
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02001324:
	cmp r3, #0x2e
	bne lbl_020013b8
	ldrsb r3, [r12, #1]!
	mov r0, #1
	strb r0, [sp, #2]
	cmp r3, #0x2a
	bne lbl_02001368
	ldr r0, [r1]
	add r0, r0, #4
	str r0, [r1]
	ldr r0, [r0, #-4]
	ldrsb r3, [r12, #1]!
	str r0, [sp, #0xc]
	cmp r0, #0
	movlt r0, #0
	strltb r0, [sp, #2]
	b lbl_020013b8
lbl_02001368:
	ldr r2, =data_0208c830
	mov r4, #0
	mov r0, #0xa
	b lbl_0200138c
lbl_02001378:
	ldr r1, [sp, #0xc]
	sub r3, r3, #0x30
	mla r5, r1, r0, r3
	ldrsb r3, [r12, #1]!
	str r5, [sp, #0xc]
lbl_0200138c:
	cmp r3, #0
	blt lbl_0200139c
	cmp r3, #0x80
	blt lbl_020013a4
lbl_0200139c:
	mov r1, r4
	b lbl_020013b0
lbl_020013a4:
	mov r1, r3, lsl #1
	ldrh r1, [r2, r1]
	and r1, r1, #8
lbl_020013b0:
	cmp r1, #0
	bne lbl_02001378
lbl_020013b8:
	cmp r3, #0x6c
	mov r0, #1
	bgt lbl_020013f0
	cmp r3, #0x68
	blt lbl_020013e4
	beq lbl_0200140c
	cmp r3, #0x6a
	beq lbl_02001458
	cmp r3, #0x6c
	beq lbl_02001428
	b lbl_0200147c
lbl_020013e4:
	cmp r3, #0x4c
	beq lbl_0200144c
	b lbl_0200147c
lbl_020013f0:
	cmp r3, #0x74
	bgt lbl_02001400
	beq lbl_02001464
	b lbl_0200147c
lbl_02001400:
	cmp r3, #0x7a
	beq lbl_02001470
	b lbl_0200147c
lbl_0200140c:
	ldrsb r1, [r12, #1]
	mov r2, #2
	strb r2, [sp, #4]
	cmp r1, #0x68
	streqb r0, [sp, #4]
	ldreqsb r3, [r12, #1]!
	b lbl_02001480
lbl_02001428:
	ldrsb r1, [r12, #1]
	mov r2, #3
	strb r2, [sp, #4]
	cmp r1, #0x6c
	bne lbl_02001480
	mov r1, #4
	strb r1, [sp, #4]
	ldrsb r3, [r12, #1]!
	b lbl_02001480
lbl_0200144c:
	mov r1, #9
	strb r1, [sp, #4]
	b lbl_02001480
lbl_02001458:
	mov r1, #6
	strb r1, [sp, #4]
	b lbl_02001480
lbl_02001464:
	mov r1, #8
	strb r1, [sp, #4]
	b lbl_02001480
lbl_02001470:
	mov r1, #7
	strb r1, [sp, #4]
	b lbl_02001480
lbl_0200147c:
	mov r0, #0
lbl_02001480:
	cmp r0, #0
	ldrnesb r3, [r12, #1]!
	strb r3, [sp, #5]
	cmp r3, #0x61
	bgt lbl_020014d4
	bge lbl_020015bc
	cmp r3, #0x47
	bgt lbl_020014c8
	subs r0, r3, #0x41
	addpl pc, pc, r0, lsl #2
	b lbl_020016c8
	b lbl_020015bc
	b lbl_020016c8
	b lbl_020016c8
	b lbl_020016c8
	b lbl_02001604
	b lbl_02001584
	b lbl_020015f4
lbl_020014c8:
	cmp r3, #0x58
	beq lbl_02001548
	b lbl_020016c8
lbl_020014d4:
	cmp r3, #0x63
	bgt lbl_020014e4
	beq lbl_02001664
	b lbl_020016c8
lbl_020014e4:
	sub r0, r3, #0x64
	cmp r0, #0x14
	addls pc, pc, r0, lsl #2
	b lbl_020016c8
	b lbl_02001548
	b lbl_02001604
	b lbl_02001584
	b lbl_020015f4
	b lbl_020016c8
	b lbl_02001548
	b lbl_020016c8
	b lbl_020016c8
	b lbl_020016c8
	b lbl_020016c8
	b lbl_020016b4
	b lbl_02001548
	b lbl_02001640
	b lbl_020016c8
	b lbl_020016c8
	b lbl_02001690
	b lbl_020016c8
	b lbl_02001548
	b lbl_020016c8
	b lbl_020016c8
	b lbl_02001548
lbl_02001548:
	ldrb r0, [sp, #4]
	cmp r0, #9
	moveq r0, #0xff
	streqb r0, [sp, #5]
	beq lbl_020016d0
	ldrb r0, [sp, #2]
	cmp r0, #0
	moveq r0, #1
	streq r0, [sp, #0xc]
	beq lbl_020016d0
	ldrb r0, [sp]
	cmp r0, #2
	moveq r0, #1
	streqb r0, [sp]
	b lbl_020016d0
lbl_02001584:
	ldrb r0, [sp, #4]
	cmp r0, #2
	cmpne r0, #6
	cmpne r0, #7
	cmpne r0, #8
	cmpne r0, #4
	moveq r0, #0xff
	streqb r0, [sp, #5]
	beq lbl_020016d0
	ldrb r0, [sp, #2]
	cmp r0, #0
	moveq r0, #6
	streq r0, [sp, #0xc]
	b lbl_020016d0
lbl_020015bc:
	ldrb r0, [sp, #2]
	cmp r0, #0
	moveq r0, #0xd
	streq r0, [sp, #0xc]
	ldrb r0, [sp, #4]
	cmp r0, #2
	cmpne r0, #6
	cmpne r0, #7
	cmpne r0, #8
	cmpne r0, #4
	cmpne r0, #1
	moveq r0, #0xff
	streqb r0, [sp, #5]
	b lbl_020016d0
lbl_020015f4:
	ldr r0, [sp, #0xc]
	cmp r0, #0
	moveq r0, #1
	streq r0, [sp, #0xc]
lbl_02001604:
	ldrb r0, [sp, #4]
	cmp r0, #2
	cmpne r0, #6
	cmpne r0, #7
	cmpne r0, #8
	cmpne r0, #4
	cmpne r0, #1
	moveq r0, #0xff
	streqb r0, [sp, #5]
	beq lbl_020016d0
	ldrb r0, [sp, #2]
	cmp r0, #0
	moveq r0, #6
	streq r0, [sp, #0xc]
	b lbl_020016d0
lbl_02001640:
	mov r3, #0x78
	mov r2, #1
	mov r1, #3
	mov r0, #8
	strb r3, [sp, #5]
	strb r2, [sp, #3]
	strb r1, [sp, #4]
	str r0, [sp, #0xc]
	b lbl_020016d0
lbl_02001664:
	ldrb r1, [sp, #4]
	cmp r1, #3
	moveq r0, #5
	streqb r0, [sp, #4]
	beq lbl_020016d0
	ldrb r0, [sp, #2]
	cmp r0, #0
	cmpeq r1, #0
	movne r0, #0xff
	strneb r0, [sp, #5]
	b lbl_020016d0
lbl_02001690:
	ldrb r0, [sp, #4]
	cmp r0, #3
	moveq r0, #5
	streqb r0, [sp, #4]
	beq lbl_020016d0
	cmp r0, #0
	movne r0, #0xff
	strneb r0, [sp, #5]
	b lbl_020016d0
lbl_020016b4:
	ldrb r0, [sp, #4]
	cmp r0, #9
	moveq r0, #0xff
	streqb r0, [sp, #5]
	b lbl_020016d0
lbl_020016c8:
	mov r0, #0xff
	strb r0, [sp, #5]
lbl_020016d0:
	add r0, sp, #0
	ldmia r0, {r0, r1, r2, r3}
	stmia lr, {r0, r1, r2, r3}
	add r0, r12, #1
	add sp, sp, #0x10
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020016f0(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x10
	movs r10, r0
	mov r0, #0
	mov r5, r1
	str r0, [sp, #0xc]
	ldr r7, [sp, #0x4c]
	mov r6, r0
	strb r0, [r5, #-1]!
	ldrb r0, [sp, #0x43]
	str r1, [sp]
	ldrb r8, [sp, #0x45]
	str r0, [sp, #4]
	ldr r0, [sp, #0x48]
	ldrb r11, [sp, #0x41]
	str r0, [sp, #8]
	cmpeq r7, #0
	bne lbl_02001764
	ldr r0, [sp, #4]
	cmp r0, #0
	beq lbl_02001750
	cmp r8, #0x6f
	beq lbl_02001764
lbl_02001750:
	add sp, sp, #0x10
	mov r0, r5
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001764:
	cmp r8, #0x69
	bgt lbl_0200178c
	bge lbl_020017c0
	cmp r8, #0x58
	bgt lbl_02001780
	beq lbl_020017ec
	b lbl_020017f4
lbl_02001780:
	cmp r8, #0x64
	beq lbl_020017c0
	b lbl_020017f4
lbl_0200178c:
	cmp r8, #0x6f
	bgt lbl_020017a0
	moveq r4, #8
	moveq r11, #0
	b lbl_020017f4
lbl_020017a0:
	cmp r8, #0x78
	bgt lbl_020017f4
	cmp r8, #0x75
	blt lbl_020017f4
	beq lbl_020017e0
	cmp r8, #0x78
	beq lbl_020017ec
	b lbl_020017f4
lbl_020017c0:
	cmp r10, #0
	mov r4, #0xa
	bge lbl_020017f4
	mov r0, #1
	cmp r10, #0x80000000
	rsbne r10, r10, #0
	str r0, [sp, #0xc]
	b lbl_020017f4
lbl_020017e0:
	mov r4, #0xa
	mov r11, #0
	b lbl_020017f4
lbl_020017ec:
	mov r4, #0x10
	mov r11, #0
lbl_020017f4:
	mov r0, r10
	mov r1, r4
	bl func_02006238
	mov r9, r1
	mov r0, r10
	mov r1, r4
	bl func_02006238
	cmp r9, #0xa
	mov r10, r0
	addlt r9, r9, #0x30
	blt lbl_0200182c
	cmp r8, #0x78
	addeq r9, r9, #0x57
	addne r9, r9, #0x37
lbl_0200182c:
	cmp r10, #0
	strb r9, [r5, #-1]!
	add r6, r6, #1
	bne lbl_020017f4
	cmp r4, #8
	bne lbl_02001860
	ldr r0, [sp, #4]
	cmp r0, #0
	ldrnesb r0, [r5]
	cmpne r0, #0x30
	movne r0, #0x30
	strneb r0, [r5, #-1]!
	addne r6, r6, #1
lbl_02001860:
	ldrb r0, [sp, #0x40]
	cmp r0, #2
	bne lbl_02001894
	ldr r0, [sp, #0xc]
	ldr r7, [sp, #8]
	cmp r0, #0
	cmpeq r11, #0
	subne r7, r7, #1
	cmp r4, #0x10
	bne lbl_02001894
	ldr r0, [sp, #4]
	cmp r0, #0
	subne r7, r7, #2
lbl_02001894:
	ldr r0, [sp]
	sub r1, r0, r5
	ldr r0, =0x000001FD
	add r1, r7, r1
	cmp r1, r0
	addgt sp, sp, #0x10
	movgt r0, #0
	ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addgt sp, sp, #0x10
	bxgt lr
	cmp r6, r7
	bge lbl_020018d8
	mov r0, #0x30
lbl_020018c8:
	add r6, r6, #1
	cmp r6, r7
	strb r0, [r5, #-1]!
	blt lbl_020018c8
lbl_020018d8:
	cmp r4, #0x10
	bne lbl_020018f4
	ldr r0, [sp, #4]
	cmp r0, #0
	movne r0, #0x30
	strneb r8, [r5, #-1]
	strneb r0, [r5, #-2]!
lbl_020018f4:
	ldr r0, [sp, #0xc]
	cmp r0, #0
	movne r0, #0x2d
	strneb r0, [r5, #-1]!
	bne lbl_02001924
	cmp r11, #1
	moveq r0, #0x2b
	streqb r0, [r5, #-1]!
	beq lbl_02001924
	cmp r11, #2
	moveq r0, #0x20
	streqb r0, [r5, #-1]!
lbl_02001924:
	mov r0, r5
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_0200193c(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x18
	mov r9, r1
	mov r1, #0
	mov r10, r0
	mov r6, r2
	mov r0, r1
	strb r0, [r6, #-1]!
	ldr r0, [sp, #0x58]
	cmp r9, #0
	str r0, [sp, #0x10]
	ldrb r0, [sp, #0x4f]
	cmpeq r10, #0
	str r2, [sp]
	str r0, [sp, #4]
	ldr r0, [sp, #0x54]
	str r1, [sp, #0x14]
	str r0, [sp, #8]
	ldrb r0, [sp, #0x4d]
	mov r7, r1
	ldrb r8, [sp, #0x51]
	str r0, [sp, #0xc]
	ldreq r0, [sp, #0x10]
	cmpeq r0, #0
	bne lbl_020019cc
	ldr r0, [sp, #4]
	cmp r0, #0
	beq lbl_020019b8
	cmp r8, #0x6f
	beq lbl_020019cc
lbl_020019b8:
	add sp, sp, #0x18
	mov r0, r6
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_020019cc:
	cmp r8, #0x69
	bgt lbl_020019f4
	bge lbl_02001a24
	cmp r8, #0x58
	bgt lbl_020019e8
	beq lbl_02001a78
	b lbl_02001a84
lbl_020019e8:
	cmp r8, #0x64
	beq lbl_02001a24
	b lbl_02001a84
lbl_020019f4:
	cmp r8, #0x6f
	bgt lbl_02001a04
	beq lbl_02001a58
	b lbl_02001a84
lbl_02001a04:
	cmp r8, #0x78
	bgt lbl_02001a84
	cmp r8, #0x75
	blt lbl_02001a84
	beq lbl_02001a68
	cmp r8, #0x78
	beq lbl_02001a78
	b lbl_02001a84
lbl_02001a24:
	subs r0, r10, #0
	sbcs r0, r9, #0
	mov r11, #0xa
	mov r5, #0
	bge lbl_02001a84
	cmp r9, #0x80000000
	cmpeq r10, r5
	beq lbl_02001a4c
	rsbs r10, r10, #0
	rsc r9, r9, #0
lbl_02001a4c:
	mov r0, #1
	str r0, [sp, #0x14]
	b lbl_02001a84
lbl_02001a58:
	mov r5, #0
	str r5, [sp, #0xc]
	mov r11, #8
	b lbl_02001a84
lbl_02001a68:
	mov r5, #0
	str r5, [sp, #0xc]
	mov r11, #0xa
	b lbl_02001a84
lbl_02001a78:
	mov r5, #0
	str r5, [sp, #0xc]
	mov r11, #0x10
lbl_02001a84:
	mov r0, r10
	mov r1, r9
	mov r2, r11
	mov r3, r5
	bl func_02005ff0
	mov r4, r0
	mov r0, r10
	mov r1, r9
	mov r2, r11
	mov r3, r5
	bl func_02005fe4
	mov r10, r0
	cmp r4, #0xa
	mov r9, r1
	addlt r0, r4, #0x30
	blt lbl_02001ad0
	cmp r8, #0x78
	addeq r0, r4, #0x57
	addne r0, r4, #0x37
lbl_02001ad0:
	strb r0, [r6, #-1]!
	mov r0, #0
	cmp r9, r0
	cmpeq r10, r0
	add r7, r7, #1
	bne lbl_02001a84
	cmp r5, #0
	cmpeq r11, #8
	bne lbl_02001b10
	ldr r0, [sp, #4]
	cmp r0, #0
	ldrnesb r0, [r6]
	cmpne r0, #0x30
	movne r0, #0x30
	strneb r0, [r6, #-1]!
	addne r7, r7, #1
lbl_02001b10:
	ldrb r0, [sp, #0x4c]
	cmp r0, #2
	bne lbl_02001b60
	ldr r0, [sp, #8]
	str r0, [sp, #0x10]
	ldr r0, [sp, #0x14]
	cmp r0, #0
	ldreq r0, [sp, #0xc]
	cmpeq r0, #0
	ldrne r0, [sp, #0x10]
	subne r0, r0, #1
	strne r0, [sp, #0x10]
	cmp r5, #0
	cmpeq r11, #0x10
	bne lbl_02001b60
	ldr r0, [sp, #4]
	cmp r0, #0
	ldrne r0, [sp, #0x10]
	subne r0, r0, #2
	strne r0, [sp, #0x10]
lbl_02001b60:
	ldr r0, [sp]
	ldr r1, =0x000001FD
	sub r2, r0, r6
	ldr r0, [sp, #0x10]
	add r0, r0, r2
	cmp r0, r1
	addgt sp, sp, #0x18
	movgt r0, #0
	ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addgt sp, sp, #0x10
	bxgt lr
	ldr r0, [sp, #0x10]
	cmp r7, r0
	bge lbl_02001bb0
	mov r1, #0x30
lbl_02001b9c:
	ldr r0, [sp, #0x10]
	add r7, r7, #1
	cmp r7, r0
	strb r1, [r6, #-1]!
	blt lbl_02001b9c
lbl_02001bb0:
	cmp r5, #0
	cmpeq r11, #0x10
	bne lbl_02001bd0
	ldr r0, [sp, #4]
	cmp r0, #0
	movne r0, #0x30
	strneb r8, [r6, #-1]
	strneb r0, [r6, #-2]!
lbl_02001bd0:
	ldr r0, [sp, #0x14]
	cmp r0, #0
	movne r0, #0x2d
	strneb r0, [r6, #-1]!
	bne lbl_02001c04
	ldr r0, [sp, #0xc]
	cmp r0, #1
	moveq r0, #0x2b
	streqb r0, [r6, #-1]!
	beq lbl_02001c04
	cmp r0, #2
	moveq r0, #0x20
	streqb r0, [r6, #-1]!
lbl_02001c04:
	mov r0, r6
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_02001c1c(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x44
	ldr r7, [sp, #0x80]
	ldr r0, =0x000001FD
	mov r8, r2
	cmp r7, r0
	ldrb r6, [sp, #0x79]
	ldrb r5, [sp, #0x77]
	ldrb r4, [sp, #0x75]
	ldr r1, [sp, #0x68]
	ldr r2, [sp, #0x6c]
	addgt sp, sp, #0x44
	movgt r0, #0
	ldmgtia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	addgt sp, sp, #0x10
	bxgt lr
	mov r10, #0
	mov r9, #0x20
	add r0, sp, #8
	add r3, sp, #0xc
	strb r10, [sp, #8]
	strh r9, [sp, #0xa]
	bl func_020042e8
	ldr r0, [sp, #0x68]
	ldr r1, [sp, #0x6c]
	bl func_020036d4
	mov r2, r0
	mov r0, r10
	mov r3, r1
	mov r1, r0
	bl func_020052d4
	bne lbl_02001ce8
	ldr r3, =data_020bb7e0
	sub r0, r8, #6
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	add sp, sp, #0x44
	strb r2, [r8, #-6]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r2, [r3, #4]
	ldrb r1, [r3, #5]
	strb r2, [r0, #4]
	strb r1, [r0, #5]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001ce8:
	ldrb r0, [sp, #0x11]
	cmp r0, #0x49
	bne lbl_02001df8
	ldrsb r0, [sp, #0xc]
	cmp r0, #0
	beq lbl_02001d84
	cmp r6, #0x41
	sub r0, r8, #5
	bne lbl_02001d48
	ldr r3, =data_020bb7e8
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001d48:
	ldr r3, =data_020bb7f0
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001d84:
	cmp r6, #0x41
	sub r0, r8, #4
	bne lbl_02001dc4
	ldr r3, =data_020bb7f8
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001dc4:
	ldr r3, =data_020bb7fc
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001df8:
	cmp r0, #0x4e
	bne lbl_02001f04
	ldrsb r0, [sp, #0xc]
	cmp r0, #0
	beq lbl_02001e90
	cmp r6, #0x41
	sub r0, r8, #5
	bne lbl_02001e54
	ldr r3, =data_020bb800
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001e54:
	ldr r3, =data_020bb808
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001e90:
	cmp r6, #0x41
	sub r0, r8, #4
	bne lbl_02001ed0
	ldr r3, =data_020bb810
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001ed0:
	ldr r3, =data_020bb814
	add sp, sp, #0x44
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
lbl_02001f04:
	mov r3, r10
	mov r1, #1
	mov r0, #0x64
	add r9, sp, #0x68
	strb r1, [sp, #0x34]
	strb r1, [sp, #0x35]
	strb r3, [sp, #0x36]
	strb r3, [sp, #0x37]
	strb r3, [sp, #0x38]
	str r3, [sp, #0x3c]
	str r1, [sp, #0x40]
	strb r0, [sp, #0x39]
lbl_02001f34:
	rsb r1, r3, #7
	ldrsb r2, [r9, r3]
	ldrsb r0, [r9, r1]
	strb r0, [r9, r3]
	add r3, r3, #1
	strb r2, [r9, r1]
	cmp r3, #4
	blt lbl_02001f34
	ldrb r0, [sp, #0x69]
	ldrb r1, [sp, #0x68]
	ldr r9, =0x000007FF
	mov r0, r0, lsl #0x11
	orr r1, r0, r1, lsl #25
	add r0, sp, #0x34
	and lr, r9, r1, lsr #21
	sub r12, sp, #8
	ldmia r0, {r0, r1, r2, r3}
	stmia r12, {r0, r1, r2, r3}
	rsb r0, r9, #0x400
	mov r1, r8
	add r0, lr, r0
	ldmia r12, {r2, r3}
	bl func_020016f0
	cmp r6, #0x61
	moveq r1, #0x70
	movne r1, #0x50
	strb r1, [r0, #-1]!
	mov r1, r7, lsl #2
	mov lr, r7
	cmp r7, #1
	add r8, r1, #0xb
	add r12, sp, #0x68
	blt lbl_02002044
	mov r9, #0x30
lbl_02001fbc:
	cmp r8, #0x40
	bge lbl_0200202c
	ldrb r1, [r12, r8, asr #3]
	and r2, r8, #7
	rsb r3, r2, #7
	mov r2, r1, asr r3
	sub r10, r8, #4
	bic r1, r8, #7
	bic r10, r10, #7
	cmp r1, r10
	add r10, r12, r8, asr #3
	and r1, r2, #0xff
	beq lbl_02002000
	ldrb r2, [r10, #-1]
	mov r2, r2, lsl #8
	orr r1, r1, r2, asr r3
	and r1, r1, #0xff
lbl_02002000:
	and r1, r1, #0xf
	cmp r1, #0xa
	addcc r1, r1, #0x30
	andcc r1, r1, #0xff
	bcc lbl_02002030
	cmp r6, #0x61
	addeq r1, r1, #0x57
	andeq r1, r1, #0xff
	addne r1, r1, #0x37
	andne r1, r1, #0xff
	b lbl_02002030
lbl_0200202c:
	mov r1, r9
lbl_02002030:
	sub lr, lr, #1
	cmp lr, #1
	strb r1, [r0, #-1]!
	sub r8, r8, #4
	bge lbl_02001fbc
lbl_02002044:
	cmp r7, #0
	cmpeq r5, #0
	movne r1, #0x2e
	strneb r1, [r0, #-1]!
	mov r1, #0x31
	strb r1, [r0, #-1]
	cmp r6, #0x61
	moveq r1, #0x78
	movne r1, #0x58
	strb r1, [r0, #-2]!
	mov r1, #0x30
	strb r1, [r0, #-1]!
	ldrsb r1, [sp, #0xc]
	cmp r1, #0
	movne r1, #0x2d
	strneb r1, [r0, #-1]!
	addne sp, sp, #0x44
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	addne sp, sp, #0x10
	bxne lr
	cmp r4, #1
	moveq r1, #0x2b
	streqb r1, [r0, #-1]!
	addeq sp, sp, #0x44
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	addeq sp, sp, #0x10
	bxeq lr
	cmp r4, #2
	moveq r1, #0x20
	streqb r1, [r0, #-1]!
	add sp, sp, #0x44
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020020f8(void)
{
	stmdb sp!, {r4, lr}
	cmp r1, #0
	bge lbl_02002120
lbl_02002104:
	mov r1, #0
	strh r1, [r0, #2]
	mov r1, #1
	strb r1, [r0, #4]
	mov r1, #0x30
	strb r1, [r0, #5]
	ldmia sp!, {r4, pc}
lbl_02002120:
	ldrb lr, [r0, #4]
	cmp r1, lr
	ldmgeia sp!, {r4, pc}
	add r12, r0, #5
	add r2, r12, r1
	add r2, r2, #1
	ldrsb r3, [r2, #-1]!
	sub r3, r3, #0x30
	mov r3, r3, lsl #0x18
	mov r3, r3, asr #0x18
	cmp r3, #5
	bne lbl_02002180
	add r12, r12, lr
lbl_02002154:
	sub r12, r12, #1
	cmp r12, r2
	bls lbl_0200216c
	ldrsb r3, [r12]
	cmp r3, #0x30
	beq lbl_02002154
lbl_0200216c:
	cmp r12, r2
	ldreqsb r3, [r2, #-1]
	andeq r4, r3, #1
	movne r4, #1
	b lbl_02002188
lbl_02002180:
	movgt r4, #1
	movle r4, #0
lbl_02002188:
	cmp r1, #0
	beq lbl_020021e4
	mov r12, #0
	mov lr, #1
lbl_02002198:
	ldrsb r3, [r2, #-1]!
	sub r3, r3, #0x30
	add r3, r3, r4
	mov r3, r3, lsl #0x18
	mov r3, r3, asr #0x18
	cmp r3, #9
	movgt r4, lr
	movle r4, r12
	cmp r4, #0
	bne lbl_020021c8
	cmp r3, #0
	bne lbl_020021d0
lbl_020021c8:
	sub r1, r1, #1
	b lbl_020021dc
lbl_020021d0:
	add r3, r3, #0x30
	strb r3, [r2]
	b lbl_020021e4
lbl_020021dc:
	cmp r1, #0
	bne lbl_02002198
lbl_020021e4:
	cmp r4, #0
	beq lbl_0200220c
	ldrsh r3, [r0, #2]
	mov r2, #1
	mov r1, #0x31
	add r3, r3, #1
	strh r3, [r0, #2]
	strb r2, [r0, #4]
	strb r1, [r0, #5]
	ldmia sp!, {r4, pc}
lbl_0200220c:
	cmp r1, #0
	beq lbl_02002104
	strb r1, [r0, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0200221c(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x2c
	ldr r7, [sp, #0x68]
	ldr r3, =0x000001FD
	ldrb r6, [sp, #0x61]
	ldrb r5, [sp, #0x5f]
	ldrb r4, [sp, #0x5d]
	cmp r7, r3
	mov r10, r0
	mov r8, r1
	mov r9, r2
	addgt sp, sp, #0x2c
	movgt r0, #0
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addgt sp, sp, #0x10
	bxgt lr
	mov r12, #0
	mov r11, #0x20
	add r0, sp, #0
	add r3, sp, #4
	mov r1, r10
	mov r2, r8
	strb r12, [sp]
	strh r11, [sp, #2]
	bl func_020042e8
	ldrb r0, [sp, #8]
	add r1, sp, #9
	add r0, r1, r0
	b lbl_020022ac
lbl_02002294:
	ldrb r2, [sp, #8]
	ldrsh r1, [sp, #6]
	sub r2, r2, #1
	add r1, r1, #1
	strb r2, [sp, #8]
	strh r1, [sp, #6]
lbl_020022ac:
	ldrb r1, [sp, #8]
	cmp r1, #1
	bls lbl_020022c4
	ldrsb r1, [r0, #-1]!
	cmp r1, #0x30
	beq lbl_02002294
lbl_020022c4:
	ldrb r0, [sp, #9]
	cmp r0, #0x30
	beq lbl_020022e4
	cmp r0, #0x49
	beq lbl_020022f0
	cmp r0, #0x4e
	beq lbl_02002450
	b lbl_020025a4
lbl_020022e4:
	mov r0, #0
	strh r0, [sp, #6]
	b lbl_020025a4
lbl_020022f0:
	mov r2, #0
	mov r0, r10
	mov r1, r8
	mov r3, r2
	bl func_02005238
	bcs lbl_020023b4
	cmp r6, #0
	sub r0, r9, #5
	blt lbl_0200231c
	cmp r6, #0x80
	blt lbl_02002324
lbl_0200231c:
	mov r1, #0
	b lbl_02002334
lbl_02002324:
	ldr r1, =data_0208c830
	mov r2, r6, lsl #1
	ldrh r1, [r1, r2]
	and r1, r1, #0x200
lbl_02002334:
	cmp r1, #0
	beq lbl_02002378
	ldr r3, =data_020bb7e8
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02002378:
	ldr r3, =data_020bb7f0
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_020023b4:
	cmp r6, #0
	sub r0, r9, #4
	blt lbl_020023c8
	cmp r6, #0x80
	blt lbl_020023d0
lbl_020023c8:
	mov r1, #0
	b lbl_020023e0
lbl_020023d0:
	ldr r1, =data_0208c830
	mov r2, r6, lsl #1
	ldrh r1, [r1, r2]
	and r1, r1, #0x200
lbl_020023e0:
	cmp r1, #0
	beq lbl_0200241c
	ldr r3, =data_020bb7f8
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_0200241c:
	ldr r3, =data_020bb7fc
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02002450:
	ldrsb r0, [sp, #4]
	cmp r0, #0
	beq lbl_02002508
	cmp r6, #0
	sub r0, r9, #5
	blt lbl_02002470
	cmp r6, #0x80
	blt lbl_02002478
lbl_02002470:
	mov r1, #0
	b lbl_02002488
lbl_02002478:
	ldr r1, =data_0208c830
	mov r2, r6, lsl #1
	ldrh r1, [r1, r2]
	and r1, r1, #0x200
lbl_02002488:
	cmp r1, #0
	beq lbl_020024cc
	ldr r3, =data_020bb800
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_020024cc:
	ldr r3, =data_020bb808
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldrb r1, [r3, #4]
	strb r1, [r0, #4]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02002508:
	cmp r6, #0
	sub r0, r9, #4
	blt lbl_0200251c
	cmp r6, #0x80
	blt lbl_02002524
lbl_0200251c:
	mov r1, #0
	b lbl_02002534
lbl_02002524:
	ldr r1, =data_0208c830
	mov r2, r6, lsl #1
	ldrh r1, [r1, r2]
	and r1, r1, #0x200
lbl_02002534:
	cmp r1, #0
	beq lbl_02002570
	ldr r3, =data_020bb810
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02002570:
	ldr r3, =data_020bb814
	add sp, sp, #0x2c
	ldrb r2, [r3]
	ldrb r1, [r3, #1]
	strb r2, [r0]
	strb r1, [r0, #1]
	ldrb r2, [r3, #2]
	ldrb r1, [r3, #3]
	strb r2, [r0, #2]
	strb r1, [r0, #3]
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_020025a4:
	ldrb r0, [sp, #8]
	ldrsh r1, [sp, #6]
	sub r8, r9, #1
	sub r0, r0, #1
	add r0, r1, r0
	strh r0, [sp, #6]
	mov r0, #0
	strb r0, [r8]
	cmp r6, #0x65
	bgt lbl_020025f8
	bge lbl_02002684
	cmp r6, #0x47
	bgt lbl_02002940
	cmp r6, #0x45
	blt lbl_02002940
	beq lbl_02002684
	cmp r6, #0x46
	beq lbl_020027cc
	cmp r6, #0x47
	beq lbl_02002610
	b lbl_02002940
lbl_020025f8:
	cmp r6, #0x66
	bgt lbl_02002608
	beq lbl_020027cc
	b lbl_02002940
lbl_02002608:
	cmp r6, #0x67
	bne lbl_02002940
lbl_02002610:
	ldrb r0, [sp, #8]
	cmp r0, r7
	ble lbl_02002628
	add r0, sp, #4
	mov r1, r7
	bl func_020020f8
lbl_02002628:
	ldrsh r2, [sp, #6]
	mvn r0, #3
	cmp r2, r0
	blt lbl_02002640
	cmp r2, r7
	blt lbl_02002660
lbl_02002640:
	cmp r5, #0
	ldreqb r0, [sp, #8]
	subne r7, r7, #1
	subeq r7, r0, #1
	cmp r6, #0x67
	moveq r6, #0x65
	movne r6, #0x45
	b lbl_02002684
lbl_02002660:
	cmp r5, #0
	addne r0, r2, #1
	subne r7, r7, r0
	bne lbl_020027cc
	ldrb r1, [sp, #8]
	add r0, r2, #1
	subs r7, r1, r0
	movmi r7, #0
	b lbl_020027cc
lbl_02002684:
	ldrb r0, [sp, #8]
	add r1, r7, #1
	cmp r0, r1
	ble lbl_0200269c
	add r0, sp, #4
	bl func_020020f8
lbl_0200269c:
	ldrsh lr, [sp, #6]
	mov r11, #0x2b
	mov r10, #0
	cmp lr, #0
	rsblt lr, lr, #0
	movlt r11, #0x2d
	ldr r3, =0x66666667
	mov r0, #0xa
	b lbl_020026f0
lbl_020026c0:
	mov r1, lr, lsr #0x1f
	smull r2, r12, r3, lr
	add r12, r1, r12, asr #2
	smull r1, r2, r0, r12
	sub r12, lr, r1
	add r1, r12, #0x30
	strb r1, [r8, #-1]!
	mov r2, lr
	smull r1, lr, r3, r2
	mov r1, r2, lsr #0x1f
	add lr, r1, lr, asr #2
	add r10, r10, #1
lbl_020026f0:
	cmp lr, #0
	bne lbl_020026c0
	cmp r10, #2
	blt lbl_020026c0
	strb r11, [r8, #-1]
	strb r6, [r8, #-2]!
	sub r1, r9, r8
	ldr r0, =0x000001FD
	add r1, r7, r1
	cmp r1, r0
	addgt sp, sp, #0x2c
	movgt r0, #0
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addgt sp, sp, #0x10
	bxgt lr
	ldrb r1, [sp, #8]
	add r0, r7, #1
	cmp r1, r0
	bge lbl_0200275c
	add r0, r7, #2
	sub r0, r0, r1
	subs r1, r0, #1
	beq lbl_0200275c
	mov r0, #0x30
lbl_02002750:
	strb r0, [r8, #-1]!
	subs r1, r1, #1
	bne lbl_02002750
lbl_0200275c:
	ldrb r1, [sp, #8]
	add r0, sp, #9
	add r2, r0, r1
	subs r1, r1, #1
	beq lbl_02002780
lbl_02002770:
	ldrsb r0, [r2, #-1]!
	subs r1, r1, #1
	strb r0, [r8, #-1]!
	bne lbl_02002770
lbl_02002780:
	cmp r7, #0
	cmpeq r5, #0
	movne r0, #0x2e
	strneb r0, [r8, #-1]!
	ldrb r0, [sp, #9]
	strb r0, [r8, #-1]!
	ldrsb r0, [sp, #4]
	cmp r0, #0
	movne r0, #0x2d
	strneb r0, [r8, #-1]!
	bne lbl_02002940
	cmp r4, #1
	moveq r0, #0x2b
	streqb r0, [r8, #-1]!
	beq lbl_02002940
	cmp r4, #2
	moveq r0, #0x20
	streqb r0, [r8, #-1]!
	b lbl_02002940
lbl_020027cc:
	ldrsh r3, [sp, #6]
	ldrb r2, [sp, #8]
	sub r0, r2, r3
	subs r1, r0, #1
	movmi r1, #0
	cmp r1, r7
	ble lbl_0200280c
	sub r1, r1, r7
	add r0, sp, #4
	sub r1, r2, r1
	bl func_020020f8
	ldrsh r3, [sp, #6]
	ldrb r2, [sp, #8]
	sub r0, r2, r3
	subs r1, r0, #1
	movmi r1, #0
lbl_0200280c:
	adds r0, r3, #1
	movmi r0, #0
	ldr r3, =0x000001FD
	add r6, r0, r1
	cmp r6, r3
	addgt sp, sp, #0x2c
	movgt r0, #0
	ldmgtia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addgt sp, sp, #0x10
	bxgt lr
	add r3, sp, #9
	sub r6, r7, r1
	cmp r6, #0
	add r2, r3, r2
	mov r9, #0
	ble lbl_02002860
	mov r3, #0x30
lbl_02002850:
	add r9, r9, #1
	cmp r9, r6
	strb r3, [r8, #-1]!
	blt lbl_02002850
lbl_02002860:
	mov r6, #0
	b lbl_02002874
lbl_02002868:
	ldrsb r3, [r2, #-1]!
	add r6, r6, #1
	strb r3, [r8, #-1]!
lbl_02002874:
	cmp r6, r1
	ldrltb r3, [sp, #8]
	cmplt r6, r3
	blt lbl_02002868
	cmp r6, r1
	bge lbl_020028a0
	mov r3, #0x30
lbl_02002890:
	add r6, r6, #1
	cmp r6, r1
	strb r3, [r8, #-1]!
	blt lbl_02002890
lbl_020028a0:
	cmp r7, #0
	cmpeq r5, #0
	movne r1, #0x2e
	strneb r1, [r8, #-1]!
	cmp r0, #0
	beq lbl_02002908
	ldrb r1, [sp, #8]
	mov r5, #0
	sub r1, r0, r1
	cmp r1, #0
	ble lbl_020028e8
	mov r3, #0x30
lbl_020028d0:
	strb r3, [r8, #-1]!
	ldrb r1, [sp, #8]
	add r5, r5, #1
	sub r1, r0, r1
	cmp r5, r1
	blt lbl_020028d0
lbl_020028e8:
	cmp r5, r0
	bge lbl_02002910
lbl_020028f0:
	ldrsb r1, [r2, #-1]!
	add r5, r5, #1
	cmp r5, r0
	strb r1, [r8, #-1]!
	blt lbl_020028f0
	b lbl_02002910
lbl_02002908:
	mov r0, #0x30
	strb r0, [r8, #-1]!
lbl_02002910:
	ldrsb r0, [sp, #4]
	cmp r0, #0
	movne r0, #0x2d
	strneb r0, [r8, #-1]!
	bne lbl_02002940
	cmp r4, #1
	moveq r0, #0x2b
	streqb r0, [r8, #-1]!
	beq lbl_02002940
	cmp r4, #2
	moveq r0, #0x20
	streqb r0, [r8, #-1]!
lbl_02002940:
	mov r0, r8
	add sp, sp, #0x2c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_02002980(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x22c
	mov r3, #0x20
	mov r11, r2
	strb r3, [sp, #0x19]
	ldrsb r2, [r11]
	mov r9, r0
	mov r8, r1
	cmp r2, #0
	mov r10, #0
	beq lbl_02003188
lbl_020029b0:
	mov r0, r11
	mov r1, #0x25
	bl func_02003670
	str r0, [sp, #0xc]
	cmp r0, #0
	bne lbl_02002a04
	mov r0, r11
	bl func_020033c4
	movs r2, r0
	add r10, r10, r2
	beq lbl_02003188
	mov r0, r8
	mov r1, r11
	blx r9
	cmp r0, #0
	bne lbl_02003188
	add sp, sp, #0x22c
	mvn r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02002a04:
	subs r2, r0, r11
	add r10, r10, r2
	beq lbl_02002a34
	mov r0, r8
	mov r1, r11
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
lbl_02002a34:
	ldr r0, [sp, #0xc]
	add r1, sp, #0x25c
	add r2, sp, #0x1c
	bl func_02001160
	ldrb r1, [sp, #0x21]
	mov r11, r0
	cmp r1, #0x61
	bgt lbl_02002aa0
	bge lbl_02002e04
	cmp r1, #0x47
	bgt lbl_02002a94
	subs r0, r1, #0x41
	addpl pc, pc, r0, lsl #2
	b lbl_02002a88
	b lbl_02002e04
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002d9c
	b lbl_02002d9c
	b lbl_02002d9c
lbl_02002a88:
	cmp r1, #0x25
	beq lbl_02002fd8
	b lbl_02002fec
lbl_02002a94:
	cmp r1, #0x58
	beq lbl_02002c60
	b lbl_02002fec
lbl_02002aa0:
	cmp r1, #0x75
	bgt lbl_02002b08
	subs r0, r1, #0x64
	addpl pc, pc, r0, lsl #2
	b lbl_02002afc
	b lbl_02002b20
	b lbl_02002d9c
	b lbl_02002d9c
	b lbl_02002d9c
	b lbl_02002fec
	b lbl_02002b20
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002f2c
	b lbl_02002c60
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002fec
	b lbl_02002e6c
	b lbl_02002fec
	b lbl_02002c60
lbl_02002afc:
	cmp r1, #0x63
	beq lbl_02002fb8
	b lbl_02002fec
lbl_02002b08:
	cmp r1, #0x78
	bgt lbl_02002b18
	beq lbl_02002c60
	b lbl_02002fec
lbl_02002b18:
	cmp r1, #0xff
	b lbl_02002fec
lbl_02002b20:
	ldrb r0, [sp, #0x20]
	cmp r0, #3
	bne lbl_02002b40
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002bd8
lbl_02002b40:
	cmp r0, #4
	bne lbl_02002b68
	ldr r1, [sp, #0x25c]
	add r2, r1, #8
	str r2, [sp, #0x25c]
	ldr r1, [r2, #-8]
	str r1, [sp, #0x10]
	ldr r1, [r2, #-4]
	str r1, [sp, #0x14]
	b lbl_02002bd8
lbl_02002b68:
	cmp r0, #6
	bne lbl_02002b90
	ldr r1, [sp, #0x25c]
	add r2, r1, #8
	str r2, [sp, #0x25c]
	ldr r1, [r2, #-8]
	str r1, [sp, #0x10]
	ldr r1, [r2, #-4]
	str r1, [sp, #0x14]
	b lbl_02002bd8
lbl_02002b90:
	cmp r0, #7
	bne lbl_02002bac
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002bd8
lbl_02002bac:
	cmp r0, #8
	bne lbl_02002bc8
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002bd8
lbl_02002bc8:
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
lbl_02002bd8:
	cmp r0, #2
	moveq r1, r5, lsl #0x10
	moveq r5, r1, asr #0x10
	cmp r0, #1
	moveq r1, r5, lsl #0x18
	moveq r5, r1, asr #0x18
	cmp r0, #4
	cmpne r0, #6
	add r0, sp, #0x1c
	bne lbl_02002c2c
	sub r4, sp, #4
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	ldr r3, [r4]
	ldr r0, [sp, #0x10]
	ldr r1, [sp, #0x14]
	add r2, sp, #0x22c
	bl func_0200193c
	movs r7, r0
	beq lbl_02002fec
	b lbl_02002c50
lbl_02002c2c:
	sub r4, sp, #8
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	add r1, sp, #0x22c
	mov r0, r5
	ldmia r4, {r2, r3}
	bl func_020016f0
	movs r7, r0
	beq lbl_02002fec
lbl_02002c50:
	add r0, sp, #0x200
	add r0, r0, #0x2b
	sub r6, r0, r7
	b lbl_02003038
lbl_02002c60:
	ldrb r0, [sp, #0x20]
	cmp r0, #3
	bne lbl_02002c80
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002d18
lbl_02002c80:
	cmp r0, #4
	bne lbl_02002ca8
	ldr r1, [sp, #0x25c]
	add r2, r1, #8
	str r2, [sp, #0x25c]
	ldr r1, [r2, #-8]
	str r1, [sp, #0x10]
	ldr r1, [r2, #-4]
	str r1, [sp, #0x14]
	b lbl_02002d18
lbl_02002ca8:
	cmp r0, #6
	bne lbl_02002cd0
	ldr r1, [sp, #0x25c]
	add r2, r1, #8
	str r2, [sp, #0x25c]
	ldr r1, [r2, #-8]
	str r1, [sp, #0x10]
	ldr r1, [r2, #-4]
	str r1, [sp, #0x14]
	b lbl_02002d18
lbl_02002cd0:
	cmp r0, #7
	bne lbl_02002cec
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002d18
lbl_02002cec:
	cmp r0, #8
	bne lbl_02002d08
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
	b lbl_02002d18
lbl_02002d08:
	ldr r1, [sp, #0x25c]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r5, [r1, #-4]
lbl_02002d18:
	cmp r0, #2
	moveq r1, r5, lsl #0x10
	moveq r5, r1, lsr #0x10
	cmp r0, #1
	andeq r5, r5, #0xff
	cmp r0, #4
	cmpne r0, #6
	add r0, sp, #0x1c
	bne lbl_02002d68
	sub r4, sp, #4
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	ldr r3, [r4]
	ldr r0, [sp, #0x10]
	ldr r1, [sp, #0x14]
	add r2, sp, #0x22c
	bl func_0200193c
	movs r7, r0
	beq lbl_02002fec
	b lbl_02002d8c
lbl_02002d68:
	sub r4, sp, #8
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	add r1, sp, #0x22c
	mov r0, r5
	ldmia r4, {r2, r3}
	bl func_020016f0
	movs r7, r0
	beq lbl_02002fec
lbl_02002d8c:
	add r0, sp, #0x200
	add r0, r0, #0x2b
	sub r6, r0, r7
	b lbl_02003038
lbl_02002d9c:
	ldrb r0, [sp, #0x20]
	cmp r0, #9
	ldrne r0, [sp, #0x25c]
	addne r0, r0, #8
	strne r0, [sp, #0x25c]
	bne lbl_02002dc0
	ldr r0, [sp, #0x25c]
	add r0, r0, #8
	str r0, [sp, #0x25c]
lbl_02002dc0:
	ldr r7, [r0, #-8]
	ldr r6, [r0, #-4]
	add r0, sp, #0x1c
	sub r4, sp, #4
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	ldr r3, [r4]
	mov r0, r7
	mov r1, r6
	add r2, sp, #0x22c
	bl func_0200221c
	movs r7, r0
	beq lbl_02002fec
	add r0, sp, #0x200
	add r0, r0, #0x2b
	sub r6, r0, r7
	b lbl_02003038
lbl_02002e04:
	ldrb r0, [sp, #0x20]
	cmp r0, #9
	ldrne r0, [sp, #0x25c]
	addne r0, r0, #8
	strne r0, [sp, #0x25c]
	bne lbl_02002e28
	ldr r0, [sp, #0x25c]
	add r0, r0, #8
	str r0, [sp, #0x25c]
lbl_02002e28:
	ldr r7, [r0, #-8]
	ldr r6, [r0, #-4]
	add r0, sp, #0x1c
	sub r4, sp, #4
	ldmia r0, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	ldr r3, [r4]
	mov r0, r7
	mov r1, r6
	add r2, sp, #0x22c
	bl func_02001c1c
	movs r7, r0
	beq lbl_02002fec
	add r0, sp, #0x200
	add r0, r0, #0x2b
	sub r6, r0, r7
	b lbl_02003038
lbl_02002e6c:
	ldrb r0, [sp, #0x20]
	cmp r0, #5
	bne lbl_02002eac
	ldr r0, [sp, #0x25c]
	mov r2, #0x200
	add r0, r0, #4
	str r0, [sp, #0x25c]
	ldr r1, [r0, #-4]
	add r0, sp, #0x2c
	cmp r1, #0
	ldreq r1, =data_020bb818
	bl func_02000fd8
	cmp r0, #0
	blt lbl_02002fec
	add r7, sp, #0x2c
	b lbl_02002ebc
lbl_02002eac:
	ldr r0, [sp, #0x25c]
	add r0, r0, #4
	str r0, [sp, #0x25c]
	ldr r7, [r0, #-4]
lbl_02002ebc:
	ldrb r0, [sp, #0x1f]
	cmp r7, #0
	ldreq r7, =data_020bb81c
	cmp r0, #0
	beq lbl_02002ef0
	ldrb r0, [sp, #0x1e]
	ldrb r6, [r7], #1
	cmp r0, #0
	beq lbl_02003038
	ldr r0, [sp, #0x28]
	cmp r6, r0
	movgt r6, r0
	b lbl_02003038
lbl_02002ef0:
	ldrb r0, [sp, #0x1e]
	cmp r0, #0
	beq lbl_02002f1c
	ldr r6, [sp, #0x28]
	mov r0, r7
	mov r2, r6
	mov r1, #0
	bl func_02001084
	cmp r0, #0
	subne r6, r0, r7
	b lbl_02003038
lbl_02002f1c:
	mov r0, r7
	bl func_020033c4
	mov r6, r0
	b lbl_02003038
lbl_02002f2c:
	ldr r1, [sp, #0x25c]
	ldrb r0, [sp, #0x20]
	add r1, r1, #4
	str r1, [sp, #0x25c]
	ldr r1, [r1, #-4]
	cmp r0, #8
	addls pc, pc, r0, lsl #2
	b lbl_0200317c
	b lbl_02002f70
	b lbl_0200317c
	b lbl_02002f78
	b lbl_02002f80
	b lbl_02002fa8
	b lbl_0200317c
	b lbl_02002f88
	b lbl_02002f98
	b lbl_02002fa0
lbl_02002f70:
	str r10, [r1]
	b lbl_0200317c
lbl_02002f78:
	strh r10, [r1]
	b lbl_0200317c
lbl_02002f80:
	str r10, [r1]
	b lbl_0200317c
lbl_02002f88:
	str r10, [r1]
	mov r0, r10, asr #0x1f
	str r0, [r1, #4]
	b lbl_0200317c
lbl_02002f98:
	str r10, [r1]
	b lbl_0200317c
lbl_02002fa0:
	str r10, [r1]
	b lbl_0200317c
lbl_02002fa8:
	str r10, [r1]
	mov r0, r10, asr #0x1f
	str r0, [r1, #4]
	b lbl_0200317c
lbl_02002fb8:
	ldr r0, [sp, #0x25c]
	add r7, sp, #0x2c
	add r0, r0, #4
	str r0, [sp, #0x25c]
	ldr r0, [r0, #-4]
	mov r6, #1
	strb r0, [sp, #0x2c]
	b lbl_02003038
lbl_02002fd8:
	mov r0, #0x25
	strb r0, [sp, #0x2c]
	add r7, sp, #0x2c
	mov r6, #1
	b lbl_02003038
lbl_02002fec:
	ldr r0, [sp, #0xc]
	bl func_020033c4
	movs r4, r0
	beq lbl_02003024
	ldr r1, [sp, #0xc]
	mov r0, r8
	mov r2, r4
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
lbl_02003024:
	add sp, sp, #0x22c
	add r0, r10, r4
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
lbl_02003038:
	ldrb r0, [sp, #0x1c]
	mov r4, r6
	cmp r0, #0
	beq lbl_020030ec
	cmp r0, #2
	moveq r0, #0x30
	movne r0, #0x20
	strb r0, [sp, #0x19]
	ldrsb r0, [r7]
	cmp r0, #0x2b
	cmpne r0, #0x2d
	cmpne r0, #0x20
	bne lbl_020030a8
	ldrsb r0, [sp, #0x19]
	cmp r0, #0x30
	bne lbl_020030a8
	mov r0, r8
	mov r1, r7
	mov r2, #1
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
	add r7, r7, #1
	sub r6, r6, #1
lbl_020030a8:
	ldr r0, [sp, #0x24]
	cmp r4, r0
	bge lbl_020030ec
lbl_020030b4:
	mov r0, r8
	add r1, sp, #0x19
	mov r2, #1
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
	ldr r0, [sp, #0x24]
	add r4, r4, #1
	cmp r4, r0
	blt lbl_020030b4
lbl_020030ec:
	cmp r6, #0
	beq lbl_0200311c
	mov r0, r8
	mov r1, r7
	mov r2, r6
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
lbl_0200311c:
	ldrb r0, [sp, #0x1c]
	cmp r0, #0
	bne lbl_02003178
	ldr r0, [sp, #0x24]
	cmp r4, r0
	bge lbl_02003178
	mov r6, #0x20
	add r7, sp, #0x18
lbl_0200313c:
	mov r0, r8
	mov r1, r7
	mov r2, #1
	strb r6, [sp, #0x18]
	blx r9
	cmp r0, #0
	addeq sp, sp, #0x22c
	mvneq r0, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	addeq sp, sp, #0x10
	bxeq lr
	ldr r0, [sp, #0x24]
	add r4, r4, #1
	cmp r4, r0
	blt lbl_0200313c
lbl_02003178:
	add r10, r10, r4
lbl_0200317c:
	ldrsb r0, [r11]
	cmp r0, #0
	bne lbl_020029b0
lbl_02003188:
	mov r0, r10
	add sp, sp, #0x22c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020031a4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	ldr r3, [r4, #8]
	mov r5, r2
	ldr r2, [r4, #4]
	add r0, r3, r5
	cmp r0, r2
	ldr r0, [r4]
	subhi r5, r2, r3
	mov r2, r5
	add r0, r0, r3
	bl func_02001050
	ldr r1, [r4, #8]
	mov r0, #1
	add r1, r1, r5
	str r1, [r4, #8]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020031e8(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0xc
	mov r5, r0
	mov r4, r1
	mov r12, #0
	ldr r0, =func_020031a4
	add r1, sp, #0
	str r5, [sp]
	str r4, [sp, #4]
	str r12, [sp, #8]
	bl func_02002980
	cmp r5, #0
	addeq sp, sp, #0xc
	ldmeqia sp!, {r4, r5, pc}
	cmp r0, r4
	movcc r1, #0
	addcc sp, sp, #0xc
	strccb r1, [r5, r0]
	ldmccia sp!, {r4, r5, pc}
	cmp r4, #0
	addne r1, r5, r4
	movne r2, #0
	strneb r2, [r1, #-1]
	add sp, sp, #0xc
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02003250(void)
{
	ldr r12, =func_020031e8
	mov r3, r2
	mov r2, r1
	mvn r1, #0
	bx r12
}

extern "C" asm void func_02003268(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, lr}
	add r1, sp, #0xc
	bic r1, r1, #3
	add r3, r1, #4
	ldr r2, [sp, #0xc]
	mvn r1, #0
	bl func_020031e8
	ldmia sp!, {r3, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_02003294(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	cmp r5, #1
	blt lbl_020032ac
	cmp r5, #7
	ble lbl_020032b4
lbl_020032ac:
	mvn r0, #0
	ldmia sp!, {r3, r4, r5, pc}
lbl_020032b4:
	ldr r0, =data_020c4c20
	bl func_02079090
	cmp r0, #0
	bne lbl_020032e8
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r2, [r0, #4]
	ldr r0, =data_020c4b54
	ldr r3, [r2, #0x6c]
	mov r2, #1
	str r3, [r1, #0x1c]
	str r2, [r0, #0x1c]
	b lbl_02003340
lbl_020032e8:
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r0, [r0, #4]
	ldr r1, [r1, #0x1c]
	ldr r0, [r0, #0x6c]
	cmp r1, r0
	bne lbl_02003318
	ldr r0, =data_020c4b54
	ldr r1, [r0, #0x1c]
	add r1, r1, #1
	str r1, [r0, #0x1c]
	b lbl_02003340
lbl_02003318:
	ldr r0, =data_020c4c20
	bl func_02078f74
	ldr r0, =data_021141c8
	ldr r1, =data_020c4b30
	ldr r2, [r0, #4]
	ldr r0, =data_020c4b54
	ldr r3, [r2, #0x6c]
	mov r2, #1
	str r3, [r1, #0x1c]
	str r2, [r0, #0x1c]
lbl_02003340:
	ldr r1, =data_020c4f50
	sub r2, r5, #1
	ldr r4, [r1, r2, lsl #2]
	cmp r4, #1
	movne r0, #0
	strne r0, [r1, r2, lsl #2]
	ldr r0, =data_020c4b54
	ldr r1, [r0, #0x1c]
	subs r1, r1, #1
	str r1, [r0, #0x1c]
	bne lbl_02003374
	ldr r0, =data_020c4c20
	bl func_02078ff8
lbl_02003374:
	cmp r4, #1
	beq lbl_02003388
	cmp r4, #0
	cmpeq r5, #1
	bne lbl_02003390
lbl_02003388:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
lbl_02003390:
	cmp r4, #0
	bne lbl_020033a0
	mov r0, #0
	bl func_02000be4
lbl_020033a0:
	mov r0, r5
	blx r4
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020033c4(void)
{
	mvn r2, #0
lbl_020033c8:
	ldrsb r1, [r0], #1
	add r2, r2, #1
	cmp r1, #0
	bne lbl_020033c8
	mov r0, r2
	bx lr
}

extern "C" asm void func_020033e0(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	and r4, r1, #3
	and r3, r0, #3
	mov r2, r0
	cmp r3, r4
	bne lbl_0200347c
	cmp r4, #0
	beq lbl_02003438
	ldrb r3, [r1]
	strb r3, [r0]
	cmp r3, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	rsbs r4, r4, #3
	beq lbl_02003430
lbl_02003418:
	ldrb r3, [r1, #1]!
	cmp r3, #0
	strb r3, [r2, #1]!
	ldmeqia sp!, {r3, r4, r5, pc}
	subs r4, r4, #1
	bne lbl_02003418
lbl_02003430:
	add r2, r2, #1
	add r1, r1, #1
lbl_02003438:
	ldr r5, [r1]
	ldr r3, =0xFEFEFEFF
	mvn r4, r5
	add lr, r5, r3
	ldr r12, =0x80808080
	and r4, lr, r4
	tst r4, r12
	bne lbl_0200347c
	sub r2, r2, #4
lbl_0200345c:
	str r5, [r2, #4]!
	ldr r5, [r1, #4]!
	add r4, r5, r3
	mvn lr, r5
	and lr, r4, lr
	tst lr, r12
	beq lbl_0200345c
	add r2, r2, #4
lbl_0200347c:
	ldrb r3, [r1]
	strb r3, [r2]
	cmp r3, #0
	ldmeqia sp!, {r3, r4, r5, pc}
lbl_0200348c:
	ldrb r3, [r1, #1]!
	cmp r3, #0
	strb r3, [r2, #1]!
	bne lbl_0200348c
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020034a8(void)
{
	stmdb sp!, {r3, lr}
	mov lr, r0
	cmp r2, #0
	ldmeqia sp!, {r3, pc}
lbl_020034b8:
	ldrsb r3, [r1], #1
	mov r12, lr
	strb r3, [lr], #1
	ldrsb r3, [r12]
	cmp r3, #0
	bne lbl_020034ec
	subs r2, r2, #1
	ldmeqia sp!, {r3, pc}
	mov r1, #0
lbl_020034dc:
	strb r1, [lr], #1
	subs r2, r2, #1
	bne lbl_020034dc
	ldmia sp!, {r3, pc}
lbl_020034ec:
	subs r2, r2, #1
	bne lbl_020034b8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020034f8(void)
{
	mov r3, r0
lbl_020034fc:
	ldrsb r2, [r3], #1
	cmp r2, #0
	bne lbl_020034fc
	sub r3, r3, #1
lbl_0200350c:
	ldrsb r2, [r1], #1
	mov r12, r3
	strb r2, [r3], #1
	ldrsb r2, [r12]
	cmp r2, #0
	bne lbl_0200350c
	bx lr
}

extern "C" asm void func_02003528(void)
{
	stmdb sp!, {r4, lr}
	ldrb r2, [r0]
	ldrb r3, [r1]
	subs r3, r2, r3
	movne r0, r3
	ldmneia sp!, {r4, pc}
	and r4, r0, #3
	and r3, r1, #3
	cmp r3, r4
	bne lbl_02003604
	cmp r4, #0
	beq lbl_0200359c
	cmp r2, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	rsbs r4, r4, #3
	beq lbl_02003594
lbl_0200356c:
	ldrb r3, [r0, #1]!
	ldrb r2, [r1, #1]!
	subs r2, r3, r2
	movne r0, r2
	ldmneia sp!, {r4, pc}
	cmp r3, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	subs r4, r4, #1
	bne lbl_0200356c
lbl_02003594:
	add r0, r0, #1
	add r1, r1, #1
lbl_0200359c:
	ldr r2, [r0]
	ldr r3, =0xFEFEFEFF
	mvn r4, r2
	add lr, r2, r3
	ldr r12, =0x80808080
	and r4, lr, r4
	tst r4, r12
	ldr r4, [r1]
	bne lbl_020035f0
	cmp r2, r4
	bne lbl_020035e4
lbl_020035c8:
	ldr r2, [r0, #4]!
	ldr r4, [r1, #4]!
	add lr, r2, r3
	tst lr, r12
	bne lbl_020035f0
	cmp r2, r4
	beq lbl_020035c8
lbl_020035e4:
	sub r0, r0, #1
	sub r1, r1, #1
	b lbl_02003604
lbl_020035f0:
	ldrb r2, [r0]
	ldrb r3, [r1]
	subs r3, r2, r3
	movne r0, r3
	ldmneia sp!, {r4, pc}
lbl_02003604:
	cmp r2, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
lbl_02003610:
	ldrb r3, [r0, #1]!
	ldrb r2, [r1, #1]!
	subs r2, r3, r2
	movne r0, r2
	ldmneia sp!, {r4, pc}
	cmp r3, #0
	bne lbl_02003610
	mov r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0200363c(void)
{
	cmp r2, #0
	beq lbl_02003668
lbl_02003644:
	ldrb r12, [r1], #1
	ldrb r3, [r0], #1
	cmp r3, r12
	subne r0, r3, r12
	bxne lr
	cmp r3, #0
	beq lbl_02003668
	subs r2, r2, #1
	bne lbl_02003644
lbl_02003668:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02003670(void)
{
	ldrsb r2, [r0], #1
	mov r1, r1, lsl #0x18
	mov r1, r1, asr #0x18
	cmp r2, #0
	beq lbl_0200369c
lbl_02003684:
	cmp r2, r1
	subeq r0, r0, #1
	bxeq lr
	ldrsb r2, [r0], #1
	cmp r2, #0
	bne lbl_02003684
lbl_0200369c:
	cmp r1, #0
	movne r0, #0
	subeq r0, r0, #1
	bx lr
}

extern "C" asm void func_020036ac(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	ldr r1, [sp, #4]
	ldr r0, [sp, #0xc]
	bic r1, r1, #0x80000000
	and r0, r0, #0x80000000
	orr r1, r1, r0
	ldr r0, [sp]
	str r1, [sp, #4]
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020036d4(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	add r2, sp, #0
	ldr r1, [r2, #4]
	ldr r0, [sp]
	bic r1, r1, #0x80000000
	str r1, [r2, #4]
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020036f4(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, lr}
	ldr r1, [sp, #0xc]
	ldr r0, =0x7FF00000
	mov r4, r2
	bic r3, r1, #0x80000000
	mov r2, #0
	str r2, [r4]
	cmp r3, r0
	ldr r0, [sp, #8]
	bge lbl_02003728
	orrs r0, r3, r0
	bne lbl_0200373c
lbl_02003728:
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_0200373c:
	cmp r3, #0x100000
	bge lbl_02003768
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	ldr r3, =0x43500000
	bl func_0200484c
	mvn r2, #0x35
	str r0, [sp, #8]
	str r1, [sp, #0xc]
	str r2, [r4]
	bic r3, r1, #0x80000000
lbl_02003768:
	ldr r2, =0x800FFFFF
	ldr r0, =0xFFFFFC02
	and r1, r1, r2
	orr r1, r1, #0xfe00000
	orr r1, r1, #0x30000000
	ldr r2, [r4]
	add r0, r0, r3, asr #20
	add r2, r2, r0
	ldr r0, [sp, #8]
	str r2, [r4]
	str r1, [sp, #0xc]
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020037b0(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r4, lr}
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	mov r4, r2
	bl func_02004438
	cmp r0, #2
	ble lbl_020037e8
	mov r0, #0
	ldr r2, [sp, #8]
	ldr r3, [sp, #0xc]
	mov r1, r0
	bl func_020052d4
	bne lbl_020037fc
lbl_020037e8:
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_020037fc:
	ldr r3, [sp, #0xc]
	ldr r0, =0x7FF00000
	ldr r1, [sp, #8]
	and r0, r3, r0
	movs r12, r0, asr #0x14
	bne lbl_02003888
	bic r0, r3, #0x80000000
	orrs r0, r1, r0
	ldreq r0, [sp, #8]
	ldreq r1, [sp, #0xc]
	ldmeqia sp!, {r4, lr}
	addeq sp, sp, #0x10
	bxeq lr
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	ldr r3, =0x43500000
	mov r2, #0
	bl func_0200484c
	mov r3, r1
	ldr r1, =0x7FF00000
	ldr r12, =0xFFFF3CB0
	and r1, r3, r1
	mov r2, r0
	mov r0, r1, asr #0x14
	str r2, [sp, #8]
	str r3, [sp, #0xc]
	cmp r4, r12
	sub r12, r0, #0x36
	bge lbl_02003888
	ldr r0, =0xC2F8F359
	ldr r1, =0x01A56E1F
	bl func_0200484c
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_02003888:
	ldr r0, =0x000007FF
	cmp r12, r0
	bne lbl_020038b4
	ldr r0, [sp, #8]
	ldr r1, [sp, #0xc]
	mov r2, r0
	mov r3, r1
	bl func_020044a8
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_020038b4:
	add r2, r12, r4
	sub r0, r0, #1
	cmp r2, r0
	ble lbl_020038f8
	ldr r2, [sp, #8]
	ldr r3, [sp, #0xc]
	ldr r0, =0x8800759C
	ldr r1, =0x7E37E43C
	bl func_020036ac
	mov r2, r0
	mov r3, r1
	ldr r0, =0x8800759C
	ldr r1, =0x7E37E43C
	bl func_0200484c
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_020038f8:
	cmp r2, #0
	ble lbl_02003920
	ldr r1, =0x800FFFFF
	ldr r0, [sp, #8]
	and r1, r3, r1
	orr r1, r1, r2, lsl #20
	str r1, [sp, #0xc]
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_02003920:
	mvn r0, #0x35
	cmp r2, r0
	bgt lbl_020039a0
	ldr r0, =0x0000C350
	cmp r4, r0
	ble lbl_0200396c
	ldr r2, [sp, #8]
	ldr r3, [sp, #0xc]
	ldr r0, =0x8800759C
	ldr r1, =0x7E37E43C
	bl func_020036ac
	mov r2, r0
	mov r3, r1
	ldr r0, =0x8800759C
	ldr r1, =0x7E37E43C
	bl func_0200484c
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_0200396c:
	ldr r2, [sp, #8]
	ldr r3, [sp, #0xc]
	ldr r0, =0xC2F8F359
	ldr r1, =0x01A56E1F
	bl func_020036ac
	mov r2, r0
	mov r3, r1
	ldr r0, =0xC2F8F359
	ldr r1, =0x01A56E1F
	bl func_0200484c
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
lbl_020039a0:
	ldr r0, =0x800FFFFF
	add r1, r2, #0x36
	and r0, r3, r0
	orr r3, r0, r1, lsl #20
	ldr r2, [sp, #8]
	ldr r1, =0x3C900000
	mov r0, #0
	str r3, [sp, #0xc]
	bl func_0200484c
	ldmia sp!, {r4, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020039fc(void)
{
	add r3, r0, #5
	ldrb r2, [r3, r1]
	add r12, r3, r1
	cmp r2, #5
	movhi r0, #1
	bxhi lr
	mvncc r0, #0
	bxcc lr
	ldrb r2, [r0, #4]
	add r12, r12, #1
	add r3, r3, r2
	cmp r12, r3
	bcs lbl_02003a4c
lbl_02003a30:
	ldrb r2, [r12]
	cmp r2, #0
	movne r0, #1
	bxne lr
	add r12, r12, #1
	cmp r12, r3
	bcc lbl_02003a30
lbl_02003a4c:
	sub r1, r1, #1
	add r0, r0, r1
	ldrb r0, [r0, #5]
	tst r0, #1
	movne r0, #1
	mvneq r0, #0
	bx lr
}

extern "C" asm void func_02003a68(void)
{
	add r3, r0, #5
	add r1, r3, r1
	sub r12, r1, #1
	mov r1, #0
lbl_02003a78:
	ldrb r2, [r12]
	cmp r2, #9
	addcc r0, r2, #1
	strccb r0, [r12]
	bxcc lr
	cmp r12, r3
	bne lbl_02003aac
	mov r1, #1
	strb r1, [r12]
	ldrsh r1, [r0, #2]
	add r1, r1, #1
	strh r1, [r0, #2]
	bx lr
lbl_02003aac:
	strb r1, [r12], #-1
	b lbl_02003a78
}

extern "C" asm void func_02003ab4(void)
{
	bx lr
}

extern "C" asm void func_02003ab8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	cmp r4, #0
	ldmleia sp!, {r3, r4, r5, pc}
	ldrb r2, [r5, #4]
	cmp r4, r2
	ldmgeia sp!, {r3, r4, r5, pc}
	bl func_020039fc
	strb r4, [r5, #4]
	cmp r0, #0
	ldmltia sp!, {r3, r4, r5, pc}
	mov r0, r5
	mov r1, r4
	bl func_02003a68
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02003af8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	mov r10, r0
	mov r0, #0
	mov r8, r2
	strb r0, [r10]
	mov r9, r1
	cmp r8, #0
	strb r0, [r10, #4]
	cmpeq r9, #0
	beq lbl_02003b84
	mov r6, #0xa
	mov r11, r0
	mov r5, r0
	mov r4, r0
lbl_02003b30:
	ldrb r1, [r10, #4]
	mov r0, r9
	mov r2, r6
	add r3, r1, #1
	mov r7, r1
	strb r3, [r10, #4]
	mov r1, r8
	mov r3, r11
	bl func_02005ff0
	add r1, r10, r7
	strb r0, [r1, #5]
	mov r0, r9
	mov r1, r8
	mov r2, #0xa
	mov r3, #0
	bl func_02005fe4
	mov r8, r1
	mov r9, r0
	cmp r8, r5
	cmpeq r9, r4
	bne lbl_02003b30
lbl_02003b84:
	ldrb r0, [r10, #4]
	add r2, r10, #5
	add r0, r2, r0
	sub r3, r0, #1
	cmp r2, r3
	bcs lbl_02003bb4
lbl_02003b9c:
	ldrb r0, [r3]
	ldrb r1, [r2]
	strb r0, [r2], #1
	strb r1, [r3], #-1
	cmp r2, r3
	bcc lbl_02003b9c
lbl_02003bb4:
	ldrb r0, [r10, #4]
	sub r0, r0, #1
	strh r0, [r10, #2]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02003bc4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x40
	ldrb r6, [r1, #4]
	ldrb r5, [r2, #4]
	mov r4, #0
	add r3, sp, #0
	add r5, r6, r5
	sub r5, r5, #1
	add r3, r3, r5
	add r6, r3, #1
	mov r7, r6
	strb r4, [r0]
	cmp r5, #0
	ble lbl_02003c8c
	add lr, r1, #5
	add r11, r2, #5
lbl_02003c04:
	ldrb r3, [r2, #4]
	sub r10, r3, #1
	sub r3, r5, r10
	subs r9, r3, #1
	ldrb r3, [r1, #4]
	movmi r9, #0
	submi r10, r5, #1
	add r8, r10, #1
	sub r3, r3, r9
	cmp r8, r3
	movgt r8, r3
	add r10, r11, r10
	add r9, lr, r9
	cmp r8, #0
	ble lbl_02003c58
lbl_02003c40:
	ldrb r12, [r9], #1
	ldrb r3, [r10], #-1
	sub r8, r8, #1
	cmp r8, #0
	mla r4, r12, r3, r4
	bgt lbl_02003c40
lbl_02003c58:
	ldr r3, =0xCCCCCCCD
	sub r5, r5, #1
	umull r8, r9, r4, r3
	mov r9, r9, lsr #3
	cmp r5, #0
	mov r10, #0xa
	umull r8, r9, r10, r9
	sub r9, r4, r8
	strb r9, [r6, #-1]!
	mov r8, r4
	umull r3, r4, r8, r3
	mov r4, r4, lsr #3
	bgt lbl_02003c04
lbl_02003c8c:
	ldrsh r3, [r1, #2]
	ldrsh r1, [r2, #2]
	cmp r4, #0
	add r1, r3, r1
	strh r1, [r0, #2]
	beq lbl_02003cb4
	strb r4, [r6, #-1]!
	ldrsh r1, [r0, #2]
	add r1, r1, #1
	strh r1, [r0, #2]
lbl_02003cb4:
	mov r3, #0
	b lbl_02003ccc
lbl_02003cbc:
	ldrb r2, [r6], #1
	add r1, r0, r3
	add r3, r3, #1
	strb r2, [r1, #5]
lbl_02003ccc:
	cmp r3, #0x20
	bge lbl_02003cdc
	cmp r6, r7
	bcc lbl_02003cbc
lbl_02003cdc:
	cmp r6, r7
	addcs sp, sp, #0x40
	strb r3, [r0, #4]
	ldmcsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldrb r1, [r6]
	cmp r1, #5
	addcc sp, sp, #0x40
	ldmccia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	bne lbl_02003d34
	add r2, r6, #1
	cmp r2, r7
	bcs lbl_02003d24
lbl_02003d0c:
	ldrb r1, [r2]
	cmp r1, #0
	bne lbl_02003d34
	add r2, r2, #1
	cmp r2, r7
	bcc lbl_02003d0c
lbl_02003d24:
	ldrb r1, [r6, #-1]
	tst r1, #1
	addeq sp, sp, #0x40
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02003d34:
	ldrb r1, [r0, #4]
	bl func_02003a68
	add sp, sp, #0x40
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02003d48(void)
{
	stmdb sp!, {r3, lr}
	strh r2, [r0, #2]
	mov r12, #0
	strb r12, [r0]
	b lbl_02003d70
lbl_02003d5c:
	ldrsb r3, [r1], #1
	add r2, r0, r12
	add r12, r12, #1
	sub r3, r3, #0x30
	strb r3, [r2, #5]
lbl_02003d70:
	cmp r12, #0x20
	bge lbl_02003d84
	ldrsb r2, [r1]
	cmp r2, #0
	bne lbl_02003d5c
lbl_02003d84:
	strb r12, [r0, #4]
	ldrsb r2, [r1]
	cmp r2, #0
	ldmeqia sp!, {r3, pc}
	cmp r2, #5
	ldmltia sp!, {r3, pc}
	bgt lbl_02003dd8
	ldrsb r2, [r1, #1]
	add r1, r1, #1
	cmp r2, #0
	beq lbl_02003dc4
lbl_02003db0:
	cmp r2, #0x30
	bne lbl_02003dd8
	ldrsb r2, [r1, #1]!
	cmp r2, #0
	bne lbl_02003db0
lbl_02003dc4:
	sub r1, r12, #1
	add r1, r0, r1
	ldrb r1, [r1, #5]
	tst r1, #1
	ldmeqia sp!, {r3, pc}
lbl_02003dd8:
	ldrb r1, [r0, #4]
	bl func_02003a68
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02003de4(void)
{
lbl_02003de4:
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x4c
	mov r4, r1
	mvn r2, #0x34
	mov r5, r0
	cmp r4, r2
	bgt lbl_02003e14
	bge lbl_02003ee0
	sub r0, r2, #0xb
	cmp r4, r0
	beq lbl_02003ec8
	b lbl_02004070
lbl_02003e14:
	add r1, r4, #0x20
	cmp r1, #0x28
	addls pc, pc, r1, lsl #2
	b lbl_02004070
	b lbl_02003ef4
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02003f08
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02004070
	b lbl_02003f1c
	b lbl_02003f30
	b lbl_02003f44
	b lbl_02003f58
	b lbl_02003f6c
	b lbl_02003f80
	b lbl_02003f94
	b lbl_02003fa8
	b lbl_02003fbc
	b lbl_02003fd0
	b lbl_02003fe4
	b lbl_02003ff8
	b lbl_0200400c
	b lbl_02004020
	b lbl_02004034
	b lbl_02004048
	b lbl_0200405c
lbl_02003ec8:
	ldr r1, =data_020bb820
	mov r0, r5
	mvn r2, #0x13
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003ee0:
	ldr r1, =data_020bb850
	add r2, r2, #0x25
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003ef4:
	ldr r1, =data_020bb878
	add r2, r2, #0x2b
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f08:
	ldr r1, =data_020bb890
	add r2, r2, #0x30
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f1c:
	ldr r1, =data_020bb8a0
	add r2, r2, #0x32
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f30:
	ldr r1, =data_020bb8a8
	add r2, r2, #0x32
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f44:
	ldr r1, =data_020bb8b0
	add r2, r2, #0x33
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f58:
	ldr r1, =data_020bb8b8
	add r2, r2, #0x33
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f6c:
	ldr r1, =data_020bb8c0
	add r2, r2, #0x33
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f80:
	ldr r1, =data_020bb8c4
	add r2, r2, #0x34
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003f94:
	ldr r1, =data_020bb8c8
	add r2, r2, #0x34
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003fa8:
	ldr r1, =data_020bb8cc
	add r2, r2, #0x34
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003fbc:
	ldr r1, =data_020bb8d0
	mov r2, #0
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003fd0:
	ldr r1, =data_020bb8d4
	mov r2, #0
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003fe4:
	ldr r1, =data_020bb8d8
	mov r2, #0
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02003ff8:
	ldr r1, =data_020bb8dc
	mov r2, #0
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_0200400c:
	ldr r1, =data_020bb8e0
	mov r2, #1
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02004020:
	ldr r1, =data_020bb8e4
	mov r2, #1
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02004034:
	ldr r1, =data_020bb8e8
	mov r2, #1
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02004048:
	ldr r1, =data_020bb8ec
	mov r2, #2
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_0200405c:
	ldr r1, =data_020bb8f0
	mov r2, #2
	bl func_02003d48
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
lbl_02004070:
	and r0, r4, #0x80000000
	add r1, r4, r0, lsr #31
	add r0, sp, #0x26
	mov r1, r1, asr #1
	bl lbl_02003de4
	add r1, sp, #0x26
	mov r0, r5
	mov r2, r1
	bl func_02003bc4
	tst r4, #1
	addeq sp, sp, #0x4c
	ldmeqia sp!, {r4, r5, pc}
	add r3, sp, #0
	mov r12, r5
	mov r2, #9
lbl_020040ac:
	ldrh r1, [r12]
	ldrh r0, [r12, #2]
	add r12, r12, #4
	subs r2, r2, #1
	strh r1, [r3]
	strh r0, [r3, #2]
	add r3, r3, #4
	bne lbl_020040ac
	ldrh r0, [r12]
	cmp r4, #0
	strh r0, [r3]
	add r0, sp, #0x26
	ble lbl_020040f0
	ldr r1, =data_020bb8d4
	mov r2, #0
	bl func_02003d48
	b lbl_020040fc
lbl_020040f0:
	ldr r1, =data_020bb8cc
	mvn r2, #0
	bl func_02003d48
lbl_020040fc:
	add r1, sp, #0
	add r2, sp, #0x26
	mov r0, r5
	bl func_02003bc4
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02004168(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0x58
	mov r8, r1
	mov r6, r2
	mov r7, r0
	mov r0, r8
	mov r1, r6
	bl func_02004424
	cmp r0, #0
	movne r1, #1
	moveq r1, #0
	mov r4, r1, lsl #0x18
	mov r0, #0
	mov r1, r0
	mov r2, r8
	mov r3, r6
	mov r5, r4, asr #0x18
	bl func_020052d4
	bne lbl_020041d4
	strb r5, [r7]
	mov r1, #0
	strh r1, [r7, #2]
	mov r0, #1
	strb r0, [r7, #4]
	add sp, sp, #0x58
	strb r1, [r7, #5]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_020041d4:
	mov r0, r8
	mov r1, r6
	bl func_02004438
	cmp r0, #2
	bgt lbl_02004220
	strb r5, [r7]
	mov r2, #0
	strh r2, [r7, #2]
	mov r2, #1
	mov r0, r8
	mov r1, r6
	strb r2, [r7, #4]
	bl func_02004438
	cmp r0, #1
	moveq r0, #0x4e
	movne r0, #0x49
	add sp, sp, #0x58
	strb r0, [r7, #5]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02004220:
	cmp r5, #0
	beq lbl_02004244
	mov r0, #0
	mov r1, r0
	mov r2, r8
	mov r3, r6
	bl func_02004bc8
	mov r8, r0
	mov r6, r1
lbl_02004244:
	add r2, sp, #8
	mov r0, r8
	mov r1, r6
	bl func_020036f4
	mov r4, r0
	mov r6, r1
	orr r12, r4, #0
	rsbs r2, r12, #0
	orr r3, r6, #0x100000
	rsc r1, r3, #0
	mov r0, #0
	and r3, r3, r1
	sub r1, r0, #1
	and r12, r12, r2
	mov r2, r1
	adds r0, r12, r1
	adc r1, r3, r2
	str r4, [sp]
	str r6, [sp, #4]
	bl func_02004390
	rsb r8, r0, #0x35
	ldr r1, [sp, #8]
	add r0, sp, #0xc
	sub r1, r1, r8
	bl func_02003de4
	mov r0, r4
	mov r1, r6
	mov r2, r8
	bl func_020037b0
	bl func_020047c0
	mov r2, r1
	mov r1, r0
	add r0, sp, #0x32
	bl func_02003af8
	mov r0, r7
	add r1, sp, #0x32
	add r2, sp, #0xc
	bl func_02003bc4
	strb r5, [r7]
	add sp, sp, #0x58
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020042e8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r3
	ldrsh r5, [r0, #2]
	mov r0, r4
	bl func_02004168
	ldrb r0, [r4, #5]
	cmp r0, #9
	ldmhiia sp!, {r3, r4, r5, pc}
	cmp r5, #0x20
	movgt r5, #0x20
	mov r0, r4
	mov r1, r5
	bl func_02003ab8
	ldrb r0, [r4, #4]
	cmp r0, r5
	bge lbl_0200434c
	mov r1, #0
lbl_0200432c:
	ldrb r2, [r4, #4]
	add r0, r4, r0
	add r2, r2, #1
	strb r2, [r4, #4]
	strb r1, [r0, #5]
	ldrb r0, [r4, #4]
	cmp r0, r5
	blt lbl_0200432c
lbl_0200434c:
	ldrsh r1, [r4, #2]
	sub r0, r0, #1
	mov r2, #0
	sub r0, r1, r0
	strh r0, [r4, #2]
	ldrb r0, [r4, #4]
	cmp r0, #0
	ldmleia sp!, {r3, r4, r5, pc}
lbl_0200436c:
	add r1, r4, r2
	ldrb r0, [r1, #5]
	add r2, r2, #1
	add r0, r0, #0x30
	strb r0, [r1, #5]
	ldrb r0, [r4, #4]
	cmp r2, r0
	blt lbl_0200436c
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02004390(void)
{
	mov r3, r0, lsr #1
	ldr r2, =0x55555555
	orr r3, r3, r1, lsl #31
	and r3, r3, r2
	subs r12, r0, r3
	and r2, r2, r1, lsr #1
	ldr r0, =0x33333333
	sbc r3, r1, r2
	mov r1, r12, lsr #2
	orr r1, r1, r3, lsl #30
	and r2, r12, r0
	and r1, r1, r0
	adds r2, r2, r1
	and r1, r3, r0
	and r0, r0, r3, lsr #2
	adc r1, r1, r0
	mov r0, r2, lsr #4
	orr r0, r0, r1, lsl #28
	adds r2, r2, r0
	ldr r0, =0x0F0F0F0F
	adc r1, r1, r1, lsr #4
	and r3, r2, r0
	and r2, r1, r0
	mov r0, r3, lsr #8
	orr r0, r0, r2, lsl #24
	adds r1, r3, r0
	adc r2, r2, r2, lsr #8
	mov r0, r1, lsr #0x10
	orr r0, r0, r2, lsl #16
	adds r1, r1, r0
	adc r0, r2, r2, lsr #16
	adds r0, r1, r0
	and r0, r0, #0xff
	bx lr
}

extern "C" asm void func_02004424(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	ldr r0, [sp, #4]
	and r0, r0, #0x80000000
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_02004438(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	ldr r2, [sp, #4]
	ldr r0, =0x7FF00000
	ands r1, r2, r0
	beq lbl_02004474
	cmp r1, r0
	bne lbl_02004494
	ldr r0, =0x000FFFFF
	tst r2, r0
	ldreq r0, [sp]
	add sp, sp, #0x10
	cmpeq r0, #0
	movne r0, #1
	moveq r0, #2
	bx lr
lbl_02004474:
	ldr r0, =0x000FFFFF
	tst r2, r0
	ldreq r0, [sp]
	add sp, sp, #0x10
	cmpeq r0, #0
	movne r0, #5
	moveq r0, #3
	bx lr
lbl_02004494:
	mov r0, #4
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_020044a8(void)
{
	stmdb sp!, {r4, lr}
	eors r12, r1, r3
	eormi r3, r3, #0x80000000
	bmi func_02004bd8
	subs r12, r0, r2
	sbcs lr, r1, r3
	bcs lbl_020044d4
	adds r2, r2, r12
	adc r3, r3, lr
	subs r0, r0, r12
	sbc r1, r1, lr
lbl_020044d4:
	mov lr, #0x80000000
	mov r12, r1, lsr #0x14
	orr r1, lr, r1, lsl #11
	orr r1, r1, r0, lsr #21
	mov r0, r0, lsl #0xb
	movs r4, r12, lsl #0x15
	cmnne r4, #0x200000
	beq lbl_020045d0
	mov r4, r3, lsr #0x14
	orr r3, lr, r3, lsl #11
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs lr, r4, lsl #0x15
	beq lbl_02004618
lbl_0200450c:
	subs r4, r12, r4
	beq lbl_02004564
	cmp r4, #0x20
	ble lbl_02004548
	cmp r4, #0x38
	movge r4, #0x3f
	sub r4, r4, #0x20
	rsb lr, r4, #0x20
	orrs lr, r2, r3, lsl lr
	mov r2, r3, lsr r4
	orrne r2, r2, #1
	adds r0, r0, r2
	adcs r1, r1, #0
	bcc lbl_0200458c
	b lbl_02004570
lbl_02004548:
	rsb lr, r4, #0x20
	movs lr, r2, lsl lr
	rsb lr, r4, #0x20
	mov r2, r2, lsr r4
	orr r2, r2, r3, lsl lr
	mov r3, r3, lsr r4
	orrne r2, r2, #1
lbl_02004564:
	adds r0, r0, r2
	adcs r1, r1, r3
	bcc lbl_0200458c
lbl_02004570:
	add r12, r12, #1
	and r4, r0, #1
	movs r1, r1, rrx
	orr r0, r4, r0, rrx
	mov lr, r12, lsl #0x15
	cmn lr, #0x200000
	beq lbl_0200479c
lbl_0200458c:
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	mov r1, r1, lsr #0xc
	orr r1, r1, r12, lsl #20
	tst r2, #0x80000000
	ldmeqia sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, lr}
	bxeq lr
	adds r0, r0, #1
	adc r1, r1, #0
	ldmia sp!, {r4, lr}
	bx lr
lbl_020045d0:
	cmp r12, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bics r12, r12, #0x800
	beq lbl_0200463c
	orrs r4, r0, r1, lsl #1
	bne lbl_02004778
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	beq lbl_02004764
	cmn r4, #0x200000
	bne lbl_02004764
	orrs r4, r2, r3, lsl #1
	beq lbl_02004764
	b lbl_02004778
lbl_02004618:
	cmp r4, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	bic r12, r12, #0x800
	bics r4, r4, #0x800
	beq lbl_020046a8
	orrs r4, r2, r3, lsl #1
	bne lbl_02004778
	b lbl_02004764
lbl_0200463c:
	orrs r4, r0, r1, lsl #1
	beq lbl_0200467c
	mov r12, #1
	bic r1, r1, #0x80000000
	mov r4, r3, lsr #0x14
	mov r3, r3, lsl #0xb
	orr r3, r3, r2, lsr #21
	mov r2, r2, lsl #0xb
	movs r4, r4, lsl #0x15
	cmnne r4, #0x200000
	mov r4, r4, lsr #0x15
	orr r4, r4, lr, lsr #20
	beq lbl_02004618
	orr r3, r3, #0x80000000
	orr r12, r12, lr, lsr #20
	b lbl_0200450c
lbl_0200467c:
	mov r12, r3, lsr #0x14
	mov r1, r3, lsl #0xb
	orr r1, r1, r2, lsr #21
	mov r0, r2, lsl #0xb
	movs r4, r12, lsl #0x15
	beq lbl_02004730
	cmn r4, #0x200000
	bne lbl_02004730
	orrs r4, r0, r1, lsl #1
	beq lbl_02004764
	b lbl_0200477c
lbl_020046a8:
	orrs r4, r2, r3, lsl #1
	beq lbl_02004740
	mov r4, #1
	bic r3, r3, #0x80000000
	cmp r1, #0
	bpl lbl_020046cc
	orr r12, r12, lr, lsr #20
	orr r4, r4, lr, lsr #20
	b lbl_0200450c
lbl_020046cc:
	adds r0, r0, r2
	adcs r1, r1, r3
	bcc lbl_020046ec
	add r12, r12, #1
	and r4, r0, #1
	movs r1, r1, rrx
	mov r0, r0, rrx
	orr r0, r0, r4
lbl_020046ec:
	cmp r1, #0
	subges r12, r12, #1
	movs r2, r0, lsl #0x15
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, r12, lsl #20
	ldmeqia sp!, {r4, lr}
	bxeq lr
	tst r2, #0x80000000
	ldmeqia sp!, {r4, lr}
	bxeq lr
	movs r2, r2, lsl #1
	andeqs r2, r0, #1
	ldmeqia sp!, {r4, lr}
	bxeq lr
lbl_02004730:
	mov r1, r3
	mov r0, r2
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004740:
	cmp r1, #0
	subges r12, r12, #1
	mov r0, r0, lsr #0xb
	orr r0, r0, r1, lsl #21
	add r1, r1, r1
	orr r1, lr, r1, lsr #12
	orr r1, r1, r12, lsl #20
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004764:
	ldr r1, =0x7FF00000
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr
lbl_02004778:
	mov r1, r3
lbl_0200477c:
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
	mvn r0, #0
	bic r1, r0, #0x80000000
	ldmia sp!, {r4, lr}
	bx lr
lbl_0200479c:
	cmp r12, #0x800
	movge lr, #0x80000000
	movlt lr, #0
	ldr r1, =0x7FF00000
	orr r1, lr, r1
	mov r0, #0
	ldmia sp!, {r4, lr}
	bx lr
}

extern "C" asm void func_020047c0(void)
{
	tst r1, #0x80000000
	bne lbl_02004824
	ldr r2, =0x0000043E
	subs r2, r2, r1, lsr #20
	blt lbl_0200483c
	cmp r2, #0x40
	bge lbl_02004818
	mov r12, r1, lsl #0xb
	orr r12, r12, #0x80000000
	orr r12, r12, r0, lsr #21
	cmp r2, #0x20
	ble lbl_02004800
	sub r2, r2, #0x20
	mov r1, #0
	mov r0, r12, lsr r2
	bx lr
lbl_02004800:
	mov r3, r0, lsl #0xb
	mov r1, r12, lsr r2
	mov r0, r3, lsr r2
	rsb r2, r2, #0x20
	orr r0, r0, r12, lsl r2
	bx lr
lbl_02004818:
	mov r1, #0
	mov r0, #0
	bx lr
lbl_02004824:
	cmn r1, #0x100000
	cmpeq r0, #0
	bhi lbl_0200483c
	mov r1, #0
	mov r0, #0
	bx lr
lbl_0200483c:
	mvn r1, #0
	mvn r0, #0
	bx lr
}

#pragma thumb on
