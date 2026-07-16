/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_020888e8(void);
    void func_0208895c(void);
    void func_02088988(void);
    void func_020889fc(void);
    void func_02088a28(void);
    void func_02088a9c(void);
    void func_02088b10(void);
    void func_02088b3c(void);
    void func_02088b68(void);
    void func_02088bdc(void);
    void func_02088c50(void);
    void func_02088c7c(void);
    void func_02088ca8(void);
    void func_02088cf4(void);
    void func_02088d40(void);
    void func_02088dbc(void);
    void func_02088e90(void);
    void func_02088f20(void);
    void func_02088f98(void);
    void func_0208908c(void);
    void func_02089168(void);
    void func_02089214(void);
    void func_02089250(void);
    void func_020892cc(void);
    void func_0208934c(void);
    void func_020893e0(void);
    void func_02089414(void);
    void func_02089470(void);
    void func_02089558(void);
    void func_02089568(void);
    void func_02089578(void);
    void func_0208957c(void);
    void func_02089580(void);
    void func_02089590(void);
    void func_020895e8(void);
    void func_020895fc(void);
    void func_0208960c(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void data_020c4988(void);
    void data_020c499c(void);
    void data_020c49a0(void);
    void data_02120548(void);
    void data_02120f90(void);
    void data_02120f94(void);
    void data_02120f9c(void);
    void data_02120fa8(void);
    void data_02120fb4(void);
    void data_02120fb8(void);
    void data_02120fbc(void);
    void data_02120fc0(void);
    void func_020637f0(void);
    void func_0206382c(void);
    void func_02068684(void);
    void func_020686ac(void);
    void func_02079d78(void);
    void func_0207bdb4(void);
    void func_0207c0b8(void);
    void func_0207c1c4(void);
    void func_0207c1f4(void);
    void func_020870fc(void);
    void func_0208718c(void);
    void func_020871bc(void);
    void func_020871f4(void);
    void func_0208722c(void);
    void func_02087254(void);
    void func_02087268(void);
    void func_020872a0(void);
    void func_020872d8(void);
    void func_020872fc(void);
    void func_02087320(void);
    void func_02087348(void);
    void func_02087370(void);
    void func_0208738c(void);
    void func_020873a8(void);
    void func_02087438(void);
    void func_02088308(void);
    void func_020883d8(void);
}

#pragma thumb off

extern "C" asm void func_020888e8(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_020871bc
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	add r2, r4, #4
	bl func_020871bc
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	add r2, r4, #8
	add r0, sp, #0
	bl func_020871bc
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0208895c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_020871f4
	add r0, r5, #4
	add r1, r4, #4
	bl func_020871f4
	add r0, r5, #8
	add r1, r4, #8
	bl func_020871f4
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088988(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	add r2, r4, #8
	add r0, sp, #0
	bl func_0208722c
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_020889fc(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_02087254
	add r0, r5, #4
	add r1, r4, #4
	bl func_02087254
	add r0, r5, #8
	add r1, r4, #8
	bl func_02087254
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088a28(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_020872a0
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	mov r2, r4
	bl func_020872a0
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	mov r2, r4
	add r0, sp, #0
	bl func_020872a0
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088a9c(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_02087268
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	mov r2, r4
	bl func_02087268
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	mov r2, r4
	add r0, sp, #0
	bl func_02087268
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088b10(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_020872fc
	mov r1, r4
	add r0, r5, #4
	bl func_020872fc
	mov r1, r4
	add r0, r5, #8
	bl func_020872fc
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088b3c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_020872d8
	mov r1, r4
	add r0, r5, #4
	bl func_020872d8
	mov r1, r4
	add r0, r5, #8
	bl func_020872d8
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088b68(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_02087348
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	mov r2, r4
	bl func_02087348
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	mov r2, r4
	add r0, sp, #0
	bl func_02087348
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088bdc(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0xc
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_02087320
	add r1, sp, #8
	mov r0, r6
	bl func_0208718c
	add r0, sp, #4
	add r1, r5, #4
	mov r2, r4
	bl func_02087320
	add r0, r6, #4
	add r1, sp, #4
	bl func_0208718c
	add r1, r5, #8
	mov r2, r4
	add r0, sp, #0
	bl func_02087320
	add r0, r6, #8
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0xc
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088c50(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_0208738c
	mov r1, r4
	add r0, r5, #4
	bl func_0208738c
	mov r1, r4
	add r0, r5, #8
	bl func_0208738c
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088c7c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_02087370
	mov r1, r4
	add r0, r5, #4
	bl func_02087370
	mov r1, r4
	add r0, r5, #8
	bl func_02087370
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088ca8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_020873a8
	cmp r0, #0
	beq lbl_02088cec
	add r0, r5, #4
	add r1, r4, #4
	bl func_020873a8
	cmp r0, #0
	beq lbl_02088cec
	add r0, r5, #8
	add r1, r4, #8
	bl func_020873a8
	cmp r0, #0
	movne r0, #1
	ldmneia sp!, {r3, r4, r5, pc}
lbl_02088cec:
	mov r0, #0
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088cf4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	bl func_020873a8
	cmp r0, #0
	beq lbl_02088d38
	add r0, r5, #4
	add r1, r4, #4
	bl func_020873a8
	cmp r0, #0
	beq lbl_02088d38
	add r0, r5, #8
	add r1, r4, #8
	bl func_020873a8
	cmp r0, #0
	movne r0, #0
	ldmneia sp!, {r3, r4, r5, pc}
lbl_02088d38:
	mov r0, #1
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088d40(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x14
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl func_020870fc
	add r0, sp, #8
	mov r1, r5
	mov r2, r4
	bl func_020872a0
	add r0, sp, #4
	add r1, r5, #4
	add r2, r4, #4
	bl func_020872a0
	add r0, sp, #0xc
	add r1, sp, #8
	add r2, sp, #4
	bl func_020871bc
	add r1, r5, #8
	add r2, r4, #8
	add r0, sp, #0
	bl func_020872a0
	add r0, sp, #0x10
	add r1, sp, #0xc
	add r2, sp, #0
	bl func_020871bc
	mov r0, r6
	add r1, sp, #0x10
	bl func_0208718c
	add sp, sp, #0x14
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088dbc(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x24
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x1c
	add r1, r5, #4
	add r2, r4, #8
	bl func_020872a0
	add r0, sp, #0x18
	add r1, r5, #8
	add r2, r4, #4
	bl func_020872a0
	add r0, sp, #0x20
	add r1, sp, #0x1c
	add r2, sp, #0x18
	bl func_0208722c
	mov r0, r6
	add r1, sp, #0x20
	bl func_0208718c
	add r0, sp, #0x10
	add r1, r5, #8
	mov r2, r4
	bl func_020872a0
	add r0, sp, #0xc
	mov r1, r5
	add r2, r4, #8
	bl func_020872a0
	add r0, sp, #0x14
	add r1, sp, #0x10
	add r2, sp, #0xc
	bl func_0208722c
	add r0, r6, #4
	add r1, sp, #0x14
	bl func_0208718c
	add r0, sp, #4
	mov r1, r5
	add r2, r4, #4
	bl func_020872a0
	add r1, r5, #4
	mov r2, r4
	add r0, sp, #0
	bl func_020872a0
	add r0, sp, #8
	add r1, sp, #4
	add r2, sp, #0
	bl func_0208722c
	add r0, r6, #8
	add r1, sp, #8
	bl func_0208718c
	add sp, sp, #0x24
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02088e90(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	sub sp, sp, #0x18
	mov r4, r1
	mov r5, r0
	bl func_020870fc
	add r0, sp, #0xc
	mov r1, r4
	mov r2, r4
	bl func_020872a0
	add r1, r4, #4
	add r0, sp, #8
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0x10
	add r1, sp, #0xc
	add r2, sp, #8
	bl func_020871bc
	add r1, r4, #8
	add r0, sp, #4
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0x14
	add r1, sp, #0x10
	add r2, sp, #4
	bl func_020871bc
	mov r0, r5
	add r1, sp, #0x14
	bl func_0208718c
	add r0, sp, #0
	mov r1, r5
	bl func_02087438
	mov r0, r5
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0x18
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02088f20(void)
{
	stmdb sp!, {r4, r5, lr}
	sub sp, sp, #0x14
	mov r4, r1
	mov r5, r0
	bl func_020870fc
	add r0, sp, #8
	mov r1, r4
	mov r2, r4
	bl func_020872a0
	add r1, r4, #4
	add r0, sp, #4
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0xc
	add r1, sp, #8
	add r2, sp, #4
	bl func_020871bc
	add r1, r4, #8
	add r0, sp, #0
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0x10
	add r1, sp, #0xc
	add r2, sp, #0
	bl func_020871bc
	mov r0, r5
	add r1, sp, #0x10
	bl func_0208718c
	add sp, sp, #0x14
	ldmia sp!, {r4, r5, pc}
}

extern "C" asm void func_02088f98(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x30
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl func_020870fc
	add r0, sp, #0x20
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r0, sp, #0x1c
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r0, sp, #0x24
	add r1, sp, #0x20
	add r2, sp, #0x1c
	bl func_020872a0
	add r0, sp, #0x14
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, sp, #0x10
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, sp, #0x18
	add r1, sp, #0x14
	add r2, sp, #0x10
	bl func_020872a0
	add r0, sp, #0x28
	add r1, sp, #0x24
	add r2, sp, #0x18
	bl func_020871bc
	add r0, sp, #8
	add r1, r5, #8
	add r2, r4, #8
	bl func_0208722c
	add r1, r5, #8
	add r2, r4, #8
	add r0, sp, #4
	bl func_0208722c
	add r0, sp, #0xc
	add r1, sp, #8
	add r2, sp, #4
	bl func_020872a0
	add r0, sp, #0x2c
	add r1, sp, #0x28
	add r2, sp, #0xc
	bl func_020871bc
	mov r0, r6
	add r1, sp, #0x2c
	bl func_0208718c
	add r0, sp, #0
	mov r1, r6
	bl func_02087438
	mov r0, r6
	add r1, sp, #0
	bl func_0208718c
	add sp, sp, #0x30
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208908c(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x2c
	mov r5, r1
	mov r4, r2
	mov r6, r0
	bl func_020870fc
	add r0, sp, #0x1c
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r0, sp, #0x18
	mov r1, r5
	mov r2, r4
	bl func_0208722c
	add r0, sp, #0x20
	add r1, sp, #0x1c
	add r2, sp, #0x18
	bl func_020872a0
	add r0, sp, #0x10
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, sp, #0xc
	add r1, r5, #4
	add r2, r4, #4
	bl func_0208722c
	add r0, sp, #0x14
	add r1, sp, #0x10
	add r2, sp, #0xc
	bl func_020872a0
	add r0, sp, #0x24
	add r1, sp, #0x20
	add r2, sp, #0x14
	bl func_020871bc
	add r0, sp, #4
	add r1, r5, #8
	add r2, r4, #8
	bl func_0208722c
	add r1, r5, #8
	add r2, r4, #8
	add r0, sp, #0
	bl func_0208722c
	add r0, sp, #8
	add r1, sp, #4
	add r2, sp, #0
	bl func_020872a0
	add r0, sp, #0x28
	add r1, sp, #0x24
	add r2, sp, #8
	bl func_020871bc
	mov r0, r6
	add r1, sp, #0x28
	bl func_0208718c
	add sp, sp, #0x2c
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_02089168(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #0x1c
	mov r4, r0
	add r0, sp, #0x18
	bl func_020870fc
	add r0, sp, #0xc
	mov r1, r4
	mov r2, r4
	bl func_020872a0
	add r1, r4, #4
	add r0, sp, #8
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0x10
	add r1, sp, #0xc
	add r2, sp, #8
	bl func_020871bc
	add r1, r4, #8
	add r0, sp, #4
	mov r2, r1
	bl func_020872a0
	add r0, sp, #0x14
	add r1, sp, #0x10
	add r2, sp, #4
	bl func_020871bc
	add r0, sp, #0x18
	add r1, sp, #0x14
	bl func_0208718c
	add r0, sp, #0
	add r1, sp, #0x18
	bl func_02087438
	add r0, sp, #0x18
	add r1, sp, #0
	bl func_0208718c
	ldr r0, [sp, #0x18]
	cmp r0, #0
	addeq sp, sp, #0x1c
	ldmeqia sp!, {r3, r4, pc}
	add r1, sp, #0x18
	mov r0, r4
	bl func_02088c50
	add sp, sp, #0x1c
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02089214(void)
{
	mov r3, #0
	mov r1, r0
	mov r2, r3
lbl_02089220:
	str r2, [r1]
	str r2, [r1, #4]
	str r2, [r1, #8]
	add r3, r3, #1
	str r2, [r1, #0xc]
	cmp r3, #0x64
	add r1, r1, #0x10
	blt lbl_02089220
	mov r1, #1
	str r1, [r0, #0x640]
	str r2, [r0, #0x644]
	bx lr
}

extern "C" asm void func_02089250(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	ldr r7, [sp, #0x1c]
	mov r6, r0
	ldr r0, [r7]
	mov r5, r2
	mov r4, r3
	bl func_02068684
	ldr r0, [r7]
	mov r1, #4
	bl func_020686ac
	ldr r0, [r6, #0x640]
	cmp r0, #0
	ldmeqia sp!, {r3, r4, r5, r6, r7, pc}
	mov r1, r6
	mov r2, #0
lbl_0208928c:
	ldr r0, [r1]
	cmp r0, #0
	bne lbl_020892b0
	mov r0, #1
	stmia r1, {r0, r5}
	ldr r0, [sp, #0x18]
	str r4, [r1, #8]
	str r0, [r1, #0xc]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_020892b0:
	add r2, r2, #1
	cmp r2, #0x64
	add r1, r1, #0x10
	blt lbl_0208928c
	mov r0, r6
	bl func_0208934c
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_020892cc(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	ldr r6, [sp, #0x10]
	mov r5, r0
	ldr r0, [r6]
	mov r4, r2
	bl func_02068684
	ldr r0, [r6]
	mov r1, #4
	bl func_020686ac
	ldr r0, [r5, #0x640]
	cmp r0, #0
	ldmeqia sp!, {r4, r5, r6, pc}
	mov r1, r5
	mov r2, #0
lbl_02089304:
	ldr r0, [r1]
	cmp r0, #1
	ldreq r0, [r1, #4]
	cmpeq r0, r4
	bne lbl_02089330
	mov r0, #0
	str r0, [r1]
	str r0, [r1, #4]
	str r0, [r1, #8]
	str r0, [r1, #0xc]
	ldmia sp!, {r4, r5, r6, pc}
lbl_02089330:
	add r2, r2, #1
	cmp r2, #0x64
	add r1, r1, #0x10
	blt lbl_02089304
	mov r0, r5
	bl func_0208934c
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0208934c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	sub sp, sp, #0x108
	ldr r7, =data_02120548
	mov r4, #0
	ldr r8, =data_020c4988
	mov r5, r0
	strb r4, [r7]
	add r10, sp, #8
	mov r9, #0x100
	mov r6, #0x400
lbl_02089374:
	ldr r0, [r5]
	cmp r0, #0
	beq lbl_020893bc
	cmp r0, #1
	bne lbl_020893bc
	ldr r1, [r5, #8]
	mov r0, r10
	str r1, [sp]
	ldr r2, [r5, #0xc]
	mov r1, r9
	str r2, [sp, #4]
	ldr r3, [r5, #4]
	mov r2, r8
	bl func_02088308
	mov r0, r7
	mov r1, r6
	mov r2, r10
	bl func_020883d8
lbl_020893bc:
	add r4, r4, #1
	cmp r4, #0x64
	add r5, r5, #0x10
	blt lbl_02089374
	ldr r0, =data_02120548
	add sp, sp, #0x108
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_020893e0(void)
{
	ldr r1, [r0, #0x640]
	cmp r1, #0
	bxeq lr
	mov r3, #0
	mov r1, #2
lbl_020893f4:
	ldr r2, [r0]
	add r3, r3, #1
	cmp r2, #1
	streq r1, [r0]
	cmp r3, #0x64
	add r0, r0, #0x10
	blt lbl_020893f4
	bx lr
}

extern "C" asm void func_02089414(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_02120f90
	mov r0, #1
	ldr r2, =func_02089578
	str r0, [r1]
	ldr r0, =data_02120f94
	str r2, [r1, #0xc]
	ldr r2, =func_0208957c
	str r0, [r1, #0x10]
	ldr r0, =data_02120f9c
	str r2, [r1, #0x18]
	mov r2, #0
	str r2, [r1, #0x1c]
	bl func_0207c1c4
	ldr r0, =data_02120fa8
	bl func_0207c1f4
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02089470(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_02120f90
	ldr r0, [r3]
	cmp r0, #1
	bne lbl_020894b4
	ldr r0, =0x027FFFA8
	ldrh r0, [r0]
	and r0, r0, #0x8000
	mov r0, r0, asr #0xf
	cmp r0, #1
	bne lbl_020894b4
	mov r1, #0
	str r1, [r3, #8]
	mov r2, r1
	mov r0, #0xc
	str r1, [r3, #4]
	bl func_0207bdb4
lbl_020894b4:
	ldr r0, =data_02120f90
	ldr r0, [r0, #8]
	cmp r0, #0
	ldmeqia sp!, {r3, pc}
	cmp r0, #1
	bne lbl_02089508
	bl func_02079d78
	bl func_020637f0
	ldr r1, =0x04001000
	ldr r0, [r1]
	bic r0, r0, #0x10000
	str r0, [r1]
	bl func_02079d78
	mov r0, #0
	bl func_0207c0b8
	cmp r0, #0
	ldmeqia sp!, {r3, pc}
	ldr r0, =data_02120f90
	mov r1, #0
	str r1, [r0, #8]
	ldmia sp!, {r3, pc}
lbl_02089508:
	cmp r0, #2
	ldmneia sp!, {r3, pc}
	mov r0, #1
	bl func_0207c0b8
	cmp r0, #0
	ldmeqia sp!, {r3, pc}
	bl func_02079d78
	bl func_0206382c
	ldr r1, =0x04001000
	ldr r0, [r1]
	orr r0, r0, #0x10000
	str r0, [r1]
	bl func_02079d78
	ldr r0, =data_02120f90
	mov r1, #0
	str r1, [r0, #8]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02089558(void)
{
	ldr r1, =data_02120f90
	str r0, [r1]
	bx lr
}

extern "C" asm void func_02089568(void)
{
	ldr r0, =data_02120f90
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_02089578(void)
{
	bx lr
}

extern "C" asm void func_0208957c(void)
{
	bx lr
}

extern "C" asm void func_02089580(void)
{
	ldr r1, =data_020c499c
	str r0, [r1]
	bx lr
}

extern "C" asm void func_02089590(void)
{
	stmdb sp!, {r3, lr}
	ldr r3, =data_02120fb4
	ldr r12, [r3]
	cmp r12, #0x10
	bge lbl_020895c4
	mov r3, #0xc
	mul lr, r12, r3
	ldr r12, =data_02120fb8
	ldr r3, =data_02120fbc
	str r0, [r12, lr]
	ldr r0, =data_02120fc0
	str r1, [r3, lr]
	str r2, [r0, lr]
lbl_020895c4:
	ldr r0, =data_02120fb4
	ldr r1, [r0]
	add r1, r1, #1
	str r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020895e8(void)
{
	ldr r2, =data_02120fb8
	mov r1, #0xc
	mla r0, r1, r0, r2
	bx lr
}

extern "C" asm void func_020895fc(void)
{
	ldr r0, =data_02120fb4
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_0208960c(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x48
	ldr r4, =0x00000000
	mov r6, r0
	mov r5, r1
	mov r4, lr
	ldr r2, =data_020c499c
	ldr r2, [r2]
	cmp r2, #0
	beq lbl_02089664
	mov r2, r4
	bl func_02089590
	str r5, [sp]
	ldr r2, =data_020c49a0
	add r0, sp, #8
	mov r3, r6
	mov r1, #0x40
	str r4, [sp, #4]
	bl func_02088308
	ldr r0, =data_020c499c
	ldr r0, [r0]
	cmp r0, #1
lbl_02089664:
	add sp, sp, #0x48
	ldmia sp!, {r4, r5, r6, pc}
}

#pragma thumb on
