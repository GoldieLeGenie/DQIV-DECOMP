/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02042428(void);
    void func_02042d7c(void);
    void func_02042d8c(void);
    void func_02042ec8(void);
    void func_0204322c(void);
    void func_020433e4(void);
    void func_02043574(void);
    void func_02043594(void);
    void func_020435b4(void);
    void func_020435d4(void);
    void func_02043628(void);
    void func_02043954(void);
    void func_02043c8c(void);
    void func_02043d64(void);
    void func_02043dac(void);
    void func_02043dcc(void);
    void func_02044110(void);
    void func_020445f4(void);
    void func_020447fc(void);
    void func_02044848(void);
    void func_020449d4(void);
    void func_02044a48(void);
    void func_02044b54(void);
    void func_02044fb4(void);
    void func_02045004(void);
    void func_02045104(void);
    void func_02045204(void);
    void func_0204533c(void);
    void func_02045360(void);
    void func_020453fc(void);
    void func_0204545c(void);
    void func_02045e10(void);
    void func_02045f68(void);
    void func_02045fd0(void);
    void func_02046034(void);
    void func_02046074(void);
    void func_020460e4(void);
    void func_02046118(void);
    void func_02046194(void);
    void func_02046208(void);
    void func_0204627c(void);
    void func_020462f0(void);
    void func_02046364(void);
    void data_020b61dc(void);
    void data_020b638c(void);
    void data_020c1bcc(void);
    void data_020c3f5c(void);
    void data_020f227c(void);
    void data_020f2284(void);
    void data_020f2290(void);
    void data_020f229c(void);
    void data_0210cf28(void);
    void data_0210cf74(void);
    void data_0210cfe4(void);
    void data_0210d168(void);
    void data_0210d180(void);
    void func_02001070(void);
    void func_0203f368(void);
    void func_020421ec(void);
    void func_02046dc8(void);
    void func_02046fe0(void);
    void func_0204718c(void);
    void func_0204722c(void);
    void func_020472e8(void);
    void func_02047360(void);
    void func_02061b88(void);
    void func_02061bac(void);
    void func_02061c6c(void);
    void func_02061c88(void);
    void func_02061ca4(void);
    void func_02061cbc(void);
    void func_02061edc(void);
    void func_02061fb4(void);
    void func_02062e04(void);
    void func_02062e50(void);
    void func_02062f64(void);
    void func_02062f98(void);
    void func_02062fcc(void);
    void func_02063008(void);
    void func_020630ec(void);
    void func_02063330(void);
    void func_0206338c(void);
    void func_020634c4(void);
    void func_02065544(void);
    void func_02065c24(void);
    void func_02065c60(void);
    void func_02065c9c(void);
    void func_02066e34(void);
    void func_02067940(void);
    void func_020679ac(void);
    void func_02067a40(void);
    void func_02068a1c(void);
    void func_02068a30(void);
    void func_02068a44(void);
    void func_0206a34c(void);
    void func_0206adcc(void);
    void func_0206ae08(void);
    void func_0206ae30(void);
    void func_0206b294(void);
    void func_0206b94c(void);
    void func_0206c708(void);
    void func_0206ca10(void);
    void func_0206dcb0(void);
    void func_0206dcd0(void);
    void func_0206dcf0(void);
    void func_0206de34(void);
    void func_0206e154(void);
    void func_0206e3d8(void);
    void func_0206e3e8(void);
    void func_0206e4e4(void);
    void func_0206e528(void);
    void func_0206e56c(void);
    void func_0206e5b0(void);
    void func_0206e5f4(void);
    void func_0206e630(void);
    void func_0206e7a0(void);
    void func_0206e8c0(void);
    void func_0207914c(void);
    void func_0207c3b0(void);
}

#pragma thumb off

extern "C" asm void func_02042428(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x28
	mov r10, r0
	movs r0, r3
	str r3, [sp]
	addne r0, r0, #0x10
	strne r0, [sp]
	ldr r0, [r10]
	mov r11, r1
	mov r9, r2
	tst r0, #1
	beq lbl_02042460
	mov r0, r10
	bl func_02045e10
lbl_02042460:
	ldr r1, [sp, #0x50]
	add r0, r10, #0x238
	mov r2, #4
	bl func_02068a44
	add r0, r9, #0x10
	stmib r10, {r0, r11}
	ldr r0, [r10, #4]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_020427a8
lbl_02042488:
	ldr r2, =0x504C5046
	cmp r1, r2
	bhi lbl_02042534
	bcs lbl_02042708
	ldr r2, =0x4C444D46
	cmp r1, r2
	bhi lbl_020424e4
	bcs lbl_02042604
	ldr r3, =0x42544146
	cmp r1, r3
	bhi lbl_020424c8
	bcs lbl_02042790
	ldr r2, =0x41525346
	cmp r1, r2
	beq lbl_0204275c
	b lbl_02042790
lbl_020424c8:
	add r2, r3, #0x1300
	cmp r1, r2
	bls lbl_02042790
	ldr r2, =0x43544546
	cmp r1, r2
	streq r0, [r10, #0x14]
	b lbl_02042790
lbl_020424e4:
	ldr r3, =0x4E414346
	cmp r1, r3
	bhi lbl_02042510
	bcs lbl_02042710
	ldr r2, =0x4D414E46
	cmp r1, r2
	bls lbl_02042790
	add r2, r2, #0x200
	cmp r1, r2
	beq lbl_020426d0
	b lbl_02042790
lbl_02042510:
	add r2, r3, #0x200
	cmp r1, r2
	bhi lbl_02042524
	streq r0, [r10, #0x234]
	b lbl_02042790
lbl_02042524:
	ldr r2, =0x50414D46
	cmp r1, r2
	beq lbl_020425d4
	b lbl_02042790
lbl_02042534:
	ldr r2, =0x64515346
	cmp r1, r2
	bhi lbl_02042584
	bcs lbl_0204260c
	ldr r3, =0x54524346
	cmp r1, r3
	bhi lbl_0204256c
	bcs lbl_02042790
	ldr r2, =0x52444846
	cmp r1, r2
	bls lbl_02042790
	sub r2, r3, #0x1000000
	cmp r1, r2
	b lbl_02042790
lbl_0204256c:
	ldr r2, =0x58455446
	cmp r1, r2
	bls lbl_02042790
	ldr r2, =0x58545046
	cmp r1, r2
	b lbl_02042790
lbl_02042584:
	ldr r2, =0x74474C46
	cmp r1, r2
	bhi lbl_020425b0
	bcs lbl_02042790
	ldr r2, =0x674F4646
	cmp r1, r2
	bls lbl_02042790
	ldr r2, =0x71455346
	cmp r1, r2
	streq r0, [r10, #0x18]
	b lbl_02042790
lbl_020425b0:
	ldr r2, =0x764D4546
	cmp r1, r2
	bhi lbl_020425c4
	beq lbl_02042698
	b lbl_02042790
lbl_020425c4:
	add r2, r2, #0xb00
	cmp r1, r2
	beq lbl_02042660
	b lbl_02042790
lbl_020425d4:
	str r0, [r10, #0xc]
	ldr r2, [r0, #0xc]
	add r3, r0, #0x20
	mov r1, #0x50
	mla r1, r2, r1, r3
	str r1, [r0, #0x18]
	ldr r3, [r10, #0xc]
	ldr r2, [r3, #0x18]
	ldr r1, [r3, #0xc]
	add r1, r2, r1, lsl #2
	str r1, [r3, #0x14]
	b lbl_02042790
lbl_02042604:
	str r0, [r10, #0x10]
	b lbl_02042790
lbl_0204260c:
	ldr r1, [r10, #0x1c]
	cmp r1, #0x80
	bge lbl_02042790
	add r1, r10, r1, lsl #2
	str r0, [r1, #0x20]
	ldr r1, [r10, #0x1c]
	mov r3, #0
	add r1, r1, #1
	str r1, [r10, #0x1c]
	ldr r1, [r0, #8]
	cmp r1, #0
	ble lbl_02042790
lbl_0204263c:
	add r2, r0, r3, lsl #2
	ldr r1, [r2, #0xc]
	add r3, r3, #1
	add r1, r9, r1
	str r1, [r2, #0xc]
	ldr r1, [r0, #8]
	cmp r3, r1
	blt lbl_0204263c
	b lbl_02042790
lbl_02042660:
	str r0, [r10, #0x220]
	ldr r1, [r0, #8]
	mov r3, #0
	cmp r1, #0
	ble lbl_02042790
lbl_02042674:
	add r2, r0, r3, lsl #2
	ldr r1, [r2, #0xc]
	add r3, r3, #1
	add r1, r9, r1
	str r1, [r2, #0xc]
	ldr r1, [r0, #8]
	cmp r3, r1
	blt lbl_02042674
	b lbl_02042790
lbl_02042698:
	str r0, [r10, #0x224]
	ldr r1, [r0, #8]
	mov r3, #0
	cmp r1, #0
	ble lbl_02042790
lbl_020426ac:
	add r2, r0, r3, lsl #2
	ldr r1, [r2, #0xc]
	add r3, r3, #1
	add r1, r9, r1
	str r1, [r2, #0xc]
	ldr r1, [r0, #8]
	cmp r3, r1
	blt lbl_020426ac
	b lbl_02042790
lbl_020426d0:
	str r0, [r10, #0x228]
	ldr r1, [r0, #8]
	mov r3, #0
	cmp r1, #0
	ble lbl_02042790
lbl_020426e4:
	add r2, r0, r3, lsl #2
	ldr r1, [r2, #0xc]
	add r3, r3, #1
	add r1, r9, r1
	str r1, [r2, #0xc]
	ldr r1, [r0, #8]
	cmp r3, r1
	blt lbl_020426e4
	b lbl_02042790
lbl_02042708:
	str r0, [r10, #0x22c]
	b lbl_02042790
lbl_02042710:
	mov r4, r0
	str r0, [r10, #0x2a4]
	ldr r2, [r4, #8]
	add r1, r4, #0xc
	cmp r2, #0
	add r3, r1, r2, lsl #3
	mov r5, #0
	ble lbl_02042790
lbl_02042730:
	add r1, r4, r5, lsl #3
	str r3, [r1, #0x10]
	ldr r4, [r10, #0x2a4]
	add r1, r4, r5, lsl #3
	ldr r2, [r1, #0xc]
	ldr r1, [r4, #8]
	add r5, r5, #1
	cmp r5, r1
	add r3, r3, r2, lsl #3
	blt lbl_02042730
	b lbl_02042790
lbl_0204275c:
	str r0, [r10, #0x230]
	ldr r1, [r0, #8]
	mov r3, #0
	cmp r1, #0
	ble lbl_02042790
lbl_02042770:
	add r2, r0, r3, lsl #2
	ldr r1, [r2, #0xc]
	add r3, r3, #1
	add r1, r9, r1
	str r1, [r2, #0xc]
	ldr r1, [r0, #8]
	cmp r3, r1
	blt lbl_02042770
lbl_02042790:
	ldr r1, [r0, #4]
	add r0, r0, r1
	ldr r1, [r0, #8]
	add r0, r0, #8
	cmp r1, #0
	bne lbl_02042488
lbl_020427a8:
	ldr r4, [r10, #0x10]
	ldr r5, [r10, #0xc]
	ldr r1, [r4, #8]
	add r0, r10, #0x238
	mov r1, r1, lsl #2
	bl func_02068a1c
	str r0, [r10, #0x5e4]
	ldr r1, [r4, #8]
	mov r2, r1, lsl #2
	mov r1, #0
	bl func_02001070
	ldr r0, [r4, #8]
	mov r6, #0
	cmp r0, #0
	ble lbl_020428b4
	add r8, r4, #0x10
lbl_020427e8:
	mov r0, r11
	bl func_0206e8c0
	ldrh r2, [r0, #0xe]
	add r7, r0, #8
	mov r1, #0
	ldrh r3, [r7, r2]
	add r2, r7, r2
	mla r2, r3, r6, r2
	ldr r2, [r2, #4]
	add r0, r0, r2
	str r0, [r8, #8]
	ldr r0, [r8, #0x18]
	add r0, r9, r0
	str r0, [r8, #0x18]
	str r1, [r8, #0x14]
	ldr r0, [r8, #0x10]
	cmp r0, #0
	addne r0, r9, r0
	strne r0, [r8, #0x10]
	ldr r0, [r8, #0x1c]
	cmp r0, #0
	addne r0, r9, r0
	strne r0, [r8, #0x1c]
	ldr r0, [r8, #8]
	ldrb r1, [r0, #0x18]
	cmp r1, #0
	beq lbl_020428a0
	add r0, r10, #0x238
	bl func_02068a1c
	ldr r1, [r10, #0x5e4]
	mov r7, #0
	str r0, [r1, r6, lsl #2]
	ldr r0, [r8, #8]
	ldrb r1, [r0, #0x18]
	cmp r1, #0
	bls lbl_020428a0
lbl_02042878:
	mov r1, r7
	bl func_0206e630
	ldr r1, [r10, #0x5e4]
	ldr r1, [r1, r6, lsl #2]
	strb r0, [r1, r7]
	ldr r0, [r8, #8]
	add r7, r7, #1
	ldrb r1, [r0, #0x18]
	cmp r7, r1
	bcc lbl_02042878
lbl_020428a0:
	ldr r0, [r4, #8]
	add r6, r6, #1
	cmp r6, r0
	add r8, r8, #0x30
	blt lbl_020427e8
lbl_020428b4:
	ldr r0, [r5, #0xc]
	mov r7, #0
	cmp r0, #0
	ble lbl_02042a8c
	mov r8, #0x8000
	add r6, r5, #0x20
	add r4, r4, #0x10
	rsb r8, r8, #0
	mov r11, #7
lbl_020428d8:
	ldrsh r3, [r6, #0x1c]
	mov r2, #0x30
	mov r1, #0xb0
	smlabb r9, r3, r2, r4
	add r0, r10, #0x238
	str r9, [r6, #0x3c]
	bl func_02068a1c
	str r0, [r6, #0x38]
	cmp r0, #0
	bne lbl_02042914
	mov r0, r10
	bl func_02045e10
	add sp, sp, #0x28
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02042914:
	add r0, r10, #0x238
	bl func_0206e3d8
	ldr r1, [r6, #0x38]
	str r0, [r1, #0x48]
	ldr r0, [r6, #0x38]
	ldr r1, [r9, #8]
	ldr r0, [r0, #0x48]
	bl func_0206a34c
	ldr r0, [r6, #0x38]
	mov r1, #0
	ldr r0, [r0, #0x48]
	ldr r0, [r0, #4]
	bl func_0206e630
	ldr r1, [r6, #0x38]
	str r0, [r1, #0x50]
	ldr r0, [r9, #0xc]
	tst r0, #0x200
	ldrne r0, [r6, #0x30]
	orrne r0, r0, #0x100000
	strne r0, [r6, #0x30]
	ldr r0, [r9, #0xc]
	tst r0, #0x400
	ldrne r0, [r6, #0x30]
	orrne r0, r0, #0x200000
	strne r0, [r6, #0x30]
	ldr r0, [r9, #8]
	ldr r1, [r6, #0x38]
	ldrsh r2, [r0, #0x2c]
	strh r2, [r1, #0x8c]
	ldrsh r2, [r0, #0x2e]
	ldr r1, [r6, #0x38]
	strh r2, [r1, #0x8e]
	ldrsh r2, [r0, #0x32]
	ldr r1, [r6, #0x38]
	strh r2, [r1, #0x92]
	ldrsh r2, [r0, #0x34]
	ldr r1, [r6, #0x38]
	strh r2, [r1, #0x94]
	ldrsh r2, [r0, #0x36]
	ldr r1, [r6, #0x38]
	strh r2, [r1, #0x96]
	ldr r2, [r0, #0x38]
	ldr r1, [r6, #0x38]
	str r2, [r1, #0x98]
	ldrsh r1, [r0, #0x30]
	ldrsh r0, [r0, #0x36]
	sub r1, r1, r0
	cmp r1, r8
	ble lbl_020429e0
	cmp r1, #0x8000
	blt lbl_02042a50
lbl_020429e0:
	ldr r0, [r6, #0x38]
	mov r1, r1, asr #1
	strh r1, [r0, #0x90]
	ldr r1, [r6, #0x38]
	ldrsh r0, [r1, #0x8c]
	mov r0, r0, asr #1
	strh r0, [r1, #0x8c]
	ldr r1, [r6, #0x38]
	ldrsh r0, [r1, #0x8e]
	mov r0, r0, asr #1
	strh r0, [r1, #0x8e]
	ldr r1, [r6, #0x38]
	ldrsh r0, [r1, #0x92]
	mov r0, r0, asr #1
	strh r0, [r1, #0x92]
	ldr r1, [r6, #0x38]
	ldrsh r0, [r1, #0x94]
	mov r0, r0, asr #1
	strh r0, [r1, #0x94]
	ldr r1, [r6, #0x38]
	ldrsh r0, [r1, #0x96]
	mov r0, r0, asr #1
	strh r0, [r1, #0x96]
	ldr r1, [r6, #0x38]
	ldr r0, [r1, #0x98]
	mov r0, r0, lsl #1
	str r0, [r1, #0x98]
	b lbl_02042a58
lbl_02042a50:
	ldr r0, [r6, #0x38]
	strh r1, [r0, #0x90]
lbl_02042a58:
	ldr r1, [r6, #0x34]
	mov r0, r6
	mov r1, r1, lsl #4
	str r1, [r6, #0x34]
	ldr r2, [r6, #0x38]
	mov r1, #0
	str r11, [r2, #0x4c]
	bl func_02042ec8
	ldr r0, [r5, #0xc]
	add r7, r7, #1
	cmp r7, r0
	add r6, r6, #0x50
	blt lbl_020428d8
lbl_02042a8c:
	mov r0, r10
	bl func_02042d8c
	mov r0, r10
	bl func_02046fe0
	str r0, [r10, #0x5e0]
	ldr r0, [r10, #0x230]
	str r0, [sp, #8]
	cmp r0, #0
	beq lbl_02042ce8
	ldr r0, [r10, #8]
	bl func_0206e8c0
	mov r5, r0
	ldrb r0, [r5, #9]
	str r0, [sp, #0xc]
	ldr r1, [sp, #0xc]
	add r0, r10, #0x238
	mov r1, r1, lsl #3
	add r1, r1, #4
	bl func_02068a1c
	movs r6, r0
	bne lbl_02042b30
	ldr r0, [sp, #8]
	mov r2, #0
	ldr r0, [r0, #8]
	cmp r0, #0
	ble lbl_02042b1c
	mov r1, r2
lbl_02042af8:
	ldr r0, [sp, #8]
	add r0, r0, r2, lsl #2
	ldr r0, [r0, #0xc]
	add r2, r2, #1
	str r1, [r0]
	ldr r0, [sp, #8]
	ldr r0, [r0, #8]
	cmp r2, r0
	blt lbl_02042af8
lbl_02042b1c:
	mov r0, r10
	bl func_02045e10
	add sp, sp, #0x28
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02042b30:
	ldr r0, [sp, #8]
	ldr r1, [r0, #8]
	mov r0, #0
	str r0, [sp, #4]
	cmp r1, #0
	ble lbl_02042c74
lbl_02042b48:
	ldr r1, [sp, #8]
	ldr r0, [sp, #4]
	mov r7, #0
	add r0, r1, r0, lsl #2
	ldr r11, [r0, #0xc]
	ldr r0, [sp, #0xc]
	str r7, [r6]
	cmp r0, #0
	bls lbl_02042c10
	add r0, r5, #8
	str r0, [sp, #0x10]
	mvn r0, #0
	add r4, sp, #0x18
	str r0, [sp, #0x14]
lbl_02042b80:
	ldrh r3, [r5, #0xe]
	ldr r2, [sp, #0x10]
	mov r0, r4
	ldrh r8, [r2, r3]
	add r9, r2, r3
	mov r1, #0
	mla r3, r8, r7, r9
	ldr r3, [r3, #4]
	mov r2, #0x10
	add r8, r5, r3
	ldr r3, [r8, #8]
	add r9, r8, r3
	bl func_020679ac
	mov r0, r11
	mov r1, r4
	mov r2, #0x10
	bl func_02067a40
	add r0, r9, #4
	mov r1, r4
	bl func_0206e7a0
	ldr r1, [sp, #0x14]
	cmp r0, r1
	beq lbl_02042c00
	ldr r1, [r6]
	add r1, r6, r1, lsl #3
	str r0, [r1, #8]
	ldr r0, [r6]
	add r0, r6, r0, lsl #3
	str r8, [r0, #4]
	ldr r0, [r6]
	add r0, r0, #1
	str r0, [r6]
lbl_02042c00:
	ldr r0, [sp, #0xc]
	add r7, r7, #1
	cmp r7, r0
	bcc lbl_02042b80
lbl_02042c10:
	ldr r0, [r6]
	cmp r0, #0
	beq lbl_02042c58
	mov r1, r0, lsl #3
	add r0, r10, #0x238
	add r1, r1, #4
	bl func_02068a1c
	movs r1, r0
	str r0, [r11]
	bne lbl_02042c44
	mov r0, r10
	bl func_02045e10
	b lbl_02042c74
lbl_02042c44:
	ldr r2, [r6]
	mov r0, r6
	mov r2, r2, lsl #3
	add r2, r2, #4
	bl func_02067a40
lbl_02042c58:
	ldr r0, [sp, #8]
	ldr r1, [r0, #8]
	ldr r0, [sp, #4]
	add r0, r0, #1
	str r0, [sp, #4]
	cmp r0, r1
	blt lbl_02042b48
lbl_02042c74:
	ldr r0, [sp, #8]
	ldr r1, [r0, #8]
	ldr r0, [sp, #4]
	cmp r0, r1
	bge lbl_02042cdc
	bge lbl_02042cc4
	mov r2, #0
lbl_02042c90:
	ldr r1, [sp, #8]
	ldr r0, [sp, #4]
	add r0, r1, r0, lsl #2
	ldr r1, [r0, #0xc]
	ldr r0, [sp, #4]
	str r2, [r1]
	add r0, r0, #1
	str r0, [sp, #4]
	ldr r0, [sp, #8]
	ldr r1, [r0, #8]
	ldr r0, [sp, #4]
	cmp r0, r1
	blt lbl_02042c90
lbl_02042cc4:
	mov r1, r6
	add r0, r10, #0x238
	bl func_02068a30
	add sp, sp, #0x28
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02042cdc:
	mov r1, r6
	add r0, r10, #0x238
	bl func_02068a30
lbl_02042ce8:
	ldr r0, [sp]
	add r1, r10, #0x238
	mov r2, r0
	str r2, [r10, #0x248]
	bl func_0203f368
	cmp r0, #0
	bne lbl_02042d18
	mov r0, r10
	bl func_02045e10
	add sp, sp, #0x28
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
lbl_02042d18:
	add r0, r10, #0x2ac
	bl func_0206dcb0
	ldr r1, [r10]
	mov r0, #1
	orr r1, r1, #1
	str r1, [r10]
	add sp, sp, #0x28
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02042d7c(void)
{
	ldrsh r2, [r0]
	ldrsh r0, [r1]
	sub r0, r2, r0
	bx lr
}

extern "C" asm void func_02042d8c(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #4
	mov r5, r0
	ldr r1, [r5, #0xc]
	mov r0, #0
	ldr r4, [r1, #0x18]
	mov r1, #0x50
	b lbl_02042dcc
lbl_02042dac:
	ldr r2, [r5, #0xc]
	mov r3, r0, lsl #2
	mla r2, r0, r1, r2
	ldr r6, [r2, #0x54]
	add r2, r4, r0, lsl #2
	strh r6, [r4, r3]
	strh r0, [r2, #2]
	add r0, r0, #1
lbl_02042dcc:
	ldr r2, [r5, #0xc]
	ldr r2, [r2, #0xc]
	cmp r0, r2
	blt lbl_02042dac
	ldr r0, [r5, #0xc]
	ldr r1, [r0, #0xc]
	mov r0, r1
	clz r0, r0
	rsb r0, r0, #0x1f
	cmp r0, #0
	bgt lbl_02042e00
	mov r1, #4
	b lbl_02042e14
lbl_02042e00:
	clz r1, r1
	rsb r0, r1, #0x1f
	add r0, r0, #1
	mov r0, r0, lsl #2
	mov r1, r0, lsl #1
lbl_02042e14:
	add r0, r5, #0x238
	bl func_02068a1c
	movs r6, r0
	bne lbl_02042e5c
	mov r0, #0
	b lbl_02042e44
lbl_02042e2c:
	ldr r1, [r5, #0xc]
	ldr r2, [r1, #0x14]
	ldr r1, [r1, #0x18]
	add r2, r2, r0, lsl #1
	str r2, [r1, r0, lsl #2]
	add r0, r0, #1
lbl_02042e44:
	ldr r1, [r5, #0xc]
	ldr r1, [r1, #0xc]
	cmp r0, r1
	blt lbl_02042e2c
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
lbl_02042e5c:
	str r6, [sp]
	ldr r0, [r5, #0xc]
	ldr r3, =func_02042d7c
	ldr r1, [r0, #0xc]
	mov r0, r4
	mov r2, #4
	bl func_02066e34
	mov r1, r6
	add r0, r5, #0x238
	bl func_02068a30
	mov r0, #0
	b lbl_02042eac
lbl_02042e8c:
	ldr r12, [r5, #0xc]
	add r1, r4, r0, lsl #2
	ldrsh r2, [r1, #2]
	ldr r3, [r12, #0x14]
	ldr r1, [r12, #0x18]
	add r2, r3, r2, lsl #1
	str r2, [r1, r0, lsl #2]
	add r0, r0, #1
lbl_02042eac:
	ldr r1, [r5, #0xc]
	ldr r1, [r1, #0xc]
	cmp r0, r1
	blt lbl_02042e8c
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02042ec8(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x94
	ldr r4, [r0, #0x38]
	mov r5, r1
	ldr r1, [r4, #0x4c]
	tst r1, #8
	beq lbl_02042f00
	ldr r1, [r4, #0x24]
	str r1, [r0]
	ldr r1, [r4, #0x28]
	str r1, [r0, #4]
	ldr r1, [r4, #0x2c]
	str r1, [r0, #8]
	b lbl_02042f20
lbl_02042f00:
	tst r1, #1
	beq lbl_02042f20
	ldr r1, [r0]
	str r1, [r4, #0x24]
	ldr r1, [r0, #4]
	str r1, [r4, #0x28]
	ldr r1, [r0, #8]
	str r1, [r4, #0x2c]
lbl_02042f20:
	ldr r1, [r4, #0x4c]
	tst r1, #0x10
	beq lbl_02042f48
	ldr r1, [r4, #0x30]
	str r1, [r0, #0x20]
	ldr r1, [r4, #0x34]
	str r1, [r0, #0x24]
	ldr r1, [r4, #0x38]
	str r1, [r0, #0x28]
	b lbl_02042f68
lbl_02042f48:
	tst r1, #2
	beq lbl_02042f68
	ldr r1, [r0, #0x20]
	str r1, [r4, #0x30]
	ldr r1, [r0, #0x24]
	str r1, [r4, #0x34]
	ldr r1, [r0, #0x28]
	str r1, [r4, #0x38]
lbl_02042f68:
	ldr r1, [r4, #0x4c]
	tst r1, #0x20
	beq lbl_02042f90
	ldr r1, [r4, #0x3c]
	str r1, [r0, #0x10]
	ldr r1, [r4, #0x40]
	str r1, [r0, #0x14]
	ldr r1, [r4, #0x44]
	str r1, [r0, #0x18]
	b lbl_02042fb0
lbl_02042f90:
	tst r1, #4
	beq lbl_02042fb0
	ldr r1, [r0, #0x10]
	str r1, [r4, #0x3c]
	ldr r1, [r0, #0x14]
	str r1, [r4, #0x40]
	ldr r0, [r0, #0x18]
	str r0, [r4, #0x44]
lbl_02042fb0:
	add r0, sp, #0x4c
	bl func_02061b88
	ldr r0, [r4, #0x40]
	ldr r2, =data_020b638c
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, asr #4
	mov r1, r0, lsl #1
	add r0, r1, #1
	mov r1, r1, lsl #1
	mov r0, r0, lsl #1
	ldrsh r1, [r2, r1]
	ldrsh r2, [r2, r0]
	add r0, sp, #0x4c
	bl func_02061c88
	add r0, sp, #0x70
	bl func_02061b88
	ldr r0, [r4, #0x3c]
	ldr r2, =data_020b638c
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, asr #4
	mov r1, r0, lsl #1
	add r0, r1, #1
	mov r1, r1, lsl #1
	mov r0, r0, lsl #1
	ldrsh r1, [r2, r1]
	ldrsh r2, [r2, r0]
	add r0, sp, #0x70
	bl func_02061c6c
	add r1, sp, #0x4c
	add r0, sp, #0x70
	mov r2, r1
	bl func_02061cbc
	add r0, sp, #0x70
	bl func_02061b88
	ldr r1, [r4, #0x44]
	ldr r3, =data_020b638c
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	mov r1, r1, asr #4
	mov r1, r1, lsl #1
	mov r6, r1, lsl #1
	add r1, r1, #1
	mov r2, r1, lsl #1
	ldrsh r1, [r3, r6]
	ldrsh r2, [r3, r2]
	add r0, sp, #0x70
	bl func_02061ca4
	add r0, sp, #0x70
	add r1, sp, #0x4c
	mov r2, r0
	bl func_02061cbc
	cmp r5, #0
	beq lbl_020430ac
	add r1, sp, #0x70
	add r2, sp, #0x40
	mov r0, r5
	bl func_02061edc
	add r1, r4, #0x24
	add r0, sp, #0x40
	mov r2, r1
	bl func_02062f64
lbl_020430ac:
	add r6, sp, #0x70
	ldmia r6!, {r0, r1, r2, r3}
	mov r5, r4
	stmia r5!, {r0, r1, r2, r3}
	ldmia r6!, {r0, r1, r2, r3}
	stmia r5!, {r0, r1, r2, r3}
	ldr r1, [r6]
	add r0, sp, #0x70
	str r1, [r5]
	ldr r2, [r4, #0x98]
	ldr r3, [r4, #0x38]
	add r1, sp, #0x1c
	smull r6, r5, r3, r2
	adds r6, r6, #0x800
	adc r3, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r3, lsl #20
	str r5, [sp]
	ldr r5, [r4, #0x30]
	ldr r3, [r4, #0x34]
	smull r6, lr, r5, r2
	smull r12, r5, r3, r2
	adds r2, r6, #0x800
	adc r3, lr, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r3, lsl #20
	adds r3, r12, #0x800
	adc r5, r5, #0
	mov r3, r3, lsr #0xc
	orr r3, r3, r5, lsl #20
	bl func_02061bac
	ldrsh r2, [r4, #0x8c]
	add r0, sp, #0x10
	add r1, sp, #0x1c
	str r2, [sp, #0x10]
	ldrsh r3, [r4, #0x8e]
	add r2, sp, #4
	str r3, [sp, #0x14]
	ldrsh r3, [r4, #0x90]
	str r3, [sp, #0x18]
	bl func_02061edc
	ldrsh r0, [r4, #0x92]
	ldr r1, [sp, #0x10]
	ldr r3, [sp, #0x14]
	add r0, r1, r0, asr #1
	str r0, [sp, #0x10]
	ldrsh r2, [r4, #0x94]
	ldr r5, [sp, #0x18]
	add r0, sp, #0x10
	add r2, r3, r2, asr #1
	str r2, [sp, #0x14]
	ldrsh r3, [r4, #0x96]
	add r1, sp, #0x1c
	add r2, r4, #0x9c
	add r3, r5, r3, asr #1
	str r3, [sp, #0x18]
	bl func_02061edc
	ldr r1, [r4, #0xa0]
	ldr r0, [sp, #8]
	ldr r3, [r4, #0x9c]
	sub r0, r1, r0
	smull r2, r1, r0, r0
	ldr r0, [sp, #4]
	ldr r12, [r4, #0xa4]
	sub r0, r3, r0
	smull r5, r3, r0, r0
	ldr r0, [sp, #0xc]
	sub lr, r12, r0
	smull r12, r0, lr, lr
	adds lr, r12, #0x800
	adc r12, r0, #0
	adds r5, r5, #0x800
	adc r3, r3, #0
	adds r2, r2, #0x800
	mov r5, r5, lsr #0xc
	mov r0, lr, lsr #0xc
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r5, r5, r3, lsl #20
	orr r2, r2, r1, lsl #20
	orr r0, r0, r12, lsl #20
	add r1, r5, r2
	add r0, r0, r1
	str r0, [r4, #0xa8]
	ldr r0, [r4, #0xa8]
	bl func_02062e50
	str r0, [r4, #0xac]
	add r0, r4, #0x9c
	add r1, r4, #0x24
	mov r2, r0
	bl func_02062f64
	mov r0, #0
	str r0, [r4, #0x4c]
	add sp, sp, #0x94
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0204322c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r6, r0
	ldrsh r0, [r6]
	mov r4, r2
	mov r5, r1
	tst r0, #4
	add r0, r6, #0x20
	ldrne r0, [r4, #0x38]
	ldrsh r2, [r6, #2]
	ldrne r0, [r0, #0x7c]
	mvn r1, #0
	cmp r2, #0
	ldrne r3, [r6, #0x1c]
	cmpne r3, #0
	beq lbl_020433d8
	ldrsh r1, [r6, #6]
	cmp r1, #0
	ble lbl_020432a0
	mov r1, r0
	mov r3, r4
	mov r2, #0
	blx r5
	ldr r1, =data_020f227c
	ldrsh r3, [r6, #6]
	ldr r2, [r1]
	mov r1, r0
	sub r0, r3, r2
	strh r0, [r6, #6]
	b lbl_020433d8
lbl_020432a0:
	ldr r3, [r6, #0xc]
	ldr r1, [r6, #0x10]
	cmp r3, r1
	bne lbl_020432c4
	ldrsh r1, [r6, #0xa]
	sub r2, r2, #1
	mla r8, r2, r1, r0
	mov r7, r8
	b lbl_0204331c
lbl_020432c4:
	cmp r2, #0
	ldrsh r1, [r6, #0xa]
	mov r12, #0
	ble lbl_020432f8
lbl_020432d4:
	add r7, r12, r2
	mov r8, r7, asr #1
	mul r7, r8, r1
	ldr r7, [r0, r7]
	cmp r7, r3
	addlt r12, r8, #1
	movge r2, r8
	cmp r12, r2
	blt lbl_020432d4
lbl_020432f8:
	mul r7, r12, r1
	ldr r2, [r0, r7]
	add r8, r0, r7
	cmp r2, r3
	mov r7, r8
	rsbgt r0, r1, #0
	addgt r7, r8, r0
	bgt lbl_0204331c
	addlt r8, r8, r1
lbl_0204331c:
	cmp r7, r8
	moveq r2, #0
	beq lbl_02043360
	ldr r1, [r7]
	ldr r0, [r8]
	sub r2, r3, r1
	sub r1, r0, r1
	mov r0, r2, lsl #0xc
	mov r1, r1, lsl #0xc
	bl func_02062e04
	mov r2, r0
	cmp r2, #0x1000
	moveq r7, r8
	moveq r2, #0
	beq lbl_02043360
	cmp r2, #0
	moveq r8, r7
lbl_02043360:
	mov r0, r7
	mov r1, r8
	mov r3, r4
	blx r5
	ldrsh r2, [r6]
	mov r1, r0
	tst r2, #2
	bne lbl_02043394
	ldr r0, =data_020f227c
	ldr r2, [r6, #0xc]
	ldr r0, [r0]
	add r0, r2, r0
	str r0, [r6, #0xc]
lbl_02043394:
	ldr r2, [r6, #0xc]
	ldr r0, [r6, #0x10]
	cmp r2, r0
	ble lbl_020433d8
	ldrsh r0, [r6, #4]
	cmp r0, #0
	subgt r0, r0, #1
	strgth r0, [r6, #4]
	ldrsh r0, [r6, #4]
	cmp r0, #0
	ldreq r0, [r6, #0x10]
	ldrne r2, [r6, #0xc]
	ldrne r0, [r6, #0x10]
	subne r0, r2, r0
	str r0, [r6, #0xc]
	ldrsh r0, [r6, #8]
	strh r0, [r6, #6]
lbl_020433d8:
	mov r0, r1
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020433e4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #4
	ldr r4, =data_020f227c
	mov r8, r0
	ldmib r8, {r0, r5, r12}
	ldr r4, [r4, #4]
	mov r7, r1
	str r4, [sp]
	ldr r10, [r7, #4]
	ldr r9, [r7, #8]
	mov r6, r2
	ldr r1, [r7, #0xc]
	sub r2, r9, r5
	sub r10, r10, r0
	sub r9, r1, r12
	smull lr, r1, r10, r6
	adds r10, lr, #0x800
	adc r1, r1, #0
	mov r10, r10, lsr #0xc
	orr r10, r10, r1, lsl #20
	add r1, r0, r10
	smull r10, r0, r2, r6
	adds r2, r10, #0x800
	adc r0, r0, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r0, lsl #20
	add r2, r5, r2
	smull r5, r0, r9, r6
	adds r5, r5, #0x800
	mov r9, r5, lsr #0xc
	adc r0, r0, #0
	orr r9, r9, r0, lsl #20
	mov r5, r3
	add r3, r12, r9
	mov r0, r5
	bl func_02043574
	ldr r3, [r8, #0x18]
	ldr r2, [r8, #0x14]
	ldr r1, [r8, #0x10]
	mov r0, r5
	str r4, [sp]
	ldr r12, [r7, #0x10]
	ldr r9, [r7, #0x14]
	sub r12, r12, r1
	smull r10, lr, r12, r6
	adds r12, r10, #0x800
	adc r10, lr, #0
	mov r12, r12, lsr #0xc
	orr r12, r12, r10, lsl #20
	sub r9, r9, r2
	add r1, r1, r12
	smull lr, r12, r9, r6
	adds lr, lr, #0x800
	adc r9, r12, #0
	mov r12, lr, lsr #0xc
	orr r12, r12, r9, lsl #20
	add r2, r2, r12
	ldr r12, [r7, #0x18]
	sub r12, r12, r3
	smull r9, lr, r12, r6
	adds r12, r9, #0x800
	adc r9, lr, #0
	mov r12, r12, lsr #0xc
	orr r12, r12, r9, lsl #20
	add r3, r3, r12
	bl func_02043594
	ldr r3, [r8, #0x24]
	ldr r2, [r8, #0x20]
	ldr r1, [r8, #0x1c]
	mov r0, r5
	str r4, [sp]
	ldr r5, [r7, #0x1c]
	ldr r4, [r7, #0x20]
	sub r8, r5, r1
	sub r5, r4, r2
	ldr r4, [r7, #0x24]
	smull r12, r7, r8, r6
	adds r8, r12, #0x800
	adc r7, r7, #0
	mov r8, r8, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r1, r1, r8
	smull r8, r7, r5, r6
	sub r4, r4, r3
	smull r6, r5, r4, r6
	adds r8, r8, #0x800
	adc r4, r7, #0
	mov r7, r8, lsr #0xc
	orr r7, r7, r4, lsl #20
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r2, r2, r7
	add r3, r3, r5
	bl func_020435b4
	mov r0, #0
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02043574(void)
{
	stmdb sp!, {r3, lr}
	ldr lr, [sp, #8]
	mov r12, #0xc
	mla r0, lr, r12, r0
	str r1, [r0, #0x254]
	str r2, [r0, #0x258]
	str r3, [r0, #0x25c]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02043594(void)
{
	stmdb sp!, {r3, lr}
	ldr lr, [sp, #8]
	mov r12, #0xc
	mla r0, lr, r12, r0
	str r1, [r0, #0x26c]
	str r2, [r0, #0x270]
	str r3, [r0, #0x274]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020435b4(void)
{
	stmdb sp!, {r3, lr}
	ldr lr, [sp, #8]
	mov r12, #0xc
	mla r0, lr, r12, r0
	str r1, [r0, #0x284]
	str r2, [r0, #0x288]
	str r3, [r0, #0x28c]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020435d4(void)
{
	stmdb sp!, {r3, lr}
	mov r2, r0
	add r0, r2, r1, lsl #2
	ldr r12, [r2, #0x224]
	ldr r3, [r0, #0x24c]
	cmp r12, #0
	cmpne r3, #0
	ldmeqia sp!, {r3, pc}
	ldr r0, [r12, #8]
	cmp r3, r0
	ldmgtia sp!, {r3, pc}
	sub r0, r3, #1
	add r0, r12, r0, lsl #2
	ldr r0, [r0, #0xc]
	ldr r3, =data_020f227c
	str r1, [r3, #4]
	ldr r1, =func_020433e4
	bl func_0204322c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02043628(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	cmp r2, #0
	bne lbl_0204371c
	ldr r4, [r3]
	ldr r2, [r0, #4]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x24]
	ldr r4, [r3, #4]
	ldr r2, [r0, #8]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x28]
	ldr r4, [r3, #8]
	ldr r2, [r0, #0xc]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x2c]
	ldr r4, [r3, #0x10]
	ldr r2, [r0, #0x10]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x3c]
	ldr r4, [r3, #0x14]
	ldr r2, [r0, #0x14]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x40]
	ldr r4, [r3, #0x18]
	ldr r2, [r0, #0x18]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x44]
	ldr r4, [r3, #0x20]
	ldr r2, [r0, #0x1c]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x30]
	ldr r4, [r3, #0x24]
	ldr r2, [r0, #0x20]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x34]
	ldr r2, [r3, #0x28]
	ldr r1, [r0, #0x24]
	ldr r0, [r3, #0x38]
	smull r4, r1, r2, r1
	adds r2, r4, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
	b lbl_02043938
lbl_0204371c:
	ldr r12, [r0, #4]
	ldr r4, [r1, #4]
	ldr r7, [r3]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x24]
	ldr r12, [r0, #8]
	ldr r4, [r1, #8]
	ldr r7, [r3, #4]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x28]
	ldr r12, [r0, #0xc]
	ldr r4, [r1, #0xc]
	ldr r7, [r3, #8]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x2c]
	ldr r12, [r0, #0x10]
	ldr r4, [r1, #0x10]
	ldr r7, [r3, #0x10]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x3c]
	ldr r12, [r0, #0x14]
	ldr r4, [r1, #0x14]
	ldr r7, [r3, #0x14]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x40]
	ldr r12, [r0, #0x18]
	ldr r4, [r1, #0x18]
	ldr r7, [r3, #0x18]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x44]
	ldr r8, [r0, #0x1c]
	ldr r4, [r1, #0x1c]
	ldr r7, [r3, #0x20]
	sub r4, r4, r8
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r4, r8, r5
	smull r5, r4, r7, r4
	adds r6, r5, #0x800
	adc r5, r4, #0
	mov r6, r6, lsr #0xc
	ldr r4, [r3, #0x38]
	orr r6, r6, r5, lsl #20
	str r6, [r4, #0x30]
	ldr r7, [r0, #0x20]
	ldr r4, [r1, #0x20]
	mov lr, r2, asr #0x1f
	sub r4, r4, r7
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r7, r7, r5
	mov r5, #0
	mov r4, #0x800
	ldr r12, [r3, #0x24]
	ldr r6, [r3, #0x38]
	smull r8, r7, r12, r7
	adds r8, r8, #0x800
	adc r7, r7, #0
	mov r8, r8, lsr #0xc
	orr r8, r8, r7, lsl #20
	str r8, [r6, #0x34]
	ldr r12, [r0, #0x24]
	ldr r1, [r1, #0x24]
	ldr r0, [r3, #0x28]
	sub r1, r1, r12
	umull r7, r6, r1, r2
	mla r6, r1, lr, r6
	mov r1, r1, asr #0x1f
	adds r7, r7, r4
	mla r6, r1, r2, r6
	adc r1, r6, r5
	mov r2, r7, lsr #0xc
	orr r2, r2, r1, lsl #20
	add r1, r12, r2
	smull r2, r1, r0, r1
	adds r0, r2, r4
	adc r1, r1, r5
	mov r2, r0, lsr #0xc
	ldr r0, [r3, #0x38]
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
lbl_02043938:
	ldr r2, [r3, #0x38]
	mov r1, #0
	mov r0, r3
	str r1, [r2, #0x4c]
	bl func_02042ec8
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02043954(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0xc
	cmp r2, #0
	bne lbl_02043a4c
	ldr r1, [r0, #4]
	str r1, [sp]
	ldr r1, [r0, #8]
	str r1, [sp, #4]
	ldr r1, [r0, #0xc]
	str r1, [sp, #8]
	ldr r2, [r3]
	ldr r1, [r3, #0x38]
	str r2, [r1, #0x24]
	ldr r2, [r3, #4]
	ldr r1, [r3, #0x38]
	str r2, [r1, #0x28]
	ldr r2, [r3, #8]
	ldr r1, [r3, #0x38]
	str r2, [r1, #0x2c]
	ldr r4, [r3, #0x10]
	ldr r2, [r0, #0x10]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x3c]
	ldr r4, [r3, #0x14]
	ldr r2, [r0, #0x14]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x40]
	ldr r4, [r3, #0x18]
	ldr r2, [r0, #0x18]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x44]
	ldr r4, [r3, #0x20]
	ldr r2, [r0, #0x1c]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x30]
	ldr r4, [r3, #0x24]
	ldr r2, [r0, #0x20]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x34]
	ldr r2, [r3, #0x28]
	ldr r1, [r0, #0x24]
	ldr r0, [r3, #0x38]
	smull r4, r1, r2, r1
	adds r2, r4, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
	b lbl_02043c68
lbl_02043a4c:
	ldr r7, [r0, #4]
	ldr r4, [r1, #4]
	mov r12, r2, asr #0x1f
	sub r4, r4, r7
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r4, r7, r5
	str r4, [sp]
	ldr r5, [r0, #8]
	ldr r6, [r1, #8]
	mov r4, #0
	sub r6, r6, r5
	smull r8, r7, r6, r2
	adds r8, r8, #0x800
	adc r6, r7, #0
	mov r7, r8, lsr #0xc
	orr r7, r7, r6, lsl #20
	add r5, r5, r7
	str r5, [sp, #4]
	ldr r5, [r0, #0xc]
	ldr r6, [r1, #0xc]
	mov lr, #0x800
	sub r6, r6, r5
	smull r8, r7, r6, r2
	adds r8, r8, #0x800
	adc r6, r7, #0
	mov r7, r8, lsr #0xc
	orr r7, r7, r6, lsl #20
	add r5, r5, r7
	str r5, [sp, #8]
	ldr r6, [r3]
	ldr r5, [r3, #0x38]
	str r6, [r5, #0x24]
	ldr r6, [r3, #4]
	ldr r5, [r3, #0x38]
	str r6, [r5, #0x28]
	ldr r6, [r3, #8]
	ldr r5, [r3, #0x38]
	str r6, [r5, #0x2c]
	ldr r6, [r0, #0x10]
	ldr r7, [r1, #0x10]
	ldr r5, [r3, #0x10]
	sub r7, r7, r6
	smull r9, r8, r7, r2
	adds r9, r9, #0x800
	adc r7, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r7, r5, r8
	ldr r5, [r3, #0x38]
	add r6, r6, r7
	str r6, [r5, #0x3c]
	ldr r6, [r0, #0x14]
	ldr r7, [r1, #0x14]
	ldr r5, [r3, #0x14]
	sub r7, r7, r6
	smull r9, r8, r7, r2
	adds r9, r9, #0x800
	adc r7, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r5, r5, r8
	add r6, r6, r5
	ldr r5, [r3, #0x38]
	str r6, [r5, #0x40]
	ldr r6, [r0, #0x18]
	ldr r7, [r1, #0x18]
	ldr r5, [r3, #0x18]
	sub r7, r7, r6
	smull r9, r8, r7, r2
	adds r9, r9, #0x800
	adc r7, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r5, r5, r8
	add r6, r6, r5
	ldr r5, [r3, #0x38]
	str r6, [r5, #0x44]
	ldr r6, [r0, #0x1c]
	ldr r5, [r3, #0x20]
	ldr r8, [r1, #0x1c]
	ldr r7, [r3, #0x38]
	sub r8, r8, r6
	smull r10, r9, r8, r2
	adds r10, r10, #0x800
	adc r8, r9, #0
	mov r9, r10, lsr #0xc
	orr r9, r9, r8, lsl #20
	add r6, r6, r9
	smull r8, r6, r5, r6
	adds r8, r8, #0x800
	adc r5, r6, #0
	mov r6, r8, lsr #0xc
	orr r6, r6, r5, lsl #20
	str r6, [r7, #0x30]
	ldr r6, [r0, #0x20]
	ldr r5, [r3, #0x24]
	ldr r8, [r1, #0x20]
	ldr r7, [r3, #0x38]
	sub r8, r8, r6
	smull r10, r9, r8, r2
	adds r10, r10, #0x800
	adc r8, r9, #0
	mov r9, r10, lsr #0xc
	orr r9, r9, r8, lsl #20
	add r6, r6, r9
	smull r8, r6, r5, r6
	adds r8, r8, #0x800
	adc r5, r6, #0
	mov r6, r8, lsr #0xc
	orr r6, r6, r5, lsl #20
	str r6, [r7, #0x34]
	ldr r5, [r0, #0x24]
	ldr r1, [r1, #0x24]
	ldr r0, [r3, #0x28]
	sub r1, r1, r5
	umull r7, r6, r1, r2
	mla r6, r1, r12, r6
	mov r1, r1, asr #0x1f
	adds r7, r7, lr
	mla r6, r1, r2, r6
	adc r1, r6, r4
	mov r2, r7, lsr #0xc
	orr r2, r2, r1, lsl #20
	add r1, r5, r2
	smull r2, r1, r0, r1
	adds r0, r2, lr
	adc r1, r1, r4
	mov r2, r0, lsr #0xc
	ldr r0, [r3, #0x38]
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
lbl_02043c68:
	ldr r2, [r3, #0x38]
	mov r4, #0
	add r1, sp, #0
	mov r0, r3
	str r4, [r2, #0x4c]
	bl func_02042ec8
	mov r0, r4
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02043c8c(void)
{
	stmdb sp!, {r4, lr}
	ldr lr, [r0, #0xc]
	mov r1, r1, lsl #1
	ldr r3, [lr, #0x14]
	mov r2, #0x50
	ldrsh r12, [r3, r1]
	add r3, lr, #0x20
	sub r1, r2, #0x51
	smlabb r2, r12, r2, r3
	cmp r12, r1
	ldmeqia sp!, {r4, pc}
	ldr r3, [r2, #0x30]
	tst r3, #0x1000000
	ldmneia sp!, {r4, pc}
	ldrsh r1, [r2, #0x42]
	cmp r1, #0
	ldmltia sp!, {r4, pc}
	ldr r0, [r0, #0x220]
	add r0, r0, r1, lsl #2
	ldr r4, [r0, #0xc]
	ldrsh r0, [r4]
	tst r0, #4
	ldrne r0, [r2, #0x38]
	addne r4, r0, #0x58
	tst r3, #0x400000
	ldrsh r0, [r4]
	beq lbl_02043d34
	orr r0, r0, #2
	strh r0, [r4]
	tst r0, #4
	beq lbl_02043d18
	ldr r1, =func_02043954
	mov r0, r4
	bl func_0204322c
	b lbl_02043d24
lbl_02043d18:
	ldr r1, =func_02043628
	mov r0, r4
	bl func_0204322c
lbl_02043d24:
	ldrsh r0, [r4]
	bic r0, r0, #2
	strh r0, [r4]
	ldmia sp!, {r4, pc}
lbl_02043d34:
	tst r0, #4
	beq lbl_02043d4c
	ldr r1, =func_02043954
	mov r0, r4
	bl func_0204322c
	ldmia sp!, {r4, pc}
lbl_02043d4c:
	ldr r1, =func_02043628
	mov r0, r4
	bl func_0204322c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02043d64(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r0, [r6, #0x220]
	ldr r4, [r6, #0xc]
	cmp r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r0, [r4, #0xc]
	mov r5, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, pc}
lbl_02043d8c:
	mov r0, r6
	mov r1, r5
	bl func_02043c8c
	ldr r0, [r4, #0xc]
	add r5, r5, #1
	cmp r5, r0
	blt lbl_02043d8c
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02043dac(void)
{
	ldr r12, [r3, #0x38]
	str r0, [r12, #0x80]
	ldr r12, [r3, #0x38]
	mov r0, #0
	str r1, [r12, #0x84]
	ldr r1, [r3, #0x38]
	str r2, [r1, #0x88]
	bx lr
}

extern "C" asm void func_02043dcc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	ldr r4, [r3, #0x38]
	cmp r2, #0
	str r0, [r4, #0x80]
	ldr r4, [r3, #0x38]
	str r1, [r4, #0x84]
	ldr r4, [r3, #0x38]
	str r2, [r4, #0x88]
	bne lbl_02043ed8
	ldr r4, [r3]
	ldr r2, [r0, #8]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x24]
	ldr r4, [r3, #4]
	ldr r2, [r0, #0xc]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x28]
	ldr r4, [r3, #8]
	ldr r2, [r0, #0x10]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x2c]
	ldr r4, [r3, #0x10]
	ldr r2, [r0, #0x14]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x3c]
	ldr r4, [r3, #0x14]
	ldr r2, [r0, #0x18]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x40]
	ldr r4, [r3, #0x18]
	ldr r2, [r0, #0x1c]
	ldr r1, [r3, #0x38]
	add r2, r4, r2
	str r2, [r1, #0x44]
	ldr r4, [r3, #0x20]
	ldr r2, [r0, #0x20]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x30]
	ldr r4, [r3, #0x24]
	ldr r2, [r0, #0x24]
	ldr r1, [r3, #0x38]
	smull r5, r2, r4, r2
	adds r4, r5, #0x800
	adc r2, r2, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r2, lsl #20
	str r4, [r1, #0x34]
	ldr r2, [r3, #0x28]
	ldr r1, [r0, #0x28]
	ldr r0, [r3, #0x38]
	smull r4, r1, r2, r1
	adds r2, r4, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
	b lbl_020440f4
lbl_02043ed8:
	ldr r12, [r0, #8]
	ldr r4, [r1, #8]
	ldr r7, [r3]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x24]
	ldr r12, [r0, #0xc]
	ldr r4, [r1, #0xc]
	ldr r7, [r3, #4]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x28]
	ldr r12, [r0, #0x10]
	ldr r4, [r1, #0x10]
	ldr r7, [r3, #8]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x2c]
	ldr r12, [r0, #0x14]
	ldr r4, [r1, #0x14]
	ldr r7, [r3, #0x10]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x3c]
	ldr r12, [r0, #0x18]
	ldr r4, [r1, #0x18]
	ldr r7, [r3, #0x14]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x40]
	ldr r12, [r0, #0x1c]
	ldr r4, [r1, #0x1c]
	ldr r7, [r3, #0x18]
	sub r4, r4, r12
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r5, r7, r5
	ldr r4, [r3, #0x38]
	add r5, r12, r5
	str r5, [r4, #0x44]
	ldr r8, [r0, #0x20]
	ldr r4, [r1, #0x20]
	ldr r7, [r3, #0x20]
	sub r4, r4, r8
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r4, r8, r5
	smull r5, r4, r7, r4
	adds r6, r5, #0x800
	adc r5, r4, #0
	mov r6, r6, lsr #0xc
	ldr r4, [r3, #0x38]
	orr r6, r6, r5, lsl #20
	str r6, [r4, #0x30]
	ldr r7, [r0, #0x24]
	ldr r4, [r1, #0x24]
	mov lr, r2, asr #0x1f
	sub r4, r4, r7
	smull r6, r5, r4, r2
	adds r6, r6, #0x800
	adc r4, r5, #0
	mov r5, r6, lsr #0xc
	orr r5, r5, r4, lsl #20
	add r7, r7, r5
	mov r5, #0
	mov r4, #0x800
	ldr r12, [r3, #0x24]
	ldr r6, [r3, #0x38]
	smull r8, r7, r12, r7
	adds r8, r8, #0x800
	adc r7, r7, #0
	mov r8, r8, lsr #0xc
	orr r8, r8, r7, lsl #20
	str r8, [r6, #0x34]
	ldr r12, [r0, #0x28]
	ldr r1, [r1, #0x28]
	ldr r0, [r3, #0x28]
	sub r1, r1, r12
	umull r7, r6, r1, r2
	mla r6, r1, lr, r6
	mov r1, r1, asr #0x1f
	adds r7, r7, r4
	mla r6, r1, r2, r6
	adc r1, r6, r5
	mov r2, r7, lsr #0xc
	orr r2, r2, r1, lsl #20
	add r1, r12, r2
	smull r2, r1, r0, r1
	adds r0, r2, r4
	adc r1, r1, r5
	mov r2, r0, lsr #0xc
	ldr r0, [r3, #0x38]
	orr r2, r2, r1, lsl #20
	str r2, [r0, #0x38]
lbl_020440f4:
	ldr r2, [r3, #0x38]
	mov r1, #0
	mov r0, r3
	str r1, [r2, #0x4c]
	bl func_02042ec8
	mov r0, #0
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02044110(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x20
	ldr r6, [r3, #0x3c]
	ldr r7, [r0, #4]
	ldr r5, [r6, #0x24]
	ldr r4, [r6, #0x20]
	cmp r5, r7
	str r4, [sp, #0x14]
	ldreq r5, [r6, #0x28]
	ldreq r4, [r1, #4]
	cmpeq r5, r4
	ldreq r4, [r6, #0x2c]
	cmpeq r4, r2
	addeq sp, sp, #0x20
	moveq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	str r7, [r6, #0x24]
	ldr r6, [r1, #4]
	ldr r5, [r3, #0x3c]
	ldr r4, [sp, #0x14]
	str r6, [r5, #0x28]
	ldr r5, [r3, #0x3c]
	cmp r4, #0
	str r2, [r5, #0x2c]
	ldr r3, [r3, #0x38]
	mov r4, #0
	ldr r3, [r3, #0x48]
	str r4, [sp, #0x10]
	ldr r4, [r3, #4]
	ldr r3, [r4, #0xc]
	add r3, r4, r3
	str r3, [sp]
	ble lbl_020445e4
	mov r10, r2, asr #0x1f
lbl_02044198:
	ldr r4, [r1, #4]
	ldr r3, [sp]
	ldr r6, [r0, #4]
	ldrh r5, [r3, #6]
	add r7, r4, #2
	ldr r4, [sp, #0x14]
	ldr r3, [sp, #0x10]
	add r6, r6, #2
	mla r3, r4, r6, r3
	mov r6, r4
	ldr r4, [sp, #0x10]
	mla r7, r6, r7, r4
	ldr r4, [sp]
	ldr r6, [sp]
	ldrh r4, [r4, r5]
	add r9, r6, r5
	ldr r5, [sp, #0x10]
	mla r3, r4, r3, r9
	mla r8, r4, r5, r9
	mla r5, r4, r7, r9
	ldr r4, [r8, #4]
	ldr r8, [r3, #4]
	ldr r7, [r5, #4]
	ldr r5, [sp]
	ldr r3, [sp]
	add r9, r5, r8
	add r8, r5, r7
	add r4, r3, r4
	ldr r5, [r9, #8]
	ldr r3, [r4, #8]
	add r5, r9, r5
	str r5, [sp, #8]
	ldr r5, [r4, r3]
	ldr r7, [r8, #8]
	str r5, [sp, #4]
	add r5, r8, r7
	ldr r7, [r4, #0xc]
	mov r6, #1
	str r7, [sp, #0x18]
	add r4, r4, r3
lbl_02044238:
	mov r3, #0
	str r3, [sp, #0xc]
lbl_02044240:
	ldr r3, [sp, #4]
	and r3, r3, #0xff
	cmp r3, #0x23
	bgt lbl_02044278
	cmp r3, #0x20
	blt lbl_02044270
	beq lbl_02044290
	cmp r3, #0x22
	beq lbl_0204439c
	cmp r3, #0x23
	beq lbl_02044468
	b lbl_02044590
lbl_02044270:
	cmp r3, #0
	b lbl_02044590
lbl_02044278:
	cmp r3, #0x40
	bgt lbl_02044288
	addeq r6, r6, #1
	b lbl_02044590
lbl_02044288:
	cmp r3, #0x41
	b lbl_02044590
lbl_02044290:
	ldr r3, [sp, #8]
	ldr r8, [r5, r6, lsl #2]
	ldr r7, [r3, r6, lsl #2]
	cmp r7, r8
	beq lbl_02044390
	and r9, r7, #0x1f
	and r3, r8, #0x1f
	cmp r9, r3
	beq lbl_020442e4
	mov r3, r3, lsl #0xc
	sub r3, r3, r9, lsl #12
	umull lr, r12, r3, r2
	mla r12, r3, r10, r12
	mov r11, r3, asr #0x1f
	adds r3, lr, #0x800
	mla r12, r11, r2, r12
	adc r11, r12, #0
	mov r3, r3, lsr #0xc
	orr r3, r3, r11, lsl #20
	add r3, r3, r9, lsl #12
	mov r9, r3, asr #0xc
lbl_020442e4:
	and r11, r9, #0x1f
	mov r3, r7, lsr #5
	and r12, r3, #0x1f
	mov r3, r8, lsr #5
	and r3, r3, #0x1f
	cmp r12, r3
	beq lbl_02044338
	mov r3, r3, lsl #0xc
	sub r3, r3, r12, lsl #12
	mov r9, r3, asr #0x1f
	str r9, [sp, #0x1c]
	umull lr, r9, r3, r2
	mla r9, r3, r10, r9
	ldr r3, [sp, #0x1c]
	adds lr, lr, #0x800
	mla r9, r3, r2, r9
	adc r3, r9, #0
	mov r9, lr, lsr #0xc
	orr r9, r9, r3, lsl #20
	add r3, r9, r12, lsl #12
	mov r12, r3, asr #0xc
lbl_02044338:
	mov r3, r12, lsl #0x1b
	orr r11, r11, r3, lsr #22
	mov r3, r7, lsr #0xa
	and r9, r3, #0x1f
	mov r3, r8, lsr #0xa
	and r3, r3, #0x1f
	cmp r9, r3
	beq lbl_02044388
	mov r3, r3, lsl #0xc
	sub r12, r3, r9, lsl #12
	umull r7, r3, r12, r2
	mla r3, r12, r10, r3
	mov r8, r12, asr #0x1f
	mla r3, r8, r2, r3
	adds r8, r7, #0x800
	adc r3, r3, #0
	mov r7, r8, lsr #0xc
	orr r7, r7, r3, lsl #20
	add r3, r7, r9, lsl #12
	mov r9, r3, asr #0xc
lbl_02044388:
	mov r3, r9, lsl #0x1b
	orr r7, r11, r3, lsr #17
lbl_02044390:
	str r7, [r4, r6, lsl #2]
	add r6, r6, #1
	b lbl_02044590
lbl_0204439c:
	ldr r3, [sp, #8]
	ldr r12, [r5, r6, lsl #2]
	ldr r11, [r3, r6, lsl #2]
	cmp r11, r12
	beq lbl_0204445c
	mov r3, r11, lsl #0x10
	mov r9, r3, asr #0x10
	mov r3, r12, lsl #0x10
	cmp r9, r3, asr #16
	mov r3, r3, asr #0x10
	beq lbl_020443fc
	mov r3, r3, lsl #8
	sub r3, r3, r9, lsl #8
	umull r8, r7, r3, r2
	mla r7, r3, r10, r7
	mov lr, r3, asr #0x1f
	adds r3, r8, #0x800
	mla r7, lr, r2, r7
	adc r7, r7, #0
	mov r3, r3, lsr #0xc
	orr r3, r3, r7, lsl #20
	add r3, r3, r9, lsl #8
	mov r3, r3, lsl #8
	mov r9, r3, asr #0x10
lbl_020443fc:
	mov r3, r9, lsl #0x10
	mov r7, r11, lsr #0x10
	mov r7, r7, lsl #0x10
	mov r9, r7, asr #0x10
	mov r7, r12, lsr #0x10
	mov r7, r7, lsl #0x10
	cmp r9, r7, asr #16
	mov r7, r7, asr #0x10
	beq lbl_02044454
	mov r7, r7, lsl #8
	sub r12, r7, r9, lsl #8
	umull r8, r7, r12, r2
	mla r7, r12, r10, r7
	mov r11, r12, asr #0x1f
	mla r7, r11, r2, r7
	adds r11, r8, #0x800
	adc r7, r7, #0
	mov r8, r11, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r7, r8, r9, lsl #8
	mov r7, r7, lsl #8
	mov r9, r7, asr #0x10
lbl_02044454:
	mov r7, r9, lsl #0x10
	orr r11, r7, r3, lsr #16
lbl_0204445c:
	str r11, [r4, r6, lsl #2]
	add r6, r6, #1
	b lbl_02044590
lbl_02044468:
	ldr r3, [sp, #8]
	ldr r11, [r5, r6, lsl #2]
	ldr r9, [r3, r6, lsl #2]
	cmp r9, r11
	beq lbl_02044518
	mov r3, r9, lsl #0x10
	mov r12, r3, asr #0x10
	mov r3, r11, lsl #0x10
	cmp r12, r3, asr #16
	beq lbl_020444c0
	rsb r3, r12, r3, asr #16
	umull r8, r7, r3, r2
	mla r7, r3, r10, r7
	mov lr, r3, asr #0x1f
	adds r3, r8, #0x800
	mla r7, lr, r2, r7
	adc r7, r7, #0
	mov r3, r3, lsr #0xc
	orr r3, r3, r7, lsl #20
	add r3, r12, r3
	mov r3, r3, lsl #0x10
	mov r12, r3, asr #0x10
lbl_020444c0:
	mov r3, r12, lsl #0x10
	mov r7, r9, lsr #0x10
	mov r7, r7, lsl #0x10
	mov r9, r7, asr #0x10
	mov r7, r11, lsr #0x10
	mov r7, r7, lsl #0x10
	cmp r9, r7, asr #16
	beq lbl_02044510
	rsb r12, r9, r7, asr #16
	umull r8, r7, r12, r2
	mla r7, r12, r10, r7
	mov r11, r12, asr #0x1f
	mla r7, r11, r2, r7
	adds r11, r8, #0x800
	adc r7, r7, #0
	mov r8, r11, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r7, r9, r8
	mov r7, r7, lsl #0x10
	mov r9, r7, asr #0x10
lbl_02044510:
	mov r7, r9, lsl #0x10
	orr r9, r7, r3, lsr #16
lbl_02044518:
	ldr r3, [sp, #8]
	str r9, [r4, r6, lsl #2]
	add r3, r3, r6, lsl #2
	ldr r8, [r3, #4]
	add r3, r5, r6, lsl #2
	ldr r7, [r3, #4]
	cmp r8, r7
	beq lbl_02044584
	mov r3, r8, lsl #0x10
	mov r3, r3, asr #0x10
	mov r7, r7, lsl #0x10
	cmp r3, r7, asr #16
	beq lbl_0204457c
	rsb r8, r3, r7, asr #16
	umull r11, r9, r8, r2
	mla r9, r8, r10, r9
	mov r7, r8, asr #0x1f
	adds r8, r11, #0x800
	mla r9, r7, r2, r9
	adc r7, r9, #0
	mov r8, r8, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r3, r3, r8
	mov r3, r3, lsl #0x10
	mov r3, r3, asr #0x10
lbl_0204457c:
	mov r3, r3, lsl #0x10
	mov r8, r3, lsr #0x10
lbl_02044584:
	add r3, r4, r6, lsl #2
	str r8, [r3, #4]
	add r6, r6, #2
lbl_02044590:
	ldr r3, [sp, #4]
	mov r3, r3, lsr #8
	str r3, [sp, #4]
	ldr r3, [sp, #0xc]
	add r3, r3, #1
	str r3, [sp, #0xc]
	cmp r3, #4
	blt lbl_02044240
	ldr r3, [sp, #0x18]
	cmp r6, r3, lsr #2
	bcs lbl_020445cc
	ldr r3, [r4, r6, lsl #2]
	add r6, r6, #1
	str r3, [sp, #4]
	b lbl_02044238
lbl_020445cc:
	ldr r3, [sp, #0x10]
	add r4, r3, #1
	ldr r3, [sp, #0x14]
	str r4, [sp, #0x10]
	cmp r4, r3
	blt lbl_02044198
lbl_020445e4:
	bl func_0207914c
	mov r0, #0
	add sp, sp, #0x20
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020445f4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	ldr r2, [r0, #0x18]
	mov r8, r1
	cmp r2, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	ldrsh r3, [r8, #0x40]
	cmp r3, #0
	ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	add r2, r2, #0xc
	mov r1, #0x14
	smlabb r4, r3, r1, r2
	ldrsh r1, [r4, #2]
	cmp r1, #0
	ldmltia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	add r0, r0, r1, lsl #2
	ldrsh r1, [r4, #4]
	ldr r2, [r0, #0x20]
	ldrsh r0, [r4, #6]
	add r1, r2, r1, lsl #2
	ldr r5, [r1, #0xc]
	strh r0, [r5, #6]
	ldrsh r0, [r4, #8]
	strh r0, [r5, #8]
	ldrsh r0, [r4, #0xa]
	strh r0, [r5, #4]
	ldrsh r0, [r4, #0x10]
	str r0, [r5, #0xc]
	ldrsh r0, [r4, #0xe]
	str r0, [r5, #0x1c]
	ldrsh r0, [r5]
	ldrsh r7, [r5, #2]
	tst r0, #1
	beq lbl_0204476c
	tst r0, #8
	beq lbl_02044740
	sub r1, r7, #1
	mov r0, #0x2c
	mul r2, r1, r0
	add lr, r5, #0x20
	ldr r1, [r8, #0x30]
	add r12, lr, r2
	tst r1, #2
	ldr r6, [lr, r2]
	beq lbl_020446dc
	ldr r1, [lr]
	add r0, lr, #8
	str r1, [r12]
	ldr r1, [lr, #4]
	add r3, r12, #8
	str r1, [r12, #4]
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	add r0, lr, #0x14
	add r3, r12, #0x14
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	add r0, lr, #0x20
	b lbl_0204471c
lbl_020446dc:
	sub r1, r7, #2
	mul r2, r1, r0
	ldr r0, [lr, r2]
	add r3, lr, r2
	str r0, [r12]
	ldr r1, [r3, #4]
	add r0, r3, #8
	str r1, [r12, #4]
	add r9, r12, #8
	ldmia r0, {r0, r1, r2}
	stmia r9, {r0, r1, r2}
	add r0, r3, #0x14
	add r9, r12, #0x14
	ldmia r0, {r0, r1, r2}
	stmia r9, {r0, r1, r2}
	add r0, r3, #0x20
lbl_0204471c:
	add r3, r12, #0x20
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	ldrsh r1, [r5, #2]
	mov r0, #0x2c
	sub r1, r1, #1
	mul r0, r1, r0
	str r6, [lr, r0]
	b lbl_02044774
lbl_02044740:
	ldr r0, [r8, #0x30]
	add r1, r5, #0x20
	tst r0, #2
	subeq r0, r7, #2
	ldrne r2, [r1, #4]
	addeq r0, r1, r0, lsl #3
	ldreq r2, [r0, #4]
	sub r0, r7, #1
	add r0, r1, r0, lsl #3
	str r2, [r0, #4]
	b lbl_02044774
lbl_0204476c:
	sub r0, r7, #1
	strh r0, [r5, #2]
lbl_02044774:
	ldrsh r0, [r5]
	tst r0, #8
	ldrne r1, =func_02043dcc
	ldr r0, [r8, #0x30]
	ldreq r1, =func_02043dac
	tst r0, #0x400000
	beq lbl_020447b8
	ldrsh r3, [r5]
	mov r0, r5
	mov r2, r8
	orr r3, r3, #2
	strh r3, [r5]
	bl func_0204322c
	ldrsh r0, [r5]
	bic r0, r0, #2
	strh r0, [r5]
	b lbl_020447c4
lbl_020447b8:
	mov r0, r5
	mov r2, r8
	bl func_0204322c
lbl_020447c4:
	ldrsh r0, [r5, #6]
	strh r0, [r4, #6]
	ldrsh r0, [r5, #8]
	strh r0, [r4, #8]
	ldrsh r0, [r5, #4]
	strh r0, [r4, #0xa]
	ldr r0, [r5, #0xc]
	strh r0, [r4, #0x10]
	ldr r0, [r5, #0x1c]
	strh r0, [r4, #0xe]
	strh r7, [r5, #2]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020447fc(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #0x18]
	mov r3, r1
	cmp r2, #0
	ldmeqia sp!, {r3, pc}
	ldrsh r1, [r3, #0x40]
	cmp r1, #0
	ldmltia sp!, {r3, pc}
	mov r0, #0x14
	smlabb r0, r1, r0, r2
	ldrsh r0, [r0, #0xe]
	cmp r0, #0
	ldmltia sp!, {r3, pc}
	ldr r2, [r3, #0x38]
	ldr r0, [r2, #0x80]
	ldr r1, [r2, #0x84]
	ldr r2, [r2, #0x88]
	bl func_02044110
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02044848(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r4, r0
	ldr r6, [r4, #0x22c]
	ldr r7, [r4, #0x228]
	cmp r6, #0
	cmpne r7, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	ldr r1, [r6, #8]
	mov r5, #0
	cmp r1, #0
	ble lbl_020448c8
	add r8, r6, #0xc
	mov r9, r5
lbl_0204487c:
	ldrb r0, [r8, #0x10]
	ldrb r1, [r8, #0x11]
	add r0, r7, r0, lsl #2
	ldr r2, [r0, #0xc]
	cmp r1, #0
	ldrsh r3, [r2, #2]
	beq lbl_020448a8
	ldr r0, [r4, #0x5e8]
	cmp r1, r0
	beq lbl_020448b4
	mov r3, r9
lbl_020448a8:
	mov r0, r4
	mov r1, r8
	bl func_020449d4
lbl_020448b4:
	ldr r1, [r6, #8]
	add r5, r5, #1
	cmp r5, r1
	add r8, r8, #0x18
	blt lbl_0204487c
lbl_020448c8:
	ldr r0, [r4, #0x5e8]
	cmp r0, #0
	ble lbl_02044924
	cmp r1, #0
	mov r8, #0
	ble lbl_02044924
	add r5, r6, #0xc
lbl_020448e4:
	ldrb r1, [r5, #0x11]
	ldr r0, [r4, #0x5e8]
	cmp r1, r0
	bne lbl_02044910
	ldrb r2, [r5, #0x10]
	mov r0, r4
	mov r1, r5
	add r2, r7, r2, lsl #2
	ldr r2, [r2, #0xc]
	ldrsh r3, [r2, #2]
	bl func_020449d4
lbl_02044910:
	ldr r0, [r6, #8]
	add r8, r8, #1
	cmp r8, r0
	add r5, r5, #0x18
	blt lbl_020448e4
lbl_02044924:
	ldr r0, [r7, #8]
	mov r1, #0
	cmp r0, #0
	ble lbl_020449bc
	ldr r3, =0x00000202
	ldr r5, =data_020f227c
	mov r6, r1
	mov r2, #0x22
lbl_02044944:
	add r0, r7, r1, lsl #2
	ldr r0, [r0, #0xc]
	ldrsh r8, [r0, #6]
	tst r8, #1
	ldrsh r8, [r0, #2]
	beq lbl_02044964
	smlabb r8, r8, r3, r0
	b lbl_02044968
lbl_02044964:
	smlabb r8, r8, r2, r0
lbl_02044968:
	ldrsh r12, [r0]
	ldrsh r9, [r8, #8]
	ldr r8, [r5]
	add r8, r12, r8
	strh r8, [r0]
	ldrsh r8, [r0]
	cmp r8, r9
	blt lbl_020449ac
	sub r8, r8, r9
	strh r8, [r0]
	ldrsh r8, [r0, #2]
	add r8, r8, #1
	strh r8, [r0, #2]
	ldrsh r12, [r0, #2]
	ldrsh r8, [r0, #4]
	cmp r12, r8
	strgeh r6, [r0, #2]
lbl_020449ac:
	ldr r0, [r7, #8]
	add r1, r1, #1
	cmp r1, r0
	blt lbl_02044944
lbl_020449bc:
	ldr r0, [r4]
	orr r0, r0, #0x80
	str r0, [r4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020449d4(void)
{
	stmdb sp!, {r4, lr}
	ldrsh r12, [r2, #6]
	ldr lr, [r0, #0x5e0]
	tst r12, #1
	ldrh lr, [lr, #0x30]
	beq lbl_02044a04
	mov r4, #0x200
	add r12, r2, #8
	add r2, r4, #2
	mla r2, r3, r2, r12
	add r2, r2, #2
	b lbl_02044a18
lbl_02044a04:
	add r12, r2, #8
	mov r2, #0x22
	mla r2, r3, r2, r12
	add r2, r2, #2
	mov r4, #0x20
lbl_02044a18:
	ldr r0, [r0]
	ldr r1, [r1, #0x14]
	tst r0, #0x40
	mov r0, r2
	beq lbl_02044a3c
	mov r2, r4
	add r1, r1, lr, lsl #3
	bl func_02067a40
	ldmia sp!, {r4, pc}
lbl_02044a3c:
	mov r2, r4
	bl func_02067a40
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02044a48(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r5, r0
	ldr r1, [r5, #0x22c]
	mov r7, #0
	ldr r0, [r1, #8]
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	mov r4, r7
lbl_02044a68:
	add r0, r1, #0xc
	add r6, r0, r4
	ldr r1, =data_020c1bcc
	mov r0, r6
	mov r2, #3
	bl func_0207c3b0
	cmp r0, #0
	beq lbl_02044b34
	ldrb r0, [r6, #0x10]
	ldr r1, [r5, #0x228]
	add r0, r1, r0, lsl #2
	ldr r8, [r0, #0xc]
	ldrsh r0, [r8, #6]
	tst r0, #2
	bne lbl_02044b34
	tst r0, #1
	ldrsh r0, [r8, #4]
	mov r9, #0
	add r10, r8, #8
	beq lbl_02044af4
	cmp r0, #0
	ble lbl_02044b28
	mov r6, #0x100
lbl_02044ac4:
	add r1, r10, #2
	mov r0, r5
	mov r3, r6
	mov r2, r1
	bl func_0204718c
	add r0, r10, #2
	ldrsh r1, [r8, #4]
	add r9, r9, #1
	add r10, r0, #0x200
	cmp r9, r1
	blt lbl_02044ac4
	b lbl_02044b28
lbl_02044af4:
	cmp r0, #0
	ble lbl_02044b28
	mov r6, #0x10
lbl_02044b00:
	add r1, r10, #2
	mov r0, r5
	mov r3, r6
	mov r2, r1
	bl func_0204718c
	ldrsh r0, [r8, #4]
	add r9, r9, #1
	add r10, r10, #0x22
	cmp r9, r0
	blt lbl_02044b00
lbl_02044b28:
	ldrsh r0, [r8, #6]
	orr r0, r0, #2
	strh r0, [r8, #6]
lbl_02044b34:
	ldr r1, [r5, #0x22c]
	add r7, r7, #1
	ldr r0, [r1, #8]
	add r4, r4, #0x18
	cmp r7, r0
	blt lbl_02044a68
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02044b54(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	cmp r0, r1
	bne lbl_02044b7c
	ldrh r11, [r0, #4]
	ldrh r1, [r0, #6]
	str r1, [sp]
	ldrh r4, [r0, #8]
	ldrh r5, [r0, #0xa]
	ldr r10, [r0, #0xc]
	b lbl_02044f28
lbl_02044b7c:
	ldrh r4, [r0, #4]
	ldrh r5, [r1, #4]
	cmp r4, r5
	beq lbl_02044c4c
	and r6, r4, #0x1f
	and r7, r5, #0x1f
	cmp r6, r7
	beq lbl_02044bc0
	mov r7, r7, lsl #0xc
	sub r7, r7, r6, lsl #12
	smull r9, r8, r7, r2
	adds r9, r9, #0x800
	adc r7, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r6, r8, r6, lsl #12
	mov r6, r6, asr #0xc
lbl_02044bc0:
	mov r7, r4, lsr #5
	mov r8, r5, lsr #5
	and r7, r7, #0x1f
	and r8, r8, #0x1f
	cmp r7, r8
	and r6, r6, #0x1f
	beq lbl_02044c00
	mov r8, r8, lsl #0xc
	sub r8, r8, r7, lsl #12
	smull r10, r9, r8, r2
	adds r10, r10, #0x800
	adc r8, r9, #0
	mov r9, r10, lsr #0xc
	orr r9, r9, r8, lsl #20
	add r7, r9, r7, lsl #12
	mov r7, r7, asr #0xc
lbl_02044c00:
	mov r4, r4, lsr #0xa
	mov r5, r5, lsr #0xa
	mov r7, r7, lsl #0x1b
	and r4, r4, #0x1f
	and r5, r5, #0x1f
	cmp r4, r5
	orr r6, r6, r7, lsr #22
	beq lbl_02044c44
	mov r5, r5, lsl #0xc
	sub r5, r5, r4, lsl #12
	smull r8, r7, r5, r2
	adds r8, r8, #0x800
	adc r5, r7, #0
	mov r7, r8, lsr #0xc
	orr r7, r7, r5, lsl #20
	add r4, r7, r4, lsl #12
	mov r4, r4, asr #0xc
lbl_02044c44:
	mov r4, r4, lsl #0x1b
	orr r4, r6, r4, lsr #17
lbl_02044c4c:
	ldrh r6, [r0, #8]
	ldrh r5, [r1, #8]
	mov r4, r4, lsl #0x10
	mov r11, r4, lsr #0x10
	cmp r6, r5
	beq lbl_02044d24
	and r7, r6, #0x1f
	and r4, r5, #0x1f
	cmp r7, r4
	beq lbl_02044c98
	mov r4, r4, lsl #0xc
	sub r4, r4, r7, lsl #12
	smull r9, r8, r4, r2
	adds r9, r9, #0x800
	adc r4, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r4, lsl #20
	add r4, r8, r7, lsl #12
	mov r7, r4, asr #0xc
lbl_02044c98:
	mov r4, r6, lsr #5
	mov r8, r5, lsr #5
	and r4, r4, #0x1f
	and r8, r8, #0x1f
	cmp r4, r8
	and r7, r7, #0x1f
	beq lbl_02044cd8
	mov r8, r8, lsl #0xc
	sub r8, r8, r4, lsl #12
	smull r10, r9, r8, r2
	adds r10, r10, #0x800
	adc r8, r9, #0
	mov r9, r10, lsr #0xc
	orr r9, r9, r8, lsl #20
	add r4, r9, r4, lsl #12
	mov r4, r4, asr #0xc
lbl_02044cd8:
	mov r6, r6, lsr #0xa
	mov r5, r5, lsr #0xa
	mov r8, r4, lsl #0x1b
	and r4, r6, #0x1f
	and r5, r5, #0x1f
	cmp r4, r5
	orr r7, r7, r8, lsr #22
	beq lbl_02044d1c
	mov r5, r5, lsl #0xc
	sub r5, r5, r4, lsl #12
	smull r8, r6, r5, r2
	adds r8, r8, #0x800
	adc r5, r6, #0
	mov r6, r8, lsr #0xc
	orr r6, r6, r5, lsl #20
	add r4, r6, r4, lsl #12
	mov r4, r4, asr #0xc
lbl_02044d1c:
	mov r4, r4, lsl #0x1b
	orr r6, r7, r4, lsr #17
lbl_02044d24:
	ldrh r5, [r0, #0xa]
	ldrh r7, [r1, #0xa]
	mov r4, r6, lsl #0x10
	mov r4, r4, lsr #0x10
	cmp r5, r7
	beq lbl_02044dfc
	and r8, r5, #0x1f
	and r6, r7, #0x1f
	cmp r8, r6
	beq lbl_02044d70
	mov r6, r6, lsl #0xc
	sub r6, r6, r8, lsl #12
	smull r10, r9, r6, r2
	adds r10, r10, #0x800
	adc r6, r9, #0
	mov r9, r10, lsr #0xc
	orr r9, r9, r6, lsl #20
	add r6, r9, r8, lsl #12
	mov r8, r6, asr #0xc
lbl_02044d70:
	mov r6, r5, lsr #5
	mov r9, r7, lsr #5
	and r6, r6, #0x1f
	and r9, r9, #0x1f
	cmp r6, r9
	and r8, r8, #0x1f
	beq lbl_02044db0
	mov r9, r9, lsl #0xc
	sub r9, r9, r6, lsl #12
	smull r12, r10, r9, r2
	adds r12, r12, #0x800
	adc r9, r10, #0
	mov r10, r12, lsr #0xc
	orr r10, r10, r9, lsl #20
	add r6, r10, r6, lsl #12
	mov r6, r6, asr #0xc
lbl_02044db0:
	mov r5, r5, lsr #0xa
	mov r7, r7, lsr #0xa
	mov r9, r6, lsl #0x1b
	and r5, r5, #0x1f
	and r6, r7, #0x1f
	cmp r5, r6
	orr r8, r8, r9, lsr #22
	beq lbl_02044df4
	mov r6, r6, lsl #0xc
	sub r6, r6, r5, lsl #12
	smull r9, r7, r6, r2
	adds r9, r9, #0x800
	adc r6, r7, #0
	mov r7, r9, lsr #0xc
	orr r7, r7, r6, lsl #20
	add r5, r7, r5, lsl #12
	mov r5, r5, asr #0xc
lbl_02044df4:
	mov r5, r5, lsl #0x1b
	orr r5, r8, r5, lsr #17
lbl_02044dfc:
	ldrh r8, [r0, #6]
	ldrh r9, [r1, #6]
	mov r5, r5, lsl #0x10
	mov r5, r5, lsr #0x10
	cmp r8, r9
	beq lbl_02044ed4
	and r6, r8, #0x1f
	and r7, r9, #0x1f
	cmp r6, r7
	beq lbl_02044e48
	mov r7, r7, lsl #0xc
	sub r7, r7, r6, lsl #12
	smull r12, r10, r7, r2
	adds r12, r12, #0x800
	adc r7, r10, #0
	mov r10, r12, lsr #0xc
	orr r10, r10, r7, lsl #20
	add r6, r10, r6, lsl #12
	mov r6, r6, asr #0xc
lbl_02044e48:
	mov r10, r8, lsr #5
	mov r7, r9, lsr #5
	and r10, r10, #0x1f
	and r7, r7, #0x1f
	cmp r10, r7
	and r12, r6, #0x1f
	beq lbl_02044e88
	mov r6, r7, lsl #0xc
	sub r6, r6, r10, lsl #12
	smull r7, lr, r6, r2
	adds r6, r7, #0x800
	adc r7, lr, #0
	mov r6, r6, lsr #0xc
	orr r6, r6, r7, lsl #20
	add r6, r6, r10, lsl #12
	mov r10, r6, asr #0xc
lbl_02044e88:
	mov r6, r8, lsr #0xa
	mov r7, r9, lsr #0xa
	mov r8, r10, lsl #0x1b
	and r6, r6, #0x1f
	and r7, r7, #0x1f
	cmp r6, r7
	orr r12, r12, r8, lsr #22
	beq lbl_02044ecc
	mov r7, r7, lsl #0xc
	sub r7, r7, r6, lsl #12
	smull r9, r8, r7, r2
	adds r9, r9, #0x800
	adc r7, r8, #0
	mov r8, r9, lsr #0xc
	orr r8, r8, r7, lsl #20
	add r6, r8, r6, lsl #12
	mov r6, r6, asr #0xc
lbl_02044ecc:
	mov r6, r6, lsl #0x1b
	orr r8, r12, r6, lsr #17
lbl_02044ed4:
	ldr r10, [r0, #0xc]
	ldr r1, [r1, #0xc]
	mov r0, r8, lsl #0x10
	mov r0, r0, lsr #0x10
	cmp r10, r1
	str r0, [sp]
	beq lbl_02044f28
	and r0, r10, #0x1f
	and r1, r1, #0x1f
	cmp r0, r1
	beq lbl_02044f24
	mov r1, r1, lsl #0xc
	sub r1, r1, r0, lsl #12
	smull r6, r2, r1, r2
	adds r6, r6, #0x800
	adc r1, r2, #0
	mov r2, r6, lsr #0xc
	orr r2, r2, r1, lsl #20
	add r0, r2, r0, lsl #12
	mov r0, r0, asr #0xc
lbl_02044f24:
	and r10, r0, #0x1f
lbl_02044f28:
	ldr r8, [r3]
	cmp r8, #0
	beq lbl_02044fac
	ldr r0, [r8]
	mov r6, #0
	cmp r0, #0
	bls lbl_02044fac
lbl_02044f44:
	add r0, r8, r6, lsl #3
	ldmib r0, {r7, r9}
	mov r0, r7
	mov r1, r9
	mov r2, r11
	bl func_0206e528
	mov r0, r7
	mov r1, r9
	mov r2, r4
	bl func_0206e56c
	mov r0, r7
	mov r1, r9
	mov r2, r5
	bl func_0206e5b0
	ldr r2, [sp]
	mov r0, r7
	mov r1, r9
	bl func_0206e4e4
	mov r0, r7
	mov r1, r9
	mov r2, r10
	bl func_0206e5f4
	ldr r0, [r8]
	add r6, r6, #1
	cmp r6, r0
	bcc lbl_02044f44
lbl_02044fac:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02044fb4(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r5, [r0, #0x230]
	cmp r5, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r0, [r5, #8]
	mov r6, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, pc}
	ldr r4, =func_02044b54
lbl_02044fd8:
	add r0, r5, r6, lsl #2
	ldr r2, [r0, #0xc]
	mov r1, r4
	add r0, r2, #0x10
	bl func_0204322c
	ldr r0, [r5, #8]
	add r6, r6, #1
	cmp r6, r0
	blt lbl_02044fd8
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02045004(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4]
	tst r0, #1
	ldmeqia sp!, {r4, pc}
	tst r0, #4
	ldmneia sp!, {r4, pc}
	ldr r0, [r4, #0x29c]
	eors r0, r0, #1
	str r0, [r4, #0x29c]
	ldreq r0, =data_020f227c
	moveq r1, #2
	ldrne r0, =data_020f227c
	movne r1, #0
	str r1, [r0]
	mov r0, r4
	mov r1, #0
	bl func_020435d4
	ldr r1, [r4, #0x24c]
	ldr r0, [r4, #0x250]
	cmp r1, r0
	beq lbl_0204506c
	mov r0, r4
	mov r1, #1
	bl func_020435d4
	b lbl_020450b4
lbl_0204506c:
	ldr r0, [r4, #0x254]
	str r0, [r4, #0x260]
	ldr r0, [r4, #0x258]
	str r0, [r4, #0x264]
	ldr r0, [r4, #0x25c]
	str r0, [r4, #0x268]
	ldr r0, [r4, #0x26c]
	str r0, [r4, #0x278]
	ldr r0, [r4, #0x270]
	str r0, [r4, #0x27c]
	ldr r0, [r4, #0x274]
	str r0, [r4, #0x280]
	ldr r0, [r4, #0x284]
	str r0, [r4, #0x290]
	ldr r0, [r4, #0x288]
	str r0, [r4, #0x294]
	ldr r0, [r4, #0x28c]
	str r0, [r4, #0x298]
lbl_020450b4:
	mov r0, r4
	bl func_02043d64
	mov r0, r4
	bl func_02044848
	mov r0, r4
	bl func_02044fb4
	ldr r0, [r4]
	tst r0, #0x100
	ldmneia sp!, {r4, pc}
	tst r0, #0x40
	beq lbl_020450e8
	mov r0, r4
	bl func_0204722c
lbl_020450e8:
	ldr r0, [r4]
	tst r0, #0xc0
	ldmeqia sp!, {r4, pc}
	mov r0, r4
	bl func_020472e8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02045104(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x18
	ldr r2, =data_020f227c
	mov r4, r0
	ldr r3, [r4, #0x9c]
	ldr r0, [r2, #8]
	ldr r12, [r2, #0x10]
	ldr lr, [r4, #0xa4]
	sub r2, r3, r0
	sub r5, lr, r12
	smull r0, r12, r2, r2
	adds lr, r0, #0x800
	mov r0, #0
	smull r3, r2, r5, r5
	adc r12, r12, r0
	adds r3, r3, #0x800
	mov lr, lr, lsr #0xc
	adc r2, r2, r0
	mov r3, r3, lsr #0xc
	orr r3, r3, r2, lsl #20
	orr lr, lr, r12, lsl #20
	ldr r2, [r4, #0xa8]
	add r3, lr, r3
	sub r2, r3, r2
	cmp r2, r1
	addge sp, sp, #0x18
	ldmgeia sp!, {r3, r4, r5, pc}
	ldr r0, [r4, #0xac]
	ldr r1, =data_020f2290
	add r3, sp, #0xc
	add r2, r4, #0x9c
	bl func_02063330
	ldr r1, =data_020f2284
	add r0, sp, #0xc
	add r2, sp, #0
	bl func_02062f98
	ldr r1, =data_020f2290
	add r0, sp, #0
	bl func_02062fcc
	cmp r0, #0
	addlt sp, sp, #0x18
	movlt r0, #0
	ldmltia sp!, {r3, r4, r5, pc}
	ldr r0, [r4, #0xac]
	ldr r1, =data_020f229c
	add r3, sp, #0xc
	add r2, r4, #0x9c
	bl func_02063330
	ldr r1, =data_020f2284
	add r0, sp, #0xc
	add r2, sp, #0
	bl func_02062f98
	ldr r1, =data_020f229c
	add r0, sp, #0
	bl func_02062fcc
	cmp r0, #0
	movge r0, #1
	movlt r0, #0
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02045204(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #4
	ldr r12, =0x04000444
	mov r4, #0
	str r4, [r12]
	ldmia r0, {r0, r4, r5}
	str r0, [r12, #0x2c]
	str r4, [r12, #0x2c]
	mov r6, r1
	str r5, [r12, #0x2c]
	ldr r0, [r6, #4]
	ldr r4, =data_020b638c
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, asr #4
	mov r1, r0, lsl #1
	add r0, r1, #1
	mov r5, r1, lsl #1
	mov r1, r0, lsl #1
	ldrsh r0, [r4, r5]
	ldrsh r1, [r4, r1]
	mov r5, r2
	mov r4, r3
	bl func_02065c60
	ldr r0, [r6]
	ldr r2, =data_020b638c
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, asr #4
	mov r1, r0, lsl #1
	add r0, r1, #1
	mov r3, r1, lsl #1
	mov r1, r0, lsl #1
	ldrsh r0, [r2, r3]
	ldrsh r1, [r2, r1]
	bl func_02065c24
	ldr r0, [r6, #8]
	ldr r2, =data_020b638c
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	mov r0, r0, asr #4
	mov r1, r0, lsl #1
	add r0, r1, #1
	mov r3, r1, lsl #1
	mov r1, r0, lsl #1
	ldrsh r0, [r2, r3]
	ldrsh r1, [r2, r1]
	bl func_02065c9c
	ldr r1, =0x0400046C
	ldmia r5, {r2, r3, r6}
	str r2, [r1]
	str r3, [r1]
	ldr r0, [sp, #0x18]
	str r6, [r1]
	str r0, [r1]
	str r0, [r1]
	str r0, [r1]
	ldr r0, [r4]
	str r0, [r1, #0x154]
	ldr r0, [r4, #4]
	str r0, [r1, #0x154]
	ldr r0, [r4, #8]
	str r0, [r1, #0x154]
	add r4, sp, #0
lbl_02045304:
	mov r0, r4
	bl func_02065544
	cmp r0, #0
	bne lbl_02045304
	ldr r0, =0x04000448
	mov r1, #1
	str r1, [r0]
	ldr r0, [sp]
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0204533c(void)
{
	mov r2, #2
	tst r1, #0x40
	addne r2, r2, #1
	tst r1, #0x20
	ldr r1, [r0]
	addne r2, r2, #1
	add r1, r1, r2
	str r1, [r0]
	bx lr
}

extern "C" asm void func_02045360(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r0, [r0, #0x38]
	ldr r4, [r1, #0x10]
	ldr r1, =data_0210d168
	add r0, r0, #0x24
	mov r5, #0x1f
	bl func_0206338c
	ldr r1, [r4, #4]
	cmp r0, r1
	bge lbl_020453f0
	ldr r2, [r4]
	mov r5, #0
	sub r1, r1, r2
	cmp r1, #0
	ble lbl_020453b8
	sub r0, r0, r2
	bl func_02062e04
	movs r5, r0
	movmi r5, #0
	bmi lbl_020453b8
	cmp r5, #0x1000
	movge r5, #0x1000
lbl_020453b8:
	ldr r3, [r4, #8]
	mov r0, #0
	rsb r1, r3, #0x1000
	smull r2, r1, r5, r1
	adds r2, r2, #0x800
	adc r1, r1, #0
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	add r1, r3, r2
	movs r5, r1, asr #7
	movmi r5, r0
	bmi lbl_020453f0
	cmp r5, #0x1f
	movge r5, #0x1f
lbl_020453f0:
	mov r0, r5
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020453fc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r7, r0
	ldrb r0, [r7, #0x18]
	mov r6, r1
	mov r5, r2
	mov r4, #0
	cmp r0, #0
	ldmlsia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r8, =0x84210843
lbl_02045420:
	ldrb r2, [r5, r4]
	mov r0, r7
	mov r1, r4
	mul r12, r6, r2
	smull r3, r2, r8, r12
	add r2, r12, r2
	mov r3, r12, lsr #0x1f
	add r2, r3, r2, asr #4
	bl func_0206e5f4
	ldrb r0, [r7, #0x18]
	add r4, r4, #1
	cmp r4, r0
	bcc lbl_02045420
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0204545c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x114
	mov r10, r0
	ldr r1, [r10]
	ldr r0, [r10, #0xc]
	tst r1, #1
	str r0, [sp, #0xc]
	mvn r5, #0
	addeq sp, sp, #0x114
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r0, =data_0210cf74
	add r7, sp, #0xc0
	str r0, [sp, #4]
	mov r8, r0
	ldr r0, [sp, #0xc]
	mov r4, r7
	ldr r9, [r0, #0x18]
	ldr r6, [r0, #0xc]
	ldmia r8!, {r0, r1, r2, r3}
	stmia r7!, {r0, r1, r2, r3}
	ldmia r8!, {r0, r1, r2, r3}
	stmia r7!, {r0, r1, r2, r3}
	ldmia r8, {r0, r1, r2, r3}
	stmia r7, {r0, r1, r2, r3}
	ldr r2, [r10, #0x5f4]
	ldr r1, [sp, #4]
	str r2, [sp]
	ldr r2, [r10, #0x5ec]
	ldr r3, [r10, #0x5f0]
	mov r0, r4
	add r6, r9, r6, lsl #2
	bl func_02061fb4
	ldr r0, [r10, #0x5cc]
	cmp r0, #0
	beq lbl_02045548
	ldr r1, =data_0210d180
	ldr r4, =data_0210d168
	ldr r3, [r1, #8]
	ldr r0, [r4, #8]
	ldr r2, [r1]
	ldr r1, [r4]
	sub r0, r3, r0
	sub r1, r2, r1
	bl func_020634c4
	add r0, r0, #0x8000
	mov r1, r0, lsl #0x10
	add r0, sp, #0xf0
	mov r4, r1, lsr #0x10
	bl func_02061b88
	mov r0, r4, asr #4
	mov r3, r0, lsl #1
	add r0, r3, #1
	ldr r2, =data_020b638c
	mov r0, r0, lsl #1
	ldrsh r1, [r2, r0]
	mov r0, r3, lsl #1
	ldrsh r2, [r2, r0]
	add r0, sp, #0xf0
	bl func_02061c88
lbl_02045548:
	ldr r0, =data_020b61dc
	add r3, sp, #0xb4
	ldmia r0, {r0, r1, r2}
	stmia r3, {r0, r1, r2}
	add r2, sp, #0xa8
	mov r1, #0
	add r0, sp, #0x84
	str r1, [r2]
	str r1, [r2, #4]
	str r1, [r2, #8]
	bl func_02061b88
	add r0, sp, #0xb4
	bl func_0206ae30
	ldr r1, =data_0210cfe4
	add r0, sp, #0x84
	bl func_02067940
	ldr r1, =data_0210cf28
	add r0, sp, #0xa8
	ldr r2, [r1, #0xfc]
	bic r2, r2, #0xa4
	str r2, [r1, #0xfc]
	bl func_0206ae08
	bl func_0206adcc
	add r0, sp, #0x2c
	add r1, sp, #0x28
	add r2, sp, #0x24
	add r3, sp, #0x20
	bl func_0206b294
	ldr r0, [sp, #0x2c]
	ldr r3, [sp, #0x24]
	ldr r2, [sp, #0x20]
	ldr r1, [sp, #0x28]
	sub r0, r0, #1
	add r3, r3, #1
	add r2, r2, #1
	sub r1, r1, #1
	str r3, [sp, #0x24]
	str r2, [sp, #0x20]
	str r0, [sp, #0x2c]
	add r2, sp, #0x48
	add r3, sp, #0x54
	str r1, [sp, #0x28]
	bl func_0206e154
	ldr r0, [sp, #0x2c]
	ldr r1, [sp, #0x20]
	add r2, sp, #0x48
	add r3, sp, #0x60
	bl func_0206e154
	ldr r0, [sp, #0x24]
	ldr r1, [sp, #0x28]
	add r2, sp, #0x48
	add r3, sp, #0x6c
	bl func_0206e154
	ldr r0, [sp, #0x24]
	ldr r1, [sp, #0x20]
	add r2, sp, #0x48
	add r3, sp, #0x78
	bl func_0206e154
	ldr r1, =data_0210cf28
	ldr r0, =data_020f227c
	ldr r3, [r1, #0x240]
	str r3, [sp, #0x48]
	ldr r2, [r1, #0x244]
	str r2, [sp, #0x4c]
	ldr r1, [r1, #0x248]
	str r3, [r0, #8]
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	str r1, [sp, #0x50]
	add r0, sp, #0x60
	add r1, sp, #0x48
	add r2, sp, #0x3c
	bl func_02062f98
	add r0, sp, #0x54
	add r1, sp, #0x48
	add r2, sp, #0x30
	bl func_02062f98
	ldr r2, =data_020f2290
	add r0, sp, #0x3c
	add r1, sp, #0x30
	bl func_02063008
	ldr r0, =data_020f2290
	mov r1, r0
	bl func_020630ec
	add r0, sp, #0x6c
	add r1, sp, #0x48
	add r2, sp, #0x3c
	bl func_02062f98
	add r0, sp, #0x78
	add r1, sp, #0x48
	add r2, sp, #0x30
	bl func_02062f98
	ldr r2, =data_020f229c
	add r0, sp, #0x3c
	add r1, sp, #0x30
	bl func_02063008
	ldr r0, =data_020f229c
	mov r1, r0
	bl func_020630ec
	ldr r0, =data_0210cf28
	ldr r1, [r0, #0x258]
	str r1, [r10, #0x5fc]
	ldr r1, [r0, #0x25c]
	str r1, [r10, #0x600]
	ldr r0, [r0, #0x260]
	str r0, [r10, #0x604]
	ldr r0, [r10, #0x5d0]
	cmp r0, #0
	bne lbl_020457cc
	ldr r0, [sp, #0xc]
	ldr r2, [r10, #0x2a8]
	ldr r4, [r0, #0x18]
	smull r1, r0, r2, r2
	adds r1, r1, #0x800
	adc r0, r0, #0
	mov r9, r1, lsr #0xc
	cmp r4, r6
	orr r9, r9, r0, lsl #20
	beq lbl_0204599c
	ldr r0, [sp, #0xc]
	add r11, r0, #0x20
	mvn r0, #0
	str r0, [sp, #0x14]
lbl_02045734:
	ldr r0, [r4]
	ldrsh r1, [r0]
	ldr r0, [sp, #0x14]
	cmp r1, r0
	beq lbl_020457bc
	mov r0, #0x50
	smlabb r8, r1, r0, r11
	ldr r7, [r8, #0x30]
	tst r7, #0x1000000
	bne lbl_020457bc
	ldr r0, [r8, #0x38]
	ldr r0, [r0, #0x4c]
	cmp r0, #0
	beq lbl_02045778
	mov r0, r8
	mov r1, #0
	bl func_02042ec8
lbl_02045778:
	ldr r0, [r10]
	tst r0, #4
	bne lbl_02045790
	mov r0, r10
	mov r1, r8
	bl func_020445f4
lbl_02045790:
	tst r7, #0x2000000
	bne lbl_020457bc
	ldr r0, [r8, #0x38]
	mov r1, r9
	bl func_02045104
	cmp r0, #0
	ldr r0, [r8, #0x30]
	bicne r0, r0, #0x20000
	strne r0, [r8, #0x30]
	orreq r0, r0, #0x20000
	streq r0, [r8, #0x30]
lbl_020457bc:
	add r4, r4, #4
	cmp r4, r6
	bne lbl_02045734
	b lbl_0204599c
lbl_020457cc:
	cmp r0, #1
	bne lbl_020458c0
	ldr r3, =0x04000440
	mov r0, #3
	str r0, [r3]
	mov r2, #0
	str r2, [r3, #0x14]
	mov r0, #2
	str r0, [r3]
	ldr r1, =0x000030C1
	ldr r0, [sp, #0xc]
	str r1, [r3, #0x64]
	str r2, [r3, #0xc0]
	str r2, [r3, #0xc4]
	ldr r8, [r0, #0x18]
	cmp r8, r6
	beq lbl_0204599c
	add r4, r0, #0x20
	rsb r11, r1, #0x30c0
lbl_02045818:
	ldr r0, [r8]
	ldrsh r1, [r0]
	cmp r1, r11
	beq lbl_020458b0
	mov r0, #0x50
	smlabb r7, r1, r0, r4
	ldr r9, [r7, #0x30]
	tst r9, #0x1000000
	bne lbl_020458b0
	ldr r0, [r7, #0x38]
	ldr r0, [r0, #0x4c]
	cmp r0, #0
	beq lbl_02045858
	mov r0, r7
	mov r1, #0
	bl func_02042ec8
lbl_02045858:
	ldr r0, [r10]
	tst r0, #4
	bne lbl_02045870
	mov r0, r10
	mov r1, r7
	bl func_020445f4
lbl_02045870:
	tst r9, #0x2000000
	bne lbl_020458b0
	ldr r3, [r7, #0x38]
	ldr r1, [r3, #0x98]
	add r0, r3, #0x24
	str r1, [sp]
	add r1, r3, #0x3c
	add r2, r3, #0x30
	add r3, r3, #0x8c
	bl func_02045204
	cmp r0, #0
	ldr r0, [r7, #0x30]
	bicne r0, r0, #0x20000
	strne r0, [r7, #0x30]
	orreq r0, r0, #0x20000
	streq r0, [r7, #0x30]
lbl_020458b0:
	add r8, r8, #4
	cmp r8, r6
	bne lbl_02045818
	b lbl_0204599c
lbl_020458c0:
	cmp r0, #2
	bne lbl_0204599c
	ldr r0, [r10, #0x608]
	cmp r0, #1
	moveq r0, #0x79000
	streq r0, [r10, #0x5f8]
	beq lbl_020458f4
	mov r0, #0xe1000
	str r0, [r10, #0x5f8]
	ldr r0, [r10, #0x600]
	sub r0, r0, #0x59
	sub r0, r0, #0x5600
	str r0, [r10, #0x600]
lbl_020458f4:
	ldr r0, [sp, #0xc]
	ldr r8, [r0, #0x18]
	cmp r8, r6
	beq lbl_0204599c
	add r4, r0, #0x20
	mvn r11, #0
lbl_0204590c:
	ldr r0, [r8]
	ldrsh r1, [r0]
	cmp r1, r11
	beq lbl_02045990
	mov r0, #0x50
	smlabb r7, r1, r0, r4
	ldr r9, [r7, #0x30]
	tst r9, #0x1000000
	bne lbl_02045990
	ldr r0, [r7, #0x38]
	ldr r0, [r0, #0x4c]
	cmp r0, #0
	beq lbl_0204594c
	mov r0, r7
	mov r1, #0
	bl func_02042ec8
lbl_0204594c:
	ldr r0, [r10]
	tst r0, #4
	bne lbl_02045964
	mov r0, r10
	mov r1, r7
	bl func_020445f4
lbl_02045964:
	tst r9, #0x2000000
	bne lbl_02045990
	ldr r1, [r7, #0x38]
	mov r0, r10
	bl func_02047360
	cmp r0, #0
	ldr r0, [r7, #0x30]
	bicne r0, r0, #0x20000
	strne r0, [r7, #0x30]
	orreq r0, r0, #0x20000
	streq r0, [r7, #0x30]
lbl_02045990:
	add r8, r8, #4
	cmp r8, r6
	bne lbl_0204590c
lbl_0204599c:
	ldr r0, [sp, #0xc]
	ldr r11, [r0, #0x18]
	mov r0, #0
	str r0, [sp, #8]
	cmp r11, r6
	beq lbl_02045bc8
	ldr r0, [sp, #0xc]
	ldr r4, =data_020c3f5c
	add r0, r0, #0x20
	str r0, [sp, #0x10]
	mvn r0, #0
	str r0, [sp, #0x18]
lbl_020459cc:
	ldr r0, [r11]
	ldrsh r2, [r0]
	ldr r0, [sp, #0x18]
	cmp r2, r0
	beq lbl_02045bbc
	ldr r0, [sp, #0x10]
	mov r1, #0x50
	smlabb r7, r2, r1, r0
	ldr r9, [r7, #0x30]
	ldr r8, [r7, #0x3c]
	tst r9, #0x3000000
	bne lbl_02045bbc
	tst r9, #0x20000
	bne lbl_02045bbc
	tst r9, #0x300000
	beq lbl_02045a3c
	ldr r0, [r10, #0x2a0]
	cmp r0, #0
	bne lbl_02045a28
	ldr r1, [r7, #0x38]
	mov r0, #0x1f
	str r0, [r1, #0x50]
	b lbl_02045a3c
lbl_02045a28:
	mov r0, r7
	mov r1, r8
	bl func_02045360
	ldr r1, [r7, #0x38]
	str r0, [r1, #0x50]
lbl_02045a3c:
	ldr r0, [r7, #0x38]
	ldr r2, [r0, #0x50]
	cmp r2, #0x1f
	beq lbl_02045a6c
	tst r9, #0x4000000
	bne lbl_02045a6c
	mov r0, #1
	str r0, [sp, #8]
	ldr r0, [r7, #0x30]
	orr r0, r0, #0x8000000
	str r0, [r7, #0x30]
	b lbl_02045bbc
lbl_02045a6c:
	ldr r1, [r8, #0xc]
	and r0, r1, #0x1f
	cmp r0, r2
	beq lbl_02045aa8
	bic r0, r1, #0x1f
	orr r0, r0, r2
	str r0, [r8, #0xc]
	ldr r1, [r7, #0x38]
	ldr r3, [r10, #0x5e4]
	ldr r0, [r1, #0x48]
	ldr r1, [r1, #0x50]
	ldr r0, [r0, #4]
	ldrsh r2, [r7, #0x1c]
	ldr r2, [r3, r2, lsl #2]
	bl func_020453fc
lbl_02045aa8:
	tst r9, #0x24
	bne lbl_02045acc
	cmp r5, #0
	beq lbl_02045acc
	ldr r0, =func_0204533c
	mov r5, #0
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045b28
lbl_02045acc:
	tst r9, #4
	cmpne r5, #4
	beq lbl_02045b0c
	ldr r0, [r10, #0x5cc]
	cmp r0, #0
	beq lbl_02045af8
	ldr r0, =func_0204533c
	mov r5, #0
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045b28
lbl_02045af8:
	ldr r0, =func_0206ca10
	mov r5, #4
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045b28
lbl_02045b0c:
	tst r9, #0x20
	cmpne r5, #0x20
	beq lbl_02045b28
	ldr r0, =func_0206c708
	mov r5, #0x20
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
lbl_02045b28:
	ldr r0, [r10]
	tst r0, #4
	bne lbl_02045b40
	mov r0, r10
	mov r1, r7
	bl func_020447fc
lbl_02045b40:
	ldr r1, =data_0210cf74
	mov r0, #0x17
	mov r2, #0xc
	bl func_0206de34
	ldr r1, [r7, #0x38]
	mov r0, #0x1c
	mov r2, #3
	add r1, r1, #0x24
	bl func_0206de34
	ldr r0, [r10, #0x5cc]
	cmp r0, #1
	bne lbl_02045b8c
	tst r9, #4
	beq lbl_02045b8c
	mov r0, #0x1a
	add r1, sp, #0xf0
	mov r2, #9
	bl func_0206de34
	b lbl_02045b9c
lbl_02045b8c:
	ldr r1, [r7, #0x38]
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
lbl_02045b9c:
	ldr r1, [r7, #0x38]
	mov r0, #0x1b
	mov r2, #3
	add r1, r1, #0x30
	bl func_0206de34
	ldr r0, [r7, #0x38]
	ldr r0, [r0, #0x48]
	bl func_0206b94c
lbl_02045bbc:
	add r11, r11, #4
	cmp r11, r6
	bne lbl_020459cc
lbl_02045bc8:
	ldr r0, [sp, #8]
	cmp r0, #0
	ldrne r0, [sp, #0xc]
	ldrne r8, [r0, #0x18]
	cmpne r8, r6
	beq lbl_02045d88
	add r11, r0, #0x20
	mvn r0, #0
	ldr r4, =data_020c3f5c
	str r0, [sp, #0x1c]
lbl_02045bf0:
	ldr r0, [r8]
	ldrsh r1, [r0]
	ldr r0, [sp, #0x1c]
	cmp r1, r0
	beq lbl_02045d7c
	mov r0, #0x50
	smlabb r7, r1, r0, r11
	ldr r9, [r7, #0x30]
	ldr r0, [r7, #0x3c]
	tst r9, #0x8000000
	beq lbl_02045d7c
	bic r1, r9, #0x8000000
	str r1, [r7, #0x30]
	ldr r1, [r7, #0x38]
	ldr r2, [r0, #0xc]
	ldr r3, [r1, #0x50]
	and r1, r2, #0x1f
	cmp r1, r3
	beq lbl_02045c68
	bic r1, r2, #0x1f
	orr r1, r1, r3
	str r1, [r0, #0xc]
	ldr r1, [r7, #0x38]
	ldr r3, [r10, #0x5e4]
	ldr r0, [r1, #0x48]
	ldr r1, [r1, #0x50]
	ldr r0, [r0, #4]
	ldrsh r2, [r7, #0x1c]
	ldr r2, [r3, r2, lsl #2]
	bl func_020453fc
lbl_02045c68:
	tst r9, #0x24
	bne lbl_02045c8c
	cmp r5, #0
	beq lbl_02045c8c
	ldr r0, =func_0204533c
	mov r5, #0
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045ce8
lbl_02045c8c:
	tst r9, #4
	cmpne r5, #4
	beq lbl_02045ccc
	ldr r0, [r10, #0x5cc]
	cmp r0, #0
	beq lbl_02045cb8
	ldr r0, =func_0204533c
	mov r5, #0
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045ce8
lbl_02045cb8:
	ldr r0, =func_0206ca10
	mov r5, #4
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
	b lbl_02045ce8
lbl_02045ccc:
	tst r9, #0x20
	cmpne r5, #0x20
	beq lbl_02045ce8
	ldr r0, =func_0206c708
	mov r5, #0x20
	str r0, [r4, #0x1c]
	str r0, [r4, #0x20]
lbl_02045ce8:
	ldr r0, [r10]
	tst r0, #4
	bne lbl_02045d00
	mov r0, r10
	mov r1, r7
	bl func_020447fc
lbl_02045d00:
	ldr r1, =data_0210cf74
	mov r0, #0x17
	mov r2, #0xc
	bl func_0206de34
	ldr r1, [r7, #0x38]
	mov r0, #0x1c
	mov r2, #3
	add r1, r1, #0x24
	bl func_0206de34
	ldr r0, [r10, #0x5cc]
	cmp r0, #1
	bne lbl_02045d4c
	tst r9, #4
	beq lbl_02045d4c
	mov r0, #0x1a
	add r1, sp, #0xf0
	mov r2, #9
	bl func_0206de34
	b lbl_02045d5c
lbl_02045d4c:
	ldr r1, [r7, #0x38]
	mov r0, #0x1a
	mov r2, #9
	bl func_0206de34
lbl_02045d5c:
	ldr r1, [r7, #0x38]
	mov r0, #0x1b
	mov r2, #3
	add r1, r1, #0x30
	bl func_0206de34
	ldr r0, [r7, #0x38]
	ldr r0, [r0, #0x48]
	bl func_0206b94c
lbl_02045d7c:
	add r8, r8, #4
	cmp r8, r6
	bne lbl_02045bf0
lbl_02045d88:
	bl func_0206dcf0
	add r5, sp, #0xc0
	ldr r4, [sp, #4]
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	str r4, [sp, #4]
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	ldr r6, =func_0206c708
	ldr r0, =data_020c3f5c
	ldr r1, =func_0206ca10
	str r6, [r0, #0x1c]
	str r1, [r0, #0x20]
	ldmia r5, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	str r4, [sp, #4]
	add sp, sp, #0x114
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02045e10(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r5, r0
	ldr r0, [r5]
	ldr r6, [r5, #0xc]
	tst r0, #1
	ldmeqia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r0, [r6, #0xc]
	mov r7, #0
	cmp r0, #0
	ble lbl_02045e7c
	mov r8, r6
	mov r4, r7
lbl_02045e40:
	ldr r0, [r8, #0x58]
	cmp r0, #0
	beq lbl_02045e68
	ldr r1, [r0, #0x48]
	add r0, r5, #0x238
	bl func_0206e3e8
	ldr r1, [r8, #0x58]
	add r0, r5, #0x238
	bl func_02068a30
	str r4, [r8, #0x58]
lbl_02045e68:
	ldr r0, [r6, #0xc]
	add r7, r7, #1
	cmp r7, r0
	add r8, r8, #0x50
	blt lbl_02045e40
lbl_02045e7c:
	ldr r4, [r5, #0x230]
	cmp r4, #0
	beq lbl_02045ec4
	ldr r0, [r4, #8]
	mov r6, #0
	cmp r0, #0
	ble lbl_02045ec4
lbl_02045e98:
	add r0, r4, r6, lsl #2
	ldr r0, [r0, #0xc]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_02045eb4
	add r0, r5, #0x238
	bl func_02068a30
lbl_02045eb4:
	ldr r0, [r4, #8]
	add r6, r6, #1
	cmp r6, r0
	blt lbl_02045e98
lbl_02045ec4:
	bl func_0206dcd0
	ldr r0, [r5, #0x248]
	cmp r0, #0
	ldrne r1, [r0, #0x28]
	cmpne r1, #0
	beq lbl_02045ee4
	add r0, r5, #0x238
	bl func_02068a30
lbl_02045ee4:
	ldr r1, [r5, #0x5e0]
	add r0, r5, #0x238
	bl func_02068a30
	ldr r0, [r5, #0x5e4]
	cmp r0, #0
	beq lbl_02045f50
	ldr r0, [r5, #0x10]
	mov r4, #0
	ldr r0, [r0, #8]
	cmp r0, #0
	ble lbl_02045f44
	mov r6, r4
lbl_02045f14:
	ldr r0, [r5, #0x5e4]
	ldr r1, [r0, r6]
	cmp r1, #0
	beq lbl_02045f2c
	add r0, r5, #0x238
	bl func_02068a30
lbl_02045f2c:
	ldr r0, [r5, #0x10]
	add r4, r4, #1
	ldr r0, [r0, #8]
	add r6, r6, #4
	cmp r4, r0
	blt lbl_02045f14
lbl_02045f44:
	ldr r1, [r5, #0x5e4]
	add r0, r5, #0x238
	bl func_02068a30
lbl_02045f50:
	ldr r1, [r5]
	mov r0, r5
	bic r1, r1, #1
	str r1, [r5]
	bl func_020421ec
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02045f68(void)
{
	stmdb sp!, {r3, lr}
	cmp r2, #0
	ldmltia sp!, {r3, pc}
	cmp r2, #0x1f
	ldmgtia sp!, {r3, pc}
	cmp r1, #0
	ldmltia sp!, {r3, pc}
	ldr lr, [r0, #0xc]
	ldr r0, [lr, #0xc]
	cmp r1, r0
	ldmgeia sp!, {r3, pc}
	ldr r12, [lr, #0x14]
	mov r0, r1, lsl #1
	ldrsh r12, [r12, r0]
	cmp r12, #0
	ldmltia sp!, {r3, pc}
	add r1, lr, #0x20
	mov r0, #0x50
	smlabb r1, r12, r0, r1
	ldr r0, [r1, #0x38]
	cmp r3, #0
	str r2, [r0, #0x50]
	ldrne r0, [r1, #0x30]
	orrne r0, r0, #0x4000000
	strne r0, [r1, #0x30]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02045fd0(void)
{
	cmp r1, #0
	bxlt lr
	ldr r12, [r0, #0xc]
	ldr r0, [r12, #0xc]
	cmp r1, r0
	bxge lr
	ldr r3, [r12, #0x14]
	mov r0, r1, lsl #1
	ldrsh r1, [r3, r0]
	cmp r1, #0
	bxlt lr
	mov r0, #0x50
	cmp r2, #0
	smulbb r1, r1, r0
	bne lbl_02046020
	add r2, r12, #0x50
	ldr r0, [r2, r1]
	bic r0, r0, #0x2000000
	str r0, [r2, r1]
	bx lr
lbl_02046020:
	add r2, r12, #0x50
	ldr r0, [r2, r1]
	orr r0, r0, #0x2000000
	str r0, [r2, r1]
	bx lr
}

extern "C" asm void func_02046034(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r2
	bl func_02046dc8
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4]
	str r1, [r0]
	ldr r1, [r4, #4]
	str r1, [r0, #4]
	ldr r1, [r4, #8]
	str r1, [r0, #8]
	ldr r1, [r0, #0x38]
	ldr r0, [r1, #0x4c]
	orr r0, r0, #1
	str r0, [r1, #0x4c]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02046074(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r2
	bl func_02046dc8
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r1, [r4]
	str r1, [r0, #0x10]
	ldr r1, [r4, #4]
	str r1, [r0, #0x14]
	ldr r1, [r4, #8]
	str r1, [r0, #0x18]
	ldr r1, [r0, #0x10]
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	str r1, [r0, #0x10]
	ldr r1, [r0, #0x14]
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	str r1, [r0, #0x14]
	ldr r1, [r0, #0x18]
	mov r1, r1, lsl #0x10
	mov r1, r1, lsr #0x10
	str r1, [r0, #0x18]
	ldr r1, [r0, #0x38]
	ldr r0, [r1, #0x4c]
	orr r0, r0, #4
	str r0, [r1, #0x4c]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020460e4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r2
	bl func_02046dc8
	movs r4, r0
	ldmeqia sp!, {r3, r4, r5, pc}
	mov r1, r5
	mov r2, r4
	bl func_02062f64
	ldr r1, [r4, #0x38]
	ldr r0, [r1, #0x4c]
	orr r0, r0, #1
	str r0, [r1, #0x4c]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02046118(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r8, r0
	ldr r0, [r8, #0xc]
	mov r7, r1
	ldr r1, [r0, #0xc]
	mov r6, r2
	mov r5, r3
	mov r4, #0
	cmp r1, #0
	ldmleia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
	mov r9, #0x50
lbl_02046144:
	ldr r2, [r0, #0x14]
	mov r1, r4, lsl #1
	ldrsh r1, [r2, r1]
	cmp r1, #0
	blt lbl_0204617c
	smlabb r0, r1, r9, r0
	ldr r0, [r0, #0x4c]
	cmp r7, r0
	bne lbl_0204617c
	mov r0, r8
	mov r1, r4
	mov r2, r6
	mov r3, r5
	bl func_02045f68
lbl_0204617c:
	ldr r0, [r8, #0xc]
	add r4, r4, #1
	ldr r1, [r0, #0xc]
	cmp r4, r1
	blt lbl_02046144
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02046194(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r7, r0
	ldr r3, [r7, #0xc]
	mov r6, r1
	ldr r0, [r3, #0xc]
	mov r5, r2
	mov r4, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, pc}
	mov r8, #0x50
lbl_020461bc:
	ldr r1, [r3, #0x14]
	mov r0, r4, lsl #1
	ldrsh r0, [r1, r0]
	cmp r0, #0
	blt lbl_020461f0
	smlabb r0, r0, r8, r3
	ldr r0, [r0, #0x4c]
	cmp r6, r0
	bne lbl_020461f0
	mov r0, r7
	mov r1, r4
	mov r2, r5
	bl func_02045fd0
lbl_020461f0:
	ldr r3, [r7, #0xc]
	add r4, r4, #1
	ldr r0, [r3, #0xc]
	cmp r4, r0
	blt lbl_020461bc
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02046208(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r7, r0
	ldr r3, [r7, #0xc]
	mov r6, r1
	ldr r0, [r3, #0xc]
	mov r5, r2
	mov r4, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, pc}
	mov r8, #0x50
lbl_02046230:
	ldr r1, [r3, #0x14]
	mov r0, r4, lsl #1
	ldrsh r0, [r1, r0]
	cmp r0, #0
	blt lbl_02046264
	smlabb r0, r0, r8, r3
	ldr r0, [r0, #0x4c]
	cmp r6, r0
	bne lbl_02046264
	mov r0, r7
	mov r1, r4
	mov r2, r5
	bl func_02046034
lbl_02046264:
	ldr r3, [r7, #0xc]
	add r4, r4, #1
	ldr r0, [r3, #0xc]
	cmp r4, r0
	blt lbl_02046230
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0204627c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r7, r0
	ldr r3, [r7, #0xc]
	mov r6, r1
	ldr r0, [r3, #0xc]
	mov r5, r2
	mov r4, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, pc}
	mov r8, #0x50
lbl_020462a4:
	ldr r1, [r3, #0x14]
	mov r0, r4, lsl #1
	ldrsh r0, [r1, r0]
	cmp r0, #0
	blt lbl_020462d8
	smlabb r0, r0, r8, r3
	ldr r0, [r0, #0x4c]
	cmp r6, r0
	bne lbl_020462d8
	mov r0, r7
	mov r1, r4
	mov r2, r5
	bl func_02046074
lbl_020462d8:
	ldr r3, [r7, #0xc]
	add r4, r4, #1
	ldr r0, [r3, #0xc]
	cmp r4, r0
	blt lbl_020462a4
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_020462f0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	mov r7, r0
	ldr r3, [r7, #0xc]
	mov r6, r1
	ldr r0, [r3, #0xc]
	mov r5, r2
	mov r4, #0
	cmp r0, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, pc}
	mov r8, #0x50
lbl_02046318:
	ldr r1, [r3, #0x14]
	mov r0, r4, lsl #1
	ldrsh r0, [r1, r0]
	cmp r0, #0
	blt lbl_0204634c
	smlabb r0, r0, r8, r3
	ldr r0, [r0, #0x4c]
	cmp r6, r0
	bne lbl_0204634c
	mov r0, r7
	mov r1, r4
	mov r2, r5
	bl func_020460e4
lbl_0204634c:
	ldr r3, [r7, #0xc]
	add r4, r4, #1
	ldr r0, [r3, #0xc]
	cmp r4, r0
	blt lbl_02046318
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02046364(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldr r7, [r0, #0x248]
	cmp r7, #0
	mvneq r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	ldr r4, [r7, #0x28]
	ldrh r5, [r7]
	ldr r0, [r4, #4]
	cmp r2, #0
	movlt r2, #0
	add r6, r5, r0
	cmp r2, r6
	bge lbl_020463dc
	mov r0, #0x60
	mul lr, r2, r0
lbl_020463a0:
	cmp r2, r5
	ldrlt r3, [r7, #0x24]
	addlt r3, r3, lr
	ldrlth r3, [r3, #0x5c]
	blt lbl_020463c0
	sub r12, r2, r5
	mla r3, r12, r0, r4
	ldrh r3, [r3, #0x64]
lbl_020463c0:
	cmp r3, r1
	moveq r0, r2
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	add r2, r2, #1
	cmp r2, r6
	add lr, lr, #0x60
	blt lbl_020463a0
lbl_020463dc:
	mvn r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

#pragma thumb on
