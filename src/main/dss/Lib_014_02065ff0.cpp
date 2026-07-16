/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02065ff0(void);
    void func_02066050(void);
    void func_020660b0(void);
    void func_02066110(void);
    void func_02066170(void);
    void func_020661d0(void);
    void func_02066230(void);
    void func_02066290(void);
    void func_020662f0(void);
    void func_02066350(void);
    void func_020663b0(void);
    void func_02066410(void);
    void func_02066470(void);
    void func_020664d0(void);
    void func_02066530(void);
    void func_02066590(void);
    void func_02066630(void);
    void func_020666a0(void);
    void func_020666e8(void);
    void func_02066730(void);
    void func_0206679c(void);
    void func_020667e0(void);
    void func_020667f8(void);
    void func_0206685c(void);
    void func_0206689c(void);
    void func_020668b4(void);
    void func_02066918(void);
    void func_02066958(void);
    void func_020669b4(void);
    void func_02066af4(void);
    void func_02066b40(void);
    void func_02066b74(void);
    void func_02066be0(void);
    void func_02066c24(void);
    void func_02066cb4(void);
    void func_02066d1c(void);
    void func_02066d88(void);
    void func_02066dcc(void);
    void func_02066df0(void);
    void func_02066e34(void);
    void func_020670bc(void);
    void func_020670cc(void);
    void func_0206714c(void);
    void func_020671bc(void);
    void func_02067228(void);
    void func_020672ec(void);
    void func_02067384(void);
    void func_020673ec(void);
    void func_02067468(void);
    void func_020674ec(void);
    void func_02067540(void);
    void func_02067638(void);
    void func_020676e4(void);
    void func_02067744(void);
    void func_020677fc(void);
    void func_02067828(void);
    void func_02067840(void);
    void func_0206785c(void);
    void func_02067870(void);
    void func_02067888(void);
    void func_020678a0(void);
    void func_020678ec(void);
    void func_02067924(void);
    void func_02067940(void);
    void func_0206795c(void);
    void func_02067980(void);
    void func_020679ac(void);
    void func_02067a40(void);
    void data_020ba490(void);
    void data_020ba4a0(void);
    void data_020ba4a2(void);
    void data_020ba4a4(void);
    void data_020c3dbc(void);
    void data_0210ce78(void);
    void data_0210ce94(void);
    void data_0210ceb4(void);
    void func_01ff8000(void);
    void func_01ff8040(void);
    void func_01ff80b0(void);
    void func_01ff80d4(void);
    void func_020640ac(void);
    void func_020641ac(void);
    void func_02064258(void);
    void func_02064430(void);
    void func_02064518(void);
    void func_02064784(void);
    void func_02064804(void);
    void func_020648e0(void);
    void func_02064904(void);
    void func_02064928(void);
    void func_0206493c(void);
    void func_02064950(void);
    void func_0206498c(void);
    void func_020649b4(void);
    void func_02064b04(void);
    void func_02064b24(void);
    void func_02064b58(void);
    void func_02064b78(void);
    void func_02064bfc(void);
    void func_02064c70(void);
    void func_02064cf4(void);
    void func_02064d68(void);
    void func_02064d9c(void);
    void func_02064dbc(void);
    void func_02064df0(void);
    void func_02064e10(void);
    void func_02064e60(void);
    void func_02064ea0(void);
    void func_02064ef8(void);
    void func_02077480(void);
    void func_02077508(void);
    void func_02077594(void);
    void func_02077650(void);
    void func_02077680(void);
    void func_020776b0(void);
    void func_02079cfc(void);
    void func_02079d10(void);
    void func_0207a058(void);
}

#pragma thumb off

extern "C" asm void func_02065ff0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064b04
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066038
	cmp r4, #0x1c
	bls lbl_02066038
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066038:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066050(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064b24
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066098
	cmp r4, #0x1c
	bls lbl_02066098
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066098:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020660b0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064b58
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_020660f8
	cmp r4, #0x1c
	bls lbl_020660f8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_020660f8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066110(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064b78
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066158
	cmp r4, #0x1c
	bls lbl_02066158
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066158:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066170(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064bfc
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_020661b8
	cmp r4, #0x1c
	bls lbl_020661b8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_020661b8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020661d0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064c70
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066218
	cmp r4, #0x1c
	bls lbl_02066218
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066218:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066230(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064cf4
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066278
	cmp r4, #0x1c
	bls lbl_02066278
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066278:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066290(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064d68
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_020662d8
	cmp r4, #0x30
	bls lbl_020662d8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_020662d8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020662f0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064d9c
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066338
	cmp r4, #0x30
	bls lbl_02066338
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066338:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066350(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064dbc
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066398
	cmp r4, #0x30
	bls lbl_02066398
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066398:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020663b0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064df0
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_020663f8
	cmp r4, #0x30
	bls lbl_020663f8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_020663f8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066410(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064e10
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066458
	cmp r4, #0x30
	bls lbl_02066458
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066458:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066470(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064e60
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_020664b8
	cmp r4, #0x30
	bls lbl_020664b8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_020664b8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020664d0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064ea0
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066518
	cmp r4, #0x30
	bls lbl_02066518
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066518:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066530(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064ef8
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02066578
	cmp r4, #0x30
	bls lbl_02066578
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_0206714c
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066578:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067870
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066590(void)
{
	stmdb sp!, {r3, lr}
	bl func_020648e0
	ldr r1, =data_0210ce78
	cmp r0, #0x20
	str r0, [r1, #0x14]
	bgt lbl_020665c4
	cmp r0, #0x20
	bge lbl_02066608
	cmp r0, #0
	ldmleia sp!, {r3, pc}
	cmp r0, #0x10
	beq lbl_020665e0
	ldmia sp!, {r3, pc}
lbl_020665c4:
	cmp r0, #0x40
	bgt lbl_020665d4
	beq lbl_020665f4
	ldmia sp!, {r3, pc}
lbl_020665d4:
	cmp r0, #0x60
	beq lbl_02066608
	ldmia sp!, {r3, pc}
lbl_020665e0:
	ldr r2, =0x06880000
	mov r0, #0
	str r2, [r1, #0x10]
	str r0, [r1, #0xc]
	ldmia sp!, {r3, pc}
lbl_020665f4:
	ldr r2, =0x06894000
	mov r0, #0x4000
	str r2, [r1, #0x10]
	str r0, [r1, #0xc]
	ldmia sp!, {r3, pc}
lbl_02066608:
	ldr r2, =0x06890000
	ldr r0, =data_0210ce78
	mov r1, #0
	str r2, [r0, #0x10]
	str r1, [r0, #0xc]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066630(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #8
	ldr r12, =data_0210ce78
	ldr r3, =data_020c3dbc
	ldr lr, [r12, #0x10]
	ldr r4, [r12, #0xc]
	add r5, lr, r1
	ldr lr, [r3]
	mvn r12, #0
	mov r1, r0
	mov r3, r2
	cmp lr, r12
	sub r4, r5, r4
	beq lbl_02066688
	mov r12, #0
	str r12, [sp]
	mov r0, lr
	mov r2, r4
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
lbl_02066688:
	mov r1, r4
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020666a0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_020666bc
	bl func_02067384
lbl_020666bc:
	ldr r0, =data_0210ce78
	ldr r0, [r0, #0x14]
	bl func_020640ac
	ldr r0, =data_0210ce78
	mov r1, #0
	str r1, [r0, #0x14]
	str r1, [r0, #0x10]
	str r1, [r0, #0xc]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020666e8(void)
{
	stmdb sp!, {r3, lr}
	bl func_02064904
	ldr r1, =data_0210ce78
	cmp r0, #0
	str r0, [r1, #8]
	ldmeqia sp!, {r3, pc}
	cmp r0, #0x20
	beq lbl_02066718
	cmp r0, #0x40
	ldreq r0, =0x06894000
	streq r0, [r1, #4]
	ldmia sp!, {r3, pc}
lbl_02066718:
	ldr r0, =0x06890000
	str r0, [r1, #4]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066730(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #8
	ldr r3, =data_020c3dbc
	ldr lr, =data_0210ce78
	ldr r4, [r3]
	mvn r12, #0
	mov r6, r0
	mov r5, r1
	mov r3, r2
	cmp r4, r12
	ldr lr, [lr, #4]
	beq lbl_02066784
	mov r12, #0
	str r12, [sp]
	mov r0, r4
	mov r1, r6
	add r2, lr, r5
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066784:
	add r1, lr, r5
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0206679c(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_020667b8
	bl func_02067384
lbl_020667b8:
	ldr r0, =data_0210ce78
	ldr r0, [r0, #8]
	bl func_020641ac
	ldr r0, =data_0210ce78
	mov r1, #0
	str r1, [r0, #8]
	str r1, [r0, #4]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020667e0(void)
{
	stmdb sp!, {r3, lr}
	bl func_0206498c
	ldr r1, =data_0210ce78
	str r0, [r1]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020667f8(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldr r3, =data_020c3dbc
	mvn r12, #0
	ldr lr, [r3]
	mov r4, r0
	mov r3, r2
	cmp lr, r12
	beq lbl_02066844
	add r2, r1, #0x98000
	mov r12, #0
	str r12, [sp]
	mov r0, lr
	mov r1, r4
	add r2, r2, #0x6800000
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r4, pc}
lbl_02066844:
	add r1, r1, #0x98000
	add r1, r1, #0x6800000
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206685c(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066878
	bl func_02067384
lbl_02066878:
	ldr r0, =data_0210ce78
	ldr r0, [r0]
	bl func_02064784
	ldr r0, =data_0210ce78
	mov r1, #0
	str r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206689c(void)
{
	stmdb sp!, {r3, lr}
	bl func_020649b4
	ldr r1, =data_0210ce78
	str r0, [r1, #0x18]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020668b4(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldr r3, =data_020c3dbc
	mvn r12, #0
	ldr lr, [r3]
	mov r4, r0
	mov r3, r2
	cmp lr, r12
	beq lbl_02066900
	add r2, r1, #0x8a0000
	mov r12, #0
	str r12, [sp]
	mov r0, lr
	mov r1, r4
	add r2, r2, #0x6000000
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r4, pc}
lbl_02066900:
	add r1, r1, #0x8a0000
	add r1, r1, #0x6000000
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02066918(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066934
	bl func_02067384
lbl_02066934:
	ldr r0, =data_0210ce78
	ldr r0, [r0, #0x18]
	bl func_02064804
	ldr r0, =data_0210ce78
	mov r1, #0
	str r1, [r0, #0x18]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066958(void)
{
	stmdb sp!, {r3, lr}
	bl func_02064928
	mov r1, #6
	mul lr, r0, r1
	ldr r2, =data_020ba4a0
	ldr r1, =data_020ba4a2
	ldrh r12, [r2, lr]
	ldr r2, =data_020ba4a4
	ldrh r3, [r1, lr]
	ldr r1, =data_0210ce94
	ldrh r2, [r2, lr]
	str r0, [r1, #0x14]
	mov r0, r12, lsl #0xc
	str r0, [r1, #4]
	mov r0, r3, lsl #0xc
	str r0, [r1, #0x18]
	mov r0, r2, lsl #0xc
	str r0, [r1, #0x1c]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020669b4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #8
	ldr r3, =data_0210ce94
	mov r7, r0
	ldr r4, [r3, #0x18]
	mov r12, r1
	cmp r4, #0
	ldreq r0, [r3, #4]
	mov r6, r2
	addeq r2, r0, r12
	beq lbl_02066aa0
	ldr r2, [r3, #0x1c]
	add r0, r12, r6
	cmp r0, r2
	ldrcc r0, [r3, #4]
	addcc r2, r0, r12
	bcc lbl_02066aa0
	cmp r12, r2
	addcs r0, r4, r12
	subcs r2, r0, r2
	bcs lbl_02066aa0
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	sub r5, r2, r12
	cmp r0, r1
	ldr lr, [r3, #4]
	beq lbl_02066a40
	cmp r5, #0x30
	bls lbl_02066a40
	mov r1, r7
	mov r3, r5
	add r2, lr, r12
	bl func_0206714c
	b lbl_02066a50
lbl_02066a40:
	mov r0, r7
	mov r2, r5
	add r1, lr, r12
	bl func_02067870
lbl_02066a50:
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066a88
	mov r12, #0
	str r12, [sp]
	mov r2, r4
	add r1, r7, r5
	sub r3, r6, r5
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02066a88:
	mov r1, r4
	add r0, r7, r5
	sub r2, r6, r5
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02066aa0:
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066ad4
	mov r4, #0
	str r4, [sp]
	mov r1, r7
	mov r3, r6
	str r4, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_02066ad4:
	mov r1, r2
	mov r0, r7
	mov r2, r6
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_02066af4(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066b10
	bl func_02067384
lbl_02066b10:
	ldr r0, =data_0210ce94
	ldr r0, [r0, #0x14]
	bl func_02064258
	ldr r0, =data_0210ce94
	mov r1, #0
	str r1, [r0, #0x1c]
	str r1, [r0, #0x18]
	str r1, [r0, #4]
	str r1, [r0, #0x14]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066b40(void)
{
	stmdb sp!, {r3, lr}
	bl func_0206493c
	mov r3, r0, asr #4
	ldr r1, =data_0210ce94
	ldr r2, =data_020ba490
	mov r3, r3, lsl #1
	ldrh r2, [r2, r3]
	str r0, [r1, #0xc]
	mov r0, r2, lsl #0xc
	str r0, [r1, #8]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066b74(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #8
	ldr r3, =data_020c3dbc
	ldr lr, =data_0210ce94
	ldr r4, [r3]
	mvn r12, #0
	mov r6, r0
	mov r5, r1
	mov r3, r2
	cmp r4, r12
	ldr lr, [lr, #8]
	beq lbl_02066bc8
	mov r12, #0
	str r12, [sp]
	mov r0, r4
	mov r1, r6
	add r2, lr, r5
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, pc}
lbl_02066bc8:
	add r1, lr, r5
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02066be0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066bfc
	bl func_02067384
lbl_02066bfc:
	ldr r0, =data_0210ce94
	ldr r0, [r0, #0xc]
	bl func_02064430
	ldr r0, =data_0210ce94
	mov r1, #0
	str r1, [r0, #0xc]
	str r1, [r0, #8]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066c24(void)
{
	stmdb sp!, {r3, lr}
	bl func_02064950
	ldr r1, =data_0210ce94
	cmp r0, #0xc
	str r0, [r1]
	addls pc, pc, r0, lsl #2
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	b lbl_02066c8c
	b lbl_02066c74
	b lbl_02066c74
	b lbl_02066c98
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	b lbl_02066c80
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	ldmia sp!, {r3, pc}
	b lbl_02066c80
lbl_02066c74:
	mov r0, #0x6800000
	str r0, [r1, #0x10]
	ldmia sp!, {r3, pc}
lbl_02066c80:
	ldr r0, =0x06840000
	str r0, [r1, #0x10]
	ldmia sp!, {r3, pc}
lbl_02066c8c:
	ldr r0, =0x067E0000
	str r0, [r1, #0x10]
	ldmia sp!, {r3, pc}
lbl_02066c98:
	ldr r0, =0x06820000
	str r0, [r1, #0x10]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066cb4(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldr r2, =data_020c3dbc
	ldr r12, =data_0210ce94
	ldr lr, [r2]
	mvn r2, #0
	mov r4, r0
	mov r3, r1
	cmp lr, r2
	ldr r2, [r12, #0x10]
	beq lbl_02066d00
	mov r12, #0
	str r12, [sp]
	mov r0, lr
	mov r1, r4
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r4, pc}
lbl_02066d00:
	mov r1, r2
	mov r2, r3
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02066d1c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #8
	ldr r2, =data_020c3dbc
	ldr r12, =data_0210ce94
	ldr lr, [r2]
	mvn r2, #0
	mov r5, r0
	mov r3, r1
	cmp lr, r2
	ldr r4, [r12, #0x10]
	beq lbl_02066d6c
	mov r12, #0
	str r12, [sp]
	mov r0, lr
	mov r1, r5
	add r2, r4, #0x20000
	str r12, [sp, #4]
	bl func_020672ec
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
lbl_02066d6c:
	mov r2, r3
	add r1, r4, #0x20000
	bl func_02067870
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02066d88(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	beq lbl_02066da4
	bl func_02067384
lbl_02066da4:
	ldr r0, =data_0210ce94
	ldr r0, [r0]
	bl func_02064518
	ldr r0, =data_0210ce94
	mov r1, #0
	str r1, [r0]
	str r1, [r0, #0x10]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02066dcc(void)
{
	ldmia r0!, {r2, r3, r12}
	stmia r1, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1, {r2, r3, r12}
	bx lr
}

extern "C" asm void func_02066df0(void)
{
	ldr r1, =0x55555555
	ldr r2, =0x33333333
	and r1, r1, r0, lsr #1
	sub r0, r0, r1
	and r1, r0, r2
	and r0, r2, r0, lsr #2
	add r1, r1, r0
	ldr r0, =0x0F0F0F0F
	add r1, r1, r1, lsr #4
	and r0, r1, r0
	add r0, r0, r0, lsr #8
	add r0, r0, r0, lsr #16
	and r0, r0, #0xff
	bx lr
}

extern "C" asm void func_02066e34(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	cmp r1, #1
	ble lbl_020670b4
	ldr r4, [sp, #0x24]
	mov r11, r3
	mov r8, r2
	cmp r4, #0
	bne lbl_02066e6c
	clz r2, r1
	rsb r2, r2, #0x20
	mov r2, r2, lsl #3
	sub sp, sp, r2
	mov r4, sp
	str r2, [sp, #-4]!
lbl_02066e6c:
	sub r1, r1, #1
	mla r1, r1, r8, r0
	mov r5, r4
	str r0, [r4], #4
	str r1, [r4], #4
	clz r2, r8
	rsb r2, r2, #0x20
	str r2, [sp, #-4]!
lbl_02066e8c:
	cmp r4, r5
	beq lbl_0206709c
	ldr r7, [r4, #-4]
	ldr r6, [r4, #-8]!
	sub r2, r7, r6
	cmp r2, r8
	bne lbl_02066f00
	mov r0, r6
	mov r1, r7
	blx r11
	cmp r0, #0
	ble lbl_02066e8c
	mov r0, r8
	tst r0, #3
	beq lbl_02066ee4
lbl_02066ec8:
	ldrb r1, [r6]
	subs r0, r0, #1
	swpb r1, r1, [r7]
	add r7, r7, #1
	strb r1, [r6], #1
	bne lbl_02066ec8
	b lbl_02066e8c
lbl_02066ee4:
	ldr r1, [r6]
	subs r0, r0, #4
	swp r1, r1, [r7]
	add r7, r7, #4
	str r1, [r6], #4
	bne lbl_02066ee4
	b lbl_02066e8c
lbl_02066f00:
	ldr r3, [sp]
	sub r2, r7, r6
	mov r2, r2, lsr r3
	mla r2, r2, r8, r6
	mov r3, r6
	mov r0, r8
	mov r2, r2
	tst r0, #3
	beq lbl_02066f40
lbl_02066f24:
	ldrb r1, [r2]
	subs r0, r0, #1
	swpb r1, r1, [r3]
	add r3, r3, #1
	strb r1, [r2], #1
	bne lbl_02066f24
	b lbl_02066f58
lbl_02066f40:
	ldr r1, [r2]
	subs r0, r0, #4
	swp r1, r1, [r3]
	add r3, r3, #4
	str r1, [r2], #4
	bne lbl_02066f40
lbl_02066f58:
	mov r9, r6
	mov r10, r7
	add r9, r9, r8
lbl_02066f64:
	cmp r9, r7
	bge lbl_02066f84
	mov r1, r6
	mov r0, r9
	blx r11
	cmp r0, #0
	addlt r9, r9, r8
	blt lbl_02066f64
lbl_02066f84:
	mov r1, r6
	mov r0, r10
	blx r11
	cmp r0, #0
	subgt r10, r10, r8
	bgt lbl_02066f84
	cmp r9, r10
	bge lbl_02066ffc
	mov r2, r9
	mov r3, r10
	mov r0, r8
	tst r0, #3
	beq lbl_02066fd4
lbl_02066fb8:
	ldrb r1, [r2]
	subs r0, r0, #1
	swpb r1, r1, [r3]
	add r3, r3, #1
	strb r1, [r2], #1
	bne lbl_02066fb8
	b lbl_02066fec
lbl_02066fd4:
	ldr r1, [r2]
	subs r0, r0, #4
	swp r1, r1, [r3]
	add r3, r3, #4
	str r1, [r2], #4
	bne lbl_02066fd4
lbl_02066fec:
	add r9, r9, r8
	sub r10, r10, r8
	cmp r9, r10
	ble lbl_02066f64
lbl_02066ffc:
	mov r2, r6
	mov r3, r10
	mov r0, r8
	tst r0, #3
	beq lbl_0206702c
lbl_02067010:
	ldrb r1, [r2]
	subs r0, r0, #1
	swpb r1, r1, [r3]
	add r3, r3, #1
	strb r1, [r2], #1
	bne lbl_02067010
	b lbl_02067044
lbl_0206702c:
	ldr r1, [r2]
	subs r0, r0, #4
	swp r1, r1, [r3]
	add r3, r3, #4
	str r1, [r2], #4
	bne lbl_0206702c
lbl_02067044:
	sub r2, r10, r6
	sub r3, r7, r10
	cmp r2, r3
	ble lbl_02067078
	sub r2, r10, r8
	cmp r6, r2
	strlt r6, [r4], #4
	strlt r2, [r4], #4
	add r2, r10, r8
	cmp r2, r7
	strlt r2, [r4], #4
	strlt r7, [r4], #4
	b lbl_02066e8c
lbl_02067078:
	add r2, r10, r8
	cmp r2, r7
	strlt r2, [r4], #4
	strlt r7, [r4], #4
	sub r2, r10, r8
	cmp r6, r2
	strlt r6, [r4], #4
	strlt r2, [r4], #4
	b lbl_02066e8c
lbl_0206709c:
	add sp, sp, #4
	sub r4, r4, #4
	cmp r4, sp
	ldreq r0, [sp]
	addeq r0, r0, #4
	addeq sp, sp, r0
lbl_020670b4:
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	bx lr
}

extern "C" asm void func_020670bc(void)
{
	ldr r1, =0x04000247
	strb r0, [r1]
	bx lr
}

extern "C" asm void func_020670cc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	movs r4, r3
	mov r8, r0
	mov r7, r1
	mov r6, r2
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	add r0, r8, r8, lsl #1
	add r0, r0, #2
	mov r0, r0, lsl #2
	add r0, r0, #0xb0
	add r5, r0, #0x4000000
lbl_020670f8:
	ldr r0, [r5]
	tst r0, #0x80000000
	bne lbl_020670f8
	bl func_02079cfc
	mov r2, r8, lsl #2
	add r1, r2, #0xe0
	mov r3, r4, lsr #2
	mov r4, r0
	add r12, r2, #0x4000000
	mov r0, r8
	mov r2, r7
	add r1, r1, #0x4000000
	orr r3, r3, #0x85000000
	str r6, [r12, #0xe0]
	bl func_01ff80d4
	mov r0, r4
	bl func_02079d10
lbl_0206713c:
	ldr r0, [r5]
	tst r0, #0x80000000
	bne lbl_0206713c
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0206714c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r5, r3
	mov r6, r2
	mov r2, r5
	mov r3, #0
	mov r8, r0
	mov r7, r1
	bl func_020674ec
	cmp r5, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	add r0, r8, r8, lsl #1
	add r0, r0, #2
	mov r0, r0, lsl #2
	add r0, r0, #0xb0
	add r4, r0, #0x4000000
lbl_02067188:
	ldr r0, [r4]
	tst r0, #0x80000000
	bne lbl_02067188
	mov r3, r5, lsr #2
	mov r0, r8
	mov r1, r7
	mov r2, r6
	orr r3, r3, #0x84000000
	bl func_01ff8040
lbl_020671ac:
	ldr r0, [r4]
	tst r0, #0x80000000
	bne lbl_020671ac
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020671bc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	movs r5, r3
	mov r8, r0
	mov r7, r1
	mov r6, r2
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	mov r2, r5
	mov r3, #0
	bl func_020674ec
	add r0, r8, r8, lsl #1
	add r0, r0, #2
	mov r0, r0, lsl #2
	add r0, r0, #0xb0
	add r4, r0, #0x4000000
lbl_020671f4:
	ldr r0, [r4]
	tst r0, #0x80000000
	bne lbl_020671f4
	mov r3, r5, lsr #1
	mov r0, r8
	mov r1, r7
	mov r2, r6
	orr r3, r3, #0x80000000
	bl func_01ff8040
lbl_02067218:
	ldr r0, [r4]
	tst r0, #0x80000000
	bne lbl_02067218
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02067228(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	movs r4, r3
	mov r7, r0
	mov r6, r1
	mov r5, r2
	ldr r8, [sp, #0x18]
	bne lbl_02067258
	cmp r8, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r0, [sp, #0x1c]
	blx r8
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02067258:
	bl func_02067384
	cmp r8, #0
	beq lbl_020672b0
	ldr r2, [sp, #0x1c]
	mov r0, r7
	mov r1, r8
	bl func_02077594
	bl func_02079cfc
	mov r3, r4, lsr #2
	mov r2, r7, lsl #2
	add r1, r2, #0xe0
	add r2, r2, #0x4000000
	str r5, [r2, #0xe0]
	mov r4, r0
	mov r0, r7
	mov r2, r6
	add r1, r1, #0x4000000
	orr r3, r3, #0xc5000000
	bl func_01ff80b0
	mov r0, r4
	bl func_02079d10
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_020672b0:
	bl func_02079cfc
	mov r2, r7, lsl #2
	add r1, r2, #0xe0
	mov r3, r4, lsr #2
	mov r4, r0
	add r12, r2, #0x4000000
	mov r0, r7
	mov r2, r6
	add r1, r1, #0x4000000
	orr r3, r3, #0x85000000
	str r5, [r12, #0xe0]
	bl func_01ff80b0
	mov r0, r4
	bl func_02079d10
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020672ec(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r5, r3
	mov r6, r2
	mov r2, r5
	mov r3, #0
	mov r8, r0
	mov r7, r1
	ldr r4, [sp, #0x18]
	bl func_020674ec
	cmp r5, #0
	bne lbl_0206732c
	cmp r4, #0
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r0, [sp, #0x1c]
	blx r4
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_0206732c:
	mov r0, r8
	bl func_02067384
	cmp r4, #0
	beq lbl_02067368
	ldr r2, [sp, #0x1c]
	mov r0, r8
	mov r1, r4
	bl func_02077594
	mov r3, r5, lsr #2
	mov r0, r8
	mov r1, r7
	mov r2, r6
	orr r3, r3, #0xc4000000
	bl func_01ff8000
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
lbl_02067368:
	mov r3, r5, lsr #2
	mov r0, r8
	mov r1, r7
	mov r2, r6
	orr r3, r3, #0x84000000
	bl func_01ff8000
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02067384(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02079cfc
	add r1, r4, r4, lsl #1
	add r1, r1, #2
	mov r1, r1, lsl #2
	add r1, r1, #0xb0
	add r2, r1, #0x4000000
lbl_020673a4:
	ldr r1, [r2]
	tst r1, #0x80000000
	bne lbl_020673a4
	cmp r4, #0
	bne lbl_020673e0
	mov r1, #0xc
	mul r2, r4, r1
	add r1, r2, #0xb0
	add r2, r2, #0x4000000
	mov r3, #0
	str r3, [r2, #0xb0]
	add r2, r1, #0x4000000
	ldr r1, =0x81400001
	str r3, [r2, #4]
	str r1, [r2, #8]
lbl_020673e0:
	bl func_02079d10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020673ec(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02079cfc
	mov r1, #6
	mul r1, r4, r1
	add r1, r1, #5
	mov r1, r1, lsl #1
	add r1, r1, #0x4000000
	ldrh r2, [r1, #0xb0]
	cmp r4, #0
	bic r2, r2, #0x3a00
	strh r2, [r1, #0xb0]
	ldrh r2, [r1, #0xb0]
	bic r2, r2, #0x8000
	strh r2, [r1, #0xb0]
	ldrh r2, [r1, #0xb0]
	ldrh r1, [r1, #0xb0]
	bne lbl_0206745c
	mov r1, #0xc
	mul r2, r4, r1
	add r1, r2, #0xb0
	add r2, r2, #0x4000000
	mov r3, #0
	str r3, [r2, #0xb0]
	add r2, r1, #0x4000000
	ldr r1, =0x81400001
	str r3, [r2, #4]
	str r1, [r2, #8]
lbl_0206745c:
	bl func_02079d10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02067468(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldr r5, =0x040000B8
	mov r7, r0
	mov r6, r1
	mov r4, #0
lbl_0206747c:
	cmp r4, r7
	beq lbl_020674d4
	ldr r0, [r5]
	tst r0, #0x80000000
	andne r0, r0, #0x38000000
	cmpne r0, r6
	beq lbl_020674d4
	cmp r0, #0x8000000
	cmpeq r6, #0x10000000
	beq lbl_020674d4
	cmp r0, #0x10000000
	cmpeq r6, #0x8000000
	beq lbl_020674d4
	cmp r0, #0x18000000
	cmpne r0, #0x20000000
	cmpne r0, #0x28000000
	cmpne r0, #0x30000000
	cmpne r0, #0x38000000
	cmpne r0, #0x8000000
	cmpne r0, #0x10000000
	bne lbl_020674d4
	bl func_0207a058
lbl_020674d4:
	add r4, r4, #1
	cmp r4, #3
	add r5, r5, #0xc
	blt lbl_0206747c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020674ec(void)
{
	stmdb sp!, {r3, lr}
	cmp r0, #0
	ldmneia sp!, {r3, pc}
	cmp r3, #0
	and r12, r1, #0xff000000
	beq lbl_02067510
	cmp r3, #0x800000
	subeq r1, r1, r2
	b lbl_02067514
lbl_02067510:
	add r1, r1, r2
lbl_02067514:
	cmp r12, #0x4000000
	and r0, r1, #0xff000000
	beq lbl_02067538
	cmp r12, #0x8000000
	bcs lbl_02067538
	cmp r0, #0x4000000
	beq lbl_02067538
	cmp r0, #0x8000000
	ldmccia sp!, {r3, pc}
lbl_02067538:
	bl func_0207a058
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02067540(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	cmp r2, #0
	bne lbl_02067564
	cmp r3, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, [sp, #8]
	blx r3
	ldmia sp!, {r4, pc}
lbl_02067564:
	ldr r0, =data_0210ceb4
lbl_02067568:
	ldr r12, [r0]
	cmp r12, #0
	bne lbl_02067568
	ldr r12, =0x04000600
lbl_02067578:
	ldr r0, [r12]
	and r0, r0, #0x7000000
	mov r0, r0, lsr #0x18
	tst r0, #2
	beq lbl_02067578
	ldr r12, =data_0210ceb4
	mov r0, #1
	str r0, [r12]
	str r4, [r12, #4]
	str r1, [r12, #8]
	str r2, [r12, #0xc]
	str r3, [r12, #0x10]
	ldr lr, [sp, #8]
	mov r0, r4
	mov r3, #0
	str lr, [r12, #0x14]
	bl func_020674ec
	mov r0, r4
	bl func_02067384
	bl func_02079cfc
	ldr r1, =0x04000600
	mov r4, r0
	ldr r0, [r1]
	ldr r1, =data_0210ceb4
	and r0, r0, #0xc0000000
	mov r2, r0, lsr #0x1e
	mov r0, #0x200000
	str r2, [r1, #0x18]
	bl func_02077508
	ldr r1, =data_0210ceb4
	ldr r2, =0x04000600
	str r0, [r1, #0x1c]
	ldr r0, [r2]
	ldr r1, =func_02067638
	bic r0, r0, #0xc0000000
	orr r3, r0, #0x40000000
	mov r0, #0x200000
	str r3, [r2]
	bl func_02077480
	mov r0, #0x200000
	bl func_02077650
	bl func_02067638
	mov r0, r4
	bl func_02079d10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02067638(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r0, =data_0210ceb4
	ldr r5, [r0, #0xc]
	cmp r5, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	ldr r0, =data_0210ceb4
	cmp r5, #0x1d8
	ldr r1, [r0, #0xc]
	movcs r5, #0x1d8
	ldr r4, [r0, #8]
	subs r1, r1, r5
	str r1, [r0, #0xc]
	add r1, r4, r5
	str r1, [r0, #8]
	bne lbl_020676b0
	ldr r0, [r0, #4]
	ldr r1, =func_020676e4
	mov r2, #0
	bl func_02077594
	ldr r0, =data_0210ceb4
	mov r3, #0x3bc00000
	rsb r3, r3, #0
	ldr r0, [r0, #4]
	ldr r2, =0x04000400
	mov r1, r4
	orr r3, r3, r5, lsr #2
	bl func_01ff8000
	mov r0, #0x200000
	bl func_020776b0
	ldmia sp!, {r3, r4, r5, pc}
lbl_020676b0:
	ldr r3, =0x84400000
	ldr r0, [r0, #4]
	ldr r2, =0x04000400
	mov r1, r4
	orr r3, r3, r5, lsr #2
	bl func_01ff8000
	mov r0, #0x200000
	bl func_020776b0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020676e4(void)
{
	stmdb sp!, {r3, lr}
	mov r0, #0x200000
	bl func_02077680
	ldr r2, =0x04000600
	ldr r0, =data_0210ceb4
	ldr r1, [r2]
	ldr r3, [r0, #0x18]
	bic r1, r1, #0xc0000000
	orr r1, r1, r3, lsl #30
	str r1, [r2]
	ldr r1, [r0, #0x1c]
	mov r0, #0x200000
	bl func_02077480
	ldr r0, =data_0210ceb4
	mov r1, #0
	str r1, [r0]
	ldr r1, [r0, #0x10]
	ldr r0, [r0, #0x14]
	cmp r1, #0
	ldmeqia sp!, {r3, pc}
	blx r1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02067744(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	movs r4, r2
	mov r6, r0
	mov r5, r1
	bne lbl_0206776c
	cmp r3, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r0, [sp, #0x10]
	blx r3
	ldmia sp!, {r4, r5, r6, pc}
lbl_0206776c:
	ldr r0, =data_0210ceb4
lbl_02067770:
	ldr r1, [r0]
	cmp r1, #0
	bne lbl_02067770
	ldr r2, =data_0210ceb4
	mov r0, #1
	str r0, [r2]
	str r6, [r2, #4]
	ldr r12, [sp, #0x10]
	str r3, [r2, #0x10]
	mov r0, r6
	mov r1, #0x38000000
	str r12, [r2, #0x14]
	bl func_02067468
	mov r0, r6
	mov r1, r5
	mov r2, r4
	mov r3, #0
	bl func_020674ec
	mov r0, r6
	bl func_02067384
	mov r0, r6
	ldr r1, =func_020677fc
	mov r2, #0
	bl func_02077594
	mov r0, r6
	mov r1, r5
	ldr r2, =0x04000400
	mov r3, #0x3c00000
	rsb r3, r3, #0
	orr r3, r3, r4, lsr #2
	bl func_01ff8000
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020677fc(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_0210ceb4
	mov r1, #0
	str r1, [r0]
	ldr r1, [r0, #0x10]
	ldr r0, [r0, #0x14]
	cmp r1, #0
	ldmeqia sp!, {r3, pc}
	blx r1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02067828(void)
{
	mov r3, #0
lbl_0206782c:
	cmp r3, r2
	strlth r0, [r1, r3]
	addlt r3, r3, #2
	blt lbl_0206782c
	bx lr
}

extern "C" asm void func_02067840(void)
{
	mov r12, #0
lbl_02067844:
	cmp r12, r2
	ldrlth r3, [r0, r12]
	strlth r3, [r1, r12]
	addlt r12, r12, #2
	blt lbl_02067844
	bx lr
}

extern "C" asm void func_0206785c(void)
{
	add r12, r1, r2
lbl_02067860:
	cmp r1, r12
	stmltia r1!, {r0}
	blt lbl_02067860
	bx lr
}

extern "C" asm void func_02067870(void)
{
	add r12, r1, r2
lbl_02067874:
	cmp r1, r12
	ldmltia r0!, {r2}
	stmltia r1!, {r2}
	blt lbl_02067874
	bx lr
}

extern "C" asm void func_02067888(void)
{
	add r12, r0, r2
lbl_0206788c:
	cmp r0, r12
	ldmltia r0!, {r2}
	strlt r2, [r1]
	blt lbl_0206788c
	bx lr
}

extern "C" asm void func_020678a0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9}
	add r9, r1, r2
	mov r12, r2, lsr #5
	add r12, r1, r12, lsl #5
	mov r2, r0
	mov r3, r2
	mov r4, r2
	mov r5, r2
	mov r6, r2
	mov r7, r2
	mov r8, r2
lbl_020678cc:
	cmp r1, r12
	stmltia r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
	blt lbl_020678cc
lbl_020678d8:
	cmp r1, r9
	stmltia r1!, {r0}
	blt lbl_020678d8
	ldmia sp!, {r4, r5, r6, r7, r8, r9}
	bx lr
}

extern "C" asm void func_020678ec(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10}
	add r10, r1, r2
	mov r12, r2, lsr #5
	add r12, r1, r12, lsl #5
lbl_020678fc:
	cmp r1, r12
	ldmltia r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
	stmltia r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
	blt lbl_020678fc
lbl_0206790c:
	cmp r1, r10
	ldmltia r0!, {r2}
	stmltia r1!, {r2}
	blt lbl_0206790c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10}
	bx lr
}

extern "C" asm void func_02067924(void)
{
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3}
	stmia r1!, {r2, r3}
	bx lr
}

extern "C" asm void func_02067940(void)
{
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	bx lr
}

extern "C" asm void func_0206795c(void)
{
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	bx lr
}

extern "C" asm void func_02067980(void)
{
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	stmia r1!, {r2, r3, r12}
	ldmia r0, {r0, r2, r3, r12}
	stmia r1!, {r0, r2, r3, r12}
	bx lr
}

extern "C" asm void func_020679ac(void)
{
	cmp r2, #0
	bxeq lr
	tst r0, #1
	beq lbl_020679d8
	ldrh r12, [r0, #-1]
	and r12, r12, #0xff
	orr r3, r12, r1, lsl #8
	strh r3, [r0, #-1]
	add r0, r0, #1
	subs r2, r2, #1
	bxeq lr
lbl_020679d8:
	cmp r2, #2
	bcc lbl_02067a20
	orr r1, r1, r1, lsl #8
	tst r0, #2
	beq lbl_020679f8
	strh r1, [r0], #2
	subs r2, r2, #2
	bxeq lr
lbl_020679f8:
	orr r1, r1, r1, lsl #16
	bics r3, r2, #3
	beq lbl_02067a18
	sub r2, r2, r3
	add r12, r3, r0
lbl_02067a0c:
	str r1, [r0], #4
	cmp r0, r12
	bcc lbl_02067a0c
lbl_02067a18:
	tst r2, #2
	strneh r1, [r0], #2
lbl_02067a20:
	tst r2, #1
	bxeq lr
	ldrh r3, [r0]
	and r3, r3, #0xff00
	and r1, r1, #0xff
	orr r1, r1, r3
	strh r1, [r0]
	bx lr
}

extern "C" asm void func_02067a40(void)
{
	cmp r2, #0
	bxeq lr
	tst r1, #1
	beq lbl_02067a80
	ldrh r12, [r1, #-1]
	and r12, r12, #0xff
	tst r0, #1
	ldrneh r3, [r0, #-1]
	movne r3, r3, lsr #8
	ldreqh r3, [r0]
	orr r3, r12, r3, lsl #8
	strh r3, [r1, #-1]
	add r0, r0, #1
	add r1, r1, #1
	subs r2, r2, #1
	bxeq lr
lbl_02067a80:
	eor r12, r1, r0
	tst r12, #1
	beq lbl_02067ad4
	bic r0, r0, #1
	ldrh r12, [r0], #2
	mov r3, r12, lsr #8
	subs r2, r2, #2
	bcc lbl_02067ab8
lbl_02067aa0:
	ldrh r12, [r0], #2
	orr r12, r3, r12, lsl #8
	strh r12, [r1], #2
	mov r3, r12, lsr #0x10
	subs r2, r2, #2
	bcs lbl_02067aa0
lbl_02067ab8:
	tst r2, #1
	bxeq lr
	ldrh r12, [r1]
	and r12, r12, #0xff00
	orr r12, r12, r3
	strh r12, [r1]
	bx lr
lbl_02067ad4:
	tst r12, #2
	beq lbl_02067b00
	bics r3, r2, #1
	beq lbl_02067b4c
	sub r2, r2, r3
	add r12, r3, r1
lbl_02067aec:
	ldrh r3, [r0], #2
	strh r3, [r1], #2
	cmp r1, r12
	bcc lbl_02067aec
	b lbl_02067b4c
lbl_02067b00:
	cmp r2, #2
	bcc lbl_02067b4c
	tst r1, #2
	beq lbl_02067b20
	ldrh r3, [r0], #2
	strh r3, [r1], #2
	subs r2, r2, #2
	bxeq lr
lbl_02067b20:
	bics r3, r2, #3
	beq lbl_02067b40
	sub r2, r2, r3
	add r12, r3, r1
lbl_02067b30:
	ldr r3, [r0], #4
	str r3, [r1], #4
	cmp r1, r12
	bcc lbl_02067b30
lbl_02067b40:
	tst r2, #2
	ldrneh r3, [r0], #2
	strneh r3, [r1], #2
lbl_02067b4c:
	tst r2, #1
	bxeq lr
	ldrh r2, [r1]
	ldrh r0, [r0]
	and r2, r2, #0xff00
	and r0, r0, #0xff
	orr r0, r2, r0
	strh r0, [r1]
	bx lr
}

#pragma thumb on
