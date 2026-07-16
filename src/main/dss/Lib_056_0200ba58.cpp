/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_0200ba58(void);
    void func_0200ba8c(void);
    void func_0200bab8(void);
    void func_0200baf4(void);
    void func_0200bb44(void);
    void func_0200bc14(void);
    void pad_0200bc36(void);
    void func_0200bc38(void);
    void func_0200bc80(void);
    void func_0200bca8(void);
    void func_0200bcc4(void);
    void func_0200bd08(void);
    void func_0200bd30(void);
    void func_0200bd4c(void);
    void func_0200bd68(void);
    void func_0200bd84(void);
    void func_0200bda8(void);
    void pad_0200bdb6(void);
    void func_0200bdb8(void);
    void func_0200bdbc(void);
    void func_0200bdd0(void);
    void pad_0200bdd2(void);
    void func_0200bdd4(void);
    void func_0200be4c(void);
    void pad_0200be5e(void);
    void func_0200be60(void);
    void pad_0200be8a(void);
    void func_0200be8c(void);
    void func_0200be98(void);
    void pad_0200beba(void);
    void func_0200bebc(void);
    void pad_0200bed2(void);
    void func_0200bed4(void);
    void func_0200bef8(void);
    void func_0200bf08(void);
    void func_0200bf1c(void);
    void func_0200bf30(void);
    void func_0200bf44(void);
    void pad_0200bf46(void);
    void func_0200bf48(void);
    void pad_0200bf5e(void);
    void func_0200bf60(void);
    void pad_0200bf72(void);
    void func_0200bf74(void);
    void func_0200bf94(void);
    void pad_0200bf96(void);
    void func_0200bf98(void);
    void func_0200bfc4(void);
    void func_0200bff8(void);
    void func_0200c004(void);
    void func_0200c010(void);
    void func_0200c020(void);
    void func_0200c02c(void);
    void func_0200c038(void);
    void _ZN3dss11Fx32Vector3aSERKS0_(void);
    void _ZN3dss8DssUtils8strcpy_sEPciS1_(void);
    void _ZN6Global10setMapNameEPc(void);
    void _ZN6Global15setRanarutaFlagEb(void);
    void _ZN6status11PartyStatus10isHaveItemEi(void);
    void _ZN6status11PartyStatus18recoveryDemolitionEv(void);
    void _ZN6status11StageStatus13restartChurchEv(void);
    void _ZN6status11StageStatus15playerClearFlagEv(void);
    void _ZN6status11StoryStatus10setChapterEi(void);
    void _ZN6status13BattleHistory28regenesisChapterWipeoutCountEv(void);
    void _ZN6status14g_BattleResultE(void);
    void _ZN6status15BasePartyStatus7setGoldEi(void);
    void _ZN6status15g_BattleHistoryE(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status7g_StoryE(void);
    void _ZN6status8GameFlag5clearEv(void);
    void _s32_div_f(void);
    void data_020bc260(void);
    void data_020bc28c(void);
    void data_020bc2c0(void);
    void data_020bc2c8(void);
    void data_020bc2d0(void);
    void data_020bc2e8(void);
    void data_020c7658(void);
    void data_020c7678(void);
    void data_020c7768(void);
    void data_020c7774(void);
    void data_020c7784(void);
    void data_020ed28c(void);
    void data_0210bb94(void);
    void data_0210bc18(void);
    void data_0211c4f0(void);
    void func_02008ea0(void);
    void func_0200a6c8(void);
    void func_02026bd8(void);
    void func_02026ca0(void);
    void func_02026cac(void);
    void func_02028494(void);
    void func_02030fe0(void);
    void func_020369d0(void);
    void func_0203706c(void);
    void func_020474b4(void);
    void func_02047548(void);
    void func_020559ec(void);
    void func_02057404(void);
    void func_020574bc(void);
    void func_020580fc(void);
    void func_02058104(void);
    void func_0205810c(void);
    void func_02058294(void);
    void func_020582b8(void);
    void func_0207ed24(void);
    void func_0207ed3c(void);
    void func_0208214c(void);
    void func_020882b0(void);
    void g_AreaFlag(void);
    void g_LocalFlag(void);
    void g_Stage(void);
}

#pragma thumb on
extern "C" asm void func_0200ba58(void)
{
	push {r4, lr}
	ldr r1, [pc, #0x24]
	add r4, r0, #0
	dcd 0xFFD1F7FF
	ldr r0, [pc, #0x20]
	mov r1, #0xe
	dcd 0xF9A7F000
	ldr r0, [pc, #0x1c]
	ldr r1, [pc, #0x14]
	dcd 0xEC12F04C
	add r0, r4, #0
	mov r1, #0x1e
	dcd 0xF925F000
	mov r0, #1
	str r0, [r4, #0x24]
	pop {r4, pc}
	dcd 0x020BC260
	dcd 0x020C7658
	dcd 0x0210BC18
}

extern "C" asm void func_0200ba8c(void)
{
	push {r4, lr}
	add r4, r0, #0
	dcd 0xFE1AF7FE
	ldr r0, [r0]
	cmp r0, #0
	bne lbl_0200baa0
	dcd 0xF89DF01B
	b lbl_0200baa4
lbl_0200baa0:
	dcd 0xF8FEF01B
lbl_0200baa4:
	dcd 0xEF94F02A
	mov r1, #4
	dcd 0xEAE0F02B
	add r0, r4, #0
	mov r1, #1
	dcd 0xFF9FF7FF
	pop {r4, pc}
}

extern "C" asm void func_0200bab8(void)
{
	push {r4, lr}
	add r4, r0, #0
	mov r0, #1
	dcd 0xEA90F025
	ldr r0, [pc, #0x24]
	dcd 0xEB22F04C
	str r0, [r4]
	ldr r0, [pc, #0x20]
	mov r1, #0xd
	dcd 0xF973F000
	ldr r0, [pc, #0x1c]
	ldr r1, [pc, #0x14]
	dcd 0xEBDEF04C
	mov r0, #1
	str r0, [r4, #0x24]
	add r0, r4, #0
	mov r1, #0xf
	dcd 0xF8EFF000
	pop {r4, pc}
	dcd 0x0210BB94
	dcd 0x020C7658
	dcd 0x0210BC18
}

extern "C" asm void func_0200baf4(void)
{
	push {r4, lr}
	add r4, r0, #0
	mov r0, #1
	dcd 0xEA72F025
	dcd 0xFDE3F7FE
	ldr r0, [r0]
	cmp r0, #0
	bne lbl_0200bb0e
	dcd 0xF866F01B
lbl_0200bb0c:
	b lbl_0200bb12
lbl_0200bb0e:
	dcd 0xF8C7F01B
lbl_0200bb12:
	ldr r0, [pc, #0x24]
	dcd 0xEAFAF04C
	str r0, [r4]
	ldr r0, [pc, #0x20]
	mov r1, #0xd
	dcd 0xF94BF000
	ldr r0, [pc, #0x1c]
	ldr r1, [pc, #0x14]
	dcd 0xEBB6F04C
	mov r0, #1
	str r0, [r4, #0x24]
	add r0, r4, #0
	mov r1, #0xf
	dcd 0xF8C7F000
	pop {r4, pc}
	dcd 0x0210BB94
	dcd 0x020C7658
	dcd 0x0210BC18
}

extern "C" asm void func_0200bb44(void)
{
	push {r3, r4, r5, lr}
	add r5, r0, #0
	mov r0, #0
	add r4, r1, #0
	dcd 0xEA48F025
	ldr r0, [r5, #0x54]
	cmp r0, #0
	beq lbl_0200bb70
	ldr r0, [pc, #0x94]
	dcd 0xFEAEF011
	add r1, r5, #0
	add r2, r5, #0
	mov r3, #0
	ldr r0, [pc, #0x8c]
	add r1, #0x58
	add r2, #0x48
	str r3, [r5, #0x54]
	dcd 0xEC94F01C
	b lbl_0200bbdc
lbl_0200bb70:
	cmp r4, #0
	bne lbl_0200bb86
	ldr r0, [pc, #0x7c]
	ldr r1, [r5]
	dcd 0xF91EF000
	ldr r0, [pc, #0x78]
	ldr r1, [pc, #0x74]
	dcd 0xEB88F04C
	b lbl_0200bbdc
lbl_0200bb86:
	ldr r0, [pc, #0x64]
	dcd 0xFE96F011
	ldr r0, [pc, #0x6c]
	dcd 0xFE93F011
	ldr r0, [pc, #0x6c]
	dcd 0xFC06F011
	ldr r0, [pc, #0x68]
	mov r1, #0
	str r1, [r0]
	dcd 0xFA5FF017
	ldr r0, [pc, #0x64]
	mov r1, #0
	str r1, [r0, #0xc]
	str r1, [r0, #0x10]
	ldr r0, [pc, #0x54]
	dcd 0xFB0CF011
	ldr r0, [pc, #0x58]
	mov r1, #0x89
	ldr r4, [r0, #0x34]
	ldr r0, [pc, #0x58]
	dcd 0xFFC6F003
	cmp r0, #0
	bne lbl_0200bbc4
	add r0, r4, #1
	lsr r4, r0, #1
lbl_0200bbc4:
	ldr r0, [pc, #0x48]
	add r1, r4, #0
	dcd 0xFDAEF002
	ldr r0, [pc, #0x3c]
	mov r1, #0
	str r1, [r0, #0x4c]
	str r1, [r0, #0x50]
	str r1, [r0, #0x48]
	ldr r0, [pc, #0x38]
	dcd 0xFE76F003
lbl_0200bbdc:
	dcd 0xF866F01B
	add r0, r5, #0
	mov r1, #0x1e
	dcd 0xF86EF000
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020D0EBC
	dcd 0x020ED28C
	dcd 0x020C7658
	dcd 0x0210BC18
	dcd 0x020D0F3C
	dcd 0x020D08E0
	dcd 0x020ECD3C
	dcd 0x020ECB64
	dcd 0x020C7D9C
	dcd 0x020C7B1C
}

extern "C" asm void func_0200bc14(void)
{
	push {r3, r4, r5, lr}
	add r3, r1, #0
	add r4, r0, #0
	add r5, r2, #0
	add r0, #0x58
	mov r1, #0x20
	add r2, r3, #0
	dcd 0xEB9EF07C
	add r0, r4, #0
	add r0, #0x48
	add r1, r5, #0
	dcd 0xEE46F07C
	mov r0, #1
	str r0, [r4, #0x54]
	pop {r3, r4, r5, pc}
}

extern "C" asm void pad_0200bc36(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bc38(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [pc, #0x30]
	mov r1, #0
	dcd 0xFBFEF020
	ldr r1, [pc, #0x2c]
	add r0, r4, #0
	dcd 0xFEDCF7FF
	ldr r0, [pc, #0x28]
	mov r1, #0xc
	dcd 0xF8B2F000
	ldr r0, [pc, #0x24]
	ldr r1, [pc, #0x20]
	dcd 0xEB1CF04C
	add r0, r4, #0
	mov r1, #0x1e
	dcd 0xF830F000
	mov r0, #0xa
	dcd 0xEEC2F049
	mov r0, #1
	str r0, [r4, #0x24]
	pop {r4, pc}
	dcd 0x020EE1CC
	dcd 0x020BC2C0
	dcd 0x020C7658
	dcd 0x0210BC18
}

extern "C" asm void func_0200bc80(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [pc, #0x18]
	mov r1, #0
	dcd 0xF896F000
	ldr r0, [pc, #0x14]
	ldr r1, [pc, #0x10]
	dcd 0xEB00F04C
	add r0, r4, #0
	mov r1, #0x1e
	dcd 0xF814F000
	pop {r4, pc}
	mov r8, r8
	dcd 0x020C7658
	dcd 0x0210BC18
}

extern "C" asm void func_0200bca8(void)
{
	push {r4, lr}
	ldr r0, [pc, #0x14]
	add r4, r1, #0
	dcd 0xEA2AF04C
	cmp r4, r0
	bne lbl_0200bcba
	mov r0, #1
	pop {r4, pc}
lbl_0200bcba:
	mov r0, #0
	pop {r4, pc}
	mov r8, r8
	dcd 0x0210BB94
}

extern "C" asm void func_0200bcc4(void)
{
	push {r4, lr}
	ldr r0, [pc, #0x38]
	add r4, r1, #0
	dcd 0xF91DF000
	cmp r0, #0
	bne lbl_0200bcfe
	ldr r0, [pc, #0x2c]
	dcd 0xF92CF000
	cmp r0, #0
	bne lbl_0200bcfe
	ldr r0, [pc, #0x20]
	dcd 0xF91DF000
	cmp r0, #0
	beq lbl_0200bcee
	ldr r0, [pc, #0x1c]
	ldr r1, [pc, #0x14]
	dcd 0xEAE6F04C
lbl_0200bcee:
	ldr r0, [pc, #0x10]
	add r1, r4, #0
	dcd 0xF8B5F000
	ldr r0, [pc, #0xc]
	ldr r1, [pc, #4]
	dcd 0xEACCF04C
lbl_0200bcfe:
	pop {r4, pc}
	dcd 0x020C7678
	dcd 0x0210BC18
}

extern "C" asm void func_0200bd08(void)
{
	push {r4, lr}
	ldr r0, [pc, #0x1c]
	add r4, r1, #0
	dcd 0xF90FF000
	cmp r0, #0
	bne lbl_0200bd26
	ldr r0, [pc, #0x10]
	add r1, r4, #0
	dcd 0xF8B7F000
	ldr r0, [pc, #0xc]
	ldr r1, [pc, #4]
	dcd 0xEAB8F04C
lbl_0200bd26:
	pop {r4, pc}
	dcd 0x020C7678
	dcd 0x0210BC18
}

extern "C" asm void func_0200bd30(void)
{
	push {r3, lr}
	ldr r0, [pc, #0x10]
	dcd 0xF8B0F000
	ldr r0, [pc, #0xc]
	ldr r1, [pc, #8]
	dcd 0xEAAAF04C
	pop {r3, pc}
	mov r8, r8
	dcd 0x020C7678
	dcd 0x0210BC18
}

extern "C" asm void func_0200bd4c(void)
{
	push {r3, lr}
	ldr r0, [pc, #0x10]
	dcd 0xF8B4F000
	ldr r0, [pc, #0xc]
	ldr r1, [pc, #8]
	dcd 0xEA9CF04C
	pop {r3, pc}
	mov r8, r8
	dcd 0x020C7678
	dcd 0x0210BC18
}

extern "C" asm void func_0200bd68(void)
{
	push {r3, lr}
	ldr r0, [pc, #0x10]
	dcd 0xF8B2F000
	ldr r0, [pc, #0xc]
	ldr r1, [pc, #8]
	dcd 0xEA8EF04C
	pop {r3, pc}
	mov r8, r8
	dcd 0x020C7678
	dcd 0x0210BC18
}

extern "C" asm void func_0200bd84(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [pc, #0x14]
	dcd 0xF8B5F000
	cmp r0, #0
	beq lbl_0200bd9e
	ldr r0, [pc, #0x10]
	ldr r1, [r4, #4]
	dcd 0xE9B2F04C
	mov r0, #0x1a
	str r0, [r4, #4]
lbl_0200bd9e:
	pop {r4, pc}
	dcd 0x020C7678
	dcd 0x0210BB94
}

extern "C" asm void func_0200bda8(void)
{
	ldr r0, [r0, #4]
	cmp r0, #0x1a
	bne lbl_0200bdb2
	mov r0, #1
	bx lr
lbl_0200bdb2:
	mov r0, #0
	bx lr
}

extern "C" asm void pad_0200bdb6(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bdb8(void)
{
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_0200bdbc(void)
{
	ldr r1, [pc, #0xc]
	str r1, [r0]
	mov r1, #0
	str r1, [r0, #4]
	str r1, [r0, #8]
	str r1, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
	dcd 0x020BC28C
}

extern "C" asm void func_0200bdd0(void)
{
	bx lr
}

extern "C" asm void pad_0200bdd2(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bdd4(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [r4, #0xc]
	mov r1, #0
	add r0, r0, #1
	str r0, [r4, #0xc]
	ldr r2, [r4, #0x10]
	dcd 0xE85EF7FD
	str r0, [r4, #0xc]
	ldr r1, [r4, #0x10]
	lsl r0, r0, #4
	dcd 0xE91EF7FA
	str r0, [r4, #8]
	ldr r0, [r4, #4]
	cmp r0, #4
	bhi lbl_0200be3e
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r0, r7
	mov r0, r1
	mov r4, r3
	mov r0, r7
	mov r0, r6
	ldr r0, [r4, #8]
	mov r1, #0xf
	neg r0, r0
	mvn r1, r1
	mov r2, #0
	str r0, [r4, #8]
	dcd 0xE842F7FD
	str r0, [r4, #8]
	b lbl_0200be3e
	ldr r0, [r4, #8]
	mov r1, #0xf
	sub r0, #0x10
	mvn r1, r1
	mov r2, #0
	str r0, [r4, #8]
	dcd 0xE838F7FD
	str r0, [r4, #8]
	b lbl_0200be3e
	ldr r1, [r4, #8]
	mov r0, #0x10
	sub r0, r0, r1
	str r0, [r4, #8]
lbl_0200be3e:
	ldr r0, [r4, #8]
	dcd 0xEF70F072
	ldr r0, [r4, #8]
	dcd 0xEF7AF072
	pop {r4, pc}
}

extern "C" asm void func_0200be4c(void)
{
	push {r3, lr}
	dcd 0xF853F000
	cmp r0, #0
	beq lbl_0200be5a
	mov r0, #1
	pop {r3, pc}
lbl_0200be5a:
	mov r0, #0
	pop {r3, pc}
}

extern "C" asm void pad_0200be5e(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200be60(void)
{
	push {r4, lr}
	add r4, r0, #0
	mov r0, #1
	str r0, [r4, #4]
	mov r2, #0
	str r2, [r4, #0xc]
	str r1, [r4, #0x10]
	ldr r0, [r4, #8]
	neg r0, r0
	mul r1, r0
	asr r0, r1, #3
	lsr r0, r0, #0x1c
	add r0, r1
	asr r0, r0, #4
	str r0, [r4, #0xc]
	add r1, r2, #0
	ldr r2, [r4, #0x10]
	dcd 0xE80EF7FD
	str r0, [r4, #0xc]
	pop {r4, pc}
}

extern "C" asm void pad_0200be8a(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200be8c(void)
{
	mov r2, #3
	str r2, [r0, #4]
	mov r2, #0
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void func_0200be98(void)
{
	ldr r2, [r0, #4]
	cmp r2, #1
	bne lbl_0200bea4
	mov r2, #2
	str r2, [r0, #4]
	b lbl_0200beb2
lbl_0200bea4:
	cmp r2, #3
	bne lbl_0200beae
	mov r2, #4
	str r2, [r0, #4]
	b lbl_0200beb2
lbl_0200beae:
	mov r2, #2
	str r2, [r0, #4]
lbl_0200beb2:
	mov r2, #0
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void pad_0200beba(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bebc(void)
{
	ldr r2, [r0, #4]
	cmp r2, #1
	bne lbl_0200bec6
	mov r2, #2
	b lbl_0200bec8
lbl_0200bec6:
	mov r2, #4
lbl_0200bec8:
	str r2, [r0, #4]
	mov r2, #0
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void pad_0200bed2(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bed4(void)
{
	ldr r2, [r0, #4]
	cmp r2, #1
	beq lbl_0200bee0
	cmp r2, #3
	beq lbl_0200bee6
	b lbl_0200beec
lbl_0200bee0:
	mov r2, #2
	str r2, [r0, #4]
	b lbl_0200bef0
lbl_0200bee6:
	mov r2, #4
	str r2, [r0, #4]
	b lbl_0200bef0
lbl_0200beec:
	mov r2, #2
	str r2, [r0, #4]
lbl_0200bef0:
	mov r2, #0
	str r2, [r0, #0xc]
	str r1, [r0, #0x10]
	bx lr
}

extern "C" asm void func_0200bef8(void)
{
	ldr r1, [r0, #0xc]
	ldr r0, [r0, #0x10]
	cmp r1, r0
	bne lbl_0200bf04
	mov r0, #1
	bx lr
lbl_0200bf04:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0200bf08(void)
{
	ldr r1, [r0, #4]
	cmp r1, #1
	bne lbl_0200bf18
	ldr r0, [r0, #8]
	cmp r0, #0
	bge lbl_0200bf18
	mov r0, #1
	bx lr
lbl_0200bf18:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0200bf1c(void)
{
	ldr r1, [r0, #4]
	cmp r1, #2
	bne lbl_0200bf2c
	ldr r0, [r0, #8]
	cmp r0, #0
	bge lbl_0200bf2c
	mov r0, #1
	bx lr
lbl_0200bf2c:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0200bf30(void)
{
	ldr r1, [r0, #4]
	cmp r1, #3
	bne lbl_0200bf40
	ldr r0, [r0, #8]
	cmp r0, #0
	ble lbl_0200bf40
	mov r0, #1
	bx lr
lbl_0200bf40:
	mov r0, #0
	bx lr
}

extern "C" asm void func_0200bf44(void)
{
	bx lr
}

extern "C" asm void pad_0200bf46(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bf48(void)
{
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [r4, #4]
	mov r1, #0
	add r0, r0, #1
	str r0, [r4, #4]
	ldr r2, [r4, #8]
	dcd 0xEFA4F7FC
	str r0, [r4, #4]
	pop {r4, pc}
}

extern "C" asm void pad_0200bf5e(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bf60(void)
{
	push {r3, lr}
	dcd 0xF807F000
	cmp r0, #0
	bne lbl_0200bf6e
	mov r0, #1
	pop {r3, pc}
lbl_0200bf6e:
	mov r0, #0
	pop {r3, pc}
}

extern "C" asm void pad_0200bf72(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bf74(void)
{
	push {r3, lr}
	ldr r1, [r0, #4]
	ldr r0, [r0, #8]
	cmp r1, r0
	bne lbl_0200bf8c
	mov r1, #8
	ldr r0, [pc, #0xc]
	add r2, r1, #0
	dcd 0xE8E2F076
	mov r0, #0
	pop {r3, pc}
lbl_0200bf8c:
	mov r0, #1
	pop {r3, pc}
	dcd 0x0211C4F0
}

extern "C" asm void func_0200bf94(void)
{
	bx lr
}

extern "C" asm void pad_0200bf96(void)
{
	dcd 0x00000000
}

extern "C" asm void func_0200bf98(void)
{
	push {r3, lr}
	ldr r0, [pc, #0x1c]
	ldr r1, [pc, #0x1c]
	mov r2, #1
	mov r3, #0
	dcd 0xEA30F04B
	ldr r0, [pc, #0x10]
	dcd 0xEA88F04B
	add r1, r0, #0
	ldr r0, [pc, #0x10]
	dcd 0xEA80F03B
	pop {r3, pc}
	mov r8, r8
	dcd 0x020C7774
	dcd 0x020BC2D0
	dcd 0x020C7784
}

extern "C" asm void func_0200bfc4(void)
{
	push {r3, r4, r5, lr}
	add r4, r1, #0
	ldr r1, [pc, #0x24]
	add r5, r0, #0
	dcd 0xE970F07C
	cmp r0, #0
	beq lbl_0200bfe0
	ldr r0, [pc, #0x1c]
	add r1, r5, #0
	add r2, r4, #0
	dcd 0xEAB6F03B
	pop {r3, r4, r5, pc}
lbl_0200bfe0:
	mov r2, #7
	lsl r2, r2, #0xc
	ldr r0, [pc, #0xc]
	add r1, r5, #0
	orr r2, r4
	dcd 0xEAAEF03B
	pop {r3, r4, r5, pc}
	dcd 0x020BC2E8
	dcd 0x020C7784
}

extern "C" asm void func_0200bff8(void)
{
	ldr r0, [pc, #4]
	ldr r0, [r0, #0x2c]
	bx lr
	mov r8, r8
	dcd 0x020C7768
}

extern "C" asm void func_0200c004(void)
{
	ldr r1, [pc, #4]
	str r0, [r1]
	bx lr
	mov r8, r8
lbl_0200c00c:
	dcd 0x020BC2C8
}

extern "C" asm void func_0200c010(void)
{
	mov r1, #0
	ldr r0, [pc, #8]
	mvn r1, r1
	str r1, [r0]
	bx lr
	mov r8, r8
	dcd 0x020BC2C8
}

extern "C" asm void func_0200c020(void)
{
	ldr r0, [pc, #4]
	ldr r0, [r0]
	bx lr
	mov r8, r8
	dcd 0x020BC2C8
}

extern "C" asm void func_0200c02c(void)
{
	ldr r1, [pc, #4]
	str r0, [r1, #4]
	bx lr
	mov r8, r8
	dcd 0x020BC2C8
}

extern "C" asm void func_0200c038(void)
{
	ldr r0, [pc, #4]
	ldr r0, [r0, #4]
	bx lr
	mov r8, r8
	dcd 0x020BC2C8
}
