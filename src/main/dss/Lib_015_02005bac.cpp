/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void pad_02005ba0(void);
    void func_02005bac(void);
    void func_02005e24(void);
    void func_02005e34(void);
    void func_02005fe4(void);
    void func_02005ff0(void);
    void _s32_div_f(void);
    void func_02006238(void);
    void func_0200641c(void);
    void func_02006420(void);
    void func_02006434(void);
    void func_02006448(void);
    void func_02006458(void);
    void func_020064a8(void);
    void func_020064dc(void);
    void func_020064e4(void);
    void func_02006570(void);
    void func_020065fc(void);
    void func_02006660(void);
    void func_02006768(void);
    void func_02006784(void);
    void func_02006b0c(void);
    void func_020073b4(void);
    void func_020073bc(void);
    void func_02007510(void);
    void func_02007594(void);
    void func_020075f4(void);
    void func_020077d0(void);
    void func_0200782c(void);
    void func_02007918(void);
    void func_02007940(void);
    void func_0200796c(void);
    void func_020079b0(void);
    void func_020079f8(void);
    void __cxa_vec_ctor(void);
    void __cxa_vec_cleanup(void);
    void func_02007b04(void);
    void func_02007b18(void);
    void func_02007b24(void);
    void func_02007b30(void);
    void __register_global_object(void);
    void func_02007b68(void);
    void func_02007d18(void);
    void func_02007d74(void);
    void func_02007e14(void);
    void func_02007e34(void);
    void func_02007e64(void);
    void func_02007e94(void);
    void func_02007ee0(void);
    void func_02007eec(void);
    void func_02007ef0(void);
    void func_02008358(void);
    void func_020084b4(void);
    void func_020085f0(void);
    void func_02008768(void);
    void func_020087b0(void);
    void func_020087b4(void);
    void func_020087cc(void);
    void func_020087e0(void);
    void func_020087ec(void);
    void func_020087f4(void);
    void func_0200885c(void);
    void func_02008860(void);
    void func_02008868(void);
    void func_0200886c(void);
    void func_02008870(void);
    void func_02008874(void);
    void func_02008878(void);
    void func_02008944(void);
    void func_020089bc(void);
    void func_020089cc(void);
    void func_020089dc(void);
    void func_020089f4(void);
    void func_02008a00(void);
    void func_02008a48(void);
    void func_02008aa8(void);
    void func_02008aac(void);
    void func_02008ca0(void);
    void func_02008cbc(void);
    void func_02008d4c(void);
    void func_02008d50(void);
    void func_02008d84(void);
    void func_02008ea0(void);
    void func_02008eb8(void);
    void func_02008ec4(void);
    void func_02008ed0(void);
    void func_020090f4(void);
    void func_020091f0(void);
    void func_020093a4(void);
    void func_02009434(void);
    void func_02009480(void);
    void func_02009498(void);
    void func_020094a8(void);
    void func_020094ac(void);
    void func_020094b8(void);
    void func_020094e0(void);
    void func_020095b0(void);
    void func_020095c4(void);
    void func_02009698(void);
    void func_02009864(void);
    void func_02009868(void);
    void func_0200986c(void);
    void func_02009964(void);
    void func_020099b0(void);
    void func_020099c8(void);
    void func_020099e0(void);
    void func_020099e4(void);
    void func_020099f0(void);
    void func_02009b90(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN6Global10setMapNameEPc(void);
    void _ZN6Global11setMinigameEi(void);
    void _ZN6status11StageStatus13setBtlMapNameEPc(void);
    void _ZN6status11StoryStatus10setChapterEi(void);
    void _ZN6status6g_GameE(void);
    void _ZN6status7g_StoryE(void);
    void __sinit_0208a1a8(void);
    void data_0201d47d(void);
    void data_0202694d(void);
    void data_0202c285(void);
    void data_0208c930(void);
    void data_0208c960(void);
    void data_020bb8f4(void);
    void data_020bb990(void);
    void data_020bb9a8(void);
    void data_020bb9c0(void);
    void data_020bb9d8(void);
    void data_020bb9f0(void);
    void data_020bba0c(void);
    void data_020bba28(void);
    void data_020bba44(void);
    void data_020bba60(void);
    void data_020bba78(void);
    void data_020bba90(void);
    void data_020bbaac(void);
    void data_020bbab4(void);
    void data_020bbb0c(void);
    void data_020bbb3c(void);
    void data_020bbb54(void);
    void data_020bbb68(void);
    void data_020bbb6c(void);
    void data_020bbb80(void);
    void data_020bbb90(void);
    void data_020bbba4(void);
    void data_020bbbbc(void);
    void data_020bbbd0(void);
    void data_020bbbe4(void);
    void data_020bbbf8(void);
    void data_020bbc08(void);
    void data_020bbc1c(void);
    void data_020bbc2c(void);
    void data_020bbc3c(void);
    void data_020bbc4c(void);
    void data_020bbcc8(void);
    void data_020bbd58(void);
    void data_020bbd68(void);
    void data_020bbd70(void);
    void data_020bbd78(void);
    void data_020bbd84(void);
    void data_020bbd90(void);
    void data_020bbd9c(void);
    void data_020bbe2c(void);
    void data_020bbe40(void);
    void data_020bbe48(void);
    void data_020bbe60(void);
    void data_020bbe78(void);
    void data_020c1b7c(void);
    void data_020c4f6c(void);
    void data_020c4f70(void);
    void data_020c4f94(void);
    void data_020c4fa4(void);
    void data_020c4fb4(void);
    void data_020c5098(void);
    void data_020c509c(void);
    void data_020c50e0(void);
    void data_020c50e4(void);
    void data_020c50e8(void);
    void data_020c5118(void);
    void data_020c511c(void);
    void data_020c514c(void);
    void data_020c6170(void);
    void data_020c6da4(void);
    void data_020c7470(void);
    void data_020c7a84(void);
    void data_020ed288(void);
    void data_020edb88(void);
    void data_020eed14(void);
    void data_020ef880(void);
    void data_020efc58(void);
    void data_020efd88(void);
    void data_0210a464(void);
    void data_0210baf8(void);
    void data_0210bafa(void);
    void data_0210bb04(void);
    void data_0210bb94(void);
    void data_0210bd4c(void);
    void data_0210beb8(void);
    void data_0210bec8(void);
    void data_02116ce0(void);
    void data_02116ce8(void);
    void data_02116d40(void);
    void data_0211a60c(void);
    void data_0211c4cc(void);
    void data_0211c4f0(void);
    void data_0211e450(void);
    void data_0211fc7c(void);
    void func_00ab1218(void);
    void func_02000bc0(void);
    void func_02004f88(void);
    void func_0200a6c8(void);
    void func_0200aae0(void);
    void func_0200aae4(void);
    void func_0200ab08(void);
    void func_0200ab0c(void);
    void func_0200b864(void);
    void func_0200baf4(void);
    void func_0200bd68(void);
    void func_0200bf98(void);
    void func_0200c010(void);
    void func_0200d550(void);
    void func_0200d5cc(void);
    void func_02026934(void);
    void func_0202c25c(void);
    void func_0202d014(void);
    void func_0203d670(void);
    void func_0203f268(void);
    void func_02048e34(void);
    void func_02048e4c(void);
    void func_02048e50(void);
    void func_02048e60(void);
    void func_02048ee0(void);
    void func_02048f7c(void);
    void func_02048f90(void);
    void func_02048ff8(void);
    void func_02052424(void);
    void func_02054300(void);
    void func_02054690(void);
    void func_02057000(void);
    void func_020573fc(void);
    void func_020574bc(void);
    void func_020574c4(void);
    void func_020580bc(void);
    void func_020580fc(void);
    void func_02058128(void);
    void func_02058138(void);
    void func_02058430(void);
    void func_020586e8(void);
    void func_020587d4(void);
    void func_020588f8(void);
    void func_02058a84(void);
    void func_02058bcc(void);
    void func_02058c10(void);
    void func_0205c710(void);
    void func_0205c78c(void);
    void func_02061ad0(void);
    void func_02061b24(void);
    void func_0206382c(void);
    void func_02063874(void);
    void func_020638dc(void);
    void func_02063a78(void);
    void func_02063f5c(void);
    void func_02064258(void);
    void func_02064430(void);
    void func_0206466c(void);
    void func_02064714(void);
    void func_020648b8(void);
    void func_020648cc(void);
    void func_02064928(void);
    void func_02064964(void);
    void func_02064978(void);
    void func_0206541c(void);
    void func_0206dd70(void);
    void func_02079d78(void);
    void func_02079e40(void);
    void func_0207e7e8(void);
    void func_0207e804(void);
    void func_0207e810(void);
    void func_0207e88c(void);
    void func_0207e8e0(void);
    void func_0207e8f4(void);
    void func_0207ea64(void);
    void func_0207eac0(void);
    void func_0207ebd4(void);
    void func_0207f268(void);
    void func_0207f280(void);
    void func_0207f290(void);
    void func_0207f2b4(void);
    void func_0207f5c8(void);
    void func_0207f87c(void);
    void func_0207f900(void);
    void func_0207f924(void);
    void func_0207f95c(void);
    void func_02080e90(void);
    void func_0208313c(void);
    void func_02084dd4(void);
    void func_020861b0(void);
    void func_020861c4(void);
    void func_02086278(void);
    void func_020865f4(void);
    void func_02086de4(void);
    void func_02087564(void);
    void func_02087590(void);
    void func_020875a4(void);
    void func_02087bd0(void);
    void func_02088308(void);
    void func_02089580(void);
    void func_0208a104(void);
    void func_021210e0(void);
    void func_02122968(void);
    void func_02122990(void);
    void func_02122994(void);
    void func_02122998(void);
    void func_0212299c(void);
    void func_02122e80(void);
    void func_02127458(void);
    void func_02127494(void);
    void func_02127640(void);
    void func_02127770(void);
    void func_0212785c(void);
    void func_0212a1e8(void);
    void func_0212a224(void);
    void func_0212a2c4(void);
    void func_0212a320(void);
    void func_0212a344(void);
    void func_0212aaac(void);
    void func_0212ab14(void);
    void func_0212ab48(void);
    void func_0212ab60(void);
    void func_02132210(void);
    void func_02132228(void);
    void func_02132264(void);
    void func_0213241c(void);
    void func_02132670(void);
    void func_02132778(void);
    void func_021372e8(void);
    void func_02137350(void);
    void func_021373b8(void);
    void func_021373f8(void);
    void func_02137430(void);
    void func_0216fd7c(void);
    void func_0217ad90(void);
    void g_Global(void);
    void g_Stage(void);
    void sym_L_02006240(void);
    void sym_p__sinit_0208a1a8(void);
}

#pragma thumb off

extern "C" asm void pad_02005ba0(void)
{
	dcd 0xE0200001
	dcd 0xE0201001
	dcd 0xE0200001
}

extern "C" asm void func_02005bac(void)
{
	eors r2, r0, r1
	eormi r1, r1, #0x80000000
	bmi func_02004f88
	subs r12, r0, r1
	eorcc r12, r12, #0x80000000
	subcc r0, r0, r12
	addcc r1, r1, r12
	mov r2, #0x80000000
	mov r3, r0, lsr #0x17
	orr r0, r2, r0, lsl #8
	ands r12, r3, #0xff
	cmpne r12, #0xff
	beq lbl_02005cd4
	mov r12, r1, lsr #0x17
	orr r1, r2, r1, lsl #8
	ands r2, r12, #0xff
	beq lbl_02005d14
lbl_02005bf0:
	subs r12, r3, r12
	beq lbl_02005c38
	rsb r2, r12, #0x20
	movs r2, r1, lsl r2
	mov r1, r1, lsr r12
	orrne r1, r1, #1
	subs r0, r0, r1
	bpl lbl_02005c7c
	ands r1, r0, #0xff
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
lbl_02005c38:
	subs r0, r0, r1
	beq lbl_02005de0
	mov r2, r3, lsl #0x17
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz r12, r0
	movs r0, r0, lsl r12
	sub r3, r3, r12
	cmp r3, #0
	bgt lbl_02005c6c
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
lbl_02005c6c:
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
lbl_02005c7c:
	mov r2, r3, lsl #0x17
	and r2, r2, #0x80000000
	bic r3, r3, #0x100
	clz r12, r0
	movs r0, r0, lsl r12
	sub r3, r3, r12
	cmp r3, #0
	bgt lbl_02005ca8
	rsb r3, r3, #9
	orr r0, r2, r0, lsr r3
	bx lr
lbl_02005ca8:
	ands r1, r0, #0xff
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bxeq lr
	tst r1, #0x80
	bxeq lr
	ands r1, r1, #0x7f
	andeqs r1, r0, #1
	addne r0, r0, #1
	bx lr
lbl_02005cd4:
	cmp r3, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	ands r3, r3, #0xff
	beq lbl_02005d3c
	movs r0, r0, lsl #1
	bne lbl_02005e14
	mov r12, r1, lsr #0x17
	mov r1, r1, lsl #9
	ands r12, r12, #0xff
	beq lbl_02005e08
	cmp r12, #0xff
	blt lbl_02005e08
	cmp r1, #0
	beq lbl_02005e1c
	b lbl_02005e14
lbl_02005d14:
	cmp r12, #0x100
	movge r2, #0x80000000
	movlt r2, #0
	and r3, r3, #0xff
	ands r12, r12, #0xff
	beq lbl_02005da4
lbl_02005d2c:
	eor r2, r2, #0x80000000
	movs r1, r1, lsl #1
	bne lbl_02005e14
	b lbl_02005e08
lbl_02005d3c:
	movs r0, r0, lsl #1
	beq lbl_02005d74
	mov r0, r0, lsr #1
	mov r3, #1
	mov r12, r1, lsr #0x17
	mov r1, r1, lsl #8
	ands r12, r12, #0xff
	beq lbl_02005da4
	cmp r12, #0xff
	beq lbl_02005d2c
	orr r1, r1, #0x80000000
	orr r3, r3, r2, lsr #23
	orr r12, r12, r2, lsr #23
	b lbl_02005bf0
lbl_02005d74:
	mov r3, r1, lsr #0x17
	mov r0, r1, lsl #9
	ands r2, r3, #0xff
	beq lbl_02005d98
	cmp r2, #0xff
	blt lbl_02005dc0
	cmp r0, #0
	bne lbl_02005e00
	b lbl_02005e08
lbl_02005d98:
	cmp r0, #0
	beq lbl_02005de0
	b lbl_02005dc0
lbl_02005da4:
	movs r1, r1, lsl #1
	beq lbl_02005dc8
	mov r1, r1, lsr #1
	mov r12, #1
	orr r12, r12, r2, lsr #23
	orr r3, r3, r2, lsr #23
	b lbl_02005bf0
lbl_02005dc0:
	mov r0, r1
	bx lr
lbl_02005dc8:
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	orr r0, r2, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
lbl_02005de0:
	mov r0, #0
	bx lr
	cmp r0, #0
	subges r3, r3, #1
	add r0, r0, r0
	mov r0, r0, lsr #9
	orr r0, r0, r3, lsl #23
	bx lr
lbl_02005e00:
	mvn r0, #0x80000000
	bx lr
lbl_02005e08:
	mov r0, #0xff000000
	orr r0, r2, r0, lsr #1
	bx lr
lbl_02005e14:
	mvn r0, #0x80000000
	bx lr
lbl_02005e1c:
	mvn r0, #0x80000000
	bx lr
}

extern "C" asm void func_02005e24(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
	mov r4, r1
	orr r4, r4, #1
	dcd 0xEA000003
}

extern "C" asm void func_02005e34(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
	eor r4, r1, r3
	mov r4, r4, asr #1
	mov r4, r4, lsl #1
lbl_02005e44:
	orrs r5, r3, r2
	bne lbl_02005e54
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
lbl_02005e54:
	mov r5, r0, lsr #0x1f
	add r5, r5, r1
	mov r6, r2, lsr #0x1f
	add r6, r6, r3
	orrs r6, r5, r6
	bne lbl_02005e88
	mov r1, r2
	bl _s32_div_f
	ands r4, r4, #1
	movne r0, r1
	mov r1, r0, asr #0x1f
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
lbl_02005e88:
	cmp r1, #0
	bge lbl_02005e98
	rsbs r0, r0, #0
	rsc r1, r1, #0
lbl_02005e98:
	cmp r3, #0
	bge lbl_02005ea8
	rsbs r2, r2, #0
	rsc r3, r3, #0
lbl_02005ea8:
	orrs r5, r1, r0
	beq lbl_02005fcc
	mov r5, #0
	mov r6, #1
	cmp r3, #0
	bmi lbl_02005ed4
lbl_02005ec0:
	add r5, r5, #1
	adds r2, r2, r2
	adcs r3, r3, r3
	bpl lbl_02005ec0
	add r6, r6, r5
lbl_02005ed4:
	cmp r1, #0
	blt lbl_02005ef4
lbl_02005edc:
	cmp r6, #1
	beq lbl_02005ef4
	sub r6, r6, #1
	adds r0, r0, r0
	adcs r1, r1, r1
	bpl lbl_02005edc
lbl_02005ef4:
	mov r7, #0
	mov r12, #0
	mov r11, #0
	b lbl_02005f1c
lbl_02005f04:
	orr r12, r12, #1
	subs r6, r6, #1
	beq lbl_02005f74
	adds r0, r0, r0
	adcs r1, r1, r1
	adcs r7, r7, r7
lbl_02005f1c:
	subs r0, r0, r2
	sbcs r1, r1, r3
	sbcs r7, r7, #0
	adds r12, r12, r12
	adc r11, r11, r11
	cmp r7, #0
	bge lbl_02005f04
lbl_02005f38:
	subs r6, r6, #1
	beq lbl_02005f6c
	adds r0, r0, r0
	adcs r1, r1, r1
	adc r7, r7, r7
	adds r0, r0, r2
	adcs r1, r1, r3
	adc r7, r7, #0
	adds r12, r12, r12
	adc r11, r11, r11
	cmp r7, #0
	bge lbl_02005f04
	b lbl_02005f38
lbl_02005f6c:
	adds r0, r0, r2
	adc r1, r1, r3
lbl_02005f74:
	ands r7, r4, #1
	moveq r0, r12
	moveq r1, r11
	beq lbl_02005fac
	subs r7, r5, #0x20
	movge r0, r1, lsr r7
	bge lbl_02005fd0
	rsb r7, r5, #0x20
	mov r0, r0, lsr r5
	orr r0, r0, r1, lsl r7
	mov r1, r1, lsr r5
	b lbl_02005fac
	mov r0, r1, lsr r7
	mov r1, #0
lbl_02005fac:
	cmp r4, #0
	blt lbl_02005fbc
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
lbl_02005fbc:
	rsbs r0, r0, #0
	rsc r1, r1, #0
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
lbl_02005fcc:
	mov r0, #0
lbl_02005fd0:
	mov r1, #0
	cmp r4, #0
	blt lbl_02005fbc
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
}

extern "C" asm void func_02005fe4(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
	mov r4, #0
	dcd 0xEA000001
}

extern "C" asm void func_02005ff0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, r12, lr}
	mov r4, #1
lbl_02005ff8:
	orrs r5, r3, r2
	bne lbl_02006008
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
lbl_02006008:
	orrs r5, r1, r3
	dcd 0x1AFFFFA5
	mov r1, r2
	dcd 0xEB000089
	cmp r4, #0
	movne r0, r1
	mov r1, #0
	ldmia sp!, {r4, r5, r6, r7, r11, r12, lr}
	bx lr
}

extern "C" asm void _s32_div_f(void)
{
	eor r12, r0, r1
	and r12, r12, #0x80000000
	cmp r0, #0
	rsblt r0, r0, #0
	addlt r12, r12, #1
	cmp r1, #0
	rsblt r1, r1, #0
	beq lbl_02006224
	cmp r0, r1
	movcc r1, r0
	movcc r0, #0
	bcc lbl_02006224
	mov r2, #0x1c
	mov r3, r0, lsr #4
	cmp r1, r3, lsr #12
	suble r2, r2, #0x10
	movle r3, r3, lsr #0x10
	cmp r1, r3, lsr #4
	suble r2, r2, #8
	movle r3, r3, lsr #8
	cmp r1, r3
	suble r2, r2, #4
	movle r3, r3, lsr #4
	mov r0, r0, lsl r2
	rsb r1, r1, #0
	adds r0, r0, r0
	add r2, r2, r2, lsl #1
	add pc, pc, r2, lsl #2
	mov r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	mov r1, r3
lbl_02006224:
	ands r3, r12, #0x80000000
	rsbne r0, r0, #0
	ands r3, r12, #1
	rsbne r1, r1, #0
	bx lr
}

extern "C" asm void func_02006238(void)
{
	cmp r1, #0
	bxeq lr
lbl_02006240:
	cmp r0, r1
	movcc r1, r0
	movcc r0, #0
	bxcc lr
	mov r2, #0x1c
	mov r3, r0, lsr #4
	cmp r1, r3, lsr #12
	suble r2, r2, #0x10
	movle r3, r3, lsr #0x10
	cmp r1, r3, lsr #4
	suble r2, r2, #8
	movle r3, r3, lsr #8
	cmp r1, r3
	suble r2, r2, #4
	movle r3, r3, lsr #4
	mov r0, r0, lsl r2
	rsb r1, r1, #0
	adds r0, r0, r0
	add r2, r2, r2, lsl #1
	add pc, pc, r2, lsl #2
	mov r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	adcs r3, r1, r3, lsl #1
	subcc r3, r3, r1
	adcs r0, r0, r0
	mov r1, r3
	bx lr
}

extern "C" asm void func_0200641c(void)
{
	bx lr
}

extern "C" asm void func_02006420(void)
{
	str lr, [sp, #-4]!
	mov r1, r0
	mov r0, #3
	swi 0x123456
	ldmia sp!, {pc}
}

extern "C" asm void func_02006434(void)
{
	str lr, [sp, #-4]!
	mov r1, #0
	mov r0, #7
	swi 0x123456
	ldmia sp!, {pc}
}

extern "C" asm void func_02006448(void)
{
	mov r1, #0
	mov r0, #0x18
	swi 0x123456
	mov pc, lr
}

extern "C" asm void func_02006458(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r6, r2
	ldr r5, [r6]
	mov r7, r1
	cmp r5, #0
	mov r4, #0
	bls lbl_020064a0
lbl_02006474:
	bl func_02006434
	and r1, r0, #0xff
	cmp r1, #0xd
	strb r0, [r7, r4]
	cmpne r1, #0xa
	addeq r0, r4, #1
	streq r0, [r6]
	beq lbl_020064a0
	add r4, r4, #1
	cmp r4, r5
	bcc lbl_02006474
lbl_020064a0:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020064a8(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r5, [r2]
	mov r6, r1
	cmp r5, #0
	mov r4, #0
	bls lbl_020064d4
lbl_020064c0:
	add r0, r6, r4
	bl func_02006420
	add r4, r4, #1
	cmp r4, r5
	bcc lbl_020064c0
lbl_020064d4:
	mov r0, #0
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020064dc(void)
{
	mov r0, #0
	bx lr
}

extern "C" asm void func_020064e4(void)
{
	stmdb sp!, {r4, lr}
	ldrsb r2, [r0]
	tst r2, #1
	bne lbl_02006504
	mov r2, r2, asr #1
	str r2, [r1]
	add r0, r0, #1
	ldmia sp!, {r4, pc}
lbl_02006504:
	tst r2, #2
	ldrb r4, [r0, #1]
	bne lbl_02006524
	mov r2, r2, asr #2
	orr r2, r4, r2, lsl #8
	str r2, [r1]
	add r0, r0, #2
	ldmia sp!, {r4, pc}
lbl_02006524:
	tst r2, #4
	ldrb lr, [r0, #2]
	bne lbl_0200654c
	mov r3, r2, asr #3
	mov r2, r4, lsl #8
	orr r2, r2, r3, lsl #16
	orr r2, lr, r2
	str r2, [r1]
	add r0, r0, #3
	ldmia sp!, {r4, pc}
lbl_0200654c:
	ldrb r12, [r0, #3]
	mov r3, r2, asr #3
	mov r2, r4, lsl #0x10
	orr r2, r2, r3, lsl #24
	orr r2, r2, lr, lsl #8
	orr r2, r12, r2
	str r2, [r1]
	add r0, r0, #4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02006570(void)
{
	stmdb sp!, {r4, lr}
	ldrb r2, [r0]
	tst r2, #1
	bne lbl_02006590
	mov r2, r2, lsr #1
	str r2, [r1]
	add r0, r0, #1
	ldmia sp!, {r4, pc}
lbl_02006590:
	tst r2, #2
	ldrb r4, [r0, #1]
	bne lbl_020065b0
	mov r2, r2, lsr #2
	orr r2, r4, r2, lsl #8
	str r2, [r1]
	add r0, r0, #2
	ldmia sp!, {r4, pc}
lbl_020065b0:
	tst r2, #4
	ldrb lr, [r0, #2]
	bne lbl_020065d8
	mov r3, r2, lsr #3
	mov r2, r4, lsl #8
	orr r2, r2, r3, lsl #16
	orr r2, lr, r2
	str r2, [r1]
	add r0, r0, #3
	ldmia sp!, {r4, pc}
lbl_020065d8:
	ldrb r12, [r0, #3]
	mov r3, r2, lsr #3
	mov r2, r4, lsl #0x10
	orr r2, r2, r3, lsl #24
	orr r2, r2, lr, lsl #8
	orr r2, r12, r2
	str r2, [r1]
	add r0, r0, #4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020065fc(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	subs r6, r1, #1
	mov r5, #0
	bmi lbl_02006658
	mov r1, #0xc
lbl_02006610:
	add r3, r5, r6
	mov r4, r3, asr #1
	mul r3, r4, r1
	ldr r12, [r0, r3]
	add lr, r0, r3
	cmp r2, r12
	subcc r6, r4, #1
	bcc lbl_02006650
	ldr r3, [lr, #4]
	bic r3, r3, #1
	add r3, r12, r3
	cmp r2, r3
	addhi r5, r4, #1
	bhi lbl_02006650
	mov r0, lr
	ldmia sp!, {r4, r5, r6, pc}
lbl_02006650:
	cmp r5, r6
	ble lbl_02006610
lbl_02006658:
	mov r0, #0
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02006660(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0xc
	mov r4, r0
	mov r9, r1
	mov r2, #0
	str r2, [r9, #4]
	mov r0, r9
	mov r1, r4
	str r2, [r9, #8]
	bl func_02007e14
	cmp r0, #0
	addeq sp, sp, #0xc
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	ldr r0, [r9, #0xc]
	ldr r1, [r9, #0x10]
	ldr r3, =0x2AAAAAAB
	sub r5, r1, r0
	smull r2, r1, r3, r5
	mov r3, r5, lsr #0x1f
	mov r2, r4
	add r1, r3, r1, asr #1
	bl func_020065fc
	cmp r0, #0
	addeq sp, sp, #0xc
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	ldr r1, [r0, #4]
	tst r1, #1
	addne r1, r0, #8
	ldreq r1, [r0, #8]
	str r1, [r9, #4]
	ldr r1, [r0]
	str r1, [r9]
	ldr r1, [r0]
	ldr r0, [r9, #4]
	sub r7, r4, r1
	bl func_02007e34
	mov r8, #0
	add r5, sp, #4
	add r4, sp, #0
	add r6, sp, #8
lbl_02006700:
	mov r1, r6
	bl func_02006570
	ldr r1, [sp, #8]
	cmp r1, #0
	addeq sp, sp, #0xc
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	mov r1, r5
	bl func_02006570
	mov r1, r4
	bl func_02006570
	ldr r1, [sp, #8]
	add r2, r8, r1
	cmp r7, r2
	addcc sp, sp, #0xc
	ldmccia sp!, {r4, r5, r6, r7, r8, r9, pc}
	ldr r1, [sp, #4]
	add r8, r2, r1
	cmp r7, r8
	bhi lbl_02006700
	ldr r1, [r9, #4]
	ldr r0, [sp]
	add r0, r1, r0
	str r0, [r9, #8]
	add sp, sp, #0xc
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02006768(void)
{
	ldr r0, [r0, #8]
	cmp r0, #0
	ldrneb r0, [r0]
	andne r0, r0, #0x1f
	moveq r0, #0
	and r0, r0, #0xff
	bx lr
}

extern "C" asm void func_02006784(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0xa0
	mov r4, r0
lbl_02006790:
	ldr r2, [r4, #8]
	cmp r2, #0
	beq lbl_020067a8
	ldrb r0, [r2]
	tst r0, #0x80
	beq lbl_020067ec
lbl_020067a8:
	mov r1, r4
	add r0, r4, #0x18
	bl func_02007d18
	mov r1, r4
	bl func_02006660
	ldr r0, [r4, #4]
	cmp r0, #0
	addeq sp, sp, #0xa0
	moveq r0, #0xff
	ldmeqia sp!, {r3, r4, r5, pc}
	mov r1, r4
	add r0, r4, #0x18
	bl func_02007d74
	ldr r0, [r4, #8]
	cmp r0, #0
	beq lbl_02006790
	b lbl_02006abc
lbl_020067ec:
	and r0, r0, #0x1f
	cmp r0, #0x13
	addls pc, pc, r0, lsl #2
	b lbl_02006ab0
	b lbl_02006ab0
	b lbl_02006ab0
	b lbl_0200684c
	b lbl_02006864
	b lbl_02006884
	b lbl_0200689c
	b lbl_020068c4
	b lbl_020068e4
	b lbl_02006904
	b lbl_0200692c
	b lbl_0200695c
	b lbl_02006974
	b lbl_02006994
	b lbl_020069b0
	b lbl_02006ab0
	b lbl_020069c4
	b lbl_020069f0
	b lbl_02006a3c
	b lbl_02006a70
	b lbl_02006a9c
lbl_0200684c:
	add r1, sp, #0x9c
	add r0, r2, #1
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006864:
	add r1, sp, #0x94
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x98
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006884:
	add r1, sp, #0x90
	add r0, r2, #1
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_0200689c:
	add r1, sp, #0x84
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x88
	bl func_02006570
	add r1, sp, #0x8c
	bl func_02006570
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_020068c4:
	add r1, sp, #0x7c
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x80
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_020068e4:
	add r1, sp, #0x74
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x78
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006904:
	add r1, sp, #0x68
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x6c
	bl func_020064e4
	add r1, sp, #0x70
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_0200692c:
	add r1, sp, #0x58
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x5c
	bl func_020064e4
	add r1, sp, #0x60
	bl func_02006570
	add r1, sp, #0x64
	bl func_02006570
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_0200695c:
	add r1, sp, #0x54
	add r0, r2, #1
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006974:
	add r1, sp, #0x4c
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x50
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006994:
	add r1, sp, #0x44
	add r0, r2, #5
	bl func_02006570
	add r1, sp, #0x48
	bl func_020064e4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_020069b0:
	add r1, sp, #0x40
	add r0, r2, #1
	bl func_020064e4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_020069c4:
	add r1, sp, #0x34
	add r0, r2, #1
	bl func_02006570
	add r1, sp, #0x38
	bl func_02006570
	add r1, sp, #0x3c
	bl func_020064e4
	ldr r1, [sp, #0x34]
	add r0, r0, r1, lsl #2
	str r0, [r4, #8]
	b lbl_02006abc
lbl_020069f0:
	add r1, sp, #0x24
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x28
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	orr r2, r1, r5, lsl #24
	add r1, sp, #0x2c
	add r0, r0, #4
	str r2, [sp, #0x30]
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006a3c:
	add r1, sp, #0x14
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x1c
	bl func_020064e4
	add r1, sp, #0x18
	add r0, r0, #1
	bl func_020064e4
	add r1, sp, #0x20
	bl func_020064e4
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006a70:
	add r1, sp, #8
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0xc
	add r0, r0, #1
	bl func_020064e4
	add r1, sp, #0x10
	bl func_02006570
	add r0, r0, #4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006a9c:
	add r1, sp, #4
	add r0, r2, #1
	bl func_020064e4
	str r0, [r4, #8]
	b lbl_02006abc
lbl_02006ab0:
	add sp, sp, #0xa0
	mov r0, #0xff
	ldmia sp!, {r3, r4, r5, pc}
lbl_02006abc:
	ldr r2, [r4, #8]
	ldrb r0, [r2]
	and r0, r0, #0x1f
	cmp r0, #1
	addne sp, sp, #0xa0
	ldmneia sp!, {r3, r4, r5, pc}
	add r5, sp, #0
lbl_02006ad8:
	mov r1, r5
	add r0, r2, #1
	bl func_020064e4
	ldr r1, [r4, #8]
	ldr r0, [sp]
	add r2, r1, r0
	str r2, [r4, #8]
	ldrb r0, [r2]
	and r0, r0, #0x1f
	cmp r0, #1
	beq lbl_02006ad8
	add sp, sp, #0xa0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02006b0c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xa4
	mov r9, r0
	mov r8, r1
	str r2, [sp]
lbl_02006b20:
	ldr r2, [r8, #8]
	cmp r2, #0
	bne lbl_02006b68
	mov r0, r9
	mov r1, r8
	bl func_02007d18
	mov r1, r8
	bl func_02006660
	ldr r0, [r8, #4]
	cmp r0, #0
	bne lbl_02006b50
	bl func_02007b30
lbl_02006b50:
	mov r0, r9
	mov r1, r8
	bl func_02007d74
	ldr r2, [r8, #8]
	cmp r2, #0
	beq lbl_02006b20
lbl_02006b68:
	ldrb r7, [r2]
	and r0, r7, #0x1f
	cmp r0, #0x13
	addls pc, pc, r0, lsl #2
	b lbl_020073a0
	b lbl_020073a0
	b lbl_02006bcc
	b lbl_02006bec
	b lbl_02006c38
	b lbl_02006cb8
	b lbl_02006d18
	b lbl_02006d9c
	b lbl_02006e0c
	b lbl_02006e7c
	b lbl_02006f24
	b lbl_02006fd8
	b lbl_02007034
	b lbl_020070c4
	b lbl_020070f0
	b lbl_020073a0
	b lbl_0200713c
	b lbl_02007178
	b lbl_0200721c
	b lbl_020072c8
	b lbl_0200738c
lbl_02006bcc:
	add r1, sp, #0xa0
	add r0, r2, #1
	bl func_020064e4
	ldr r1, [r8, #8]
	ldr r0, [sp, #0xa0]
	add r0, r1, r0
	str r0, [r8, #8]
	b lbl_020073a4
lbl_02006bec:
	add r1, sp, #0x9c
	add r0, r2, #1
	bl func_020064e4
	mov r4, r0
	ldrb r1, [r4]
	ldrb r0, [r4, #1]
	ldrb r2, [r4, #2]
	ldrb r3, [r4, #3]
	orr r0, r1, r0, lsl #8
	orr r0, r0, r2, lsl #16
	ldr r5, [r9, #0x18]
	ldr r1, [sp, #0x9c]
	orr r2, r0, r3, lsl #24
	add r0, r5, r1
	mvn r1, #0
	blx r2
	add r0, r4, #4
	str r0, [r8, #8]
	b lbl_020073a4
lbl_02006c38:
	add r1, sp, #0x94
	add r0, r2, #1
	and r4, r7, #0x40
	bl func_020064e4
	add r1, sp, #0x98
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x94]
	ldreqb r0, [r1, r0]
	beq lbl_02006c94
	ldr r0, [sp, #0x94]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
	and r0, r0, #0xff
lbl_02006c94:
	cmp r0, #0
	beq lbl_02006cb0
	ldr r3, [r9, #0x18]
	ldr r0, [sp, #0x98]
	mvn r1, #0
	add r0, r3, r0
	blx r2
lbl_02006cb0:
	str r4, [r8, #8]
	b lbl_020073a4
lbl_02006cb8:
	add r1, sp, #0x90
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x90]
	ldreq r0, [r1, r0]
	beq lbl_02006d08
	ldr r0, [sp, #0x90]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
lbl_02006d08:
	mvn r1, #0
	blx r2
	str r4, [r8, #8]
	b lbl_020073a4
lbl_02006d18:
	add r1, sp, #0x84
	add r0, r2, #1
	bl func_020064e4
	add r1, sp, #0x88
	bl func_02006570
	add r1, sp, #0x8c
	bl func_02006570
	ldr r3, [r9, #0x18]
	ldr r2, [sp, #0x84]
	ldr r6, [sp, #0x88]
	ldrb r5, [r0]
	ldrb r4, [r0, #1]
	ldr r1, [sp, #0x8c]
	add r2, r3, r2
	ldrb r10, [r0, #2]
	orr r3, r5, r4, lsl #8
	mla r4, r6, r1, r2
	ldrb r2, [r0, #3]
	orr r1, r3, r10, lsl #16
	cmp r6, #0
	orr r5, r1, r2, lsl #24
	add r11, r0, #4
	beq lbl_02006d94
	mvn r10, #0
lbl_02006d78:
	ldr r0, [sp, #0x8c]
	mov r1, r10
	sub r4, r4, r0
	mov r0, r4
	blx r5
	subs r6, r6, #1
	bne lbl_02006d78
lbl_02006d94:
	str r11, [r8, #8]
	b lbl_020073a4
lbl_02006d9c:
	add r1, sp, #0x7c
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x80
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x7c]
	ldreq r3, [r1, r0]
	beq lbl_02006df4
	ldr r0, [sp, #0x7c]
	add r0, r9, r0, lsl #2
	ldr r3, [r0, #0x1c]
lbl_02006df4:
	ldr r0, [sp, #0x80]
	mov r1, #0
	add r0, r3, r0
	blx r2
	str r4, [r8, #8]
	b lbl_020073a4
lbl_02006e0c:
	add r1, sp, #0x74
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x78
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x74]
	ldreq r3, [r1, r0]
	beq lbl_02006e64
	ldr r0, [sp, #0x74]
	add r0, r9, r0, lsl #2
	ldr r3, [r0, #0x1c]
lbl_02006e64:
	ldr r0, [sp, #0x78]
	mvn r1, #0
	add r0, r3, r0
	blx r2
	str r4, [r8, #8]
	b lbl_020073a4
lbl_02006e7c:
	add r1, sp, #0x68
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x6c
	bl func_020064e4
	add r1, sp, #0x70
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	orr r2, r1, r5, lsl #24
	tst r7, #0x40
	add r5, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x68]
	ldreqsh r0, [r1, r0]
	beq lbl_02006ee4
	ldr r0, [sp, #0x68]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
	mov r0, r0, lsl #0x10
	mov r0, r0, asr #0x10
lbl_02006ee4:
	cmp r0, #0
	beq lbl_02006f1c
	cmp r4, #0
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x6c]
	ldreq r3, [r1, r0]
	beq lbl_02006f0c
	ldr r0, [sp, #0x6c]
	add r0, r9, r0, lsl #2
	ldr r3, [r0, #0x1c]
lbl_02006f0c:
	ldr r0, [sp, #0x70]
	mvn r1, #0
	add r0, r3, r0
	blx r2
lbl_02006f1c:
	str r5, [r8, #8]
	b lbl_020073a4
lbl_02006f24:
	add r1, sp, #0x58
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x5c
	bl func_020064e4
	add r1, sp, #0x60
	bl func_02006570
	add r1, sp, #0x64
	bl func_02006570
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r5, r1, r5, lsl #24
	add r11, r0, #4
	beq lbl_02006f88
	ldr r1, [sp, #0x58]
	ldr r0, [sp, #0x5c]
	add r1, r9, r1, lsl #2
	ldr r1, [r1, #0x1c]
	b lbl_02006f98
lbl_02006f88:
	ldr r2, [r9, #0x18]
	ldr r1, [sp, #0x58]
	ldr r0, [sp, #0x5c]
	ldr r1, [r2, r1]
lbl_02006f98:
	add r4, r1, r0
	ldr r6, [sp, #0x60]
	ldr r0, [sp, #0x64]
	cmp r6, #0
	mla r4, r6, r0, r4
	beq lbl_02006fd0
	mvn r10, #0
lbl_02006fb4:
	ldr r0, [sp, #0x64]
	mov r1, r10
	sub r4, r4, r0
	mov r0, r4
	blx r5
	subs r6, r6, #1
	bne lbl_02006fb4
lbl_02006fd0:
	str r11, [r8, #8]
	b lbl_020073a4
lbl_02006fd8:
	add r1, sp, #0x54
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x54]
	ldreq r0, [r1, r0]
	beq lbl_02007028
	ldr r0, [sp, #0x54]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
lbl_02007028:
	blx r2
	str r4, [r8, #8]
	b lbl_020073a4
lbl_02007034:
	add r1, sp, #0x4c
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x50
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	tst r7, #0x40
	orr r1, r1, r5, lsl #24
	add r5, r0, #4
	ldreq r2, [r9, #0x18]
	ldreq r0, [sp, #0x4c]
	ldreqb r0, [r2, r0]
	beq lbl_02007090
	ldr r0, [sp, #0x4c]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
	and r0, r0, #0xff
lbl_02007090:
	cmp r0, #0
	beq lbl_020070bc
	cmp r4, #0
	ldreq r2, [r9, #0x18]
	ldreq r0, [sp, #0x50]
	ldreq r0, [r2, r0]
	beq lbl_020070b8
	ldr r0, [sp, #0x50]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
lbl_020070b8:
	blx r1
lbl_020070bc:
	str r5, [r8, #8]
	b lbl_020073a4
lbl_020070c4:
	ldr r0, [sp]
	cmp r0, r2
	addeq sp, sp, #0xa4
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r1, sp, #0x44
	add r0, r2, #5
	bl func_02006570
	add r1, sp, #0x48
	bl func_020064e4
	str r0, [r8, #8]
	b lbl_020073a4
lbl_020070f0:
	add r1, sp, #0x40
	add r0, r2, #1
	bl func_020064e4
	ldr r2, [r9, #0x18]
	ldr r1, [sp, #0x40]
	mov r4, r0
	add r0, r2, r1
	ldr r2, [r0, #8]
	cmp r2, #0
	beq lbl_02007134
	ldr r0, [r0]
	ldr r1, [r9, #4]
	cmp r1, r0
	streq r2, [r9, #8]
	beq lbl_02007134
	mvn r1, #0
	blx r2
lbl_02007134:
	str r4, [r8, #8]
	b lbl_020073a4
lbl_0200713c:
	ldr r0, [sp]
	cmp r0, r2
	addeq sp, sp, #0xa4
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	add r1, sp, #0x34
	add r0, r2, #1
	bl func_02006570
	add r1, sp, #0x38
	bl func_02006570
	add r1, sp, #0x3c
	bl func_020064e4
	ldr r1, [sp, #0x34]
	add r0, r0, r1, lsl #2
	str r0, [r8, #8]
	b lbl_020073a4
lbl_02007178:
	add r1, sp, #0x24
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x28
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	orr r2, r1, r5, lsl #24
	add r1, sp, #0x2c
	add r0, r0, #4
	str r2, [sp, #0x30]
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r2, r1, r5, lsl #24
	add r4, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x24]
	ldreq r5, [r1, r0]
	beq lbl_020071fc
	ldr r0, [sp, #0x24]
	add r0, r9, r0, lsl #2
	ldr r5, [r0, #0x1c]
lbl_020071fc:
	ldr r0, [sp, #0x28]
	ldr r3, [sp, #0x30]
	ldr r1, [sp, #0x2c]
	add r0, r5, r0
	add r1, r3, r1
	blx r2
	str r4, [r8, #8]
	b lbl_020073a4
lbl_0200721c:
	add r1, sp, #0x14
	add r0, r2, #1
	and r5, r7, #0x20
	bl func_020064e4
	add r1, sp, #0x1c
	bl func_020064e4
	ldrb r2, [r0], #1
	add r1, sp, #0x18
	and r4, r2, #0x20
	bl func_020064e4
	add r1, sp, #0x20
	bl func_020064e4
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r6, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r5, #0
	orr r2, r1, r6, lsl #24
	add r5, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0x14]
	ldreq r0, [r1, r0]
	beq lbl_0200728c
	ldr r0, [sp, #0x14]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
lbl_0200728c:
	cmp r4, #0
	ldreq r3, [r9, #0x18]
	ldreq r1, [sp, #0x18]
	ldreq r4, [r3, r1]
	beq lbl_020072ac
	ldr r1, [sp, #0x18]
	add r1, r9, r1, lsl #2
	ldr r4, [r1, #0x1c]
lbl_020072ac:
	ldr r3, [sp, #0x1c]
	ldr r1, [sp, #0x20]
	add r0, r0, r3
	add r1, r4, r1
	blx r2
	str r5, [r8, #8]
	b lbl_020073a4
lbl_020072c8:
	add r1, sp, #8
	add r0, r2, #1
	and r4, r7, #0x20
	bl func_020064e4
	ldrb r2, [r0], #1
	add r1, sp, #0xc
	and r6, r2, #0x20
	bl func_020064e4
	add r1, sp, #0x10
	bl func_02006570
	ldrb r2, [r0]
	ldrb r1, [r0, #1]
	ldrb r3, [r0, #2]
	ldrb r5, [r0, #3]
	orr r1, r2, r1, lsl #8
	orr r1, r1, r3, lsl #16
	cmp r4, #0
	orr r5, r1, r5, lsl #24
	add r11, r0, #4
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #8]
	ldreq r4, [r1, r0]
	beq lbl_02007330
	ldr r0, [sp, #8]
	add r0, r9, r0, lsl #2
	ldr r4, [r0, #0x1c]
lbl_02007330:
	cmp r6, #0
	ldreq r1, [r9, #0x18]
	ldreq r0, [sp, #0xc]
	ldreq r0, [r1, r0]
	beq lbl_02007350
	ldr r0, [sp, #0xc]
	add r0, r9, r0, lsl #2
	ldr r0, [r0, #0x1c]
lbl_02007350:
	ldr r1, [sp, #0x10]
	add r4, r4, r0
	bl func_02006238
	movs r6, r0
	beq lbl_02007384
	mvn r10, #0
lbl_02007368:
	ldr r0, [sp, #0x10]
	mov r1, r10
	sub r4, r4, r0
	mov r0, r4
	blx r5
	subs r6, r6, #1
	bne lbl_02007368
lbl_02007384:
	str r11, [r8, #8]
	b lbl_020073a4
lbl_0200738c:
	add r1, sp, #4
	add r0, r2, #1
	bl func_020064e4
	str r0, [r8, #8]
	b lbl_020073a4
lbl_020073a0:
	bl func_02007b30
lbl_020073a4:
	tst r7, #0x80
	movne r0, #0
	strne r0, [r8, #8]
	b lbl_02006b20
}

extern "C" asm void func_020073b4(void)
{
	add sp, sp, #0xa4
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020073bc(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x8c
	ldr r2, [r1]
	mov r4, r0
	str r2, [sp, #4]
	ldr r0, [r1, #4]
	add r12, sp, #0x38
	str r0, [sp, #8]
	ldr r0, [r1, #8]
	add lr, r4, #0x1c
	str r0, [sp, #0xc]
	ldr r0, [r1, #0xc]
	mov r5, #5
	str r0, [sp, #0x10]
	ldr r0, [r1, #0x10]
	str r0, [sp, #0x14]
	ldr r0, [r1, #0x14]
	str r0, [sp, #0x18]
	ldr r0, [r4]
	str r0, [sp, #0x1c]
	ldr r0, [r4, #4]
	str r0, [sp, #0x20]
	ldr r0, [r4, #8]
	str r0, [sp, #0x24]
	ldr r0, [r4, #0xc]
	str r0, [sp, #0x28]
	ldr r0, [r4, #0x10]
	str r0, [sp, #0x2c]
	ldr r0, [r4, #0x14]
	str r0, [sp, #0x30]
	ldr r0, [r4, #0x18]
	str r0, [sp, #0x34]
lbl_0200743c:
	ldmia lr!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	subs r5, r5, #1
	bne lbl_0200743c
	ldr r1, [lr]
	add r0, sp, #4
	str r1, [r12]
	bl func_02006768
	add r5, sp, #4
lbl_02007460:
	cmp r0, #0x12
	addls pc, pc, r0, lsl #2
	b lbl_020074b8
	b lbl_020074c4
	b lbl_020074b8
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074d0
	b lbl_020074b8
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
	b lbl_020074c4
lbl_020074b8:
	add sp, sp, #0x8c
	mov r0, #0
	ldmia sp!, {r4, r5, pc}
lbl_020074c4:
	mov r0, r5
	bl func_02006784
	b lbl_02007460
lbl_020074d0:
	ldr r0, [sp, #0xc]
	add r1, sp, #0
	add r0, r0, #1
	bl func_020064e4
	ldr r12, [sp, #0x34]
	ldr r3, [sp]
	mov r1, #0
	add r0, r12, r3
	ldr r2, [r0, #4]
	str r2, [r4]
	ldr r2, [r12, r3]
	str r2, [r4, #4]
	str r1, [r4, #8]
	str r0, [r4, #0xc]
	add sp, sp, #0x8c
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02007510(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	sub sp, sp, #8
	mov r6, r1
	ldr r1, [r6]
	mov r7, r0
	cmp r1, #0
	ldr r4, [r6, #0xc]
	mov r5, #0
	bls lbl_02007588
	add r8, sp, #0
lbl_02007538:
	ldrb r1, [r4]
	ldrb r0, [r4, #1]
	ldrb r2, [r4, #2]
	ldrb r3, [r4, #3]
	orr r0, r1, r0, lsl #8
	orr r0, r0, r2, lsl #16
	orr r1, r0, r3, lsl #24
	mov r0, r7
	mov r2, r8
	str r1, [sp, #4]
	bl func_02007b68
	cmp r0, #0
	addne sp, sp, #8
	movne r0, #1
	ldmneia sp!, {r4, r5, r6, r7, r8, pc}
	ldr r0, [r6]
	add r5, r5, #1
	cmp r5, r0
	add r4, r4, #4
	bcc lbl_02007538
lbl_02007588:
	mov r0, #0
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02007594(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	mov r4, r3
	mov r5, r2
	mov r2, r4
	mov r7, r0
	mov r6, r1
	bl func_02006b0c
	ldr r2, [r7, #0x18]
	ldr r1, [r5, #8]
	ldr r0, [r7, #4]
	add r3, r2, r1
	str r0, [r2, r1]
	ldr r1, [r7]
	mov r0, r7
	str r1, [r3, #4]
	ldr r2, [r7, #8]
	mov r1, r6
	str r2, [r3, #8]
	str r4, [r3, #0x14]
	ldr r3, [r6]
	ldr r2, [r5, #4]
	add r2, r3, r2
	bl func_02007e64
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020075f4(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xa4
	mov r5, r1
	ldr r1, [r5]
	mov r6, r0
	str r1, [sp, #0x1c]
	ldr r0, [r5, #4]
	add r8, sp, #0x50
	str r0, [sp, #0x20]
	ldr r0, [r5, #8]
	mov r4, r2
	str r0, [sp, #0x24]
	ldr r0, [r5, #0xc]
	add r9, r6, #0x1c
	str r0, [sp, #0x28]
	ldr r0, [r5, #0x10]
	mov r7, #5
	str r0, [sp, #0x2c]
	ldr r0, [r5, #0x14]
	str r0, [sp, #0x30]
	ldr r0, [r6]
	str r0, [sp, #0x34]
	ldr r0, [r6, #4]
	str r0, [sp, #0x38]
	ldr r0, [r6, #8]
	str r0, [sp, #0x3c]
	ldr r0, [r6, #0xc]
	str r0, [sp, #0x40]
	ldr r0, [r6, #0x10]
	str r0, [sp, #0x44]
	ldr r0, [r6, #0x14]
	str r0, [sp, #0x48]
	ldr r0, [r6, #0x18]
	str r0, [sp, #0x4c]
lbl_0200767c:
	ldmia r9!, {r0, r1, r2, r3}
	stmia r8!, {r0, r1, r2, r3}
	subs r7, r7, #1
	bne lbl_0200767c
	ldr r1, [r9]
	add r0, sp, #0x1c
	str r1, [r8]
	bl func_02006768
	add r7, sp, #0
	add r10, sp, #4
	add r11, sp, #8
	add r9, sp, #0x14
	add r8, sp, #0x18
lbl_020076b0:
	cmp r0, #0x13
	addls pc, pc, r0, lsl #2
	b lbl_020077b0
	b lbl_020077b8
	b lbl_020077b0
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_0200770c
	b lbl_020077b8
	b lbl_020077b0
	b lbl_02007760
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
	b lbl_020077b8
lbl_0200770c:
	ldr lr, [sp, #0x24]
	mov r1, r9
	ldrb r2, [lr, #1]
	ldrb r0, [lr, #2]
	ldrb r3, [lr, #3]
	ldrb r12, [lr, #4]
	orr r0, r2, r0, lsl #8
	orr r0, r0, r3, lsl #16
	orr r2, r0, r12, lsl #24
	add r0, lr, #5
	str r2, [sp, #0x10]
	bl func_02006570
	mov r1, r8
	bl func_020064e4
	ldr r0, [r6]
	ldr r1, [sp, #0x10]
	mov r2, r4
	bl func_02007b68
	cmp r0, #0
	beq lbl_020077b8
	b lbl_020077c4
lbl_02007760:
	ldr r0, [sp, #0x24]
	mov r1, r7
	add r0, r0, #1
	bl func_02006570
	mov r1, r10
	bl func_02006570
	mov r1, r11
	bl func_020064e4
	str r0, [sp, #0xc]
	ldr r0, [r6]
	mov r1, r7
	bl func_02007510
	cmp r0, #0
	bne lbl_020077b8
	ldr r3, [sp, #0x24]
	mov r0, r6
	mov r1, r5
	mov r2, r7
	bl func_02007594
	b lbl_020077b8
lbl_020077b0:
	bl func_02007b30
	b lbl_020077c4
lbl_020077b8:
	add r0, sp, #0x1c
	bl func_02006784
	b lbl_020076b0
lbl_020077c4:
	ldr r0, [sp, #0x24]
	add sp, sp, #0xa4
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020077d0(void)
{
	stmdb sp!, {r3, lr}
	ldr lr, [r0, #0x18]
	ldr r12, [r0, #4]
	add r3, lr, r1
	str r12, [lr, r1]
	ldr r1, [r0]
	str r1, [r3, #4]
	ldr r1, [r0, #8]
	str r1, [r3, #8]
	ldr r1, [r0]
	ldrb r1, [r1]
	cmp r1, #0x2a
	ldrne r0, [r0, #4]
	addne r0, r0, r2
	strne r0, [r3, #0xc]
	ldmneia sp!, {r3, pc}
	add r1, r3, #0x10
	str r1, [r3, #0xc]
	ldr r0, [r0, #4]
	ldr r0, [r0]
	add r0, r0, r2
	str r0, [r3, #0x10]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0200782c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x28
	mov r5, r0
	ldr r0, [r5, #0x10]
	add r1, sp, #0x10
	bl func_02006660
	ldr r0, [sp, #0x14]
	cmp r0, #0
	bne lbl_02007854
	bl func_02007b30
lbl_02007854:
	add r1, sp, #0x10
	mov r0, r5
	bl func_02007d74
	ldr r0, [r5]
	cmp r0, #0
	movne r0, #0
	strne r0, [r5, #0xc]
	bne lbl_02007890
	add r1, sp, #0x10
	mov r0, r5
	bl func_020073bc
	str r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02007890
	bl func_02007b30
lbl_02007890:
	add r1, sp, #0x10
	add r2, sp, #0
	mov r0, r5
	bl func_020075f4
	mov r4, r0
	ldrb r1, [r4, #1]
	ldrb r0, [r4, #2]
	ldrb r2, [r4, #3]
	ldrb r3, [r4, #4]
	orr r0, r1, r0, lsl #8
	orr r0, r0, r2, lsl #16
	orr r2, r0, r3, lsl #24
	add r1, sp, #8
	add r0, r4, #5
	str r2, [sp, #4]
	bl func_02006570
	add r1, sp, #0xc
	bl func_020064e4
	add r1, sp, #0x10
	mov r0, r5
	mov r2, r4
	bl func_02006b0c
	ldr r1, [sp, #0xc]
	ldr r2, [sp]
	mov r0, r5
	bl func_020077d0
	ldr r3, [sp, #0x10]
	ldr r2, [sp, #8]
	mov r0, r5
	add r1, sp, #0x10
	add r2, r3, r2
	bl func_02007e64
	add sp, sp, #0x28
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02007918(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0]
	cmp r1, #0
	ldrne r2, [r0, #8]
	cmpne r2, #0
	ldmeqia sp!, {r3, pc}
	mov r0, r1
	mvn r1, #0
	blx r2
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02007940(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, =sym_p__sinit_0208a1a8
	b lbl_02007954
lbl_0200794c:
	blx r0
	add r4, r4, #4
lbl_02007954:
	cmp r4, #0
	ldrne r0, [r4]
	cmpne r0, #0
	bne lbl_0200794c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0200796c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r4, =data_020c4f6c
	ldr r2, [r4]
	cmp r2, #0
	ldmeqia sp!, {r3, r4, r5, pc}
	mvn r5, #0
lbl_02007984:
	ldr r0, [r2]
	mov r1, r5
	str r0, [r4]
	ldr r0, [r2, #8]
	ldr r2, [r2, #4]
	blx r2
	ldr r2, [r4]
	cmp r2, #0
	bne lbl_02007984
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020079b0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, lr}
	sub sp, sp, #0x18
	mov r11, sp
	mov r7, r0
	mov r6, r1
	mov r5, r2
	mov r4, r3
	str sp, [r11, #0x14]
	cmp r6, r7
	addls sp, r11, #0x18
	ldmlsia sp!, {r4, r5, r6, r7, r11, pc}
lbl_020079dc:
	sub r6, r6, r5
	mov r0, r6
	blx r4
	cmp r6, r7
	bhi lbl_020079dc
	add sp, r11, #0x18
	ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

extern "C" asm void func_020079f8(void)
{
	bl func_02007b30
	add r0, r11, #0
	bl func_02007918
	add sp, r11, #0x18
	ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

extern "C" asm void __cxa_vec_ctor(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r11, lr}
	sub sp, sp, #0x18
	mov r11, sp
	movs r4, r3
	mov r7, r0
	mov r6, r1
	mov r5, r2
	addeq sp, r11, #0x18
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
	ldr r0, [r11, #0x38]
	cmp r0, #0
	beq lbl_02007a94
	mov r8, r7
	str sp, [r11, #0x14]
	cmp r6, #0
	addeq sp, r11, #0x18
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
lbl_02007a50:
	mov r0, r8
	blx r4
	add r8, r8, r5
	subs r6, r6, #1
	bne lbl_02007a50
	add sp, r11, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
	ldr r3, [r11, #0x38]
	mov r0, r7
	mov r1, r8
	mov r2, r5
	bl func_020079b0
	bl func_02007e94
	add r0, r11, #0
	bl func_02007918
	add sp, r11, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
lbl_02007a94:
	cmp r6, #0
	addeq sp, r11, #0x18
	ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
lbl_02007aa0:
	mov r0, r7
	blx r4
	add r7, r7, r5
	subs r6, r6, #1
	bne lbl_02007aa0
	add sp, r11, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r11, pc}
}

extern "C" asm void __cxa_vec_cleanup(void)
{
	stmdb sp!, {r4, r5, r6, r7, r11, lr}
	sub sp, sp, #0x18
	mov r11, sp
	mov r7, r1
	movs r5, r3
	mov r6, r2
	mlane r4, r7, r6, r0
	strne sp, [r11, #0x14]
	cmpne r7, #0
	addeq sp, r11, #0x18
	ldmeqia sp!, {r4, r5, r6, r7, r11, pc}
lbl_02007ae8:
	sub r4, r4, r6
	mov r0, r4
	blx r5
	subs r7, r7, #1
	bne lbl_02007ae8
	add sp, r11, #0x18
	ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

extern "C" asm void func_02007b04(void)
{
	bl func_02007b30
	add r0, r11, #0
	bl func_02007918
	add sp, r11, #0x18
	ldmia sp!, {r4, r5, r6, r7, r11, pc}
}

extern "C" asm void func_02007b18(void)
{
	ldr r12, =func_02000bc0
	bx r12
}

extern "C" asm void func_02007b24(void)
{
	ldr r12, =func_02007b30
	bx r12
}

extern "C" asm void func_02007b30(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020bb8f4
	ldr r0, [r0]
	blx r0
	ldmia sp!, {r3, pc}
}

extern "C" asm void __register_global_object(void)
{
	ldr r3, =data_020c4f6c
	ldr r12, [r3]
	str r12, [r2]
	str r1, [r2, #4]
	str r0, [r2, #8]
	str r2, [r3]
	bx lr
}

extern "C" asm void func_02007b68(void)
{
	stmdb sp!, {r3, lr}
	mov r12, #0
	mov r3, r1
	cmp r1, #0
	str r12, [r2]
	moveq r0, #1
	ldmeqia sp!, {r3, pc}
	ldrb r12, [r1]
	cmp r12, #0x50
	bne lbl_02007bcc
	ldrb r12, [r3, #1]!
	cmp r12, #0x56
	addeq r3, r3, #1
	ldrb r12, [r3]
	cmp r12, #0x4b
	addeq r3, r3, #1
	ldrb r3, [r3]
	cmp r3, #0x76
	bne lbl_02007bc8
	ldrb r3, [r0]
	cmp r3, #0x50
	cmpne r3, #0x2a
	moveq r0, #1
	ldmeqia sp!, {r3, pc}
lbl_02007bc8:
	mov r3, r1
lbl_02007bcc:
	ldrb r12, [r0]
	cmp r12, #0x21
	cmpne r12, #0x2a
	bne lbl_02007ccc
	ldrb lr, [r0], #1
	ldrb r12, [r3], #1
	cmp lr, r12
	movne r0, #0
	ldmneia sp!, {r3, pc}
lbl_02007bf0:
	ldrb lr, [r0]
	ldrb r12, [r3], #1
	cmp lr, r12
	bne lbl_02007c44
	cmp lr, #0x21
	add r0, r0, #1
	bne lbl_02007bf0
	ldrb r1, [r0]
	mov lr, #0
	cmp r1, #0x21
	beq lbl_02007c38
	mov r1, #0xa
lbl_02007c20:
	ldrb r12, [r0]
	ldrb r3, [r0, #1]!
	mla r12, lr, r1, r12
	cmp r3, #0x21
	sub lr, r12, #0x30
	bne lbl_02007c20
lbl_02007c38:
	str lr, [r2]
	mov r0, #1
	ldmia sp!, {r3, pc}
lbl_02007c44:
	ldrb r3, [r0], #1
	cmp r3, #0x21
	bne lbl_02007c44
lbl_02007c50:
	ldrb r3, [r0], #1
	cmp r3, #0x21
	bne lbl_02007c50
	ldrb r3, [r0]
	cmp r3, #0
	moveq r0, #0
	ldmeqia sp!, {r3, pc}
	add r3, r1, #1
	b lbl_02007bf0
lbl_02007c74:
	ldrb r1, [r3, #1]!
	add r0, r0, #1
	cmp r1, #0x4b
	bne lbl_02007c94
	ldrb r1, [r0]
	add r3, r3, #1
	cmp r1, #0x4b
	addeq r0, r0, #1
lbl_02007c94:
	ldrb r2, [r0]
	cmp r2, #0x4b
	moveq r0, #0
	ldmeqia sp!, {r3, pc}
	ldrb r1, [r3]
	cmp r1, #0x56
	bne lbl_02007cbc
	cmp r2, #0x56
	addeq r0, r0, #1
	add r3, r3, #1
lbl_02007cbc:
	ldrb r1, [r0]
	cmp r1, #0x56
	moveq r0, #0
	ldmeqia sp!, {r3, pc}
lbl_02007ccc:
	ldrb r2, [r0]
	cmp r2, #0x50
	cmpne r2, #0x52
	bne lbl_02007ce8
	ldrb r1, [r3]
	cmp r2, r1
	beq lbl_02007c74
lbl_02007ce8:
	ldrb r1, [r3]
	cmp r2, r1
	bne lbl_02007d10
lbl_02007cf4:
	cmp r2, #0
	moveq r0, #1
	ldmeqia sp!, {r3, pc}
	ldrb r2, [r0, #1]!
	ldrb r1, [r3, #1]!
	cmp r2, r1
	beq lbl_02007cf4
lbl_02007d10:
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02007d18(void)
{
	stmdb sp!, {r4, lr}
	ldrb r1, [r0, #0x6a]
	ldr r12, [r0, #0x60]
	mov r4, #0xf
	cmp r1, #0
	ldr r1, [r0, #0x18]
	movne r2, #0x10
	moveq r2, #0
	add r1, r1, r12
	sub lr, r1, r2
	mov r3, #1
lbl_02007d44:
	ldrh r1, [r0, #0x68]
	tst r1, r3, lsl r4
	ldrne r2, [lr, #-4]!
	addne r1, r0, r4, lsl #2
	strne r2, [r1, #0x1c]
	subs r4, r4, #1
	bpl lbl_02007d44
	ldr r1, [r0, #0x18]
	add r1, r1, r12
	str r1, [r0, #0x14]
	ldr r0, [r0, #0x54]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02007d74(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r1, [r1, #4]
	mov r6, r0
	ldrb r0, [r1]
	ands r4, r0, #0x40
	movne r2, #1
	moveq r2, #0
	strb r2, [r6, #0x6b]
	tst r0, #0x20
	movne r2, #1
	moveq r2, #0
	ands r5, r0, #0x80
	movne r0, #1
	strb r2, [r6, #0x6a]
	moveq r0, #0
	strb r0, [r6, #0x6c]
	ldrb r2, [r1, #1]
	add r0, r1, #2
	add r1, r6, #0x60
	mov r2, r2, lsl #4
	strh r2, [r6, #0x68]
	ldrh r2, [r6, #0x68]
	orr r2, r2, #0x4000
	strh r2, [r6, #0x68]
	bl func_02006570
	cmp r4, #0
	beq lbl_02007de8
	add r1, r6, #0x64
	bl func_02006570
lbl_02007de8:
	cmp r4, #0
	beq lbl_02007e08
	cmp r5, #0
	ldrne r0, [r6, #0x38]
	strne r0, [r6, #0x18]
	ldreq r0, [r6, #0x48]
	streq r0, [r6, #0x18]
	ldmia sp!, {r4, r5, r6, pc}
lbl_02007e08:
	ldr r0, [r6, #0x14]
	str r0, [r6, #0x18]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02007e14(void)
{
	ldr r2, =__sinit_0208a1a8
	ldr r1, =__sinit_0208a1a8
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	mov r0, #1
	bx lr
}

extern "C" asm void func_02007e34(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	ldrb r4, [r0], #2
	add r1, sp, #0
	bl func_02006570
	tst r4, #0x40
	addeq sp, sp, #4
	ldmeqia sp!, {r3, r4, pc}
	add r1, sp, #0
	bl func_02006570
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02007e64(void)
{
	ldr r4, [r0, #0x2c]
	ldr r5, [r0, #0x30]
	ldr r6, [r0, #0x34]
	ldr r7, [r0, #0x38]
	ldr r8, [r0, #0x3c]
	ldr r9, [r0, #0x40]
	ldr r10, [r0, #0x44]
	ldr r11, [r0, #0x48]
	ldr sp, [r0, #0x5c]
	ldr r12, [r0, #0x64]
	sub sp, sp, r12
	mov pc, r2
}

extern "C" asm void func_02007e94(void)
{
	mov r12, sp
	sub sp, sp, #0x70
	str r4, [sp, #0x2c]
	str r5, [sp, #0x30]
	str r6, [sp, #0x34]
	str r7, [sp, #0x38]
	str r8, [sp, #0x3c]
	str r9, [sp, #0x40]
	str r10, [sp, #0x44]
	str r11, [sp, #0x48]
	str r12, [sp, #0x14]
	str r12, [sp, #0x5c]
	str lr, [sp, #0x10]
	mov r12, #0
	str r12, [sp]
	str r12, [sp, #4]
	str r12, [sp, #8]
	mov r0, sp
	b func_0200782c
}

extern "C" asm void func_02007ee0(void)
{
	ldr r12, =func_02006448
	bx r12
}

extern "C" asm void func_02007eec(void)
{
	bx lr
}

extern "C" asm void func_02007ef0(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	sub sp, sp, #0x58
	mov r5, r0
	mov r4, #0
	ldr r0, =data_0211a60c
	mov r1, #0x18000
	mov r2, #0x1000
	mov r3, #0x280000
	str r4, [sp]
	bl func_0207f5c8
	ldr r0, =data_02116ce8
	mov r1, r4
	bl func_0207ea64
	bl func_0208a104
	mov r4, r0
	add r0, sp, #4
	bl func_02079e40
	cmp r4, #1
	bne lbl_02007f4c
	ldr r1, =_ZN6status6g_GameE
	mov r0, #0
	str r0, [r1]
	bl func_02054300
lbl_02007f4c:
	cmp r4, #2
	bne lbl_02007fc0
	ldrb r0, [sp, #4]
	cmp r0, #1
	beq lbl_02007f74
	cmp r0, #2
	beq lbl_02007f88
	cmp r0, #5
	beq lbl_02007f9c
	b lbl_02007fb0
lbl_02007f74:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #1
	str r0, [r1]
	bl func_02054300
	b lbl_02007fc0
lbl_02007f88:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #2
	str r0, [r1]
	bl func_02054300
	b lbl_02007fc0
lbl_02007f9c:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #5
	str r0, [r1]
	bl func_02054300
	b lbl_02007fc0
lbl_02007fb0:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #1
	str r0, [r1]
	bl func_02054300
lbl_02007fc0:
	cmp r4, #3
	bne lbl_02008064
	ldrb r0, [sp, #4]
	cmp r0, #5
	addls pc, pc, r0, lsl #2
	b lbl_02008054
	b lbl_02008054
	b lbl_02007ff0
	b lbl_02008004
	b lbl_02008018
	b lbl_0200802c
	b lbl_02008040
lbl_02007ff0:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #1
	str r0, [r1]
	bl func_02054300
	b lbl_02008064
lbl_02008004:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #2
	str r0, [r1]
	bl func_02054300
	b lbl_02008064
lbl_02008018:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #3
	str r0, [r1]
	bl func_02054300
	b lbl_02008064
lbl_0200802c:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #4
	str r0, [r1]
	bl func_02054300
	b lbl_02008064
lbl_02008040:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #5
	str r0, [r1]
	bl func_02054300
	b lbl_02008064
lbl_02008054:
	ldr r1, =_ZN6status6g_GameE
	mov r0, #1
	str r0, [r1]
	bl func_02054300
lbl_02008064:
	mov r0, r5
	ldr r1, [r0]
	ldr r1, [r1, #4]
	blx r1
	add r0, r5, #0x64
	ldr r4, [r0]
	mov r2, #0
	ldr r4, [r4]
	ldr r1, =data_020bb990
	mov r3, r2
	blx r4
	add r0, r5, #0x74
	ldr r4, [r0]
	mov r2, #0
	ldr r1, =data_020bb990
	mov r3, r2
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x84
	ldr r1, =data_020bb9a8
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x94
	ldr r1, =data_020bb9c0
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0xa4
	ldr r1, =data_020bb9d8
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x64
	bl func_020574bc
	mov r8, r0
	add r0, r5, #0x74
	bl func_020574bc
	mov r7, r0
	add r0, r5, #0x84
	bl func_020574bc
	mov r6, r0
	add r0, r5, #0x94
	bl func_020574bc
	mov r4, r0
	add r0, r5, #0xa4
	bl func_020574bc
	mov r1, r7
	mov r2, r6
	mov r3, r4
	str r0, [sp]
	mov r0, r8
	bl func_02086de4
	add r0, r5, #4
	ldr r1, =data_020bb9f0
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x14
	ldr r4, [r0]
	mov r2, #0
	ldr r4, [r4]
	ldr r1, =data_020bba0c
	mov r3, r2
	blx r4
	add r0, r5, #0x24
	ldr r4, [r0]
	mov r2, #0
	ldr r4, [r4]
	ldr r1, =data_020bba28
	mov r3, r2
	blx r4
	add r0, r5, #0x34
	ldr r4, [r0]
	mov r2, #0
	ldr r1, =data_020bba44
	mov r3, r2
	ldr r4, [r4]
	blx r4
	bl func_0207f900
	add r0, r5, #4
	bl func_020574bc
	mov r4, r0
	add r0, r5, #0x14
	bl func_020574bc
	mov r1, r0
	mov r0, r4
	bl func_0207f924
	add r0, r5, #0x24
	bl func_020574bc
	mov r4, r0
	add r0, r5, #0x34
	bl func_020574bc
	mov r1, r0
	mov r0, r4
	bl func_0207f95c
	add r0, r5, #0x44
	ldr r1, =data_020bba60
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x54
	ldr r1, =data_020bba78
	mov r2, #0
	mov r3, r2
	ldr r4, [r0]
	ldr r4, [r4]
	blx r4
	add r0, r5, #0x44
	bl func_020574bc
	mov r7, r0
	add r0, r5, #0x44
	bl func_020574c4
	mov r6, r0
	add r0, r5, #0x54
	bl func_020574bc
	mov r4, r0
	add r0, r5, #0x54
	bl func_020574c4
	mov r3, r0
	mov r0, r7
	mov r1, r6
	mov r2, r4
	bl func_02087bd0
	ldr r0, =data_02116ce0
	bl func_0207e804
	bl func_02052424
	bl func_02054690
	ldr r2, =data_020ef880
	ldr r1, =data_0210a464
	ldr r0, =data_0211fc7c
	str r2, [r1, #0x704]
	ldr r1, =data_020bba90
	mov r2, #1
	bl func_020865f4
	ldr r0, =data_0210bd4c
	bl func_0205c710
	ldr r0, =data_0210bd4c
	mov r1, #0
	mov r2, #0x6e
	bl func_0205c78c
	ldr r0, =data_0210bd4c
	mov r1, #0
	mov r2, #0x6f
	bl func_0205c78c
	mov r0, r5
	ldr r1, [r0]
	ldr r1, [r1, #0xc]
	blx r1
	mov r0, r5
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	mov r0, r5
	bl func_02008768
	mov r0, #1
	bl func_02089580
	bl func_0203d670
	add sp, sp, #0x58
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02008358(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r0, #1
	mov r2, r0
	mov r1, #0
	bl func_02063874
	mov r0, #3
	bl func_02064258
	mov r0, #0x40
	bl func_02064430
	mov r0, #0x10
	bl func_02063a78
	mov r0, #0x20
	bl func_02063f5c
	mov r1, #0x4000000
	ldr r2, [r1]
	mov r0, #0
	bic r2, r2, #0x38000000
	str r2, [r1]
	ldr r2, [r1]
	bic r2, r2, #0x7000000
	str r2, [r1]
	ldrh r2, [r1, #0xa]
	and r2, r2, #0x43
	orr r2, r2, #0xe00
	strh r2, [r1, #0xa]
	ldrh r2, [r1, #0xc]
	and r2, r2, #0x43
	orr r2, r2, #0xf00
	strh r2, [r1, #0xc]
	ldrh r2, [r1, #0xe]
	and r2, r2, #0x43
	orr r2, r2, #0x700
	strh r2, [r1, #0xe]
	bl func_020638dc
	mov r0, #0x80
	bl func_0206466c
	mov r0, #0x100
	bl func_02064714
	ldr r12, =0x04001008
	ldr r4, =0x04000060
	ldrh r1, [r12]
	mov lr, #1
	mov r0, #0
	and r1, r1, #0x43
	orr r1, r1, #0x700
	strh r1, [r12]
	ldrh r3, [r12, #2]
	mov r1, #0x1f
	rsb r2, lr, #0x8000
	and r3, r3, #0x43
	orr r3, r3, #0x700
	strh r3, [r12, #2]
	ldrh r5, [r12, #4]
	mov r3, #0x3f
	and r5, r5, #0x43
	orr r5, r5, #0x700
	strh r5, [r12, #4]
	ldrh r5, [r12, #6]
	and r5, r5, #0x43
	orr r5, r5, #0x700
	strh r5, [r12, #6]
	ldrh r12, [r4]
	bic r12, r12, #0x3000
	orr r12, r12, #8
	strh r12, [r4]
	str lr, [sp]
	bl func_0206541c
	bl func_0208313c
	bl func_0206382c
	add r3, r4, #0xfa0
	ldr r1, [r3]
	add r2, r4, #0x2a4
	orr r1, r1, #0x10000
	str r1, [r3]
	ldrh r1, [r2]
	ldr r0, =data_0211e450
	bic r1, r1, #0x8000
	strh r1, [r2]
	bl func_020861b0
	add r1, r4, #0x2a4
	ldrh r0, [r1]
	bic r0, r0, #0x8000
	strh r0, [r1]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_020084b4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x58
	bl func_0202d014
	ldr r5, =data_0208c930
	add r4, sp, #4
	ldmia r5!, {r0, r1, r2, r3}
	mov r12, r4
	stmia r4!, {r0, r1, r2, r3}
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	ldmia r5, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	mov lr, #0
	ldr r3, =data_020c4f70
	ldr r2, =0x66666667
	mov r8, #0x2f
	mov r4, lr
	mov r11, #0xa
lbl_020084fc:
	ldr r0, [r12, lr, lsl #2]
	ldr r10, [r3, #0x20]
	ldrsb r1, [r0]
	ldrsb r5, [r10]
	cmp r5, r1
	ldreqsb r5, [r10, #1]
	ldreqsb r1, [r0, #1]
	cmpeq r5, r1
	ldreqsb r1, [r10, #2]
	ldreqsb r0, [r0, #2]
	cmpeq r1, r0
	bne lbl_02008594
	add r6, lr, #1
	smull r0, r5, r2, r6
	smull r0, r7, r2, r6
	mov r1, r6, lsr #0x1f
	ldrsb r9, [r10, #9]
	add r7, r1, r7, asr #2
	add r5, r1, r5, asr #2
	add r0, r7, #0x30
	smull r5, r7, r11, r5
	strb r9, [r3, #0x24]
	ldrsb r1, [r10, #0xa]
	sub r5, r6, r5
	strb r1, [r3, #0x25]
	strb r8, [r3, #0x26]
	add r1, r5, #0x30
	strb r0, [r3, #0x27]
	strb r1, [r3, #0x28]
	strb r8, [r3, #0x29]
	ldrsb r0, [r10, #4]
	cmp r0, #0x20
	moveq r0, #0x30
	strb r0, [r3, #0x2a]
	ldr r0, [r3, #0x20]
	ldrsb r0, [r0, #5]
	strb r0, [r3, #0x2b]
	strb r4, [r3, #0x2c]
lbl_02008594:
	add lr, lr, #1
	cmp lr, #0xc
	blt lbl_020084fc
	ldr r0, =data_020c4f70
	mov r1, #0
	strb r1, [r0, #0x39]
	ldr r4, =data_020c4fa4
	ldr r2, =data_020bbaac
	ldr r3, =data_020c4f94
	add r0, sp, #0x34
	mov r1, #0x21
	str r4, [sp]
	bl func_02088308
	add r0, sp, #0x34
	bl func_02058430
	add sp, sp, #0x58
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020085f0(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c1b7c
	mov r12, #0
	ldr r0, =data_0210bb94
	ldr r2, =data_020c50e8
	mov r1, #1
	str r12, [r3]
	bl func_020580bc
	ldr r0, =data_0210bb94
	ldr r2, =data_020c6da4
	mov r1, #0
	bl func_020580bc
	ldr r0, =data_0210bb94
	ldr r2, =data_020c514c
	mov r1, #2
	bl func_020580bc
	ldr r0, =data_0210bb94
	ldr r2, =data_020edb88
	mov r1, #3
	bl func_020580bc
	ldr r0, =data_0210bb94
	ldr r2, =data_0210bec8
	mov r1, #0xb
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0xc
	ldr r2, =data_020c511c
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0xd
	ldr r2, =data_020c5098
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0xe
	ldr r2, =data_020c50e0
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0xf
	ldr r2, =data_020c7a84
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0x10
	ldr r2, =data_020eed14
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0x11
	ldr r2, =data_020c509c
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0x13
	ldr r2, =data_020efd88
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0x16
	ldr r2, =data_020c7470
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #4
	ldr r2, =data_0210beb8
	bl func_020580bc
	ldr r0, =data_0210bb94
	mov r1, #0x15
	ldr r2, =data_020ed288
	bl func_020580bc
	ldr r0, =func_020087b4
	bl func_02058128
	ldr r0, =func_020087cc
	bl func_02058138
	ldr r0, =func_020087e0
	bl func_0203f268
	ldr r0, =data_0210bb94
	mov r1, #0
	str r1, [r0, #0x74]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02008768(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c4fb4
	ldr r1, =data_020bbab4
	bl func_02048e34
	ldr r0, =data_0211c4cc
	bl func_02080e90
	ldr r0, =g_Global
	bl func_0200b864
	bl func_02026934
	bl func_0200bf98
	bl func_0200a6c8
	mov r1, #1
	str r1, [r0, #0x18]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020087b0(void)
{
	bx lr
}

extern "C" asm void func_020087b4(void)
{
	ldr r12, =data_0201d47d
	ldr r0, =_ZN6status6g_GameE
	mov r1, #1
	bx r12
}

extern "C" asm void func_020087cc(void)
{
	ldr r0, =g_Global
	mov r1, #0
	str r1, [r0, #0x24]
	bx lr
}

extern "C" asm void func_020087e0(void)
{
	ldr r12, =data_0202694d
	bx r12
}

extern "C" asm void func_020087ec(void)
{
	mov r0, #0xb
	bx lr
}

extern "C" asm void func_020087f4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0xa4
	bl func_020573fc
	add r0, r4, #0x94
	bl func_020573fc
	add r0, r4, #0x84
	bl func_020573fc
	add r0, r4, #0x74
	bl func_020573fc
	add r0, r4, #0x64
	bl func_020573fc
	add r0, r4, #0x54
	bl func_020573fc
	add r0, r4, #0x44
	bl func_020573fc
	add r0, r4, #0x34
	bl func_020573fc
	add r0, r4, #0x24
	bl func_020573fc
	add r0, r4, #0x14
	bl func_020573fc
	add r0, r4, #4
	bl func_020573fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0200885c(void)
{
	bx lr
}

extern "C" asm void func_02008860(void)
{
	mov r0, #0
	bx lr
}

extern "C" asm void func_02008868(void)
{
	bx lr
}

extern "C" asm void func_0200886c(void)
{
	bx lr
}

extern "C" asm void func_02008870(void)
{
	bx lr
}

extern "C" asm void func_02008874(void)
{
	bx lr
}

extern "C" asm void func_02008878(void)
{
	stmdb sp!, {r3, lr}
	bl func_020648cc
	bl func_020648b8
	bl func_02064928
	bl func_02064978
	bl func_02064964
	mov r0, #0xf
	bl func_02064258
	ldr r0, =data_0211e450
	mov r1, #0x80000
	mov r2, #0x4000
	bl func_020861c4
	ldr r0, =data_0211c4cc
	bl func_02080e90
	ldr r0, =0x00000003
	bl func_02087590
	bl func_021210e0
	bl func_0200a6c8
	ldr r0, [r0]
	cmp r0, #0
	bne lbl_020088dc
	ldr r0, =0x0000000F
	bl func_02087590
	bl func_0216fd7c
	b lbl_020088e4
lbl_020088dc:
	ldr r0, =0x00000010
	bl func_02087590
lbl_020088e4:
	ldr r0, =data_020efc58
	bl func_02087564
	bl func_0212a1e8
	bl func_0212a224
	bl func_02122968
	bl func_02122990
	mov r0, #1
	bl func_0206dd70
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	ldr r0, =data_02116d40
	mov r1, #0
	bl func_0207f2b4
	bl func_0202c25c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02008944(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_02116d40
	mov r1, #0
	bl func_0207f2b4
	bl func_02122968
	bl func_02122994
	bl func_0212a1e8
	bl func_0212a2c4
	ldr r0, =0x00000003
	bl func_020875a4
	bl func_0200a6c8
	ldr r0, [r0]
	cmp r0, #0
	bne lbl_02008988
	ldr r0, =0x0000000F
	bl func_020875a4
	b lbl_02008990
lbl_02008988:
	ldr r0, =0x00000010
	bl func_020875a4
lbl_02008990:
	bl func_0200a6c8
	mov r1, #0
	str r1, [r0]
	ldr r0, =data_0211e450
	bl func_02086278
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020089bc(void)
{
	stmdb sp!, {r3, lr}
	bl func_0212a1e8
	bl func_0212a320
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020089cc(void)
{
	stmdb sp!, {r3, lr}
	bl func_0212a1e8
	bl func_0212a344
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020089dc(void)
{
	stmdb sp!, {r3, lr}
	bl func_02122968
	bl func_02122998
	bl func_02122968
	bl func_0212299c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020089f4(void)
{
	ldr r12, =data_0202c285
	bx r12
}

extern "C" asm void func_02008a00(void)
{
	ldr r2, =data_020bbb0c
	mov r1, #0x40
	str r2, [r0]
	str r1, [r0, #0x14]
	mov r2, #0
	str r2, [r0, #0x18]
	str r2, [r0, #0x1c]
	str r2, [r0, #0x20]
	mov r1, #1
	str r1, [r0, #0x30]
	str r2, [r0, #0x24]
	str r2, [r0, #0x34]
	str r2, [r0, #0x28]
	str r2, [r0, #0x38]
	str r2, [r0, #0x2c]
	str r2, [r0, #0x3c]
	bx lr
}

extern "C" asm void func_02008a48(void)
{
	stmdb sp!, {r3, lr}
	mov r2, #0
	str r2, [r0, #8]
	mov r1, #2
	str r1, [r0, #0xc]
	str r2, [r0, #0x10]
	str r2, [r0, #4]
	str r2, [r0, #0x40]
	ldr r0, =data_020c4fb4
	bl func_02048e4c
	cmp r0, #0
	bne lbl_02008a84
	ldr r0, =data_020c4fb4
	ldr r1, =data_020bbb3c
	bl func_02048e34
lbl_02008a84:
	mov r0, #0
	bl func_0200d5cc
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02008aa8(void)
{
	bx lr
}

extern "C" asm void func_02008aac(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x80
	mov r4, r0
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x40
	ldrne r0, [r4, #0x10]
	subne r0, r0, #1
	strne r0, [r4, #0x10]
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x80
	ldrne r0, [r4, #0x10]
	addne r0, r0, #1
	strne r0, [r4, #0x10]
	ldr r0, =data_02116ce0
	bl func_0207e810
	ldr r0, [r4, #0x10]
	cmp r0, #0
	bne lbl_02008b24
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x10
	movne r0, #1
	strne r0, [r4, #4]
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x20
	movne r0, #0
	strne r0, [r4, #4]
lbl_02008b24:
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_02008b4c
	mov r0, r4
	bl func_02008d84
	ldr r0, [r4, #0x10]
	mov r1, #0
	mov r2, #4
	bl func_02008ca0
	str r0, [r4, #0x10]
lbl_02008b4c:
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_02008b74
	mov r0, r4
	bl func_02008ed0
	ldr r0, [r4, #0x10]
	mov r1, #0
	mov r2, #5
	bl func_02008ca0
	str r0, [r4, #0x10]
lbl_02008b74:
	ldr r0, [r4, #0x40]
	cmp r0, #0
	addne sp, sp, #0x80
	ldmneia sp!, {r4, r5, r6, pc}
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #1
	addeq sp, sp, #0x80
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r0, =data_020c4fb4
	mov r1, #1
	str r1, [r4, #0x40]
	bl func_02048f7c
	mov r3, r0
	ldr r2, =data_020bbb54
	add r0, sp, #0
	mov r1, #0x80
	bl func_02088308
	ldr r0, =data_02116ce8
	add r1, sp, #0
	bl func_0207ebd4
	cmp r0, #0
	addeq sp, sp, #0x80
	ldmeqia sp!, {r4, r5, r6, pc}
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_02008c1c
	ldr r0, =_ZN6status7g_StoryE
	mov r1, #1
	bl _ZN6status11StoryStatus10setChapterEi
	bl func_0200a6c8
	ldr r1, [r4, #0x14]
	bl func_0200aae0
	bl func_0200a6c8
	ldr r1, [r4, #0x18]
	bl func_0200aae4
	bl func_0200a6c8
	mov r1, #1
	bl func_0200ab08
	bl func_0200a6c8
	bl func_0200ab0c
	b lbl_02008c5c
lbl_02008c1c:
	cmp r0, #1
	bne lbl_02008c5c
	mov r5, #0
lbl_02008c28:
	add r0, r4, r5, lsl #2
	ldr r6, [r0, #0x20]
	bl func_0200a6c8
	add r0, r0, r5, lsl #2
	str r6, [r0, #0x3c]
	add r0, r4, r5, lsl #2
	ldr r6, [r0, #0x30]
	bl func_0200a6c8
	add r0, r0, r5, lsl #2
	add r5, r5, #1
	str r6, [r0, #0x4c]
	cmp r5, #4
	blt lbl_02008c28
lbl_02008c5c:
	ldr r0, =data_020c4fb4
	bl func_02048f7c
	mov r1, r0
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus13setBtlMapNameEPc
	ldr r0, =g_Global
	bl func_0200baf4
	add sp, sp, #0x80
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02008ca0(void)
{
	cmp r0, r2
	movgt r0, r1
	bxgt lr
	cmp r0, r1
	movge r2, r0
	mov r0, r2
	bx lr
}

extern "C" asm void func_02008cbc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r12, [r4, #0xc]
	ldr r2, [r4, #0x10]
	ldr r1, [r4, #8]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbb68
	add r2, r12, r2
	bl func_0207e88c
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_02008d0c
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbb6c
	add r1, r1, #1
	bl func_0207e88c
	mov r0, r4
	bl func_020090f4
lbl_02008d0c:
	ldr r0, [r4, #4]
	cmp r0, #1
	ldmneia sp!, {r4, pc}
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbb80
	add r1, r1, #1
	bl func_0207e88c
	mov r0, r4
	bl func_020091f0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02008d4c(void)
{
	bx lr
}

extern "C" asm void func_02008d50(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =0x04000604
	mov r1, #0
	ldrh r12, [r0]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbb90
	mov r2, r1
	str r12, [sp]
	bl func_0207e88c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02008d84(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #0x10]
	cmp r0, #4
	addls pc, pc, r0, lsl #2
	ldmia sp!, {r4, pc}
	ldmia sp!, {r4, pc}
	b lbl_02008db0
	b lbl_02008de8
	b lbl_02008e30
	b lbl_02008e64
lbl_02008db0:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	ldrne r0, [r4, #0x14]
	addne r0, r0, #1
	strne r0, [r4, #0x14]
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #0x14]
	sub r0, r0, #1
	str r0, [r4, #0x14]
	ldmia sp!, {r4, pc}
lbl_02008de8:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	ldrne r0, [r4, #0x18]
	addne r0, r0, #1
	strne r0, [r4, #0x18]
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldrne r0, [r4, #0x18]
	mov r1, #0
	subne r0, r0, #1
	strne r0, [r4, #0x18]
	ldr r0, [r4, #0x18]
	mov r2, #2
	bl func_02008ea0
	str r0, [r4, #0x18]
	ldmia sp!, {r4, pc}
lbl_02008e30:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_02008e48
	ldr r0, =data_020c4fb4
	bl func_02048e60
lbl_02008e48:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_020c4fb4
	bl func_02048ee0
	ldmia sp!, {r4, pc}
lbl_02008e64:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_02008e7c
	ldr r0, =data_020c4fb4
	bl func_02048f90
lbl_02008e7c:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_020c4fb4
	bl func_02048ff8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02008ea0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r2
	bl func_02008eb8
	mov r1, r4
	bl func_02008ec4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02008eb8(void)
{
	cmp r0, r1
	movle r0, r1
	bx lr
}

extern "C" asm void func_02008ec4(void)
{
	cmp r0, r1
	movge r0, r1
	bx lr
}

extern "C" asm void func_02008ed0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #0x10]
	cmp r0, #5
	addls pc, pc, r0, lsl #2
	ldmia sp!, {r4, pc}
	ldmia sp!, {r4, pc}
	b lbl_02008f00
	b lbl_02008f48
	b lbl_02009014
	b lbl_02009084
	b lbl_020090b8
lbl_02008f00:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	ldrne r0, [r4, #0x1c]
	addne r0, r0, #1
	strne r0, [r4, #0x1c]
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldrne r0, [r4, #0x1c]
	mov r1, #0
	subne r0, r0, #1
	strne r0, [r4, #0x1c]
	ldr r0, [r4, #0x1c]
	mov r2, #3
	bl func_02008ea0
	str r0, [r4, #0x1c]
	ldmia sp!, {r4, pc}
lbl_02008f48:
	ldr r0, =data_02116d40
	bl func_0207f268
	tst r0, #0x100
	beq lbl_02008fa4
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_02008f7c
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x20
	ldr r0, [r2, r1, lsl #2]
	add r0, r0, #0xa
	str r0, [r2, r1, lsl #2]
lbl_02008f7c:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	beq lbl_02008fec
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x20
	ldr r0, [r2, r1, lsl #2]
	sub r0, r0, #0xa
	str r0, [r2, r1, lsl #2]
	b lbl_02008fec
lbl_02008fa4:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_02008fc8
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x20
	ldr r0, [r2, r1, lsl #2]
	add r0, r0, #1
	str r0, [r2, r1, lsl #2]
lbl_02008fc8:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	beq lbl_02008fec
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x20
	ldr r0, [r2, r1, lsl #2]
	sub r0, r0, #1
	str r0, [r2, r1, lsl #2]
lbl_02008fec:
	ldr r0, [r4, #0x1c]
	mov r1, #0
	add r0, r4, r0, lsl #2
	ldr r0, [r0, #0x20]
	mov r2, #0x140
	bl func_02008ea0
	ldr r1, [r4, #0x1c]
	add r1, r4, r1, lsl #2
	str r0, [r1, #0x20]
	ldmia sp!, {r4, pc}
lbl_02009014:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_02009038
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x30
	ldr r0, [r2, r1, lsl #2]
	add r0, r0, #1
	str r0, [r2, r1, lsl #2]
lbl_02009038:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	beq lbl_0200905c
	ldr r1, [r4, #0x1c]
	add r2, r4, #0x30
	ldr r0, [r2, r1, lsl #2]
	sub r0, r0, #1
	str r0, [r2, r1, lsl #2]
lbl_0200905c:
	ldr r0, [r4, #0x1c]
	mov r1, #0
	add r0, r4, r0, lsl #2
	ldr r0, [r0, #0x30]
	mov r2, #8
	bl func_02008ea0
	ldr r1, [r4, #0x1c]
	add r1, r4, r1, lsl #2
	str r0, [r1, #0x30]
	ldmia sp!, {r4, pc}
lbl_02009084:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_0200909c
	ldr r0, =data_020c4fb4
	bl func_02048e60
lbl_0200909c:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_020c4fb4
	bl func_02048ee0
	ldmia sp!, {r4, pc}
lbl_020090b8:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x10
	beq lbl_020090d0
	ldr r0, =data_020c4fb4
	bl func_02048f90
lbl_020090d0:
	ldr r0, =data_02116d40
	bl func_0207f290
	tst r0, #0x20
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_020c4fb4
	bl func_02048ff8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020090f4(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #0x1c
	mov r4, r0
	ldr r1, [r4, #0x14]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r3, =data_020bbba4
	add r1, r1, #1
	add r2, r2, #1
	bl func_0207e88c
	ldr r12, =data_0208c960
	add r3, sp, #4
	mov r2, #0xc
lbl_02009130:
	ldrb r1, [r12]
	ldrb r0, [r12, #1]
	add r12, r12, #2
	strb r1, [r3]
	strb r0, [r3, #1]
	add r3, r3, #2
	subs r2, r2, #1
	bne lbl_02009130
	ldr r1, [r4, #0x18]
	add r2, sp, #4
	add r1, r2, r1, lsl #3
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbbbc
	add r1, r1, #1
	add r2, r2, #2
	bl func_0207e88c
	ldr r0, =data_020c4fb4
	bl func_02048e50
	str r0, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbbd0
	add r1, r1, #1
	add r2, r2, #3
	bl func_0207e88c
	ldr r0, =data_020c4fb4
	bl func_02048f7c
	str r0, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbbe4
	add r1, r1, #1
	add r2, r2, #4
	bl func_0207e88c
	add sp, sp, #0x1c
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_020091f0(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	mov r4, r0
	ldr r1, [r4, #0x1c]
	ldr r0, =data_02116ce0
	add r1, r1, #1
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	ldr r3, =data_020bbbf8
	add r1, r1, #1
	add r2, r2, #1
	bl func_0207e88c
	ldr r1, [r4, #0x1c]
	ldr r0, =data_02116ce0
	add r1, r4, r1, lsl #2
	ldr r1, [r1, #0x20]
	ldr r3, =data_020bbc08
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #1
	add r2, r2, #2
	bl func_0207e88c
	ldr r1, [r4, #0x1c]
	ldr r0, =data_02116ce0
	add r1, r4, r1, lsl #2
	ldr r1, [r1, #0x30]
	ldr r3, =data_020bbc1c
	str r1, [sp]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #1
	add r2, r2, #3
	bl func_0207e88c
	ldr r0, =data_020c4fb4
	bl func_02048e50
	str r0, [sp]
	ldr r0, =data_02116ce0
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #1
	add r2, r2, #4
	ldr r3, =data_020bbc2c
	bl func_0207e88c
	ldr r0, =data_020c4fb4
	bl func_02048f7c
	str r0, [sp]
	ldr r0, =data_02116ce0
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #1
	add r2, r2, #5
	ldr r3, =data_020bbc3c
	bl func_0207e88c
	ldr r1, [r4, #0x20]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #0x30]
	ldr r3, =data_020bbc4c
	str r1, [sp, #4]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #0x18
	add r2, r2, #1
	bl func_0207e88c
	ldr r1, [r4, #0x24]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #0x34]
	ldr r3, =data_020bbc4c
	str r1, [sp, #4]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #0x18
	add r2, r2, #2
	bl func_0207e88c
	ldr r1, [r4, #0x28]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #0x38]
	ldr r3, =data_020bbc4c
	str r1, [sp, #4]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #0x18
	add r2, r2, #3
	bl func_0207e88c
	ldr r1, [r4, #0x2c]
	ldr r0, =data_02116ce0
	str r1, [sp]
	ldr r1, [r4, #0x3c]
	ldr r3, =data_020bbc4c
	str r1, [sp, #4]
	ldr r1, [r4, #8]
	ldr r2, [r4, #0xc]
	add r1, r1, #0x18
	add r2, r2, #4
	bl func_0207e88c
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020093a4(void)
{
	stmdb sp!, {r3, lr}
	bl func_020648cc
	bl func_020648b8
	bl func_02064928
	bl func_02064978
	bl func_02064964
	mov r0, #3
	bl func_02064258
	ldr r0, =data_0211e450
	mov r1, #0x40000
	mov r2, #0x4000
	bl func_020861c4
	ldr r0, =data_0211c4f0
	bl func_02080e90
	mov r0, #0
	bl func_02084dd4
	ldr r0, =0x00000001
	bl func_02087590
	bl func_02122e80
	ldr r0, =0x00000010
	bl func_02087590
	bl func_0217ad90
	bl func_02127458
	bl func_02127494
	bl func_0212aaac
	bl func_0212ab14
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	bl func_0202c25c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009434(void)
{
	stmdb sp!, {r3, lr}
	bl func_0212aaac
	bl func_0212ab48
	bl func_02127458
	bl func_02127640
	ldr r0, =0x00000001
	bl func_020875a4
	ldr r0, =0x00000010
	bl func_020875a4
	ldr r0, =data_02116d40
	mov r1, #0
	bl func_0207f2b4
	ldr r0, =data_0211e450
	bl func_02086278
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009480(void)
{
	stmdb sp!, {r3, lr}
	bl func_02127458
	bl func_02127770
	bl func_0212aaac
	bl func_0212ab60
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009498(void)
{
	stmdb sp!, {r3, lr}
	bl func_02127458
	bl func_0212785c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020094a8(void)
{
	bx lr
}

extern "C" asm void func_020094ac(void)
{
	ldr r12, =data_0202c285
	bx r12
}

extern "C" asm void func_020094b8(void)
{
	ldr r3, =0x04000208
	mov r1, #0
	ldrh r2, [r3]
	mov r0, #1
	strh r1, [r3]
	str r0, [r3, #0x338]
	ldrh r0, [r3]
	strh r2, [r3]
	bx lr
}

extern "C" asm void func_020094e0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_02116ce0
	bl func_0207e804
	mov r1, #1
	str r1, [r4, #4]
	add r0, r4, #0xc
	str r1, [r4, #8]
	bl func_02057000
	ldr r1, =data_020bbd58
	ldr r0, =data_02116ce8
	ldr r2, =data_0210baf8
	mov r3, #0
	bl func_0207eac0
	ldr r1, =data_0210baf8
	mov r2, #0
	strb r2, [r1, #0xa]
	strb r2, [r1, #0xb]
	ldr r0, =data_0211c4cc
	strb r2, [r1, #0x11]
	bl func_02080e90
	ldr r0, =data_02116d40
	mov r1, #0
	bl func_0207f2b4
	ldr r2, =data_020bbcc8
	mov r1, #0
lbl_02009548:
	ldr r0, [r2]
	cmp r0, #0x1b
	addne r2, r2, #0x24
	addne r1, r1, #1
	bne lbl_02009548
	ldr r0, =data_020c50e4
	str r1, [r0]
	bl func_0200d550
	ldr r0, =g_Global
	ldr r1, =data_020bbd68
	bl _ZN6Global10setMapNameEPc
	bl func_0200c010
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020095b0(void)
{
	ldr r12, =func_0207e810
	ldr r0, =data_02116ce0
	bx r12
}

extern "C" asm void func_020095c4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x40
	ldrne r0, [r4, #8]
	subne r0, r0, #1
	strne r0, [r4, #8]
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #0x80
	ldrne r0, [r4, #8]
	ldr r1, =data_020c50e4
	addne r0, r0, #1
	strne r0, [r4, #8]
	ldr r2, [r1]
	ldr r0, [r4, #8]
	mov r1, #1
	bl func_02008ca0
	str r0, [r4, #8]
	ldr r0, =data_02116ce0
	bl func_0207e810
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #1
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #8]
	cmp r0, #5
	bne lbl_02009644
	ldr r0, =g_Global
	mov r1, #1
	bl _ZN6Global11setMinigameEi
lbl_02009644:
	ldr r0, [r4, #8]
	cmp r0, #6
	bne lbl_0200965c
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global11setMinigameEi
lbl_0200965c:
	ldr r1, [r4, #8]
	mov r0, #0x24
	sub r1, r1, #1
	mul r2, r1, r0
	ldr r1, =data_020bbcc8
	ldr r0, =data_0210bb94
	ldr r1, [r1, r2]
	bl func_020580fc
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02009698(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #8
	ldr r1, =data_020c50e4
	mov r9, r0
	ldr r0, [r1]
	mov r1, #0
	add r4, r0, #2
	ldr r0, =data_02116ce0
	mov r2, r1
	mov r3, #0x16
	str r4, [sp]
	bl func_0207e8e0
	ldr r10, =data_020c50e4
	mov r7, #0
	ldr r0, [r10]
	cmp r0, #0
	ble lbl_02009720
	ldr r8, =data_020bbcc8
	ldr r6, =data_02116ce0
	ldr r4, =data_020bbd70
	mov r5, #2
lbl_020096ec:
	add r2, r7, #1
	str r2, [sp]
	add r12, r8, #4
	mov r0, r6
	mov r1, r5
	mov r3, r4
	str r12, [sp, #4]
	bl func_0207e88c
	ldr r0, [r10]
	add r7, r7, #1
	cmp r7, r0
	add r8, r8, #0x24
	blt lbl_020096ec
lbl_02009720:
	ldr r0, =data_02116ce0
	ldmib r9, {r1, r2}
	bl func_0207e8f4
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r4, [r1, #0x54]
	ldr r3, =data_020bbd78
	mov r1, #0xc
	mov r2, #0x10
	str r4, [sp]
	bl func_0207e88c
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r4, [r1, #0x54]
	ldr r3, =data_020bbd78
	mov r1, #0xc
	mov r2, #0x11
	str r4, [sp]
	bl func_0207e88c
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r2, [r1, #0x54]
	ldr r3, =data_020bbd78
	str r2, [sp]
	mov r1, #0xc
	mov r2, #0x12
	bl func_0207e88c
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r2, [r1, #0x54]
	ldr r3, =data_020bbd78
	str r2, [sp]
	mov r1, #0xc
	mov r2, #0x13
	bl func_0207e88c
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r2, [r1, #0x54]
	ldr r3, =data_020bbd78
	str r2, [sp]
	mov r1, #0xc
	mov r2, #0x14
	bl func_0207e88c
	ldr r1, =data_0211a60c
	ldr r0, =data_02116ce0
	ldr r2, [r1, #0x54]
	ldr r3, =data_020bbd78
	str r2, [sp]
	mov r1, #0xc
	mov r2, #0x15
	bl func_0207e88c
	add r0, r9, #0x20
	str r0, [sp]
	add r0, r9, #0x10
	str r0, [sp, #4]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbd84
	mov r1, #0xc
	mov r2, #0x16
	bl func_0207e88c
	ldr r1, =data_0210bafa
	ldr r0, =data_0210bb04
	str r1, [sp]
	str r0, [sp, #4]
	ldr r0, =data_02116ce0
	ldr r3, =data_020bbd90
	mov r1, #0xc
	mov r2, #0x17
	bl func_0207e88c
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_02009864(void)
{
	bx lr
}

extern "C" asm void func_02009868(void)
{
	bx lr
}

extern "C" asm void func_0200986c(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c5118
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_02009898
	mov r0, #0
	mov r1, r0
	bl func_02061ad0
	mov r0, #0
	mov r1, r0
	bl func_02061b24
lbl_02009898:
	bl func_020648cc
	bl func_020648b8
	bl func_02064928
	bl func_02064978
	bl func_02064964
	mov r0, #3
	bl func_02064258
	ldr r0, =data_0211e450
	mov r1, #0x40000
	mov r2, #0x4000
	bl func_020861c4
	ldr r0, =data_0211c4f0
	bl func_02080e90
	bl func_0207e7e8
	ldr r0, =0x00000000
	bl func_02087590
	bl func_02132210
	ldr r0, =0x00000010
	bl func_02087590
	bl func_0217ad90
	bl func_0207e7e8
	bl func_02132228
	bl func_02132264
	bl func_021372e8
	bl func_02137350
	mov r0, #1
	bl func_0206dd70
	bl func_02079d78
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	ldr r0, =data_0211a60c
	bl func_0207f87c
	ldr r1, =data_020bbd9c
	ldr r1, [r1]
	cmp r0, r1
	bcs lbl_0200993c
	ldr r0, =data_0211a60c
	bl func_0207f87c
	ldr r1, =data_020bbd9c
	str r0, [r1]
lbl_0200993c:
	bl func_0202c25c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009964(void)
{
	stmdb sp!, {r3, lr}
	bl func_021372e8
	bl func_021373b8
	bl func_02132228
	bl func_0213241c
	bl func_0207e7e8
	ldr r0, =0x00000000
	bl func_020875a4
	ldr r0, =0x00000010
	bl func_020875a4
	ldr r0, =data_020efc58
	bl func_02087564
	ldr r0, =data_0211e450
	bl func_02086278
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020099b0(void)
{
	stmdb sp!, {r3, lr}
	bl func_02132228
	bl func_02132670
	bl func_021372e8
	bl func_021373f8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020099c8(void)
{
	stmdb sp!, {r3, lr}
	bl func_02132228
	bl func_02132778
	bl func_021372e8
	bl func_02137430
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020099e0(void)
{
	bx lr
}

extern "C" asm void func_020099e4(void)
{
	ldr r12, =data_0202c285
	bx r12
}

extern "C" asm void func_020099f0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x98
	ldr r2, =data_020bbe2c
	ldr r3, =data_020bbe40
	add r0, sp, #0x18
	mov r1, #0x80
	mov r9, #0
	bl func_02088308
	ldr r0, =data_020c6170
	add r1, sp, #0x18
	mov r2, r9
	bl func_020586e8
	ldr r4, =data_020c6170
	ldr r6, =data_020bbe40
	ldr r5, =data_02116ce8
	ldr r11, =data_020bbe48
	mov r10, r9
	add r8, sp, #0x18
	mov r7, #0x80
lbl_02009a3c:
	mov r0, r8
	mov r1, r7
	str r10, [sp]
	mov r2, r11
	mov r3, r6
	bl func_02088308
	mov r0, r5
	mov r1, r8
	bl func_0207ebd4
	cmp r0, #0
	beq lbl_02009a7c
	mov r0, r4
	mov r1, r8
	mov r2, r9
	bl func_020587d4
	add r9, r9, #1
lbl_02009a7c:
	ldr r2, =data_020bbe60
	mov r0, r8
	mov r1, #0x80
	mov r3, r6
	str r10, [sp]
	bl func_02088308
	mov r0, r5
	mov r1, r8
	bl func_0207ebd4
	cmp r0, #0
	beq lbl_02009abc
	mov r0, r4
	mov r1, r8
	mov r2, r9
	bl func_020587d4
	add r9, r9, #1
lbl_02009abc:
	ldr r2, =data_020bbe78
	mov r0, r8
	mov r1, #0x80
	mov r3, r6
	str r10, [sp]
	bl func_02088308
	mov r0, r5
	mov r1, r8
	bl func_0207ebd4
	cmp r0, #0
	beq lbl_02009afc
	mov r0, r4
	mov r1, r8
	mov r2, r9
	bl func_020587d4
	add r9, r9, #1
lbl_02009afc:
	add r10, r10, #1
	cmp r10, #2
	blt lbl_02009a3c
	mov r1, #1
	ldr r0, =data_020c6170
	mov r2, r1
	bl func_02058a84
	add r0, sp, #0xc
	bl _ZN3dss11Fx32Vector3C1Ev
	ldr r4, =0xFFFFE99A
	ldr r0, =data_020c6170
	add r3, r4, #0x10000
	add r2, r4, #0xdc00
	add r1, sp, #0xc
	str r4, [sp, #0xc]
	str r3, [sp, #0x10]
	str r2, [sp, #0x14]
	bl func_02058bcc
	mov r4, #0x1b00
	mov r3, #0x6000
	mov r2, #0x800
	ldr r0, =data_020c6170
	add r1, sp, #4
	strh r4, [sp, #4]
	strh r3, [sp, #6]
	strh r2, [sp, #8]
	bl func_02058c10
	add sp, sp, #0x98
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02009b90(void)
{
	ldr r12, =func_020588f8
	ldr r0, =data_020c6170
	mov r1, #1
	bx r12

	dcd 0x00000000
}

#pragma thumb on
