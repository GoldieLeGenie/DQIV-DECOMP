/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0203a344(void);
    void pad_0203a346(void);
    void func_0203a348(void);
    void pad_0203a34a(void);
    void func_0203a34c(void);
    void func_0203a354(void);
    void func_0203a358(void);
    void func_0203a364(void);
    void pad_0203a386(void);
    void func_0203a388(void);
    void func_0203a3a8(void);
    void func_0203a48c(void);
    void func_0203a574(void);
    void func_0203a58c(void);
    void func_0203a5a4(void);
    void func_0203a5bc(void);
    void func_0203a5ec(void);
    void func_0203a604(void);
    void func_0203a65c(void);
    void func_0203a674(void);
    void pad_0203a6d6(void);
    void func_0203a6d8(void);
    void pad_0203a6f2(void);
    void func_0203a6f4(void);
    void func_0203a714(void);
    void pad_0203a72e(void);
    void func_0203a730(void);
    void func_0203a750(void);
    void pad_0203a76a(void);
    void func_0203a76c(void);
    void func_0203a78c(void);
    void pad_0203a7a6(void);
    void func_0203a7a8(void);
    void func_0203a820(void);
    void func_0203a83c(void);
    void func_0203a938(void);
    void pad_0203a952(void);
    void func_0203a954(void);
    void func_0203a9cc(void);
    void pad_0203a9fe(void);
    void func_0203aa00(void);
    void func_0203aa58(void);
    void func_0203aaac(void);
    void func_0203ab20(void);
    void func_0203ab30(void);
    void _ZN3dss8DssUtils8strcpy_sEPciS1_(void);
    void func_02037ca4(void);
    void func_02037da4(void);
    void func_020875ec(void);
    void func_02087634(void);
    void func_020876f4(void);
    void func_0208771c(void);
    void func_02087734(void);
    void func_020877b8(void);
    void func_020882ec(void);
}

#pragma thumb on
extern "C" asm void func_0203a344(void)
{
	bx lr
}

extern "C" asm void pad_0203a346(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a348(void)
{
	bx lr
}

extern "C" asm void pad_0203a34a(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a34c(void)
{
	mov r2, #0
	str r2, [r0]
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_0203a354(void)
{
	ldr r0, [r0, #8]
	bx lr
}

extern "C" asm void func_0203a358(void)
{
	mov r2, #0xd4
	mul r2, r1
	add r0, r2
	add r0, #0xdc
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_0203a364(void)
{
	push {r3, r4, r5, lr}
	add r5, r0, #0
	mov r4, #0
lbl_0203a36a:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFFF3F7FF
	cmp r0, #0
	bne lbl_0203a37a
	add r0, r4, #0
	pop {r3, r4, r5, pc}
lbl_0203a37a:
	add r4, r4, #1
	cmp r4, #0x18
	blt lbl_0203a36a
	mov r0, #0
	mvn r0, r0
	pop {r3, r4, r5, pc}
}

extern "C" asm void pad_0203a386(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a388(void)
{
	push {r4, r5, r6, lr}
	mov r4, #0
	add r6, r0, #0
	add r5, r4, #0
lbl_0203a390:
	add r0, r6, #0
	add r1, r5, #0
	dcd 0xFFE0F7FF
	cmp r0, #1
	bne lbl_0203a39e
	add r4, r4, #1
lbl_0203a39e:
	add r5, r5, #1
	cmp r5, #0x18
	blt lbl_0203a390
	add r0, r4, #0
	pop {r4, r5, r6, pc}
}

extern "C" asm void func_0203a3a8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x10
	add r5, r0, #0
	mov r2, #0
	add r6, r1, #0
	str r2, [r5]
	dcd 0xFACEF000
	add r0, r6, #1
	cmp r0, #0x18
	bge lbl_0203a470
	mov r0, #0xd4
	mul r0, r6
	add r4, r5, r0
	add r0, r5, #0
	str r0, [sp]
	add r0, #0xe8
	str r0, [sp]
	mov r0, #0x11
	lsl r0, r0, #4
	add r0, r5
	str r0, [sp, #4]
	ldr r0, [pc, #0xb0]
	add r0, r5
	str r0, [sp, #8]
	mov r0, #0x55
	lsl r0, r0, #2
	add r0, r5
	str r0, [sp, #0xc]
lbl_0203a3e2:
	mov r0, #0x1b
	lsl r0, r0, #4
	ldr r0, [r4, r0]
	cmp r0, #0
	beq lbl_0203a470
	mov r1, #0x1b
	str r6, [r5, #4]
	lsl r1, r1, #4
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF8BDF000
	mov r1, #0x6d
	lsl r1, r1, #2
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF8C3F000
	mov r1, #0x6e
	lsl r1, r1, #2
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF8D5F000
	add r1, r6, #1
	add r7, r1, #0
	mov r0, #0xd4
	mul r7, r0
	ldr r1, [sp]
	add r0, r5, #0
	add r1, r7
	dcd 0xF8F0F000
	ldr r1, [sp, #4]
	add r0, r5, #0
	add r1, r7
	dcd 0xF923F000
	mov r1, #0x76
	lsl r1, r1, #2
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF95DF000
	mov r1, #0x77
	lsl r1, r1, #2
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF975F000
	mov r1, #0x1e
	lsl r1, r1, #4
	ldr r1, [r4, r1]
	add r0, r5, #0
	dcd 0xF98DF000
	ldr r1, [sp, #8]
	add r0, r5, #0
	add r1, r7
	dcd 0xF9A6F000
	ldr r1, [sp, #0xc]
	add r0, r5, #0
	add r1, r7
	dcd 0xF9EBF000
	add r6, r6, #1
	add r0, r6, #1
	add r4, #0xd4
	cmp r0, #0x18
	blt lbl_0203a3e2
lbl_0203a470:
	cmp r6, #0x18
	bge lbl_0203a47c
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xFA6CF000
lbl_0203a47c:
	dcd 0xEC92F7FD
	dcd 0xEC10F7FD
	add sp, #0x10
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x0000012A
}

extern "C" asm void func_0203a48c(void)
{
	push {r4, lr}
	add r4, r0, #0
	mov r0, #0
	str r0, [r4]
	ldr r0, [pc, #0xb0]
	cmp r1, #0
	str r2, [r4, r0]
	beq lbl_0203a53c
	ldr r0, [pc, #0xac]
	mov r2, #0xd4
	add r0, r4
	dcd 0xEF24F04D
	mov r1, #0x53
	lsl r1, r1, #6
	ldr r1, [r4, r1]
	add r0, r4, #0
	dcd 0xFA8DF000
	mov r1, #0
	mvn r1, r1
	cmp r0, r1
	bne lbl_0203a4c8
	add r0, r4, #0
	dcd 0xFF52F7FF
	mov r1, #0
	mvn r1, r1
	cmp r0, r1
	beq lbl_0203a544
lbl_0203a4c8:
	str r0, [r4, #4]
	add r0, r4, #0
	mov r1, #1
	dcd 0xF851F000
	mov r1, #0x53
	lsl r1, r1, #6
	ldr r1, [r4, r1]
	add r0, r4, #0
	dcd 0xF857F000
	ldr r1, [pc, #0x70]
	add r0, r4, #0
	ldr r1, [r4, r1]
	dcd 0xF86AF000
	ldr r1, [pc, #0x68]
	add r0, r4, #0
	add r1, r4
	dcd 0xF889F000
	ldr r1, [pc, #0x64]
	add r0, r4, #0
	add r1, r4
	dcd 0xF8BCF000
	ldr r1, [pc, #0x5c]
	add r0, r4, #0
	ldr r1, [r4, r1]
	dcd 0xF8F7F000
	ldr r1, [pc, #0x58]
	add r0, r4, #0
	ldr r1, [r4, r1]
	dcd 0xF910F000
	ldr r1, [pc, #0x50]
	add r0, r4, #0
	ldr r1, [r4, r1]
	dcd 0xF929F000
	ldr r1, [pc, #0x4c]
	add r0, r4, #0
	add r1, r4
	dcd 0xF942F000
	ldr r1, [pc, #0x44]
	add r0, r4, #0
	add r1, r4
	dcd 0xF987F000
	ldr r0, [pc, #0x20]
	mov r2, #1
	ldr r0, [r4, r0]
	lsl r0, r0, #2
	add r1, r4, r0
	ldr r0, [pc, #0x34]
	str r2, [r1, r0]
lbl_0203a53c:
	dcd 0xEC32F7FD
	dcd 0xEBB0F7FD
lbl_0203a544:
	pop {r4, pc}
	mov r8, r8
	dcd 0x00001664
	dcd 0x000014BC
	dcd 0x000014C4
	dcd 0x000014C8
	dcd 0x000014F0
	dcd 0x000014E4
	dcd 0x000014E8
	dcd 0x000014EC
	dcd 0x0000150A
	dcd 0x00001534
	dcd 0x00001668
}

extern "C" asm void func_0203a574(void)
{
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a57e
	str r1, [r0, #8]
	bx lr
lbl_0203a57e:
	ldr r3, [r0, #4]
	mov r2, #0xd4
	mul r2, r3
	add r0, r2
	add r0, #0xdc
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0203a58c(void)
{
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a596
	str r1, [r0, #0xc]
	bx lr
lbl_0203a596:
	ldr r3, [r0, #4]
	mov r2, #0xd4
	mul r2, r3
	add r0, r2
	add r0, #0xe0
	str r1, [r0]
	bx lr
}

extern "C" asm void func_0203a5a4(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a5ae
	ldr r0, [r0, #0xc]
	bx lr
lbl_0203a5ae:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	mul r1, r2
	add r0, r1
	add r0, #0xe0
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_0203a5bc(void)
{
	push {r4, r5}
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a5ce
	mov r2, #1
	str r2, [r0, #8]
	str r1, [r0, #0x10]
	pop {r4, r5}
	bx lr
lbl_0203a5ce:
	ldr r2, [r0, #4]
	mov r3, #0xd4
	add r4, r2, #0
	mul r4, r3
	add r2, r0, r4
	mov r5, #1
	add r2, #0xdc
	str r5, [r2]
	ldr r2, [r0, #4]
	mul r3, r2
	add r0, r3
	add r0, #0xe4
	str r1, [r0]
	pop {r4, r5}
	bx lr
}

extern "C" asm void func_0203a5ec(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a5f6
	ldr r0, [r0, #0x10]
	bx lr
lbl_0203a5f6:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	mul r1, r2
	add r0, r1
	add r0, #0xe4
	ldr r0, [r0]
	bx lr
}

extern "C" asm void func_0203a604(void)
{
	push {r4, r5, r6, lr}
	add r2, r1, #0
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a62a
	mov r4, #0
	add r3, r4, #0
lbl_0203a612:
	add r1, r0, r4
	add r4, r4, #1
	strb r3, [r1, #0x14]
	cmp r4, #0x1a
	blt lbl_0203a612
	cmp r2, #0
	beq lbl_0203a65a
	add r0, #0x14
	mov r1, #0x1a
	dcd 0xEE9CF04D
	pop {r4, r5, r6, pc}
lbl_0203a62a:
	mov r3, #0
	add r1, r3, #0
	mov r4, #0xd4
lbl_0203a630:
	ldr r5, [r0, #4]
	add r6, r5, #0
	mul r6, r4
	add r5, r0, r6
	add r5, r3
	add r5, #0xe8
	add r3, r3, #1
	strb r1, [r5]
	cmp r3, #0x1a
	blt lbl_0203a630
	cmp r2, #0
	beq lbl_0203a65a
	ldr r1, [r0, #4]
	add r3, r0, #0
	mov r0, #0xd4
	mul r0, r1
	add r3, #0xe8
	add r0, r3
	mov r1, #0x1a
	dcd 0xEE84F04D
lbl_0203a65a:
	pop {r4, r5, r6, pc}
}

extern "C" asm void func_0203a65c(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a666
	add r0, #0x14
	bx lr
lbl_0203a666:
	ldr r1, [r0, #4]
	add r2, r0, #0
	mov r0, #0xd4
	add r2, #0xe8
	mul r0, r1
	add r0, r2
	bx lr
}

extern "C" asm void func_0203a674(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r7, r1, #0
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a69e
	mov r3, #0
	add r2, r3, #0
lbl_0203a682:
	add r1, r0, r3
	add r1, #0x3c
	add r3, r3, #1
	strb r2, [r1]
	cmp r3, #0x1a
	blt lbl_0203a682
	cmp r7, #0
	beq lbl_0203a6d4
	add r0, #0x3c
	mov r1, #0x1a
	add r2, r7, #0
	dcd 0xEE62F04D
	pop {r3, r4, r5, r6, r7, pc}
lbl_0203a69e:
	mov r1, #0xd4
	mov r6, #0
	add r2, r1, #0
	add r5, r6, #0
	add r2, #0x3c
lbl_0203a6a8:
	ldr r3, [r0, #4]
	add r4, r3, #0
	mul r4, r1
	add r3, r0, r4
	add r3, r6
	add r6, r6, #1
	strb r5, [r3, r2]
	cmp r6, #0x1a
	blt lbl_0203a6a8
	cmp r7, #0
	beq lbl_0203a6d4
	mov r1, #0x11
	lsl r1, r1, #4
	add r2, r0, r1
	ldr r1, [r0, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	mov r1, #0x1a
	add r2, r7, #0
	dcd 0xEE46F04D
lbl_0203a6d4:
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void pad_0203a6d6(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a6d8(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a6e2
	add r0, #0x3c
	bx lr
lbl_0203a6e2:
	mov r1, #0x11
	lsl r1, r1, #4
	add r2, r0, r1
	ldr r1, [r0, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	bx lr
}

extern "C" asm void pad_0203a6f2(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a6f4(void)
{
	push {r3, r4}
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a702
	str r1, [r0, #0x30]
	pop {r3, r4}
	bx lr
lbl_0203a702:
	ldr r3, [r0, #4]
	mov r2, #0xd4
	add r4, r3, #0
	mul r4, r2
	add r0, r4
	add r2, #0x30
	str r1, [r0, r2]
	pop {r3, r4}
	bx lr
}

extern "C" asm void func_0203a714(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a71e
	ldr r0, [r0, #0x30]
	bx lr
lbl_0203a71e:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	add r3, r2, #0
	mul r3, r1
	add r0, r3
	add r1, #0x30
	ldr r0, [r0, r1]
	bx lr
}

extern "C" asm void pad_0203a72e(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a730(void)
{
	push {r3, r4}
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a73e
	str r1, [r0, #0x34]
	pop {r3, r4}
	bx lr
lbl_0203a73e:
	ldr r3, [r0, #4]
	mov r2, #0xd4
	add r4, r3, #0
	mul r4, r2
	add r0, r4
	add r2, #0x34
	str r1, [r0, r2]
	pop {r3, r4}
	bx lr
}

extern "C" asm void func_0203a750(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a75a
	ldr r0, [r0, #0x34]
	bx lr
lbl_0203a75a:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	add r3, r2, #0
	mul r3, r1
	add r0, r3
	add r1, #0x34
	ldr r0, [r0, r1]
	bx lr
}

extern "C" asm void pad_0203a76a(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a76c(void)
{
	push {r3, r4}
	ldr r2, [r0]
	cmp r2, #1
	bne lbl_0203a77a
	str r1, [r0, #0x38]
	pop {r3, r4}
	bx lr
lbl_0203a77a:
	ldr r3, [r0, #4]
	mov r2, #0xd4
	add r4, r3, #0
	mul r4, r2
	add r0, r4
	add r2, #0x38
	str r1, [r0, r2]
	pop {r3, r4}
	bx lr
}

extern "C" asm void func_0203a78c(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a796
	ldr r0, [r0, #0x38]
	bx lr
lbl_0203a796:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	add r3, r2, #0
	mul r3, r1
	add r0, r3
	add r1, #0x38
	ldr r0, [r0, r1]
	bx lr
}

extern "C" asm void pad_0203a7a6(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a7a8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r7, r1, #0
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a7d6
	mov r1, #1
	mov r3, #0
	str r1, [r0, #8]
	add r2, r3, #0
lbl_0203a7ba:
	add r1, r0, r3
	add r1, #0x56
	add r3, r3, #1
	strb r2, [r1]
	cmp r3, #0x2a
	blt lbl_0203a7ba
	cmp r7, #0
	beq lbl_0203a818
	add r0, #0x56
	mov r1, #0x2a
	add r2, r7, #0
	dcd 0xEDC6F04D
	pop {r3, r4, r5, r6, r7, pc}
lbl_0203a7d6:
	ldr r2, [r0, #4]
	mov r1, #0xd4
	mul r1, r2
	add r1, r0
	mov r3, #1
	add r1, #0xdc
	str r3, [r1]
	mov r1, #0xd4
	mov r6, #0
	add r2, r1, #0
	add r5, r6, #0
	add r2, #0x56
lbl_0203a7ee:
	ldr r3, [r0, #4]
	add r4, r3, #0
	mul r4, r1
	add r3, r0, r4
	add r3, r6
	add r6, r6, #1
	strb r5, [r3, r2]
	cmp r6, #0x2a
	blt lbl_0203a7ee
	cmp r7, #0
	beq lbl_0203a818
	ldr r1, [pc, #0x14]
	add r2, r0, r1
	ldr r1, [r0, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	mov r1, #0x2a
	add r2, r7, #0
	dcd 0xEDA4F04D
lbl_0203a818:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x0000012A
}

extern "C" asm void func_0203a820(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a82a
	add r0, #0x56
	bx lr
lbl_0203a82a:
	ldr r1, [pc, #0xc]
	add r2, r0, r1
	ldr r1, [r0, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	bx lr
	dcd 0x0000012A
}

extern "C" asm void func_0203a83c(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x1fc
	sub sp, #0x4c
	add r5, r0, #0
	add r7, r1, #0
	add r0, sp, #0x24
	dcd 0xEF54F04C
	add r0, sp, #0x24
	add r1, r7, #0
	dcd 0xEECCF04C
	add r0, sp, #0
	dcd 0xEF4EF04C
	mov r2, #2
	add r0, sp, #0
	add r1, sp, #0x48
	lsl r2, r2, #8
	dcd 0xEEE8F04C
	ldr r7, [pc, #0xc8]
	add r6, sp, #0x24
lbl_0203a86a:
	add r0, r6, #0
	dcd 0xEF56F04C
	add r4, r0, #0
	add r0, r6, #0
	dcd 0xEFA0F04C
	cmp r4, #0
	beq lbl_0203a8c6
	cmp r4, r7
	bgt lbl_0203a888
	ldr r0, [pc, #0xac]
	cmp r4, r0
	beq lbl_0203a8ba
	b lbl_0203a8bc
lbl_0203a888:
	ldr r0, [pc, #0xa8]
	sub r0, r4, r0
	cmp r0, #4
	bhi lbl_0203a8bc
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r0, r1
	mov r4, r1
	mov r0, r2
	mov r4, r2
	mov r0, r3
	mov r4, #0x80
	b lbl_0203a8bc
	mov r4, #0x81
	b lbl_0203a8bc
	mov r4, #0x82
	b lbl_0203a8bc
	mov r4, #0x83
	b lbl_0203a8bc
	mov r4, #0x84
	b lbl_0203a8bc
lbl_0203a8ba:
	mov r4, #0x85
lbl_0203a8bc:
	add r0, sp, #0
	add r1, r4, #0
	dcd 0xEF38F04C
	b lbl_0203a86a
lbl_0203a8c6:
	ldr r0, [r5]
	add r7, sp, #0x48
	cmp r0, #1
	bne lbl_0203a8f4
	mov r2, #0
	add r1, r2, #0
lbl_0203a8d2:
	add r0, r5, r2
	add r0, #0x80
	add r2, r2, #1
	strb r1, [r0]
	cmp r2, #0x5c
	blt lbl_0203a8d2
	cmp r7, #0
	beq lbl_0203a92a
	add r5, #0x80
	add r0, r5, #0
	mov r1, #0x5c
	add r2, r7, #0
	dcd 0xED3AF04D
	add sp, #0x1fc
	add sp, #0x4c
	pop {r3, r4, r5, r6, r7, pc}
lbl_0203a8f4:
	mov r0, #0xd4
	mov r6, #0
	add r1, r0, #0
	add r4, r6, #0
	add r1, #0x80
lbl_0203a8fe:
	ldr r2, [r5, #4]
	add r3, r2, #0
	mul r3, r0
	add r2, r5, r3
	add r2, r6
	add r6, r6, #1
	strb r4, [r2, r1]
	cmp r6, #0x5c
	blt lbl_0203a8fe
	cmp r7, #0
	beq lbl_0203a92a
	mov r0, #0x55
	lsl r0, r0, #2
	add r2, r5, r0
	ldr r1, [r5, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	mov r1, #0x5c
	add r2, r7, #0
	dcd 0xED1CF04D
lbl_0203a92a:
	add sp, #0x1fc
	add sp, #0x4c
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x000024C6
	dcd 0x000024D5
}

extern "C" asm void func_0203a938(void)
{
	ldr r1, [r0]
	cmp r1, #1
	bne lbl_0203a942
	add r0, #0x80
	bx lr
lbl_0203a942:
	mov r1, #0x55
	lsl r1, r1, #2
	add r2, r0, r1
	ldr r1, [r0, #4]
	mov r0, #0xd4
	mul r0, r1
	add r0, r2
	bx lr
}

extern "C" asm void pad_0203a952(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203a954(void)
{
	push {r4, r5, r6, r7}
	mov r2, #0xd4
	add r3, r1, #0
	mul r3, r2
	add r2, r0, r3
	str r1, [r0, #4]
	add r1, r2, #0
	mov r5, #0
	add r1, #0xe4
	str r5, [r1]
	add r6, r2, #0
	add r1, r5, #0
lbl_0203a96c:
	add r4, r6, #0
	add r4, #0xe8
	add r5, r5, #1
	add r6, r6, #1
	strb r1, [r4]
	cmp r5, #0x1a
	blt lbl_0203a96c
	mov r5, #0x41
	lsl r5, r5, #2
	add r7, r0, r3
	str r1, [r7, r5]
	add r4, r5, #4
	mov r6, #8
	str r6, [r7, r4]
	add r5, #8
	mov r4, #0x11
	str r1, [r7, r5]
	add r6, r2, #0
	mov r5, #0
	lsl r4, r4, #4
lbl_0203a994:
	add r1, r1, #1
	strb r5, [r6, r4]
	add r6, r6, #1
	cmp r1, #0x1a
	blt lbl_0203a994
	ldr r1, [pc, #0x28]
	add r4, r2, #0
	mov r6, #0
lbl_0203a9a4:
	add r5, r5, #1
	strb r6, [r4, r1]
	add r4, r4, #1
	cmp r5, #0x2a
	blt lbl_0203a9a4
	mov r1, #0x55
	mov r4, #0
	lsl r1, r1, #2
lbl_0203a9b4:
	add r6, r6, #1
	strb r4, [r2, r1]
	add r2, r2, #1
	cmp r6, #0x5c
	blt lbl_0203a9b4
	add r0, r3
	add r0, #0xdc
	str r4, [r0]
	pop {r4, r5, r6, r7}
	bx lr
	dcd 0x0000012A
}

extern "C" asm void func_0203a9cc(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r6, r0, #0
	add r7, r1, #0
	mov r4, #0
	add r5, r6, #0
lbl_0203a9d6:
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xFCBDF7FF
	cmp r0, #1
	bne lbl_0203a9f0
	add r0, r5, #0
	add r0, #0xe0
	ldr r0, [r0]
	cmp r7, r0
	bne lbl_0203a9f0
	add r0, r4, #0
	pop {r3, r4, r5, r6, r7, pc}
lbl_0203a9f0:
	add r4, r4, #1
	add r5, #0xd4
	cmp r4, #0x18
	blt lbl_0203a9d6
	mov r0, #0
	mvn r0, r0
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void pad_0203a9fe(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0203aa00(void)
{
	push {r4, lr}
	ldr r1, [pc, #0x4c]
	add r4, r0, #0
	ldr r0, [r4, r1]
	cmp r0, #1
	beq lbl_0203aa4e
	mov r0, #1
	str r0, [r4, r1]
	add r0, r1, #0
	ldr r2, [r4, #0x10]
	add r0, #8
	str r2, [r4, r0]
	add r0, r1, #4
	ldr r2, [r4, #0xc]
	add r1, #0xc
	str r2, [r4, r0]
	add r2, r4, #0
	add r0, r4, r1
	mov r1, #0x1a
	add r2, #0x14
	dcd 0xEC9AF04D
	ldr r0, [r4, #0x30]
	ldr r1, [pc, #0x24]
	str r0, [r4, r1]
	ldr r2, [r4, #0x34]
	add r0, r1, #4
	str r2, [r4, r0]
	add r0, r1, #0
	ldr r2, [r4, #0x38]
	add r0, #8
	add r1, #0x50
	str r2, [r4, r0]
	add r0, r4, r1
	add r4, #0x80
	mov r1, #0x5c
	add r2, r4, #0
	dcd 0xEC8AF04D
lbl_0203aa4e:
	pop {r4, pc}
	dcd 0x00001590
	dcd 0x000015B8
}

extern "C" asm void func_0203aa58(void)
{
	push {r4, lr}
	ldr r2, [pc, #0x48]
	add r4, r0, #0
	mov r0, #0
	str r0, [r4, r2]
	add r0, r2, #0
	add r0, #8
	ldr r0, [r4, r0]
	mov r1, #0x1a
	str r0, [r4, #0x10]
	add r0, r2, #4
	ldr r0, [r4, r0]
	add r2, #0xc
	str r0, [r4, #0xc]
	add r0, r4, #0
	add r0, #0x14
	add r2, r4
	dcd 0xEC72F04D
	ldr r2, [pc, #0x28]
	mov r1, #0x5c
	ldr r0, [r4, r2]
	str r0, [r4, #0x30]
	add r0, r2, #4
	ldr r0, [r4, r0]
	str r0, [r4, #0x34]
	add r0, r2, #0
	add r0, #8
	ldr r0, [r4, r0]
	add r2, #0x50
	str r0, [r4, #0x38]
	add r0, r4, #0
	add r0, #0x80
	add r2, r4
	dcd 0xEC60F04D
	pop {r4, pc}
	mov r8, r8
	dcd 0x00001590
	dcd 0x000015B8
}

extern "C" asm void func_0203aaac(void)
{
	push {r4, r5}
	ldr r1, [pc, #0x58]
	mov r4, #0
	add r2, r1, #0
	str r4, [r0, r1]
	add r2, #8
	str r4, [r0, r2]
	add r1, r1, #4
	str r4, [r0, r1]
	ldr r2, [pc, #0x4c]
	add r1, r4, #0
lbl_0203aac2:
	add r3, r0, r4
	add r4, r4, #1
	strb r1, [r3, r2]
	cmp r4, #0x1a
	blt lbl_0203aac2
	ldr r3, [pc, #0x40]
	mov r4, #8
	str r1, [r0, r3]
	add r2, r3, #4
	str r4, [r0, r2]
	add r3, #8
	ldr r2, [pc, #0x38]
	str r1, [r0, r3]
	mov r4, #0
lbl_0203aade:
	add r3, r0, r1
	add r1, r1, #1
	strb r4, [r3, r2]
	cmp r1, #0x1a
	blt lbl_0203aade
	ldr r1, [pc, #0x2c]
	mov r5, #0
lbl_0203aaec:
	add r2, r0, r4
	add r4, r4, #1
	strb r5, [r2, r1]
	cmp r4, #0x2a
	blt lbl_0203aaec
	ldr r1, [pc, #0x24]
	mov r3, #0
lbl_0203aafa:
	add r2, r0, r5
	add r5, r5, #1
	strb r3, [r2, r1]
	cmp r5, #0x5c
	blt lbl_0203aafa
	pop {r4, r5}
	bx lr
	dcd 0x00001590
	dcd 0x0000159C
	dcd 0x000015B8
	dcd 0x000015C4
	dcd 0x000015DE
	dcd 0x00001608
}

extern "C" asm void func_0203ab20(void)
{
	lsl r1, r1, #2
	add r1, r0
	ldr r0, [pc, #4]
	str r2, [r1, r0]
	bx lr
	mov r8, r8
	dcd 0x00001668
}

extern "C" asm void func_0203ab30(void)
{
	lsl r1, r1, #2
	add r1, r0
	ldr r0, [pc, #4]
	ldr r0, [r1, r0]
	bx lr
	mov r8, r8
	dcd 0x00001668
}
