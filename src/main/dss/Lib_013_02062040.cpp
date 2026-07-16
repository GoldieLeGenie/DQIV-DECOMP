/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02062040(void);
    void func_020623cc(void);
    void func_020626a0(void);
    void func_02062740(void);
    void func_0206276c(void);
    void func_020627a0(void);
    void func_02062e04(void);
    void func_02062e14(void);
    void func_02062e24(void);
    void func_02062e50(void);
    void func_02062e84(void);
    void func_02062ea8(void);
    void func_02062ee0(void);
    void func_02062f10(void);
    void func_02062f3c(void);
    void func_02062f64(void);
    void func_02062f98(void);
    void func_02062fcc(void);
    void func_02063008(void);
    void func_0206308c(void);
    void func_020630ec(void);
    void func_02063204(void);
    void func_02063330(void);
    void func_0206338c(void);
    void func_02063408(void);
    void func_020634c4(void);
    void func_0206366c(void);
    void func_02063670(void);
    void func_020637bc(void);
    void func_020637f0(void);
    void func_0206382c(void);
    void func_02063874(void);
    void func_020638dc(void);
    void func_020638f8(void);
    void func_02063920(void);
    void func_02063960(void);
    void func_020639c0(void);
    void func_02063a78(void);
    void func_02063d08(void);
    void func_02063f50(void);
    void func_02063f5c(void);
    void func_020640ac(void);
    void func_020641ac(void);
    void func_02064258(void);
    void func_02064430(void);
    void func_02064518(void);
    void func_0206464c(void);
    void func_0206466c(void);
    void func_02064714(void);
    void func_02064784(void);
    void func_02064804(void);
    void func_02064884(void);
    void func_020648b8(void);
    void func_020648cc(void);
    void func_020648e0(void);
    void func_02064904(void);
    void func_02064928(void);
    void func_0206493c(void);
    void func_02064950(void);
    void func_02064964(void);
    void func_02064978(void);
    void func_0206498c(void);
    void func_020649b4(void);
    void func_020649dc(void);
    void func_02064abc(void);
    void func_02064ad0(void);
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
    void func_02064f40(void);
    void func_02064ff0(void);
    void func_0206500c(void);
    void func_02065034(void);
    void func_02065050(void);
    void func_0206506c(void);
    void func_02065088(void);
    void func_02065194(void);
    void func_02065200(void);
    void func_02065228(void);
    void func_020652c0(void);
    void func_02065350(void);
    void func_020653a8(void);
    void func_020653d8(void);
    void func_02065408(void);
    void func_0206541c(void);
    void func_02065444(void);
    void func_020654e4(void);
    void func_02065514(void);
    void func_02065544(void);
    void func_02065570(void);
    void func_02065604(void);
    void func_020657d4(void);
    void func_02065a98(void);
    void func_02065c24(void);
    void func_02065c60(void);
    void func_02065c9c(void);
    void func_02065cd8(void);
    void func_02065d2c(void);
    void func_02065d84(void);
    void func_02065ddc(void);
    void func_02065e34(void);
    void func_02065e88(void);
    void func_02065ee0(void);
    void func_02065f38(void);
    void func_02065f90(void);
    void data_020ba38c(void);
    void data_020c3db8(void);
    void data_020c3dbc(void);
    void data_0210ce58(void);
    void data_0210ce5a(void);
    void data_0210ce5c(void);
    void data_0210ce5e(void);
    void data_0210ce60(void);
    void data_0210ce64(void);
    void data_0210ce66(void);
    void data_0210ce68(void);
    void data_0210ce6a(void);
    void data_0210ce6c(void);
    void data_0210ce6e(void);
    void data_0210ce70(void);
    void data_0210ce72(void);
    void data_0210ce74(void);
    void func_02005e34(void);
    void func_02066dcc(void);
    void func_020670cc(void);
    void func_0206714c(void);
    void func_020671bc(void);
    void func_02067228(void);
    void func_02067384(void);
    void func_02067840(void);
    void func_0206785c(void);
    void func_02067870(void);
    void func_02067924(void);
    void func_02067940(void);
    void func_0206795c(void);
    void func_02067980(void);
    void func_02077a14(void);
    void func_02079cfc(void);
    void func_02079d10(void);
    void func_02079f00(void);
    void func_0207a058(void);
}

#pragma thumb off

extern "C" asm void func_02062040(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x5c
	mov r10, r0
	ldr r0, [r10, #0x14]
	cmp r10, r1
	addeq r9, sp, #0x2c
	ldr r3, [r10, #0x18]
	ldr r2, [r10, #0xc]
	ldr r6, [r10, #0x20]
	str r1, [sp]
	movne r9, r1
	smull r11, r8, r2, r6
	smull r7, r1, r0, r3
	subs r7, r11, r7
	sbc r12, r8, r1
	ldr r4, [r10, #0x10]
	ldr r5, [r10, #0x1c]
	adds r1, r7, #0x800
	smull r11, r8, r4, r6
	smull r7, r6, r0, r5
	adc r0, r12, #0
	subs r7, r11, r7
	sbc r6, r8, r6
	mov r8, r1, lsr #0xc
	orr r8, r8, r0, lsl #20
	smull r1, r0, r2, r5
	adds r7, r7, #0x800
	smull r5, r3, r4, r3
	adc r2, r6, #0
	mov r7, r7, lsr #0xc
	orr r7, r7, r2, lsl #20
	subs r1, r1, r5
	sbc r5, r0, r3
	ldr r2, [r10]
	adds r6, r1, #0x800
	ldr r11, [r10, #4]
	smull r4, r3, r2, r7
	smull r1, r0, r11, r8
	adc r2, r5, #0
	mov r6, r6, lsr #0xc
	orr r6, r6, r2, lsl #20
	subs r2, r4, r1
	ldr r1, [r10, #8]
	sbc r0, r3, r0
	smlal r2, r0, r1, r6
	adds r1, r2, #0x800
	adc r2, r0, #0
	mov r0, r1, lsr #0xc
	mov r1, r8, asr #0x1f
	str r1, [sp, #4]
	mov r1, r7, asr #0x1f
	str r1, [sp, #8]
	mov r1, r6, asr #0x1f
	str r1, [sp, #0xc]
	orrs r0, r0, r2, lsl #20
	mov r1, #0
	addeq sp, sp, #0x5c
	subeq r0, r1, #1
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	bl func_02062ee0
	ldr r1, [r10, #8]
	ldr r2, [r10, #0x1c]
	ldr r11, [r10, #0x10]
	smull r0, r4, r2, r1
	smull r3, r2, r11, r1
	ldr r5, [r10, #0x18]
	str r2, [sp, #0x18]
	str r3, [sp, #0x14]
	smull r3, r2, r5, r1
	str r2, [sp, #0x20]
	ldr r2, [r10, #0x20]
	str r3, [sp, #0x1c]
	str r2, [sp, #0x10]
	ldr r5, [sp, #0x10]
	ldmia r10, {r3, lr}
	smull r12, r5, lr, r5
	subs r0, r12, r0
	ldr r2, [r10, #0xc]
	sbc r4, r5, r4
	smull r1, r5, r2, r1
	str r5, [sp, #0x28]
	mov r5, r0, lsr #0xc
	ldr r11, [r10, #0x14]
	orr r5, r5, r4, lsl #20
	smull r4, r2, lr, r11
	ldr r0, [sp, #0x14]
	subs r4, r4, r0
	ldr r0, [sp, #0x18]
	mov r4, r4, lsr #0xc
	sbc r0, r2, r0
	orr r4, r4, r0, lsl #20
	ldr r0, [sp, #0x10]
	ldr r2, [sp, #0x1c]
	smull r12, r0, r3, r0
	subs r2, r12, r2
	ldr r12, [sp, #0x20]
	sbc r0, r0, r12
	smull r12, r11, r3, r11
	ldr r3, [sp, #0x28]
	subs r1, r12, r1
	sbc r3, r11, r3
	mov r11, r2, lsr #0xc
	orr r11, r11, r0, lsl #20
	mov r0, r1, lsr #0xc
	orr r0, r0, r3, lsl #20
	str r0, [sp, #0x24]
	bl func_02062ea8
	smull r2, r1, r0, r5
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	rsb lr, r2, #0
	smull r2, r1, r0, r4
	mov r4, r2, lsr #0xc
	orr r4, r4, r1, lsl #20
	smull r2, r1, r0, r11
	mov r3, r2, lsr #0xc
	orr r3, r3, r1, lsl #20
	ldr r1, [sp, #0x24]
	umull r11, r5, r0, r7
	smull r2, r1, r0, r1
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	ldr r1, [sp, #8]
	mov r12, r0, asr #0x1f
	mla r5, r0, r1, r5
	mla r5, r12, r7, r5
	mov r1, r11, lsr #0xc
	orr r1, r1, r5, lsl #20
	stmia r9, {r1, lr}
	str r4, [r9, #8]
	ldr r1, [sp, #4]
	umull r5, r4, r0, r8
	mla r4, r0, r1, r4
	mla r4, r12, r8, r4
	mov r1, r5, lsr #0xc
	orr r1, r1, r4, lsl #20
	rsb r1, r1, #0
	str r1, [r9, #0xc]
	ldr r1, [sp, #0xc]
	rsb r2, r2, #0
	str r3, [r9, #0x10]
	str r2, [r9, #0x14]
	umull r3, r2, r0, r6
	mla r2, r0, r1, r2
	mla r2, r12, r6, r2
	mov r1, r3, lsr #0xc
	orr r1, r1, r2, lsl #20
	str r1, [r9, #0x18]
	ldr r3, [r10]
	ldr r1, [r10, #0x1c]
	ldr r2, [r10, #0x18]
	smull r5, r4, r3, r1
	ldr r1, [r10, #4]
	smull r3, r1, r2, r1
	subs r2, r5, r3
	sbc r1, r4, r1
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	smull r2, r1, r0, r2
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	rsb r1, r2, #0
	str r1, [r9, #0x1c]
	ldr r4, [r10]
	ldr r3, [r10, #0x10]
	ldr r2, [r10, #0xc]
	ldr r1, [r10, #4]
	smull r6, r5, r4, r3
	smull r3, r1, r2, r1
	subs r2, r6, r3
	sbc r1, r5, r1
	mov r2, r2, lsr #0xc
	orr r2, r2, r1, lsl #20
	mov r1, r2, asr #0x1f
	umull r4, r3, r0, r2
	mla r3, r0, r1, r3
	mla r3, r12, r2, r3
	mov r0, r4, lsr #0xc
	orr r0, r0, r3, lsl #20
	str r0, [r9, #0x20]
	ldr r1, [r9, #0xc]
	ldr r0, [r10, #0x28]
	ldr r2, [r9]
	smull r5, r4, r1, r0
	ldr r0, [r10, #0x24]
	ldr r3, [r9, #0x18]
	smlal r5, r4, r2, r0
	ldr r1, [r10, #0x2c]
	add r0, sp, #0x2c
	smlal r5, r4, r3, r1
	mov r1, r5, lsr #0xc
	orr r1, r1, r4, lsl #20
	rsb r1, r1, #0
	str r1, [r9, #0x24]
	ldr r2, [r9, #0x10]
	ldr r1, [r10, #0x28]
	ldr r3, [r9, #4]
	smull r5, r4, r2, r1
	ldr r1, [r10, #0x24]
	ldr r2, [r9, #0x1c]
	smlal r5, r4, r3, r1
	ldr r1, [r10, #0x2c]
	cmp r9, r0
	smlal r5, r4, r2, r1
	mov r1, r5, lsr #0xc
	orr r1, r1, r4, lsl #20
	rsb r1, r1, #0
	str r1, [r9, #0x28]
	ldr r2, [r9, #0x14]
	ldr r1, [r10, #0x28]
	ldr r3, [r9, #8]
	smull r6, r5, r2, r1
	ldr r1, [r10, #0x24]
	ldr r4, [r9, #0x20]
	smlal r6, r5, r3, r1
	ldr r2, [r10, #0x2c]
	smlal r6, r5, r4, r2
	mov r1, r6, lsr #0xc
	orr r1, r1, r5, lsl #20
	rsb r1, r1, #0
	str r1, [r9, #0x2c]
	bne lbl_020623c0
	ldr r1, [sp]
	bl func_0206795c
lbl_020623c0:
	mov r0, #0
	add sp, sp, #0x5c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020623cc(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x4c
	mov r12, r2
	ldr r2, [r0, #4]
	ldr r3, [r1, #0xc]
	cmp r12, r1
	smull r7, r4, r2, r3
	ldr r6, [r0]
	ldr r3, [r1]
	addeq r10, sp, #0x1c
	smlal r7, r4, r6, r3
	ldr r5, [r0, #8]
	ldr r3, [r1, #0x18]
	movne r10, r12
	smlal r7, r4, r5, r3
	mov r3, r7, lsr #0xc
	orr r3, r3, r4, lsl #20
	str r3, [r10]
	ldr r3, [r1, #0x10]
	ldr r4, [r1, #4]
	smull r8, r7, r2, r3
	smlal r8, r7, r6, r4
	ldr r3, [r1, #0x1c]
	smlal r8, r7, r5, r3
	mov r3, r8, lsr #0xc
	orr r3, r3, r7, lsl #20
	str r3, [r10, #4]
	ldr r3, [r1, #0x14]
	ldr r4, [r1, #8]
	smull r8, r7, r2, r3
	smlal r8, r7, r6, r4
	ldr r2, [r1, #0x20]
	smlal r8, r7, r5, r2
	mov r5, r8, lsr #0xc
	orr r5, r5, r7, lsl #20
	str r5, [r10, #8]
	ldr r8, [r0, #0x10]
	ldr r9, [r0, #0xc]
	smull r5, r3, r8, r3
	smlal r5, r3, r9, r4
	ldr r7, [r0, #0x14]
	mov r6, r9, asr #0x1f
	smlal r5, r3, r7, r2
	mov r2, r5, lsr #0xc
	orr r2, r2, r3, lsl #20
	str r2, [r10, #0x14]
	ldr r2, [r1, #0x10]
	ldr r3, [r1, #4]
	smull r5, r4, r8, r2
	smlal r5, r4, r9, r3
	ldr r3, [r1, #0x1c]
	mov r2, r8, asr #0x1f
	smlal r5, r4, r7, r3
	str r2, [sp, #0x14]
	mov r2, r5, lsr #0xc
	orr r2, r2, r4, lsl #20
	str r2, [r10, #0x10]
	mov r2, r7, asr #0x1f
	ldr r5, [r1]
	str r2, [sp]
	ldr r4, [r1, #0xc]
	ldr lr, [r1, #0x18]
	mov r2, r4, asr #0x1f
	str r2, [sp, #4]
	mov r2, r5, asr #0x1f
	str r2, [sp, #8]
	umull r2, r3, r7, lr
	mov r11, lr, asr #0x1f
	mla r3, r7, r11, r3
	str r2, [sp, #0xc]
	ldr r2, [sp]
	ldr r7, [sp, #8]
	mla r3, r2, lr, r3
	umull r11, r2, r9, r5
	mla r2, r9, r7, r2
	mla r2, r6, r5, r2
	ldr r6, [sp, #4]
	umull r9, r7, r8, r4
	mla r7, r8, r6, r7
	ldr r8, [sp, #0x14]
	adds r6, r11, r9
	mla r7, r8, r4, r7
	adc r7, r2, r7
	ldr r2, [sp, #0xc]
	adds r6, r2, r6
	adc r2, r3, r7
	mov r3, r6, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0xc]
	ldr r3, [r0, #0x1c]
	ldr r6, [r0, #0x18]
	smull r7, r4, r3, r4
	smlal r7, r4, r6, r5
	ldr r2, [r0, #0x20]
	smlal r7, r4, r2, lr
	mov r5, r7, lsr #0xc
	orr r5, r5, r4, lsl #20
	str r5, [r10, #0x18]
	ldr r4, [r1, #0x10]
	ldr r5, [r1, #4]
	smull r8, r4, r3, r4
	smlal r8, r4, r6, r5
	ldr r7, [r1, #0x1c]
	smlal r8, r4, r2, r7
	mov r5, r8, lsr #0xc
	orr r5, r5, r4, lsl #20
	str r5, [r10, #0x1c]
	ldr r5, [r1, #0x14]
	ldr r4, [r1, #8]
	smull r8, r7, r3, r5
	smlal r8, r7, r6, r4
	ldr r3, [r1, #0x20]
	smlal r8, r7, r2, r3
	mov r2, r8, lsr #0xc
	orr r2, r2, r7, lsl #20
	str r2, [r10, #0x20]
	ldr r2, [r0, #0x28]
	ldr r9, [r0, #0x24]
	ldr r7, [r0, #0x2c]
	smull r5, r0, r2, r5
	smlal r5, r0, r9, r4
	smlal r5, r0, r7, r3
	mov r3, r5, lsr #0xc
	orr r3, r3, r0, lsl #20
	mov r0, r7, asr #0x1f
	str r0, [sp, #0x18]
	ldr r0, [r1, #0x2c]
	mov r11, r2, asr #0x1f
	adds r0, r0, r3
	str r0, [r10, #0x2c]
	ldr r3, [r1, #0x10]
	ldr r4, [r1, #4]
	smull r6, r3, r2, r3
	smlal r6, r3, r9, r4
	ldr r5, [r1, #0x1c]
	ldr r0, [r1, #0x28]
	smlal r6, r3, r7, r5
	mov r4, r6, lsr #0xc
	orr r4, r4, r3, lsl #20
	adds r0, r0, r4
	mov r8, r9, asr #0x1f
	str r0, [r10, #0x28]
	ldr r4, [r1]
	ldr r3, [r1, #0xc]
	umull r0, r5, r9, r4
	mov lr, r4, asr #0x1f
	mla r5, r9, lr, r5
	mov r9, r3, asr #0x1f
	str r0, [sp, #0x10]
	mla r5, r8, r4, r5
	umull r8, r0, r2, r3
	mla r0, r2, r9, r0
	ldr r4, [sp, #0x10]
	mla r0, r11, r3, r0
	adds r4, r4, r8
	adc r2, r5, r0
	ldr r6, [r1, #0x18]
	ldr r8, [r1, #0x24]
	mov r1, r6, asr #0x1f
	umull r5, r3, r7, r6
	mla r3, r7, r1, r3
	adds r1, r5, r4
	ldr r0, [sp, #0x18]
	mov r1, r1, lsr #0xc
	mla r3, r0, r6, r3
	adc r0, r3, r2
	orr r1, r1, r0, lsl #20
	adds r0, r8, r1
	add r4, sp, #0x1c
	cmp r10, r4
	addne sp, sp, #0x4c
	str r0, [r10, #0x24]
	ldmneia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldmia r4!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia r4!, {r0, r1, r2, r3}
	stmia r12!, {r0, r1, r2, r3}
	ldmia r4, {r0, r1, r2, r3}
	stmia r12, {r0, r1, r2, r3}
	add sp, sp, #0x4c
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_020626a0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r4, [r1, #0xc]
	ldmia r0, {r3, r12}
	smull r6, r5, r12, r4
	ldr r4, [r1]
	ldr r0, [r0, #8]
	smlal r6, r5, r3, r4
	ldr r4, [r1, #0x18]
	smlal r6, r5, r0, r4
	mov r6, r6, lsr #0xc
	orr r6, r6, r5, lsl #20
	str r6, [r2]
	ldr r4, [r1, #0x24]
	add r4, r6, r4
	str r4, [r2]
	ldr r4, [r1, #0x10]
	ldr r5, [r1, #4]
	smull r6, lr, r12, r4
	smlal r6, lr, r3, r5
	ldr r4, [r1, #0x1c]
	smlal r6, lr, r0, r4
	mov r5, r6, lsr #0xc
	orr r5, r5, lr, lsl #20
	str r5, [r2, #4]
	ldr r4, [r1, #0x28]
	add r4, r5, r4
	str r4, [r2, #4]
	ldr lr, [r1, #0x14]
	ldr r4, [r1, #8]
	smull r5, lr, r12, lr
	smlal r5, lr, r3, r4
	ldr r3, [r1, #0x20]
	smlal r5, lr, r0, r3
	mov r3, r5, lsr #0xc
	orr r3, r3, lr, lsl #20
	str r3, [r2, #8]
	ldr r0, [r1, #0x2c]
	add r0, r3, r0
	str r0, [r2, #8]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02062740(void)
{
	mov r2, #0x1000
	mov r3, #0
	stmia r0!, {r2, r3}
	mov r1, #0
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2, r3}
	stmia r0!, {r1, r3}
	stmia r0!, {r1, r2}
	bx lr
}

extern "C" asm void func_0206276c(void)
{
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	ldmia r0!, {r2, r3, r12}
	add r0, r0, #4
	stmia r1!, {r2, r3, r12}
	bx lr
}

extern "C" asm void func_020627a0(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0xe8
	cmp r2, r1
	addeq r10, sp, #0xa8
	str r2, [sp]
	movne r10, r2
	ldr r4, [r0, #4]
	ldr r2, [r1, #0x10]
	ldr r5, [r0]
	smull r8, r7, r4, r2
	ldr r2, [r1]
	ldr r3, [r0, #8]
	smlal r8, r7, r5, r2
	ldr r6, [r1, #0x20]
	ldr r2, [r0, #0xc]
	smlal r8, r7, r3, r6
	ldr r6, [r1, #0x30]
	smlal r8, r7, r2, r6
	mov r6, r8, lsr #0xc
	orr r6, r6, r7, lsl #20
	str r6, [r10]
	ldr r6, [r1, #0x14]
	ldr r7, [r1, #4]
	smull r9, r8, r4, r6
	smlal r9, r8, r5, r7
	ldr r6, [r1, #0x24]
	ldr r7, [r1, #0x34]
	smlal r9, r8, r3, r6
	smlal r9, r8, r2, r7
	mov r6, r9, lsr #0xc
	orr r6, r6, r8, lsl #20
	str r6, [r10, #4]
	ldr r6, [r1, #0x1c]
	ldr r7, [r1, #0xc]
	smull r9, r8, r4, r6
	smlal r9, r8, r5, r7
	ldr r6, [r1, #0x2c]
	ldr r7, [r1, #0x3c]
	smlal r9, r8, r3, r6
	smlal r9, r8, r2, r7
	mov r6, r9, lsr #0xc
	orr r6, r6, r8, lsl #20
	str r6, [r10, #0xc]
	ldr r11, [r1, #0x18]
	ldr r12, [r1, #8]
	smull r7, r6, r4, r11
	ldr r8, [r1, #0x38]
	smlal r7, r6, r5, r12
	ldr r9, [r1, #0x28]
	mov lr, r8, asr #0x1f
	smlal r7, r6, r3, r9
	smlal r7, r6, r2, r8
	mov r2, r7, lsr #0xc
	orr r2, r2, r6, lsl #20
	str r2, [r10, #8]
	mov r2, r11, asr #0x1f
	str r2, [sp, #4]
	mov r2, r12, asr #0x1f
	str r2, [sp, #8]
	mov r2, r9, asr #0x1f
	str r2, [sp, #0x8c]
	ldr r6, [r0, #0x14]
	ldr r7, [r0, #0x10]
	mov r2, r6, asr #0x1f
	str r2, [sp, #0xc]
	mov r2, r7, asr #0x1f
	ldr r5, [r0, #0x18]
	str r2, [sp, #0x10]
	mov r2, r5, asr #0x1f
	ldr r4, [r0, #0x1c]
	str r2, [sp, #0x14]
	mov r2, r4, asr #0x1f
	str r2, [sp, #0x18]
	umull r2, r3, r4, r8
	str r2, [sp, #0x1c]
	mla r3, r4, lr, r3
	ldr r2, [sp, #0x18]
	mla r3, r2, r8, r3
	umull r8, r2, r5, r9
	str r8, [sp, #0x20]
	ldr r8, [sp, #0x8c]
	mla r2, r5, r8, r2
	ldr r8, [sp, #0x14]
	mla r2, r8, r9, r2
	ldr r8, [sp, #8]
	umull lr, r9, r7, r12
	mla r9, r7, r8, r9
	ldr r8, [sp, #0x10]
	mla r9, r8, r12, r9
	umull r12, r8, r6, r11
	adds lr, lr, r12
	ldr r12, [sp, #4]
	mla r8, r6, r12, r8
	ldr r12, [sp, #0xc]
	mla r8, r12, r11, r8
	adc r9, r9, r8
	ldr r8, [sp, #0x20]
	adds r11, r8, lr
	adc r8, r2, r9
	ldr r2, [sp, #0x1c]
	adds r9, r2, r11
	adc r2, r3, r8
	mov r3, r9, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0x18]
	ldr r2, [r1, #0x14]
	ldr r3, [r1, #4]
	smull r11, r2, r6, r2
	smlal r11, r2, r7, r3
	ldr r8, [r1, #0x24]
	ldr r9, [r1, #0x34]
	smlal r11, r2, r5, r8
	smlal r11, r2, r4, r9
	mov r3, r11, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0x14]
	ldr r2, [r1, #0x1c]
	ldr r3, [r1, #0xc]
	smull r11, r2, r6, r2
	smlal r11, r2, r7, r3
	ldr r8, [r1, #0x2c]
	ldr r9, [r1, #0x3c]
	smlal r11, r2, r5, r8
	smlal r11, r2, r4, r9
	mov r3, r11, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0x1c]
	ldr r9, [r1, #0x10]
	ldr r11, [r1, #0x30]
	smull r12, r8, r6, r9
	ldr r3, [r1]
	ldr r2, [r1, #0x20]
	smlal r12, r8, r7, r3
	smlal r12, r8, r5, r2
	smlal r12, r8, r4, r11
	mov r4, r12, lsr #0xc
	orr r4, r4, r8, lsl #20
	str r4, [r10, #0x10]
	mov r4, r3, asr #0x1f
	mov r5, r9, asr #0x1f
	str r4, [sp, #0x28]
	mov r4, r2, asr #0x1f
	str r5, [sp, #0x24]
	ldr r7, [r0, #0x24]
	str r4, [sp, #0x2c]
	mov r4, r7, asr #0x1f
	ldr r8, [r0, #0x20]
	ldr r6, [r0, #0x28]
	ldr r5, [r0, #0x2c]
	mov lr, r11, asr #0x1f
	str r4, [sp, #0x90]
	mov r4, r8, asr #0x1f
	str r4, [sp, #0x30]
	mov r4, r6, asr #0x1f
	str r4, [sp, #0x34]
	mov r4, r5, asr #0x1f
	str r4, [sp, #0x38]
	umull r12, r4, r5, r11
	str r12, [sp, #0x3c]
	mla r4, r5, lr, r4
	ldr r12, [sp, #0x38]
	mla r4, r12, r11, r4
	umull r11, lr, r6, r2
	str r11, [sp, #0x40]
	ldr r11, [sp, #0x2c]
	mla lr, r6, r11, lr
	ldr r11, [sp, #0x34]
	mla lr, r11, r2, lr
	umull r2, r12, r8, r3
	str r2, [sp, #0x44]
	ldr r2, [sp, #0x28]
	mla r12, r8, r2, r12
	ldr r2, [sp, #0x30]
	mla r12, r2, r3, r12
	umull r3, r11, r7, r9
	ldr r2, [sp, #0x44]
	adds r3, r2, r3
	ldr r2, [sp, #0x24]
	mla r11, r7, r2, r11
	ldr r2, [sp, #0x90]
	mla r11, r2, r9, r11
	ldr r2, [sp, #0x40]
	adc r9, r12, r11
	adds r11, r2, r3
	ldr r2, [sp, #0x3c]
	adc r3, lr, r9
	adds r9, r2, r11
	adc r2, r4, r3
	mov r3, r9, lsr #0xc
	orr r3, r3, r2, lsl #20
	str r3, [r10, #0x20]
	ldr r2, [r1, #0x14]
	ldr lr, [r1, #4]
	str r2, [sp, #0x48]
	ldr r3, [sp, #0x48]
	mov r2, r2, asr #0x1f
	umull r12, r11, r7, r3
	mla r11, r7, r2, r11
	ldr r2, [sp, #0x90]
	ldr r4, [r1, #0x24]
	mla r11, r2, r3, r11
	smlal r12, r11, r8, lr
	smlal r12, r11, r6, r4
	ldr r9, [r1, #0x34]
	smlal r12, r11, r5, r9
	mov r2, r12, lsr #0xc
	orr r2, r2, r11, lsl #20
	str r2, [r10, #0x24]
	ldr r2, [r1, #0x1c]
	ldr lr, [r1, #0xc]
	str r2, [sp, #0x4c]
	ldr r3, [sp, #0x4c]
	mov r2, r2, asr #0x1f
	umull r12, r11, r7, r3
	mla r11, r7, r2, r11
	ldr r2, [sp, #0x90]
	ldr r4, [r1, #0x2c]
	mla r11, r2, r3, r11
	smlal r12, r11, r8, lr
	smlal r12, r11, r6, r4
	ldr r9, [r1, #0x3c]
	smlal r12, r11, r5, r9
	mov r2, r12, lsr #0xc
	orr r2, r2, r11, lsl #20
	str r2, [r10, #0x2c]
	ldr r11, [r1, #0x18]
	ldr r3, [r1, #0x38]
	mov r12, r11, asr #0x1f
	str r3, [sp, #0x50]
	umull r4, r3, r7, r11
	mla r3, r7, r12, r3
	ldr r7, [sp, #0x90]
	ldr r2, [r1, #8]
	mla r3, r7, r11, r3
	smlal r4, r3, r8, r2
	ldr r9, [r1, #0x28]
	smlal r4, r3, r6, r9
	ldr r6, [sp, #0x50]
	smlal r4, r3, r5, r6
	mov r4, r4, lsr #0xc
	orr r4, r4, r3, lsl #20
	str r4, [r10, #0x28]
	ldr r4, [r0, #0x34]
	ldr r3, [r0, #0x30]
	smull r6, r5, r4, r11
	smlal r6, r5, r3, r2
	mov r2, r4, asr #0x1f
	str r2, [sp, #0x54]
	mov r2, r3, asr #0x1f
	str r2, [sp, #0x58]
	ldr r2, [r0, #0x38]
	ldr r12, [r0, #0x3c]
	smlal r6, r5, r2, r9
	ldr r0, [sp, #0x50]
	smlal r6, r5, r12, r0
	mov r0, r6, lsr #0xc
	orr r0, r0, r5, lsl #20
	str r0, [r10, #0x38]
	mov r0, r2, asr #0x1f
	str r0, [sp, #0x5c]
	mov r0, r12, asr #0x1f
	str r0, [sp, #0x60]
	ldr r8, [r1, #0x24]
	ldr r7, [r1, #4]
	mov r0, r8, asr #0x1f
	ldr r9, [r1, #0x34]
	str r0, [sp, #0x98]
	mov r0, r7, asr #0x1f
	ldr r6, [r1, #0x14]
	str r0, [sp, #0x6c]
	mov r0, r6, asr #0x1f
	str r0, [sp, #0x70]
	umull r0, r11, r12, r9
	mov lr, r9, asr #0x1f
	str r0, [sp, #0x64]
	mla r11, r12, lr, r11
	ldr r0, [sp, #0x60]
	add r5, sp, #0xa8
	mla r11, r0, r9, r11
	umull r0, r9, r2, r8
	str r0, [sp, #0x94]
	ldr r0, [sp, #0x98]
	mla r9, r2, r0, r9
	ldr r0, [sp, #0x5c]
	mla r9, r0, r8, r9
	umull r0, r8, r3, r7
	str r0, [sp, #0x68]
	ldr r0, [sp, #0x6c]
	mla r8, r3, r0, r8
	ldr r0, [sp, #0x58]
	mla r8, r0, r7, r8
	umull r7, lr, r4, r6
	ldr r0, [sp, #0x68]
	adds r7, r0, r7
	ldr r0, [sp, #0x70]
	mla lr, r4, r0, lr
	ldr r0, [sp, #0x54]
	mla lr, r0, r6, lr
	ldr r0, [sp, #0x94]
	adc r6, r8, lr
	adds r7, r0, r7
	ldr r0, [sp, #0x64]
	adc r6, r9, r6
	adds r7, r0, r7
	adc r0, r11, r6
	mov r6, r7, lsr #0xc
	orr r6, r6, r0, lsl #20
	str r6, [r10, #0x34]
	ldr r8, [r1, #0x20]
	ldr r9, [r1, #0x30]
	mov r0, r8, asr #0x1f
	ldr r7, [r1]
	str r0, [sp, #0xa0]
	mov r0, r7, asr #0x1f
	ldr r6, [r1, #0x10]
	str r0, [sp, #0x7c]
	mov r0, r6, asr #0x1f
	str r0, [sp, #0x80]
	umull r0, r11, r12, r9
	mov lr, r9, asr #0x1f
	str r0, [sp, #0x74]
	mla r11, r12, lr, r11
	ldr r0, [sp, #0x60]
	mla r11, r0, r9, r11
	umull r0, r9, r2, r8
	str r0, [sp, #0x9c]
	ldr r0, [sp, #0xa0]
	mla r9, r2, r0, r9
	ldr r0, [sp, #0x5c]
	mla r9, r0, r8, r9
	umull r0, r8, r3, r7
	str r0, [sp, #0x78]
	ldr r0, [sp, #0x7c]
	mla r8, r3, r0, r8
	ldr r0, [sp, #0x58]
	mla r8, r0, r7, r8
	umull r7, lr, r4, r6
	ldr r0, [sp, #0x78]
	adds r7, r0, r7
	ldr r0, [sp, #0x80]
	mla lr, r4, r0, lr
	ldr r0, [sp, #0x54]
	mla lr, r0, r6, lr
	ldr r0, [sp, #0x9c]
	adc r6, r8, lr
	adds r7, r0, r7
	ldr r0, [sp, #0x74]
	adc r6, r9, r6
	adds r7, r0, r7
	adc r0, r11, r6
	mov r6, r7, lsr #0xc
	orr r6, r6, r0, lsl #20
	str r6, [r10, #0x30]
	ldr r8, [r1, #0x3c]
	ldr r6, [r1, #0xc]
	mov r0, r8, asr #0x1f
	str r0, [sp, #0x84]
	ldr r7, [r1, #0x2c]
	ldr r11, [sp, #0x84]
	mov r0, r7, asr #0x1f
	str r0, [sp, #0x88]
	ldr r0, [r1, #0x1c]
	mov lr, r6, asr #0x1f
	mov r1, r0, asr #0x1f
	str r1, [sp, #0xa4]
	umull r9, r1, r12, r8
	mla r1, r12, r11, r1
	ldr r11, [sp, #0x60]
	mla r1, r11, r8, r1
	ldr r8, [sp, #0x88]
	umull r12, r11, r2, r7
	mla r11, r2, r8, r11
	ldr r2, [sp, #0x5c]
	ldr r8, [sp, #0xa4]
	mla r11, r2, r7, r11
	umull r7, r2, r3, r6
	mla r2, r3, lr, r2
	ldr r3, [sp, #0x58]
	mla r2, r3, r6, r2
	umull r6, r3, r4, r0
	mla r3, r4, r8, r3
	ldr r4, [sp, #0x54]
	mla r3, r4, r0, r3
	adds r4, r7, r6
	adc r0, r2, r3
	adds r2, r12, r4
	adc r0, r11, r0
	adds r2, r9, r2
	adc r0, r1, r0
	mov r1, r2, lsr #0xc
	orr r1, r1, r0, lsl #20
	cmp r10, r5
	addne sp, sp, #0xe8
	str r1, [r10, #0x3c]
	ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
	ldr r4, [sp]
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	str r4, [sp]
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	str r4, [sp]
	ldmia r5!, {r0, r1, r2, r3}
	stmia r4!, {r0, r1, r2, r3}
	ldmia r5, {r0, r1, r2, r3}
	stmia r4, {r0, r1, r2, r3}
	str r4, [sp]
	add sp, sp, #0xe8
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02062e04(void)
{
	stmdb sp!, {r3, lr}
	bl func_02062f3c
	bl func_02062ea8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02062e14(void)
{
	stmdb sp!, {r3, lr}
	bl func_02062ee0
	bl func_02062ea8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02062e24(void)
{
	stmdb sp!, {r3, lr}
	bl func_02062ee0
	ldr r1, =0x04000280
lbl_02062e30:
	ldrh r0, [r1]
	tst r0, #0x8000
	bne lbl_02062e30
	ldr r1, =0x040002A0
	ldmia r1, {r0, r1}
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02062e50(void)
{
	stmdb sp!, {r3, lr}
	cmp r0, #0
	movle r0, #0
	ldmleia sp!, {r3, pc}
	ldr r2, =0x040002B0
	mov r1, #1
	strh r1, [r2]
	mov r1, #0
	str r1, [r2, #8]
	str r0, [r2, #0xc]
	bl func_02062f10
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02062e84(void)
{
	ldr r1, =0x04000280
lbl_02062e88:
	ldrh r0, [r1]
	tst r0, #0x8000
	bne lbl_02062e88
	ldr r1, =0x040002A0
	ldmia r1, {r0, r1}
	bx lr
}

extern "C" asm void func_02062ea8(void)
{
	ldr r1, =0x04000280
lbl_02062eac:
	ldrh r0, [r1]
	tst r0, #0x8000
	bne lbl_02062eac
	ldr r0, =0x040002A0
	ldr r1, [r0]
	ldr r0, [r0, #4]
	adds r2, r1, #0x80000
	adc r1, r0, #0
	mov r0, r2, lsr #0x14
	orr r0, r0, r1, lsl #12
	bx lr
}

extern "C" asm void func_02062ee0(void)
{
	ldr r2, =0x04000280
	mov r1, #1
	strh r1, [r2]
	mov r1, #0
	str r1, [r2, #0x10]
	mov r1, #0x1000
	str r1, [r2, #0x14]
	str r0, [r2, #0x18]
	mov r0, #0
	str r0, [r2, #0x1c]
	bx lr
}

extern "C" asm void func_02062f10(void)
{
	ldr r1, =0x040002B0
lbl_02062f14:
	ldrh r0, [r1]
	tst r0, #0x8000
	bne lbl_02062f14
	ldr r0, =0x040002B4
	ldr r0, [r0]
	add r0, r0, #0x200
	mov r0, r0, lsr #0xa
	bx lr
}

extern "C" asm void func_02062f3c(void)
{
	ldr r3, =0x04000280
	mov r2, #1
	strh r2, [r3]
	mov r2, #0
	str r2, [r3, #0x10]
	str r0, [r3, #0x14]
	str r1, [r3, #0x18]
	str r2, [r3, #0x1c]
	bx lr
}

extern "C" asm void func_02062f64(void)
{
	ldr r12, [r0]
	ldr r3, [r1]
	add r3, r12, r3
	str r3, [r2]
	ldr r12, [r0, #4]
	ldr r3, [r1, #4]
	add r3, r12, r3
	str r3, [r2, #4]
	ldr r3, [r0, #8]
	ldr r0, [r1, #8]
	add r0, r3, r0
	str r0, [r2, #8]
	bx lr
}

extern "C" asm void func_02062f98(void)
{
	ldr r12, [r0]
	ldr r3, [r1]
	sub r3, r12, r3
	str r3, [r2]
	ldr r12, [r0, #4]
	ldr r3, [r1, #4]
	sub r3, r12, r3
	str r3, [r2, #4]
	ldr r3, [r0, #8]
	ldr r0, [r1, #8]
	sub r0, r3, r0
	str r0, [r2, #8]
	bx lr
}

extern "C" asm void func_02062fcc(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, [r0, #4]
	ldr r2, [r1, #4]
	ldr r12, [r0]
	smull r4, lr, r3, r2
	ldr r2, [r1]
	ldr r3, [r0, #8]
	smlal r4, lr, r12, r2
	ldr r0, [r1, #8]
	smlal r4, lr, r3, r0
	adds r0, r4, #0x800
	adc r1, lr, #0
	mov r0, r0, lsr #0xc
	orr r0, r0, r1, lsl #20
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02063008(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, lr}
	ldmia r0, {r5, lr}
	ldr r6, [r1, #8]
	ldr r0, [r0, #8]
	ldmia r1, {r4, r12}
	smull r8, r7, lr, r6
	smull r3, r1, r0, r12
	subs r3, r8, r3
	sbc r1, r7, r1
	adds r3, r3, #0x800
	smull r8, r7, r0, r4
	smull r6, r0, r5, r6
	adc r1, r1, #0
	subs r6, r8, r6
	mov r3, r3, lsr #0xc
	orr r3, r3, r1, lsl #20
	sbc r7, r7, r0
	adds r0, r6, #0x800
	smull r12, r6, r5, r12
	adc r5, r7, #0
	smull r4, r1, lr, r4
	mov r7, r0, lsr #0xc
	subs r4, r12, r4
	sbc r0, r6, r1
	adds r1, r4, #0x800
	str r3, [r2]
	orr r7, r7, r5, lsl #20
	adc r0, r0, #0
	mov r1, r1, lsr #0xc
	str r7, [r2, #4]
	orr r1, r1, r0, lsl #20
	str r1, [r2, #8]
	ldmia sp!, {r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_0206308c(void)
{
	ldr r1, [r0, #4]
	ldr r2, [r0]
	smull r12, r3, r1, r1
	smlal r12, r3, r2, r2
	ldr r0, [r0, #8]
	ldr r2, =0x040002B0
	smlal r12, r3, r0, r0
	mov r1, #1
	mov r0, r3, lsl #2
	strh r1, [r2]
	mov r1, r12, lsl #2
	str r1, [r2, #8]
	orr r0, r0, r12, lsr #30
	str r0, [r2, #0xc]
lbl_020630c4:
	ldrh r0, [r2]
	tst r0, #0x8000
	bne lbl_020630c4
	ldr r0, =0x040002B4
	ldr r0, [r0]
	add r0, r0, #1
	mov r0, r0, asr #1
	bx lr
}

extern "C" asm void func_020630ec(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	ldr r2, [r0, #4]
	ldr r3, [r0]
	smull r6, r5, r2, r2
	smlal r6, r5, r3, r3
	ldr r2, [r0, #8]
	ldr r4, =0x04000280
	smlal r6, r5, r2, r2
	mov r3, #2
	strh r3, [r4]
	mov r3, #0
	str r3, [r4, #0x10]
	mov r3, #0x1000000
	str r3, [r4, #0x14]
	str r6, [r4, #0x18]
	mov r2, r5, lsl #2
	str r5, [r4, #0x1c]
	mov r3, #1
	strh r3, [r4, #0x30]
	mov r3, r6, lsl #2
	str r3, [r4, #0x38]
	orr r2, r2, r6, lsr #30
	str r2, [r4, #0x3c]
lbl_02063148:
	ldrh r2, [r4, #0x30]
	tst r2, #0x8000
	bne lbl_02063148
	ldr r2, =0x040002B4
	ldr r12, [r2]
	sub r3, r2, #0x34
lbl_02063160:
	ldrh r2, [r3]
	tst r2, #0x8000
	bne lbl_02063160
	ldr r9, =0x040002A0
	ldr r5, [r0]
	ldr r8, [r9]
	mov r7, r12, asr #0x1f
	umull r3, r2, r8, r12
	umull r6, lr, r3, r5
	mov r4, r5, asr #0x1f
	mla r2, r8, r7, r2
	ldr r7, [r9, #4]
	mla lr, r3, r4, lr
	mla r2, r7, r12, r2
	mla lr, r2, r5, lr
	adds r4, r6, #0
	adc r4, lr, #0x1000
	mov r4, r4, asr #0xd
	str r4, [r1]
	ldr r12, [r0, #4]
	umull r5, lr, r3, r12
	mov r4, r12, asr #0x1f
	mla lr, r3, r4, lr
	mla lr, r2, r12, lr
	adds r4, r5, #0
	adc r4, lr, #0x1000
	mov r4, r4, asr #0xd
	str r4, [r1, #4]
	ldr r12, [r0, #8]
	umull r4, lr, r3, r12
	mov r0, r12, asr #0x1f
	mla lr, r3, r0, lr
	mla lr, r2, r12, lr
	adds r0, r4, #0
	adc r0, lr, #0x1000
	mov r0, r0, asr #0xd
	str r0, [r1, #8]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02063204(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	ldrsh r5, [r0]
	ldrsh r2, [r0, #2]
	ldrsh r3, [r0, #4]
	ldr r4, =0x04000280
	smulbb r6, r2, r2
	smulbb r8, r5, r5
	mov r2, #2
	strh r2, [r4]
	mov r2, #0
	str r2, [r4, #0x10]
	mov r2, #0x1000000
	smulbb r3, r3, r3
	mov r5, r6, asr #0x1f
	adds r7, r8, r6
	adc r6, r5, r8, asr #31
	adds r5, r7, r3
	str r2, [r4, #0x14]
	adc r3, r6, r3, asr #31
	str r5, [r4, #0x18]
	mov r2, r3, lsl #2
	str r3, [r4, #0x1c]
	mov r3, #1
	strh r3, [r4, #0x30]
	mov r3, r5, lsl #2
	str r3, [r4, #0x38]
	orr r2, r2, r5, lsr #30
	str r2, [r4, #0x3c]
lbl_02063274:
	ldrh r2, [r4, #0x30]
	tst r2, #0x8000
	bne lbl_02063274
	ldr r2, =0x040002B4
	ldr r12, [r2]
	sub r3, r2, #0x34
lbl_0206328c:
	ldrh r2, [r3]
	tst r2, #0x8000
	bne lbl_0206328c
	ldr r9, =0x040002A0
	ldrsh r5, [r0]
	ldr r8, [r9]
	mov r7, r12, asr #0x1f
	umull r3, r2, r8, r12
	umull r6, lr, r3, r5
	mov r4, r5, asr #0x1f
	mla r2, r8, r7, r2
	ldr r7, [r9, #4]
	mla lr, r3, r4, lr
	mla r2, r7, r12, r2
	mla lr, r2, r5, lr
	adds r4, r6, #0
	adc r4, lr, #0x1000
	mov r4, r4, asr #0xd
	strh r4, [r1]
	ldrsh r12, [r0, #2]
	umull r5, lr, r3, r12
	mov r4, r12, asr #0x1f
	mla lr, r3, r4, lr
	mla lr, r2, r12, lr
	adds r4, r5, #0
	adc r4, lr, #0x1000
	mov r4, r4, asr #0xd
	strh r4, [r1, #2]
	ldrsh r12, [r0, #4]
	umull r4, lr, r3, r12
	mov r0, r12, asr #0x1f
	mla lr, r3, r0, lr
	mla lr, r2, r12, lr
	adds r0, r4, #0
	adc r0, lr, #0x1000
	mov r0, r0, asr #0xd
	strh r0, [r1, #4]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02063330(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r1]
	ldr lr, [r2]
	smull r12, r4, r0, r4
	mov r12, r12, lsr #0xc
	orr r12, r12, r4, lsl #20
	add r4, lr, r12
	str r4, [r3]
	ldr r12, [r1, #4]
	ldr r4, [r2, #4]
	smull lr, r12, r0, r12
	mov lr, lr, lsr #0xc
	orr lr, lr, r12, lsl #20
	add r4, r4, lr
	str r4, [r3, #4]
	ldr r1, [r1, #8]
	ldr r12, [r2, #8]
	smull r2, r1, r0, r1
	mov r0, r2, lsr #0xc
	orr r0, r0, r1, lsl #20
	add r0, r12, r0
	str r0, [r3, #8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206338c(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, [r0, #4]
	ldr r2, [r1, #4]
	ldr r4, [r0]
	sub r2, r3, r2
	smull r12, r3, r2, r2
	ldr lr, [r1]
	ldr r2, [r0, #8]
	sub r4, r4, lr
	ldr r0, [r1, #8]
	smlal r12, r3, r4, r4
	sub r0, r2, r0
	smlal r12, r3, r0, r0
	mov r0, r3, lsl #2
	ldr r2, =0x040002B0
	mov r1, #1
	strh r1, [r2]
	mov r1, r12, lsl #2
	str r1, [r2, #8]
	orr r0, r0, r12, lsr #30
	str r0, [r2, #0xc]
lbl_020633e0:
	ldrh r0, [r2]
	tst r0, #0x8000
	bne lbl_020633e0
	ldr r0, =0x040002B4
	ldr r0, [r0]
	add r0, r0, #1
	mov r0, r0, asr #1
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02063408(void)
{
	stmdb sp!, {r3, lr}
	cmp r0, #0
	blt lbl_0206345c
	cmp r0, #0x1000
	ble lbl_02063440
	bl func_02062e14
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrsh r0, [r0, r1]
	rsb r0, r0, #0x4000
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r3, pc}
lbl_02063440:
	movge r0, #0x2000
	ldmgeia sp!, {r3, pc}
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrh r0, [r0, r1]
	ldmia sp!, {r3, pc}
lbl_0206345c:
	mov r1, #0x1000
	rsb r1, r1, #0
	cmp r0, r1
	bge lbl_02063494
	rsb r0, r0, #0
	bl func_02062e14
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrsh r0, [r0, r1]
	sub r0, r0, #0x4000
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r3, pc}
lbl_02063494:
	movle r0, #0xe000
	ldmleia sp!, {r3, pc}
	rsb r0, r0, #0
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrsh r0, [r0, r1]
	rsb r0, r0, #0
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020634c4(void)
{
	stmdb sp!, {r4, lr}
	cmp r0, #0
	ble lbl_02063558
	cmp r1, #0
	ble lbl_02063510
	cmp r1, r0
	ble lbl_020634f0
	mov r2, r0
	mov r4, #0
	mov r0, #1
	b lbl_02063608
lbl_020634f0:
	bge lbl_02063508
	mov r2, r1
	mov r1, r0
	mov r4, #0x4000
	mov r0, #0
	b lbl_02063608
lbl_02063508:
	mov r0, #0x2000
	ldmia sp!, {r4, pc}
lbl_02063510:
	bge lbl_02063550
	rsb r1, r1, #0
	cmp r1, r0
	bge lbl_02063534
	mov r2, r1
	mov r1, r0
	mov r4, #0x4000
	mov r0, #1
	b lbl_02063608
lbl_02063534:
	ble lbl_02063548
	mov r2, r0
	mov r4, #0x8000
	mov r0, #0
	b lbl_02063608
lbl_02063548:
	mov r0, #0x6000
	ldmia sp!, {r4, pc}
lbl_02063550:
	mov r0, #0x4000
	ldmia sp!, {r4, pc}
lbl_02063558:
	bge lbl_020635f8
	cmp r1, #0
	rsb r0, r0, #0
	bge lbl_020635ac
	rsb r1, r1, #0
	cmp r1, r0
	ble lbl_02063588
	mov r4, #0x8000
	mov r2, r0
	rsb r4, r4, #0
	mov r0, #1
	b lbl_02063608
lbl_02063588:
	bge lbl_020635a4
	mov r4, #0x4000
	mov r2, r1
	mov r1, r0
	rsb r4, r4, #0
	mov r0, #0
	b lbl_02063608
lbl_020635a4:
	mov r0, #0xa000
	ldmia sp!, {r4, pc}
lbl_020635ac:
	cmp r1, #0
	ble lbl_020635f0
	cmp r1, r0
	bge lbl_020635d4
	mov r4, #0x4000
	mov r2, r1
	mov r1, r0
	rsb r4, r4, #0
	mov r0, #1
	b lbl_02063608
lbl_020635d4:
	ble lbl_020635e8
	mov r4, #0
	mov r2, r0
	mov r0, r4
	b lbl_02063608
lbl_020635e8:
	mov r0, #0xe000
	ldmia sp!, {r4, pc}
lbl_020635f0:
	mov r0, #0xc000
	ldmia sp!, {r4, pc}
lbl_020635f8:
	cmp r1, #0
	movge r0, #0
	movlt r0, #0x8000
	ldmia sp!, {r4, pc}
lbl_02063608:
	cmp r1, #0
	moveq r0, #0
	ldmeqia sp!, {r4, pc}
	cmp r0, #0
	mov r0, r2
	beq lbl_02063644
	bl func_02062e04
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrsh r0, [r0, r1]
	add r0, r4, r0
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r4, pc}
lbl_02063644:
	bl func_02062e04
	mov r1, r0, asr #5
	ldr r0, =data_020ba38c
	mov r1, r1, lsl #1
	ldrsh r0, [r0, r1]
	sub r0, r4, r0
	mov r0, r0, lsl #0x10
	mov r0, r0, lsr #0x10
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0206366c(void)
{
	bx lr
}

extern "C" asm void func_02063670(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r2, =0x04000304
	ldr r0, =0xFFFFFDF1
	ldrh r1, [r2]
	orr r1, r1, #0x8000
	strh r1, [r2]
	ldrh r1, [r2]
	and r0, r1, r0
	orr r0, r0, #0xe
	orr r0, r0, #0x200
	strh r0, [r2]
	ldrh r0, [r2]
	orr r0, r0, #1
	strh r0, [r2]
	bl func_02063960
	ldr r5, =data_0210ce58
	ldrh r0, [r5, #2]
	cmp r0, #0
	bne lbl_020636e4
	mvn r4, #2
lbl_020636c0:
	bl func_02077a14
	mov r6, r0
	cmp r6, r4
	bne lbl_020636d4
	bl func_0207a058
lbl_020636d4:
	strh r6, [r5, #2]
	ldrh r0, [r5, #2]
	cmp r0, #0
	beq lbl_020636c0
lbl_020636e4:
	ldr r0, =0x04000004
	mov r2, #0
	mov r3, #0x4000000
	strh r2, [r0]
	ldr r0, =data_020c3db8
	str r2, [r3]
	ldr r0, [r0, #4]
	sub r1, r3, #0x4000001
	cmp r0, r1
	beq lbl_0206373c
	add r1, r3, #8
	mov r3, #0x60
	bl func_020670cc
	ldr r1, =0x0400006C
	mov r2, #0
	ldr r0, =data_020c3db8
	strh r2, [r1]
	ldr r0, [r0, #4]
	ldr r1, =0x04001000
	mov r3, #0x70
	bl func_020670cc
	b lbl_02063764
lbl_0206373c:
	mov r0, r2
	add r1, r3, #8
	mov r2, #0x60
	bl func_0206785c
	ldr r3, =0x0400006C
	mov r0, #0
	ldr r1, =0x04001000
	mov r2, #0x70
	strh r0, [r3]
	bl func_0206785c
lbl_02063764:
	ldr r0, =0x04000020
	mov r2, #0x100
	strh r2, [r0]
	strh r2, [r0, #6]
	strh r2, [r0, #0x10]
	strh r2, [r0, #0x16]
	add r1, r0, #0x1000
	ldr r0, =0x04001026
	strh r2, [r1]
	strh r2, [r0]
	strh r2, [r0, #0xa]
	strh r2, [r0, #0x10]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_020637bc(void)
{
	ldr r2, =0x04000004
	cmp r0, #0
	ldrh r0, [r2]
	ldreqh r1, [r2]
	and r0, r0, #8
	biceq r1, r1, #8
	streqh r1, [r2]
	bxeq lr
	ldrh r1, [r2]
	orr r1, r1, #8
	strh r1, [r2]
	bx lr
}

extern "C" asm void func_020637f0(void)
{
	stmdb sp!, {r3, lr}
	mov lr, #0x4000000
	ldr r12, [lr]
	ldr r1, =data_020c3db8
	and r2, r12, #0x30000
	mov r3, #0
	ldr r0, =data_0210ce58
	mov r2, r2, lsr #0x10
	strh r3, [r1]
	strh r2, [r0]
	bic r0, r12, #0x30000
	str r0, [lr]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206382c(void)
{
	ldr r0, =data_0210ce58
	ldr r1, =data_020c3db8
	ldrh r2, [r0]
	mov r0, #1
	strh r0, [r1]
	mov r1, #0x4000000
	cmp r2, #0
	ldreq r0, [r1]
	orreq r0, r0, #0x10000
	streq r0, [r1]
	bxeq lr
	ldr r0, [r1]
	bic r0, r0, #0x30000
	orr r0, r0, r2, lsl #16
	str r0, [r1]
	bx lr
}

extern "C" asm void func_02063874(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c3db8
	mov lr, #0x4000000
	ldrh r12, [r3]
	ldr lr, [lr]
	ldr r3, =data_0210ce58
	cmp r12, #0
	strh r0, [r3]
	ldr r3, =0xFFF0FFF0
	moveq r0, #0
	and r3, lr, r3
	orr r0, r3, r0, lsl #16
	orr r0, r1, r0
	orr r1, r0, r2, lsl #3
	mov r12, #0x4000000
	ldr r0, =data_0210ce58
	str r1, [r12]
	ldrh r0, [r0]
	cmp r0, #0
	ldreq r0, =data_020c3db8
	moveq r1, #0
	streqh r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020638dc(void)
{
	ldr r2, =0x04001000
	ldr r1, [r2]
	bic r1, r1, #7
	orr r0, r1, r0
	str r0, [r2]
	bx lr
}

extern "C" asm void func_020638f8(void)
{
	cmp r1, #0
	moveq r1, #0
	streqh r1, [r0]
	bxeq lr
	orrgt r1, r1, #0x4000
	strgth r1, [r0]
	rsble r1, r1, #0
	orrle r1, r1, #0x8000
	strleh r1, [r0]
	bx lr
}

extern "C" asm void func_02063920(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r2, =data_020c3db8
	mvn r1, #0
	ldr r4, [r2, #4]
	mov r5, r0
	cmp r4, r1
	beq lbl_02063944
	mov r0, r4
	bl func_02067384
lbl_02063944:
	bl func_02079cfc
	ldr r1, =data_020c3db8
	str r5, [r1, #4]
	bl func_02079d10
	mov r0, r4
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02063960(void)
{
	ldr r0, =data_0210ce5c
	mov r2, #0
	strh r2, [r0]
	strh r2, [r0, #2]
	strh r2, [r0, #4]
	strh r2, [r0, #6]
	strh r2, [r0, #8]
	strh r2, [r0, #0xa]
	strh r2, [r0, #0xc]
	strh r2, [r0, #0xe]
	strh r2, [r0, #0x10]
	strh r2, [r0, #0x12]
	strh r2, [r0, #0x14]
	strh r2, [r0, #0x16]
	ldr r1, =0x04000240
	strh r2, [r0, #0x18]
	str r2, [r1]
	strb r2, [r1, #4]
	strb r2, [r1, #5]
	strb r2, [r1, #6]
	strh r2, [r1, #8]
	bx lr
}

extern "C" asm void func_020639c0(void)
{
	tst r0, #1
	ldrne r1, =0x04000240
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #2
	ldrne r1, =0x04000241
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #4
	ldrne r1, =0x04000242
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #8
	ldrne r1, =0x04000243
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #0x10
	ldrne r1, =0x04000244
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #0x20
	ldrne r1, =0x04000245
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #0x40
	ldrne r1, =0x04000246
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #0x80
	ldrne r1, =0x04000248
	movne r2, #0x80
	strneb r2, [r1]
	tst r0, #0x100
	ldrne r0, =0x04000249
	movne r1, #0x80
	strneb r1, [r0]
	bx lr
}

extern "C" asm void func_02063a78(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #2]
	cmp r0, #0x40
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #2]
	bgt lbl_02063b50
	cmp r0, #0x40
	bge lbl_02063ccc
	cmp r0, #0x20
	bgt lbl_02063b44
	cmp r0, #0
	addge pc, pc, r0, lsl #2
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063bec
	b lbl_02063bb8
	b lbl_02063be0
	b lbl_02063b90
	b lbl_02063c28
	b lbl_02063bac
	b lbl_02063bd4
	b lbl_02063b74
	b lbl_02063c40
	b lbl_02063c58
	b lbl_02063bfc
	b lbl_02063b84
	b lbl_02063c1c
	b lbl_02063ba0
	b lbl_02063bc8
	b lbl_02063c88
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cd8
	b lbl_02063cbc
lbl_02063b44:
	cmp r0, #0x30
	beq lbl_02063c7c
	b lbl_02063cd8
lbl_02063b50:
	cmp r0, #0x60
	bgt lbl_02063b68
	bge lbl_02063cb0
	cmp r0, #0x50
	beq lbl_02063c98
	b lbl_02063cd8
lbl_02063b68:
	cmp r0, #0x70
	beq lbl_02063c70
	b lbl_02063cd8
lbl_02063b74:
	ldr r0, =0x04000243
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063b84:
	ldr r0, =0x04000243
	mov r1, #0x89
	strb r1, [r0]
lbl_02063b90:
	ldr r0, =0x04000242
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063ba0:
	ldr r0, =0x04000243
	mov r1, #0x91
	strb r1, [r0]
lbl_02063bac:
	ldr r0, =0x04000242
	mov r1, #0x89
	strb r1, [r0]
lbl_02063bb8:
	ldr r0, =0x04000241
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063bc8:
	ldr r0, =0x04000243
	mov r1, #0x99
	strb r1, [r0]
lbl_02063bd4:
	ldr r0, =0x04000242
	mov r1, #0x91
	strb r1, [r0]
lbl_02063be0:
	ldr r0, =0x04000241
	mov r1, #0x89
	strb r1, [r0]
lbl_02063bec:
	ldr r0, =0x04000240
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063bfc:
	ldr r1, =0x04000240
	mov r0, #0x81
	strb r0, [r1]
	mov r0, #0x89
	strb r0, [r1, #1]
	mov r0, #0x91
	strb r0, [r1, #3]
	b lbl_02063cd8
lbl_02063c1c:
	ldr r0, =0x04000243
	mov r1, #0x91
	strb r1, [r0]
lbl_02063c28:
	ldr r1, =0x04000240
	mov r0, #0x81
	strb r0, [r1]
	mov r0, #0x89
	strb r0, [r1, #2]
	b lbl_02063cd8
lbl_02063c40:
	ldr r1, =0x04000240
	mov r0, #0x81
	strb r0, [r1]
	mov r0, #0x89
	strb r0, [r1, #3]
	b lbl_02063cd8
lbl_02063c58:
	ldr r1, =0x04000241
	mov r0, #0x81
	strb r0, [r1]
	mov r0, #0x89
	strb r0, [r1, #2]
	b lbl_02063cd8
lbl_02063c70:
	ldr r0, =0x04000246
	mov r1, #0x99
	strb r1, [r0]
lbl_02063c7c:
	ldr r0, =0x04000245
	mov r1, #0x91
	strb r1, [r0]
lbl_02063c88:
	ldr r0, =0x04000244
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063c98:
	ldr r1, =0x04000246
	mov r0, #0x91
	strb r0, [r1]
	mov r0, #0x81
	strb r0, [r1, #-2]
	b lbl_02063cd8
lbl_02063cb0:
	ldr r0, =0x04000246
	mov r1, #0x89
	strb r1, [r0]
lbl_02063cbc:
	ldr r0, =0x04000245
	mov r1, #0x81
	strb r1, [r0]
	b lbl_02063cd8
lbl_02063ccc:
	ldr r0, =0x04000246
	mov r1, #0x81
	strb r1, [r0]
lbl_02063cd8:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02063d08(void)
{
	stmdb sp!, {r4, lr}
	ldr r2, =data_0210ce5c
	orr r4, r0, r1
	ldrh r12, [r2]
	ldrh r3, [r2, #2]
	mvn lr, r4
	cmp r0, #0x40
	orr r3, r12, r3
	and r3, lr, r3
	strh r3, [r2]
	strh r4, [r2, #2]
	bgt lbl_02063d64
	cmp r0, #0x40
	bge lbl_02063de0
	cmp r0, #0x20
	bgt lbl_02063d58
	bge lbl_02063dd0
	cmp r0, #0x10
	beq lbl_02063d9c
	b lbl_02063dec
lbl_02063d58:
	cmp r0, #0x30
	beq lbl_02063d90
	b lbl_02063dec
lbl_02063d64:
	cmp r0, #0x60
	bgt lbl_02063d7c
	bge lbl_02063dc4
	cmp r0, #0x50
	beq lbl_02063dac
	b lbl_02063dec
lbl_02063d7c:
	cmp r0, #0x70
	bne lbl_02063dec
	ldr r0, =0x04000246
	mov r2, #0x99
	strb r2, [r0]
lbl_02063d90:
	ldr r0, =0x04000245
	mov r2, #0x91
	strb r2, [r0]
lbl_02063d9c:
	ldr r0, =0x04000244
	mov r2, #0x81
	strb r2, [r0]
	b lbl_02063dec
lbl_02063dac:
	ldr r2, =0x04000246
	mov r0, #0x91
	strb r0, [r2]
	mov r0, #0x81
	strb r0, [r2, #-2]
	b lbl_02063dec
lbl_02063dc4:
	ldr r0, =0x04000246
	mov r2, #0x89
	strb r2, [r0]
lbl_02063dd0:
	ldr r0, =0x04000245
	mov r2, #0x81
	strb r2, [r0]
	b lbl_02063dec
lbl_02063de0:
	ldr r0, =0x04000246
	mov r2, #0x81
	strb r2, [r0]
lbl_02063dec:
	cmp r1, #0xe
	addls pc, pc, r1, lsl #2
	b lbl_02063f20
	b lbl_02063f20
	b lbl_02063ea0
	b lbl_02063e78
	b lbl_02063e94
	b lbl_02063e50
	b lbl_02063edc
	b lbl_02063e6c
	b lbl_02063e88
	b lbl_02063e34
	b lbl_02063ef4
	b lbl_02063f0c
	b lbl_02063eb0
	b lbl_02063e44
	b lbl_02063ed0
	b lbl_02063e60
lbl_02063e34:
	ldr r0, =0x04000243
	mov r1, #0x89
	strb r1, [r0]
	b lbl_02063f20
lbl_02063e44:
	ldr r0, =0x04000243
	mov r1, #0x91
	strb r1, [r0]
lbl_02063e50:
	ldr r0, =0x04000242
	mov r1, #0x89
	strb r1, [r0]
	b lbl_02063f20
lbl_02063e60:
	ldr r0, =0x04000243
	mov r1, #0x99
	strb r1, [r0]
lbl_02063e6c:
	ldr r0, =0x04000242
	mov r1, #0x91
	strb r1, [r0]
lbl_02063e78:
	ldr r0, =0x04000241
	mov r1, #0x89
	strb r1, [r0]
	b lbl_02063f20
lbl_02063e88:
	ldr r0, =0x04000242
	mov r1, #0x99
	strb r1, [r0]
lbl_02063e94:
	ldr r0, =0x04000241
	mov r1, #0x91
	strb r1, [r0]
lbl_02063ea0:
	ldr r0, =0x04000240
	mov r1, #0x89
	strb r1, [r0]
	b lbl_02063f20
lbl_02063eb0:
	ldr r1, =0x04000240
	mov r0, #0x89
	strb r0, [r1]
	mov r0, #0x91
	strb r0, [r1, #1]
	mov r0, #0x99
	strb r0, [r1, #3]
	b lbl_02063f20
lbl_02063ed0:
	ldr r0, =0x04000243
	mov r1, #0x99
	strb r1, [r0]
lbl_02063edc:
	ldr r1, =0x04000240
	mov r0, #0x89
	strb r0, [r1]
	mov r0, #0x91
	strb r0, [r1, #2]
	b lbl_02063f20
lbl_02063ef4:
	ldr r1, =0x04000240
	mov r0, #0x89
	strb r0, [r1]
	mov r0, #0x91
	strb r0, [r1, #3]
	b lbl_02063f20
lbl_02063f0c:
	ldr r1, =0x04000241
	mov r0, #0x89
	strb r0, [r1]
	mov r0, #0x91
	strb r0, [r1, #2]
lbl_02063f20:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02063f50(void)
{
	ldr r12, =func_02063d08
	bx r12
}

extern "C" asm void func_02063f5c(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #4]
	cmp r0, #0x30
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #4]
	bgt lbl_02063fc4
	cmp r0, #0x30
	bge lbl_02064038
	cmp r0, #0x10
	bgt lbl_02063fb8
	bge lbl_02064044
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	b lbl_02064084
	b lbl_02064084
	b lbl_0206400c
	b lbl_0206401c
	b lbl_02064000
lbl_02063fb8:
	cmp r0, #0x20
	beq lbl_02064078
	b lbl_02064084
lbl_02063fc4:
	cmp r0, #0x50
	bgt lbl_02063fe4
	bge lbl_02064054
	cmp r0, #0x40
	ldreq r0, =0x04000246
	moveq r1, #0x82
	streqb r1, [r0]
	b lbl_02064084
lbl_02063fe4:
	cmp r0, #0x60
	bgt lbl_02063ff4
	beq lbl_0206406c
	b lbl_02064084
lbl_02063ff4:
	cmp r0, #0x70
	beq lbl_0206402c
	b lbl_02064084
lbl_02064000:
	ldr r0, =0x04000241
	mov r1, #0x8a
	strb r1, [r0]
lbl_0206400c:
	ldr r0, =0x04000240
	mov r1, #0x82
	strb r1, [r0]
	b lbl_02064084
lbl_0206401c:
	ldr r0, =0x04000241
	mov r1, #0x82
	strb r1, [r0]
	b lbl_02064084
lbl_0206402c:
	ldr r0, =0x04000246
	mov r1, #0x9a
	strb r1, [r0]
lbl_02064038:
	ldr r0, =0x04000245
	mov r1, #0x92
	strb r1, [r0]
lbl_02064044:
	ldr r0, =0x04000244
	mov r1, #0x82
	strb r1, [r0]
	b lbl_02064084
lbl_02064054:
	ldr r1, =0x04000246
	mov r0, #0x92
	strb r0, [r1]
	mov r0, #0x82
	strb r0, [r1, #-2]
	b lbl_02064084
lbl_0206406c:
	ldr r0, =0x04000246
	mov r1, #0x8a
	strb r1, [r0]
lbl_02064078:
	ldr r0, =0x04000245
	mov r1, #0x82
	strb r1, [r0]
lbl_02064084:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020640ac(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0xe]
	cmp r0, #0x20
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0xe]
	bgt lbl_020640fc
	cmp r0, #0x20
	bge lbl_02064160
	cmp r0, #0
	bgt lbl_020640f0
	beq lbl_02064180
	b lbl_02064190
lbl_020640f0:
	cmp r0, #0x10
	beq lbl_02064118
	b lbl_02064190
lbl_020640fc:
	cmp r0, #0x40
	bgt lbl_0206410c
	beq lbl_02064134
	b lbl_02064190
lbl_0206410c:
	cmp r0, #0x60
	beq lbl_02064154
	b lbl_02064190
lbl_02064118:
	mov r2, #0x4000000
	ldr r1, [r2]
	mov r0, #0x84
	orr r1, r1, #0x40000000
	str r1, [r2]
	strb r0, [r2, #0x244]
	b lbl_02064190
lbl_02064134:
	mov r2, #0x4000000
	ldr r1, [r2]
	ldr r0, =0x04000246
	orr r1, r1, #0x40000000
	str r1, [r2]
	mov r1, #0x8c
	strb r1, [r0]
	b lbl_02064190
lbl_02064154:
	ldr r0, =0x04000246
	mov r1, #0x8c
	strb r1, [r0]
lbl_02064160:
	ldr r0, =0x04000245
	mov r1, #0x84
	strb r1, [r0]
	mov r1, #0x4000000
	ldr r0, [r1]
	orr r0, r0, #0x40000000
	str r0, [r1]
	b lbl_02064190
lbl_02064180:
	mov r1, #0x4000000
	ldr r0, [r1]
	bic r0, r0, #0x40000000
	str r0, [r1]
lbl_02064190:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020641ac(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0x10]
	cmp r0, #0
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0x10]
	beq lbl_0206422c
	cmp r0, #0x20
	beq lbl_020641ec
	cmp r0, #0x40
	beq lbl_0206420c
	b lbl_0206423c
lbl_020641ec:
	mov r2, #0x4000000
	ldr r1, [r2]
	ldr r0, =0x04000245
	orr r1, r1, #0x80000000
	str r1, [r2]
	mov r1, #0x85
	strb r1, [r0]
	b lbl_0206423c
lbl_0206420c:
	mov r2, #0x4000000
	ldr r1, [r2]
	ldr r0, =0x04000246
	orr r1, r1, #0x80000000
	str r1, [r2]
	mov r1, #0x85
	strb r1, [r0]
	b lbl_0206423c
lbl_0206422c:
	mov r1, #0x4000000
	ldr r0, [r1]
	bic r0, r0, #0x80000000
	str r0, [r1]
lbl_0206423c:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064258(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #8]
	cmp r0, #0
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #8]
	ldr r2, =0x04000060
	bne lbl_0206429c
	ldrh r1, [r2]
	ldr r0, =0x0000CFFE
	and r0, r1, r0
	strh r0, [r2]
	b lbl_02064404
lbl_0206429c:
	ldrh r1, [r2]
	cmp r0, #0xf
	bic r1, r1, #0x3000
	orr r1, r1, #1
	strh r1, [r2]
	addls pc, pc, r0, lsl #2
	b lbl_02064404
	b lbl_02064404
	b lbl_020643f8
	b lbl_020643c4
	b lbl_020643ec
	b lbl_0206439c
	b lbl_020642f8
	b lbl_020643b8
	b lbl_020643e0
	b lbl_02064380
	b lbl_02064310
	b lbl_02064328
	b lbl_02064340
	b lbl_02064390
	b lbl_02064360
	b lbl_020643ac
	b lbl_020643d4
lbl_020642f8:
	mov r1, #0x83
	ldr r0, =0x04000242
	strb r1, [r2, #0x1e0]
	mov r1, #0x8b
	strb r1, [r0]
	b lbl_02064404
lbl_02064310:
	mov r1, #0x83
	ldr r0, =0x04000243
	strb r1, [r2, #0x1e0]
	mov r1, #0x8b
	strb r1, [r0]
	b lbl_02064404
lbl_02064328:
	ldr r1, =0x04000241
	mov r0, #0x83
	strb r0, [r1]
	mov r0, #0x8b
	strb r0, [r1, #2]
	b lbl_02064404
lbl_02064340:
	mov r0, #0x83
	ldr r1, =0x04000241
	strb r0, [r2, #0x1e0]
	mov r0, #0x8b
	strb r0, [r1]
	mov r0, #0x93
	strb r0, [r1, #2]
	b lbl_02064404
lbl_02064360:
	mov r0, #0x83
	ldr r1, =0x04000242
	strb r0, [r2, #0x1e0]
	mov r0, #0x8b
	strb r0, [r1]
	mov r0, #0x93
	strb r0, [r1, #1]
	b lbl_02064404
lbl_02064380:
	ldr r0, =0x04000243
	mov r1, #0x83
	strb r1, [r0]
	b lbl_02064404
lbl_02064390:
	ldr r0, =0x04000243
	mov r1, #0x8b
	strb r1, [r0]
lbl_0206439c:
	ldr r0, =0x04000242
	mov r1, #0x83
	strb r1, [r0]
	b lbl_02064404
lbl_020643ac:
	ldr r0, =0x04000243
	mov r1, #0x93
	strb r1, [r0]
lbl_020643b8:
	ldr r0, =0x04000242
	mov r1, #0x8b
	strb r1, [r0]
lbl_020643c4:
	ldr r0, =0x04000241
	mov r1, #0x83
	strb r1, [r0]
	b lbl_02064404
lbl_020643d4:
	ldr r0, =0x04000243
	mov r1, #0x9b
	strb r1, [r0]
lbl_020643e0:
	ldr r0, =0x04000242
	mov r1, #0x93
	strb r1, [r0]
lbl_020643ec:
	ldr r0, =0x04000241
	mov r1, #0x8b
	strb r1, [r0]
lbl_020643f8:
	ldr r0, =0x04000240
	mov r1, #0x83
	strb r1, [r0]
lbl_02064404:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064430(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0xa]
	cmp r0, #0x30
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0xa]
	bgt lbl_02064484
	cmp r0, #0x30
	bge lbl_020644e0
	cmp r0, #0x10
	bgt lbl_02064478
	bge lbl_020644ec
	cmp r0, #0
	b lbl_020644f8
lbl_02064478:
	cmp r0, #0x20
	beq lbl_020644b4
	b lbl_020644f8
lbl_02064484:
	cmp r0, #0x60
	bgt lbl_0206449c
	bge lbl_020644a8
	cmp r0, #0x40
	beq lbl_020644c4
	b lbl_020644f8
lbl_0206449c:
	cmp r0, #0x70
	beq lbl_020644d4
	b lbl_020644f8
lbl_020644a8:
	ldr r0, =0x04000246
	mov r1, #0x8b
	strb r1, [r0]
lbl_020644b4:
	ldr r0, =0x04000245
	mov r1, #0x83
	strb r1, [r0]
	b lbl_020644f8
lbl_020644c4:
	ldr r0, =0x04000246
	mov r1, #0x83
	strb r1, [r0]
	b lbl_020644f8
lbl_020644d4:
	ldr r0, =0x04000246
	mov r1, #0x9b
	strb r1, [r0]
lbl_020644e0:
	ldr r0, =0x04000245
	mov r1, #0x93
	strb r1, [r0]
lbl_020644ec:
	ldr r0, =0x04000244
	mov r1, #0x83
	strb r1, [r0]
lbl_020644f8:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064518(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0xc]
	cmp r0, #0xc
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0xc]
	addls pc, pc, r0, lsl #2
	b lbl_02064624
	b lbl_020645d4
	b lbl_020645e8
	b lbl_02064588
	b lbl_0206457c
	b lbl_02064608
	b lbl_02064624
	b lbl_02064624
	b lbl_02064624
	b lbl_020645b4
	b lbl_02064624
	b lbl_02064624
	b lbl_02064624
	b lbl_020645a8
lbl_0206457c:
	ldr r0, =0x04000240
	mov r1, #0x93
	strb r1, [r0]
lbl_02064588:
	ldr r0, =0x04000241
	mov r2, #0x9b
	ldr r1, =0x04000060
	strb r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, #0x4000
	strh r0, [r1]
	b lbl_02064624
lbl_020645a8:
	ldr r0, =0x04000242
	mov r1, #0x93
	strb r1, [r0]
lbl_020645b4:
	ldr r0, =0x04000243
	mov r2, #0x9b
	ldr r1, =0x04000060
	strb r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, #0x4000
	strh r0, [r1]
	b lbl_02064624
lbl_020645d4:
	ldr r1, =0x04000060
	ldrh r0, [r1]
	bic r0, r0, #0x4000
	strh r0, [r1]
	b lbl_02064624
lbl_020645e8:
	ldr r0, =0x04000240
	mov r1, #0x9b
	strb r1, [r0]
	sub r1, r0, #0x1e0
	ldrh r0, [r1]
	orr r0, r0, #0x4000
	strh r0, [r1]
	b lbl_02064624
lbl_02064608:
	ldr r0, =0x04000242
	mov r2, #0x9b
	ldr r1, =0x04000060
	strb r2, [r0]
	ldrh r0, [r1]
	orr r0, r0, #0x4000
	strh r0, [r1]
lbl_02064624:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0206464c(void)
{
	ldr r1, =data_0210ce5c
	ldr r12, =func_020639c0
	ldrh r2, [r1]
	orr r2, r2, r0
	strh r2, [r1]
	bx r12
}

extern "C" asm void func_0206466c(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0x12]
	cmp r0, #0x80
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0x12]
	bgt lbl_020646c0
	cmp r0, #0x80
	bge lbl_020646e8
	cmp r0, #4
	bgt lbl_020646f4
	cmp r0, #0
	blt lbl_020646f4
	beq lbl_020646f4
	cmp r0, #4
	beq lbl_020646cc
	b lbl_020646f4
lbl_020646c0:
	cmp r0, #0x180
	beq lbl_020646dc
	b lbl_020646f4
lbl_020646cc:
	ldr r0, =0x04000242
	mov r1, #0x84
	strb r1, [r0]
	b lbl_020646f4
lbl_020646dc:
	ldr r0, =0x04000249
	mov r1, #0x81
	strb r1, [r0]
lbl_020646e8:
	ldr r0, =0x04000248
	mov r1, #0x81
	strb r1, [r0]
lbl_020646f4:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064714(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0x14]
	cmp r0, #0
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0x14]
	beq lbl_02064768
	cmp r0, #8
	beq lbl_0206475c
	cmp r0, #0x100
	ldreq r0, =0x04000249
	moveq r1, #0x82
	streqb r1, [r0]
	b lbl_02064768
lbl_0206475c:
	ldr r0, =0x04000243
	mov r1, #0x84
	strb r1, [r0]
lbl_02064768:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064784(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0x16]
	cmp r0, #0
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0x16]
	beq lbl_020647d8
	cmp r0, #0x80
	bne lbl_020647e8
	ldr r3, =0x04001000
	ldr r0, =0x04000248
	ldr r2, [r3]
	mov r1, #0x82
	orr r2, r2, #0x40000000
	str r2, [r3]
	strb r1, [r0]
	b lbl_020647e8
lbl_020647d8:
	ldr r1, =0x04001000
	ldr r0, [r1]
	bic r0, r0, #0x40000000
	str r0, [r1]
lbl_020647e8:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064804(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_0210ce5c
	mvn r12, r0
	ldrh r3, [r1]
	ldrh r2, [r1, #0x18]
	cmp r0, #0
	orr r2, r3, r2
	and r2, r12, r2
	strh r2, [r1]
	strh r0, [r1, #0x18]
	beq lbl_02064858
	cmp r0, #0x100
	bne lbl_02064868
	ldr r3, =0x04001000
	ldr r0, =0x04000249
	ldr r2, [r3]
	mov r1, #0x83
	orr r2, r2, #0x80000000
	str r2, [r3]
	strb r1, [r0]
	b lbl_02064868
lbl_02064858:
	ldr r1, =0x04001000
	ldr r0, [r1]
	bic r0, r0, #0x80000000
	str r0, [r1]
lbl_02064868:
	ldr r0, =data_0210ce5c
	ldrh r0, [r0]
	bl func_020639c0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02064884(void)
{
	stmdb sp!, {r4, lr}
	ldrh r4, [r0]
	mov r2, #0
	ldr r1, =data_0210ce5c
	strh r2, [r0]
	ldrh r2, [r1]
	mov r0, r4
	orr r2, r2, r4
	strh r2, [r1]
	bl func_020639c0
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020648b8(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce5e
	bx r12
}

extern "C" asm void func_020648cc(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce60
	bx r12
}

extern "C" asm void func_020648e0(void)
{
	mov r2, #0x4000000
	ldr r1, [r2]
	ldr r12, =func_02064884
	bic r1, r1, #0x40000000
	ldr r0, =data_0210ce6a
	str r1, [r2]
	bx r12
}

extern "C" asm void func_02064904(void)
{
	mov r2, #0x4000000
	ldr r1, [r2]
	ldr r12, =func_02064884
	bic r1, r1, #0x80000000
	ldr r0, =data_0210ce6c
	str r1, [r2]
	bx r12
}

extern "C" asm void func_02064928(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce64
	bx r12
}

extern "C" asm void func_0206493c(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce66
	bx r12
}

extern "C" asm void func_02064950(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce68
	bx r12
}

extern "C" asm void func_02064964(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce6e
	bx r12
}

extern "C" asm void func_02064978(void)
{
	ldr r12, =func_02064884
	ldr r0, =data_0210ce70
	bx r12
}

extern "C" asm void func_0206498c(void)
{
	ldr r2, =0x04001000
	ldr r12, =func_02064884
	ldr r1, [r2]
	ldr r0, =data_0210ce72
	bic r1, r1, #0x40000000
	str r1, [r2]
	bx r12
}

extern "C" asm void func_020649b4(void)
{
	ldr r2, =0x04001000
	ldr r12, =func_02064884
	ldr r1, [r2]
	ldr r0, =data_0210ce74
	bic r1, r1, #0x80000000
	str r1, [r2]
	bx r12
}

extern "C" asm void func_020649dc(void)
{
	stmdb sp!, {r4, lr}
	ldrh r4, [r0]
	mov r1, #0
	strh r1, [r0]
	tst r4, #1
	ldrne r0, =0x04000240
	strneb r1, [r0]
	tst r4, #2
	ldrne r0, =0x04000241
	movne r1, #0
	strneb r1, [r0]
	tst r4, #4
	ldrne r0, =0x04000242
	movne r1, #0
	strneb r1, [r0]
	tst r4, #8
	ldrne r0, =0x04000243
	movne r1, #0
	strneb r1, [r0]
	tst r4, #0x10
	ldrne r0, =0x04000244
	movne r1, #0
	strneb r1, [r0]
	tst r4, #0x20
	ldrne r0, =0x04000245
	movne r1, #0
	strneb r1, [r0]
	tst r4, #0x40
	ldrne r0, =0x04000246
	movne r1, #0
	strneb r1, [r0]
	tst r4, #0x80
	ldrne r0, =0x04000248
	movne r1, #0
	strneb r1, [r0]
	tst r4, #0x100
	ldrne r0, =0x04000249
	movne r1, #0
	strneb r1, [r0]
	ldr r1, =data_0210ce5a
	mov r0, r4, lsl #0x10
	ldrh r1, [r1]
	mov r0, r0, lsr #0x10
	bl func_02079f00
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02064abc(void)
{
	ldr r12, =func_020649dc
	ldr r0, =data_0210ce5c
	bx r12
}

extern "C" asm void func_02064ad0(void)
{
	ldr r1, =0x04000008
	mov r0, #0x4000000
	ldrh r1, [r1]
	ldr r0, [r0]
	and r0, r0, #0x38000000
	mov r0, r0, lsr #0x1b
	and r1, r1, #0x1f00
	mov r0, r0, lsl #0x10
	mov r1, r1, asr #8
	add r0, r0, #0x6000000
	add r0, r0, r1, lsl #11
	bx lr
}

extern "C" asm void func_02064b04(void)
{
	ldr r0, =0x04001008
	ldrh r0, [r0]
	and r0, r0, #0x1f00
	mov r0, r0, asr #8
	mov r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
}

extern "C" asm void func_02064b24(void)
{
	ldr r1, =0x0400000A
	mov r0, #0x4000000
	ldrh r1, [r1]
	ldr r0, [r0]
	and r0, r0, #0x38000000
	mov r0, r0, lsr #0x1b
	and r1, r1, #0x1f00
	mov r0, r0, lsl #0x10
	mov r1, r1, asr #8
	add r0, r0, #0x6000000
	add r0, r0, r1, lsl #11
	bx lr
}

extern "C" asm void func_02064b58(void)
{
	ldr r0, =0x0400100A
	ldrh r0, [r0]
	and r0, r0, #0x1f00
	mov r0, r0, asr #8
	mov r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
}

extern "C" asm void func_02064b78(void)
{
	mov r0, #0x4000000
	ldr r1, [r0]
	ldrh r3, [r0, #0xc]
	ldr r0, [r0]
	and r12, r1, #7
	and r0, r0, #0x38000000
	mov r1, r0, lsr #0x1b
	and r0, r3, #0x1f00
	mov r2, r1, lsl #0x10
	cmp r12, #6
	mov r1, r0, lsr #8
	addls pc, pc, r12, lsl #2
	b lbl_02064bf4
	b lbl_02064bc8
	b lbl_02064bc8
	b lbl_02064bc8
	b lbl_02064bc8
	b lbl_02064bc8
	b lbl_02064bd4
	b lbl_02064bec
lbl_02064bc8:
	add r0, r2, #0x6000000
	add r0, r0, r1, lsl #11
	bx lr
lbl_02064bd4:
	tst r3, #0x80
	movne r0, r1, lsl #0xe
	addne r0, r0, #0x6000000
	addeq r0, r2, #0x6000000
	addeq r0, r0, r1, lsl #11
	bx lr
lbl_02064bec:
	mov r0, #0x6000000
	bx lr
lbl_02064bf4:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064bfc(void)
{
	ldr r1, =0x04001000
	ldr r0, [r1]
	ldrh r1, [r1, #0xc]
	and r2, r0, #7
	cmp r2, #6
	and r0, r1, #0x1f00
	mov r0, r0, lsr #8
	addls pc, pc, r2, lsl #2
	b lbl_02064c64
	b lbl_02064c3c
	b lbl_02064c3c
	b lbl_02064c3c
	b lbl_02064c3c
	b lbl_02064c3c
	b lbl_02064c48
	b lbl_02064c5c
lbl_02064c3c:
	mov r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
lbl_02064c48:
	tst r1, #0x80
	movne r0, r0, lsl #0xe
	moveq r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
lbl_02064c5c:
	mov r0, #0
	bx lr
lbl_02064c64:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064c70(void)
{
	mov r0, #0x4000000
	ldr r1, [r0]
	ldrh r3, [r0, #0xe]
	ldr r0, [r0]
	and r12, r1, #7
	and r0, r0, #0x38000000
	mov r1, r0, lsr #0x1b
	and r0, r3, #0x1f00
	mov r2, r1, lsl #0x10
	cmp r12, #6
	mov r1, r0, lsr #8
	addls pc, pc, r12, lsl #2
	b lbl_02064cec
	b lbl_02064cc0
	b lbl_02064cc0
	b lbl_02064cc0
	b lbl_02064ccc
	b lbl_02064ccc
	b lbl_02064ccc
	b lbl_02064ce4
lbl_02064cc0:
	add r0, r2, #0x6000000
	add r0, r0, r1, lsl #11
	bx lr
lbl_02064ccc:
	tst r3, #0x80
	movne r0, r1, lsl #0xe
	addne r0, r0, #0x6000000
	addeq r0, r2, #0x6000000
	addeq r0, r0, r1, lsl #11
	bx lr
lbl_02064ce4:
	mov r0, #0
	bx lr
lbl_02064cec:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064cf4(void)
{
	ldr r1, =0x04001000
	ldr r0, [r1]
	ldrh r1, [r1, #0xe]
	and r2, r0, #7
	cmp r2, #6
	and r0, r1, #0x1f00
	mov r0, r0, lsr #8
	addls pc, pc, r2, lsl #2
	b lbl_02064d5c
	b lbl_02064d34
	b lbl_02064d34
	b lbl_02064d34
	b lbl_02064d40
	b lbl_02064d40
	b lbl_02064d40
	b lbl_02064d54
lbl_02064d34:
	mov r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
lbl_02064d40:
	tst r1, #0x80
	movne r0, r0, lsl #0xe
	moveq r0, r0, lsl #0xb
	add r0, r0, #0x6200000
	bx lr
lbl_02064d54:
	mov r0, #0
	bx lr
lbl_02064d5c:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064d68(void)
{
	ldr r1, =0x04000008
	mov r0, #0x4000000
	ldrh r1, [r1]
	ldr r0, [r0]
	and r0, r0, #0x7000000
	mov r0, r0, lsr #0x18
	and r1, r1, #0x3c
	mov r0, r0, lsl #0x10
	mov r1, r1, asr #2
	add r0, r0, #0x6000000
	add r0, r0, r1, lsl #14
	bx lr
}

extern "C" asm void func_02064d9c(void)
{
	ldr r0, =0x04001008
	ldrh r0, [r0]
	and r0, r0, #0x3c
	mov r0, r0, asr #2
	mov r0, r0, lsl #0xe
	add r0, r0, #0x6200000
	bx lr
}

extern "C" asm void func_02064dbc(void)
{
	ldr r1, =0x0400000A
	mov r0, #0x4000000
	ldrh r1, [r1]
	ldr r0, [r0]
	and r0, r0, #0x7000000
	mov r0, r0, lsr #0x18
	and r1, r1, #0x3c
	mov r0, r0, lsl #0x10
	mov r1, r1, asr #2
	add r0, r0, #0x6000000
	add r0, r0, r1, lsl #14
	bx lr
}

extern "C" asm void func_02064df0(void)
{
	ldr r0, =0x0400100A
	ldrh r0, [r0]
	and r0, r0, #0x3c
	mov r0, r0, asr #2
	mov r0, r0, lsl #0xe
	add r0, r0, #0x6200000
	bx lr
}

extern "C" asm void func_02064e10(void)
{
	mov r1, #0x4000000
	ldr r0, [r1]
	ldrh r2, [r1, #0xc]
	and r0, r0, #7
	cmp r0, #5
	blt lbl_02064e30
	tst r2, #0x80
	bne lbl_02064e58
lbl_02064e30:
	mov r0, #0x4000000
	ldr r1, [r0]
	and r0, r2, #0x3c
	and r1, r1, #0x7000000
	mov r1, r1, lsr #0x18
	mov r1, r1, lsl #0x10
	add r1, r1, #0x6000000
	mov r0, r0, lsr #2
	add r0, r1, r0, lsl #14
	bx lr
lbl_02064e58:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064e60(void)
{
	ldr r1, =0x04001000
	ldr r0, [r1]
	ldrh r1, [r1, #0xc]
	and r0, r0, #7
	cmp r0, #5
	blt lbl_02064e80
	tst r1, #0x80
	bne lbl_02064e94
lbl_02064e80:
	and r0, r1, #0x3c
	mov r0, r0, lsr #2
	mov r0, r0, lsl #0xe
	add r0, r0, #0x6200000
	bx lr
lbl_02064e94:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064ea0(void)
{
	mov r1, #0x4000000
	ldr r0, [r1]
	ldrh r2, [r1, #0xe]
	and r0, r0, #7
	cmp r0, #3
	blt lbl_02064ec8
	cmp r0, #6
	bge lbl_02064ef0
	tst r2, #0x80
	bne lbl_02064ef0
lbl_02064ec8:
	mov r0, #0x4000000
	ldr r1, [r0]
	and r0, r2, #0x3c
	and r1, r1, #0x7000000
	mov r1, r1, lsr #0x18
	mov r1, r1, lsl #0x10
	add r1, r1, #0x6000000
	mov r0, r0, lsr #2
	add r0, r1, r0, lsl #14
	bx lr
lbl_02064ef0:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064ef8(void)
{
	ldr r1, =0x04001000
	ldr r0, [r1]
	ldrh r1, [r1, #0xe]
	and r0, r0, #7
	cmp r0, #3
	blt lbl_02064f20
	cmp r0, #6
	bge lbl_02064f34
	tst r1, #0x80
	bne lbl_02064f34
lbl_02064f20:
	and r0, r1, #0x3c
	mov r0, r0, lsr #2
	mov r0, r0, lsl #0xe
	add r0, r0, #0x6200000
	bx lr
lbl_02064f34:
	mov r0, #0
	bx lr
}

extern "C" asm void func_02064f40(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r4, [r1, #4]
	ldr r5, [r1]
	mov r12, r4, lsl #0xc
	mov r4, r12, asr #0x10
	mov r12, r5, lsl #0xc
	mov lr, r4, lsl #0x10
	mov r5, r12, asr #0x10
	mov r4, lr, lsr #0x10
	mov r12, r5, lsl #0x10
	mov r4, r4, lsl #0x10
	orr r4, r4, r12, lsr #16
	str r4, [r0]
	ldr r4, [r1, #0xc]
	ldr r5, [r1, #8]
	mov r12, r4, lsl #0xc
	mov r4, r12, asr #0x10
	mov r12, r5, lsl #0xc
	mov lr, r4, lsl #0x10
	mov r6, r12, asr #0x10
	mov r5, lr, lsr #0x10
	ldr r4, [sp, #0x14]
	mov r12, r6, lsl #0x10
	mov r5, r5, lsl #0x10
	orr r5, r5, r12, lsr #16
	str r5, [r0, #4]
	ldr r6, [sp, #0x10]
	ldr r12, [r1, #4]
	sub r5, r4, r3
	ldr r4, [r1, #0xc]
	mul lr, r12, r5
	mul r5, r4, r5
	ldr r12, [r1]
	sub r6, r6, r2
	ldr r4, [r1, #8]
	mla r1, r12, r6, lr
	mla r5, r4, r6, r5
	add r1, r1, r2, lsl #12
	add r2, r5, r3, lsl #12
	mov r1, r1, asr #4
	str r1, [r0, #8]
	mov r1, r2, asr #4
	str r1, [r0, #0xc]
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02064ff0(void)
{
	ldr r12, [sp]
	orr r1, r1, #0x40
	orr r2, r1, r2, lsl #8
	orr r1, r3, r12, lsl #8
	orr r1, r2, r1, lsl #16
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0206500c(void)
{
	cmp r2, #0
	orrge r1, r1, #0x80
	strgeh r1, [r0]
	strgeh r2, [r0, #4]
	bxge lr
	orr r1, r1, #0xc0
	strh r1, [r0]
	rsb r1, r2, #0
	strh r1, [r0, #4]
	bx lr
}

extern "C" asm void func_02065034(void)
{
	ldr r1, =0x04000400
	mov r2, #0x17
	ldr r12, =func_02066dcc
	str r2, [r1]
	bx r12
}

extern "C" asm void func_02065050(void)
{
	ldr r1, =0x04000400
	mov r2, #0x19
	ldr r12, =func_02066dcc
	str r2, [r1]
	bx r12
}

extern "C" asm void func_0206506c(void)
{
	ldr r1, =0x04000400
	mov r2, #0x1a
	ldr r12, =func_02067940
	str r2, [r1]
	bx r12
}

extern "C" asm void func_02065088(void)
{
	stmdb sp!, {r3, lr}
	bl func_02065200
	ldr r1, =0x04000504
	mov r0, #0
	str r0, [r1]
lbl_0206509c:
	ldr r0, [r1, #0xfc]
	tst r0, #0x8000000
	bne lbl_0206509c
	ldr r0, =0x04000060
	mov r2, #0
	strh r2, [r0]
	str r2, [r1, #0xfc]
	str r2, [r0, #-0x50]
	ldrh r12, [r0]
	ldr r2, =0xFFFFCFFD
	ldr r3, =0x0000CFFB
	orr r12, r12, #0x2000
	strh r12, [r0]
	ldrh r12, [r0]
	orr r12, r12, #0x1000
	strh r12, [r0]
	ldrh r12, [r0]
	and r2, r12, r2
	strh r2, [r0]
	ldrh r2, [r0]
	bic r2, r2, #0x3000
	orr r2, r2, #0x10
	strh r2, [r0]
	ldrh r2, [r0]
	and r2, r2, r3
	strh r2, [r0]
	ldr r0, [r1, #0xfc]
	orr r0, r0, #0x8000
	str r0, [r1, #0xfc]
	ldr r0, [r1, #0xfc]
	bic r0, r0, #0xc0000000
	orr r0, r0, #0x80000000
	str r0, [r1, #0xfc]
	bl func_02065228
	ldr r1, =0x04000350
	mov r2, #0
	ldr r0, =0x00007FFF
	str r2, [r1]
	strh r0, [r1, #4]
	strh r2, [r1, #6]
	str r2, [r1, #8]
	strh r2, [r1, #0xc]
	sub r1, r1, #0x348
	ldrh r0, [r1]
	bic r0, r0, #3
	strh r0, [r1]
	bl func_02065444
	ldr r2, =0x001F0080
	ldr r1, =0x040004A4
	mov r0, #0
	str r2, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065194(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, =0x04000600
lbl_0206519c:
	ldr r0, [r2]
	tst r0, #0x8000000
	bne lbl_0206519c
	ldr r0, [r2]
	ldr r1, =0x04000060
	orr r0, r0, #0x8000
	str r0, [r2]
	ldrh r0, [r1]
	orr r0, r0, #0x2000
	strh r0, [r1]
	ldrh r0, [r1]
	orr r0, r0, #0x1000
	strh r0, [r1]
	bl func_020652c0
	ldr r2, =0x001F0080
	ldr r1, =0x040004A4
	mov r0, #0
	str r2, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065200(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =0x04000400
	bl func_02065570
	ldr r1, =0x04000600
lbl_02065210:
	ldr r0, [r1]
	tst r0, #0x8000000
	bne lbl_02065210
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065228(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldr r1, =0x04000600
	ldr r0, [r1]
	orr r0, r0, #0x8000
	str r0, [r1]
	add r4, sp, #4
lbl_02065244:
	mov r0, r4
	bl func_020654e4
	cmp r0, #0
	bne lbl_02065244
	add r4, sp, #0
lbl_02065258:
	mov r0, r4
	bl func_02065514
	cmp r0, #0
	bne lbl_02065258
	ldr r1, =0x04000440
	mov r0, #3
	str r0, [r1]
	mov r0, #0
	str r0, [r1, #0x14]
	str r0, [r1]
	ldr r0, [sp]
	mov r2, #0
	cmp r0, #0
	strne r0, [r1, #8]
	ldr r1, =0x04000454
	mov r0, #2
	str r2, [r1]
	str r0, [r1, #-0x14]
	ldr r0, [sp, #4]
	str r0, [r1, #-0xc]
	str r2, [r1]
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020652c0(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	ldr r1, =0x04000600
	ldr r0, [r1]
	orr r0, r0, #0x8000
	str r0, [r1]
	add r4, sp, #4
lbl_020652dc:
	mov r0, r4
	bl func_020654e4
	cmp r0, #0
	bne lbl_020652dc
	add r4, sp, #0
lbl_020652f0:
	mov r0, r4
	bl func_02065514
	cmp r0, #0
	bne lbl_020652f0
	ldr r1, =0x04000440
	mov r0, #3
	str r0, [r1]
	mov r0, #0
	str r0, [r1, #0x14]
	str r0, [r1]
	ldr r0, [sp]
	ldr r2, =0x04000440
	cmp r0, #0
	strne r0, [r1, #8]
	mov r0, #2
	str r0, [r2]
	ldr r1, [sp, #4]
	mov r0, #0
	str r1, [r2, #8]
	str r0, [r2, #0x14]
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02065350(void)
{
	cmp r0, #0
	beq lbl_02065384
	ldr r12, =0x0400035C
	mov r0, r1, lsl #6
	strh r3, [r12]
	sub r3, r12, #0x2fc
	ldrh r1, [r3]
	orr r0, r0, r2, lsl #8
	orr r0, r0, #0x80
	bic r1, r1, #0x3f40
	orr r0, r1, r0
	strh r0, [r3]
	bx lr
lbl_02065384:
	ldr r2, =0x04000060
	ldr r0, =0x0000CF7F
	ldrh r1, [r2]
	and r0, r1, r0
	strh r0, [r2]
	bx lr
}

extern "C" asm void func_020653a8(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, =0x04000600
	mov r1, r0
	ldr r0, [r2]
	tst r0, #0x8000000
	mvnne r0, #0
	ldmneia sp!, {r3, pc}
	add r0, r2, #0x40
	bl func_02067980
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020653d8(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, =0x04000600
	mov r1, r0
	ldr r0, [r2]
	tst r0, #0x8000000
	mvnne r0, #0
	ldmneia sp!, {r3, pc}
	add r0, r2, #0x80
	bl func_02067940
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065408(void)
{
	ldr r12, =func_02067924
	ldr r1, =0x04000360
	bx r12
}

extern "C" asm void func_0206541c(void)
{
	ldr r12, [sp]
	orr r0, r0, r1, lsl #16
	orr r1, r0, r3, lsl #24
	cmp r12, #0
	ldr r0, =0x04000350
	orrne r1, r1, #0x8000
	str r1, [r0]
	strh r2, [r0, #4]
	bx lr
}

extern "C" asm void func_02065444(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #8
	ldr r0, =data_020c3dbc
	mvn r1, #0
	ldr r0, [r0]
	cmp r0, r1
	ldr r1, =0x04000330
	beq lbl_02065494
	mov r2, #0
	str r2, [sp]
	mov r3, #0x10
	str r2, [sp, #4]
	bl func_02067228
	ldr r0, =data_020c3dbc
	ldr r1, =0x04000360
	ldr r0, [r0]
	mov r2, #0
	mov r3, #0x60
	bl func_020670cc
	b lbl_020654b0
lbl_02065494:
	mov r0, #0
	mov r2, #0x10
	bl func_0206785c
	ldr r1, =0x04000360
	mov r0, #0
	mov r2, #0x60
	bl func_0206785c
lbl_020654b0:
	mov r2, #0
	ldr r0, =0x040004D0
	mov r1, r2
lbl_020654bc:
	add r2, r2, #1
	str r1, [r0]
	cmp r2, #0x20
	blt lbl_020654bc
	add sp, sp, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020654e4(void)
{
	ldr r2, =0x04000600
	ldr r1, [r2]
	tst r1, #0x4000
	mvnne r0, #0
	bxne lr
	ldr r1, [r2]
	and r1, r1, #0x1f00
	mov r1, r1, lsr #8
	str r1, [r0]
	mov r0, #0
	bx lr
}

extern "C" asm void func_02065514(void)
{
	ldr r2, =0x04000600
	ldr r1, [r2]
	tst r1, #0x4000
	mvnne r0, #0
	bxne lr
	ldr r1, [r2]
	and r1, r1, #0x2000
	mov r1, r1, lsr #0xd
	str r1, [r0]
	mov r0, #0
	bx lr
}

extern "C" asm void func_02065544(void)
{
	ldr r2, =0x04000600
	ldr r1, [r2]
	tst r1, #1
	mvnne r0, #0
	bxne lr
	ldr r1, [r2]
	and r1, r1, #2
	str r1, [r0]
	mov r0, #0
	bx lr
}

extern "C" asm void func_02065570(void)
{
	mov r1, #0
	mov r2, #0
	mov r3, #0
	mov r12, #0
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	stmia r0, {r1, r2, r3, r12}
	bx lr
}

extern "C" asm void func_02065604(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	mov r4, r0
	mov r0, r1
	ldr r7, [sp, #0x24]
	mov r1, r4
	mov r9, r2
	mov r8, r3
	ldr r6, [sp, #0x2c]
	bl func_02062e04
	mov r4, r0
	cmp r7, #0x1000
	beq lbl_02065644
	mul r1, r4, r7
	mov r0, r1, asr #0xb
	add r0, r1, r0, lsr #20
	mov r4, r0, asr #0xc
lbl_02065644:
	ldr r1, =0x04000290
	mov r2, #0
	stmia r1, {r2, r4, r9}
	ldr r0, [sp, #0x28]
	str r2, [r1, #0xc]
	cmp r0, #0
	movne r0, r2
	strne r0, [r1, #0x1b0]
	addne r5, r1, #0x1c8
	cmp r6, #0
	beq lbl_020656a8
	mov r1, #0
	str r1, [r6, #4]
	str r1, [r6, #8]
	str r1, [r6, #0xc]
	str r1, [r6, #0x10]
	str r1, [r6, #0x18]
	str r1, [r6, #0x1c]
	str r1, [r6, #0x20]
	str r1, [r6, #0x24]
	rsb r0, r7, #0
	str r0, [r6, #0x2c]
	str r1, [r6, #0x30]
	str r1, [r6, #0x34]
	str r1, [r6, #0x3c]
lbl_020656a8:
	bl func_02062ea8
	ldr r2, [sp, #0x20]
	ldr r1, [sp, #0x28]
	ldr r3, =0x04000290
	mov r12, #0
	str r12, [r3]
	mov r9, #0x1000
	str r9, [r3, #4]
	sub r2, r8, r2
	str r2, [r3, #8]
	mov r2, r12
	str r2, [r3, #0xc]
	cmp r1, #0
	beq lbl_02065708
	str r0, [r5]
	str r12, [r5]
	str r12, [r5]
	str r12, [r5]
	str r12, [r5]
	str r4, [r5]
	str r12, [r5]
	str r12, [r5]
	str r12, [r5]
	str r12, [r5]
lbl_02065708:
	cmp r6, #0
	strne r0, [r6]
	strne r4, [r6, #0x14]
	bl func_02062e84
	cmp r7, #0x1000
	beq lbl_02065744
	mov r2, r7, asr #0x1f
	umull r4, r3, r0, r7
	mla r3, r0, r2, r3
	mla r3, r1, r7, r3
	mov r0, r4
	mov r1, r3
	mov r2, #0x1000
	mov r3, #0
	bl func_02005e34
lbl_02065744:
	ldr r4, [sp, #0x20]
	mov r2, r8, lsl #1
	add r8, r4, r8
	mov r3, r8, asr #0x1f
	umull r12, r9, r0, r8
	mla r9, r0, r3, r9
	smull r4, r3, r2, r4
	mla r9, r1, r8, r9
	adds r2, r12, #0x80000000
	adc r2, r9, #0
	adds r4, r4, #0x800
	adc r3, r3, #0
	mov r4, r4, lsr #0xc
	orr r4, r4, r3, lsl #20
	umull r9, r8, r0, r4
	mov r3, r4, asr #0x1f
	mla r8, r0, r3, r8
	mla r8, r1, r4, r8
	adds r0, r9, #0x80000000
	ldr r0, [sp, #0x28]
	adc r3, r8, #0
	cmp r0, #0
	mov r0, #0
	beq lbl_020657c0
	str r2, [r5]
	rsb r1, r7, #0
	str r1, [r5]
	str r0, [r5]
	str r0, [r5]
	str r3, [r5]
	str r0, [r5]
lbl_020657c0:
	cmp r6, #0
	strne r2, [r6, #0x28]
	strne r3, [r6, #0x38]
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_020657d4(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x18
	str r2, [sp, #8]
	str r0, [sp]
	ldr r0, [sp, #8]
	mov r2, r3
	ldr r9, [sp, #0x4c]
	sub r0, r2, r0
	str r3, [sp, #0xc]
	str r1, [sp, #4]
	ldr r10, [sp, #0x48]
	ldr r8, [sp, #0x50]
	bl func_02062ee0
	cmp r9, #0
	beq lbl_02065820
	ldr r0, =0x04000440
	mov r1, #0
	str r1, [r0]
	add r6, r0, #0x18
lbl_02065820:
	cmp r8, #0
	beq lbl_02065854
	mov r0, #0
	str r0, [r8, #4]
	str r0, [r8, #8]
	str r0, [r8, #0xc]
	str r0, [r8, #0x10]
	str r0, [r8, #0x18]
	str r0, [r8, #0x1c]
	str r0, [r8, #0x20]
	str r0, [r8, #0x24]
	str r0, [r8, #0x2c]
	str r10, [r8, #0x3c]
lbl_02065854:
	bl func_02062e84
	mov r4, r0
	mov r11, r1
	ldr r5, =0x04000290
	mov r3, #0
	ldr r1, [sp]
	ldr r0, [sp, #4]
	str r3, [r5]
	mov r2, #0x1000
	str r2, [r5, #4]
	sub r0, r1, r0
	str r0, [r5, #8]
	mov r0, r3
	cmp r10, #0x1000
	str r0, [r5, #0xc]
	beq lbl_020658b0
	mov r5, r10, asr #0x1f
	umull r0, r1, r4, r10
	mla r1, r4, r5, r1
	mla r1, r11, r10, r1
	bl func_02005e34
	mov r4, r0
	mov r11, r1
lbl_020658b0:
	mov r1, r11, lsl #0xd
	mov r0, #0x80000000
	orr r1, r1, r4, lsr #19
	adds r0, r0, r4, lsl #13
	adc r1, r1, #0
	cmp r9, #0
	mov r0, #0
	beq lbl_020658e4
	str r1, [r6]
	str r0, [r6]
	str r0, [r6]
	str r0, [r6]
	str r0, [r6]
lbl_020658e4:
	cmp r8, #0
	strne r1, [r8]
	bl func_02062e84
	mov r5, r0
	mov r7, r1
	mov r3, #0
	ldr r12, =0x04000290
	ldr r1, [sp, #0x40]
	ldr r0, [sp, #0x44]
	mov r2, #0x1000
	str r3, [r12]
	str r2, [r12, #4]
	sub r0, r1, r0
	mov lr, r3
	str r0, [r12, #8]
	cmp r10, #0x1000
	str lr, [r12, #0xc]
	beq lbl_02065948
	mov r12, r10, asr #0x1f
	umull r0, r1, r5, r10
	mla r1, r5, r12, r1
	mla r1, r7, r10, r1
	bl func_02005e34
	mov r5, r0
	mov r7, r1
lbl_02065948:
	mov r1, r7, lsl #0xd
	mov r0, #0x80000000
	adds r0, r0, r5, lsl #13
	orr r1, r1, r5, lsr #19
	adc r1, r1, #0
	cmp r9, #0
	mov r0, #0
	beq lbl_0206597c
	str r1, [r6]
	str r0, [r6]
	str r0, [r6]
	str r0, [r6]
	str r0, [r6]
lbl_0206597c:
	cmp r8, #0
	strne r1, [r8, #0x14]
	bl func_02062e84
	cmp r10, #0x1000
	beq lbl_020659c0
	umull r12, lr, r0, r10
	mov r2, r10, asr #0x1f
	str r2, [sp, #0x14]
	str r12, [sp, #0x10]
	ldr r12, [sp, #0x14]
	mov r2, #0x1000
	mla lr, r0, r12, lr
	mla lr, r1, r10, lr
	ldr r0, [sp, #0x10]
	mov r3, #0
	mov r1, lr
	bl func_02005e34
lbl_020659c0:
	mov r12, r1, lsl #0xd
	mov r2, #0x80000000
	orr r12, r12, r0, lsr #19
	adds r2, r2, r0, lsl #13
	adc r2, r12, #0
	cmp r9, #0
	mov r3, #0
	strne r2, [r6]
	strne r3, [r6]
	cmp r8, #0
	strne r2, [r8, #0x28]
	ldr r3, [sp, #0xc]
	ldr r2, [sp, #8]
	ldr r12, [sp]
	add r2, r3, r2
	ldr r3, [sp, #4]
	add r3, r12, r3
	rsb r12, r2, #0
	rsb r2, r3, #0
	umull r3, lr, r4, r12
	adds r3, r3, #0x80000000
	mov r3, r12, asr #0x1f
	mla lr, r4, r3, lr
	mla lr, r11, r12, lr
	ldr r11, [sp, #0x44]
	ldr r4, [sp, #0x40]
	adc r3, lr, #0
	add r4, r11, r4
	umull r11, r12, r5, r2
	adds r11, r11, #0x80000000
	mov r11, r2, asr #0x1f
	mla r12, r5, r11, r12
	mla r12, r7, r2, r12
	mov r2, r4, asr #0x1f
	umull r7, r5, r0, r4
	mla r5, r0, r2, r5
	adc r11, r12, #0
	mla r5, r1, r4, r5
	adds r0, r7, #0x80000000
	adc r0, r5, #0
	cmp r9, #0
	beq lbl_02065a78
	str r3, [r6]
	str r11, [r6]
	str r0, [r6]
	str r10, [r6]
lbl_02065a78:
	cmp r8, #0
	strne r3, [r8, #0x30]
	strne r11, [r8, #0x34]
	strne r0, [r8, #0x38]
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_02065a98(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x24
	mov r9, r0
	ldr r5, [r9]
	ldr r4, [r2]
	add r0, sp, #0x18
	sub r4, r5, r4
	str r4, [sp, #0x18]
	ldr r7, [r9, #4]
	ldr r5, [r2, #4]
	mov r4, r1
	sub r1, r7, r5
	str r1, [sp, #0x1c]
	ldr r5, [r9, #8]
	ldr r2, [r2, #8]
	mov r1, r0
	sub r2, r5, r2
	mov r8, r3
	str r2, [sp, #0x20]
	ldr r7, [sp, #0x40]
	bl func_020630ec
	add r1, sp, #0x18
	add r2, sp, #0xc
	mov r0, r4
	bl func_02063008
	add r0, sp, #0xc
	mov r1, r0
	bl func_020630ec
	add r0, sp, #0x18
	add r1, sp, #0xc
	add r2, sp, #0
	bl func_02063008
	cmp r8, #0
	beq lbl_02065b78
	ldr r1, =0x04000440
	mov r0, #2
	str r0, [r1]
	ldr r0, [sp, #0xc]
	add r6, r1, #0x1c
	str r0, [r6]
	ldr r0, [sp]
	str r0, [r6]
	ldr r0, [sp, #0x18]
	str r0, [r6]
	ldr r0, [sp, #0x10]
	str r0, [r6]
	ldr r0, [sp, #4]
	str r0, [r6]
	ldr r0, [sp, #0x1c]
	str r0, [r6]
	ldr r0, [sp, #0x14]
	str r0, [r6]
	ldr r0, [sp, #8]
	str r0, [r6]
	ldr r0, [sp, #0x20]
	str r0, [r6]
lbl_02065b78:
	add r1, sp, #0xc
	mov r0, r9
	bl func_02062fcc
	rsb r4, r0, #0
	add r1, sp, #0
	mov r0, r9
	bl func_02062fcc
	rsb r5, r0, #0
	add r1, sp, #0x18
	mov r0, r9
	bl func_02062fcc
	cmp r8, #0
	strne r4, [r6]
	rsb r0, r0, #0
	strne r5, [r6]
	strne r0, [r6]
	cmp r7, #0
	addeq sp, sp, #0x24
	ldmeqia sp!, {r4, r5, r6, r7, r8, r9, pc}
	ldr r1, [sp, #0xc]
	str r1, [r7]
	ldr r1, [sp]
	str r1, [r7, #4]
	ldr r1, [sp, #0x18]
	str r1, [r7, #8]
	ldr r1, [sp, #0x10]
	str r1, [r7, #0xc]
	ldr r1, [sp, #4]
	str r1, [r7, #0x10]
	ldr r1, [sp, #0x1c]
	str r1, [r7, #0x14]
	ldr r1, [sp, #0x14]
	str r1, [r7, #0x18]
	ldr r1, [sp, #8]
	str r1, [r7, #0x1c]
	ldr r1, [sp, #0x20]
	str r1, [r7, #0x20]
	str r4, [r7, #0x24]
	str r5, [r7, #0x28]
	str r0, [r7, #0x2c]
	add sp, sp, #0x24
	ldmia sp!, {r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_02065c24(void)
{
	ldr r3, =0x04000468
	mov r2, #0x1000
	str r2, [r3]
	mov r2, #0
	str r2, [r3]
	str r2, [r3]
	str r2, [r3]
	str r1, [r3]
	str r0, [r3]
	str r2, [r3]
	rsb r0, r0, #0
	str r0, [r3]
	str r1, [r3]
	bx lr
}

extern "C" asm void func_02065c60(void)
{
	ldr r12, =0x04000468
	mov r3, #0
	str r1, [r12]
	str r3, [r12]
	rsb r2, r0, #0
	str r2, [r12]
	str r3, [r12]
	mov r2, #0x1000
	str r2, [r12]
	str r3, [r12]
	str r0, [r12]
	str r3, [r12]
	str r1, [r12]
	bx lr
}

extern "C" asm void func_02065c9c(void)
{
	ldr r3, =0x04000468
	mov r2, #0
	str r1, [r3]
	str r0, [r3]
	str r2, [r3]
	rsb r0, r0, #0
	str r0, [r3]
	str r1, [r3]
	str r2, [r3]
	str r2, [r3]
	str r2, [r3]
	mov r0, #0x1000
	str r0, [r3]
	bx lr
}

extern "C" asm void func_02065cd8(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, =data_020c3dbc
	mov r4, r0
	ldr r0, [r3]
	mvn r12, #0
	mov lr, r1
	mov r3, r2
	cmp r0, r12
	beq lbl_02065d14
	cmp r3, #0x1c
	bls lbl_02065d14
	mov r1, r4
	add r2, lr, #0x5000000
	bl func_020671bc
	ldmia sp!, {r4, pc}
lbl_02065d14:
	mov r0, r4
	mov r2, r3
	add r1, lr, #0x5000000
	bl func_02067840
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02065d2c(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c3dbc
	mov lr, r0
	ldr r0, [r3]
	mvn r12, #0
	mov r3, r2
	cmp r0, r12
	beq lbl_02065d68
	cmp r3, #0x1c
	bls lbl_02065d68
	add r2, r1, #0x400
	mov r1, lr
	add r2, r2, #0x5000000
	bl func_020671bc
	ldmia sp!, {r3, pc}
lbl_02065d68:
	add r1, r1, #0x400
	mov r0, lr
	mov r2, r3
	add r1, r1, #0x5000000
	bl func_02067840
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065d84(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c3dbc
	mov lr, r0
	ldr r0, [r3]
	mvn r12, #0
	mov r3, r2
	cmp r0, r12
	beq lbl_02065dc0
	cmp r3, #0x1c
	bls lbl_02065dc0
	add r2, r1, #0x200
	mov r1, lr
	add r2, r2, #0x5000000
	bl func_020671bc
	ldmia sp!, {r3, pc}
lbl_02065dc0:
	add r1, r1, #0x200
	mov r0, lr
	mov r2, r3
	add r1, r1, #0x5000000
	bl func_02067840
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065ddc(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c3dbc
	mov lr, r0
	ldr r0, [r3]
	mvn r12, #0
	mov r3, r2
	cmp r0, r12
	beq lbl_02065e18
	cmp r3, #0x1c
	bls lbl_02065e18
	add r2, r1, #0x600
	mov r1, lr
	add r2, r2, #0x5000000
	bl func_020671bc
	ldmia sp!, {r3, pc}
lbl_02065e18:
	add r1, r1, #0x600
	mov r0, lr
	mov r2, r3
	add r1, r1, #0x5000000
	bl func_02067840
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065e34(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, =data_020c3dbc
	mov r4, r0
	ldr r0, [r3]
	mvn r12, #0
	mov lr, r1
	mov r3, r2
	cmp r0, r12
	beq lbl_02065e70
	cmp r3, #0x30
	bls lbl_02065e70
	mov r1, r4
	add r2, lr, #0x7000000
	bl func_0206714c
	ldmia sp!, {r4, pc}
lbl_02065e70:
	mov r0, r4
	mov r2, r3
	add r1, lr, #0x7000000
	bl func_02067870
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02065e88(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_020c3dbc
	mov lr, r0
	ldr r0, [r3]
	mvn r12, #0
	mov r3, r2
	cmp r0, r12
	beq lbl_02065ec4
	cmp r3, #0x30
	bls lbl_02065ec4
	add r2, r1, #0x400
	mov r1, lr
	add r2, r2, #0x7000000
	bl func_0206714c
	ldmia sp!, {r3, pc}
lbl_02065ec4:
	add r1, r1, #0x400
	mov r0, lr
	mov r2, r3
	add r1, r1, #0x7000000
	bl func_02067870
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02065ee0(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, =data_020c3dbc
	mov r4, r0
	ldr r0, [r3]
	mvn r12, #0
	mov lr, r1
	mov r3, r2
	cmp r0, r12
	mov r12, #0x6400000
	beq lbl_02065f20
	cmp r3, #0x30
	bls lbl_02065f20
	mov r1, r4
	add r2, r12, lr
	bl func_0206714c
	ldmia sp!, {r4, pc}
lbl_02065f20:
	mov r0, r4
	mov r2, r3
	add r1, r12, lr
	bl func_02067870
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02065f38(void)
{
	stmdb sp!, {r4, lr}
	ldr r3, =data_020c3dbc
	mov r4, r0
	ldr r0, [r3]
	mvn r12, #0
	mov lr, r1
	mov r3, r2
	cmp r0, r12
	mov r12, #0x6600000
	beq lbl_02065f78
	cmp r3, #0x30
	bls lbl_02065f78
	mov r1, r4
	add r2, r12, lr
	bl func_0206714c
	ldmia sp!, {r4, pc}
lbl_02065f78:
	mov r0, r4
	mov r2, r3
	add r1, r12, lr
	bl func_02067870
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02065f90(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	mov r5, r1
	mov r4, r2
	bl func_02064ad0
	ldr r1, =data_020c3dbc
	mov r12, r0
	ldr r0, [r1]
	mvn r1, #0
	cmp r0, r1
	beq lbl_02065fd8
	cmp r4, #0x1c
	bls lbl_02065fd8
	mov r1, r6
	mov r3, r4
	add r2, r12, r5
	bl func_020671bc
	ldmia sp!, {r4, r5, r6, pc}
lbl_02065fd8:
	mov r0, r6
	mov r2, r4
	add r1, r12, r5
	bl func_02067840
	ldmia sp!, {r4, r5, r6, pc}
}

#pragma thumb on
