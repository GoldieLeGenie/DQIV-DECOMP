/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_02056b00(void);
    void func_02056b48(void);
    void func_02056b50(void);
    void func_02056c1c(void);
    void func_02056c94(void);
    void pad_02056cc6(void);
    void func_02056cc8(void);
    void pad_02056f02(void);
    void func_02056f04(void);
    void func_02056f28(void);
    void func_02056f48(void);
    void pad_02056f7a(void);
    void func_02056f7c(void);
    void _ZN3dss8DssUtils8strcpy_sEPciS1_(void);
    void data_020c3940(void);
    void data_020c455c(void);
    void data_020c4586(void);
    void data_020c4680(void);
    void data_020c472a(void);
    void data_0210a464(void);
    void func_0205408c(void);
    void func_02057474(void);
    void func_020574bc(void);
    void func_020875ec(void);
    void func_020876f4(void);
    void func_02087a74(void);
    void func_02087e08(void);
    void func_02087f14(void);
    void func_02088078(void);
    void func_020882b0(void);
}

#pragma thumb on
extern "C" asm void func_02056b00(void)
{
	push {r3, r4, r5, r6, lr}
	sub sp, #0x1fc
	sub sp, #0x28
	ldr r4, [r0]
	mov r2, #0
	ldr r1, [pc, #0x38]
	ldr r4, [r4]
	add r3, r2, #0
	add r5, r0, #0
	blx r4
	add r0, sp, #0
	dcd 0xEDEEF030
	add r0, r5, #0
	dcd 0xECCEF000
	add r1, r0, #0
	add r0, sp, #0
	dcd 0xED62F030
	mov r6, #2
	add r5, sp, #0
	add r4, sp, #0x24
	lsl r6, r6, #8
lbl_02056b30:
	add r0, r5, #0
	add r1, r4, #0
	add r2, r6, #0
	dcd 0xEF9EF030
	cmp r0, #0
	bne lbl_02056b30
	add sp, #0x1fc
	add sp, #0x28
	pop {r3, r4, r5, r6, pc}
	dcd 0x020C3940
}

extern "C" asm void func_02056b48(void)
{
	ldr r3, [pc, #0]
	bx r3
	dcd 0x02057474
}

extern "C" asm void func_02056b50(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x1fc
	sub sp, #0x1fc
	sub sp, #0x1fc
	sub sp, #0x34
	add r2, r1, #0
	add r5, r0, #0
	ldrb r0, [r2]
	cmp r0, #0x40
	ldr r0, [pc, #0xa4]
	bne lbl_02056b74
	mov r1, #2
	add r0, sp
	lsl r1, r1, #8
	add r2, r2, #1
	dcd 0xE94CF031
	b lbl_02056b7e
lbl_02056b74:
	mov r1, #2
	add r0, sp
	lsl r1, r1, #8
	dcd 0xEBF2F031
lbl_02056b7e:
	ldr r0, [pc, #0x88]
	mov r3, #2
	add r0, sp
	str r0, [sp]
	ldr r0, [pc, #0x84]
	ldr r1, [pc, #0x84]
	add r2, sp, #0x228
	lsl r3, r3, #8
	dcd 0xE9C2F031
	add r0, sp, #0x228
	ldr r2, [pc, #0x70]
	str r0, [sp]
	mov r3, #2
	ldr r0, [pc, #0x78]
	ldr r1, [pc, #0x78]
	add r2, sp
	lsl r3, r3, #8
	dcd 0xE9B8F031
	ldr r2, [pc, #0x60]
	mov r1, #2
	add r0, sp, #0x228
	lsl r1, r1, #8
	add r2, sp
	dcd 0xEBD6F031
	add r0, sp, #0x228
	dcd 0xEA60F031
	add r0, sp, #4
	dcd 0xED9AF030
	add r0, sp, #4
	add r1, sp, #0x228
	dcd 0xED12F030
	mov r7, #2
	add r4, sp, #0x28
	add r6, sp, #4
	lsl r7, r7, #8
lbl_02056bd0:
	add r0, r6, #0
	add r1, r4, #0
	add r2, r7, #0
	dcd 0xEF4EF030
	cmp r0, #0
	beq lbl_02056bfc
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xF81BF000
	cmp r0, #0
	beq lbl_02056bd0
	add r0, sp, #0x28
	dcd 0xEA44F031
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x34
	mov r0, #1
	pop {r3, r4, r5, r6, r7, pc}
lbl_02056bfc:
	mov r0, #0
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x34
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x00000428
	dcd 0x020C472A
	dcd 0x020C4680
	dcd 0x020C455C
	dcd 0x020C4586
}

extern "C" asm void func_02056c1c(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x1fc
	sub sp, #0x1fc
	sub sp, #0x30
	add r4, r0, #0
	add r0, sp, #4
	add r6, r1, #0
	dcd 0xED64F030
	add r0, r4, #0
	dcd 0xEC44F000
	add r1, r0, #0
	add r0, sp, #4
	dcd 0xECD8F030
	mov r4, #2
	add r5, sp, #0x228
	add r7, sp, #0x28
	lsl r4, r4, #8
lbl_02056c44:
	add r0, sp, #4
	add r1, r5, #0
	add r2, r4, #0
	dcd 0xEF14F030
	cmp r0, #0
	beq lbl_02056c80
	ldr r0, [pc, #0x38]
	ldr r1, [pc, #0x38]
	add r2, r7, #0
	add r3, r4, #0
	str r5, [sp]
	dcd 0xE95AF031
	add r0, r5, #0
	add r1, r4, #0
	add r2, r7, #0
	dcd 0xEB7CF031
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xEB20F031
	cmp r0, #0
	bne lbl_02056c44
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x30
	mov r0, #1
	pop {r3, r4, r5, r6, r7, pc}
lbl_02056c80:
	mov r0, #0
	add sp, #0x1fc
	add sp, #0x1fc
	add sp, #0x30
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020C455C
	dcd 0x020C4586
}

extern "C" asm void func_02056c94(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r7, r3, #0
	add r5, r0, #0
	add r4, r1, #0
	add r0, r7, #0
	add r6, r2, #0
	dcd 0xE9EAF031
	str r4, [r5, #0x48]
	str r6, [r5, #0x4c]
	mov r2, #0
	str r7, [r5, #0x50]
	lsl r0, r2, #2
	str r2, [r5]
	mov r1, #1
	add r0, r5
	str r1, [r0, #4]
	str r2, [r5, #0x44]
	ldr r0, [r5]
	add r0, r0, #1
	str r0, [r5]
	lsl r0, r0, #2
	add r0, r5
	str r1, [r0, #4]
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void pad_02056cc6(void)
{
	dcd 0x00000000
}

extern "C" asm void func_02056cc8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r4, r0, #0
	dcd 0xFFE2F7FF
	add r7, r4, #0
	add r6, r4, #0
	add r7, #0x48
	add r6, #0x50
lbl_02056cd8:
	ldr r0, [r6]
	ldr r1, [r4, #0x50]
	add r0, r0, #1
	str r0, [r6]
	ldrb r1, [r1]
	cmp r1, #0
	bne lbl_02056ce8
	b lbl_02056ef6
lbl_02056ce8:
	cmp r1, #0x25
	beq lbl_02056d04
	ldr r0, [r4]
	lsl r0, r0, #2
	add r0, r4
	ldr r0, [r0, #4]
	cmp r0, #1
	bne lbl_02056cd8
	ldr r2, [r7]
	ldr r0, [r4, #0x48]
	add r2, r2, #1
	str r2, [r7]
	strb r1, [r0]
	b lbl_02056cd8
lbl_02056d04:
	ldr r0, [r6]
	ldr r1, [r4, #0x50]
	add r0, r0, #1
	str r0, [r6]
	ldrb r0, [r1]
	cmp r0, #0x41
	blt lbl_02056d16
	cmp r0, #0x52
	ble lbl_02056d18
lbl_02056d16:
	b lbl_02056e96
lbl_02056d18:
	ldr r2, [r6]
	ldr r1, [r4, #0x50]
	add r2, r2, #1
	str r2, [r6]
	ldrb r1, [r1]
	mov r3, #0xa
	add r5, r2, #1
	sub r1, #0x30
	mul r3, r1
	ldr r1, [r4, #0x50]
	sub r0, #0x41
	str r5, [r6]
	ldrb r2, [r1]
	ldr r1, [r4, #0x50]
	mov ip, r1
	add r1, r5, #1
	str r1, [r6]
	mov r1, ip
	ldrb r5, [r1]
	sub r2, #0x30
	sub r5, #0x30
	cmp r0, #0x11
	bls lbl_02056d48
	b lbl_02056e88
lbl_02056d48:
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r2, r4
	mov r0, r6
	mov r6, r7
	lsl r4, r1, #1
	lsl r2, r3, #1
	lsl r0, r5, #1
	lsl r6, r6, #1
	lsl r4, r0, #2
	lsl r2, r2, #2
	lsl r2, r4, #2
	lsl r2, r6, #2
	lsl r2, r0, #3
	lsl r2, r2, #3
	lsl r2, r4, #3
	lsl r2, r6, #3
	lsl r2, r0, #4
	lsl r2, r2, #4
	lsl r2, r4, #4
	add r2, r3
	add r0, r4, #0
	mov r1, #1
	add r3, r5, #0
	dcd 0xF8C0F000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #2
	add r3, r5, #0
	dcd 0xF8B9F000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #4
	add r3, r5, #0
	dcd 0xF8B2F000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #8
	add r3, r5, #0
	dcd 0xF8ABF000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #0x10
	add r3, r5, #0
	dcd 0xF8A4F000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #0x20
	add r3, r5, #0
	dcd 0xF89DF000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #0x40
	add r3, r5, #0
	dcd 0xF896F000
	b lbl_02056cd8
	add r2, r3
	add r0, r4, #0
	mov r1, #0x80
	add r3, r5, #0
	dcd 0xF88FF000
	b lbl_02056cd8
	mov r1, #1
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #8
	add r3, r5, #0
	dcd 0xF887F000
	b lbl_02056cd8
	mov r1, #2
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #8
	add r3, r5, #0
	dcd 0xF87FF000
	b lbl_02056cd8
	mov r1, #1
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xa
	add r3, r5, #0
	dcd 0xF877F000
	b lbl_02056cd8
	mov r1, #2
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xa
	add r3, r5, #0
	dcd 0xF86FF000
	b lbl_02056cd8
	mov r1, #1
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xc
	add r3, r5, #0
	dcd 0xF867F000
	b lbl_02056cd8
	mov r1, #2
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xc
	add r3, r5, #0
	dcd 0xF85FF000
	b lbl_02056cd8
	mov r1, #1
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xe
	add r3, r5, #0
	dcd 0xF857F000
	b lbl_02056cd8
	mov r1, #2
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0xe
	add r3, r5, #0
	dcd 0xF84FF000
	b lbl_02056cd8
	mov r1, #1
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0x10
	add r3, r5, #0
	dcd 0xF847F000
	b lbl_02056cd8
	mov r1, #2
	add r2, r3
	add r0, r4, #0
	lsl r1, r1, #0x10
	add r3, r5, #0
	dcd 0xF83FF000
	b lbl_02056cd8
lbl_02056e88:
	add r2, r3
	add r0, r4, #0
	mov r1, #0
	add r3, r5, #0
	dcd 0xF838F000
	b lbl_02056cd8
lbl_02056e96:
	cmp r0, #0x58
	blt lbl_02056ec4
	cmp r0, #0x5a
	bgt lbl_02056ec4
	cmp r0, #0x58
	beq lbl_02056eac
	cmp r0, #0x59
	beq lbl_02056eb4
	cmp r0, #0x5a
	beq lbl_02056ebc
	b lbl_02056cd8
lbl_02056eac:
	add r0, r4, #0
	dcd 0xF83BF000
	b lbl_02056cd8
lbl_02056eb4:
	add r0, r4, #0
	dcd 0xF847F000
	b lbl_02056cd8
lbl_02056ebc:
	add r0, r4, #0
	dcd 0xF85DF000
	b lbl_02056cd8
lbl_02056ec4:
	ldr r1, [r4]
	lsl r1, r1, #2
	add r1, r4
	ldr r1, [r1, #4]
	cmp r1, #1
	bne lbl_02056edc
	ldr r2, [r7]
	ldr r1, [r4, #0x48]
	add r2, r2, #1
	str r2, [r7]
	mov r2, #0x25
	strb r2, [r1]
lbl_02056edc:
	ldr r1, [r4]
	lsl r1, r1, #2
	add r1, r4
	ldr r1, [r1, #4]
	cmp r1, #1
	beq lbl_02056eea
	b lbl_02056cd8
lbl_02056eea:
	ldr r2, [r7]
	ldr r1, [r4, #0x48]
	add r2, r2, #1
	str r2, [r7]
	strb r0, [r1]
	b lbl_02056cd8
lbl_02056ef6:
	ldr r1, [r4, #0x48]
	add r0, r1, #1
	str r0, [r4, #0x48]
	mov r0, #0
	strb r0, [r1]
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void pad_02056f02(void)
{
	dcd 0x00000000
}

extern "C" asm void func_02056f04(void)
{
	push {r3, r4, r5, lr}
	add r4, r0, #0
	add r5, r1, #0
	add r1, r2, #0
	ldr r0, [pc, #0x14]
	add r2, r3, #0
	dcd 0xF8BCF7FD
	tst r0, r5
	beq lbl_02056f1c
	mov r0, #1
	b lbl_02056f1e
lbl_02056f1c:
	mov r0, #0
lbl_02056f1e:
	str r0, [r4, #0x44]
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x0210A464
}

extern "C" asm void func_02056f28(void)
{
	ldr r1, [r0]
	lsl r1, r1, #2
	add r1, r0
	ldr r1, [r1, #4]
	cmp r1, #0
	bne lbl_02056f38
	mov r1, #0
	str r1, [r0, #0x44]
lbl_02056f38:
	ldr r1, [r0]
	ldr r2, [r0, #0x44]
	add r1, r1, #1
	str r1, [r0]
	lsl r1, r1, #2
	add r0, r1
	str r2, [r0, #4]
	bx lr
}

extern "C" asm void func_02056f48(void)
{
	ldr r3, [r0]
	cmp r3, #0
	beq lbl_02056f78
	sub r1, r3, #1
	lsl r1, r1, #2
	add r1, r0
	ldr r1, [r1, #4]
	cmp r1, #0
	bne lbl_02056f64
	lsl r1, r3, #2
	mov r2, #0
	add r0, r1
	str r2, [r0, #4]
	bx lr
lbl_02056f64:
	add r2, r0, #4
	lsl r1, r3, #2
	ldr r0, [r2, r1]
	cmp r0, #1
	bne lbl_02056f74
	mov r0, #0
	str r0, [r2, r1]
	bx lr
lbl_02056f74:
	mov r0, #1
	str r0, [r2, r1]
lbl_02056f78:
	bx lr
}

extern "C" asm void pad_02056f7a(void)
{
	dcd 0x00000000
}

extern "C" asm void func_02056f7c(void)
{
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_02056f86
	sub r1, r1, #1
	str r1, [r0]
lbl_02056f86:
	bx lr
}
