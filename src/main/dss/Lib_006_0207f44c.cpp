/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0207f44c(void);
    void func_0207f4a4(void);
    void func_0207f4c4(void);
    void func_0207f4d4(void);
    void func_0207f52c(void);
    void func_0207f548(void);
    void func_0207f590(void);
    void func_0207f5c8(void);
    void func_0207f728(void);
    void func_0207f77c(void);
    void func_0207f7e0(void);
    void func_0207f834(void);
    void func_0207f840(void);
    void func_0207f84c(void);
    void func_0207f85c(void);
    void func_0207f86c(void);
    void func_0207f87c(void);
    void func_0207f88c(void);
    void func_0207f890(void);
    void func_0207f898(void);
    void func_0207f8ac(void);
    void func_0207f8c4(void);
    void func_0207f8cc(void);
    void func_0207f8dc(void);
    void func_0207f900(void);
    void func_0207f924(void);
    void func_0207f95c(void);
    void func_0207f994(void);
    void func_0207f9b8(void);
    void func_0207fc88(void);
    void data_020c40ac(void);
    void data_020c40d0(void);
    void data_020c40d4(void);
    void data_0211a604(void);
    void data_0211a60c(void);
    void data_0211a664(void);
    void data_0211a668(void);
    void data_0211a678(void);
    void data_0211a688(void);
    void data_0211a698(void);
    void data_02120948(void);
    void func_02058dcc(void);
    void func_02067b88(void);
    void func_02067c1c(void);
    void func_02067cf4(void);
    void func_020685e0(void);
    void func_02068618(void);
    void func_02068648(void);
    void func_02068684(void);
    void func_02068a44(void);
    void func_02069eb8(void);
    void func_0207914c(void);
    void func_02079408(void);
    void func_0207941c(void);
    void func_020795e4(void);
    void func_0207e7f4(void);
    void func_0207ebf8(void);
    void func_0207f40c(void);
    void func_0208011c(void);
    void func_020875ec(void);
    void func_020876f4(void);
    void func_0208771c(void);
    void func_020877b8(void);
    void func_02088554(void);
    void func_0208858c(void);
    void func_02089214(void);
    void func_02089250(void);
    void func_020892cc(void);
    void func_020893e0(void);
}

#pragma thumb off

extern "C" asm void func_0207f44c(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r8, r2
	mov r10, r0
	mov r9, r1
	mov r7, #0
	cmp r8, #0
	ldmleia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
	mov r6, #0xa
	mov r5, r7
	mov r4, r6
lbl_0207f474:
	mov r0, r10
	mov r1, r9
	mov r2, r6
	bl func_0207f40c
	mov r0, r10
	mov r1, r5
	mov r2, r4
	bl func_0207f40c
	add r7, r7, #1
	cmp r7, r8
	blt lbl_0207f474
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0207f4a4(void)
{
	mov r1, #0
	str r1, [r0, #0x18]
	str r1, [r0, #0x1c]
	str r1, [r0, #0x20]
	str r1, [r0, #0x24]
	str r1, [r0, #0x28]
	str r1, [r0, #0x2c]
	bx lr
}

extern "C" asm void func_0207f4c4(void)
{
	ldr r1, =data_0211a604
	str r0, [r1]
	bx lr
}

extern "C" asm void func_0207f4d4(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, =data_0211a604
	mov r1, r0
	str r1, [r2, #4]
	ldr r0, [r2]
	ldr r2, [r0]
	and r2, r2, #0xf0
	cmp r2, #0x10
	beq lbl_0207f50c
	cmp r2, #0x20
	beq lbl_0207f514
	cmp r2, #0x30
	beq lbl_0207f51c
	b lbl_0207f520
lbl_0207f50c:
	bl func_02067b88
	b lbl_0207f520
lbl_0207f514:
	bl func_02067c1c
	b lbl_0207f520
lbl_0207f51c:
	bl func_02067cf4
lbl_0207f520:
	bl func_0207914c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0207f52c(void)
{
	cmp r0, #0
	ldreq r0, =data_0211a604
	ldreq r0, [r0]
	ldr r0, [r0]
	mov r0, r0, lsr #8
	bx lr
}

extern "C" asm void func_0207f548(void)
{
	ldr r0, [r0]
	and r0, r0, #0xf0
	cmp r0, #0x20
	bgt lbl_0207f568
	bge lbl_0207f580
	cmp r0, #0x10
	beq lbl_0207f580
	b lbl_0207f588
lbl_0207f568:
	cmp r0, #0x30
	bgt lbl_0207f578
	beq lbl_0207f580
	b lbl_0207f588
lbl_0207f578:
	cmp r0, #0x80
	bne lbl_0207f588
lbl_0207f580:
	mov r0, #1
	bx lr
lbl_0207f588:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0207f590(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	bl func_0207f4c4
	mov r0, r4
	bl func_0207f52c
	mov r1, r0
	ldr r0, =data_0211a60c
	mov r2, #4
	bl func_0207f834
	mov r4, r0
	bl func_0207f4d4
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0207f5c8(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
	mov r10, r0
	mov r8, r2
	mov r0, #0
	mov r2, #0x20
	mov r9, r1
	mov r7, r3
	bl func_020795e4
	mov r5, r0
	mov r1, r8
	mov r0, #0
	mov r2, #0x20
	bl func_020795e4
	mov r6, r0
	mov r0, #0
	bl func_0207941c
	mov r1, #0x20
	bl func_02058dcc
	mov r4, r0
	mov r0, #0
	bl func_02079408
	mov r1, #0x20
	bl func_0207ebf8
	sub r4, r0, r4
	ldr r0, [sp, #0x20]
	mov r2, #0x20
	cmp r0, #0
	bne lbl_0207f648
	mov r1, r4
	mov r0, #0
	bl func_020795e4
	b lbl_0207f658
lbl_0207f648:
	mov r1, r7
	mov r0, #2
	mov r4, r7
	bl func_020795e4
lbl_0207f658:
	mov r7, r0
	mov r0, r5
	mov r1, r9
	mov r2, #2
	bl func_020685e0
	str r0, [r10]
	mov r0, r6
	mov r1, r8
	mov r2, #2
	bl func_020685e0
	str r0, [r10, #4]
	mov r0, r7
	mov r1, r4
	mov r2, #1
	bl func_020685e0
	str r0, [r10, #8]
	ldr r1, [r10]
	add r0, r10, #0xc
	mov r2, #0x20
	bl func_02068a44
	ldr r1, [r10, #4]
	add r0, r10, #0x1c
	mov r2, #0x20
	bl func_02068a44
	ldr r1, [r10, #8]
	add r0, r10, #0x2c
	mov r2, #0x20
	bl func_02068a44
	str r9, [r10, #0x3c]
	str r8, [r10, #0x40]
	str r4, [r10, #0x44]
	mov r0, r10
	bl func_0207f84c
	str r0, [r10, #0x48]
	mov r0, r10
	bl func_0207f85c
	str r0, [r10, #0x4c]
	mov r0, r10
	bl func_0207f86c
	add r1, r5, #0xfe000000
	str r0, [r10, #0x50]
	cmp r1, #0x100000
	bls lbl_0207f70c
	ldr r0, =data_020c40ac
	bl func_0207e7f4
lbl_0207f70c:
	ldr r0, =data_02120948
	add r1, r5, #0xfe000000
	str r1, [r10, #0x54]
	bl func_02089214
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}

extern "C" asm void func_0207f728(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #4
	ldr r4, =0x00000000
	mov r6, r0
	mov r5, r1
	mov r4, lr
	ldr r0, [r6, #4]
	mov r1, r5
	bl func_02068648
	add r12, r6, #4
	ldr r0, =data_02120948
	ldr r1, =data_020c40d0
	mov r2, r5
	mov r3, r4
	str r12, [sp]
	bl func_020892cc
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0207f77c(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, lr}
	sub sp, sp, #8
	ldr r4, =0x00000000
	mov r7, r0
	mov r6, r1
	mov r4, lr
	ldr r0, [r7, #8]
	ldr r5, =0x00000000
	mov r1, r6
	bl func_02068618
	mov r5, r0
	ldr r0, =data_02120948
	ldr r1, =data_020c40d4
	str r4, [sp]
	add r3, r7, #8
	mov r2, r5
	str r3, [sp, #4]
	mov r3, r6
	bl func_02089250
	mov r0, r5
	add sp, sp, #8
	ldmia sp!, {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0207f7e0(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #4
	ldr r4, =0x00000000
	mov r6, r0
	mov r5, r1
	mov r4, lr
	ldr r0, [r6, #8]
	mov r1, r5
	bl func_02068648
	add r12, r6, #8
	ldr r0, =data_02120948
	ldr r1, =data_020c40d4
	mov r2, r5
	mov r3, r4
	str r12, [sp]
	bl func_020892cc
	add sp, sp, #4
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0207f834(void)
{
	ldr r12, =func_0207f77c
	bx r12
}

extern "C" asm void func_0207f840(void)
{
	ldr r12, =func_0207f7e0
	bx r12
}

extern "C" asm void func_0207f84c(void)
{
	ldr r12, =func_02068684
	ldr r0, [r0]
	bx r12
}

extern "C" asm void func_0207f85c(void)
{
	ldr r12, =func_02068684
	ldr r0, [r0, #4]
	bx r12
}

extern "C" asm void func_0207f86c(void)
{
	ldr r12, =func_02068684
	ldr r0, [r0, #8]
	bx r12
}

extern "C" asm void func_0207f87c(void)
{
	ldr r12, =func_02068684
	ldr r0, [r0, #8]
	bx r12
}

extern "C" asm void func_0207f88c(void)
{
	bx lr
}

extern "C" asm void func_0207f890(void)
{
	add r0, r0, #4
	bx lr
}

extern "C" asm void func_0207f898(void)
{
	ldr r12, =func_020893e0
	ldr r0, =data_02120948
	bx r12
}

extern "C" asm void func_0207f8ac(void)
{
	ldr r12, =func_0207f728
	mov r1, r0
	ldr r0, =data_0211a60c
	bx r12
}

extern "C" asm void func_0207f8c4(void)
{
	ldr r0, [r0, #0x10]
	bx lr
}

extern "C" asm void func_0207f8cc(void)
{
	mov r1, r1, lsl #1
	add r1, r1, #9
	ldr r0, [r0, r1, lsl #2]
	bx lr
}

extern "C" asm void func_0207f8dc(void)
{
	mov r1, r1, lsl #1
	add r1, r1, #8
	ldr r2, [r0, r1, lsl #2]
	ldr r1, [r0, #0x14]
	bic r2, r2, #3
	add r2, r0, r2
	bic r0, r1, #3
	add r0, r2, r0
	bx lr
}

extern "C" asm void func_0207f900(void)
{
	ldr r0, =data_0211a664
	mov r1, #0
	str r1, [r0, #0x144]
	str r1, [r0, #0x150]
	str r1, [r0, #0x154]
	mov r1, #2
	str r1, [r0, #0x15c]
	bx lr
}

extern "C" asm void func_0207f924(void)
{
	stmdb sp!, {r4, lr}
	mov r2, r0
	mov r4, r1
	ldr r0, =data_0211a668
	mov r1, r2
	mov r2, #0xc
	bl func_02088554
	ldr r0, =data_0211a688
	mov r1, r4
	mov r2, #0xc
	bl func_02088554
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0207f95c(void)
{
	stmdb sp!, {r4, lr}
	mov r2, r0
	mov r4, r1
	ldr r0, =data_0211a678
	mov r1, r2
	mov r2, #0xa
	bl func_02088554
	ldr r0, =data_0211a698
	mov r1, r4
	mov r2, #0xa
	bl func_02088554
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0207f994(void)
{
	stmdb sp!, {r3, lr}
	sub sp, sp, #8
	ldr lr, [sp, #0x10]
	mov r12, #0
	str lr, [sp]
	str r12, [sp, #4]
	bl func_0207f9b8
	add sp, sp, #8
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0207f9b8(void)
{
	stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
	sub sp, sp, #0x54
	mov r5, #0
	mov r10, r1
	ldr r6, =data_0211a664
	mov r1, r5
	str r1, [r6, #0x144]
	ldr r1, [sp, #0x7c]
	movs r4, r0
	str r5, [sp, #0xc]
	mov r9, r2
	mov r11, r3
	str r1, [sp, #0x7c]
	beq lbl_0207fa50
	mov r1, r10, asr #2
	mov r2, r9, asr #2
	add r1, r10, r1, lsr #29
	add r2, r9, r2, lsr #29
	mov r1, r1, asr #3
	mov r2, r2, asr #3
	bl func_0208011c
	mov r2, r10, lsr #0x1f
	rsb r1, r2, r10, lsl #29
	ldr r3, [r4, #8]
	add r10, r2, r1, ror #29
	mov r5, r9, lsr #0x1f
	rsb r1, r5, r9, lsl #29
	add r9, r5, r1, ror #29
	mov r1, r0
	ldr r2, [r4, #0xc]
	add r0, sp, #0x3c
	cmp r3, #0x18
	str r0, [sp, #0xc]
	mov r4, #4
	movgt r3, #0x18
	add r0, sp, #0x3c
	str r4, [sp]
	bl func_02069eb8
lbl_0207fa50:
	ldr r0, =data_0211a664
	mov r4, #0
	ldr r1, [r0, #0x158]
	add r0, sp, #0x18
	str r10, [sp, #8]
	mov r5, r4
	mov r6, r4
	str r4, [sp, #4]
	add r7, r1, #2
	bl func_020876f4
	ldr r1, [sp, #0x78]
	add r0, sp, #0x18
	bl func_020875ec
	ldr r0, =0x0000FEFF
	add r0, r0, #0xff
	str r0, [sp, #0x14]
	ldr r0, =0x0000FEFF
	add r0, r0, #0x100
	str r0, [sp, #0x10]
lbl_0207fa9c:
	add r0, sp, #0x18
	bl func_0208771c
	mov r8, r0
	add r0, sp, #0x18
	bl func_020877b8
	ldr r0, [sp, #0x10]
	cmp r8, r0
	cmpne r8, #0
	beq lbl_0207fc54
	cmp r8, #0x3b
	bgt lbl_0207fb00
	bge lbl_0207fb50
	cmp r8, #0xd
	bgt lbl_0207faf4
	cmp r8, #9
	blt lbl_0207fbdc
	beq lbl_0207fb28
	cmp r8, #0xa
	beq lbl_0207fb30
	cmp r8, #0xd
	beq lbl_0207fbd4
	b lbl_0207fbdc
lbl_0207faf4:
	cmp r8, #0x24
	beq lbl_0207fb80
	b lbl_0207fbdc
lbl_0207fb00:
	ldr r0, =0x0000FEFF
	cmp r8, r0
	bgt lbl_0207fb14
	beq lbl_0207fb20
	b lbl_0207fbdc
lbl_0207fb14:
	ldr r0, [sp, #0x14]
	cmp r8, r0
	bne lbl_0207fbdc
lbl_0207fb20:
	mov r0, #0
	b lbl_0207fc28
lbl_0207fb28:
	mov r0, #0xd
	b lbl_0207fc28
lbl_0207fb30:
	mov r0, #0
	cmp r5, r4
	movlt r5, r4
	mov r4, r0
	add r6, r6, r7
	ldr r10, [sp, #8]
	add r9, r9, r7
	b lbl_0207fc28
lbl_0207fb50:
	ldr r0, [sp, #0x7c]
	cmp r0, #0
	mov r0, #0
	beq lbl_0207fb7c
	cmp r5, r4
	movlt r5, r4
	mov r4, r0
	add r6, r6, r7
	ldr r10, [sp, #8]
	add r9, r9, r7
	b lbl_0207fc28
lbl_0207fb7c:
	b lbl_0207fc28
lbl_0207fb80:
	ldr r0, [sp, #0x7c]
	cmp r0, #0
	beq lbl_0207fbcc
	mov r0, #0x2d
	str r0, [sp]
	ldr r0, [sp, #0xc]
	mov r1, r10
	mov r2, r9
	mov r3, r11
	bl func_0207fc88
	add r0, r4, r0
	cmp r5, r0
	movlt r5, r0
	mov r0, #0
	mov r4, r0
	add r6, r6, r7
	ldr r10, [sp, #8]
	add r9, r9, r7
	b lbl_0207fc28
lbl_0207fbcc:
	mov r0, #0
	b lbl_0207fc28
lbl_0207fbd4:
	mov r0, #0
	b lbl_0207fc28
lbl_0207fbdc:
	mov r0, #0
	mov r1, r10
	mov r2, r9
	mov r3, r11
	str r8, [sp]
	bl func_0207fc88
	cmp r0, #0
	beq lbl_0207fc24
	add r1, r10, r0
	cmp r1, #0x100
	bge lbl_0207fc28
	ldr r0, [sp, #0xc]
	mov r1, r10
	mov r2, r9
	mov r3, r11
	str r8, [sp]
	bl func_0207fc88
	b lbl_0207fc28
lbl_0207fc24:
	mov r0, r7
lbl_0207fc28:
	ldr r2, =data_0211a664
	ldr r1, [sp, #4]
	add r10, r10, r0
	add r1, r2, r1
	add r4, r4, r0
	strb r0, [r1, #0x44]
	ldr r0, [sp, #4]
	add r0, r0, #1
	str r0, [sp, #4]
	cmp r0, #0x100
	blt lbl_0207fa9c
lbl_0207fc54:
	ldr r0, =data_0211a664
	ldr r1, [sp, #4]
	cmp r5, r4
	movlt r5, r4
	str r5, [r0, #0x148]
	str r6, [r0, #0x14c]
	str r1, [r0, #0x144]
	mov r0, #0
	add sp, sp, #0x54
	ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}

extern "C" asm void func_0207fc88(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	sub sp, sp, #8
	ldr r6, =data_0211a664
	mov r5, r0
	ldr r0, [r6, #0x15c]
	mov r4, r1
	mov lr, r2
	cmp r0, #1
	ldr r12, [sp, #0x18]
	ldr r0, [r6, #0x150]
	ldr r1, =data_0211a664
	bne lbl_0207fda8
	cmp r12, #0x3000
	bgt lbl_0207fcc8
	ldreq r12, =0x000024A6
	b lbl_0207fda8
lbl_0207fcc8:
	sub r2, r12, #1
	sub r2, r2, #0xff00
	cmp r2, #0x19
	addls pc, pc, r2, lsl #2
	b lbl_0207fda8
	b lbl_0207fda4
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fda8
	b lbl_0207fd94
	b lbl_0207fd44
	b lbl_0207fd4c
	b lbl_0207fd54
	b lbl_0207fd5c
	b lbl_0207fd64
	b lbl_0207fd6c
	b lbl_0207fd74
	b lbl_0207fd7c
	b lbl_0207fd84
	b lbl_0207fd8c
	b lbl_0207fd9c
lbl_0207fd44:
	ldr r12, =0x0000249C
	b lbl_0207fda8
lbl_0207fd4c:
	ldr r12, =0x0000249D
	b lbl_0207fda8
lbl_0207fd54:
	ldr r12, =0x0000249E
	b lbl_0207fda8
lbl_0207fd5c:
	ldr r12, =0x0000249F
	b lbl_0207fda8
lbl_0207fd64:
	ldr r12, =0x000024A0
	b lbl_0207fda8
lbl_0207fd6c:
	ldr r12, =0x000024A1
	b lbl_0207fda8
lbl_0207fd74:
	ldr r12, =0x000024A2
	b lbl_0207fda8
lbl_0207fd7c:
	ldr r12, =0x000024A3
	b lbl_0207fda8
lbl_0207fd84:
	ldr r12, =0x000024A4
	b lbl_0207fda8
lbl_0207fd8c:
	ldr r12, =0x000024A5
	b lbl_0207fda8
lbl_0207fd94:
	ldr r12, =0x000024A7
	b lbl_0207fda8
lbl_0207fd9c:
	ldr r12, =0x000024A8
	b lbl_0207fda8
lbl_0207fda4:
	ldr r12, =0x000024B0
lbl_0207fda8:
	ldr r2, [r1, #0x15c]
	cmp r2, #2
	bne lbl_0207fea4
	cmp r12, #0x3000
	bgt lbl_0207fdc4
	ldreq r12, =0x00003234
	b lbl_0207fea4
lbl_0207fdc4:
	sub r2, r12, #1
	sub r2, r2, #0xff00
	cmp r2, #0x19
	addls pc, pc, r2, lsl #2
	b lbl_0207fea4
	b lbl_0207fea0
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fea4
	b lbl_0207fe90
	b lbl_0207fe40
	b lbl_0207fe48
	b lbl_0207fe50
	b lbl_0207fe58
	b lbl_0207fe60
	b lbl_0207fe68
	b lbl_0207fe70
	b lbl_0207fe78
	b lbl_0207fe80
	b lbl_0207fe88
	b lbl_0207fe98
lbl_0207fe40:
	ldr r12, =0x0000322A
	b lbl_0207fea4
lbl_0207fe48:
	ldr r12, =0x0000322B
	b lbl_0207fea4
lbl_0207fe50:
	ldr r12, =0x0000322C
	b lbl_0207fea4
lbl_0207fe58:
	ldr r12, =0x0000322D
	b lbl_0207fea4
lbl_0207fe60:
	ldr r12, =0x0000322E
	b lbl_0207fea4
lbl_0207fe68:
	ldr r12, =0x0000322F
	b lbl_0207fea4
lbl_0207fe70:
	ldr r12, =0x00003230
	b lbl_0207fea4
lbl_0207fe78:
	ldr r12, =0x00003231
	b lbl_0207fea4
lbl_0207fe80:
	ldr r12, =0x00003232
	b lbl_0207fea4
lbl_0207fe88:
	ldr r12, =0x00003233
	b lbl_0207fea4
lbl_0207fe90:
	ldr r12, =0x00003235
	b lbl_0207fea4
lbl_0207fe98:
	ldr r12, =0x00003236
	b lbl_0207fea4
lbl_0207fea0:
	ldr r12, =0x0000323E
lbl_0207fea4:
	sub r2, r12, #0x80
	cmp r2, #5
	addls pc, pc, r2, lsl #2
	b lbl_0207fef8
	b lbl_0207fecc
	b lbl_0207fed4
	b lbl_0207fedc
	b lbl_0207fee4
	b lbl_0207feec
	b lbl_0207fef4
lbl_0207fecc:
	ldr r12, =0x000024D5
	b lbl_0207fef8
lbl_0207fed4:
	ldr r12, =0x000024D6
	b lbl_0207fef8
lbl_0207fedc:
	ldr r12, =0x000024D7
	b lbl_0207fef8
lbl_0207fee4:
	ldr r12, =0x000024D8
	b lbl_0207fef8
lbl_0207feec:
	ldr r12, =0x000024D9
	b lbl_0207fef8
lbl_0207fef4:
	ldr r12, =0x000024C6
lbl_0207fef8:
	cmp r12, #0x3000
	bne lbl_0207ff24
	ldr r2, [r1]
	cmp r2, #0xc
	addeq sp, sp, #8
	moveq r0, #0xa
	ldmeqia sp!, {r4, r5, r6, pc}
	cmp r2, #0xa
	addeq sp, sp, #8
	moveq r0, #8
	ldmeqia sp!, {r4, r5, r6, pc}
lbl_0207ff24:
	cmp r12, #0x20
	bne lbl_0207ff50
	ldr r2, [r1]
	cmp r2, #0xc
	addeq sp, sp, #8
	moveq r0, #4
	ldmeqia sp!, {r4, r5, r6, pc}
	cmp r2, #0xa
	addeq sp, sp, #8
	moveq r0, #3
	ldmeqia sp!, {r4, r5, r6, pc}
lbl_0207ff50:
	ands r2, r12, #0xff00
	ldreq r0, [r1, #0x154]
	cmp r12, #0xd7
	ldreq r0, [r1, #0x150]
	cmp r12, #0xf7
	ldreq r0, [r1, #0x150]
	cmp r2, #0x100
	ldreq r0, [r1, #0x154]
	cmp r2, #0x400
	ldreq r0, [r1, #0x154]
	cmp r2, #0x2400
	ldreq r0, [r1, #0x154]
	cmp r2, #0x3200
	ldreq r0, [r1, #0x154]
	mov r1, r5
	str r3, [sp]
	mov r2, r4
	mov r3, lr
	str r12, [sp, #4]
	bl func_0208858c
	add sp, sp, #8
	ldmia sp!, {r4, r5, r6, pc}

	dcd 0x00000000
	dcd 0x00000000
}

#pragma thumb on
