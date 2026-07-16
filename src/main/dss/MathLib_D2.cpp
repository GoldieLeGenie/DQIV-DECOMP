/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02089ae4(void);
    void func_02089b34(void);
    void func_02089ff4(void);
    void func_0208a014(void);
    void func_0208a028(void);
    void func_0208a088(void);
    void func_0208a0e8(void);
    void func_0208a0fc(void);
    void func_0208a104(void);
    void func_0208a114(void);
    void _ZN3dss8DssUtils8strcpy_sEPciS1_(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus16setAllPlayerModeEv(void);
    void _ZN6status11PartyStatus8getCountEv(void);
    void _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE(void);
    void _ZN6status11StoryStatus10setChapterEi(void);
    void _ZN6status12BattleResult26setDisablePlayerDemolitionEb(void);
    void _ZN6status14HaveStatusInfo5setHpEt(void);
    void _ZN6status14HaveStatusInfo7revivalEv(void);
    void _ZN6status14HaveStatusInfo8getHpMaxEv(void);
    void _ZN6status14g_BattleResultE(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status7g_StoryE(void);
    void data_02052401(void);
    void data_020c49c0(void);
    void data_020c49d8(void);
    void data_020c49e4(void);
    void data_020c49f8(void);
    void data_020c4a04(void);
    void data_020c7a8c(void);
    void data_020ef7e4(void);
    void data_0210bb94(void);
    void data_02116ce0(void);
    void data_02116d40(void);
    void data_0216639c(void);
    void data_02187b28(void);
    void func_0200a6c8(void);
    void func_0200aae0(void);
    void func_0200aae4(void);
    void func_0200ab08(void);
    void func_0200ab0c(void);
    void func_0200ba8c(void);
    void func_0200bb44(void);
    void func_02010540(void);
    void func_0201054c(void);
    void func_020292c0(void);
    void func_020292d0(void);
    void func_020292f8(void);
    void func_02029414(void);
    void func_02035108(void);
    void func_02035110(void);
    void func_020499a4(void);
    void func_0204b694(void);
    void func_0205241c(void);
    void func_020545fc(void);
    void func_0205810c(void);
    void func_02058114(void);
    void func_0207e88c(void);
    void func_0207f268(void);
    void func_0207f320(void);
    void func_0207f3bc(void);
    void func_0207f400(void);
    void func_0207f44c(void);
    void func_0212e37c(void);
    void func_0212e5c0(void);
    void g_Global(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_02089ae4(void)
{
	mov r3, #0
	str r3, [r0]
	mov r1, #1
	str r1, [r0, #4]
	str r1, [r0, #8]
	str r1, [r0, #0xc]
	str r3, [r0, #0x18]
	mov r2, #0x64
	mov r1, #0x1e
	str r2, [r0, #0x1c]
	mov r2, #5
	str r2, [r0, #0x20]
	str r1, [r0, #0x24]
	str r3, [r0, #0x38]
	str r3, [r0, #0x3c]
	str r3, [r0, #0x44]
	str r3, [r0, #0x28]
	sub r1, r1, #0x1f
	str r1, [r0, #0x2c]
	bx lr
}

extern "C" asm void func_02089b34(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x10
	mov r4, r0
	ldr r0, [r4, #0x28]
	cmp r0, #5
	addls pc, pc, r0, lsl #2
	b lbl_02089fa4
	b lbl_02089fa4
	b lbl_02089b68
	b lbl_02089d20
	b lbl_02089d44
	b lbl_02089ec0
	b lbl_02089f60
lbl_02089b68:
	ldr r0, [r4, #0x2c]
	cmp r0, #0x1e
	bne lbl_02089fa4
	ldr r0, [r4, #0x30]
	cmp r0, #0xa3
	bne lbl_02089b94
	mov r0, #4
	str r0, [r4, #0x28]
	sub r0, r0, #5
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089b94:
	cmp r0, #0xba
	bne lbl_02089bb0
	mov r0, #4
	str r0, [r4, #0x28]
	sub r0, r0, #5
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089bb0:
	ldr r0, =_ZN6status7g_StoryE
	mov r1, #5
	bl _ZN6status11StoryStatus10setChapterEi
	ldr r0, =g_Stage
	mov r1, #2
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	bl func_0200a6c8
	ldr r1, [r4, #0x30]
	bl func_0200aae0
	bl func_0200a6c8
	mov r1, #2
	bl func_0200aae4
	bl func_0200a6c8
	mov r1, #1
	bl func_0200ab08
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus16setAllPlayerModeEv
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus8getCountEv
	mov r9, r0
	cmp r9, #0
	mov r10, #0
	ble lbl_02089c98
	ldr r8, =_ZN6status7g_PartyE
	ldr r5, =0x51EB851F
	mov r6, #1
lbl_02089c18:
	mov r0, r8
	mov r1, r10
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	mov r7, r0
	add r0, r7, #8
	bl _ZN6status14HaveStatusInfo7revivalEv
	add r0, r7, #8
	bl _ZN6status14HaveStatusInfo8getHpMaxEv
	ldr r1, [r4, #0x1c]
	mul r2, r0, r1
	smull r1, r3, r5, r2
	mov r1, r2, lsr #0x1f
	adds r3, r1, r3, asr #5
	moveq r3, r6
	cmp r3, r0
	movgt r3, r0
	mov r1, r3, lsl #0x10
	add r0, r7, #8
	mov r1, r1, lsr #0x10
	bl _ZN6status14HaveStatusInfo5setHpEt
	ldrh r0, [r7, #0x4c]
	sub r0, r0, #1
	cmp r0, #1
	bhi lbl_02089c80
	ldr r0, [r4, #0x10]
	b lbl_02089c84
lbl_02089c80:
	ldr r0, [r4, #0x14]
lbl_02089c84:
	add r10, r10, #1
	cmp r0, #6
	strne r0, [r7, #0x3b8]
	cmp r10, r9
	blt lbl_02089c18
lbl_02089c98:
	bl func_0200a6c8
	bl func_0200ab0c
	cmp r0, #0
	beq lbl_02089d0c
	mov r0, #1
	bl func_0201054c
	ldr r0, [r4, #0x18]
	cmp r0, #0
	beq lbl_02089cc4
	bl func_02010540
	b lbl_02089cd0
lbl_02089cc4:
	ldr r0, =_ZN6status14g_BattleResultE
	mov r1, #1
	bl _ZN6status12BattleResult26setDisablePlayerDemolitionEb
lbl_02089cd0:
	ldr r0, =g_Global
	bl func_0200ba8c
	mov r1, #2
	ldr r0, =data_02116d40
	str r1, [r4, #0x28]
	sub r1, r1, #3
	str r1, [r4, #0x2c]
	bl func_0207f400
	ldr r0, =data_02116d40
	mov r1, #1
	mov r2, #4
	bl func_0207f44c
	ldr r0, =data_02116d40
	bl func_0207f320
	b lbl_02089fa4
lbl_02089d0c:
	mov r0, #4
	str r0, [r4, #0x28]
	sub r0, r0, #5
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089d20:
	ldr r0, =data_0210bb94
	bl func_0205810c
	cmp r0, #0xd
	bne lbl_02089fa4
	mov r0, #3
	str r0, [r4, #0x28]
	sub r0, r0, #4
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089d44:
	ldr r0, =data_0210bb94
	bl func_0205810c
	cmp r0, #0xd
	beq lbl_02089d70
	mov r1, #4
	ldr r0, =data_02116d40
	str r1, [r4, #0x28]
	sub r1, r1, #5
	str r1, [r4, #0x2c]
	bl func_0207f3bc
	b lbl_02089fa4
lbl_02089d70:
	ldr r1, =_ZN6status14g_BattleResultE
	ldr r0, =data_02116ce0
	ldr r1, [r1, #0x518]
	ldr r3, =data_020c49c0
	add r5, r1, #1
	str r5, [sp]
	ldr r2, [r4, #0x20]
	mov r1, #0
	str r2, [sp, #4]
	ldr r6, [r4, #0x24]
	mov r2, #0x16
	str r6, [sp, #8]
	ldr r6, [r4, #0x44]
	str r6, [sp, #0xc]
	bl func_0207e88c
	ldr r1, [r4, #0x34]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #0xc]
	ldr r3, =data_020c49d8
	str r1, [sp, #4]
	mov r1, #0xc
	mov r2, #0x17
	bl func_0207e88c
	ldr r1, [r4, #0x30]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r3, =data_020c49e4
	str r1, [sp, #4]
	mov r1, #0
	mov r2, #0x17
	bl func_0207e88c
	ldr r0, [r4, #0x20]
	cmp r5, r0
	ble lbl_02089e48
	mov r0, #0
	bl func_0201054c
	ldr r0, =data_0216639c
	bl func_0212e37c
	mov r8, r0
	cmp r8, #0
	mov r9, #0
	ble lbl_02089e48
	ldr r7, =data_0216639c
	ldr r6, =data_020c7a8c
lbl_02089e28:
	mov r0, r7
	mov r1, r9
	ldr r10, [r6]
	bl func_0212e5c0
	add r9, r9, #1
	str r10, [r0, #0x408]
	cmp r9, r8
	blt lbl_02089e28
lbl_02089e48:
	ldr r0, [r4, #0x24]
	cmp r5, r0
	ble lbl_02089fa4
	ldr r0, [r4, #0x34]
	cmp r0, #0xb7
	cmpne r0, #0xb9
	beq lbl_02089fa4
	ldr r0, =data_020ef7e4
	mov r1, #7
	bl func_02035110
	cmp r0, #0
	bne lbl_02089ea4
	ldr r0, =data_020ef7e4
	mov r1, #8
	bl func_02035110
	cmp r0, #0
	bne lbl_02089ea4
	ldr r0, =g_Global
	mov r1, #0
	bl func_0200bb44
	ldr r0, =data_020ef7e4
	mov r1, #8
	bl func_02035108
lbl_02089ea4:
	mov r1, #4
	ldr r0, =data_02116d40
	str r1, [r4, #0x28]
	sub r1, r1, #5
	str r1, [r4, #0x2c]
	bl func_0207f3bc
	b lbl_02089fa4
lbl_02089ec0:
	ldr r0, =data_02116d40
	bl func_0207f268
	cmp r0, #0
	beq lbl_02089ee4
	mov r0, #5
	str r0, [r4, #0x28]
	sub r0, r0, #6
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089ee4:
	ldr r0, [r4, #0x30]
	add r1, r0, #1
	str r1, [r4, #0x30]
	ldr r0, [r4, #8]
	cmp r1, r0
	ble lbl_02089f4c
	ldr r0, [r4, #4]
	str r0, [r4, #0x30]
	ldr r0, [r4, #0x34]
	add r1, r0, #1
	str r1, [r4, #0x34]
	ldr r0, [r4, #0xc]
	cmp r1, r0
	bne lbl_02089f38
	mov r1, #5
	ldr r0, =data_02116d40
	str r1, [r4, #0x28]
	sub r1, r1, #6
	str r1, [r4, #0x2c]
	bl func_0207f3bc
	b lbl_02089fa4
lbl_02089f38:
	mov r0, #1
	str r0, [r4, #0x28]
	sub r0, r0, #2
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089f4c:
	mov r0, #1
	str r0, [r4, #0x28]
	sub r0, r0, #2
	str r0, [r4, #0x2c]
	b lbl_02089fa4
lbl_02089f60:
	mov r2, #0
	str r2, [r4, #0x38]
	ldr r0, =_ZN6status7g_PartyE
	mov r1, #1
	str r2, [r4, #0x44]
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	mov r5, r0
	ldr r0, =_ZN6status7g_PartyE
	mov r1, #2
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	mov r2, #5
	str r2, [r5, #0x3b8]
	mov r1, #0
	str r2, [r0, #0x3b8]
	str r1, [r4, #0x28]
	sub r0, r1, #1
	str r0, [r4, #0x2c]
lbl_02089fa4:
	ldr r0, [r4, #0x2c]
	add r0, r0, #1
	str r0, [r4, #0x2c]
	add sp, sp, #0x10
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02089ff4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020292c0
	ldr r1, =data_020c49f8
	mov r0, r4
	str r1, [r4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a014(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020292d0
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a028(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_0208a050
	mov r0, #0
	bl func_020499a4
	b lbl_0208a06c
lbl_0208a050:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_0208a06c
	mov r0, #0
	bl func_0204b694
lbl_0208a06c:
	mov r0, r4
	mov r1, #1
	bl func_020292f8
	mov r0, r4
	bl func_0208a0e8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a088(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_02187b28
	bl func_0205241c
	cmp r0, #0
	ldmneia sp!, {r4, pc}
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	mov r0, #1
	beq lbl_0208a0c0
	bl func_020499a4
	b lbl_0208a0c4
lbl_0208a0c0:
	bl func_0204b694
lbl_0208a0c4:
	mov r0, r4
	mov r1, #1
	bl func_02029414
	mov r0, r4
	mov r1, #0
	bl func_020292f8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0208a0e8(void)
{
	ldr r12, =data_02052401
	ldr r0, =data_02187b28
	bx r12
}

extern "C" asm void func_0208a0fc(void)
{
	mov r0, #0x100
	bx lr
}

extern "C" asm void func_0208a104(void)
{
	ldr r0, =data_020c4a04
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_0208a114(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x200
	mov r5, r0
	mov r4, r1
	cmp r2, #1
	beq lbl_0208a140
	cmp r2, #2
	beq lbl_0208a158
	cmp r2, #3
	beq lbl_0208a170
	b lbl_0208a188
lbl_0208a140:
	mov r1, #0x200
	add r0, sp, #0
	add r3, r1, #0xcf
	mov r2, #0xa0000000
	bl func_020545fc
	b lbl_0208a190
lbl_0208a158:
	add r0, sp, #0
	mov r1, #0x200
	mov r2, #0xa0000000
	mov r3, #0x2d0
	bl func_020545fc
	b lbl_0208a190
lbl_0208a170:
	mov r1, #0x200
	add r0, sp, #0
	add r3, r1, #0xd1
	mov r2, #0xa0000000
	bl func_020545fc
	b lbl_0208a190
lbl_0208a188:
	mov r0, #0
	strb r0, [sp]
lbl_0208a190:
	add r2, sp, #0
	mov r0, r5
	mov r1, r4
	bl _ZN3dss8DssUtils8strcpy_sEPciS1_
	add sp, sp, #0x200
	ldmia sp!, {r3, r4, r5, pc}
}

#pragma thumb on
