/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_020369d0(void);
    void func_020369dc(void);
    void func_0203706c(void);
    void _ZN3cmn15CommonPartyInfo13setMenuActionENS_11MENU_ACTIONE(void);
    void _ZN6Global10getMapNameEv(void);
    void _ZN6Global15setRanarutaFlagEb(void);
    void _ZN6status11StageStatus11getTimeZoneEv(void);
    void _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE(void);
    void _ZN6status11StageStatus12getWorldTimeEv(void);
    void _ZN6status11StageStatus12setWorldTimeEi(void);
    void data_020c1328(void);
    void data_020ed28c(void);
    void data_020edc40(void);
    void data_020ef9c8(void);
    void data_0210bb94(void);
    void data_0211c4f0(void);
    void func_0200bab8(void);
    void func_0200bcc4(void);
    void func_02026cc8(void);
    void func_02028fe4(void);
    void func_0202adc4(void);
    void func_0202aea4(void);
    void func_0202aec4(void);
    void func_02030278(void);
    void func_02030fe0(void);
    void func_02047a28(void);
    void func_020499a4(void);
    void func_02049b94(void);
    void func_0204b694(void);
    void func_02058114(void);
    void func_02082144(void);
    void func_0208214c(void);
    void func_020882b0(void);
    void func_02127b28(void);
    void func_02129bfc(void);
    void func_0212b948(void);
    void func_02132228(void);
    void func_02132a90(void);
    void func_02133bfc(void);
    void func_02133eac(void);
    void func_021341ec(void);
    void func_02137f2c(void);
    void func_02138210(void);
    void func_02139668(void);
    void func_0213b5a0(void);
    void g_Global(void);
    void g_Stage(void);
    void g_cmnPartyInfo(void);
}

#pragma thumb off

extern "C" asm void func_020369d0(void)
{
	ldr r0, =data_020ef9c8
	bx lr
}

extern "C" asm void func_020369dc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4, #4]
	cmp r0, #0
	beq lbl_02036eec
	ldr r0, [r4]
	cmp r0, #4
	addls pc, pc, r0, lsl #2
	ldmia sp!, {r4, pc}
	ldmia sp!, {r4, pc}
	b lbl_02036d0c
	b lbl_02036b88
	b lbl_02036a14
	b lbl_02036c4c
lbl_02036a14:
	bl func_0202adc4
	ldr r0, [r0, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036a54
	bl func_02132a90
	mov r1, #1
	bl func_021341ec
	b lbl_02036a60
lbl_02036a54:
	bl func_02127b28
	mov r0, #1
	bl func_02030fe0
lbl_02036a60:
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_02036ae4
	bl func_02139668
	ldr r1, [r0, #0x58]
	bic r1, r1, #4
	str r1, [r0, #0x58]
	mov r0, #1
	bl func_020499a4
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #2
	beq lbl_02036aac
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #3
	bne lbl_02036ac8
lbl_02036aac:
	ldr r0, =g_Stage
	mov r1, #4
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	ldr r0, =g_Stage
	mov r1, #0xa40
	bl _ZN6status11StageStatus12setWorldTimeEi
	b lbl_02036b54
lbl_02036ac8:
	ldr r0, =g_Stage
	mov r1, #2
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	ldr r0, =g_Stage
	mov r1, #0x100
	bl _ZN6status11StageStatus12setWorldTimeEi
	b lbl_02036b54
lbl_02036ae4:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_02036b54
	bl func_0212b948
	add r1, r0, #0x2000
	mov r2, #0
	mov r0, #1
	str r2, [r1, #0xdc]
	bl func_0204b694
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus12getWorldTimeEv
	cmp r0, #0x840
	bge lbl_02036b3c
	ldr r0, =g_Stage
	mov r1, #4
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	ldr r0, =g_Stage
	mov r1, #0xa40
	bl _ZN6status11StageStatus12setWorldTimeEi
	b lbl_02036b54
lbl_02036b3c:
	ldr r0, =g_Stage
	mov r1, #2
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	ldr r0, =g_Stage
	mov r1, #0x100
	bl _ZN6status11StageStatus12setWorldTimeEi
lbl_02036b54:
	ldr r0, =g_Global
	mov r1, #0xf
	bl func_0200bcc4
	ldr r0, =g_Global
	bl _ZN6Global10getMapNameEv
	ldr r1, =data_020c1328
	bl func_020882b0
	ldr r0, =data_020ed28c
	bl func_02028fe4
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global15setRanarutaFlagEb
	ldmia sp!, {r4, pc}
lbl_02036b88:
	bl func_0202adc4
	ldr r0, [r0, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036bc8
	bl func_02132a90
	mov r1, #0
	bl func_021341ec
	b lbl_02036bd4
lbl_02036bc8:
	bl func_02127b28
	mov r0, #0
	bl func_02030fe0
lbl_02036bd4:
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_02036c04
	bl func_02139668
	ldr r1, [r0, #0x58]
	bic r1, r1, #4
	str r1, [r0, #0x58]
	mov r0, #1
	bl func_020499a4
	b lbl_02036c30
lbl_02036c04:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_02036c30
	bl func_0212b948
	add r1, r0, #0x2000
	mov r2, #0
	mov r0, #1
	str r2, [r1, #0xdc]
	bl func_0204b694
lbl_02036c30:
	ldr r0, =g_cmnPartyInfo
	mov r1, #3
	bl _ZN3cmn15CommonPartyInfo13setMenuActionENS_11MENU_ACTIONE
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global15setRanarutaFlagEb
	ldmia sp!, {r4, pc}
lbl_02036c4c:
	bl func_0202adc4
	ldr r0, [r0, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036c8c
	bl func_02132a90
	mov r1, #0
	bl func_021341ec
	b lbl_02036c98
lbl_02036c8c:
	bl func_02127b28
	mov r0, #0
	bl func_02030fe0
lbl_02036c98:
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_02036cc8
	bl func_02139668
	ldr r1, [r0, #0x58]
	bic r1, r1, #4
	str r1, [r0, #0x58]
	mov r0, #1
	bl func_020499a4
	b lbl_02036cf4
lbl_02036cc8:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_02036cf4
	bl func_0212b948
	add r1, r0, #0x2000
	mov r2, #0
	mov r0, #1
	str r2, [r1, #0xdc]
	bl func_0204b694
lbl_02036cf4:
	ldr r0, =g_Global
	bl func_0200bab8
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global15setRanarutaFlagEb
	ldmia sp!, {r4, pc}
lbl_02036d0c:
	ldr r0, [r4, #8]
	cmp r0, #0
	ble lbl_02036d8c
	subs r0, r0, #1
	str r0, [r4, #8]
	ldmneia sp!, {r4, pc}
	ldr r0, =data_0211c4f0
	mov r1, #0x10
	mov r2, #0
	bl func_0208214c
	ldr r0, =data_0211c4f0
	mov r1, #0
	bl func_02082144
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global15setRanarutaFlagEb
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036d7c
	bl func_02132a90
	mov r1, #0
	bl func_021341ec
	bl func_02132a90
	mov r1, #1
	str r1, [r0, #4]
	ldmia sp!, {r4, pc}
lbl_02036d7c:
	bl func_02127b28
	mov r0, #0
	bl func_02030fe0
	ldmia sp!, {r4, pc}
lbl_02036d8c:
	bl func_0202adc4
	ldr r0, [r0, #0xc]
	ldr r1, [r0]
	ldr r1, [r1, #8]
	blx r1
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_02036dd8
	bl func_02139668
	ldr r1, [r0, #0x58]
	bic r1, r1, #4
	str r1, [r0, #0x58]
	mov r0, #1
	bl func_020499a4
	b lbl_02036e04
lbl_02036dd8:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_02036e04
	bl func_0212b948
	add r1, r0, #0x2000
	mov r2, #0
	mov r0, #1
	str r2, [r1, #0xdc]
	bl func_0204b694
lbl_02036e04:
	bl func_0202adc4
	ldr r0, [r0, #0x150]
	cmp r0, #0
	beq lbl_02036e7c
	bl func_02132a90
	mov r1, #1
	str r1, [r0, #4]
	bl func_0202adc4
	bl func_0202aea4
	bl func_0202adc4
	add r0, r0, #0x130
	mov r1, #0
	bl func_02030278
	bl func_02132a90
	add r0, r0, #0xc
	bl func_0213b5a0
	bl func_02137f2c
	bl func_02138210
	bl func_02049b94
	bl func_02139668
	bl func_02047a28
	bl func_02132228
	mov r1, #0
	str r1, [r0, #0x60c]
	ldr r0, =data_0211c4f0
	mov r2, #0x10
	bl func_0208214c
	mov r0, #1
	str r0, [r4, #8]
	ldmia sp!, {r4, pc}
lbl_02036e7c:
	ldr r0, =g_Global
	mov r1, #0x14
	bl func_0200bcc4
	bl func_0202adc4
	ldr r0, =data_020edc40
	mov r1, #1
	str r1, [r0]
	bl func_02132a90
	mov r1, #4
	bl func_02133eac
	ldr r0, =g_Global
	mov r1, #0
	bl _ZN6Global15setRanarutaFlagEb
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036edc
	bl func_02132a90
	mov r1, #0
	bl func_021341ec
	bl func_02132a90
	bl func_02133bfc
	ldmia sp!, {r4, pc}
lbl_02036edc:
	bl func_02127b28
	mov r0, #0
	bl func_02030fe0
	ldmia sp!, {r4, pc}
lbl_02036eec:
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #1
	bne lbl_02036f10
	bl func_02132a90
	mov r1, #1
	bl func_021341ec
	b lbl_02036f1c
lbl_02036f10:
	bl func_02127b28
	mov r0, #1
	bl func_02030fe0
lbl_02036f1c:
	ldr r0, [r4]
	cmp r0, #4
	addls pc, pc, r0, lsl #2
	b lbl_02037038
	b lbl_02037038
	b lbl_02037014
	b lbl_02036ff4
	b lbl_02036f40
	b lbl_02037004
lbl_02036f40:
	ldr r0, =0x0000023D
	mov r1, #0
	bl func_02026cc8
	bl func_0202adc4
	mov r1, #5
	bl func_0202aec4
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_02036fac
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #2
	beq lbl_02036f8c
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #3
	bne lbl_02036f9c
lbl_02036f8c:
	bl func_0202adc4
	mov r1, #0
	str r1, [r0, #0xcc]
	b lbl_02037038
lbl_02036f9c:
	bl func_0202adc4
	mov r1, #1
	str r1, [r0, #0xcc]
	b lbl_02037038
lbl_02036fac:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_02037038
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus12getWorldTimeEv
	cmp r0, #0x840
	bge lbl_02036fdc
	bl func_0202adc4
	mov r1, #0
	b lbl_02036fe4
lbl_02036fdc:
	bl func_0202adc4
	mov r1, #1
lbl_02036fe4:
	str r1, [r0, #0xcc]
	bl func_02127b28
	bl func_02129bfc
	b lbl_02037038
lbl_02036ff4:
	bl func_0202adc4
	mov r1, #6
	bl func_0202aec4
	b lbl_02037038
lbl_02037004:
	bl func_0202adc4
	mov r1, #4
	bl func_0202aec4
	b lbl_02037038
lbl_02037014:
	ldr r0, =0x00000464
	mov r1, #0
	bl func_02026cc8
	bl func_0202adc4
	mov r1, #3
	bl func_0202aec4
	bl func_02132228
	mov r1, #1
	str r1, [r0, #0x60c]
lbl_02037038:
	mov r0, #1
	str r0, [r4, #4]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0203706c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r0
	mov r5, r1
	mov r2, #0
	ldr r0, =data_0210bb94
	mov r1, #0xc
	str r2, [r4, #8]
	bl func_02058114
	cmp r0, #0
	beq lbl_020370b0
	bl func_02139668
	ldr r1, [r0, #0x58]
	orr r1, r1, #4
	str r1, [r0, #0x58]
	mov r0, #0
	bl func_020499a4
	b lbl_020370dc
lbl_020370b0:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_020370dc
	bl func_0212b948
	add r1, r0, #0x2000
	mov r2, #1
	mov r0, #0
	str r2, [r1, #0xdc]
	bl func_0204b694
lbl_020370dc:
	str r5, [r4]
	mov r0, #0
	str r0, [r4, #4]
	ldmia sp!, {r3, r4, r5, pc}
}

#pragma thumb on
