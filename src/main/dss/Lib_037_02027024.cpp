/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_02027024(void);
    void func_02027034(void);
    void func_02027038(void);
    void func_0202703c(void);
    void func_0202708c(void);
    void func_02027090(void);
    void func_02027094(void);
    void func_020270fc(void);
    void func_02027158(void);
    void func_020271e4(void);
    void func_020272e4(void);
    void func_020273a8(void);
    void func_02027424(void);
    void func_02027428(void);
    void _ZN6status12OptionStatus9getButtonEv(void);
    void data_020be71c(void);
    void data_020be74c(void);
    void data_020be760(void);
    void data_020be768(void);
    void data_020be784(void);
    void data_020be7a0(void);
    void data_020be7bc(void);
    void data_020be7e6(void);
    void data_020be81e(void);
    void data_020be878(void);
    void data_020be880(void);
    void data_020be894(void);
    void data_020ed1bc(void);
    void data_020ed284(void);
    void data_0210bb94(void);
    void data_02116ce0(void);
    void data_02116d40(void);
    void data_0211a60c(void);
    void func_02050ea8(void);
    void func_02051900(void);
    void func_02051968(void);
    void func_02051a60(void);
    void func_02051a7c(void);
    void func_0205241c(void);
    void func_020580fc(void);
    void func_0207e88c(void);
    void func_0207f280(void);
    void func_0207f834(void);
    void g_Option(void);
}

#pragma thumb off

extern "C" asm void func_02027024(void)
{
	ldr r1, =data_020be71c
	str r1, [r0]
	bx lr
}

extern "C" asm void func_02027034(void)
{
	bx lr
}

extern "C" asm void func_02027038(void)
{
	bx lr
}

extern "C" asm void func_0202703c(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #1
	beq lbl_0202705c
	ldr r0, =data_0210bb94
	mov r1, #1
	bl func_020580fc
lbl_0202705c:
	ldr r0, =data_02116d40
	bl func_0207f280
	tst r0, #2
	ldmeqia sp!, {r3, pc}
	ldr r0, =data_0211a60c
	mov r1, #0x400
	mov r2, #0x20
	bl func_0207f834
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0202708c(void)
{
	bx lr
}

extern "C" asm void func_02027090(void)
{
	bx lr
}

extern "C" asm void func_02027094(void)
{
	stmdb sp!, {r3, lr}
	mov r1, #0
	ldr r0, =data_02116ce0
	ldr r3, =data_020be74c
	mov r2, r1
	bl func_0207e88c
	ldr r1, =data_020ed284
	ldr r0, =data_02116ce0
	ldr r12, [r1]
	ldr r3, =data_020be760
	mov r1, #0x1e
	mov r2, #0x17
	str r12, [sp]
	bl func_0207e88c
	ldr r0, =data_020ed284
	ldr r1, [r0]
	add r1, r1, #1
	str r1, [r0]
	cmp r1, #0x64
	moveq r1, #0
	streq r1, [r0]
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_020270fc(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	mov r1, #0
	mov r2, r1
	mov r3, r1
	mov r4, r0
	str r1, [sp]
	bl func_020273a8
	mov r1, #0
	mov r2, r1
	add r0, r4, #0x1c
	bl func_02051900
	mov r1, #0
	str r1, [r4, #0x44]
	sub r0, r1, #1
	str r0, [r4, #0x80]
	mov r0, #1
	str r0, [r4, #0x98]
	mov r0, #2
	str r0, [r4, #0x9c]
	str r1, [r4, #0x94]
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_02027158(void)
{
	stmdb sp!, {r3, r4, lr}
	sub sp, sp, #4
	mov r4, r0
	ldr r0, =data_020ed1bc
	bl func_0205241c
	cmp r0, #0
	movne r0, #0
	strne r0, [r4, #0x98]
	ldr r0, [r4, #0x98]
	cmp r0, #0
	addeq sp, sp, #4
	ldmeqia sp!, {r3, r4, pc}
	ldr r0, [r4, #0x9c]
	cmp r0, #0
	beq lbl_020271bc
	subs r0, r0, #1
	addne sp, sp, #4
	str r0, [r4, #0x9c]
	ldmneia sp!, {r3, r4, pc}
	mov r0, r4
	bl func_02027424
	mov r0, #1
	add sp, sp, #4
	str r0, [r4, #4]
	ldmia sp!, {r3, r4, pc}
lbl_020271bc:
	ldr r1, =data_020be81e
	mov r2, #5
	add r0, r4, #0x1c
	mov r3, #1
	str r2, [sp]
	bl func_02051a60
	add sp, sp, #4
	ldmia sp!, {r3, r4, pc}
}

extern "C" asm void func_020271e4(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #8
	mov r4, r0
	ldr r0, [r4, #0x98]
	cmp r0, #0
	addeq sp, sp, #8
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #0x9c]
	cmp r0, #0
	addne sp, sp, #8
	ldmneia sp!, {r4, pc}
	ldr r0, [r4, #0x84]
	cmp r0, #0
	beq lbl_02027228
	ldr r0, =data_020be7bc
	mov r1, #0
	bl func_02050ea8
lbl_02027228:
	ldr r0, [r4, #0x88]
	cmp r0, #0
	beq lbl_02027240
	ldr r0, =data_020be7a0
	mov r1, #0
	bl func_02050ea8
lbl_02027240:
	ldr r0, [r4, #0x8c]
	cmp r0, #0
	beq lbl_02027258
	ldr r0, =data_020be784
	mov r1, #0
	bl func_02050ea8
lbl_02027258:
	ldr r0, [r4, #0x90]
	cmp r0, #0
	beq lbl_02027270
	ldr r0, =data_020be768
	mov r1, #0
	bl func_02050ea8
lbl_02027270:
	add r0, r4, #0x1c
	bl func_02051968
	ldr r0, [r4, #0x94]
	cmp r0, #0
	addeq sp, sp, #8
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_020be878
	add r1, sp, #0
	str r0, [sp]
	ldr r0, [r4, #0x94]
	cmp r0, #1
	ldreq r0, =data_020be880
	streq r0, [sp, #4]
	ldr r0, [r4, #0x94]
	cmp r0, #2
	ldreq r0, =data_020be894
	streq r0, [sp, #4]
	ldr r0, =data_020be7e6
	bl func_02050ea8
	add sp, sp, #8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020272e4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #0x98]
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, [r4, #0x9c]
	cmp r0, #0
	ldmneia sp!, {r4, pc}
	mov r0, #0
	str r0, [r4, #0x6c]
	str r0, [r4, #0x68]
	add r0, r4, #0x1c
	bl func_02051a7c
	ldr r1, [r4, #0x50]
	mvn r0, #0
	str r0, [r4, #0x80]
	cmp r1, #4
	addls pc, pc, r1, lsl #2
	ldmia sp!, {r4, pc}
	b lbl_02027344
	b lbl_02027358
	b lbl_0202736c
	b lbl_02027380
	b lbl_02027394
lbl_02027344:
	ldr r0, [r4, #0x84]
	cmp r0, #0
	movne r0, #0
	strne r0, [r4, #0x80]
	ldmia sp!, {r4, pc}
lbl_02027358:
	ldr r0, [r4, #0x84]
	cmp r0, #0
	movne r0, #1
	strne r0, [r4, #0x80]
	ldmia sp!, {r4, pc}
lbl_0202736c:
	ldr r0, [r4, #0x88]
	cmp r0, #0
	movne r0, #2
	strne r0, [r4, #0x80]
	ldmia sp!, {r4, pc}
lbl_02027380:
	ldr r0, [r4, #0x8c]
	cmp r0, #0
	movne r0, #3
	strne r0, [r4, #0x80]
	ldmia sp!, {r4, pc}
lbl_02027394:
	ldr r0, [r4, #0x90]
	cmp r0, #0
	movne r0, #4
	strne r0, [r4, #0x80]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_020273a8(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	str r1, [r4, #0x84]
	str r3, [r4, #0x88]
	ldr r1, [sp, #8]
	str r2, [r4, #0x8c]
	ldr r0, =g_Option
	str r1, [r4, #0x90]
	bl _ZN6status12OptionStatus9getButtonEv
	cmp r0, #3
	addls pc, pc, r0, lsl #2
	ldmia sp!, {r4, pc}
	ldmia sp!, {r4, pc}
	b lbl_020273e8
	b lbl_020273f4
	b lbl_0202740c
lbl_020273e8:
	mov r0, #0
	str r0, [r4, #0x84]
	ldmia sp!, {r4, pc}
lbl_020273f4:
	mov r0, #0
	str r0, [r4, #0x84]
	str r0, [r4, #0x88]
	str r0, [r4, #0x8c]
	str r0, [r4, #0x90]
	ldmia sp!, {r4, pc}
lbl_0202740c:
	mov r0, #0
	str r0, [r4, #0x84]
	str r0, [r4, #0x88]
	str r0, [r4, #0x8c]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_02027424(void)
{
	bx lr
}

extern "C" asm void func_02027428(void)
{
	bx lr
}

#pragma thumb on
