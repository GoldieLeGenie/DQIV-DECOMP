/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0202c678(void);
    void func_0202c6cc(void);
    void func_0202c6d4(void);
    void func_0202c6e8(void);
    void func_0202c9b8(void);
    void func_0202ca08(void);
    void func_0202cd24(void);
    void pad_0202cd32(void);
    void func_0202cd34(void);
    void func_0202ce0c(void);
    void func_0202ce58(void);
    void func_0202d000(void);
    void pad_0202d012(void);
    void func_0202d014(void);
    void pad_0202d016(void);
    void _s32_div_f(void);
    void data_020b5d74(void);
    void data_020b5d80(void);
    void data_020b5d8c(void);
    void data_020b638c(void);
    void data_020eddec(void);
    void data_0210cfa8(void);
    void data_0210cfe4(void);
    void data_0211c4f0(void);
    void func_02008ea0(void);
    void func_0202ac5c(void);
    void func_0202acdc(void);
    void func_0202b0b8(void);
    void func_0202b510(void);
    void func_02061b88(void);
    void func_02065c24(void);
    void func_02065c9c(void);
    void func_02067940(void);
    void func_0206adcc(void);
    void func_0206ae08(void);
    void func_0206ae30(void);
    void func_0206dcf0(void);
    void func_02081254(void);
    void func_0208214c(void);
    void func_02087108(void);
    void func_0208718c(void);
    void func_020882d4(void);
}

#pragma thumb on
extern "C" asm void func_0202c678(void)
{
	push {r3, r4, lr}
	sub sp, #4
	add r4, r0, #0
	mov r1, #1
	str r1, [r4, #0xc]
	str r1, [r4, #0x10]
	mov r0, #0x1f
	strb r0, [r4, #4]
	add r0, sp, #0
	lsl r1, r1, #0xf
	dcd 0xED3CF05A
	add r0, r4, #0
	add r0, #8
	add r1, sp, #0
	dcd 0xED7AF05A
	ldr r0, [pc, #0x2c]
	mov r1, #0
	str r0, [r4, #0x20]
	mov r0, #2
	lsl r0, r0, #0xe
	str r0, [r4, #0x28]
	add r0, r4, #0
	add r0, #0x30
	mov r2, #0x20
	dcd 0xEE12F05B
	mov r1, #0
	mov r0, #2
	str r1, [r4, #0x24]
	lsl r0, r0, #0xe
	str r0, [r4, #0x2c]
	str r1, [r4, #0x50]
	add r0, r4, #0
	str r1, [r4, #0x5c]
	dcd 0xFCFAF7FE
	add sp, #4
	pop {r3, r4, pc}
	dcd 0x0000FFFF
}

extern "C" asm void func_0202c6cc(void)
{
	ldr r3, [pc, #0]
	bx r3
	dcd 0x0202C6E9
}

extern "C" asm void func_0202c6d4(void)
{
	ldr r1, [r0, #0x50]
	cmp r1, #0x3c
	bgt lbl_0202c6e0
	ldr r0, [r0, #0x30]
	cmp r0, #0x3c
	ble lbl_0202c6e4
lbl_0202c6e0:
	mov r0, #1
	bx lr
lbl_0202c6e4:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0202c6e8(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x54
	add r7, r0, #0
	ldrb r1, [r7, #0x1c]
	mov r0, #2
	tst r0, r1
	beq lbl_0202c6fa
	mov r0, #1
	b lbl_0202c6fc
lbl_0202c6fa:
	mov r0, #0
lbl_0202c6fc:
	cmp r0, #0
	bne lbl_0202c702
	b lbl_0202c980
lbl_0202c702:
	ldr r0, [pc, #0x280]
	mov r1, #4
	mov r2, #0xc
	dcd 0xED20F055
	mov r0, #0x1f
	strb r0, [r7, #4]
	dcd 0xFAA4F7FE
	dcd 0xFAE2F7FE
	ldr r3, [pc, #0x26c]
	add r2, sp, #0x48
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [r3]
	add r1, sp, #0x3c
	str r0, [r2]
	mov r0, #0
	str r0, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	add r0, sp, #0x18
	dcd 0xEA2AF035
	add r0, sp, #0x48
	dcd 0xEB7CF03E
	ldr r1, [pc, #0x250]
	add r0, sp, #0x18
	dcd 0xE900F03B
	ldr r1, [pc, #0x24c]
	mov r0, #0xa4
	ldr r2, [r1, #0x7c]
	bic r2, r0
	str r2, [r1, #0x7c]
	add r0, sp, #0x3c
	dcd 0xEB5CF03E
	dcd 0xEB3CF03E
	dcd 0xEACCF041
	add r2, r7, #0
	ldr r1, [r7, #0x50]
	mov r0, #0xa
	mul r0, r1
	asr r0, r0, #1
	str r0, [r7, #0x2c]
	ldr r0, [r7, #0x50]
	add r2, #0x24
	add r0, r0, #1
	str r0, [r7, #0x50]
	ldr r1, [r7, #0x24]
	mov r0, #1
	add r1, #0x14
	lsl r0, r0, #0x10
	str r1, [r7, #0x24]
	cmp r1, r0
	blt lbl_0202c782
	ldr r1, [r2]
	sub r0, r1, r0
	str r0, [r2]
lbl_0202c782:
	mov r0, #0
	str r0, [sp, #0x10]
	str r0, [sp, #0xc]
	str r0, [sp, #4]
lbl_0202c78a:
	mov r0, #0
	str r0, [sp, #8]
	str r0, [sp]
	ldr r0, [sp, #4]
	ldr r4, [pc, #0x200]
	str r0, [sp, #0x14]
	add r0, #0xa
	ldr r5, [pc, #0x1fc]
	str r0, [sp, #0x14]
lbl_0202c79c:
	ldr r1, [r7, #0x50]
	ldr r0, [sp, #0x14]
	add r3, r1, #0
	mul r3, r0
	lsl r0, r3, #1
	add r2, r3, r0
	ldr r0, [sp, #0xc]
	cmp r0, #1
	bne lbl_0202c7b2
	ldr r6, [sp, #8]
	b lbl_0202c7b8
lbl_0202c7b2:
	ldr r0, [sp, #8]
	mov r1, #3
	sub r6, r1, r0
lbl_0202c7b8:
	ldr r0, [pc, #0x1e0]
	mov r1, #0
	str r1, [r0]
	cmp r6, #3
	bhi lbl_0202c824
	add r0, r6, r6
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r0
	mov r2, r3
	mov r6, r5
	lsl r2, r0, #1
	ldr r1, [r5]
	ldr r0, [r1, #4]
	ldr r6, [r1, #8]
	ldr r1, [r1]
	add r0, r3
	add r1, r2
	str r1, [r4]
	str r0, [r4]
	str r6, [r4]
	b lbl_0202c824
	ldr r1, [r5]
	ldr r0, [r1, #4]
	ldr r6, [r1, #8]
	ldr r1, [r1]
	sub r0, r0, r3
	add r1, r2
	str r1, [r4]
	str r0, [r4]
	str r6, [r4]
	b lbl_0202c824
	ldr r1, [r5]
	ldr r0, [r1, #4]
	ldr r6, [r1, #8]
	ldr r1, [r1]
	sub r0, r0, r3
	sub r1, r1, r2
	str r1, [r4]
	str r0, [r4]
	str r6, [r4]
	b lbl_0202c824
	ldr r1, [r5]
	ldr r0, [r1, #4]
	ldr r6, [r1, #8]
	ldr r1, [r1]
	add r0, r3
	sub r1, r1, r2
	str r1, [r4]
	str r0, [r4]
	str r6, [r4]
lbl_0202c824:
	ldr r0, [r7, #0x24]
	ldr r1, [pc, #0x178]
	asr r0, r0, #4
	lsl r0, r0, #2
	ldr r2, [pc, #0x170]
	add r1, r0
	ldrsh r0, [r2, r0]
	mov r2, #2
	ldrsh r1, [r1, r2]
	dcd 0xEA32F039
	mov r1, #2
	ldr r0, [pc, #0x164]
	lsl r1, r1, #0xe
	str r1, [r0]
	str r1, [r0]
	str r1, [r0]
	ldr r0, [sp]
	mov r1, #0xf
	sub r1, r1, r0
	ldr r0, [r7, #0x50]
	asr r0, r0, #3
	sub r0, r1, r0
	bpl lbl_0202c856
	mov r0, #0
lbl_0202c856:
	ldr r1, [sp, #0x10]
	strb r0, [r7, #4]
	add r0, r7, #0
	dcd 0xFE58F7FE
	ldr r0, [sp, #0x10]
	mov r1, #1
	add r0, r0, #1
	str r0, [sp, #0x10]
	ldr r0, [pc, #0x13c]
	str r1, [r0]
	ldr r1, [pc, #0x13c]
	sub r0, #0x80
	str r1, [r0]
	ldr r1, [r5]
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
	ldr r0, [pc, #0x120]
	str r1, [r0]
	ldr r2, [r5]
	ldrh r1, [r2, #0x10]
	ldrh r0, [r2, #0xc]
	ldrh r2, [r2, #0xe]
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0x114]
	str r2, [r0]
	str r1, [r0]
	ldr r1, [pc, #0x108]
	sub r0, #0xc
	str r1, [r0]
	ldr r1, [r5]
	add r1, #8
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
	ldr r0, [pc, #0xe8]
	str r1, [r0]
	ldr r2, [r5]
	ldrh r1, [r2, #0x16]
	ldrh r0, [r2, #0x12]
	ldrh r2, [r2, #0x14]
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0xdc]
	str r2, [r0]
	str r1, [r0]
	ldr r1, [pc, #0xd0]
	sub r0, #0xc
	str r1, [r0]
	ldr r1, [r5]
	add r1, #0x10
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
	ldr r0, [pc, #0xb0]
	str r1, [r0]
	ldr r2, [r5]
	mov r0, #0x10
	add r2, #0xc
	ldrsh r1, [r2, r0]
	ldrh r0, [r2, #0xc]
	ldrh r2, [r2, #0xe]
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0xa0]
	str r2, [r0]
	lsl r0, r1, #0x10
	lsr r1, r0, #0x10
	ldr r0, [pc, #0x98]
	str r1, [r0]
	ldr r1, [pc, #0x8c]
	sub r0, #0xc
	str r1, [r0]
	ldr r1, [r5]
	add r1, #0x18
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
	ldr r0, [pc, #0x70]
	str r1, [r0]
	ldr r2, [r5]
	add r2, #0x12
	ldrh r1, [r2, #0x10]
	ldrh r0, [r2, #0xc]
	ldrh r2, [r2, #0xe]
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0x60]
	str r2, [r0]
	str r1, [r0]
	mov r1, #1
	sub r0, #0x44
	str r1, [r0]
	ldr r0, [sp]
	add r0, r0, #4
	str r0, [sp]
	ldr r0, [sp, #8]
	add r0, r0, #1
	str r0, [sp, #8]
	cmp r0, #4
	bge lbl_0202c96e
	b lbl_0202c79c
lbl_0202c96e:
	ldr r0, [sp, #4]
	add r0, #0xa
	str r0, [sp, #4]
lbl_0202c974:
	ldr r0, [sp, #0xc]
	add r0, r0, #1
	str r0, [sp, #0xc]
	cmp r0, #2
	bge lbl_0202c980
	b lbl_0202c78a
lbl_0202c980:
	add sp, #0x54
	pop {r4, r5, r6, r7, pc}
	dcd 0x0211C4F0
	dcd 0x020B5D74
	dcd 0x0210CFE4
	dcd 0x0210CFA8
	dcd 0x04000470
	dcd 0x020EDDEC
	dcd 0x04000444
	dcd 0x020B638C
	dcd 0x0400046C
	dcd 0x04000500
	dcd 0x00007FFF
	dcd 0x04000488
	dcd 0x0400048C
}

extern "C" asm void func_0202c9b8(void)
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
	dcd 0xEB9CF05A
	add r0, r4, #0
	add r0, #8
	add r1, sp, #0
	dcd 0xEBD8F05A
	mov r2, #6
	mov r1, #0
	lsl r2, r2, #6
	add r3, r4, #0
lbl_0202c9e4:
	add r0, r3, #0
	add r0, #0x54
	strh r2, [r0]
	add r1, r1, #1
	add r2, r2, #2
	add r3, r3, #2
	cmp r1, #0xa
	blt lbl_0202c9e4
	mov r0, #0
	str r0, [r4, #0x24]
	str r0, [r4, #0x20]
	sub r0, #0xfa
	str r0, [r4, #0x28]
	add r0, r4, #0
	dcd 0xFB5AF7FE
	add sp, #4
	pop {r3, r4, pc}
}

extern "C" asm void func_0202ca08(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x64
	ldrb r1, [r0, #0x1c]
	str r0, [sp]
	mov r0, #2
	tst r0, r1
	beq lbl_0202ca1a
	mov r0, #1
	b lbl_0202ca1c
lbl_0202ca1a:
	mov r0, #0
lbl_0202ca1c:
	cmp r0, #0
	bne lbl_0202ca22
	b lbl_0202ccdc
lbl_0202ca22:
	ldr r0, [pc, #0x2bc]
	mov r1, #2
	mov r2, #0xe
	dcd 0xEB90F055
	dcd 0xF916F7FE
	dcd 0xF954F7FE
	ldr r3, [pc, #0x2ac]
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
	dcd 0xE89CF035
	add r0, sp, #0x58
	dcd 0xE9EEF03E
	ldr r1, [pc, #0x290]
	add r0, sp, #0x28
	dcd 0xEF72F03A
	ldr r1, [pc, #0x28c]
	mov r0, #0xa4
	ldr r2, [r1, #0x7c]
	bic r2, r0
	add r0, sp, #0x4c
	str r2, [r1, #0x7c]
	dcd 0xE9CEF03E
	dcd 0xE9AEF03E
	dcd 0xE93EF041
	mov r0, #1
	str r0, [sp, #0x20]
	mov r0, #0x20
	str r0, [sp, #4]
lbl_0202ca7e:
	mov r0, #1
	str r0, [sp, #0x1c]
lbl_0202ca82:
	ldr r1, [sp, #0x1c]
	ldr r0, [sp, #4]
	mov r4, #0
	add r0, r1
	str r0, [sp, #0x18]
	add r1, r0, #0
	mov r0, #0x44
	mul r0, r1
	add r5, r4, #0
	str r0, [sp, #0x24]
lbl_0202ca96:
	ldr r0, [pc, #0x258]
	ldr r1, [r0]
	ldr r0, [sp, #0x24]
	add r0, r1
	add r6, r0, r5
	mov r0, #0x10
	ldrsh r3, [r6, r0]
	mov r0, #0x67
	lsl r0, r0, #4
	ldrsh r2, [r6, r0]
	ldr r0, [pc, #0x248]
	ldrsh r1, [r6, r0]
	mov r0, #0x33
	mvn r0, r0
	ldrsh r7, [r6, r0]
	mov r0, #0x54
	ldrsh r0, [r6, r0]
	add r0, r7
	add r0, r1
	add r0, r2
	lsl r0, r0, #0xe
	asr r0, r0, #0x10
	sub r0, r0, r3
	lsl r0, r0, #0x10
	asr r0, r0, #0x12
	add r0, r3
	lsl r0, r0, #0x10
	asr r3, r0, #0x10
	ldr r0, [sp]
	ldr r1, [sp, #0x18]
	add r2, r4, #0
	dcd 0xF92EF000
	add r4, r4, #1
	add r5, r5, #6
	cmp r4, #4
	blt lbl_0202ca96
	ldr r0, [sp, #0x1c]
	add r0, r0, #1
	str r0, [sp, #0x1c]
	cmp r0, #0x1f
	blt lbl_0202ca82
	ldr r0, [sp, #4]
	add r0, #0x20
	str r0, [sp, #4]
	ldr r0, [sp, #0x20]
	add r0, r0, #1
	str r0, [sp, #0x20]
	cmp r0, #0x17
	blt lbl_0202ca7e
	mov r0, #0
	str r0, [sp, #0x14]
	str r0, [sp, #8]
lbl_0202cb00:
	mov r0, #0
	ldr r7, [pc, #0x1ec]
	str r0, [sp, #0x10]
lbl_0202cb06:
	ldr r1, [sp, #0x10]
	ldr r0, [sp, #8]
	add r4, r1, r0
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
	mov r0, #0x44
	add r5, r4, #0
	mul r5, r0
	ldr r0, [r7]
	add r1, r0, r5
	ldr r0, [r1, #8]
	add r0, #0x50
	str r0, [r1, #8]
	dcd 0xEB90F054
	mov r1, #1
	tst r0, r1
	ldr r1, [r7]
	beq lbl_0202cb58
	mov r0, #0x44
	mul r0, r4
	add r4, r1, r0
	ldr r2, [sp]
	ldr r3, [r4, #8]
	ldr r1, [r1, r0]
	ldr r2, [r2, #0x24]
	ldr r4, [r4, #4]
	ldr r0, [pc, #0x1b0]
	add r2, r4
	str r1, [r0]
	str r2, [r0]
	str r3, [r0]
	b lbl_0202cb72
lbl_0202cb58:
	mov r0, #0x44
	mul r0, r4
	add r2, r1, r0
	ldr r4, [sp]
	ldr r3, [r2, #8]
	ldr r1, [r1, r0]
	ldr r2, [r2, #4]
	ldr r4, [r4, #0x24]
	ldr r0, [pc, #0x194]
	sub r2, r2, r4
	str r1, [r0]
	str r2, [r0]
	str r3, [r0]
lbl_0202cb72:
	ldr r0, [sp]
	mov r1, #0x18
	dcd 0xFCCBF7FE
	ldr r0, [pc, #0x188]
	mov r1, #1
	str r1, [r0]
	mov r0, #0
	str r0, [sp, #0xc]
	add r4, r0, #0
	add r6, r0, #0
lbl_0202cb88:
	ldr r0, [r7]
	add r0, r5
	add r1, r0, r4
	mov r0, #0x10
	ldrsh r0, [r1, r0]
	sub r0, #0x28
	strh r0, [r1, #0x10]
	ldr r0, [r7]
	add r0, r5
	add r1, r4, r0
	mov r0, #0x10
	ldrsh r0, [r1, r0]
	mov r1, #0x64
	dcd 0xEA44F7D9
	add r0, #0x1f
	mov r1, #0
	mov r2, #0x1f
	dcd 0xE978F7DC
	ldr r1, [sp]
	ldr r1, [r1, #0x68]
	cmp r1, #0
	beq lbl_0202cbc8
	lsl r1, r0, #0xa
	ldr r0, [pc, #0x14c]
	orr r0, r1
	lsl r0, r0, #0x10
	lsr r1, r0, #0x10
	ldr r0, [pc, #0x148]
	str r1, [r0]
	b lbl_0202cbda
lbl_0202cbc8:
	lsl r1, r0, #5
	orr r1, r0
	mov r0, #0x1f
	lsl r0, r0, #0xa
	orr r0, r1
	lsl r0, r0, #0x10
	lsr r1, r0, #0x10
	ldr r0, [pc, #0x134]
	str r1, [r0]
lbl_0202cbda:
	ldr r0, [r7]
	add r0, r5
	add r1, r0, r6
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
	ldr r0, [pc, #0x114]
	add r6, #8
	str r1, [r0]
	ldr r0, [r7]
	add r0, r5
	add r2, r0, r4
	ldrh r1, [r2, #0x10]
	ldrh r0, [r2, #0xc]
	ldrh r2, [r2, #0xe]
	add r4, r4, #6
	lsl r2, r2, #0x10
	orr r2, r0
	ldr r0, [pc, #0x100]
	str r2, [r0]
	str r1, [r0]
	ldr r0, [sp, #0xc]
	add r0, r0, #1
	str r0, [sp, #0xc]
	cmp r0, #4
	blt lbl_0202cb88
	ldr r0, [pc, #0xf4]
	mov r1, #1
	str r1, [r0]
	ldr r0, [sp, #0x10]
	add r0, r0, #1
	str r0, [sp, #0x10]
	cmp r0, #0x18
	bge lbl_0202cc32
	b lbl_0202cb06
lbl_0202cc32:
	ldr r0, [sp, #8]
	add r0, #0x18
	str r0, [sp, #8]
	ldr r0, [sp, #0x14]
	add r0, r0, #1
	str r0, [sp, #0x14]
	cmp r0, #0x20
	bge lbl_0202cc44
	b lbl_0202cb00
lbl_0202cc44:
	ldr r0, [sp]
	mov r7, #0x54
	ldr r0, [r0, #0x20]
	mov r4, #0
	add r1, r0, #1
	ldr r0, [sp]
	add r6, r7, #0
	str r1, [r0, #0x20]
	ldr r0, [r0, #0x24]
	add r1, r0, #1
	ldr r0, [sp]
	str r1, [r0, #0x24]
	add r5, r0, #0
lbl_0202cc5e:
	ldr r0, [sp]
	mov r1, #0x54
	add r3, r0, #0
	ldr r3, [r3, #0x2c]
	ldrsh r1, [r5, r1]
	lsl r3, r3, #0x10
	mov r2, #0
	asr r3, r3, #0x10
	dcd 0xF861F000
	ldr r0, [sp]
	mov r1, #0x54
	add r3, r0, #0
	ldr r3, [r3, #0x2c]
	ldrsh r1, [r5, r1]
	lsl r3, r3, #0x10
	mov r2, #1
	asr r3, r3, #0x10
	dcd 0xF857F000
	ldr r0, [sp]
	ldrsh r1, [r5, r7]
	add r3, r0, #0
	ldr r3, [r3, #0x2c]
	mov r2, #2
	lsl r3, r3, #0x10
	asr r3, r3, #0x10
	dcd 0xF84EF000
	ldr r0, [sp]
	ldrsh r1, [r5, r6]
	add r3, r0, #0
	ldr r3, [r3, #0x2c]
	mov r2, #3
	lsl r3, r3, #0x10
	asr r3, r3, #0x10
	dcd 0xF845F000
	add r4, r4, #1
	add r5, r5, #2
	cmp r4, #0xa
	blt lbl_0202cc5e
	ldr r0, [sp]
	ldr r1, [r0, #0x2c]
	ldr r0, [r0, #0x28]
	add r1, r0
	ldr r0, [sp]
	str r1, [r0, #0x2c]
	ldr r0, [pc, #0x5c]
	cmp r1, r0
	blt lbl_0202ccd2
	ldr r0, [pc, #0x58]
	cmp r1, r0
	blt lbl_0202ccdc
	ldr r0, [sp]
lbl_0202cccc:
	ldr r0, [r0, #0x28]
	cmp r0, #0
	ble lbl_0202ccdc
lbl_0202ccd2:
	ldr r0, [sp]
	ldr r0, [r0, #0x28]
	neg r1, r0
	ldr r0, [sp]
	str r1, [r0, #0x28]
lbl_0202ccdc:
	add sp, #0x64
	pop {r4, r5, r6, r7, pc}
	dcd 0x0211C4F0
	dcd 0x020B5D80
	dcd 0x0210CFE4
	dcd 0x0210CFA8
	dcd 0x020EDDEC
	dcd 0xFFFFF9B0
	dcd 0x04000444
	dcd 0x0400046C
	dcd 0x04000470
	dcd 0x04000500
	dcd 0x000003FF
	dcd 0x04000480
	dcd 0x04000488
	dcd 0x0400048C
	dcd 0x04000448
	dcd 0xFFFFD8F0
	dcd 0xFFFFF830
}

extern "C" asm void func_0202cd24(void)
{
	ldr r0, [r0, #0x24]
	cmp r0, #0x3c
	ble lbl_0202cd2e
	mov r0, #1
	bx lr
lbl_0202cd2e:
	mov r0, #0
	bx lr
}

extern "C" asm void pad_0202cd32(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0202cd34(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r4, r3, #0
	add r7, r1, #0
	ldr r3, [pc, #0xcc]
	mov ip, r2
	ldr r2, [r3]
	mov r1, #0x44
	add r0, r7, #0
	mul r0, r1
	add r0, r2
	mov lr, r0
	add r5, r7, #0
	add r6, r7, #0
	mov r2, #6
	mov r0, ip
	mul r2, r0
	mov r0, lr
	add r0, r2
	strh r4, [r0, #0x10]
	mov r0, ip
	sub r5, #0x18
	add r6, #0x18
	cmp r0, #3
	bhi lbl_0202ce04
	mov r0, ip
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r0
	mov r0, r5
	lsl r2, r1, #1
	lsl r6, r5, #1
	add r0, r5, #0
	ldr r2, [r3]
	mul r0, r1
	add r0, r2
	strh r4, [r0, #0x16]
	add r0, r5, #1
	add r2, r0, #0
	ldr r6, [r3]
	mul r2, r1
	add r0, r6, r2
	strh r4, [r0, #0x1c]
	add r0, r7, #1
	ldr r2, [r3]
	mul r1, r0
	add r0, r2, r1
	strh r4, [r0, #0x22]
	pop {r3, r4, r5, r6, r7, pc}
	add r0, r6, #0
	ldr r2, [r3]
	mul r0, r1
	add r0, r2
	strh r4, [r0, #0x10]
	add r0, r7, #1
	add r2, r0, #0
	ldr r5, [r3]
	mul r2, r1
	add r0, r5, r2
	strh r4, [r0, #0x1c]
	add r0, r6, #1
	ldr r2, [r3]
	mul r1, r0
	add r0, r2, r1
	strh r4, [r0, #0x22]
	pop {r3, r4, r5, r6, r7, pc}
	sub r0, r6, #1
	add r2, r0, #0
	ldr r5, [r3]
	mul r2, r1
	add r0, r5, r2
	strh r4, [r0, #0x10]
	sub r0, r7, #1
	add r2, r0, #0
	ldr r5, [r3]
	mul r2, r1
	add r0, r5, r2
	strh r4, [r0, #0x16]
	add r0, r6, #0
	ldr r2, [r3]
	mul r0, r1
	add r0, r2
	strh r4, [r0, #0x22]
	pop {r3, r4, r5, r6, r7, pc}
	sub r0, r7, #1
lbl_0202cde4:
	add r2, r0, #0
	ldr r6, [r3]
	mul r2, r1
	add r0, r6, r2
	strh r4, [r0, #0x10]
	sub r0, r5, #1
	add r2, r0, #0
	ldr r6, [r3]
	mul r2, r1
	add r0, r6, r2
	strh r4, [r0, #0x16]
	add r0, r5, #0
	ldr r2, [r3]
	mul r0, r1
	add r0, r2
	strh r4, [r0, #0x1c]
lbl_0202ce04:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020EDDEC
}

extern "C" asm void func_0202ce0c(void)
{
	push {r3, r4, lr}
	sub sp, #4
	add r4, r0, #0
	mov r1, #1
	str r1, [r4, #0xc]
	str r1, [r4, #0x10]
	mov r0, #0x1f
	strb r0, [r4, #4]
	add r0, sp, #0
	lsl r1, r1, #0xf
	dcd 0xE972F05A
	add r0, r4, #0
	add r0, #8
	add r1, sp, #0
	dcd 0xE9B0F05A
	ldr r0, [pc, #0x24]
	mov r1, #4
	mov r2, #0xc
	dcd 0xE98AF055
	mov r1, #0
	mov r0, #1
	str r1, [r4, #0x20]
	lsl r0, r0, #0x10
	str r0, [r4, #0x28]
	str r1, [r4, #0x24]
	lsr r0, r0, #1
	str r0, [r4, #0x2c]
	add r0, r4, #0
	str r1, [r4, #0x30]
	dcd 0xF934F7FE
	add sp, #4
	pop {r3, r4, pc}
	dcd 0x0211C4F0
}

extern "C" asm void func_0202ce58(void)
{
	push {r4, r5, r6, r7, lr}
	sub sp, #0x3c
	add r4, r0, #0
	ldrb r1, [r4, #0x1c]
	mov r0, #2
	tst r0, r1
	beq lbl_0202ce6a
	mov r0, #1
	b lbl_0202ce6c
lbl_0202ce6a:
	mov r0, #0
lbl_0202ce6c:
	cmp r0, #0
	bne lbl_0202ce72
	b lbl_0202cfc2
lbl_0202ce72:
	ldr r0, [pc, #0x154]
	mov r1, #4
	mov r2, #0xc
	dcd 0xE968F055
	dcd 0xFEEEF7FD
	dcd 0xFF2CF7FD
	ldr r3, [pc, #0x144]
	add r2, sp, #0x30
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [r3]
	add r1, sp, #0x24
	str r0, [r2]
	mov r0, #0
	str r0, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	add r0, sp, #0
	dcd 0xEE74F034
	add r0, sp, #0x30
	dcd 0xEFC6F03D
	ldr r1, [pc, #0x128]
	add r0, sp, #0
	dcd 0xED4AF03A
	ldr r1, [pc, #0x124]
	mov r0, #0xa4
	ldr r2, [r1, #0x7c]
	bic r2, r0
	add r0, sp, #0x24
	str r2, [r1, #0x7c]
	dcd 0xEFA6F03D
	dcd 0xEF86F03D
	dcd 0xEF16F040
	dcd 0xE9C6F054
	mov r1, #1
	tst r0, r1
	beq lbl_0202cfc2
	ldr r2, [pc, #0x104]
	mov r0, #0
	str r0, [r2]
	ldr r0, [pc, #0x104]
	ldr r5, [r4, #0x24]
	ldr r1, [r0]
	ldr r0, [r4, #0x20]
	ldr r3, [r1, #8]
	add r2, #0x2c
	sub r0, r3, r0
	ldr r3, [r1, #4]
	ldr r1, [r1]
	add r3, r5
	str r1, [r2]
	str r3, [r2]
	str r0, [r2]
	ldr r0, [r4, #0x28]
	ldr r1, [pc, #0xec]
	asr r0, r0, #4
	lsl r0, r0, #2
	add r2, r1, r0
	ldrsh r0, [r1, r0]
	mov r1, #2
	ldrsh r1, [r2, r1]
	dcd 0xEE90F038
	ldr r1, [r4, #0x2c]
	ldr r0, [pc, #0xdc]
	str r1, [r0]
	str r1, [r0]
	str r1, [r0]
	add r0, r4, #0
	mov r1, #0x18
	dcd 0xFAFDF7FE
	ldr r0, [pc, #0xd0]
	mov r1, #1
	str r1, [r0]
	mov r0, #0
	ldr r3, [pc, #0xcc]
	add r1, r0, #0
	add r2, r0, #0
lbl_0202cf24:
	ldr r6, [pc, #0xc8]
	ldr r5, [pc, #0xcc]
	add r0, r0, #1
	str r6, [r5]
	ldr r5, [pc, #0xac]
	ldr r5, [r5]
	add r6, r5, r1
	ldr r5, [r6, #0x24]
	ldr r6, [r6, #0x28]
	lsl r5, r5, #8
	lsl r6, r6, #8
	asr r6, r6, #0x10
	asr r5, r5, #0x10
	lsl r6, r6, #0x10
	lsl r5, r5, #0x10
	lsr r6, r6, #0x10
	lsr r5, r5, #0x10
	lsl r6, r6, #0x10
	orr r6, r5
	ldr r5, [pc, #0xac]
	add r1, #8
	str r6, [r5]
	ldr r5, [pc, #0x88]
	ldr r5, [r5]
	add r7, r5, r2
	ldrh r6, [r7, #0x10]
	ldrh r5, [r7, #0xc]
	ldrh r7, [r7, #0xe]
	add r2, r2, #6
	lsl r7, r7, #0x10
	orr r5, r7
	str r5, [r3]
	str r6, [r3]
	cmp r0, #4
	blt lbl_0202cf24
	ldr r0, [pc, #0x90]
	mov r1, #1
	str r1, [r0]
	ldr r1, [r4, #0x20]
	lsr r0, r0, #0xf
	add r0, r1
	str r0, [r4, #0x20]
	mov r0, #0x19
	ldr r1, [r4, #0x28]
	lsl r0, r0, #4
	sub r0, r1, r0
	str r0, [r4, #0x28]
	ldr r0, [r4, #0x30]
	ldr r1, [r4, #0x24]
	lsl r0, r0, #4
	add r0, #0xfa
	sub r0, r1, r0
	str r0, [r4, #0x24]
	ldr r1, [r4, #0x2c]
	cmp r1, #0
	ble lbl_0202cf9c
	mov r0, #3
	lsl r0, r0, #8
	sub r0, r1, r0
	b lbl_0202cf9e
lbl_0202cf9c:
	mov r0, #0
lbl_0202cf9e:
	str r0, [r4, #0x2c]
	ldr r0, [r4, #0x30]
	add r0, r0, #1
	str r0, [r4, #0x30]
	mov r0, #5
	ldr r1, [r4, #0x20]
	lsl r0, r0, #0xe
	cmp r1, r0
	ble lbl_0202cfc2
	mov r1, #0
	mov r0, #1
	str r1, [r4, #0x20]
	lsl r0, r0, #0x10
lbl_0202cfb8:
	str r0, [r4, #0x28]
	str r1, [r4, #0x24]
	lsr r0, r0, #1
	str r0, [r4, #0x2c]
	str r1, [r4, #0x30]
lbl_0202cfc2:
	add sp, #0x3c
	pop {r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x0211C4F0
	dcd 0x020B5D8C
	dcd 0x0210CFE4
	dcd 0x0210CFA8
	dcd 0x04000444
	dcd 0x020EDDEC
	dcd 0x020B638C
	dcd 0x0400046C
	dcd 0x04000500
	dcd 0x0400048C
	dcd 0x00007FFF
	dcd 0x04000480
	dcd 0x04000488
	dcd 0x04000448
}

extern "C" asm void func_0202d000(void)
{
	ldr r1, [r0, #0x20]
	mov r0, #5
	lsl r0, r0, #0xe
	cmp r1, r0
	ble lbl_0202d00e
	mov r0, #1
	bx lr
lbl_0202d00e:
	mov r0, #0
	bx lr
}

extern "C" asm void pad_0202d012(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0202d014(void)
{
	bx lr
}

extern "C" asm void pad_0202d016(void)
{
	dcd 0x00000000
}
