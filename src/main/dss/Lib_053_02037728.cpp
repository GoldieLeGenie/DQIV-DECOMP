/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_02037728(void);
    void func_02037a3c(void);
    void func_02037be4(void);
    void _ZN3cmn9PartyTalk12getSingletonEv(void);
    void _ZN3cmn9PartyTalk19setPartyTalkMessageEv(void);
    void _ZN6status11PartyStatus12getSortIndexEi(void);
    void _ZN6status11PartyStatus13setNormalModeEv(void);
    void _ZN6status11PartyStatus14getPlayerIndexEi(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus16isInsideCarriageEi(void);
    void _ZN6status11PartyStatus17isOutsideCarriageEi(void);
    void _ZN6status11PartyStatus19getCarriageOutCountEv(void);
    void _ZN6status11PartyStatus8getCountEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status7g_StoryE(void);
    void _ZN7dssrand4randEi(void);
    void data_020b6114(void);
    void data_020ed1bc(void);
    void data_020efcc0(void);
    void data_0210bb94(void);
    void data_02187c60(void);
    void func_020259a8(void);
    void func_02025a34(void);
    void func_02025b08(void);
    void func_02037db4(void);
    void func_020399fc(void);
    void func_02052408(void);
    void func_0205241c(void);
    void func_02054364(void);
    void func_02056358(void);
    void func_02058114(void);
    void func_02139668(void);
    void func_0213a998(void);
    void g_HengeNoTsue(void);
}

#pragma thumb on
extern "C" asm void func_02037728(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x44
	str r0, [sp]
	ldr r0, [pc, #0x2e0]
	dcd 0xFC0AF7D7
	dcd 0xFEAEF7FF
	dcd 0xFEF2F7FF
	mov r4, #0
	sub r0, r4, #1
	str r0, [sp, #0x10]
	ldr r0, [pc, #0x2cc]
	str r4, [sp, #0xc]
	dcd 0xFF59F7D7
	str r0, [sp, #8]
	dcd 0xFEA2F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r7, [r0, #8]
	dcd 0xFE99F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x1c]
	ldr r3, [pc, #0x2a0]
	str r0, [sp, #4]
	add r2, sp, #0x14
	mov r5, #6
lbl_02037778:
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	sub r5, r5, #1
	bne lbl_02037778
	mov r1, #0
	add r2, sp, #0x14
	sub r0, r1, #1
lbl_02037786:
	add r1, r1, #1
	stmia r2!, {r0}
	cmp r1, #0xc
	blt lbl_02037786
	ldr r0, [pc, #0x288]
	ldr r1, [r0, #4]
	cmp r1, #6
	bhi lbl_02037812
	add r1, r1
	add r1, pc
	ldrh r1, [r1, #6]
	lsl r1, r1, #0x10
	asr r1, r1, #0x10
	add pc, r1
	mov r4, r1
	mov r2, r6
	mov r0, r7
	mov r6, r7
	lsl r4, r0, #1
	lsl r2, r1, #1
	lsl r2, r1, #1
	ldr r0, [r0, #8]
	cmp r0, #0
	bne lbl_020377c6
	mov r0, #1
	str r0, [sp, #0xc]
	ldr r0, [pc, #0x254]
	ldr r1, [sp, #0xc]
	dcd 0xFB1BF7D7
	str r0, [sp, #0x10]
	b lbl_02037812
lbl_020377c6:
	mov r0, #2
	str r0, [sp, #0xc]
	ldr r0, [pc, #0x244]
	ldr r1, [sp, #0xc]
	dcd 0xFB13F7D7
	str r0, [sp, #0x10]
	b lbl_02037812
	mov r0, #3
	str r0, [sp, #0xc]
	b lbl_02037812
	mov r0, #4
	str r0, [sp, #0xc]
	b lbl_02037812
	mov r0, #7
	str r0, [sp, #0xc]
	b lbl_02037812
	mov r0, #9
	str r0, [sp, #0xc]
	b lbl_02037812
	ldr r0, [r0, #8]
	cmp r0, #0
	bne lbl_02037804
	mov r0, #1
	str r0, [sp, #0xc]
	ldr r0, [pc, #0x214]
	ldr r1, [sp, #0xc]
	dcd 0xFAFCF7D7
	str r0, [sp, #0x10]
	b lbl_02037812
lbl_02037804:
	mov r0, #2
	str r0, [sp, #0xc]
	ldr r0, [pc, #0x204]
	ldr r1, [sp, #0xc]
	dcd 0xFAF4F7D7
	str r0, [sp, #0x10]
lbl_02037812:
	ldr r0, [sp, #8]
	mov r5, #0
	cmp r0, #0
	ble lbl_0203787c
	ldr r6, [pc, #0x1f4]
lbl_0203781c:
	add r0, r6, #0
	add r1, r5, #0
	dcd 0xFA98F7D7
	cmp r0, #1
	bne lbl_02037852
	add r0, r6, #0
	add r1, r5, #0
	dcd 0xFA58F7D7
	ldr r1, [sp, #0xc]
	cmp r1, r0
	beq lbl_02037874
	add r0, r6, #0
	add r1, r5, #0
	dcd 0xFA57F7D7
	add r0, #8
	dcd 0xFA7EF7DB
	cmp r0, #0
	bne lbl_02037874
	lsl r1, r4, #2
	add r0, sp, #0x14
	str r5, [r0, r1]
	add r4, r4, #1
	b lbl_02037874
lbl_02037852:
	add r0, r6, #0
	add r1, r5, #0
	dcd 0xFA49F7D7
	mov r1, #0x5d
	ldrsb r0, [r0, r1]
	cmp r0, #0
	beq lbl_02037866
	mov r0, #1
	b lbl_02037868
lbl_02037866:
	mov r0, #0
lbl_02037868:
	cmp r0, #1
	bne lbl_02037874
	lsl r1, r4, #2
	add r0, sp, #0x14
	str r5, [r0, r1]
	add r4, r4, #1
lbl_02037874:
	ldr r0, [sp, #8]
	add r5, r5, #1
	cmp r5, r0
	blt lbl_0203781c
lbl_0203787c:
	ldr r0, [pc, #0x19c]
	mov r1, #0xc
	dcd 0xEC48F020
	cmp r0, #1
	bne lbl_020378b4
	dcd 0xEEEEF101
	dcd 0xE884F103
	cmp r0, #1
	bne lbl_020378b4
	ldr r0, [pc, #0x178]
	dcd 0xFEB1F7D7
	sub r5, r0, #1
	ldr r0, [pc, #0x170]
	add r1, r5, #0
	dcd 0xFA24F7D7
	add r0, #0x4c
	ldrh r0, [r0]
	cmp r0, #0x18
	bne lbl_020378b4
	lsl r1, r4, #2
	add r0, sp, #0x14
	str r5, [r0, r1]
	add r4, r4, #1
lbl_020378b4:
	ldr r0, [sp]
	mov r1, #2
	strb r1, [r0, #0x1c]
	cmp r4, #0
	bne lbl_020378c2
	mov r6, #0
	b lbl_020378ca
lbl_020378c2:
	add r0, r4, #0
	dcd 0xEA40F049
	add r6, r0, #0
lbl_020378ca:
	cmp r7, #0
	bne lbl_020378d6
	ldr r0, [sp, #4]
	cmp r0, #0
	bne lbl_020378d6
	b lbl_020379fe
lbl_020378d6:
	ldr r0, [pc, #0x138]
	mov r4, #0
	dcd 0xFE8FF7D7
	cmp r0, #1
	ble lbl_02037904
	lsl r1, r6, #2
	add r0, sp, #0x14
	ldr r1, [r0, r1]
	sub r0, r4, #1
	cmp r1, r0
	beq lbl_02037904
	ldr r0, [pc, #0x120]
	dcd 0xF9FCF7D7
	add r2, r0, #0
	add r2, #0x4c
	mov r1, #5
	ldrh r2, [r2]
	mov r0, #1
	lsl r1, r1, #0x1c
	dcd 0xFD30F01C
lbl_02037904:
	ldr r0, [sp]
	ldr r1, [sp, #0x10]
	dcd 0xF96CF000
	ldr r0, [sp, #4]
	cmp r0, #0
	beq lbl_02037956
	ldr r0, [pc, #0xfc]
	ldr r1, [sp, #4]
	dcd 0xFA6FF7D7
	add r5, r0, #0
	mov r0, #0
	mvn r0, r0
	cmp r5, r0
	beq lbl_02037956
	ldr r0, [pc, #0xe8]
	add r1, r5, #0
	dcd 0xF9E0F7D7
	add r0, #8
	dcd 0xFA07F7DB
	cmp r0, #0
	bne lbl_02037956
	ldr r0, [pc, #0xd8]
	add r1, r5, #0
	dcd 0xFA0BF7D7
	cmp r0, #1
	bne lbl_02037956
	dcd 0xFDA7F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x20]
	add r7, r0
lbl_02037956:
	dcd 0xFD9DF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r5, [r0, #0xc]
	mov r0, #0x39
	dcd 0xFCF5F01E
	ldr r0, [pc, #0xb0]
	cmp r5, r0
	bne lbl_02037990
	lsl r2, r6, #2
	add r1, sp, #0x14
	ldr r0, [pc, #0x94]
	ldr r1, [r1, r2]
	dcd 0xF9B6F7D7
	add r1, r0, #0
	add r1, #0x4e
	ldrb r1, [r1]
	ldr r0, [pc, #0x9c]
	dcd 0xE838F002
	dcd 0xFCE4F01E
lbl_02037990:
	ldr r1, [pc, #0x94]
	cmp r5, r1
	beq lbl_020379be
	add r0, r1, #0
	sub r0, #0x5b
	cmp r5, r0
	beq lbl_020379be
	sub r1, #0x59
	cmp r5, r1
	beq lbl_020379be
	ldr r0, [pc, #0x84]
	cmp r5, r0
	beq lbl_020379be
	ldr r1, [pc, #0x84]
	ldr r0, [r1, #0xc]
	cmp r0, #1
lbl_020379b0:
	bne lbl_020379be
	ldr r0, [pc, #0x70]
	ldr r1, [r1, #4]
	dcd 0xE822F002
	dcd 0xFCCDF01E
lbl_020379be:
	ldr r0, [pc, #0x74]
	dcd 0xFFF2F7ED
	cmp r7, #0
	ble lbl_020379d8
	ldr r6, [pc, #0x68]
lbl_020379ca:
	add r0, r6, #0
	add r1, r5, r4
	dcd 0xF831F7EE
	add r4, r4, #1
	cmp r4, r7
	blt lbl_020379ca
lbl_020379d8:
	dcd 0xFD5CF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x10]
	cmp r0, #0
	beq lbl_02037a0a
	ldr r0, [pc, #0x44]
	dcd 0xF88AF7EE
	ldr r0, [sp]
	mov r1, #1
	strb r1, [r0, #0x1c]
	add sp, #0x44
	pop {r4, r5, r6, r7, pc}
lbl_020379fe:
	ldr r0, [sp]
	dcd 0xFD02F01A
	ldr r0, [pc, #0x30]
	mov r1, #1
	str r1, [r0, #0xc]
lbl_02037a0a:
	add sp, #0x44
	pop {r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020C7B1C
	dcd 0x020B6114
	dcd 0x020EE1CC
	dcd 0x0210BB94
	dcd 0x000C3DDB
	dcd 0x020EFCC0
	dcd 0x000C3DF2
	dcd 0x00080092
	dcd 0x020EFC6C
	dcd 0x020ED1BC
	dcd 0x02187C60
}

extern "C" asm void func_02037a3c(void)
{
	push {r3, r4, r5, r6, r7, lr}
	str r0, [sp]
	ldr r0, [pc, #0x198]
	dcd 0xFCEBF01A
	cmp r0, #0
	beq lbl_02037ab8
	ldr r0, [pc, #0x190]
	mov r4, #0
	ldr r1, [r0, #0xc]
	cmp r1, #1
	bne lbl_02037ade
	dcd 0xFCD8F01A
	ldr r0, [sp]
	mov r1, #0x1c
	ldrsb r0, [r0, r1]
	cmp r0, #2
	bne lbl_02037a70
	ldr r0, [sp]
	dcd 0xFCD0F01A
	ldr r0, [pc, #0x174]
	mov r1, #1
	str r1, [r0, #0xc]
	pop {r3, r4, r5, r6, r7, pc}
lbl_02037a70:
	ldr r0, [sp]
	mov r1, #2
	strb r1, [r0, #0x1c]
	dcd 0xFD0DF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r5, [r0, #8]
	dcd 0xFD04F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0xc]
	add r5, r0
	ldr r0, [pc, #0x13c]
	dcd 0xFF83F7ED
	dcd 0xFCF7F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x14]
	cmp r0, #0
	bgt lbl_02037aba
lbl_02037ab8:
	b lbl_02037bda
lbl_02037aba:
	mov r7, #0x49
	lsl r7, r7, #2
	mov r6, #0x1c
lbl_02037ac0:
	ldr r0, [pc, #0x118]
	add r1, r5, r4
	dcd 0xFFB6F7ED
	add r4, r4, #1
	dcd 0xFCE3F7FF
	ldr r1, [r0, r7]
	add r2, r1, #0
	mul r2, r6
	add r0, r2
	ldr r0, [r0, #0x14]
	cmp r4, r0
	blt lbl_02037ac0
	pop {r3, r4, r5, r6, r7, pc}
lbl_02037ade:
	cmp r1, #2
	bne lbl_02037bda
	dcd 0xFC91F01A
	ldr r0, [pc, #0xf4]
	dcd 0xFF5EF7ED
	dcd 0xFCD2F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x18]
	cmp r0, #0
	bne lbl_02037b62
	dcd 0xFCC7F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r5, [r0, #8]
	dcd 0xFCBEF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0xc]
	add r5, r0
	dcd 0xFCB4F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x14]
	cmp r0, #0
	ble lbl_02037bd4
	mov r7, #0x49
	lsl r7, r7, #2
	mov r6, #0x1c
lbl_02037b44:
	ldr r0, [pc, #0x94]
	add r1, r5, r4
	dcd 0xFF74F7ED
	add r4, r4, #1
	dcd 0xFCA1F7FF
	ldr r1, [r0, r7]
	add r2, r1, #0
	mul r2, r6
lbl_02037b58:
	add r0, r2
	ldr r0, [r0, #0x14]
	cmp r4, r0
	blt lbl_02037b44
	b lbl_02037bd4
lbl_02037b62:
	dcd 0xFC97F7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r6, [r0, #0x14]
	dcd 0xFC8EF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r5, [r0, #8]
	dcd 0xFC85F7FF
	mov r2, #0x49
	lsl r2, r2, #2
	ldr r3, [r0, r2]
	mov r2, #0x1c
	mul r2, r3
	add r0, r2
	ldr r0, [r0, #0xc]
	add r1, r5, r6
	add r5, r1, r0
	dcd 0xFC7AF7FF
	mov r1, #0x49
	lsl r1, r1, #2
	ldr r2, [r0, r1]
	mov r1, #0x1c
	mul r1, r2
	add r0, r1
	ldr r0, [r0, #0x18]
	cmp r0, #0
	ble lbl_02037bd4
	mov r7, #0x49
	lsl r7, r7, #2
	mov r6, #0x1c
lbl_02037bb8:
	ldr r0, [pc, #0x20]
	add r1, r5, r4
	dcd 0xFF3AF7ED
	add r4, r4, #1
	dcd 0xFC67F7FF
	ldr r1, [r0, r7]
	add r2, r1, #0
	mul r2, r6
	add r0, r2
	ldr r0, [r0, #0x18]
	cmp r4, r0
	blt lbl_02037bb8
lbl_02037bd4:
	ldr r0, [sp]
	mov r1, #2
	strb r1, [r0, #0x1c]
lbl_02037bda:
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020ED1BC
	dcd 0x02187C60
}

extern "C" asm void func_02037be4(void)
{
	push {r3, r4, r5, r6, r7, lr}
	mov r0, #0
	add r4, r1, #0
	mvn r0, r0
	cmp r4, r0
	beq lbl_02037c94
	ldr r0, [pc, #0xa4]
	dcd 0xF8A5F7D7
	cmp r0, #1
	beq lbl_02037c0c
	ldr r0, [pc, #0x9c]
	add r1, r4, #0
	dcd 0xF875F7D7
	add r0, #8
	dcd 0xF89CF7DB
	cmp r0, #1
	bne lbl_02037c94
lbl_02037c0c:
	ldr r0, [pc, #0x88]
	mov r4, #0
	dcd 0xFD1CF7D7
	add r5, r0, #0
	cmp r5, #0
	ble lbl_02037c34
	ldr r6, [pc, #0x7c]
lbl_02037c1c:
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xF864F7D7
	add r0, #8
	dcd 0xF88BF7DB
	cmp r0, #0
	beq lbl_02037c34
	add r4, r4, #1
	cmp r4, r5
	blt lbl_02037c1c
lbl_02037c34:
	ldr r0, [pc, #0x60]
	add r1, r4, #0
	dcd 0xF852F7D7
	cmp r0, #7
	bne lbl_02037c80
	add r4, r4, #1
	mov r7, #0
	cmp r4, r5
	bge lbl_02037c66
	ldr r6, [pc, #0x4c]
lbl_02037c4a:
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xF84DF7D7
	add r0, #8
	dcd 0xF874F7DB
	cmp r0, #0
	bne lbl_02037c60
	add r7, r4, #0
	b lbl_02037c66
lbl_02037c60:
	add r4, r4, #1
	cmp r4, r5
	blt lbl_02037c4a
lbl_02037c66:
	cmp r7, #0
	beq lbl_02037c94
	ldr r0, [pc, #0x2c]
	add r1, r7, #0
	dcd 0xF837F7D7
	mov r1, #5
	add r2, r0, #0
	mov r0, #0xe
	lsl r1, r1, #0x1c
	dcd 0xFB73F01C
	pop {r3, r4, r5, r6, r7, pc}
lbl_02037c80:
	ldr r0, [pc, #0x14]
	add r1, r4, #0
	dcd 0xF82CF7D7
	mov r1, #5
	add r2, r0, #0
	mov r0, #0xe
	lsl r1, r1, #0x1c
	dcd 0xFB68F01C
lbl_02037c94:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020C7B1C
}
