/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0202ff7c(void);
    void func_0202ffbc(void);
    void func_02030268(void);
    void pad_02030276(void);
    void func_02030278(void);
    void func_020302a0(void);
    void func_020302e0(void);
    void func_02030358(void);
    void func_02030570(void);
    void pad_0203057e(void);
    void func_02030580(void);
    void func_020305a8(void);
    void func_020305d0(void);
    void func_020305f8(void);
    void func_02030620(void);
    void func_02030770(void);
    void func_02030798(void);
    void func_02030844(void);
    void func_02030868(void);
    void func_0203088c(void);
    void func_020308c8(void);
    void func_020308f0(void);
    void func_02030918(void);
    void func_0203093c(void);
    void func_02030948(void);
    void func_02030954(void);
    void func_02030978(void);
    void func_020309e4(void);
    void func_02030a40(void);
    void func_02030aa8(void);
    void func_02030ab0(void);
    void func_02030ad8(void);
    void func_02030b48(void);
    void func_02030b70(void);
    void func_02030cb0(void);
    void func_02030d3c(void);
    void func_02030d80(void);
    void func_02030d90(void);
    void func_02030da0(void);
    void func_02030da4(void);
    void _ZN6Global10getMapNameEv(void);
    void _ZN6status10ExcelParam16getCharaInitDataEv(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status11StageStatus15setEvBtlMapNameEPc(void);
    void _ZN6status13HaveEquipment16getAbsoluteValueEi(void);
    void _ZN6status14HaveStatusInfo10getAgilityEi(void);
    void _ZN6status14HaveStatusInfo10getDefenceEi(void);
    void _ZN6status14HaveStatusInfo11getStrengthEi(void);
    void _ZN6status14HaveStatusInfo13getProtectionEi(void);
    void _ZN6status14HaveStatusInfo7getLuckEi(void);
    void _ZN6status14HaveStatusInfo8getHpMaxEv(void);
    void _ZN6status14HaveStatusInfo8getMpMaxEv(void);
    void _ZN6status14HaveStatusInfo9getAttackEi(void);
    void _ZN6status14HaveStatusInfo9getWisdomEi(void);
    void _ZN6status14g_BattleResultE(void);
    void _ZN6status16BaseActionStatus3absEi(void);
    void _ZN6status7UseItem11getItemTypeEi(void);
    void _ZN6status7g_StoryE(void);
    void _ZN6status8GameFlag5checkEj(void);
    void _ZN7dssrand4randEi(void);
    void data_020b5da0(void);
    void data_020b5db0(void);
    void data_020b5dbc(void);
    void data_020b5dc8(void);
    void data_020b5ddc(void);
    void data_020b5df0(void);
    void data_020b5e04(void);
    void data_020b5e1c(void);
    void data_020b5e34(void);
    void data_020b5e4c(void);
    void data_020b5e70(void);
    void data_020b5ed0(void);
    void data_020b638c(void);
    void data_020bebd8(void);
    void data_020bebe0(void);
    void data_020bebe8(void);
    void data_020bebf4(void);
    void data_020bec00(void);
    void data_020bec0c(void);
    void data_020bec18(void);
    void data_020bec24(void);
    void data_020bec30(void);
    void data_020bec3c(void);
    void data_020bec48(void);
    void data_020bec54(void);
    void data_020eddec(void);
    void data_020eed00(void);
    void data_020eed04(void);
    void data_0210cfa8(void);
    void data_0210cfe4(void);
    void data_02116d40(void);
    void data_0211c4f0(void);
    void data_0211e450(void);
    void func_0200bd68(void);
    void func_02023828(void);
    void func_0202ac5c(void);
    void func_0202acdc(void);
    void func_0202b0b8(void);
    void func_0202b510(void);
    void func_020332cc(void);
    void func_02033584(void);
    void func_02061b88(void);
    void func_02063204(void);
    void func_02064258(void);
    void func_020648b8(void);
    void func_020648cc(void);
    void func_02064928(void);
    void func_02064964(void);
    void func_02064978(void);
    void func_02065c60(void);
    void func_02065c9c(void);
    void func_02067940(void);
    void func_0206adcc(void);
    void func_0206ae08(void);
    void func_0206ae30(void);
    void func_0206dcf0(void);
    void func_0206dd70(void);
    void func_02079d78(void);
    void func_0207e7e8(void);
    void func_0207f2b4(void);
    void func_02080e90(void);
    void func_0208214c(void);
    void func_020861c4(void);
    void func_02086278(void);
    void func_02087108(void);
    void func_0208718c(void);
    void func_02087590(void);
    void func_020875a4(void);
    void func_021219ac(void);
    void func_021219ec(void);
    void func_02121a40(void);
    void func_02121b30(void);
    void func_02121b60(void);
    void func_02121b84(void);
    void func_0217ad90(void);
    void g_Global(void);
    void g_GlobalFlag(void);
    void g_Stage(void);
}

#pragma thumb on
extern "C" asm void func_0202ff7c(void)
{
	push {r3, r4, lr}
	sub sp, #4
	add r4, r0, #0
	mov r1, #0x20
	str r1, [r4, #0xc]
	mov r0, #0x18
	str r0, [r4, #0x10]
	mov r0, #0x1f
	strb r0, [r4, #4]
	add r0, sp, #0
	lsl r1, r1, #0xa
	dcd 0xE8BAF057
	add r0, r4, #0
	add r0, #8
	add r1, sp, #0
	dcd 0xE8F6F057
	mov r1, #0
	ldr r0, [pc, #0x14]
	str r1, [r4, #0x24]
	str r0, [r4, #0x28]
	mov r0, #0x64
	str r0, [r4, #0x2c]
	add r0, r4, #0
	str r1, [r4, #0x20]
	dcd 0xF882F7FB
	add sp, #4
	pop {r3, r4, pc}
	dcd 0x0000FFFF
}

extern "C" asm void func_0202ffbc(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x74
	ldrb r1, [r0, #0x1c]
	str r0, [sp]
	mov r0, #2
	tst r0, r1
	beq lbl_0202ffce
	mov r0, #1
	b lbl_0202ffd0
lbl_0202ffce:
	mov r0, #0
lbl_0202ffd0:
	cmp r0, #0
	bne lbl_0202ffd6
	b lbl_02030222
lbl_0202ffd6:
	ldr r0, [pc, #0x250]
	mov r1, #4
	mov r2, #0xc
	dcd 0xE8B6F052
	dcd 0xFE3CF7FA
	dcd 0xFE7AF7FA
	ldr r3, [pc, #0x240]
	add r2, sp, #0x68
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [r3]
	add r1, sp, #0x5c
	str r0, [r2]
	mov r0, #0
	str r0, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	add r0, sp, #0x38
	dcd 0xEDC2F031
	add r0, sp, #0x68
	dcd 0xEF14F03A
	ldr r1, [pc, #0x224]
	add r0, sp, #0x38
	dcd 0xEC98F037
	ldr r1, [pc, #0x220]
	mov r0, #0xa4
	ldr r2, [r1, #0x7c]
	bic r2, r0
	add r0, sp, #0x5c
	str r2, [r1, #0x7c]
	dcd 0xEEF4F03A
	dcd 0xEED4F03A
	dcd 0xEE64F03D
	ldr r0, [sp]
	ldr r0, [r0, #0x24]
	str r0, [sp, #0x20]
	ldr r0, [sp]
	ldr r0, [r0, #0x20]
	cmp r0, #0
	beq lbl_02030040
	ldr r0, [sp, #0x20]
	mov r1, #0x32
	sub r0, r1, r0
	str r0, [sp, #0x20]
lbl_02030040:
	mov r0, #0
	str r0, [sp, #0x1c]
	str r0, [sp, #8]
lbl_02030046:
	mov r0, #0
	str r0, [sp, #0x18]
	add r4, sp, #0x2c
lbl_0203004c:
	ldr r0, [pc, #0x1e8]
	mov r1, #0
	str r1, [r0]
	lsr r1, r0, #0xb
	str r1, [r0, #0x28]
	mov r1, #2
	ldr r0, [pc, #0x1e0]
	lsl r1, r1, #0xe
	str r1, [r0]
	str r1, [r0]
	ldr r0, [sp]
	ldr r0, [r0, #0x28]
	asr r0, r0, #4
	lsl r1, r0, #2
	ldr r0, [pc, #0x1d4]
	add r2, r0, r1
	ldrsh r0, [r0, r1]
	mov r1, #2
	ldrsh r1, [r2, r1]
	dcd 0xEE14F035
	ldr r1, [sp, #0x18]
	ldr r0, [sp, #8]
	add r1, r0
	mov r0, #0x44
	add r6, r1, #0
	mul r6, r0
	ldr r0, [pc, #0x1c0]
	ldr r1, [r0]
	add r2, r1, r6
	ldr r0, [r2, #8]
	ldr r3, [r2, #4]
	ldr r2, [r1, r6]
	ldr r1, [pc, #0x1b8]
	str r2, [r1]
	str r3, [r1]
	str r0, [r1]
	ldr r0, [sp]
	mov r1, #0x18
	dcd 0xFA39F7FB
	ldr r0, [pc, #0x1ac]
	mov r1, #1
	str r1, [r0]
	mov r0, #0
	str r0, [sp, #0x14]
	add r5, r0, #0
	str r0, [sp, #4]
lbl_020300ac:
	ldr r0, [pc, #0x194]
	mov r3, #0xc
	ldr r0, [r0]
	add r2, r6, r0
	add r1, r2, r5
	ldrsh r3, [r1, r3]
	ldr r0, [r6, r0]
	add r0, r3
	strh r0, [r4]
	mov r3, #0xe
	ldrsh r3, [r1, r3]
	ldr r0, [r2, #4]
	add r0, r3
	strh r0, [r4, #2]
	mov r0, #0x10
	ldrsh r0, [r1, r0]
	ldr r2, [r2, #8]
	add r1, sp, #0x30
	add r0, r2
	strh r0, [r4, #4]
	add r0, sp, #0x2c
	add r1, #2
	dcd 0xE894F033
	mov r0, #6
	ldrsh r0, [r4, r0]
	asr r1, r0, #8
	add r7, r1, #0
	ldr r0, [sp, #0x20]
	mov r1, #0xc
	mul r7, r0
	ldr r0, [pc, #0x158]
	ldr r0, [r0]
	add r0, r6
	add r0, r5
	ldrsh r1, [r0, r1]
	sub r1, r1, r7
	lsl r1, r1, #0x10
	asr r1, r1, #0x10
	str r1, [sp, #0x10]
	mov r1, #0xe
	ldrsh r0, [r0, r1]
	mov r1, #8
	ldrsh r1, [r4, r1]
	asr r2, r1, #8
	ldr r1, [sp, #0x20]
	mul r1, r2
	sub r0, r0, r1
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	str r0, [sp, #0xc]
	mov r0, #0
	ldrsh r0, [r4, r0]
	dcd 0xFBCFF7FE
	str r0, [sp, #0x24]
	add r0, r7, #0
	dcd 0xFBF1F7E1
	ldr r1, [sp, #0x24]
	sub r0, r1, r0
	lsl r0, r0, #0x10
	asr r7, r0, #0x10
	mov r0, #2
	ldrsh r0, [r4, r0]
	dcd 0xFBC3F7FE
	str r0, [sp, #0x28]
	mov r0, #8
	ldrsh r0, [r4, r0]
	asr r1, r0, #8
	ldr r0, [sp, #0x20]
	mul r0, r1
	dcd 0xFBE1F7E1
	ldr r1, [sp, #0x28]
	sub r0, r1, r0
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	cmp r7, #0
	bge lbl_0203015a
	mov r1, #0
	ldrsh r1, [r4, r1]
	neg r1, r1
	lsl r1, r1, #0x10
	asr r1, r1, #0x10
	str r1, [sp, #0x10]
lbl_0203015a:
	cmp r0, #0
	bge lbl_0203016a
	mov r0, #2
	ldrsh r0, [r4, r0]
	neg r0, r0
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	str r0, [sp, #0xc]
lbl_0203016a:
	ldr r1, [pc, #0xe4]
	ldr r0, [pc, #0xe4]
	str r1, [r0]
	ldr r0, [pc, #0xd0]
	ldr r0, [r0]
	add r1, r6, r0
	ldr r0, [sp, #4]
	add r1, r0
	ldr r0, [r1, #0x24]
	ldr r1, [r1, #0x28]
	lsl r0, r0, #8
	lsl r1, r1, #8
	asr r1, r1, #0x10
	asr r0, r0, #0x10
	lsl r1, r1, #0x10
	lsl r0, r0, #0x10
	lsr r1, r1, #0x10
	lsr r0, r0, #0x10
	lsl r1, r1, #0x10
	orr r1, r0
	ldr r0, [pc, #0xc4]
	str r1, [r0]
	ldr r0, [pc, #0xac]
	ldr r2, [sp, #0xc]
	ldr r0, [r0]
	lsl r2, r2, #0x10
	add r0, r6
	add r0, r5
	ldrh r1, [r0, #0x10]
	ldr r0, [sp, #0x10]
	lsr r2, r2, #0x10
	lsl r0, r0, #0x10
	lsr r0, r0, #0x10
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0xa8]
	add r5, r5, #6
	str r2, [r0]
	str r1, [r0]
	ldr r0, [sp, #4]
	add r0, #8
	str r0, [sp, #4]
	ldr r0, [sp, #0x14]
	add r0, r0, #1
	str r0, [sp, #0x14]
	cmp r0, #4
	bge lbl_020301ca
	b lbl_020300ac
lbl_020301ca:
	ldr r0, [pc, #0x94]
	mov r1, #1
	str r1, [r0]
	ldr r0, [sp, #0x18]
	add r0, r0, #1
	str r0, [sp, #0x18]
	cmp r0, #0x18
	bge lbl_020301dc
	b lbl_0203004c
lbl_020301dc:
	ldr r0, [sp, #8]
	add r0, #0x18
	str r0, [sp, #8]
	ldr r0, [sp, #0x1c]
	add r0, r0, #1
	str r0, [sp, #0x1c]
	cmp r0, #0x20
	bge lbl_020301ee
	b lbl_02030046
lbl_020301ee:
	ldr r0, [sp]
	ldr r0, [r0, #0x24]
	add r1, r0, #1
	ldr r0, [sp]
	str r1, [r0, #0x24]
	ldr r1, [sp]
	add r0, #0x28
	ldr r2, [r1, #0x28]
	ldr r1, [r1, #0x2c]
	add r2, r1
	ldr r1, [sp]
	str r2, [r1, #0x28]
	ldr r1, [pc, #0x5c]
	cmp r2, r1
	ble lbl_02030212
	ldr r2, [r0]
	sub r1, r2, r1
	str r1, [r0]
lbl_02030212:
	ldr r0, [sp]
	ldr r1, [r0, #0x28]
	cmp r1, #0
	bge lbl_02030222
	ldr r0, [pc, #0x48]
	add r1, r0
	ldr r0, [sp]
lbl_02030220:
	str r1, [r0, #0x28]
lbl_02030222:
	add sp, #0x74
	pop {r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x0211C4F0
	dcd 0x020B5DA0
	dcd 0x0210CFE4
	dcd 0x0210CFA8
	dcd 0x04000444
	dcd 0x0400046C
	dcd 0x020B638C
	dcd 0x020EDDEC
	dcd 0x04000470
	dcd 0x04000500
	dcd 0x00007FFF
	dcd 0x04000480
	dcd 0x04000488
	dcd 0x0400048C
	dcd 0x04000448
	dcd 0x0000FFFF
}

extern "C" asm void func_02030268(void)
{
	ldr r0, [r0, #0x24]
	cmp r0, #0x32
	ble lbl_02030272
	mov r0, #1
	bx lr
lbl_02030272:
	mov r0, #0
	bx lr
}

extern "C" asm void pad_02030276(void)
{
	dcd 0x00000000
}

extern "C" asm void func_02030278(void)
{
	str r1, [r0, #0x20]
	cmp r1, #0
	beq lbl_02030290
	mov r3, #0x64
	mov r1, #0x31
	add r2, r3, #0
	mul r2, r1
	ldr r1, [pc, #0x14]
	str r3, [r0, #0x2c]
	sub r1, r1, r2
	str r1, [r0, #0x28]
	bx lr
lbl_02030290:
	mov r1, #0x63
	mvn r1, r1
	str r1, [r0, #0x2c]
	lsr r1, r1, #0x10
	str r1, [r0, #0x28]
	bx lr
	dcd 0x0000FFFF
}

extern "C" asm void func_020302a0(void)
{
	push {r3, r4, lr}
	sub sp, #4
	add r4, r0, #0
	dcd 0xFF07F7FA
	mov r1, #0x20
	str r1, [r4, #0xc]
	mov r0, #0x18
	str r0, [r4, #0x10]
	mov r0, #0x1f
	strb r0, [r4, #4]
	add r0, sp, #0
	lsl r1, r1, #0xa
	dcd 0xEF26F056
	add r0, r4, #0
	add r0, #8
	add r1, sp, #0
	dcd 0xEF62F056
	mov r0, #0
	str r0, [r4, #0x20]
	str r0, [r4, #0x24]
	ldr r0, [pc, #0xc]
	str r0, [r4, #0x30]
	str r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	add sp, #4
	pop {r3, r4, pc}
	mov r8, r8
	dcd 0x0000FFFF
}

extern "C" asm void func_020302e0(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	mov r0, #2
	add r4, r1, #0
	add r7, r2, #0
	add r6, r3, #0
	dcd 0xED2CF050
	cmp r0, #0
	beq lbl_020302f8
	ldr r1, [r5, #0x20]
	b lbl_020302fa
lbl_020302f8:
	ldr r1, [r5, #0x24]
lbl_020302fa:
	cmp r0, #0
	beq lbl_02030302
	ldr r0, [r5, #0x30]
	b lbl_02030304
lbl_02030302:
	ldr r0, [r5, #0x34]
lbl_02030304:
	lsl r5, r4, #1
	cmp r1, r5
	ble lbl_0203034c
	add r4, r6, #0
	mov r2, #0x44
	ldr r6, [pc, #0x40]
	mul r4, r2
	ldr r2, [r6]
	ldr r3, [r2, r4]
	sub r3, r3, #2
	str r3, [r2, r4]
	ldr r2, [r6]
	sub r6, r1, r5
	mov r1, #0x20
	add r3, r2, #4
	sub r1, r1, r7
	add r1, r6
	ldr r2, [r3, r4]
	lsl r1, r1, #1
	sub r1, r2, r1
lbl_0203032c:
	str r1, [r3, r4]
	mov r1, #0x78
	mul r1, r5
	add r0, r1
	asr r0, r0, #4
	lsl r3, r0, #1
	ldr r2, [pc, #0x18]
	lsl r0, r3, #1
	ldrsh r1, [r2, r0]
	ldr r0, [sp, #0x18]
	strh r1, [r0]
	add r0, r3, #1
	lsl r0, r0, #1
	ldrsh r1, [r2, r0]
	ldr r0, [sp, #0x1c]
	strh r1, [r0]
lbl_0203034c:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020EDDEC
	dcd 0x020B638C
}

extern "C" asm void func_02030358(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x64
	ldrb r1, [r0, #0x1c]
	str r0, [sp, #8]
	mov r0, #2
	tst r0, r1
	beq lbl_0203036a
	mov r0, #1
	b lbl_0203036c
lbl_0203036a:
	mov r0, #0
lbl_0203036c:
	cmp r0, #0
	bne lbl_02030372
	b lbl_0203052e
lbl_02030372:
	ldr r0, [pc, #0x1c0]
	mov r1, #4
	mov r2, #0xc
	dcd 0xEEE8F051
	dcd 0xFC6EF7FA
	dcd 0xFCACF7FA
	ldr r3, [pc, #0x1b0]
	add r2, sp, #0x58
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [r3]
	add r1, sp, #0x4c
	str r0, [r2]
	mov r0, #0
	str r0, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	add r0, sp, #0x28
	dcd 0xEBF4F031
	add r0, sp, #0x58
	dcd 0xED46F03A
	ldr r1, [pc, #0x194]
	add r0, sp, #0x28
	dcd 0xEACAF037
	ldr r1, [pc, #0x190]
	mov r0, #0xa4
	ldr r2, [r1, #0x7c]
	bic r2, r0
	add r0, sp, #0x4c
	str r2, [r1, #0x7c]
	dcd 0xED26F03A
	dcd 0xED06F03A
	dcd 0xEC96F03D
	mov r0, #0
	str r0, [sp, #0x20]
	str r0, [sp, #0x1c]
	ldr r0, [sp, #0x20]
	ldr r1, [pc, #0x174]
	str r0, [sp, #0x14]
	ldrsh r0, [r1, r0]
	str r0, [sp, #0x10]
	mov r0, #2
	ldrsh r0, [r1, r0]
	str r0, [sp, #0xc]
lbl_020303dc:
	mov r0, #0
	ldr r7, [pc, #0x168]
	str r0, [sp, #0x18]
lbl_020303e2:
	ldr r1, [sp, #0x18]
	ldr r0, [sp, #0x14]
	add r0, r1
	lsl r0, r0, #0x10
	asr r3, r0, #0x10
	ldr r0, [pc, #0x15c]
	mov r1, #0
	str r1, [r0]
	lsr r1, r0, #0xb
	str r1, [r0, #0x28]
	mov r1, #2
	ldr r0, [pc, #0x154]
	lsl r1, r1, #0xe
	str r1, [r0]
	str r1, [r0]
	mov r0, #0x44
	add r4, r3, #0
	ldr r2, [r7]
	mul r4, r0
	add r0, r2, r4
	ldr r1, [r0, #8]
	ldr r5, [r2, r4]
	ldr r0, [r0, #4]
	ldr r2, [pc, #0x140]
	str r5, [r2]
	str r0, [r2]
	add r0, r2, #0
	str r1, [r0]
	ldr r1, [sp, #0x10]
	add r0, sp, #0x24
	strh r1, [r0, #2]
	ldr r1, [sp, #0xc]
	strh r1, [r0]
	add r0, sp, #0x24
	add r0, #2
	str r0, [sp]
	add r0, sp, #0x24
	str r0, [sp, #4]
	ldr r0, [sp, #8]
	ldr r1, [sp, #0x18]
	ldr r2, [sp, #0x1c]
	dcd 0xFF54F7FF
	add r1, sp, #0x24
	mov r0, #2
	ldrsh r0, [r1, r0]
	add r2, r1, #0
	mov r1, #0
	ldrsh r1, [r2, r1]
	dcd 0xEC0CF035
	ldr r0, [sp, #8]
	mov r1, #0x18
	dcd 0xF860F7FB
	mov r2, #0
	ldr r0, [pc, #0x104]
	mov r1, #1
	str r1, [r0]
	add r3, r2, #0
	add r5, r2, #0
lbl_0203045c:
	ldr r1, [pc, #0xfc]
	ldr r0, [pc, #0x100]
	add r2, r2, #1
	str r1, [r0]
	ldr r0, [r7]
	add r0, r4
	add r1, r0, r3
	ldr r0, [r1, #0x24]
	ldr r1, [r1, #0x28]
	lsl r0, r0, #8
	lsl r1, r1, #8
	asr r1, r1, #0x10
	asr r0, r0, #0x10
	lsl r1, r1, #0x10
	lsl r0, r0, #0x10
	lsr r1, r1, #0x10
	lsr r0, r0, #0x10
	lsl r1, r1, #0x10
	orr r1, r0
	ldr r0, [pc, #0xe0]
	add r3, #8
	str r1, [r0]
	ldr r0, [r7]
	add r0, r4
	add r6, r0, r5
	ldrh r1, [r6, #0x10]
	ldrh r0, [r6, #0xc]
	ldrh r6, [r6, #0xe]
	add r5, r5, #6
	lsl r6, r6, #0x10
	orr r6, r0
	ldr r0, [pc, #0xcc]
	cmp r2, #4
	str r6, [r0]
	str r1, [r0]
	blt lbl_0203045c
	mov r1, #1
	sub r0, #0x44
	str r1, [r0]
	ldr r0, [sp, #0x18]
	add r0, r0, #1
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	str r0, [sp, #0x18]
	cmp r0, #0x18
	blt lbl_020303e2
	ldr r0, [sp, #0x20]
	cmp r0, #2
	ble lbl_020304c4
	mov r0, #0
	str r0, [sp, #0x20]
	b lbl_020304cc
lbl_020304c4:
	add r0, r0, #1
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	str r0, [sp, #0x20]
lbl_020304cc:
	ldr r0, [sp, #0x14]
	add r0, #0x18
	str r0, [sp, #0x14]
	ldr r0, [sp, #0x1c]
	add r0, r0, #1
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	str r0, [sp, #0x1c]
	cmp r0, #0x20
	bge lbl_020304e2
	b lbl_020303dc
lbl_020304e2:
	ldr r0, [sp, #8]
	ldr r0, [r0, #0x20]
	add r1, r0, #2
	ldr r0, [sp, #8]
	cmp r1, #0x14
	str r1, [r0, #0x20]
	ble lbl_0203050a
	ldr r0, [r0, #0x24]
	add r1, r0, #2
	ldr r0, [sp, #8]
	str r1, [r0, #0x24]
	mov r1, #3
	ldr r2, [r0, #0x34]
	lsl r1, r1, #0xe
	cmp r2, r1
	ble lbl_02030508
	sub r2, #0xf0
	str r2, [r0, #0x34]
	b lbl_0203050a
lbl_02030508:
	str r1, [r0, #0x34]
lbl_0203050a:
	ldr r0, [sp, #8]
	mov r1, #3
	ldr r2, [r0, #0x30]
	lsl r1, r1, #0xe
	cmp r2, r1
	ble lbl_0203051c
	sub r2, #0xf0
	str r2, [r0, #0x30]
	b lbl_0203051e
lbl_0203051c:
	str r1, [r0, #0x30]
lbl_0203051e:
	ldr r0, [sp, #8]
	ldr r1, [r0, #0x2c]
	cmp r1, #0
lbl_02030524:
	bge lbl_0203052e
	ldr r0, [pc, #0x44]
	add r1, r0
	ldr r0, [sp, #8]
	str r1, [r0, #0x2c]
lbl_0203052e:
	add sp, #0x64
	pop {r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x0211C4F0
	dcd 0x020B5DB0
	dcd 0x0210CFE4
	dcd 0x0210CFA8
	dcd 0x020B638C
	dcd 0x020EDDEC
	dcd 0x04000444
	dcd 0x0400046C
	dcd 0x04000470
	dcd 0x04000500
	dcd 0x00007FFF
	dcd 0x04000480
	dcd 0x04000488
	dcd 0x0400048C
	dcd 0x0000FFFF
}

extern "C" asm void func_02030570(void)
{
	ldr r0, [r0, #0x20]
	cmp r0, #0x4b
	ble lbl_0203057a
	mov r0, #1
	bx lr
lbl_0203057a:
	mov r0, #0
	bx lr
}

extern "C" asm void pad_0203057e(void)
{
	dcd 0x00000000
}

extern "C" asm void func_02030580(void)
{
	push {r4, r5}
	sub sp, #0x18
	ldr r4, [pc, #0x1c]
	add r3, sp, #0
	add r5, r0, #0
	add r2, r3, #0
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x18
	pop {r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5E1C
}

extern "C" asm void func_020305a8(void)
{
	push {r4, r5}
	sub sp, #0x18
	ldr r4, [pc, #0x1c]
	add r3, sp, #0
	add r5, r0, #0
	add r2, r3, #0
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x18
	pop {r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5E34
}

extern "C" asm void func_020305d0(void)
{
	push {r3, r4, r5}
	sub sp, #0x14
	ldr r4, [pc, #0x1c]
	add r5, r0, #0
	ldmia r4!, {r0, r1}
	add r3, sp, #0
	add r2, r3, #0
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldr r0, [r4]
	str r0, [r3]
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x14
	pop {r3, r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5DDC
}

extern "C" asm void func_020305f8(void)
{
	push {r3, r4, r5}
	sub sp, #0x24
	ldr r4, [pc, #0x1c]
	add r5, r0, #0
	add r3, sp, #0
	mov r2, #4
lbl_02030604:
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	sub r2, r2, #1
	bne lbl_02030604
	ldr r0, [r4]
	lsl r1, r5, #2
	str r0, [r3]
	add r0, sp, #0
	ldr r0, [r0, r1]
	add sp, #0x24
	pop {r3, r4, r5}
	bx lr
	dcd 0x020B5E4C
}

extern "C" asm void func_02030620(void)
{
	push {r4, lr}
	mov r2, #0x54
	ldrsb r2, [r1, r2]
	cmp r2, #0
	beq lbl_0203062e
	mov r2, #1
	b lbl_02030630
lbl_0203062e:
	mov r2, #0
lbl_02030630:
	cmp r2, #1
	bne lbl_020306ec
	add r1, #0x44
	ldrh r4, [r1]
	cmp r0, #0
	bne lbl_0203064c
	ldr r0, [pc, #0x12c]
	dcd 0xFEA7F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #0x10]
	pop {r4, pc}
lbl_0203064c:
	cmp r0, #1
	bne lbl_02030660
	ldr r0, [pc, #0x118]
	dcd 0xFE9DF7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #0x12]
	pop {r4, pc}
lbl_02030660:
	cmp r0, #2
	bne lbl_02030674
	ldr r0, [pc, #0x104]
	dcd 0xFE93F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #2]
	pop {r4, pc}
lbl_02030674:
	cmp r0, #3
	bne lbl_02030688
	ldr r0, [pc, #0xf0]
	dcd 0xFE89F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #4]
	pop {r4, pc}
lbl_02030688:
	cmp r0, #4
	bne lbl_0203069c
	ldr r0, [pc, #0xdc]
	dcd 0xFE7FF7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #6]
	pop {r4, pc}
lbl_0203069c:
	cmp r0, #5
	bne lbl_020306b0
	ldr r0, [pc, #0xc8]
	dcd 0xFE75F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #8]
	pop {r4, pc}
lbl_020306b0:
	cmp r0, #6
	bne lbl_020306c4
	ldr r0, [pc, #0xb4]
	dcd 0xFE6BF7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #0xa]
	pop {r4, pc}
lbl_020306c4:
	cmp r0, #7
	bne lbl_020306d8
	ldr r0, [pc, #0xa0]
	dcd 0xFE61F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #0xc]
	pop {r4, pc}
lbl_020306d8:
	cmp r0, #8
	bne lbl_02030766
	ldr r0, [pc, #0x8c]
	dcd 0xFE57F7DC
	mov r1, #0x58
	mul r1, r4
	add r0, r1
	ldrh r0, [r0, #0xe]
	pop {r4, pc}
lbl_020306ec:
	cmp r0, #0
	bne lbl_020306fa
	add r0, r1, #0
	mov r1, #0
	dcd 0xFF26F7E1
	pop {r4, pc}
lbl_020306fa:
	cmp r0, #1
	bne lbl_02030708
	add r0, r1, #0
	mov r1, #0
	dcd 0xFFC9F7E1
	pop {r4, pc}
lbl_02030708:
	cmp r0, #2
	bne lbl_02030716
	add r0, r1, #0
	mov r1, #0
	dcd 0xFB70F7E1
	pop {r4, pc}
lbl_02030716:
	cmp r0, #3
	bne lbl_02030724
	add r0, r1, #0
	mov r1, #0
	dcd 0xFBDFF7E1
	pop {r4, pc}
lbl_02030724:
	cmp r0, #4
	bne lbl_02030732
	add r0, r1, #0
	mov r1, #0
	dcd 0xFC74F7E1
	pop {r4, pc}
lbl_02030732:
	cmp r0, #5
	bne lbl_02030740
	add r0, r1, #0
	mov r1, #0
	dcd 0xFC8BF7E1
	pop {r4, pc}
lbl_02030740:
	cmp r0, #6
	bne lbl_0203074e
	add r0, r1, #0
	mov r1, #0
	dcd 0xFCA6F7E1
	pop {r4, pc}
lbl_0203074e:
	cmp r0, #7
	bne lbl_0203075a
	add r0, r1, #0
	dcd 0xFD46F7E1
	pop {r4, pc}
lbl_0203075a:
	cmp r0, #8
	bne lbl_02030766
	add r0, r1, #0
	dcd 0xFD8AF7E1
	pop {r4, pc}
lbl_02030766:
	mov r0, #0
	pop {r4, pc}
	mov r8, r8
	dcd 0x020C79B8
}

extern "C" asm void func_02030770(void)
{
	push {r4, r5}
	sub sp, #0x18
	ldr r4, [pc, #0x1c]
	add r3, sp, #0
	add r5, r0, #0
	add r2, r3, #0
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x18
	pop {r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5E04
}

extern "C" asm void func_02030798(void)
{
	push {r3, r4, r5, lr}
	sub sp, #0xa8
	ldr r5, [pc, #0x9c]
	add r4, r0, #0
	add r3, sp, #0
	mov r2, #0x15
lbl_020307a4:
	ldmia r5!, {r0, r1}
	stmia r3!, {r0, r1}
	sub r2, r2, #1
	bne lbl_020307a4
	ldr r0, [pc, #0x90]
	ldr r0, [r0, #4]
	cmp r0, #6
	bhi lbl_02030830
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r5, #1
	mov r4, r1
	mov r2, r3
	mov r4, r6
	lsl r2, r0, #1
	lsl r4, r3, #1
	lsl r4, r3, #1
	cmp r4, #0xf
	bne lbl_020307d4
	mov r4, #0x1e
lbl_020307d4:
	cmp r4, #0x10
	bne lbl_02030830
	mov r4, #0x1f
	b lbl_02030830
	cmp r4, #1
	bne lbl_020307e2
	mov r4, #0x20
lbl_020307e2:
	cmp r4, #0xb
	bne lbl_020307e8
	mov r4, #0x21
lbl_020307e8:
	cmp r4, #0xc
	bne lbl_020307ee
	mov r4, #0x22
lbl_020307ee:
	cmp r4, #0xd
	bne lbl_02030830
	mov r4, #0x23
	b lbl_02030830
	cmp r4, #1
	bne lbl_020307fc
	mov r4, #0x24
lbl_020307fc:
	cmp r4, #1
	bne lbl_02030830
	mov r4, #0x25
	b lbl_02030830
	cmp r4, #0xa
	bne lbl_0203080a
	mov r4, #0x26
lbl_0203080a:
	cmp r4, #8
	bne lbl_02030810
	mov r4, #0x27
lbl_02030810:
	cmp r4, #9
	bne lbl_02030816
	mov r4, #0x28
lbl_02030816:
	cmp r4, #0x15
	bne lbl_02030830
	mov r4, #0x29
	b lbl_02030830
	cmp r4, #0xd
	bne lbl_02030830
	dcd 0xED54F002
	dcd 0xEEAEF002
	cmp r0, #1
	bne lbl_02030830
	mov r4, #0x1d
lbl_02030830:
	lsl r1, r4, #2
	add r0, sp, #0
	ldr r0, [r0, r1]
	add sp, #0xa8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020B5ED0
	dcd 0x020EE1CC
}

extern "C" asm void func_02030844(void)
{
	cmp r1, #0
	beq lbl_0203084c
	ldr r1, [pc, #0x10]
	b lbl_0203084e
lbl_0203084c:
	ldr r1, [pc, #0x10]
lbl_0203084e:
	str r1, [r0]
	add r1, r1, #1
	str r1, [r0, #4]
	ldr r1, [pc, #0xc]
	str r1, [r0, #8]
	bx lr
	mov r8, r8
	dcd 0x8000012C
	dcd 0x800000C8
	dcd 0x800000CF
}

extern "C" asm void func_02030868(void)
{
	cmp r1, #0
	beq lbl_02030876
	ldr r1, [pc, #0x10]
	str r1, [r0]
	add r1, r1, #1
	str r1, [r0, #4]
	bx lr
lbl_02030876:
	ldr r1, [pc, #0xc]
	str r1, [r0]
	ldr r1, [pc, #0xc]
	str r1, [r0, #4]
	bx lr
	dcd 0xA0000064
	dcd 0x020BEBD8
	dcd 0x020BEBE0
}

extern "C" asm void func_0203088c(void)
{
	cmp r1, #0
	beq lbl_020308a6
	ldr r2, [pc, #0x2c]
	str r2, [r0]
	add r1, r2, #1
	str r1, [r0, #4]
	add r1, r2, #2
	str r1, [r0, #8]
	add r1, r2, #3
	str r1, [r0, #0xc]
	add r1, r2, #4
	str r1, [r0, #0x10]
	bx lr
lbl_020308a6:
	ldr r2, [pc, #0x1c]
	str r2, [r0]
	add r1, r2, #1
	str r1, [r0, #4]
	add r1, r2, #2
	str r1, [r0, #8]
	add r1, r2, #3
	str r1, [r0, #0xc]
	add r1, r2, #4
	str r1, [r0, #0x10]
	add r1, r2, #5
	str r1, [r0, #0x14]
	bx lr
	dcd 0x800000CB
	dcd 0x800000CA
}

extern "C" asm void func_020308c8(void)
{
	push {r3, r4, r5}
	sub sp, #0x14
	ldr r4, [pc, #0x1c]
	add r5, r0, #0
	ldmia r4!, {r0, r1}
	add r3, sp, #0
	add r2, r3, #0
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldr r0, [r4]
	str r0, [r3]
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x14
	pop {r3, r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5DC8
}

extern "C" asm void func_020308f0(void)
{
	push {r3, r4, r5}
	sub sp, #0x14
	ldr r4, [pc, #0x1c]
	add r5, r0, #0
	ldmia r4!, {r0, r1}
	add r3, sp, #0
	add r2, r3, #0
	stmia r3!, {r0, r1}
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	ldr r0, [r4]
	str r0, [r3]
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0x14
	pop {r3, r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5DF0
}

extern "C" asm void func_02030918(void)
{
	push {r3, r4, r5}
	sub sp, #0xc
	ldr r4, [pc, #0x18]
	add r5, r0, #0
	ldmia r4!, {r0, r1}
	add r3, sp, #0
	add r2, r3, #0
	stmia r3!, {r0, r1}
	ldr r0, [r4]
	str r0, [r3]
	lsl r0, r5, #2
	ldr r0, [r2, r0]
	add sp, #0xc
	pop {r3, r4, r5}
	bx lr
	mov r8, r8
	dcd 0x020B5DBC
}

extern "C" asm void func_0203093c(void)
{
	ldr r1, [pc, #4]
	sub r0, r0, r1
	bx lr
	mov r8, r8
	dcd 0x5FFFFD3F
}

extern "C" asm void func_02030948(void)
{
	ldr r1, [pc, #4]
	sub r0, r0, r1
	bx lr
	mov r8, r8
	dcd 0x1FFFFFFF
}

extern "C" asm void func_02030954(void)
{
	push {r4, r5}
	sub sp, #0x60
	ldr r4, [pc, #0x18]
	add r5, r0, #0
	add r3, sp, #0
	mov r2, #0xc
lbl_02030960:
	ldmia r4!, {r0, r1}
	stmia r3!, {r0, r1}
	sub r2, r2, #1
	bne lbl_02030960
	lsl r1, r5, #2
	add r0, sp, #0
	ldr r0, [r0, r1]
	add sp, #0x60
	pop {r4, r5}
	bx lr
	dcd 0x020B5E70
}

extern "C" asm void func_02030978(void)
{
	push {r4, lr}
	add r4, r0, #0
	dcd 0xFD7EF7E9
	cmp r0, #7
	beq lbl_02030990
	cmp r4, #0x7f
	beq lbl_02030990
	add r0, r4, #0
	sub r0, #0x82
	cmp r0, #2
	bhi lbl_02030994
lbl_02030990:
	ldr r0, [pc, #0x40]
	pop {r4, pc}
lbl_02030994:
	cmp r4, #0x81
	bne lbl_0203099c
	ldr r0, [pc, #0x3c]
	pop {r4, pc}
lbl_0203099c:
	add r0, r4, #0
	dcd 0xFD6DF7E9
	cmp r0, #0xa
	bne lbl_020309ce
	cmp r4, #0x85
	beq lbl_020309c2
	cmp r4, #0x86
	beq lbl_020309c2
	cmp r4, #0x88
	beq lbl_020309c2
	cmp r4, #0x8d
	beq lbl_020309c2
	cmp r4, #0x8e
	beq lbl_020309c2
	add r0, r4, #0
	sub r0, #0x96
	cmp r0, #3
	bhi lbl_020309c6
lbl_020309c2:
	ldr r0, [pc, #0x18]
	pop {r4, pc}
lbl_020309c6:
	cmp r4, #0x9c
	bne lbl_020309ce
	ldr r0, [pc, #0x14]
	pop {r4, pc}
lbl_020309ce:
	mov r0, #0
	pop {r4, pc}
	mov r8, r8
	dcd 0x8000008A
	dcd 0xA00002C0
	dcd 0x80000092
	dcd 0x80000093
}

extern "C" asm void func_020309e4(void)
{
	push {r4, lr}
	add r4, r0, #0
	dcd 0xFD48F7E9
	cmp r0, #7
	bne lbl_020309f4
	ldr r0, [pc, #0x3c]
	pop {r4, pc}
lbl_020309f4:
	cmp r4, #0x7f
	bne lbl_020309fc
	ldr r0, [pc, #0x34]
	pop {r4, pc}
lbl_020309fc:
	cmp r4, #0x84
	bne lbl_02030a04
	ldr r0, [pc, #0x2c]
	pop {r4, pc}
lbl_02030a04:
	cmp r4, #0x81
	bne lbl_02030a0c
	ldr r0, [pc, #0x28]
	pop {r4, pc}
lbl_02030a0c:
	add r0, r4, #0
	dcd 0xFD35F7E9
	cmp r0, #0xa
	bne lbl_02030a2a
	cmp r4, #0x89
	bne lbl_02030a1e
	ldr r0, [pc, #0x1c]
	pop {r4, pc}
lbl_02030a1e:
	cmp r4, #0x9e
	bne lbl_02030a26
	ldr r0, [pc, #0x18]
	pop {r4, pc}
lbl_02030a26:
	ldr r0, [pc, #8]
	pop {r4, pc}
lbl_02030a2a:
	mov r0, #0
	pop {r4, pc}
	mov r8, r8
	dcd 0x000CAF66
	dcd 0xA00002C0
	dcd 0x000CAF68
	dcd 0x000CAF6A
}

extern "C" asm void func_02030a40(void)
{
	add r0, #0x48
	ldrb r0, [r0]
	cmp r0, #1
	bne lbl_02030a84
	ldr r0, [pc, #0x3c]
	add r0, r1
	cmp r0, #6
	bhi lbl_02030a84
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r4, r1
	mov r0, r2
	mov r4, r2
	mov r0, r3
	mov r4, r3
	mov r0, r4
	mov r4, r4
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
	b lbl_02030a84
	ldr r1, [pc, #0x20]
lbl_02030a84:
	add r0, r1, #0
	bx lr
	dcd 0x5FFFFFEC
	dcd 0xA000001B
	dcd 0xA000001C
	dcd 0xA000001D
	dcd 0xA000001E
	dcd 0xA000001F
	dcd 0xA0000020
	dcd 0xA0000021
}

extern "C" asm void func_02030aa8(void)
{
	mov r1, #0
	str r1, [r0]
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02030ab0(void)
{
	push {r3, r4}
	mov r4, #1
	str r4, [r0]
	ldr r4, [r0, #4]
	lsl r4, r4, #2
	add r4, r0
	strh r2, [r4, #8]
	ldr r2, [r0, #4]
	lsl r2, r2, #2
	add r2, r0
	strb r1, [r2, #0xa]
	ldr r1, [r0, #4]
	lsl r1, r1, #2
	add r1, r0
	strb r3, [r1, #0xb]
	ldr r1, [r0, #4]
	add r1, r1, #1
	str r1, [r0, #4]
	pop {r3, r4}
	bx lr
}

extern "C" asm void func_02030ad8(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0xc
	add r6, r0, #0
	ldr r0, [r6]
	cmp r0, #1
	bne lbl_02030b38
	ldr r0, [r6, #4]
	mov r4, #0
	cmp r0, #0
	ble lbl_02030b38
	add r5, r6, #0
	add r7, r4, #0
lbl_02030af0:
	mov r0, #0xa
	ldrsb r0, [r5, r0]
	str r0, [sp]
	mov r0, #8
	ldrsh r0, [r5, r0]
	str r0, [sp, #4]
	ldr r0, [pc, #0x44]
	str r7, [sp, #8]
	ldr r0, [r0, #8]
	cmp r0, #1
	bne lbl_02030b18
	mov r0, #0xb
	ldrsb r0, [r5, r0]
	cmp r0, #0
	bne lbl_02030b12
	mov r0, #1
	b lbl_02030b14
lbl_02030b12:
	add r0, r7, #0
lbl_02030b14:
	str r0, [sp, #8]
	b lbl_02030b28
lbl_02030b18:
	mov r0, #0xb
	ldrsb r0, [r5, r0]
	cmp r0, #1
	bne lbl_02030b24
	mov r0, #1
	b lbl_02030b26
lbl_02030b24:
	add r0, r7, #0
lbl_02030b26:
	str r0, [sp, #8]
lbl_02030b28:
	add r0, sp, #0
	dcd 0xFE7DF7F2
	ldr r0, [r6, #4]
	add r4, r4, #1
	add r5, r5, #4
	cmp r4, r0
	blt lbl_02030af0
lbl_02030b38:
	mov r0, #0
	str r0, [r6, #4]
	str r0, [r6]
	add sp, #0xc
	pop {r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020ECB64
}

extern "C" asm void func_02030b48(void)
{
	push {r3, lr}
	ldr r0, [pc, #0x1c]
	ldr r1, [r0]
	mov r0, #1
	tst r0, r1
	bne lbl_02030b64
	ldr r0, [pc, #0x14]
	dcd 0xFFA7F7FF
	ldr r1, [pc, #0xc]
	mov r0, #1
	ldr r2, [r1]
	orr r0, r2
	str r0, [r1]
lbl_02030b64:
	ldr r0, [pc, #4]
	pop {r3, pc}
	dcd 0x020EED00
	dcd 0x020EED04
}

extern "C" asm void func_02030b70(void)
{
	push {r3, lr}
	cmp r1, #0xa7
	beq lbl_02030c3c
	cmp r1, #0xa8
	beq lbl_02030c3c
	cmp r1, #0xf3
	bne lbl_02030c60
	ldr r0, [pc, #0xe4]
	ldr r1, [pc, #0xe4]
	dcd 0xFE8BF7EC
	cmp r0, #1
	bne lbl_02030b94
	ldr r0, [pc, #0xe0]
	ldr r1, [pc, #0xe0]
	dcd 0xF959F7EC
	pop {r3, pc}
lbl_02030b94:
	ldr r0, [pc, #0xcc]
	ldr r1, [pc, #0xdc]
	dcd 0xFE80F7EC
	cmp r0, #1
	bne lbl_02030baa
	ldr r0, [pc, #0xc8]
	ldr r1, [pc, #0xd4]
	dcd 0xF94EF7EC
	pop {r3, pc}
lbl_02030baa:
	ldr r0, [pc, #0xb8]
	ldr r1, [pc, #0xcc]
	dcd 0xFE75F7EC
	cmp r0, #1
	bne lbl_02030bc0
	ldr r0, [pc, #0xb4]
	ldr r1, [pc, #0xc4]
	dcd 0xF943F7EC
	pop {r3, pc}
lbl_02030bc0:
	mov r1, #0x6d
	ldr r0, [pc, #0xa0]
	lsl r1, r1, #2
	dcd 0xFE69F7EC
	cmp r0, #1
	bne lbl_02030bd8
	ldr r0, [pc, #0x9c]
	ldr r1, [pc, #0xb0]
	dcd 0xF937F7EC
	pop {r3, pc}
lbl_02030bd8:
	ldr r0, [pc, #0x88]
	ldr r1, [pc, #0xac]
lbl_02030bdc:
	dcd 0xFE5EF7EC
	cmp r0, #1
	bne lbl_02030bee
	ldr r0, [pc, #0x84]
	ldr r1, [pc, #0xa4]
	dcd 0xF92CF7EC
	pop {r3, pc}
lbl_02030bee:
	ldr r0, [pc, #0x74]
	ldr r1, [pc, #0x9c]
	dcd 0xFE53F7EC
	cmp r0, #1
	bne lbl_02030c04
	ldr r0, [pc, #0x70]
	ldr r1, [pc, #0x94]
	dcd 0xF921F7EC
	pop {r3, pc}
lbl_02030c04:
	ldr r0, [pc, #0x5c]
	ldr r1, [pc, #0x90]
	dcd 0xFE48F7EC
	cmp r0, #1
	bne lbl_02030c1a
	ldr r0, [pc, #0x58]
	ldr r1, [pc, #0x88]
	dcd 0xF916F7EC
	pop {r3, pc}
lbl_02030c1a:
	mov r1, #0x6a
	ldr r0, [pc, #0x44]
	lsl r1, r1, #2
	dcd 0xFE3CF7EC
	cmp r0, #1
	bne lbl_02030c32
	ldr r0, [pc, #0x40]
	ldr r1, [pc, #0x74]
	dcd 0xF90AF7EC
	pop {r3, pc}
lbl_02030c32:
	ldr r0, [pc, #0x38]
	ldr r1, [pc, #0x6c]
	dcd 0xF905F7EC
	pop {r3, pc}
lbl_02030c3c:
	ldr r0, [pc, #0x68]
	dcd 0xFEDDF7DA
	mov r1, #0
	ldrsb r0, [r0, r1]
	cmp r0, #0x6d
	bne lbl_02030c60
	ldr r0, [pc, #0x5c]
	dcd 0xFED6F7DA
	mov r1, #1
	ldrsb r0, [r0, r1]
	cmp r0, #0x63
	bne lbl_02030c60
	ldr r0, [pc, #0x10]
	ldr r1, [pc, #0x50]
	dcd 0xF8F2F7EC
lbl_02030c60:
	pop {r3, pc}
	mov r8, r8
	dcd 0x020D0FBC
	dcd 0x000001B7
	dcd 0x020D08E0
	dcd 0x020BEBE8
	dcd 0x000001B6
	dcd 0x020BEBF4
	dcd 0x000001B5
	dcd 0x020BEC00
	dcd 0x020BEC0C
	dcd 0x000001B3
	dcd 0x020BEC18
	dcd 0x000001B2
	dcd 0x020BEC24
	dcd 0x000001B1
	dcd 0x020BEC30
	dcd 0x020BEC3C
	dcd 0x020BEC48
	dcd 0x020C768C
	dcd 0x020BEC54
}

#pragma thumb off
extern "C" asm void func_02030cb0(void)
{
	dcd 0xE92D4008
	dcd 0xEB00CF04
	dcd 0xEB00CEFE
	dcd 0xEB00CF19
	dcd 0xEB00CF2C
	dcd 0xEB00CF26
	dcd 0xE3A00003
	dcd 0xEB00CD61
	dcd 0xE59F0050
	dcd 0xE3A01701
	dcd 0xE3A02901
	dcd 0xEB015538
	dcd 0xE59F0044
	dcd 0xEB014069
	dcd 0xEB0136BE
	dcd 0xE59F003C
	dcd 0xEB015A26
	dcd 0xEB03C32C
	dcd 0xE59F0034
	dcd 0xEB015A23
	dcd 0xEB052822
	dcd 0xEB03C338
	dcd 0xEB03C34C
	dcd 0xE3A00001
	dcd 0xEB00F416
	dcd 0xEB012417
	dcd 0xE59F0018
	dcd 0xE3A0101E
	dcd 0xFAFF6C10
	dcd 0xE8BD8008
	dcd 0x0211E450
	dcd 0x0211C4F0
	dcd 0x00000006
	dcd 0x00000010
	dcd 0x020C768C
}

extern "C" asm void func_02030d3c(void)
{
	dcd 0xE92D4008
	dcd 0xE59F0028
	dcd 0xE3A01000
	dcd 0xEB013959
	dcd 0xEB03C326
	dcd 0xEB03C376
	dcd 0xE59F0018
	dcd 0xEB015A11
	dcd 0xE59F0014
	dcd 0xEB015A0F
	dcd 0xE59F0010
	dcd 0xEB015542
	dcd 0xE8BD8008
	dcd 0x02116D40
	dcd 0x00000006
	dcd 0x00000010
	dcd 0x0211E450
}

extern "C" asm void func_02030d80(void)
{
	dcd 0xE92D4008
	dcd 0xEB03C318
	dcd 0xEB03C374
	dcd 0xE8BD8008
}

extern "C" asm void func_02030d90(void)
{
	dcd 0xE92D4008
	dcd 0xEB03C314
	dcd 0xEB03C379
	dcd 0xE8BD8008
}

extern "C" asm void func_02030da0(void)
{
	dcd 0xE12FFF1E
}

extern "C" asm void func_02030da4(void)
{
	dcd 0xE12FFF1E
}

#pragma thumb on
