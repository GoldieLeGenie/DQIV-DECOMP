/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0201e194(void);
    void func_0201e1c4(void);
    void func_0201e1f4(void);
    void func_0201e234(void);
    void func_0201e260(void);
    void func_0201e2f4(void);
    void pad_0201e316(void);
    void func_0201e318(void);
    void func_0201e350(void);
    void func_0201e3f4(void);
    void func_0201e554(void);
    void func_0201e674(void);
    void pad_0201e682(void);
    void func_0201e684(void);
    void func_0201e6c4(void);
    void _ZN6status10HaveStatus5getHpEv(void);
    void _ZN6status10HaveStatus5getMpEv(void);
    void _ZN6status10HaveStatus8getHpMaxEv(void);
    void _ZN6status10HaveStatus8getMpMaxEv(void);
    void _ZN6status11PartyStatus13setBattleModeEv(void);
    void _ZN6status11PartyStatus13setPlayerModeEv(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus19getCarriageOutCountEv(void);
    void _ZN6status14HaveStatusInfo10getDefenceEi(void);
    void _ZN6status14HaveStatusInfo12setNearDeathEv(void);
    void _ZN6status14HaveStatusInfo5getHpEv(void);
    void _ZN6status14HaveStatusInfo5getMpEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status14HaveStatusInfo7isSpellEv(void);
    void _ZN6status14HaveStatusInfo8isPoisonEv(void);
    void _ZN6status14HaveStatusInfo9getAttackEi(void);
    void _ZN6status6g_GameE(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status9UseAction14getWordDBIndexEi(void);
    void data_020b4f8c(void);
    void data_020b4f9c(void);
    void data_020b4fb8(void);
    void data_020bdca8(void);
    void data_020bdcc4(void);
    void data_020bdcfc(void);
    void data_020bdd26(void);
    void data_020bdd5e(void);
    void data_020bdd96(void);
    void data_020bdda8(void);
    void data_020bdde8(void);
    void data_020bde14(void);
    void data_020bdef4(void);
    void data_020bdefc(void);
    void data_020bdf00(void);
    void data_020bdf04(void);
    void data_020bdf08(void);
    void data_020bdf1c(void);
    void data_020be244(void);
    void func_0201e110(void);
    void func_0201e14c(void);
    void func_0201e87c(void);
    void func_0201e9d8(void);
    void func_0201eaf8(void);
    void func_02030a40(void);
    void func_02050698(void);
    void func_02050ea8(void);
    void func_02050ed0(void);
    void func_02050ee0(void);
    void func_02051a60(void);
    void func_02051a74(void);
}

#pragma thumb on
extern "C" asm void func_0201e194(void)
{
	push {r3, r4, r5, lr}
	add r5, r0, #0
	ldr r0, [pc, #0x20]
	add r4, r2, #0
	strh r5, [r0, #0x22]
	strh r1, [r0, #0x24]
	strh r4, [r0, #0x26]
	strh r3, [r0, #0x28]
	ldr r0, [pc, #0x18]
	mov r1, #0
	dcd 0xFE7EF032
	ldr r1, [sp, #0x10]
	cmp r1, #0
	ble lbl_0201e1ba
	add r0, r5, #0
	add r2, r4, #0
	dcd 0xF805F000
lbl_0201e1ba:
	pop {r3, r4, r5, pc}
	dcd 0x020BDCA8
	dcd 0x020BDCC4
}

extern "C" asm void func_0201e1c4(void)
{
	push {r3, r4, r5, r6, lr}
	sub sp, #0x1c
	ldr r6, [pc, #0x24]
	add r5, sp, #0
	mov r4, #0xe
lbl_0201e1ce:
	ldrh r3, [r6]
	add r6, r6, #2
	strh r3, [r5]
	add r5, r5, #2
	sub r4, r4, #1
	bne lbl_0201e1ce
	add r3, sp, #0
	strh r0, [r3, #6]
	strh r1, [r3, #8]
	add r0, sp, #0
	mov r1, #0
	strh r2, [r3, #0xa]
	dcd 0xFE5FF032
	add sp, #0x1c
	pop {r3, r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020B4F9C
}

extern "C" asm void func_0201e1f4(void)
{
	push {r3, r4, r5, r6, r7, lr}
	mov r0, #0
	add r1, r0, #0
	dcd 0xFA4DF032
	ldr r0, [pc, #0x30]
	mov r4, #0
	dcd 0xFA23F7F1
	cmp r0, #0
	ble lbl_0201e22c
	add r5, r4, #0
	mov r6, #0x18
	add r7, r4, #0
lbl_0201e210:
	add r0, r5, #0
	add r1, r7, #0
	mov r2, #0x40
	mov r3, #0x50
	str r6, [sp]
	dcd 0xFFBBF7FF
	ldr r0, [pc, #0x10]
	add r5, #0x40
	add r4, r4, #1
	dcd 0xFA12F7F1
	cmp r4, r0
	blt lbl_0201e210
lbl_0201e22c:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020C7B1C
}

extern "C" asm void func_0201e234(void)
{
	push {r3, lr}
	sub sp, #0x20
	ldr r3, [pc, #0x20]
	add r2, sp, #4
	mov r1, #0xe
lbl_0201e23e:
	ldrh r0, [r3]
	add r3, r3, #2
	strh r0, [r2]
	add r2, r2, #2
	sub r1, r1, #1
	bne lbl_0201e23e
	mov r0, #5
	str r0, [sp]
	add r0, sp, #4
	add r1, sp, #0
	dcd 0xFE29F032
	add sp, #0x20
	pop {r3, pc}
	mov r8, r8
	dcd 0x020B4FB8
}

extern "C" asm void func_0201e260(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x10
	ldr r0, [pc, #0x84]
	dcd 0xFEBBF7F0
	ldr r3, [pc, #0x84]
	mov r7, #0
	add r2, sp, #0
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [pc, #0x70]
	add r4, r7, #0
	add r5, r7, #0
	dcd 0xF9E5F7F1
	cmp r0, #0
	ble lbl_0201e2be
	add r6, sp, #0
lbl_0201e288:
	ldr r0, [pc, #0x60]
	add r1, r5, #0
	dcd 0xFD2EF7F0
	add r0, #8
	dcd 0xFD55F7F4
	cmp r0, #0
	beq lbl_0201e2a0
	stmia r6!, {r5}
	add r7, r7, #1
	b lbl_0201e2b2
lbl_0201e2a0:
	ldr r0, [pc, #0x48]
	add r1, r5, #0
	dcd 0xFD22F7F0
	add r0, #8
	add r1, r4, #0
	dcd 0xF952F000
	add r4, r4, #1
lbl_0201e2b2:
	ldr r0, [pc, #0x38]
	add r5, r5, #1
	dcd 0xF9C9F7F1
	cmp r5, r0
	blt lbl_0201e288
lbl_0201e2be:
	mov r6, #0
	cmp r7, #0
	ble lbl_0201e2de
	add r5, sp, #0
lbl_0201e2c6:
	ldr r0, [pc, #0x24]
	ldr r1, [r5]
	dcd 0xFD0FF7F0
	add r0, #8
	add r1, r6, r4
	dcd 0xF93FF000
	add r6, r6, #1
	add r5, r5, #4
	cmp r6, r7
	blt lbl_0201e2c6
lbl_0201e2de:
	dcd 0xFF89F7FF
	ldr r0, [pc, #8]
	dcd 0xFE56F7F0
	add sp, #0x10
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020C7B1C
	dcd 0x020B4F8C
}

extern "C" asm void func_0201e2f4(void)
{
	push {r4, lr}
	add r4, r0, #0
	dcd 0xFD22F7F4
	cmp r0, #0
	beq lbl_0201e304
	mov r0, #2
	pop {r4, pc}
lbl_0201e304:
	add r0, r4, #0
	dcd 0xFD03F7F4
	cmp r0, #0
	beq lbl_0201e312
	mov r0, #1
	pop {r4, pc}
lbl_0201e312:
	mov r0, #0
	pop {r4, pc}
}

extern "C" asm void pad_0201e316(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0201e318(void)
{
	push {r4, lr}
	add r4, r0, #0
	dcd 0xFD10F7F4
	cmp r0, #0
	beq lbl_0201e328
	mov r0, #2
	pop {r4, pc}
lbl_0201e328:
	add r0, r4, #0
	dcd 0xFD23F7F4
	cmp r0, #0
	beq lbl_0201e336
	mov r0, #3
	pop {r4, pc}
lbl_0201e336:
	add r0, r4, #0
lbl_0201e338:
	dcd 0xFD42F7F4
	cmp r0, #0
	beq lbl_0201e34c
	add r4, #0x44
	ldrh r0, [r4]
	cmp r0, #0x19
	beq lbl_0201e34c
	mov r0, #4
	pop {r4, pc}
lbl_0201e34c:
	mov r0, #0
	pop {r4, pc}
}

extern "C" asm void func_0201e350(void)
{
	push {r3, r4, r5, r6, lr}
	sub sp, #0xc
	add r5, r0, #0
	add r6, r1, #0
	cmp r2, #0
	beq lbl_0201e36a
	ldr r0, [pc, #0x80]
	ldr r4, [pc, #0x84]
	ldr r0, [r0, #0x3c]
	str r0, [sp, #4]
	mov r0, #0
	str r0, [sp, #8]
	b lbl_0201e376
lbl_0201e36a:
	ldr r0, [pc, #0x74]
	ldr r4, [pc, #0x78]
	ldr r0, [r0, #0x34]
	str r0, [sp, #4]
	ldr r0, [pc, #0x78]
	str r0, [sp, #8]
lbl_0201e376:
	mov r0, #0
	mvn r0, r0
	cmp r5, r0
	bne lbl_0201e3b4
	cmp r6, r0
	bne lbl_0201e3b4
	mov r0, #0xb6
	strh r0, [r4, #6]
	mov r0, #0x38
	strh r0, [r4, #0xa]
	mov r0, #0
	add r1, r0, #0
	dcd 0xF983F032
	ldr r2, [pc, #0x5c]
	add r0, r4, #0
	ldr r2, [r2]
	add r1, sp, #4
	dcd 0xFD99F032
	mov r0, #0
	mvn r0, r0
	str r0, [sp]
	mov r0, #0xb0
	mov r1, #0xa0
	mov r2, #0x50
	mov r3, #0x20
	dcd 0xFEF2F7FF
	add sp, #0xc
	pop {r3, r4, r5, r6, pc}
lbl_0201e3b4:
	add r0, r5, #6
	strh r0, [r4, #6]
	mov r0, #0x38
	strh r0, [r4, #0xa]
	ldr r2, [pc, #0x30]
	add r0, r4, #0
	ldr r2, [r2]
	add r1, sp, #4
	dcd 0xFD84F032
	mov r0, #0
	mvn r0, r0
	str r0, [sp]
	add r0, r5, #0
	add r1, r6, #0
	mov r2, #0x50
	mov r3, #0x20
	dcd 0xFEDDF7FF
	add sp, #0xc
	pop {r3, r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020C7D9C
lbl_0201e3e4:
	dcd 0x020BDCA8
	dcd 0x020BDCFC
	dcd 0xA000003C
	dcd 0x020BE244
}

extern "C" asm void func_0201e3f4(void)
{
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x58
	add r5, r0, #0
	ldr r0, [pc, #0x11c]
	mov r4, #0
	str r0, [sp, #0xc]
	mov r0, #0x90
	add r6, r4, #0
	mov r7, #0x18
	str r0, [sp, #8]
	str r4, [sp, #4]
	cmp r1, #1
	bne lbl_0201e424
	add r0, r4, #0
	add r1, r4, #0
	dcd 0xF941F032
	mov r0, #0
	str r0, [sp, #8]
	mov r0, #0x58
	sub r4, #0x90
	add r6, #0x58
	str r0, [sp, #4]
	mov r7, #0x70
lbl_0201e424:
	ldr r0, [pc, #0xf4]
	add r1, r5, #0
	dcd 0xFC60F7F0
	add r5, r0, #0
	add r5, #8
	add r0, r5, #0
	add r0, #0x44
	ldrh r1, [r0]
	mov r0, #5
	lsl r0, r0, #0x1c
	add r0, r1
	str r0, [sp, #0x1c]
	ldr r0, [pc, #0xe0]
	str r0, [sp, #0x20]
	add r0, r5, #0
	add r0, #0x44
	dcd 0xFDF5F7F2
	str r0, [sp, #0x24]
	ldr r0, [pc, #0xd4]
	str r0, [sp, #0x28]
	add r0, r5, #0
	add r0, #0x44
	dcd 0xFDFAF7F2
	str r0, [sp, #0x2c]
	ldr r0, [pc, #0xcc]
	str r0, [sp, #0x30]
	add r0, r5, #0
	add r0, #0x44
	dcd 0xFE07F7F2
	str r0, [sp, #0x34]
	ldr r0, [pc, #0xb8]
	str r0, [sp, #0x38]
	add r0, r5, #0
	add r0, #0x44
	dcd 0xFE0CF7F2
	str r0, [sp, #0x3c]
	ldr r0, [pc, #0xb4]
	mov r1, #0
	str r0, [sp, #0x40]
	ldr r0, [pc, #0xb0]
	str r0, [sp, #0x44]
	add r0, r5, #0
	dcd 0xF85FF7F4
	str r0, [sp, #0x48]
	ldr r0, [pc, #0xa8]
	mov r1, #0
	str r0, [sp, #0x4c]
	ldr r0, [pc, #0xa0]
	str r0, [sp, #0x50]
	add r0, r5, #0
	dcd 0xF900F7F4
	str r0, [sp, #0x54]
	ldr r0, [pc, #0x9c]
	str r0, [sp, #0x10]
	ldr r0, [pc, #0x90]
	str r0, [sp, #0x14]
	add r0, r5, #0
	add r0, #0x52
	ldrb r0, [r0]
	str r0, [sp, #0x18]
	ldr r0, [pc, #0x90]
	ldr r0, [r0]
	cmp r0, #2
	bne lbl_0201e4b6
	ldr r0, [pc, #0x8c]
	str r0, [sp, #0x14]
lbl_0201e4b6:
	mov r0, #0x53
	ldrsb r0, [r5, r0]
	cmp r0, #0
	beq lbl_0201e4c2
	mov r0, #1
	b lbl_0201e4c4
lbl_0201e4c2:
	mov r0, #0
lbl_0201e4c4:
	cmp r0, #0
	bne lbl_0201e4d0
	ldr r0, [pc, #0x78]
	str r0, [sp, #0x18]
	ldr r0, [pc, #0x78]
	str r0, [sp, #0xc]
lbl_0201e4d0:
	add r0, r5, #0
	dcd 0xFF0FF7FF
	lsl r1, r0, #2
	ldr r0, [pc, #0x70]
	add r2, r4, #0
	ldr r0, [r0, r1]
	add r1, sp, #0x1c
	str r0, [sp]
	ldr r0, [pc, #0x6c]
	add r3, r6, #0
	dcd 0xFCFBF032
	add r0, r5, #0
	dcd 0xFF02F7FF
	lsl r1, r0, #2
	ldr r0, [pc, #0x58]
	add r2, r4, #0
	ldr r0, [r0, r1]
	add r1, sp, #0x10
	str r0, [sp]
	ldr r0, [sp, #0xc]
	add r3, r6, #0
	dcd 0xFCEEF032
	ldr r0, [sp, #8]
	ldr r1, [sp, #4]
	mov r2, #0x70
	mov r3, #0x68
	str r7, [sp]
	dcd 0xFE41F7FF
	add sp, #0x58
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BDD5E
	dcd 0x020C7B1C
	dcd 0xA0000001
	dcd 0x020BDEF4
	dcd 0xA0000002
	dcd 0xA000000C
	dcd 0x020BDEFC
	dcd 0xA000000D
	dcd 0xA0000013
	dcd 0x020D0BC0
	dcd 0x020BDF00
	dcd 0x020BDF04
	dcd 0x020BDD26
	dcd 0x020BE244
	dcd 0x020BDE14
}

extern "C" asm void func_0201e554(void)
{
	push {r4, r5, lr}
	sub sp, #0x24
	add r5, r0, #0
	mov r0, #0
	add r4, r1, #0
	add r1, r0, #0
	dcd 0xF89AF032
	add r0, r5, #0
	add r0, #0x44
	ldrh r1, [r0]
	mov r0, #5
	lsl r0, r0, #0x1c
	add r0, r1
	str r0, [sp, #4]
	ldr r0, [pc, #0xd4]
	str r0, [sp, #8]
	add r0, r5, #0
	dcd 0xFDD0F7F3
	str r0, [sp, #0xc]
	ldr r0, [pc, #0xcc]
	str r0, [sp, #0x10]
	add r0, r5, #0
	dcd 0xFE62F7F3
	str r0, [sp, #0x14]
	add r0, r5, #0
	dcd 0xFEC4F7FF
	cmp r0, #2
	beq lbl_0201e59a
	cmp r0, #3
	beq lbl_0201e5b8
lbl_0201e598:
	b lbl_0201e5d6
lbl_0201e59a:
	ldr r1, [pc, #0xb4]
	add r0, r5, #0
	dcd 0xFA4FF012
	str r0, [sp, #0x18]
	ldr r0, [pc, #0xac]
	mov r1, #0
	strb r1, [r0, #2]
	strb r1, [r0, #0x10]
lbl_0201e5ac:
	ldr r0, [pc, #0xa8]
	mov r1, #7
	strh r1, [r0, #0x3a]
	mov r1, #0x30
	strh r1, [r0, #0x3e]
	b lbl_0201e62a
lbl_0201e5b8:
	ldr r1, [pc, #0xa0]
	add r0, r5, #0
	dcd 0xFA40F012
	str r0, [sp, #0x18]
	ldr r0, [pc, #0x90]
	mov r1, #0
	strb r1, [r0, #2]
	strb r1, [r0, #0x10]
	ldr r0, [pc, #0x8c]
	mov r1, #7
	strh r1, [r0, #0x3a]
	mov r1, #0x30
	strh r1, [r0, #0x3e]
	b lbl_0201e62a
lbl_0201e5d6:
	mov r0, #0x53
lbl_0201e5d8:
	ldrsb r0, [r5, r0]
	cmp r0, #0
	beq lbl_0201e5e2
	mov r0, #1
	b lbl_0201e5e4
lbl_0201e5e2:
	mov r0, #0
lbl_0201e5e4:
	cmp r0, #0
	ldr r0, [pc, #0x78]
	bne lbl_0201e608
	str r0, [sp, #0x18]
	ldr r0, [pc, #0x74]
	mov r1, #0xd
	str r0, [sp, #0x1c]
	ldr r0, [pc, #0x60]
	strb r1, [r0, #2]
	strb r1, [r0, #0x10]
	ldr r0, [pc, #0x6c]
	mov r1, #8
	str r0, [sp, #0x20]
	ldr r0, [pc, #0x58]
	strh r1, [r0, #0x3a]
	mov r1, #0x10
	strh r1, [r0, #0x3e]
	b lbl_0201e62a
lbl_0201e608:
	str r0, [sp, #0x18]
	ldr r0, [pc, #0x58]
	mov r1, #0xd
	str r0, [sp, #0x1c]
	add r0, r5, #0
	add r0, #0x52
	ldrb r0, [r0]
	str r0, [sp, #0x20]
	ldr r0, [pc, #0x38]
	strb r1, [r0, #2]
	mov r1, #0xf
	strb r1, [r0, #0x10]
	ldr r0, [pc, #0x34]
	mov r1, #8
	strh r1, [r0, #0x3a]
	mov r1, #0x10
lbl_0201e628:
	strh r1, [r0, #0x3e]
lbl_0201e62a:
	add r0, r5, #0
	dcd 0xFE62F7FF
	lsl r1, r0, #2
	ldr r0, [pc, #0x38]
	lsl r2, r4, #6
	ldr r0, [r0, r1]
	add r1, sp, #4
	str r0, [sp]
	ldr r0, [pc, #0x30]
	mov r3, #0
	dcd 0xFC4EF032
	add sp, #0x24
	pop {r4, r5, pc}
	dcd 0xA0000001
	dcd 0xA0000002
	dcd 0xA0000014
	dcd 0x020BDDE8
	dcd 0x020BDDA8
	dcd 0xA0000018
	dcd 0xA000003F
	dcd 0x020BDEFC
	dcd 0x020BDF04
	dcd 0x020BE244
	dcd 0x020BDD96
}

extern "C" asm void func_0201e674(void)
{
	push {r3, lr}
	dcd 0xFF3BF7F6
	mov r1, #7
	lsl r1, r1, #0x1c
	add r0, r1
	pop {r3, pc}
}

extern "C" asm void pad_0201e682(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0201e684(void)
{
	push {r3, r4, r5, r6, r7, lr}
	add r4, r1, #0
	add r6, r2, #0
	mov r2, #1
	add r7, r3, #0
	ldr r1, [pc, #0x30]
	add r3, r2, #0
	add r5, r0, #0
	str r2, [sp]
	dcd 0xF9E3F033
	cmp r6, #0
	bne lbl_0201e6b0
	mov r0, #0
	mov r2, #1
	str r0, [sp]
	ldr r1, [pc, #0x18]
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xF9D9F033
	pop {r3, r4, r5, r6, r7, pc}
lbl_0201e6b0:
	ldr r2, [sp, #0x18]
	add r0, r5, #0
	add r1, r7, #0
	str r4, [r5, #0x38]
	dcd 0xF9DCF033
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BDF08
}

extern "C" asm void func_0201e6c4(void)
{
	push {r3, r4, r5, lr}
	str r1, [sp]
	add r4, r2, #0
	ldr r1, [pc, #0x10]
	mov r2, #2
	mov r3, #3
	add r5, r0, #0
	dcd 0xF9C5F033
	str r4, [r5, #0x38]
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BDF1C
}
