/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02009ba8(void);
    void func_02009d80(void);
    void func_02009ddc(void);
    void func_02009ea0(void);
    void func_02009f08(void);
    void func_02009f0c(void);
    void func_02009f10(void);
    void func_02009f20(void);
    void func_02009f58(void);
    void func_0200a078(void);
    void func_0200a0a4(void);
    void func_0200a0ec(void);
    void func_0200a110(void);
    void func_0200a114(void);
    void func_0200a118(void);
    void _ZN3dss4Fx32C1ERKS0_(void);
    void _ZN6Global10setMapNameEPc(void);
    void _ZN6status11StoryStatus10setChapterEi(void);
    void _ZN6status7g_StoryE(void);
    void __cxa_vec_cleanup(void);
    void data_020bbdd8(void);
    void data_020bbe90(void);
    void data_020bbe98(void);
    void data_020bbeac(void);
    void data_020bbeec(void);
    void data_020bbf08(void);
    void data_020bbf24(void);
    void data_020bbf40(void);
    void data_020c5120(void);
    void data_020c5124(void);
    void data_020c5128(void);
    void data_020c5158(void);
    void data_020c5170(void);
    void data_020c51c0(void);
    void data_020c51c4(void);
    void data_020c5220(void);
    void data_020c5228(void);
    void data_020c5298(void);
    void data_020c52b4(void);
    void data_020c58bc(void);
    void data_020c6170(void);
    void data_020c6da4(void);
    void data_020c6dbc(void);
    void data_020c6e0c(void);
    void data_02116d40(void);
    void data_0211c4f0(void);
    void data_0211e450(void);
    void func_020099f0(void);
    void func_02009b90(void);
    void func_0200b89c(void);
    void func_0200bc38(void);
    void func_0200bcc4(void);
    void func_0200bd30(void);
    void func_0200bd68(void);
    void func_020269e4(void);
    void func_02047728(void);
    void func_02047734(void);
    void func_02047828(void);
    void func_0204787c(void);
    void func_020478e0(void);
    void func_02055980(void);
    void func_02055998(void);
    void func_020573fc(void);
    void func_020576bc(void);
    void func_0205788c(void);
    void func_02057d04(void);
    void func_02057d60(void);
    void func_02057e34(void);
    void func_02057e58(void);
    void func_02057ec0(void);
    void func_02057edc(void);
    void func_02057ee8(void);
    void func_02057f00(void);
    void func_02057f18(void);
    void func_020589a4(void);
    void func_02058c3c(void);
    void func_02064258(void);
    void func_020648b8(void);
    void func_020648cc(void);
    void func_02064928(void);
    void func_02064964(void);
    void func_02064978(void);
    void func_0207f280(void);
    void func_02080e90(void);
    void func_02082dc8(void);
    void func_02083054(void);
    void func_02083078(void);
    void func_020830d4(void);
    void func_02084964(void);
    void func_02084efc(void);
    void func_02084f50(void);
    void func_02084fa4(void);
    void func_020861c4(void);
    void func_02086278(void);
    void func_0208718c(void);
    void func_0208a104(void);
    void g_Global(void);
}

#pragma thumb off

extern "C" asm void func_02009ba8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x10
	mov r4, r0
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
	ldr r0, =data_020c52b4
	bl func_02084efc
	ldr r0, =data_020c58bc
	ldr r1, =data_020c52b4
	bl func_02047728
	ldr r1, =data_020bbdd8
	ldr r0, =data_020c58bc
	ldr r1, [r1, #0xc]
	bl func_0204787c
	ldr r0, =data_020c58bc
	ldr r1, =data_020bbe90
	bl func_020478e0
	ldr r0, =data_020c58bc
	bl func_02047734
	ldr r0, =data_020c5170
	ldr r1, =data_020bbe98
	mov r2, #0
	bl func_02057d60
	ldr r0, =data_020c5170
	ldr r1, =data_020c52b4
	bl func_02057e58
	ldr r0, =data_020c5170
	bl func_02057edc
	ldr r0, =data_020c51c4
	bl func_02082dc8
	ldr r0, =data_020c5228
	bl func_02082dc8
	ldr r1, =data_020c5220
	mov r2, #0x5b0
	strh r2, [r1, #0x7c]
	ldr r0, =data_020c51c0
	ldr r1, =data_020c5158
	mov r2, #0
	bl func_0205788c
	ldr r1, =data_020c5124
	add r0, sp, #0xc
	bl _ZN3dss4Fx32C1ERKS0_
	ldr r0, =data_020c51c4
	add r1, sp, #0xc
	bl func_02083078
	ldr r0, =data_020c5228
	add r1, sp, #0xc
	bl func_02083078
	ldr r2, =data_020c5120
	ldr r0, =data_020c51c4
	ldrh r12, [r2, #0xc]
	ldrh r3, [r2, #0xe]
	add r1, sp, #0
	strh r12, [sp]
	strh r3, [sp, #2]
	ldrh r2, [r2, #0x10]
	strh r2, [sp, #4]
	bl func_02083054
	ldr r1, =data_020c5128
	add r0, sp, #8
	bl _ZN3dss4Fx32C1ERKS0_
	ldr r0, =data_020c5298
	add r1, sp, #8
	bl func_0208718c
	ldr r1, =data_020c5120
	mov r0, #1
	str r0, [r1, #0x16c]
	mov r2, #0
	str r2, [r1, #0x170]
	ldr r0, =data_020bbdd8
	str r2, [r1, #0x174]
	ldrsh r5, [r0]
	ldr r0, =data_020c51c4
	mov r1, r5
	bl func_020830d4
	ldr r0, =data_020c5228
	mov r1, r5
	bl func_020830d4
	bl func_020099f0
	mov r0, r4
	mov r1, #0
	bl func_02009f10
	mov r0, #0
	bl func_02055980
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bd68
	add sp, sp, #0x10
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02009d80(void)
{
	stmdb sp!, {r3, lr}
	bl func_02009b90
	ldr r0, =data_020c5170
	bl func_02057e34
	ldr r0, =data_020c58bc
	bl func_02047828
	ldr r0, =g_Global
	ldr r1, =data_020bbeac
	bl _ZN6Global10setMapNameEPc
	ldr r0, =_ZN6status7g_StoryE
	mov r1, #1
	bl _ZN6status11StoryStatus10setChapterEi
	mov r0, #0
	bl func_02055998
	ldr r0, =data_020c52b4
	bl func_02084f50
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009ddc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_020c51c0
	bl func_020576bc
	ldr r0, [r4, #4]
	cmp r0, #0
	beq lbl_02009e0c
	cmp r0, #1
	beq lbl_02009e28
	cmp r0, #2
	beq lbl_02009e60
	b lbl_02009e80
lbl_02009e0c:
	ldr r0, [r4, #8]
	cmp r0, #0x78
	bne lbl_02009e80
	mov r0, r4
	mov r1, #1
	bl func_02009f10
	b lbl_02009e80
lbl_02009e28:
	ldr r0, =data_02116d40
	bl func_0207f280
	ldr r1, =0x00000CF3
	tst r0, r1
	beq lbl_02009e80
	mov r0, r4
	mov r1, #2
	bl func_02009f10
	mov r0, #0xf
	bl func_02055998
	ldr r0, =g_Global
	mov r1, #0x1e
	bl func_0200bcc4
	b lbl_02009e80
lbl_02009e60:
	ldr r0, [r4, #8]
	cmp r0, #0x1e
	bne lbl_02009e80
	ldr r0, =g_Global
	bl func_0200b89c
	mov r0, r4
	mov r1, #3
	bl func_02009f10
lbl_02009e80:
	ldr r0, [r4, #8]
	add r0, r0, #1
	str r0, [r4, #8]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02009ea0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c52b4
	bl func_02084fa4
	ldr r0, =data_020c5120
	ldr r0, [r0]
	mov r1, r0, lsr #0x1f
	rsb r0, r1, r0, lsl #31
	adds r0, r1, r0, ror #31
	beq lbl_02009ed4
	ldr r0, =data_020c6170
	mov r1, #1
	bl func_02058c3c
	b lbl_02009ee0
lbl_02009ed4:
	ldr r0, =data_020c6170
	mov r1, #0
	bl func_02058c3c
lbl_02009ee0:
	ldr r0, =data_020c6170
	bl func_020589a4
	ldr r0, =data_020c5120
	ldr r1, [r0]
	add r1, r1, #1
	str r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02009f08(void)
{
	bx lr
}

extern "C" asm void func_02009f0c(void)
{
	bx lr
}

extern "C" asm void func_02009f10(void)
{
	str r1, [r0, #4]
	mov r1, #0
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_02009f20(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x2fc
	ldr r3, =func_020573fc
	add r0, r0, #0x800
	mov r1, #6
	mov r2, #0x10
	bl __cxa_vec_cleanup
	add r0, r4, #0x2ec
	add r0, r0, #0x800
	bl func_020573fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02009f58(void)
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
	bl func_020269e4
	bl func_0208a104
	cmp r0, #2
	mov r2, #0
	bne lbl_02009fb8
	ldr r0, =data_020c6dbc
	ldr r1, =data_020bbeec
	bl func_02057d60
	b lbl_02009fc4
lbl_02009fb8:
	ldr r0, =data_020c6dbc
	ldr r1, =data_020bbf08
	bl func_02057d60
lbl_02009fc4:
	ldr r0, =data_020c6dbc
	bl func_02057ee8
	ldr r0, =data_020c6dbc
	mov r1, #1
	bl func_02057f18
	ldr r0, =data_020c6dbc
	mov r1, #0x1f
	bl func_02057f00
	bl func_0208a104
	cmp r0, #2
	mov r2, #0
	bne lbl_0200a004
	ldr r0, =data_020c6e0c
	ldr r1, =data_020bbf24
	bl func_02057d60
	b lbl_0200a010
lbl_0200a004:
	ldr r0, =data_020c6e0c
	ldr r1, =data_020bbf40
	bl func_02057d60
lbl_0200a010:
	ldr r0, =data_020c6e0c
	bl func_02057edc
	ldr r0, =data_020c6e0c
	mov r1, #1
	bl func_02057f18
	ldr r0, =data_020c6e0c
	mov r1, #0x1f
	bl func_02057f00
	ldr r2, =data_020c6da4
	mov r3, #0
	str r3, [r2, #4]
	ldr r0, =g_Global
	mov r1, #0x3c
	str r3, [r2, #8]
	bl func_0200bd30
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0200a078(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c6dbc
	bl func_02057e34
	ldr r0, =data_020c6e0c
	bl func_02057e34
	ldr r0, =data_0211e450
	bl func_02086278
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0200a0a4(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020c6da4
	ldr r1, [r0, #8]
	add r1, r1, #1
	str r1, [r0, #8]
	ldr r0, [r0, #4]
	cmp r0, #0
	ldmneia sp!, {r3, pc}
	cmp r1, #0xf0
	ldmleia sp!, {r3, pc}
	ldr r0, =g_Global
	bl func_0200bc38
	ldr r0, =data_020c6da4
	mov r1, #1
	str r1, [r0, #4]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0200a0ec(void)
{
	stmdb sp!, {r3, lr}
	bl func_02084964
	ldr r0, =data_020c6dbc
	bl func_02057ec0
	ldr r0, =data_020c6e0c
	bl func_02057ec0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0200a110(void)
{
	bx lr
}

extern "C" asm void func_0200a114(void)
{
	bx lr
}

extern "C" asm void func_0200a118(void)
{
	ldr r12, =__cxa_vec_cleanup
	ldr r0, =data_020c6dbc
	ldr r3, =func_02057d04
	mov r1, #2
	mov r2, #0x50
	bx r12
}

#pragma thumb on
