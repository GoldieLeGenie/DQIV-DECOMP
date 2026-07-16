/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0201d974(void);
    void func_0201d9a0(void);
    void func_0201d9b4(void);
    void func_0201d9d4(void);
    void func_0201da1c(void);
    void func_0201dac8(void);
    void func_0201e048(void);
    void func_0201e0b0(void);
    void func_0201e110(void);
    void func_0201e144(void);
    void func_0201e178(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN3dss11Fx32Vector3aSERKS0_(void);
    void _ZN3dss4Fx32C1ERKS0_(void);
    void _ZN6status14HaveStatusInfo13getClampValueEiii(void);
    void data_020bdc8c(void);
    void data_020bdc90(void);
    void data_020bdca0(void);
    void data_020d103c(void);
    void func_020476f0(void);
    void func_020573e0(void);
    void func_020573fc(void);
    void func_02057474(void);
    void func_020574bc(void);
    void func_0208718c(void);
    void func_02087198(void);
    void func_020871bc(void);
    void func_02087268(void);
    void func_02087320(void);
    void func_020873d8(void);
    void func_02087408(void);
    void func_02088280(void);
    void func_02088308(void);
    void func_020885f8(void);
}

#pragma thumb off

extern "C" asm void func_0201d974(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020573e0
	add r0, r4, #0x10
	bl _ZN3dss11Fx32Vector3C1Ev
	mov r1, #0
	strh r1, [r4, #0x1c]
	strh r1, [r4, #0x1e]
	mov r0, r4
	strh r1, [r4, #0x20]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201d9a0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020573fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201d9b4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020574bc
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	mov r0, r4
	bl func_02057474
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201d9d4(void)
{
	stmdb sp!, {r0, r1, r2, r3}
	stmdb sp!, {r3, lr}
	mov r3, #0
	strh r3, [r0, #0x2c]
	ldrsh r2, [sp, #0x10]
	strh r3, [r0, #0x2e]
	mov r3, #1
	str r3, [r0, #0x28]
	ldrsh r3, [sp, #0x12]
	strh r2, [r0, #0x1c]
	ldrsh r2, [sp, #0x14]
	strh r3, [r0, #0x1e]
	strh r2, [r0, #0x20]
	add r0, r0, #0x10
	bl _ZN3dss11Fx32Vector3aSERKS0_
	ldmia sp!, {r3, lr}
	add sp, sp, #0x10
	bx lr
}

extern "C" asm void func_0201da1c(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #4
	mov r4, r0
	mov r6, r1
	mov r5, r2
	ldr r3, =data_020bdc90
	ldr r2, =data_020bdca0
	add r0, r4, #0x34
	mov r1, #0x80
	str r6, [sp]
	bl func_02088308
	mov r0, r4
	bl func_020574bc
	cmp r0, #0
	beq lbl_0201da60
	mov r0, r4
	bl func_02057474
lbl_0201da60:
	mov r0, r6
	bl func_02088280
	cmp r0, #0
	bne lbl_0201da88
	mov r0, #1
	str r0, [r4, #0x28]
	mov r0, #0
	add sp, sp, #4
	str r0, [r4, #0x24]
	ldmia sp!, {r3, r4, r5, r6, pc}
lbl_0201da88:
	mov r0, r4
	ldr r12, [r0]
	mov r2, r5
	ldr r12, [r12]
	add r1, r4, #0x34
	mov r3, #1
	blx r12
	mov r0, r4
	bl func_020574bc
	ldr r1, [r0], #4
	str r1, [r4, #0x24]
	str r0, [r4, #0x30]
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0201dac8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #0x128
	ldr r3, =data_020d103c
	mov r5, r0
	ldr r6, [r3, #4]
	mov r4, r1
	mov r7, r2
	tst r6, #1
	bne lbl_0201db04
	ldr r0, =data_020bdc8c
	orr r1, r6, #1
	ldrsh r0, [r0]
	rsb r0, r0, #0
	strh r0, [r3]
	str r1, [r3, #4]
lbl_0201db04:
	ldrsh r0, [r5, #0x2e]
	ldr r1, [r5, #0xb4]
	cmp r1, r0
	ble lbl_0201db50
	mov r0, r4
	add r1, r5, #0x10
	bl _ZN3dss11Fx32Vector3aSERKS0_
	ldrsh r1, [r5, #0x1c]
	add sp, sp, #0x128
	mov r0, #1
	strh r1, [r7]
	ldrsh r1, [r5, #0x1e]
	strh r1, [r7, #2]
	ldrsh r1, [r5, #0x20]
	strh r1, [r7, #4]
	ldrsh r1, [r5, #0x2e]
	add r1, r1, #1
	strh r1, [r5, #0x2e]
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
lbl_0201db50:
	ldr r1, [r5, #0x28]
	ldr r0, [r5, #0x24]
	cmp r1, r0
	addcs sp, sp, #0x128
	movcs r0, #0
	ldmcsia sp!, {r3, r4, r5, r6, r7, pc}
	add r0, sp, #0x11c
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x110
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x104
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0xd4
	bl func_020885f8
	add r0, sp, #0xc8
	bl _ZN3dss11Fx32Vector3C1Ev
	add r0, sp, #0x98
	bl func_020885f8
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	ldrsh r6, [r5, #0x2c]
	add r0, sp, #0x8c
	add r1, r1, #0x1c
	mov r2, r6
	bl func_02087268
	ldr r2, [r5, #0x28]
	ldr r3, [r5, #0x30]
	mov r1, #0x4c
	sub r2, r2, #1
	mla r1, r2, r1, r3
	add r0, sp, #0x90
	add r1, r1, #0x40
	add r2, sp, #0x8c
	bl func_020871bc
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	add r0, sp, #0x7c
	add r1, r1, #0x28
	mov r2, r6
	bl func_02087268
	mov r2, r6
	add r0, sp, #0x80
	add r1, sp, #0x7c
	bl func_02087268
	add r0, sp, #0x84
	add r1, sp, #0x80
	mov r2, #3
	bl func_02087268
	add r0, sp, #0x88
	add r1, sp, #0x84
	mov r2, #2
	bl func_02087320
	add r0, sp, #0x94
	add r1, sp, #0x90
	add r2, sp, #0x88
	bl func_020871bc
	add r0, sp, #0x11c
	add r1, sp, #0x94
	bl func_0208718c
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	ldrsh r6, [r5, #0x2c]
	add r0, sp, #0x70
	add r1, r1, #0x20
	mov r2, r6
	bl func_02087268
	ldr r0, [r5, #0x28]
	ldr r2, [r5, #0x30]
	sub r1, r0, #1
	mov r0, #0x4c
	mla r3, r1, r0, r2
	add r0, sp, #0x74
	add r2, sp, #0x70
	add r1, r3, #0x44
	bl func_020871bc
	ldr r2, [r5, #0x30]
	ldr r1, [r5, #0x28]
	mov r0, #0x4c
	mla r3, r1, r0, r2
	add r0, sp, #0x60
	mov r2, r6
	add r1, r3, #0x2c
	bl func_02087268
	add r0, sp, #0x64
	add r1, sp, #0x60
	mov r2, r6
	bl func_02087268
	add r0, sp, #0x68
	add r1, sp, #0x64
	mov r2, #3
	bl func_02087268
	add r0, sp, #0x6c
	add r1, sp, #0x68
	mov r2, #2
	bl func_02087320
	add r0, sp, #0x78
	add r1, sp, #0x74
	add r2, sp, #0x6c
	bl func_020871bc
	add r0, sp, #0x120
	add r1, sp, #0x78
	bl func_0208718c
	ldrsh r2, [r5, #0x1c]
	ldr r0, [sp, #0x11c]
	ldr r1, =data_020d103c
	add r0, r2, r0, asr #12
	strh r0, [r7]
	ldrsh r3, [r5, #0x1e]
	ldr r2, [sp, #0x120]
	ldr r0, =data_020bdc8c
	add r2, r3, r2, asr #12
	strh r2, [r7, #2]
	ldrsh r2, [r0]
	ldrsh r1, [r1]
	ldrsh r0, [r7]
	bl _ZN6status14HaveStatusInfo13getClampValueEiii
	strh r0, [r7]
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	ldrsh r6, [r5, #0x2c]
	add r0, sp, #0x54
	add r1, r1, #4
	mov r2, r6
	bl func_02087268
	ldr r2, [r5, #0x28]
	ldr r3, [r5, #0x30]
	mov r1, #0x4c
	sub r2, r2, #1
	mla r1, r2, r1, r3
	add r0, sp, #0x58
	add r1, r1, #0x34
	add r2, sp, #0x54
	bl func_020871bc
	ldr r2, [r5, #0x30]
	ldr r1, [r5, #0x28]
	mov r0, #0x4c
	mla r3, r1, r0, r2
	add r0, sp, #0x44
	mov r2, r6
	add r1, r3, #0x10
	bl func_02087268
	add r0, sp, #0x48
	add r1, sp, #0x44
	mov r2, r6
	bl func_02087268
	add r0, sp, #0x4c
	add r1, sp, #0x48
	mov r2, #3
	bl func_02087268
	add r0, sp, #0x50
	add r1, sp, #0x4c
	mov r2, #2
	bl func_02087320
	add r0, sp, #0x5c
	add r1, sp, #0x58
	add r2, sp, #0x50
	bl func_020871bc
	add r0, sp, #0x110
	add r1, sp, #0x5c
	bl func_0208718c
	ldr r3, [sp, #0x110]
	add r0, sp, #0x40
	mov r2, r3, asr #0xb
	add r2, r3, r2, lsr #20
	add r1, r5, #0x10
	mov r2, r2, asr #0xc
	bl func_02087198
	add r0, sp, #0x110
	add r1, sp, #0x40
	bl func_0208718c
	mov r0, r4
	add r1, sp, #0x110
	bl func_0208718c
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	ldrsh r6, [r5, #0x2c]
	add r0, sp, #0x34
	add r1, r1, #0xc
	mov r2, r6
	bl func_02087268
	ldr r2, [r5, #0x28]
	ldr r3, [r5, #0x30]
	mov r1, #0x4c
	sub r2, r2, #1
	mla r1, r2, r1, r3
	add r0, sp, #0x38
	add r1, r1, #0x3c
	add r2, sp, #0x34
	bl func_020871bc
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	add r0, sp, #0x24
	add r1, r1, #0x18
	mov r2, r6
	bl func_02087268
	mov r2, r6
	add r0, sp, #0x28
	add r1, sp, #0x24
	bl func_02087268
	add r0, sp, #0x2c
	add r1, sp, #0x28
	mov r2, #3
	bl func_02087268
	add r0, sp, #0x30
	add r1, sp, #0x2c
	mov r2, #2
	bl func_02087320
	add r0, sp, #0x3c
	add r1, sp, #0x38
	add r2, sp, #0x30
	bl func_020871bc
	add r0, sp, #0x118
	add r1, sp, #0x3c
	bl func_0208718c
	ldr r3, [sp, #0x118]
	add r0, sp, #0x20
	mov r2, r3, asr #0xb
	add r2, r3, r2, lsr #20
	add r1, r5, #0x18
	mov r2, r2, asr #0xc
	bl func_02087198
	add r0, sp, #0x118
	add r1, sp, #0x20
	bl func_0208718c
	add r0, r4, #8
	add r1, sp, #0x118
	bl func_0208718c
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	ldrsh r6, [r5, #0x2c]
	add r0, sp, #0x14
	add r1, r1, #8
	mov r2, r6
	bl func_02087268
	ldr r2, [r5, #0x28]
	ldr r3, [r5, #0x30]
	mov r1, #0x4c
	sub r2, r2, #1
	mla r1, r2, r1, r3
	add r0, sp, #0x18
	add r1, r1, #0x38
	add r2, sp, #0x14
	bl func_020871bc
	ldr r3, [r5, #0x30]
	ldr r2, [r5, #0x28]
	mov r1, #0x4c
	mla r1, r2, r1, r3
	add r0, sp, #4
	add r1, r1, #0x14
	mov r2, r6
	bl func_02087268
	mov r2, r6
	add r0, sp, #8
	add r1, sp, #4
	bl func_02087268
	add r0, sp, #0xc
	add r1, sp, #8
	mov r2, #3
	bl func_02087268
	add r0, sp, #0x10
	add r1, sp, #0xc
	mov r2, #2
	bl func_02087320
	add r0, sp, #0x1c
	add r1, sp, #0x18
	add r2, sp, #0x10
	bl func_020871bc
	add r0, sp, #0x114
	add r1, sp, #0x1c
	bl func_0208718c
	ldr r2, [sp, #0x114]
	add r0, sp, #0
	mov r1, r2, asr #0xb
	add r2, r2, r1, lsr #20
	add r1, r5, #0x14
	mov r2, r2, asr #0xc
	bl func_02087198
	add r0, sp, #0x114
	add r1, sp, #0
	bl func_0208718c
	add r1, sp, #0x114
	add r0, r4, #4
	bl func_0208718c
	ldr r1, [r5, #0x28]
	mov r0, #0x4c
	mul r0, r1, r0
	ldr r1, [r5, #0x30]
	ldrsh r2, [r5, #0x2c]
	ldr r0, [r1, r0]
	cmp r2, r0
	blt lbl_0201e028
	mov r0, #0
	strh r0, [r5, #0x2c]
	ldr r0, [r5, #0x28]
	add r0, r0, #1
	str r0, [r5, #0x28]
lbl_0201e028:
	ldrsh r1, [r5, #0x2c]
	mov r0, #1
	add r1, r1, #1
	strh r1, [r5, #0x2c]
	add sp, sp, #0x128
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0201e048(void)
{
	ldr r3, [r0, #0x30]
	ldr r3, [r3, #0x40]
	mov r3, r3, asr #0xc
	strh r3, [r2]
	ldr r3, [r0, #0x30]
	ldr r3, [r3, #0x44]
	mov r3, r3, asr #0xc
	strh r3, [r2, #2]
	ldr r3, [r0, #0x30]
	ldr r3, [r3, #0x48]
	mov r3, r3, asr #0xc
	strh r3, [r2, #4]
	ldr r2, [r0, #0x30]
	ldr r2, [r2, #0x34]
	mov r2, r2, asr #0xc
	str r2, [r1]
	ldr r2, [r0, #0x30]
	ldr r2, [r2, #0x38]
	mov r2, r2, asr #0xc
	str r2, [r1, #4]
	ldr r2, [r0, #0x30]
	mov r0, #1
	ldr r2, [r2, #0x3c]
	mov r2, r2, asr #0xc
	str r2, [r1, #8]
	bx lr
}

extern "C" asm void func_0201e0b0(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #0x10
	mov r6, r0
	mov r5, r1
	add r0, sp, #0
	mov r1, r3
	mov r4, r2
	bl _ZN3dss4Fx32C1ERKS0_
	add r0, sp, #4
	mov r1, r4
	bl _ZN3dss4Fx32C1ERKS0_
	add r0, sp, #8
	mov r1, r5
	bl _ZN3dss4Fx32C1ERKS0_
	add r0, sp, #0xc
	add r1, sp, #8
	add r2, sp, #4
	bl func_0201e110
	mov r0, r6
	add r1, sp, #0xc
	add r2, sp, #0
	bl func_0201e144
	add sp, sp, #0x10
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0201e110(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r4, r2
	mov r6, r0
	mov r0, r5
	mov r1, r4
	bl func_020873d8
	cmp r0, #0
	moveq r5, r4
	mov r0, r6
	mov r1, r5
	bl _ZN3dss4Fx32C1ERKS0_
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0201e144(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r5, r1
	mov r4, r2
	mov r6, r0
	mov r0, r5
	mov r1, r4
	bl func_02087408
	cmp r0, #0
	moveq r5, r4
	mov r0, r6
	mov r1, r5
	bl _ZN3dss4Fx32C1ERKS0_
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_0201e178(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x208
	add r0, r0, #0x400
	bl func_020476f0
	mov r0, r4
	ldmia sp!, {r4, pc}
}

#pragma thumb on
