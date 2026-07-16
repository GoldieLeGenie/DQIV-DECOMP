/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_020336d8(void);
    void func_02033700(void);
    void func_02033728(void);
    void func_02033748(void);
    void func_02033768(void);
    void func_02033788(void);
    void func_020337b4(void);
    void func_02033928(void);
    void func_0203396c(void);
    void func_02033b30(void);
    void func_02033c3c(void);
    void func_02033c6c(void);
    void func_02033c88(void);
    void func_02033cd4(void);
    void func_02033d10(void);
    void _ZN6status11StageStatus9isMapVeilEii(void);
    void _ZN6status8GameFlag5checkEj(void);
    void data_020bed08(void);
    void data_020bed28(void);
    void data_020bed48(void);
    void data_020bed68(void);
    void func_020381d0(void);
    void func_02038204(void);
    void func_0203822c(void);
    void func_02057cdc(void);
    void func_02057d04(void);
    void func_02057d1c(void);
    void func_02057d2c(void);
    void func_02057d40(void);
    void func_02057d60(void);
    void func_02057e34(void);
    void func_02057e88(void);
    void func_02057e98(void);
    void func_02057ea8(void);
    void func_02057ec0(void);
    void func_02057ed4(void);
    void func_02057ee8(void);
    void func_02057f00(void);
    void func_02057f18(void);
    void func_02057f30(void);
    void func_02079d78(void);
    void func_020847e8(void);
    void func_02088308(void);
    void g_GlobalFlag(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_020336d8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020381d0
	ldr r1, =data_020bed08
	add r0, r4, #0x100
	str r1, [r4]
	bl func_02057cdc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033700(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020381d0
	ldr r1, =data_020bed08
	add r0, r4, #0x100
	str r1, [r4]
	bl func_02057cdc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033728(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x100
	bl func_02057d04
	mov r0, r4
	bl func_02038204
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033748(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x100
	bl func_02057d04
	mov r0, r4
	bl func_02038204
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033768(void)
{
	stmdb sp!, {r3, lr}
	str r1, [r0, #0xfc]
	mov r1, #0
	str r1, [r0, #0xf8]
	ldr r1, [r0]
	ldr r1, [r1, #4]
	blx r1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_02033788(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x100
	bl func_02057e34
	add r0, r4, #8
	bl func_02057e34
	add r0, r4, #0xa8
	bl func_02057e34
	mov r0, #0
	str r0, [r4, #0xfc]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020337b4(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #0x84
	ldr r2, =data_020bed28
	mov r4, r0
	add r0, sp, #4
	mov r1, #0x80
	bl func_02088308
	add r1, sp, #4
	add r0, r4, #8
	mov r2, #0
	bl func_02057d60
	add r0, r4, #8
	bl func_02057ee8
	add r0, r4, #8
	mov r1, #0x3e
	bl func_02057f18
	add r0, r4, #8
	mov r1, #0
	bl func_02057f30
	ldr r2, =data_020bed48
	add r0, sp, #4
	mov r1, #0x80
	bl func_02088308
	add r0, r4, #0x100
	add r1, sp, #4
	mov r2, #0
	bl func_02057d60
	add r0, r4, #0x100
	bl func_02057ee8
	add r0, r4, #0x100
	mov r1, #0x3e
	bl func_02057f18
	add r0, r4, #0x100
	mov r1, #8
	bl func_02057f30
	add r0, r4, #8
	mov r1, #0
	bl func_02057f00
	add r0, r4, #0x100
	mov r1, #0
	bl func_02057f00
	add r0, r4, #8
	bl func_02057d1c
	add r0, r4, #0x100
	bl func_02057d1c
	ldr r2, =data_020bed68
	add r0, sp, #4
	mov r1, #0x80
	bl func_02088308
	add r0, r4, #0xa8
	add r1, sp, #4
	mov r2, #0
	bl func_02057d60
	add r0, r4, #0xa8
	bl func_02057ee8
	add r0, r4, #0xa8
	mov r1, #0x3e
	bl func_02057f18
	add r0, r4, #0xa8
	mov r1, #9
	bl func_02057f30
	add r0, r4, #0xa8
	mov r1, #0
	bl func_02057f00
	add r0, r4, #0xa8
	mov r1, #1
	bl func_02057ed4
	mov r1, #0
	mov r3, #0x10
	mov r2, r1
	add r0, r4, #0xa8
	str r3, [sp]
	bl func_02057ea8
	add r0, r4, #0x58
	bl func_02057ee8
	add r0, r4, #0x58
	mov r1, #0x3e
	bl func_02057f18
	add r0, r4, #0x58
	mov r1, #4
	bl func_02057f30
	add r0, r4, #0x58
	mov r1, #0
	bl func_02057f00
	add r0, r4, #0x58
	mov r1, #3
	mov r2, r1
	bl func_02057e98
	add sp, sp, #0x84
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02033928(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_020847e8
	ldr r0, =g_GlobalFlag
	mov r1, #0x140
	bl _ZN6status8GameFlag5checkEj
	cmp r0, #0
	beq lbl_02033950
	add r0, r4, #0xa8
	bl func_02057ec0
lbl_02033950:
	mov r0, r4
	bl func_0203396c
	mov r0, r4
	mov r1, #0
	bl func_0203822c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203396c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
	sub sp, sp, #4
	mov r4, r0
	add r0, r4, #8
	bl func_02057ee8
	add r0, r4, #8
	mov r1, #0
	bl func_02057f30
	mov r1, #0
	mov r3, #0xc0
	mov r2, r1
	add r0, r4, #8
	str r3, [sp]
	mov r3, #0x30
	bl func_02057ea8
	add r0, r4, #8
	mov r1, #0
	mov r2, r1
	bl func_02057e88
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0xc0
	bl func_02057e98
	add r0, r4, #8
	bl func_02057ec0
	add r0, r4, #8
	bl func_02057ee8
	add r0, r4, #8
	mov r1, #0
	bl func_02057f30
	mov r0, #0xc0
	str r0, [sp]
	add r0, r4, #8
	mov r1, #0xd0
	mov r2, #0
	mov r3, #0x100
	bl func_02057ea8
	add r0, r4, #8
	mov r1, #0xd0
	mov r2, #0
	bl func_02057e88
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0xc0
	bl func_02057e98
	add r0, r4, #8
	bl func_02057ec0
	add r0, r4, #8
	bl func_02057ee8
	add r0, r4, #8
	mov r1, #0
	bl func_02057f30
	mov r0, #0x10
	str r0, [sp]
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0
	mov r3, #0xd0
	bl func_02057ea8
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0
	bl func_02057e88
	add r0, r4, #8
	mov r1, #0xa0
	mov r2, #0x10
	bl func_02057e98
	add r0, r4, #8
	bl func_02057ec0
	add r0, r4, #8
	bl func_02057ee8
	add r0, r4, #8
	mov r1, #0
	bl func_02057f30
	mov r0, #0xc0
	str r0, [sp]
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0xb0
	mov r3, #0xd0
	bl func_02057ea8
	add r0, r4, #8
	mov r1, #0x30
	mov r2, #0xb0
	bl func_02057e88
	add r0, r4, #8
	mov r1, #0xa0
	mov r2, #0x10
	bl func_02057e98
	add r0, r4, #8
	bl func_02057ec0
	mov r7, #0
	ldr r5, =g_Stage
	mov r6, r7
lbl_02033ae4:
	mov r8, r6
lbl_02033ae8:
	mov r0, r5
	mov r1, r8
	mov r2, r7
	bl _ZN6status11StageStatus9isMapVeilEii
	mov r3, r0
	mov r0, r4
	mov r1, r8
	mov r2, r7
	bl func_02033b30
	add r8, r8, #1
	cmp r8, #0x10
	blt lbl_02033ae8
	add r7, r7, #1
	cmp r7, #0x10
	blt lbl_02033ae4
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02033b30(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
	sub sp, sp, #4
	mov r8, r0
	mov r7, r1
	mov r6, r2
	cmp r3, #0
	beq lbl_02033bc0
	add r0, r8, #0x100
	bl func_02057ee8
	add r0, r8, #0x100
	mov r1, #8
	bl func_02057f30
	mov r0, #0xa
	add r2, r6, #1
	add r1, r7, #1
	mul r3, r2, r0
	add r2, r3, #0x10
	str r2, [sp]
	mul r4, r6, r0
	mul r2, r1, r0
	mul r5, r7, r0
	add r3, r2, #0x30
	add r0, r8, #0x100
	add r1, r5, #0x30
	add r2, r4, #0x10
	bl func_02057ea8
	add r1, r5, #0x30
	add r2, r4, #0x10
	add r0, r8, #0x100
	bl func_02057e88
	add r0, r8, #0x100
	mov r1, #0xa
	mov r2, r1
	bl func_02057e98
	add r0, r8, #0x100
	bl func_02057ec0
lbl_02033bc0:
	add r0, r8, #8
	bl func_02057ee8
	add r0, r8, #8
	mov r1, #0
	bl func_02057f30
	mov r0, #0xa
	add r2, r6, #1
	add r1, r7, #1
	mul r5, r6, r0
	mul r4, r7, r0
	mul r3, r2, r0
	mul r2, r1, r0
	add r1, r3, #0x10
	add r0, r8, #8
	str r1, [sp]
	add r1, r4, #0x30
	add r3, r2, #0x30
	add r2, r5, #0x10
	bl func_02057ea8
	add r1, r4, #0x30
	add r2, r5, #0x10
	add r0, r8, #8
	bl func_02057e88
	add r0, r8, #8
	mov r1, #0xa
	mov r2, r1
	bl func_02057e98
	add r0, r8, #8
	bl func_02057ec0
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}

extern "C" asm void func_02033c3c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_02079d78
	add r0, r4, #8
	bl func_02057d40
	add r0, r4, #8
	bl func_02057d2c
	add r0, r4, #0x100
	bl func_02057d40
	add r0, r4, #0x100
	bl func_02057d2c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033c6c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #8
	bl func_02057d1c
	add r0, r4, #0x100
	bl func_02057d1c
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02033c88(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r12, =0xA0003C01
	mov r5, #0
	smull r3, r4, r12, r1
	smull r3, lr, r12, r2
	str r5, [r0]
	add r4, r1, r4
	mov r1, r1, lsr #0x1f
	add r4, r1, r4, asr #16
	add lr, r2, lr
	mov r1, r2, lsr #0x1f
	add lr, r1, lr, asr #16
	str r5, [r0, #4]
	add r1, r4, #0x30
	str r1, [r0]
	add r1, lr, #0x10
	str r1, [r0, #4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02033cd4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	mov r4, r1
	add r0, r5, #8
	bl func_02057f00
	mov r1, r4
	add r0, r5, #0x100
	bl func_02057f00
	mov r1, r4
	add r0, r5, #0x58
	bl func_02057f00
	mov r1, r4
	add r0, r5, #0xa8
	bl func_02057f00
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02033d10(void)
{
	bx lr
}

#pragma thumb on
