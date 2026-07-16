/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0201a990(void);
    void func_0201aa6c(void);
    void func_0201aad0(void);
    void pad_0201ab5e(void);
    void func_0201ab60(void);
    void func_0201abe8(void);
    void func_0201ac60(void);
    void func_0201ad24(void);
    void _ZN6status10ExcelParam11getItemDataEv(void);
    void _ZN6status10excelParamE(void);
    void _ZN6status12BaseHaveItem10getItemMaxEv(void);
    void _ZN6status12BaseHaveItem11getItemDataEi(void);
    void _ZN6status12BaseHaveItem7getItemEi(void);
    void _ZN6status12BaseHaveItem8getCountEv(void);
    void _ZN6status13HaveEquipment10removeItemEj(void);
    void _ZN6status14HaveStatusInfo15resetEquipment1Ei(void);
    void _ZN6status14HaveStatusInfo15resetEquipment2E8ItemType(void);
    void _ZN6status7UseItem12UseitemData_E(void);
    void _ZN6status7UseItem18getBattleUseActionEi(void);
    void _ZN6status7UseItem6isLostEi(void);
    void _ZN6status7UseItem9getActionEi(void);
    void _ZN6status8HaveItem11isEquipmentEi(void);
    void _ZN6status8HaveItem13sortEquipmentEv(void);
    void func_02015b70(void);
    void func_0201a3ec(void);
    void func_0201a430(void);
}

#pragma thumb on
extern "C" asm void func_0201a990(void)
{
	push {r3, r4, r5, lr}
	add r5, r0, #0
	mov r0, #0x13
	lsl r0, r0, #4
	ldr r4, [r5, r0]
	sub r0, #0xc
	ldr r0, [r5, r0]
	cmp r0, #0
	beq lbl_0201a9ae
	add r1, r4, #0
	dcd 0xFB06F7F9
	ldr r1, [pc, #0xbc]
	str r0, [r1, #0x18]
	b lbl_0201a9c6
lbl_0201a9ae:
	ldr r0, [r5]
	cmp r0, #0
	beq lbl_0201a9c6
	add r0, #0x78
	add r1, r4, #0
	dcd 0xFAFCF7F9
	ldr r1, [pc, #0xa8]
	str r0, [r1, #0x18]
	mov r1, #0x4b
	lsl r1, r1, #2
	str r0, [r5, r1]
lbl_0201a9c6:
	ldr r0, [pc, #0xa0]
	ldr r0, [r0, #0x18]
	dcd 0xFF1DF7FF
	ldr r1, [pc, #0x98]
	str r0, [r1, #0x14]
	mov r1, #0x4a
	lsl r1, r1, #2
	str r0, [r5, r1]
	add r0, r5, #0
	dcd 0xF8C9F7FB
	mov r0, #0x4a
	lsl r0, r0, #4
	ldr r0, [r5, r0]
	cmp r0, #0
	bne lbl_0201a9f0
	ldr r0, [pc, #0x7c]
	ldr r0, [r0, #0x18]
	cmp r0, #0x80
	bne lbl_0201aa64
lbl_0201a9f0:
	ldr r0, [pc, #0x74]
	ldr r0, [r0, #0x18]
	dcd 0xFDBEF7FF
	cmp r0, #0
	beq lbl_0201aa24
	mov r0, #0x49
	lsl r0, r0, #2
	ldr r0, [r5, r0]
	cmp r0, #0
	beq lbl_0201aa14
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2, #8]
	blx r2
	ldr r1, [pc, #0x58]
	str r0, [r1, #0x18]
	b lbl_0201aa24
lbl_0201aa14:
	ldr r0, [r5]
	cmp r0, #0
	beq lbl_0201aa24
	add r0, #0x78
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2, #8]
	blx r2
lbl_0201aa24:
	dcd 0xFD04F7FF
	cmp r0, #0
	beq lbl_0201aa64
	mov r0, #0
	dcd 0xFCDDF7FF
	mov r0, #0x49
	lsl r0, r0, #2
	ldr r0, [r5, r0]
	cmp r0, #0
	beq lbl_0201aa4a
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2, #8]
	blx r2
	ldr r1, [pc, #0x20]
	str r0, [r1, #0x18]
	pop {r3, r4, r5, pc}
lbl_0201aa4a:
	ldr r0, [r5]
	cmp r0, #0
	beq lbl_0201aa64
	add r0, #8
	mov r1, #4
	dcd 0xFA6AF7F8
	ldr r0, [r5]
	add r1, r4, #0
	add r0, #0x78
	ldr r2, [r0]
	ldr r2, [r2, #8]
	blx r2
lbl_0201aa64:
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020D0820
}

extern "C" asm void func_0201aa6c(void)
{
	push {r3, r4, r5, lr}
	add r5, r0, #0
	mov r0, #0x13
	lsl r0, r0, #4
	ldr r4, [r5, r0]
	ldr r0, [r5]
	add r1, r4, #0
	add r0, #0x78
	dcd 0xFA9AF7F9
	ldr r2, [pc, #0x48]
	mov r1, #0x4b
	str r0, [r2, #0x18]
	lsl r1, r1, #2
	str r0, [r5, r1]
	ldr r0, [r2, #0x18]
	dcd 0xFEC4F7FF
	ldr r1, [pc, #0x38]
	str r0, [r1, #0x14]
	mov r1, #0x4a
	lsl r1, r1, #2
	str r0, [r5, r1]
	add r0, r5, #0
	dcd 0xF868F7FB
	mov r0, #0x4a
	lsl r0, r0, #4
	ldr r0, [r5, r0]
	cmp r0, #0
	bne lbl_0201aab2
	ldr r0, [pc, #0x20]
	ldr r0, [r0, #0x18]
	cmp r0, #0x80
	bne lbl_0201aaca
lbl_0201aab2:
	ldr r0, [pc, #0x18]
	ldr r0, [r0, #0x18]
	dcd 0xFD5DF7FF
	cmp r0, #0
	beq lbl_0201aaca
	ldr r0, [r5]
	add r1, r4, #0
	add r0, #0x78
	ldr r2, [r0]
	ldr r2, [r2, #8]
	blx r2
lbl_0201aaca:
	pop {r3, r4, r5, pc}
	dcd 0x020D0820
}

extern "C" asm void func_0201aad0(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r5, r2, #0
	add r6, r0, #0
	add r0, r5, #0
	add r7, r1, #0
	dcd 0xFA55F7F9
	add r4, r0, #0
	add r0, r5, #0
	dcd 0xFA9FF7F9
	cmp r4, r0
	bne lbl_0201ab40
	add r0, r5, #0
	dcd 0xFA9AF7F9
	cmp r0, #0xa2
	beq lbl_0201ab5c
	add r0, r5, #0
	dcd 0xFA47F7F9
	add r1, r0, #0
	add r0, r5, #0
	sub r1, r1, #1
	dcd 0xFA58F7F9
	add r4, r0, #0
	add r0, r5, #0
	dcd 0xFA3EF7F9
	add r1, r0, #0
	add r0, r5, #0
	ldr r2, [r0]
	sub r1, r1, #1
	ldr r2, [r2, #8]
	blx r2
	add r0, r6, #0
	add r1, r7, #0
	dcd 0xFA4AF7F9
	add r1, r0, #0
	add r0, r5, #0
	ldr r2, [r0]
	ldr r2, [r2, #4]
	blx r2
	add r0, r6, #0
	ldr r2, [r0]
	add r1, r7, #0
	ldr r2, [r2, #8]
	blx r2
	add r0, r6, #0
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2, #4]
	blx r2
	pop {r3, r4, r5, r6, r7, pc}
lbl_0201ab40:
	add r0, r6, #0
	add r1, r7, #0
	dcd 0xFA36F7F9
	add r1, r0, #0
	add r0, r5, #0
	ldr r2, [r0]
	ldr r2, [r2, #4]
	blx r2
	add r0, r6, #0
	ldr r2, [r0]
	add r1, r7, #0
	ldr r2, [r2, #8]
	blx r2
lbl_0201ab5c:
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void pad_0201ab5e(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0201ab60(void)
{
	push {r3, r4, r5, r6, r7, lr}
	mov r7, #0
	add r5, r0, #0
	add r6, r2, #0
	sub r2, r7, #1
	add r0, r3, #0
	add r4, r1, #0
	str r3, [sp]
	cmp r0, r2
	bne lbl_0201aba6
	add r0, r5, #0
	add r0, #0x70
	dcd 0xFDC6F7F5
	cmp r0, #0
	beq lbl_0201ab8c
	add r0, r5, #0
	add r0, #0x70
	add r1, r4, #0
	dcd 0xFA15F7F9
	add r7, r0, #0
lbl_0201ab8c:
	add r0, r5, #0
	add r0, #0x70
	add r1, r4, #0
	add r2, r6, #0
	dcd 0xFF9CF7FF
	mov r0, #0x4f
	lsl r0, r0, #2
	add r0, r5
	add r1, r7, #0
	dcd 0xFDFEF7F6
	pop {r3, r4, r5, r6, r7, pc}
lbl_0201aba6:
	add r0, r5, #0
	add r0, #0x70
	dcd 0xFDADF7F5
	cmp r0, #0
	beq lbl_0201abba
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xF9A7F7F8
lbl_0201abba:
	add r5, #0x70
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFA12F7F9
	add r4, r0, #0
	ldr r1, [sp]
	add r0, r6, #0
	dcd 0xF9F3F7F9
	add r5, r0, #0
	add r0, r6, #0
	ldr r2, [r0]
	ldrb r1, [r4]
	ldr r2, [r2, #4]
	blx r2
	add r0, r6, #0
	ldr r2, [r0]
	ldr r1, [sp]
	ldr r2, [r2, #8]
	blx r2
	strb r5, [r4]
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0201abe8(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r4, r2, #0
	mov r2, #0
	add r6, r3, #0
	mvn r2, r2
	add r5, r0, #0
	str r1, [sp]
	cmp r6, r2
	bne lbl_0201ac04
	add r4, #0x70
	add r2, r4, #0
	dcd 0xFF67F7FF
	pop {r3, r4, r5, r6, r7, pc}
lbl_0201ac04:
	add r0, r4, #0
	add r0, #0x70
	add r1, r6, #0
	mov r7, #0
	dcd 0xFD7CF7F5
	cmp r0, #0
	beq lbl_0201ac20
	add r0, r4, #0
	add r0, #0x70
	add r1, r6, #0
	dcd 0xF9CBF7F9
	add r7, r0, #0
lbl_0201ac20:
	mov r0, #0x4f
	lsl r0, r0, #2
	add r0, r4
	add r1, r7, #0
	dcd 0xFDBAF7F6
	ldr r1, [sp]
	add r0, r5, #0
	dcd 0xF9DAF7F9
	add r4, #0x70
	add r7, r0, #0
	add r0, r4, #0
	add r1, r6, #0
	dcd 0xF9D4F7F9
	ldrb r4, [r0]
	ldrb r1, [r7]
	strb r1, [r0]
	mov r1, #0
	strb r1, [r0, #1]
	add r0, r5, #0
	ldr r2, [r0]
	ldr r1, [sp]
	ldr r2, [r2, #8]
	blx r2
	add r0, r5, #0
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2, #4]
	blx r2
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0201ac60(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	mov r0, #0
	str r0, [sp]
	add r6, r3, #0
	sub r0, r0, #1
	add r7, r1, #0
	add r4, r2, #0
	cmp r6, r0
	bne lbl_0201aca8
	add r0, r5, #0
	add r0, #0x70
	dcd 0xFD46F7F5
	cmp r0, #0
	beq lbl_0201ac8c
	add r0, r5, #0
	add r0, #0x70
	add r1, r7, #0
	dcd 0xF995F7F9
	str r0, [sp]
lbl_0201ac8c:
	add r0, r5, #0
	add r4, #0x70
	add r0, #0x70
	add r1, r7, #0
	add r2, r4, #0
	dcd 0xFF1BF7FF
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r1, [sp]
	add r0, r5
	dcd 0xFD7DF7F6
	pop {r3, r4, r5, r6, r7, pc}
lbl_0201aca8:
	add r0, r5, #0
	add r0, #0x70
	dcd 0xFD2CF7F5
	cmp r0, #0
	beq lbl_0201acca
	add r0, r5, #0
	add r0, #0x70
	add r1, r7, #0
	dcd 0xF97BF7F9
	add r1, r0, #0
	mov r0, #0x4f
	lsl r0, r0, #2
	add r0, r5
	dcd 0xFD6BF7F6
lbl_0201acca:
	add r0, r4, #0
	add r0, #0x70
	add r1, r6, #0
	dcd 0xFD1AF7F5
	cmp r0, #0
	beq lbl_0201acee
	add r0, r4, #0
	add r0, #0x70
	add r1, r6, #0
	dcd 0xF969F7F9
	add r1, r0, #0
	mov r0, #0x4f
	lsl r0, r0, #2
	add r0, r4
	dcd 0xFD59F7F6
lbl_0201acee:
	add r0, r5, #0
	add r0, #0x70
	add r1, r7, #0
	dcd 0xF978F7F9
	add r7, r0, #0
	add r0, r4, #0
	add r0, #0x70
	add r1, r6, #0
	dcd 0xF972F7F9
	mov r1, #0
	strb r1, [r7, #1]
	strb r1, [r0, #1]
	ldrb r2, [r7]
	ldrb r1, [r0]
	add r5, #0x70
	strb r1, [r7]
	strb r2, [r0]
	add r0, r5, #0
	dcd 0xFCFDF7F5
	add r4, #0x70
	add r0, r4, #0
	dcd 0xFCF9F7F5
	pop {r3, r4, r5, r6, r7, pc}
}

extern "C" asm void func_0201ad24(void)
{
	push {r3, lr}
	ldr r0, [pc, #0xc]
	dcd 0xFB46F7F2
	ldr r1, [pc, #8]
	str r0, [r1]
	pop {r3, pc}
	mov r8, r8
	dcd 0x020C79B8
	dcd 0x020D0890
}
