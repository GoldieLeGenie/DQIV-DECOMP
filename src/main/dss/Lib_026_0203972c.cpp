/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0203972c(void);
    void func_0203973c(void);
    void func_02039740(void);
    void func_02039744(void);
    void func_02039748(void);
    void func_02039750(void);
    void func_02039760(void);
    void func_02039768(void);
    void func_02039838(void);
    void func_02039874(void);
    void func_02039918(void);
    void func_02039930(void);
    void func_02039960(void);
    void func_020399fc(void);
    void func_02039a2c(void);
    void func_02039b70(void);
    void func_02039b8c(void);
    void func_02039c54(void);
    void func_02039c7c(void);
    void func_0203a218(void);
    void func_0203a228(void);
    void func_0203a230(void);
    void func_0203a254(void);
    void func_0203a2dc(void);
    void func_0203a318(void);
    void func_0203a33c(void);
    void func_0203a340(void);
    void _ZN6status10ExcelParam13getCharaVoiceEv(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status11PartyStatus13setPlayerModeEv(void);
    void _ZN6status11PartyStatus14setDisplayModeEv(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus19getCarriageOutCountEv(void);
    void _ZN6status11PartyStatus8getCountEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status7g_PartyE(void);
    void data_020b614c(void);
    void data_020c13c8(void);
    void data_020c13f0(void);
    void data_020c1420(void);
    void data_020ed1bc(void);
    void data_020f0078(void);
    void data_020f0080(void);
    void data_020f21f8(void);
    void data_0210bb94(void);
    void data_0210bc18(void);
    void data_02116d40(void);
    void data_0211c4cc(void);
    void data_0211e450(void);
    void data_02123724(void);
    void data_0212458c(void);
    void func_0200b924(void);
    void func_0200bcc4(void);
    void func_0200bd68(void);
    void func_020259a8(void);
    void func_020259b4(void);
    void func_02025a34(void);
    void func_02025b14(void);
    void func_0203a388(void);
    void func_0203a48c(void);
    void func_0203a9cc(void);
    void func_02052408(void);
    void func_020559b0(void);
    void func_02056358(void);
    void func_02056384(void);
    void func_020580fc(void);
    void func_02058294(void);
    void func_0207c0b8(void);
    void func_0207c0d8(void);
    void func_0207f280(void);
    void func_02080e90(void);
    void func_020861c4(void);
    void func_02086278(void);
    void func_02087590(void);
    void func_020875a4(void);
    void func_02088078(void);
    void func_02089558(void);
    void func_021210e0(void);
    void func_02123334(void);
    void func_02123378(void);
    void func_0212338c(void);
    void func_02123478(void);
    void func_02123498(void);
    void func_02123d68(void);
    void func_0212ebc8(void);
    void func_0212ebdc(void);
    void func_02137f2c(void);
    void func_02138eb8(void);
    void g_Global(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_0203972c(void)
{
	ldr r1, =data_020c13c8
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0203973c(void)
{
	bx lr
}

extern "C" asm void func_02039740(void)
{
	bx lr
}

extern "C" asm void func_02039744(void)
{
	bx lr
}

extern "C" asm void func_02039748(void)
{
	mov r0, #1
	bx lr
}

extern "C" asm void func_02039750(void)
{
	mov r1, #0
	str r1, [r0, #0x88]
	str r1, [r0, #0x84]
	bx lr
}

extern "C" asm void func_02039760(void)
{
	str r1, [r0, #0x8c]
	bx lr
}

extern "C" asm void func_02039768(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x84
	mov r7, r0
	mov r6, r1
	mov r4, r2
	bl func_02039874
	bl func_02056358
	ldr r0, [r7, #0x84]
	cmp r0, #0
	ble lbl_020397f0
	cmp r6, #0
	mov r5, #0
	ble lbl_020397d8
	add r4, sp, #0
lbl_020397a0:
	mov r0, r7
	bl func_02039838
	cmp r0, #0x39
	strne r0, [r4, r5, lsl #2]
	bne lbl_020397cc
	add r0, sp, #0
	mov r1, #0x39
	str r1, [r0, r5, lsl #2]
	bl func_02056384
	add sp, sp, #0x84
	ldmia sp!, {r4, r5, r6, r7, pc}
lbl_020397cc:
	add r5, r5, #1
	cmp r5, r6
	blt lbl_020397a0
lbl_020397d8:
	add r0, sp, #0
	mov r1, #0x39
	str r1, [r0, r6, lsl #2]
	bl func_02056384
	add sp, sp, #0x84
	ldmia sp!, {r4, r5, r6, r7, pc}
lbl_020397f0:
	mvn r0, #0
	cmp r4, r0
	addeq sp, sp, #0x84
	ldmeqia sp!, {r4, r5, r6, r7, pc}
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212ebc8
	cmp r0, #1
	addne sp, sp, #0x84
	ldmneia sp!, {r4, r5, r6, r7, pc}
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212ebdc
	bl func_02056358
	add sp, sp, #0x84
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_02039838(void)
{
	ldr r2, [r0, #0x88]
	ldr r1, [r0, #0x84]
	mov r3, #0x39
	cmp r2, r1
	bge lbl_0203986c
	ldr r3, [r0, r2, lsl #2]
	add r2, r2, #1
	str r2, [r0, #0x88]
	ldr r1, [r0, #0x84]
	cmp r2, r1
	movge r1, #0
	strge r1, [r0, #0x88]
	strge r1, [r0, #0x84]
lbl_0203986c:
	mov r0, r3
	bx lr
}

extern "C" asm void func_02039874(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r5, r0
	ldr r0, =_ZN6status10excelParamE
	mov r4, #0x30
	bl _ZN6status10ExcelParam13getCharaVoiceEv
	ldr r1, =data_020b614c
	mov r2, #0
	ldr r1, [r1]
	cmp r1, #0
	ble lbl_02039904
	ldr r3, [r5, #0x8c]
	ldr r5, =0x0000012D
	mov r6, #0x33
	add lr, r5, #1
	add r12, r5, #2
	mov r7, #0x32
	mov r8, #0x31
lbl_020398b8:
	mov r10, r2, lsl #2
	ldrh r9, [r0, r10]
	cmp r3, r9
	bne lbl_020398f8
	add r9, r0, r10
	ldrh r9, [r9, #2]
	cmp r9, r5
	beq lbl_020398ec
	cmp r9, lr
	beq lbl_020398f4
	cmp r9, r12
	moveq r4, r6
	b lbl_020398f8
lbl_020398ec:
	mov r4, r8
	b lbl_020398f8
lbl_020398f4:
	mov r4, r7
lbl_020398f8:
	add r2, r2, #1
	cmp r2, r1
	blt lbl_020398b8
lbl_02039904:
	mov r0, r4
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02039918(void)
{
	ldr r2, [r0, #0x84]
	str r1, [r0, r2, lsl #2]
	ldr r1, [r0, #0x84]
	add r1, r1, #1
	str r1, [r0, #0x84]
	bx lr
}

extern "C" asm void func_02039930(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	ldr r4, [r6, #0x8c]
	bl func_02137f2c
	mov r1, r5
	bl func_02138eb8
	str r0, [r6, #0x8c]
	mov r0, r6
	bl func_02039874
	str r4, [r6, #0x8c]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02039960(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r4, r0
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus14setDisplayModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus8getCountEv
	mov r8, r0
	cmp r8, #0
	mov r9, #0
	ble lbl_020399f0
	ldr r7, =_ZN6status7g_PartyE
	mov r5, r9
	mov r6, #1
lbl_02039994:
	mov r0, r7
	mov r1, r9
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	moveq r0, r6
	movne r0, r5
	cmp r0, #1
	bne lbl_020399e4
	ldr r0, =_ZN6status7g_PartyE
	mov r1, r9
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	ldrb r1, [r0, #0x4e]
	ldr r5, [r4, #0x8c]
	mov r0, r4
	str r1, [r4, #0x8c]
	bl func_02039874
	str r5, [r4, #0x8c]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_020399e4:
	add r9, r9, #1
	cmp r9, r8
	blt lbl_02039994
lbl_020399f0:
	mov r0, #0x32
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020399fc(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r0, =_ZN6status7g_PartyE
	mov r5, r1
	bl _ZN6status11PartyStatus14setDisplayModeEv
	ldr r4, [r6, #0x8c]
	mov r0, r6
	str r5, [r6, #0x8c]
	bl func_02039874
	str r4, [r6, #0x8c]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02039a2c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r9, r0
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus14setDisplayModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus19getCarriageOutCountEv
	mov r7, r0
	cmp r7, #0
	mov r8, #0
	ble lbl_02039ad8
	ldr r6, =_ZN6status7g_PartyE
	mov r4, r8
	mov r5, #1
lbl_02039a60:
	mov r0, r6
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	moveq r0, r5
	movne r0, r4
	cmp r0, #1
	bne lbl_02039acc
	mov r0, r6
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	ldrh r0, [r0, #0x4c]
	sub r0, r0, #1
	cmp r0, #1
	bhi lbl_02039acc
	ldr r0, =_ZN6status7g_PartyE
	mov r1, r8
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	ldrb r1, [r0, #0x4e]
	ldr r4, [r9, #0x8c]
	mov r0, r9
	str r1, [r9, #0x8c]
	bl func_02039874
	str r4, [r9, #0x8c]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02039acc:
	add r8, r8, #1
	cmp r8, r7
	blt lbl_02039a60
lbl_02039ad8:
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus13setPlayerModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus19getCarriageOutCountEv
	mov r8, r0
	cmp r8, #0
	mov r7, #0
	ble lbl_02039b60
	ldr r6, =_ZN6status7g_PartyE
	mov r4, r7
	mov r5, #1
lbl_02039b04:
	mov r0, r6
	mov r1, r7
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	moveq r0, r5
	movne r0, r4
	cmp r0, #1
	bne lbl_02039b54
	ldr r0, =_ZN6status7g_PartyE
	mov r1, r7
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	ldrb r1, [r0, #0x4e]
	ldr r4, [r9, #0x8c]
	mov r0, r9
	str r1, [r9, #0x8c]
	bl func_02039874
	str r4, [r9, #0x8c]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
lbl_02039b54:
	add r7, r7, #1
	cmp r7, r8
	blt lbl_02039b04
lbl_02039b60:
	mov r0, r9
	bl func_02039960
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02039b70(void)
{
	ldr r2, =data_020c13f0
	ldr r1, =data_0212458c
	str r2, [r0]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void func_02039b8c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =0x00000002
	bl func_02087590
	bl func_021210e0
	ldr r0, =data_0211e450
	mov r1, #0x40000
	mov r2, #0x4000
	bl func_020861c4
	ldr r0, =data_0211c4cc
	bl func_02080e90
	mov r1, #0
	ldr r0, =g_Global
	str r1, [r4, #0x2d8]
	mov r1, #0x1e
	bl func_0200bd68
	ldr r0, =data_020f21f8
	ldr r1, [r0, #4]
	cmp r1, #0
	beq lbl_02039be8
	cmp r1, #2
	beq lbl_02039bf4
	b lbl_02039c00
lbl_02039be8:
	mov r1, #1
	str r1, [r0, #4]
	b lbl_02039c08
lbl_02039bf4:
	mov r1, #3
	str r1, [r0, #4]
	b lbl_02039c08
lbl_02039c00:
	mov r1, #1
	str r1, [r0, #4]
lbl_02039c08:
	ldr r1, =data_020f21f8
	mov r2, #0
	ldr r0, =data_0210bc18
	str r2, [r1, #0xc]
	mov r2, #0x1e
	str r2, [r1, #0x10]
	bl func_02058294
	mov r0, #0
	bl func_02089558
	mov r0, r4
	mov r1, #0
	bl func_0203a228
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02039c54(void)
{
	stmdb sp!, {r3, lr}
	mov r0, #1
	bl func_02089558
	ldr r0, =data_0211e450
	bl func_02086278
	ldr r0, =0x00000002
	bl func_020875a4
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02039c7c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	ldr r1, [r5, #4]
	cmp r1, #0xd
	addls pc, pc, r1, lsl #2
	b lbl_0203a1c0
	b lbl_02039ccc
	b lbl_02039ce4
	b lbl_02039d7c
	b lbl_02039db4
	b lbl_02039d34
	b lbl_02039e10
	b lbl_02039e9c
	b lbl_02039ef8
	b lbl_02039f04
	b lbl_02039f64
	b lbl_0203a008
	b lbl_0203a028
	b lbl_0203a0c8
	b lbl_0203a14c
lbl_02039ccc:
	ldr r1, [r5, #0xc]
	cmp r1, #0x1e
	ble lbl_0203a1c0
	mov r1, #1
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039ce4:
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02039d18
	ldr r0, =data_020ed1bc
	bl func_020259a8
	ldr r0, =data_020ed1bc
	ldr r1, =0x00092A02
	bl func_02025a34
	ldr r0, =data_020ed1bc
	mov r1, #1
	str r1, [r0, #0x38]
	mov r0, #0
	str r0, [r5, #0x2e0]
lbl_02039d18:
	ldr r0, [r5, #0xc]
	cmp r0, #0x78
	ble lbl_0203a1c0
	mov r0, r5
	mov r1, #4
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039d34:
	add r0, r5, #0x10
	bl func_0212338c
	ldr r4, =data_020f0080
	add r0, r4, #0xc
	bl func_02088078
	add r0, r4, #0x34
	bl func_02088078
	add r0, r4, #0x4e
	bl func_02088078
	add r0, r4, #0x78
	bl func_02088078
	mov r1, r4
	add r0, r5, #0x10
	bl func_02123334
	mov r0, r5
	mov r1, #2
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039d7c:
	ldr r1, [r5, #0x30]
	cmp r1, #0x48
	bne lbl_02039d94
	mov r1, #8
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039d94:
	cmp r1, #0xc
	bne lbl_0203a1c0
	add r0, r5, #0x10
	bl func_02123478
	mov r0, r5
	mov r1, #3
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039db4:
	ldr r1, [r5, #0x2e0]
	cmp r1, #0
	bne lbl_02039e04
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02039de8
	ldr r0, =data_020ed1bc
	bl func_020259a8
	ldr r0, =data_020ed1bc
	ldr r1, =0x00092A04
	bl func_02025a34
	mov r0, #1
	str r0, [r5, #0x2e0]
lbl_02039de8:
	ldr r0, [r5, #0xc]
	cmp r0, #0x1e
	bne lbl_0203a1c0
	mov r0, r5
	mov r1, #5
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e04:
	mov r1, #5
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e10:
	bl func_0203a254
	mov r0, r5
	bl func_0203a2dc
	ldr r0, [r5, #0x30]
	cmp r0, #0x48
	bne lbl_02039e38
	mov r0, r5
	mov r1, #6
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e38:
	cmp r0, #0x3e
	bne lbl_02039e50
	mov r0, r5
	mov r1, #7
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e50:
	cmp r0, #0x33
	bne lbl_02039e68
	mov r0, r5
	mov r1, #9
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e68:
	ldr r0, =0x027FFFA8
	ldrh r0, [r0]
	and r0, r0, #0x8000
	movs r0, r0, asr #0xf
	bne lbl_0203a1c0
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #1
	beq lbl_0203a1c0
	mov r0, r5
	mov r1, #0xa
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039e9c:
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02039ecc
	ldr r0, =data_020ed1bc
	bl func_020259b4
	ldr r0, =data_020ed1bc
	mov r1, #0
	bl func_02025a34
	mov r1, #0
	add r0, r5, #0x10
	str r1, [r5, #0x2e0]
	bl func_02123d68
lbl_02039ecc:
	ldr r0, [r5, #0xc]
	cmp r0, #0x3c
	ble lbl_0203a1c0
	ldr r0, =data_020ed1bc
	ldr r0, [r0, #0xc]
	cmp r0, #1
	bne lbl_0203a1c0
	mov r0, r5
	mov r1, #0xd
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039ef8:
	mov r1, #4
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039f04:
	bl func_0203a318
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02039f38
	ldr r0, =data_020ed1bc
	bl func_020259b4
	ldr r0, =data_020ed1bc
	ldr r1, =0x00092AB8
	bl func_02025a34
	mov r1, #0
	add r0, r5, #0x10
	str r1, [r5, #0x2e0]
	bl func_02123d68
lbl_02039f38:
	ldr r0, [r5, #0xc]
	cmp r0, #0x3c
	ble lbl_0203a1c0
	ldr r0, =data_020ed1bc
	ldr r0, [r0, #0xc]
	cmp r0, #1
	bne lbl_0203a1c0
	mov r0, r5
	mov r1, #0xd
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039f64:
	add r0, r5, #0x10
	bl func_02123378
	ldr r1, [r5, #0x10c]
	mov r4, r0
	cmp r1, #4
	bgt lbl_02039f8c
	mov r0, r5
	mov r1, #7
	bl func_0203a228
	b lbl_0203a1c0
lbl_02039f8c:
	ldr r0, =0x027FFFA8
	ldrh r0, [r0]
	and r0, r0, #0x8000
	movs r0, r0, asr #0xf
	bne lbl_02039fa8
	ldr r0, =0x00000146
	bl func_020559b0
lbl_02039fa8:
	ldr r1, [r4, #4]
	ldr r0, =data_020f0078
	bl func_0203a9cc
	mvn r1, #0
	cmp r0, r1
	moveq r0, #0
	movne r0, #1
	str r0, [r5, #0x2dc]
	ldr r0, =data_020f0078
	mov r1, r4
	mov r2, #1
	bl func_0203a48c
	add r0, r4, #0xc
	bl func_02088078
	add r0, r4, #0x34
	bl func_02088078
	add r0, r4, #0x4e
	bl func_02088078
	add r0, r4, #0x78
	bl func_02088078
	mov r0, r5
	mov r1, #0xc
	bl func_0203a228
	b lbl_0203a1c0
lbl_0203a008:
	mov r1, #0
	ldr r0, =data_020f0078
	mov r2, r1
	bl func_0203a48c
	mov r0, r5
	mov r1, #0xb
	bl func_0203a228
	b lbl_0203a1c0
lbl_0203a028:
	bl func_0203a318
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_0203a070
	ldr r0, =data_020ed1bc
	bl func_02052408
	ldr r0, =data_020ed1bc
	bl func_020259a8
	ldr r0, =data_020ed1bc
	ldr r1, =0x00092A08
	bl func_02025a34
	ldr r0, =data_020ed1bc
	mov r1, #1
	bl func_02025b14
	mov r0, #0
	str r0, [r5, #0x2e0]
	mov r0, #1
	str r0, [r5, #0x2c]
lbl_0203a070:
	ldr r0, [r5, #0xc]
	cmp r0, #0x3c
	ble lbl_0203a1c0
	ldr r0, =data_020ed1bc
	ldr r1, [r0, #0xc]
	cmp r1, #2
	bne lbl_0203a09c
	bl func_02052408
	mov r0, r5
	mov r1, #0xd
	bl func_0203a228
lbl_0203a09c:
	ldr r0, =data_020ed1bc
	ldr r1, [r0, #0xc]
	cmp r1, #1
	bne lbl_0203a1c0
	bl func_02052408
	mov r0, #0
	bl func_02089558
	mov r0, r5
	mov r1, #4
	bl func_0203a228
	b lbl_0203a1c0
lbl_0203a0c8:
	bl func_0203a318
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_0203a120
	ldr r0, [r5, #0x2dc]
	cmp r0, #0
	ldrne r4, =0x00092A99
	bne lbl_0203a0fc
	ldr r0, =data_020f0078
	bl func_0203a388
	cmp r0, #1
	ldreq r4, =0x00092A11
	ldrne r4, =0x00092A9A
lbl_0203a0fc:
	ldr r0, =data_020ed1bc
	bl func_02052408
	ldr r0, =data_020ed1bc
	bl func_020259b4
	ldr r0, =data_020ed1bc
	mov r1, r4
	bl func_02025a34
	mov r0, #0
	str r0, [r5, #0x2e0]
lbl_0203a120:
	ldr r0, [r5, #0xc]
	cmp r0, #0x3c
	ble lbl_0203a1c0
	ldr r0, =data_020ed1bc
	ldr r0, [r0, #0xc]
	cmp r0, #1
	bne lbl_0203a1c0
	mov r0, r5
	mov r1, #0xd
	bl func_0203a228
	b lbl_0203a1c0
lbl_0203a14c:
	bl func_0203a318
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_0203a178
	ldr r0, =data_020ed1bc
	bl func_02052408
	mov r2, #1
	ldr r0, =g_Global
	mov r1, #0x1e
	str r2, [r5, #0x2c]
	bl func_0200bcc4
lbl_0203a178:
	ldr r0, [r5, #0xc]
	cmp r0, #0x1e
	ble lbl_0203a1c0
	ldr r0, [r5, #0x30]
	cmp r0, #0x33
	bne lbl_0203a1c0
	ldr r0, =g_Global
	ldr r1, =data_020c1420
	bl func_0200b924
	ldr r2, =g_Stage
	mov r3, #1
	ldr r0, =data_0210bb94
	mov r1, #0xc
	str r3, [r2, #0x100]
	bl func_020580fc
	mov r0, r5
	mov r1, #0xe
	bl func_0203a228
lbl_0203a1c0:
	add r0, r5, #0x10
	bl func_02123498
	mov r0, r5
	bl func_0203a230
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0203a218(void)
{
	ldr r12, =data_02123724
	add r0, r0, #0x10
	bx r12
}

extern "C" asm void func_0203a228(void)
{
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_0203a230(void)
{
	ldr r2, [r0, #4]
	ldr r1, [r0, #8]
	cmp r2, r1
	strne r1, [r0, #4]
	movne r1, #0
	ldreq r1, [r0, #0xc]
	addeq r1, r1, #1
	str r1, [r0, #0xc]
	bx lr
}

extern "C" asm void func_0203a254(void)
{
	stmdb sp!, {r4, lr}
	ldr r1, =0x027FFFA8
	mov r4, r0
	ldrh r0, [r1]
	and r0, r0, #0x8000
	movs r0, r0, asr #0xf
	beq lbl_0203a28c
	bl func_0207c0d8
	cmp r0, #1
	bne lbl_0203a28c
	mov r0, #0
	bl func_0207c0b8
	mov r0, #0
	str r0, [r4, #0x2d8]
lbl_0203a28c:
	ldr r0, =0x027FFFA8
	ldrh r0, [r0]
	and r0, r0, #0x8000
	movs r0, r0, asr #0xf
	bne lbl_0203a2c8
	ldr r0, [r4, #0x2d8]
	cmp r0, #0xa
	ble lbl_0203a2c8
	bl func_0207c0d8
	cmp r0, #0
	bne lbl_0203a2c8
	mov r0, #1
	bl func_0207c0b8
	mov r0, #0
	str r0, [r4, #0x2d8]
lbl_0203a2c8:
	ldr r0, [r4, #0x2d8]
	add r0, r0, #1
	str r0, [r4, #0x2d8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203a2dc(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, [r0, #0xc]
	ldr r2, =0x88888889
	mov r0, r3, lsr #0x1f
	smull r1, r12, r2, r3
	add r12, r3, r12
	add r12, r0, r12, asr #5
	mov r2, #0x3c
	smull r0, r1, r2, r12
	subs r12, r3, r0
	ldmneia sp!, {r3, pc}
	add r0, r2, #0xf3
	bl func_020559b0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0203a318(void)
{
	stmdb sp!, {r3, lr}
	bl func_0207c0d8
	cmp r0, #0
	bne lbl_0203a330
	mov r0, #1
	bl func_0207c0b8
lbl_0203a330:
	mov r0, #1
	bl func_02089558
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0203a33c(void)
{
	bx lr
}

extern "C" asm void func_0203a340(void)
{
	bx lr
}

#pragma thumb on
