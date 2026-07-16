/* Auto-generated from baserom via tools/gen_mathlib_asm.py */
#include "globaldefs.h"

extern "C" {
    void func_0201f12c(void);
    void func_0201f14c(void);
    void func_0201f16c(void);
    void func_0201f1c0(void);
    void func_0201f1ec(void);
    void func_0201f260(void);
    void func_0201f27c(void);
    void func_0201f30c(void);
    void func_0201f334(void);
    void func_0201f35c(void);
    void func_0201f380(void);
    void func_0201f3b8(void);
    void func_0201f3d0(void);
    void func_0201f3e4(void);
    void func_0201f3f4(void);
    void func_0201f40c(void);
    void func_0201f434(void);
    void func_0201f458(void);
    void func_0201f4d4(void);
    void func_0201f4f4(void);
    void func_0201f520(void);
    void func_0201f58c(void);
    void func_0201f5ac(void);
    void func_0201f5d8(void);
    void func_0201f610(void);
    void func_0201f654(void);
    void func_0201f6f0(void);
    void func_0201f70c(void);
    void func_0201f7d8(void);
    void func_0201f9a8(void);
    void func_0201faa4(void);
    void func_0201fbcc(void);
    void func_0201fd04(void);
    void func_0201fd80(void);
    void func_0201fdfc(void);
    void func_0201fe3c(void);
    void func_0201fe94(void);
    void func_0201feb0(void);
    void func_0201fee4(void);
    void func_0201ff18(void);
    void func_02020008(void);
    void func_02020030(void);
    void func_02022a3c(void);
    void func_02022a40(void);
    void func_02022a44(void);
    void func_02022a48(void);
    void func_02022a4c(void);
    void func_02022a50(void);
    void func_02022a54(void);
    void func_02022a58(void);
    void func_02022a5c(void);
    void func_02022a60(void);
    void func_02022a64(void);
    void func_02022a68(void);
    void func_02022a6c(void);
    void func_02022a70(void);
    void func_02022a74(void);
    void func_02022a78(void);
    void func_02022a7c(void);
    void _ZN3cmn18HengeNoTsueManager9isMonsterEv(void);
    void _ZN3cmn9PartyTalk12getSingletonEv(void);
    void _ZN3cmn9PartyTalk15setPreMessageNoEi(void);
    void _ZN3dss11Fx32Vector3C1Ev(void);
    void _ZN6Global10getMapNameEv(void);
    void _ZN6status11PartyStatus12getSortIndexEi(void);
    void _ZN6status11PartyStatus13setBattleModeEv(void);
    void _ZN6status11PartyStatus13setNormalModeEv(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus29getPlayerStatusForPlayerIndexEi(void);
    void _ZN6status11PartyStatus30isInsideCarriageForPlayerIndexEi(void);
    void _ZN6status11PartyStatus8getCountEv(void);
    void _ZN6status11StageStatus10getMapNameEv(void);
    void _ZN6status11StageStatus11getTimeZoneEv(void);
    void _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE(void);
    void _ZN6status12StatusChange5clearEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status14HaveStatusInfo7revivalEv(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status8GameFlag3setEj(void);
    void _ZN6status8GameFlag6removeEj(void);
    void _ZN7dssrand4randEi(void);
    void __register_global_object(void);
    void data_020bdf64(void);
    void data_020be020(void);
    void data_020d2bac(void);
    void data_020d2bb0(void);
    void data_020d2bbc(void);
    void data_020ec59c(void);
    void data_020ec5a0(void);
    void data_020ec5a4(void);
    void data_020ec5e8(void);
    void data_020ec60c(void);
    void data_020ec61c(void);
    void data_020ec630(void);
    void data_020ecf40(void);
    void data_020ecf44(void);
    void data_020ecf48(void);
    void data_020ecf4c(void);
    void data_020ecf50(void);
    void data_020ecf58(void);
    void data_020ecf60(void);
    void data_020ecf68(void);
    void data_020ecfe8(void);
    void data_020ed000(void);
    void data_020ed024(void);
    void data_020ed034(void);
    void data_020ed04c(void);
    void data_020ed1bc(void);
    void data_020ed270(void);
    void data_020efcc0(void);
    void data_0210bb94(void);
    void data_02116ce0(void);
    void data_02116ce8(void);
    void data_0215fb88(void);
    void data_0215fb8c(void);
    void data_0215fb90(void);
    void data_0215fb94(void);
    void data_0215fb98(void);
    void data_0215fb9c(void);
    void data_0215fba0(void);
    void data_0215fba4(void);
    void data_0215fba8(void);
    void data_0215fbac(void);
    void data_0215fbb0(void);
    void data_0215fbb4(void);
    void data_0215fbb8(void);
    void data_0215fbbc(void);
    void data_0215fbc0(void);
    void data_0215fbc4(void);
    void data_0215fbc8(void);
    void data_0215fbcc(void);
    void data_0215fbd0(void);
    void data_0215fbd4(void);
    void data_0215fbd8(void);
    void data_0215fbdc(void);
    void data_0215fbe0(void);
    void data_0215fbe4(void);
    void data_0215fbe8(void);
    void data_0215fbec(void);
    void data_0215fbf0(void);
    void data_0215fbf4(void);
    void data_0215fbf8(void);
    void data_0215fbfc(void);
    void data_0215fc00(void);
    void data_0215fc04(void);
    void data_0215fc08(void);
    void data_0215fc0c(void);
    void data_0215fc10(void);
    void data_0215fc14(void);
    void data_0215fc18(void);
    void data_0215fc1c(void);
    void data_0215fc24(void);
    void data_0215fc28(void);
    void data_0215fc2c(void);
    void data_0215fc30(void);
    void data_0215fc34(void);
    void data_0215fc38(void);
    void data_0215fc3c(void);
    void data_0215fc40(void);
    void data_0215fc44(void);
    void data_0215fc48(void);
    void data_0215fc4c(void);
    void data_0215fc50(void);
    void data_0215fc54(void);
    void data_0215fc58(void);
    void data_0215fc60(void);
    void data_0215fc68(void);
    void data_0215fc70(void);
    void data_0215fc78(void);
    void data_0215fc80(void);
    void data_0215fc88(void);
    void data_0215fc90(void);
    void data_0215fc98(void);
    void data_0215fca0(void);
    void data_0215fca8(void);
    void data_0215fcb0(void);
    void data_0215fcb8(void);
    void data_0215fcc0(void);
    void data_0215fcc8(void);
    void data_0215fcd0(void);
    void data_0215fcd8(void);
    void data_0215fce0(void);
    void data_0215fce8(void);
    void data_0215fcf0(void);
    void data_0215fd10(void);
    void data_0215fda0(void);
    void data_02160070(void);
    void data_021600f4(void);
    void data_0216010c(void);
    void data_02160130(void);
    void data_02160140(void);
    void data_02160150(void);
    void data_02160164(void);
    void data_02160178(void);
    void data_0216018c(void);
    void data_021601a4(void);
    void data_021601bc(void);
    void data_02164a20(void);
    void data_02164a24(void);
    void data_02164a28(void);
    void data_02164a2c(void);
    void func_02023518(void);
    void func_020235d0(void);
    void func_02023664(void);
    void func_02023688(void);
    void func_02023698(void);
    void func_020236a8(void);
    void func_020236b8(void);
    void func_020236e8(void);
    void func_0202374c(void);
    void func_0202375c(void);
    void func_02023784(void);
    void func_02023828(void);
    void func_02023ca0(void);
    void func_02023d08(void);
    void func_02023d70(void);
    void func_02023dfc(void);
    void func_02023e14(void);
    void func_02023e58(void);
    void func_02023e7c(void);
    void func_02023f10(void);
    void func_02023f28(void);
    void func_02023f44(void);
    void func_02023f70(void);
    void func_02023f74(void);
    void func_020241e8(void);
    void func_020242b4(void);
    void func_020242c8(void);
    void func_020242dc(void);
    void func_02024304(void);
    void func_02024334(void);
    void func_02024364(void);
    void func_02024374(void);
    void func_02024388(void);
    void func_020243b4(void);
    void func_020243c8(void);
    void func_020243d8(void);
    void func_020243e8(void);
    void func_020243f8(void);
    void func_02024410(void);
    void func_02024424(void);
    void func_02024434(void);
    void func_020244c4(void);
    void func_02024564(void);
    void func_020245e8(void);
    void func_02024650(void);
    void func_0202467c(void);
    void func_020246b4(void);
    void func_020246c0(void);
    void func_020246d0(void);
    void func_020246f0(void);
    void func_0202487c(void);
    void func_02024880(void);
    void func_02024914(void);
    void func_0202492c(void);
    void func_020249c8(void);
    void func_020249f4(void);
    void func_02024a34(void);
    void func_02024a8c(void);
    void func_02024aa0(void);
    void func_02024ab0(void);
    void func_02024acc(void);
    void func_02024b08(void);
    void func_02024b44(void);
    void func_02024b68(void);
    void func_02024bdc(void);
    void func_02024be8(void);
    void func_02024c70(void);
    void func_02024cac(void);
    void func_02024e90(void);
    void func_02024ea0(void);
    void func_02024eb0(void);
    void func_02024ecc(void);
    void func_02024ee8(void);
    void func_02024f74(void);
    void func_02024f80(void);
    void func_02024fd0(void);
    void func_02024fe8(void);
    void func_02024ffc(void);
    void func_0202500c(void);
    void func_020250d4(void);
    void func_020250e8(void);
    void func_02025230(void);
    void func_02025244(void);
    void func_02025278(void);
    void func_020255a8(void);
    void func_020255b8(void);
    void func_020255c8(void);
    void func_0202561c(void);
    void func_02025688(void);
    void func_02025698(void);
    void func_020256e4(void);
    void func_020259a8(void);
    void func_02025a1c(void);
    void func_02025abc(void);
    void func_02025b14(void);
    void func_02025b60(void);
    void func_02025b68(void);
    void func_02025b78(void);
    void func_02026cb8(void);
    void func_02026cc0(void);
    void func_02039760(void);
    void func_02039768(void);
    void func_0204849c(void);
    void func_02052408(void);
    void func_0205241c(void);
    void func_020573e0(void);
    void func_020573fc(void);
    void func_02057474(void);
    void func_020574bc(void);
    void func_02058114(void);
    void func_0205bc9c(void);
    void func_0205bed4(void);
    void func_0205c494(void);
    void func_0205c4a4(void);
    void func_0205c4b4(void);
    void func_0205c4e0(void);
    void func_0205c500(void);
    void func_0205c560(void);
    void func_0205c57c(void);
    void func_0205c59c(void);
    void func_0205c5bc(void);
    void func_0205c640(void);
    void func_0207e88c(void);
    void func_0207ebd4(void);
    void func_020882d4(void);
    void func_02088308(void);
    void func_02127b28(void);
    void func_0212aaac(void);
    void func_0212ab8c(void);
    void func_0212c51c(void);
    void func_0212c580(void);
    void func_0212c8d8(void);
    void func_0212c958(void);
    void func_0212d954(void);
    void func_0212d968(void);
    void func_0212d9dc(void);
    void func_0212db3c(void);
    void func_02132a90(void);
    void func_021372e8(void);
    void func_0213745c(void);
    void func_02137470(void);
    void func_0213747c(void);
    void func_02137f2c(void);
    void func_02138eb8(void);
    void func_02139668(void);
    void func_02139e30(void);
    void func_02139e90(void);
    void func_0213cda8(void);
    void func_0213cdd4(void);
    void func_0213ce18(void);
    void func_0213ce30(void);
    void func_0213cefc(void);
    void func_0213cf58(void);
    void func_0213d068(void);
    void func_0213d36c(void);
    void func_0213d39c(void);
    void func_0213d3b8(void);
    void func_0213d3d4(void);
    void func_0213d3f0(void);
    void func_0213d40c(void);
    void func_0213d424(void);
    void func_0213d468(void);
    void func_0213d4c8(void);
    void func_0213d4ec(void);
    void func_0213d544(void);
    void func_0213d72c(void);
    void func_0213d730(void);
    void func_0213d754(void);
    void func_0213d778(void);
    void func_0213d79c(void);
    void func_0213d7bc(void);
    void func_0213d7dc(void);
    void func_0213d7fc(void);
    void func_0213d818(void);
    void func_0213d864(void);
    void func_0213d8f8(void);
    void func_0213d9ac(void);
    void func_0213da5c(void);
    void func_0213daec(void);
    void func_0213db98(void);
    void func_0213dbd8(void);
    void func_0213ee4c(void);
    void func_0213ee6c(void);
    void func_0213f00c(void);
    void func_0213f040(void);
    void func_0213f074(void);
    void func_0213f0d0(void);
    void func_0213f130(void);
    void func_0213f14c(void);
    void func_0213f168(void);
    void func_0213f17c(void);
    void func_0213f198(void);
    void func_0213f1c4(void);
    void func_0213f214(void);
    void func_0213f224(void);
    void func_0213f244(void);
    void func_0213f294(void);
    void func_0213f404(void);
    void func_0213f42c(void);
    void func_0213f9d8(void);
    void func_0213fa08(void);
    void func_0213fa3c(void);
    void func_0213fa58(void);
    void func_0213fa70(void);
    void func_0213fa90(void);
    void func_0213faa4(void);
    void func_0213fac4(void);
    void func_0213fadc(void);
    void func_0213faf0(void);
    void func_0213fc44(void);
    void func_0213fccc(void);
    void func_0213fd74(void);
    void func_0213fe00(void);
    void func_0213fe14(void);
    void func_0213fe3c(void);
    void func_0213fe50(void);
    void func_0213fe80(void);
    void func_0213feac(void);
    void func_0213ff50(void);
    void func_0213ffac(void);
    void func_0213ffe0(void);
    void func_02140024(void);
    void func_02140040(void);
    void func_0214005c(void);
    void func_02140078(void);
    void func_02140108(void);
    void func_02140154(void);
    void func_0214040c(void);
    void func_0214048c(void);
    void func_021404a0(void);
    void func_021404c0(void);
    void func_021404c4(void);
    void func_021404e4(void);
    void func_02140518(void);
    void func_02140560(void);
    void func_0214057c(void);
    void func_02140590(void);
    void func_021405a4(void);
    void func_021405cc(void);
    void func_02140624(void);
    void func_02140650(void);
    void func_02140718(void);
    void func_0214072c(void);
    void func_02140744(void);
    void func_02140764(void);
    void func_0214078c(void);
    void func_021407b8(void);
    void func_021407f4(void);
    void func_021408b8(void);
    void func_02140dbc(void);
    void func_02140e00(void);
    void func_02140e1c(void);
    void func_02140e3c(void);
    void func_02140e60(void);
    void func_02140e70(void);
    void func_02140f64(void);
    void func_02140f84(void);
    void func_02140fc4(void);
    void func_02141144(void);
    void func_0214139c(void);
    void func_021413ac(void);
    void func_021413b0(void);
    void func_021413e8(void);
    void func_02141400(void);
    void func_02141424(void);
    void func_0214151c(void);
    void func_02141530(void);
    void func_02141550(void);
    void func_02141574(void);
    void func_021415d4(void);
    void func_02141760(void);
    void func_02141770(void);
    void func_0214179c(void);
    void func_021417c8(void);
    void func_021417e0(void);
    void func_021417f4(void);
    void func_021417f8(void);
    void func_02141868(void);
    void func_021418c8(void);
    void func_021418dc(void);
    void func_0214192c(void);
    void func_021419c0(void);
    void func_02141a28(void);
    void func_02141ab0(void);
    void func_02141ac0(void);
    void func_02141bb4(void);
    void func_02141bf0(void);
    void func_02141c00(void);
    void g_AreaFlag(void);
    void g_Global(void);
    void g_GlobalFlag(void);
    void g_HengeNoTsue(void);
    void g_LocalFlag(void);
    void g_Stage(void);
}

#pragma thumb off

extern "C" asm void func_0201f12c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #8
	bl func_020573e0
	add r0, r4, #0x18
	bl func_0205c4b4
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f14c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x18
	bl func_0205c4e0
	add r0, r4, #8
	bl func_020573fc
	mov r0, r4
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f16c(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, =data_020d2bac
	ldr r0, [r0]
	tst r0, #1
	bne lbl_0201f1a8
	ldr r0, =data_020d2bbc
	bl func_0201f12c
	ldr r0, =data_020d2bbc
	ldr r1, =func_0201f14c
	ldr r2, =data_020d2bb0
	bl __register_global_object
	ldr r0, =data_020d2bac
	ldr r1, [r0]
	orr r1, r1, #1
	str r1, [r0]
lbl_0201f1a8:
	ldr r0, =data_020d2bbc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f1c0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #8
	ldr r12, [r0]
	mov r2, #1
	ldr r12, [r12]
	mov r3, #0
	blx r12
	mov r0, r4
	bl func_0201f1ec
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f1ec(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =func_020235d0
	bl func_0205c640
	ldr r0, =func_02020030
	bl func_0205bed4
	ldr r0, =func_0202374c
	bl func_0205bc9c
	bl func_02023664
	ldr r0, =func_02023698
	bl func_0205c494
	bl func_020236b8
	ldr r0, =func_020236e8
	bl func_0205c4a4
	add r0, r4, #8
	bl func_020574bc
	mov r1, r0
	add r0, r4, #0x18
	ldr r2, [r4, #4]
	bl func_0205c500
	add r0, r4, #0x19000
	mov r1, #1
	str r1, [r0, #0x9dc]
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f260(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	add r0, r4, #0x18
	bl func_0205c560
	add r0, r4, #8
	bl func_02057474
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f27c(void)
{
	stmdb sp!, {r4, lr}
	sub sp, sp, #0x80
	mov r4, r0
	cmp r1, #6
	str r1, [r4, #4]
	moveq r0, #5
	streq r0, [r4, #4]
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus10getMapNameEv
	mov r3, r0
	ldr r2, =data_020bdf64
	add r0, sp, #0
	mov r1, #0x80
	bl func_02088308
	ldr r0, =data_02116ce8
	add r1, sp, #0
	bl func_0207ebd4
	cmp r0, #0
	beq lbl_0201f2e0
	add r1, sp, #0
	mov r0, r4
	bl func_0201f1c0
	mov r0, #1
	str r0, [r4]
	b lbl_0201f2f0
lbl_0201f2e0:
	mov r0, #0
	add sp, sp, #0x80
	str r0, [r4]
	ldmia sp!, {r4, pc}
lbl_0201f2f0:
	add r0, r4, #0x18
	bl func_0205c57c
	add sp, sp, #0x80
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f30c(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, [r4]
	cmp r0, #0
	ldmeqia sp!, {r4, pc}
	add r0, r4, #0x18
	bl func_0205c59c
	mov r0, r4
	bl func_0201f260
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f334(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0]
	cmp r1, #0
	addne r1, r0, #0x19000
	ldrne r1, [r1, #0x9dc]
	cmpne r1, #0
	ldmeqia sp!, {r3, pc}
	add r0, r0, #0x18
	bl func_0205c5bc
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f35c(void)
{
	ldr r2, [r1]
	str r2, [r0, #8]
	ldr r2, [r1, #4]
	str r2, [r0, #0xc]
	ldr r1, [r1, #8]
	str r1, [r0, #0x10]
	ldr r1, [r0, #8]
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_0201f380(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #4]
	ldr r1, [r0, #0x10]
	ldr r3, =data_020be020
	add r12, r2, r1
	str r12, [r0, #4]
	ldr r0, =data_02116ce0
	mov r1, #0xe
	mov r2, #0x28
	str r12, [sp]
	bl func_0207e88c
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f3b8(void)
{
	ldr r1, [r0, #4]
	ldr r0, [r0, #0xc]
	cmp r1, r0
	moveq r0, #1
	movne r0, #0
	bx lr
}

extern "C" asm void func_0201f3d0(void)
{
	mov r2, #0
	str r2, [r0, #4]
	ldr r1, [r1]
	str r1, [r0, #8]
	bx lr
}

extern "C" asm void func_0201f3e4(void)
{
	ldr r1, [r0, #4]
	add r1, r1, #1
	str r1, [r0, #4]
	bx lr
}

extern "C" asm void func_0201f3f4(void)
{
	ldr r1, [r0, #4]
	ldr r0, [r0, #8]
	cmp r1, r0
	movge r0, #1
	movlt r0, #0
	bx lr
}

extern "C" asm void func_0201f40c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	bl func_02139668
	mov r3, #1
	ldmia r4, {r1, r2}
	bl func_02139e90
	ldr r0, [r4]
	str r0, [r5, #4]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0201f434(void)
{
	stmdb sp!, {r4, lr}
	ldr r4, [r0, #4]
	bl func_02139668
	mov r1, r4
	bl func_0204849c
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f458(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x4c
	add r5, sp, #0
	mov r6, r1
	add r4, sp, #0x30
lbl_0201f46c:
	mov r0, r5
	bl _ZN3dss11Fx32Vector3C1Ev
	add r5, r5, #0xc
	cmp r5, r4
	bcc lbl_0201f46c
	add r0, sp, #0
	mov r1, #0
	mov r2, #0x4c
	bl func_020882d4
	ldr r0, [r6]
	str r0, [sp, #0x40]
	ldr r0, [r6, #4]
	str r0, [sp, #0x30]
	ldr r0, [r6, #8]
	str r0, [sp, #0x34]
	ldr r0, [r6, #0xc]
	str r0, [sp, #0x38]
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	add r1, sp, #0
	bl func_0212c51c
	add sp, sp, #0x4c
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0201f4d4(void)
{
	stmdb sp!, {r4, lr}
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212c958
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f4f4(void)
{
	stmdb sp!, {r4, lr}
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212c580
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f520(void)
{
	stmdb sp!, {r3, r4, r5, r6, lr}
	sub sp, sp, #0x4c
	add r5, sp, #0
	mov r6, r1
	add r4, sp, #0x30
lbl_0201f534:
	mov r0, r5
	bl _ZN3dss11Fx32Vector3C1Ev
	add r5, r5, #0xc
	cmp r5, r4
	bcc lbl_0201f534
	add r0, sp, #0
	mov r1, #0
	mov r2, #0x4c
	bl func_020882d4
	ldr r0, [r6]
	str r0, [sp, #0x40]
	ldr r0, [r6, #4]
	str r0, [sp, #0x30]
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	add r1, sp, #0
	bl func_0212c51c
	add sp, sp, #0x4c
	ldmia sp!, {r3, r4, r5, r6, pc}
}

extern "C" asm void func_0201f58c(void)
{
	stmdb sp!, {r4, lr}
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212c8d8
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f5ac(void)
{
	stmdb sp!, {r4, lr}
	bl func_0202375c
	mov r4, r0
	bl func_02137f2c
	add r0, r0, r4, lsl #2
	ldr r0, [r0, #4]
	bl func_0212c580
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201f5d8(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r4, r1
	mov r5, r0
	ldr r1, [r4, #8]
	ldr r0, =data_020ed1bc
	bl func_02025b14
	ldr r0, [r4]
	str r0, [r5, #4]
	ldr r0, [r4, #4]
	str r0, [r5, #8]
	ldr r0, [r4, #8]
	str r0, [r5, #0xc]
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0201f610(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, =data_020ed1bc
	ldr r1, [r1, #0xc]
	cmp r1, #1
	bne lbl_0201f634
	mov r1, #1
	bl func_0201f654
	mov r0, #1
	ldmia sp!, {r3, pc}
lbl_0201f634:
	cmp r1, #2
	movne r0, #0
	ldmneia sp!, {r3, pc}
	mov r1, #0
	bl func_0201f654
	mov r0, #1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f654(void)
{
	stmdb sp!, {r3, lr}
	ldr r2, [r0, #4]
	cmp r2, #0
	beq lbl_0201f678
	cmp r2, #1
	beq lbl_0201f69c
	cmp r2, #2
	beq lbl_0201f6c0
	ldmia sp!, {r3, pc}
lbl_0201f678:
	cmp r1, #0
	ldr r1, [r0, #8]
	beq lbl_0201f690
	ldr r0, =g_GlobalFlag
	bl _ZN6status8GameFlag3setEj
	ldmia sp!, {r3, pc}
lbl_0201f690:
	ldr r0, =g_GlobalFlag
	bl _ZN6status8GameFlag6removeEj
	ldmia sp!, {r3, pc}
lbl_0201f69c:
	cmp r1, #0
	ldr r1, [r0, #8]
	beq lbl_0201f6b4
	ldr r0, =g_AreaFlag
	bl _ZN6status8GameFlag3setEj
	ldmia sp!, {r3, pc}
lbl_0201f6b4:
	ldr r0, =g_AreaFlag
	bl _ZN6status8GameFlag6removeEj
	ldmia sp!, {r3, pc}
lbl_0201f6c0:
	cmp r1, #0
	ldr r1, [r0, #8]
	beq lbl_0201f6d8
	ldr r0, =g_LocalFlag
	bl _ZN6status8GameFlag3setEj
	ldmia sp!, {r3, pc}
lbl_0201f6d8:
	ldr r0, =g_LocalFlag
	bl _ZN6status8GameFlag6removeEj
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f6f0(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, [r0]
	mov r1, #1
	str r0, [sp]
	bl func_02023688
	mov r0, #1
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201f70c(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	bl func_0202375c
	mov r4, r0
	bl func_020236a8
	cmp r0, r4
	ble lbl_0201f758
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_0201f768
	bl func_02137f2c
	mov r1, r4
	bl func_02138eb8
	mov r1, r0
	ldr r0, =data_020efcc0
	bl func_02039760
	b lbl_0201f768
lbl_0201f758:
	ldr r0, =data_020efcc0
	mov r1, #0
	bl func_02039760
	mvn r4, #0
lbl_0201f768:
	ldr r1, [r5, #4]
	ldr r0, =data_020efcc0
	mov r2, r4
	bl func_02039768
	ldr r0, =g_HengeNoTsue
	bl _ZN3cmn18HengeNoTsueManager9isMonsterEv
	cmp r0, #0
	bne lbl_0201f794
	bl _ZN3cmn9PartyTalk12getSingletonEv
	ldr r1, [r5]
	bl _ZN3cmn9PartyTalk15setPreMessageNoEi
lbl_0201f794:
	ldr r0, =data_0210bb94
	mov r1, #0xe
	bl func_02058114
	cmp r0, #0
	beq lbl_0201f7b8
	bl func_0212aaac
	ldmia r5, {r1, r2}
	bl func_0212ab8c
	b lbl_0201f7c4
lbl_0201f7b8:
	bl func_021372e8
	ldmia r5, {r1, r2}
	bl func_0213745c
lbl_0201f7c4:
	mov r0, #1
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0201f7d8(void)
{
	stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, lr}
	sub sp, sp, #0x20
	mov r5, r0
	bl func_0202375c
	mov r4, r0
	bl func_020236a8
	cmp r0, r4
	ble lbl_0201f828
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_0201f838
	bl func_02137f2c
	mov r1, r4
	bl func_02138eb8
	mov r1, r0
	ldr r0, =data_020efcc0
	bl func_02039760
	b lbl_0201f838
lbl_0201f828:
	ldr r0, =data_020efcc0
	mov r1, #0
	bl func_02039760
	mvn r4, #0
lbl_0201f838:
	ldr r9, [r5]
	ldr r8, [r5, #4]
	ldr r7, [r5, #8]
	ldr r6, [r5, #0xc]
	ldr lr, [r5, #0x10]
	ldr r12, [r5, #0x14]
	ldr r3, [r5, #0x18]
	ldr r2, [r5, #0x1c]
	mov r1, #0
	str r3, [sp, #0x18]
	mov r0, r1
	str r9, [sp]
	str r8, [sp, #4]
	str r7, [sp, #8]
	str r6, [sp, #0xc]
	str lr, [sp, #0x10]
	str r12, [sp, #0x14]
	str r2, [sp, #0x1c]
	add r3, sp, #0
lbl_0201f884:
	ldr r2, [r3, r0, lsl #2]
	cmp r2, #0
	beq lbl_0201f8a0
	add r0, r0, #1
	cmp r0, #8
	add r1, r1, #1
	blt lbl_0201f884
lbl_0201f8a0:
	ldr r0, =data_020efcc0
	mov r2, r4
	bl func_02039768
	bl func_021372e8
	bl func_0213747c
	ldr r4, [r5]
	cmp r4, #0
	beq lbl_0201f8e8
	bl func_021372e8
	mov r1, r4
	bl func_02137470
	ldr r0, =g_HengeNoTsue
	bl _ZN3cmn18HengeNoTsueManager9isMonsterEv
	cmp r0, #0
	bne lbl_0201f8e8
	bl _ZN3cmn9PartyTalk12getSingletonEv
	ldr r1, [r5]
	bl _ZN3cmn9PartyTalk15setPreMessageNoEi
lbl_0201f8e8:
	ldr r4, [r5, #4]
	cmp r4, #0
	beq lbl_0201f900
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f900:
	ldr r4, [r5, #8]
	cmp r4, #0
	beq lbl_0201f918
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f918:
	ldr r4, [r5, #0xc]
	cmp r4, #0
	beq lbl_0201f930
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f930:
	ldr r4, [r5, #0x10]
	cmp r4, #0
	beq lbl_0201f948
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f948:
	ldr r4, [r5, #0x14]
	cmp r4, #0
	beq lbl_0201f960
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f960:
	ldr r4, [r5, #0x18]
	cmp r4, #0
	beq lbl_0201f978
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f978:
	ldr r4, [r5, #0x1c]
	cmp r4, #0
	beq lbl_0201f990
	bl func_021372e8
	mov r1, r4
	bl func_02137470
lbl_0201f990:
	mov r0, #1
	add sp, sp, #0x20
	ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, pc}
}

extern "C" asm void func_0201f9a8(void)
{
	stmdb sp!, {r4, r5, r6, r7, lr}
	sub sp, sp, #0x1c
	mov r5, r0
	bl func_0202375c
	mov r4, r0
	bl func_020236a8
	cmp r0, r4
	ble lbl_0201f9f8
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_0201fa08
	bl func_02137f2c
	mov r1, r4
	bl func_02138eb8
	mov r1, r0
	ldr r0, =data_020efcc0
	bl func_02039760
	b lbl_0201fa08
lbl_0201f9f8:
	ldr r0, =data_020efcc0
	mov r1, #0
	bl func_02039760
	mvn r4, #0
lbl_0201fa08:
	ldr r12, [r5, #0xc]
	ldr r6, [r5, #0x10]
	ldmia r5, {r0, r7, lr}
	ldr r3, [r5, #0x14]
	ldr r2, [r5, #0x18]
	ldr r1, [r5, #0x1c]
	str r7, [sp]
	str lr, [sp, #4]
	str r12, [sp, #8]
	str r6, [sp, #0xc]
	str r3, [sp, #0x10]
	str r2, [sp, #0x14]
	str r1, [sp, #0x18]
	bl _ZN7dssrand4randEi
	mov r6, r0
	ldr r1, [r5]
	ldr r0, =data_020efcc0
	mov r2, r4
	bl func_02039768
	bl func_021372e8
	bl func_0213747c
	add r0, sp, #0
	ldr r4, [r0, r6, lsl #2]
	bl func_021372e8
	mov r1, r4
	bl func_02137470
	ldr r0, =g_HengeNoTsue
	bl _ZN3cmn18HengeNoTsueManager9isMonsterEv
	cmp r0, #0
	bne lbl_0201fa8c
	bl _ZN3cmn9PartyTalk12getSingletonEv
	mov r1, r4
	bl _ZN3cmn9PartyTalk15setPreMessageNoEi
lbl_0201fa8c:
	mov r0, #1
	add sp, sp, #0x1c
	ldmia sp!, {r4, r5, r6, r7, pc}
}

extern "C" asm void func_0201faa4(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	ldr r2, =data_020ed270
	mov r5, r0
	ldr r0, [r2]
	mov r3, #0
	mov r4, r1
	str r0, [r5, #0x10]
	ldr r1, [r4, #8]
	ldr r0, =data_020efcc0
	str r1, [r5, #4]
	ldr r1, [r4, #0xc]
	sub r2, r3, #1
	add r1, r1, #0x1e
	str r1, [r5, #8]
	str r3, [r5, #0x14]
	ldr r1, [r4, #0x10]
	str r1, [r5, #0x20]
	ldr r1, [r4, #0x14]
	str r1, [r5, #0x24]
	str r3, [r5, #0xc]
	str r3, [r5, #0x18]
	str r3, [r5, #0x1c]
	ldr r1, [r4, #4]
	bl func_02039768
	ldr r0, =g_HengeNoTsue
	bl _ZN3cmn18HengeNoTsueManager9isMonsterEv
	cmp r0, #0
	bne lbl_0201fb20
	bl _ZN3cmn9PartyTalk12getSingletonEv
	ldr r1, [r4]
	bl _ZN3cmn9PartyTalk15setPreMessageNoEi
lbl_0201fb20:
	ldr r0, =data_020ed1bc
	bl func_020259a8
	ldr r2, [r4, #4]
	cmp r2, #1
	bne lbl_0201fb4c
	ldr r1, [r4]
	ldr r0, =data_020ed1bc
	bl func_02025a1c
	mov r0, #0
	bl func_02026cc0
	b lbl_0201fbb0
lbl_0201fb4c:
	cmp r2, #2
	bne lbl_0201fb70
	ldr r1, [r4]
	ldr r0, =data_020ed1bc
	add r1, r1, #1
	str r1, [r5, #0x14]
	ldr r1, [r4]
	bl func_02025a1c
	b lbl_0201fbb0
lbl_0201fb70:
	cmp r2, #3
	bcc lbl_0201fbb0
	ldr r1, [r4]
	ldr r0, =data_020ed1bc
	add r1, r1, r2
	sub r1, r1, #1
	str r1, [r5, #0x14]
	ldmia r4, {r1, r2}
	sub r2, r2, #2
	bl func_02025abc
	ldr r2, [r4]
	ldr r1, [r4, #4]
	ldr r0, =data_020ed1bc
	add r1, r2, r1
	sub r1, r1, #2
	bl func_02025a1c
lbl_0201fbb0:
	ldr r0, =data_020ed1bc
	bl func_02025b60
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_0201fbcc(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =data_020ed1bc
	bl func_02025b68
	cmp r0, #0
	ldr r0, [r4, #0x18]
	beq lbl_0201fcc8
	cmp r0, #0
	bne lbl_0201fc20
	ldr r0, [r4, #0x14]
	cmp r0, #0
	beq lbl_0201fc20
	ldr r0, =data_020ed1bc
	mov r1, #1
	str r1, [r4, #0x18]
	bl func_02052408
	ldr r0, =data_020ed1bc
	bl func_02025b78
	mov r0, #0
	bl func_02026cc0
	ldmia sp!, {r4, pc}
lbl_0201fc20:
	ldr r1, [r4, #0xc]
	mvn r0, #0
	cmp r1, r0
	bne lbl_0201fc4c
	ldr r0, =data_020ed1bc
	bl func_02025b78
	ldr r0, [r4, #0x24]
	cmp r0, #0
	moveq r0, #1
	streq r0, [r4, #0x1c]
	ldmia sp!, {r4, pc}
lbl_0201fc4c:
	cmp r1, #0x1e
	bne lbl_0201fc70
	ldr r0, [r4, #4]
	mov r1, #0
	bl func_02026cb8
	ldr r0, [r4, #0xc]
	add r0, r0, #1
	str r0, [r4, #0xc]
	ldmia sp!, {r4, pc}
lbl_0201fc70:
	ldr r0, [r4, #8]
	cmp r1, r0
	addlt r0, r1, #1
	strlt r0, [r4, #0xc]
	ldmltia sp!, {r4, pc}
	bne lbl_0201fca0
	mov r0, #0
	bl func_02026cc0
	ldr r0, [r4, #0xc]
	add r0, r0, #1
	str r0, [r4, #0xc]
	ldmia sp!, {r4, pc}
lbl_0201fca0:
	ldmleia sp!, {r4, pc}
	ldr r0, [r4, #0x20]
	cmp r0, #0
	bne lbl_0201fcbc
	ldr r0, [r4, #0x10]
	mov r1, #0
	bl func_02026cb8
lbl_0201fcbc:
	mvn r0, #0
	str r0, [r4, #0xc]
	ldmia sp!, {r4, pc}
lbl_0201fcc8:
	cmp r0, #1
	ldmneia sp!, {r4, pc}
	ldr r0, =data_020ed1bc
	bl func_0205241c
	cmp r0, #0
	ldmneia sp!, {r4, pc}
	ldr r0, =data_020ed1bc
	bl func_020259a8
	ldr r1, [r4, #0x14]
	ldr r0, =data_020ed1bc
	bl func_02025a1c
	ldr r0, =data_020ed1bc
	bl func_02025b60
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201fd04(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r1, [r4, #0x24]
	cmp r1, #1
	bne lbl_0201fd50
	ldr r0, =data_020ed1bc
	ldr r1, [r0, #0xc]
	sub r1, r1, #1
	cmp r1, #1
	bhi lbl_0201fd48
	mov r1, #1
	str r1, [r0, #0xc]
	bl func_02052408
	mov r0, #1
	str r0, [r4, #0x1c]
	mov r0, #0
	str r0, [r4, #0x24]
lbl_0201fd48:
	mov r0, #0
	ldmia sp!, {r4, pc}
lbl_0201fd50:
	ldr r0, [r4, #0x1c]
	cmp r0, #1
	cmpeq r1, #0
	movne r0, #0
	ldmneia sp!, {r4, pc}
	ldr r0, =data_020ed1bc
	mov r1, #1
	str r1, [r0, #0xc]
	bl func_02052408
	mov r0, #1
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201fd80(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, [r0]
	add r0, r0, #1
	sub r0, r0, #2
	cmp r0, #1
	bhi lbl_0201fdc8
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #3
	beq lbl_0201fdb8
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #2
	bne lbl_0201fdc0
lbl_0201fdb8:
	mov r0, #1
	ldmia sp!, {r3, pc}
lbl_0201fdc0:
	mov r0, #0
	ldmia sp!, {r3, pc}
lbl_0201fdc8:
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #1
	beq lbl_0201fde8
	ldr r0, =g_Stage
	bl _ZN6status11StageStatus11getTimeZoneEv
	cmp r0, #4
	bne lbl_0201fdf0
lbl_0201fde8:
	mov r0, #1
	ldmia sp!, {r3, pc}
lbl_0201fdf0:
	mov r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201fdfc(void)
{
	stmdb sp!, {r4, lr}
	ldr r1, [r0]
	ldr r0, =g_Stage
	add r1, r1, #1
	bl _ZN6status11StageStatus11setTimeZoneE9TIME_ZONE
	bl func_02139668
	mov r4, r0
	ldr r0, =g_Global
	bl _ZN6Global10getMapNameEv
	mov r1, r0
	mov r0, r4
	bl func_02139e30
	mov r0, #1
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201fe3c(void)
{
	stmdb sp!, {r3, lr}
	ldr r1, [r0, #4]
	ldr r0, [r0]
	cmp r1, #0
	bne lbl_0201fe78
	bl _ZN6status11PartyStatus29getPlayerStatusForPlayerIndexEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	moveq r0, #1
	movne r0, #0
	cmp r0, #1
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, pc}
lbl_0201fe78:
	bl _ZN6status11PartyStatus29getPlayerStatusForPlayerIndexEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #1
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201fe94(void)
{
	stmdb sp!, {r3, lr}
	ldr r0, [r0]
	bl _ZN6status11PartyStatus30isInsideCarriageForPlayerIndexEi
	cmp r0, #0
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r3, pc}
}

extern "C" asm void func_0201feb0(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus13setNormalModeEv
	ldr r1, [r4]
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus12getSortIndexEi
	mvn r1, #0
	cmp r0, r1
	movne r0, #1
	moveq r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201fee4(void)
{
	stmdb sp!, {r4, lr}
	mov r4, r0
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus13setNormalModeEv
	ldr r1, [r4, #4]
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus12getSortIndexEi
	ldr r1, [r4]
	cmp r1, r0
	moveq r0, #1
	movne r0, #0
	ldmia sp!, {r4, pc}
}

extern "C" asm void func_0201ff18(void)
{
	stmdb sp!, {r4, r5, r6, lr}
	mov r6, r0
	ldr r0, =_ZN6status7g_PartyE
	bl _ZN6status11PartyStatus13setBattleModeEv
	ldr r0, =_ZN6status7g_PartyE
	mov r5, #0
	bl _ZN6status11PartyStatus8getCountEv
	cmp r0, #0
	ble lbl_0201ffb4
	ldr r4, =_ZN6status7g_PartyE
lbl_0201ff40:
	ldr r0, [r6]
	mov r1, r5
	cmp r0, #1
	mov r0, r4
	bne lbl_0201ff78
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7revivalEv
	mov r0, r4
	mov r1, r5
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #0x188
	bl _ZN6status12StatusChange5clearEv
	b lbl_0201ffa0
lbl_0201ff78:
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7isDeathEv
	cmp r0, #0
	bne lbl_0201ffa0
	mov r0, r4
	mov r1, r5
	bl _ZN6status11PartyStatus15getPlayerStatusEi
	add r0, r0, #8
	bl _ZN6status14HaveStatusInfo7revivalEv
lbl_0201ffa0:
	mov r0, r4
	add r5, r5, #1
	bl _ZN6status11PartyStatus8getCountEv
	cmp r5, r0
	blt lbl_0201ff40
lbl_0201ffb4:
	ldr r0, [r6]
	cmp r0, #1
	bne lbl_0201fff8
	ldr r0, =data_0210bb94
	mov r1, #0xc
	bl func_02058114
	cmp r0, #0
	beq lbl_0201ffe8
	bl func_02132a90
	ldr r1, [r0]
	ldr r1, [r1, #0xc]
	blx r1
	b lbl_0201fff8
lbl_0201ffe8:
	bl func_02127b28
	ldr r1, [r0]
	ldr r1, [r1, #0xc]
	blx r1
lbl_0201fff8:
	mov r0, #1
	ldmia sp!, {r4, r5, r6, pc}
}

extern "C" asm void func_02020008(void)
{
	ldrb r1, [r0, #2]
	tst r1, #1
	beq lbl_02020028
	tst r1, #0x40
	movne r0, #0
	bxne lr
	orr r1, r1, #0x40
	strb r1, [r0, #2]
lbl_02020028:
	mov r0, #1
	bx lr
}

extern "C" asm void func_02020030(void)
{
	stmdb sp!, {r3, r4, r5, lr}
	mov r5, r0
	ldrh r2, [r5]
	mov r4, #1
	rsb r1, r4, #0x178
	cmp r2, r1
	addls pc, pc, r2, lsl #2
	b lbl_02022874
	b lbl_02022884
	b lbl_02022884
	b lbl_02020630
	b lbl_0202063c
	b lbl_02020658
	b lbl_020206e4
	b lbl_02020700
	b lbl_020206ac
	b lbl_02020770
	b lbl_0202203c
	b lbl_02020a10
	b lbl_02020a2c
	b lbl_0202212c
	b lbl_02022140
	b lbl_02022154
	b lbl_02022168
	b lbl_02020e70
	b lbl_02020c4c
	b lbl_02020bdc
	b lbl_02020c14
	b lbl_02020c30
	b lbl_02022410
	b lbl_02021208
	b lbl_02020690
	b lbl_02020674
	b lbl_0202071c
	b lbl_02020738
	b lbl_020208c0
	b lbl_02022064
	b lbl_02020888
	b lbl_020208a4
	b lbl_02020cf4
	b lbl_02020d10
	b lbl_020223ac
	b lbl_020223c0
	b lbl_020223e8
	b lbl_020223fc
	b lbl_02020e8c
	b lbl_02020ec0
	b lbl_02020ef8
	b lbl_02020dec
	b lbl_0202109c
	b lbl_02021128
	b lbl_020211ec
	b lbl_02022424
	b lbl_02022438
	b lbl_02022320
	b lbl_02022334
	b lbl_02022348
	b lbl_0202235c
	b lbl_02022370
	b lbl_02022384
	b lbl_02020fd8
	b lbl_02021010
	b lbl_0202110c
	b lbl_020210f0
	b lbl_02020ff4
	b lbl_0202102c
	b lbl_020210d4
	b lbl_02022874
	b lbl_0202208c
	b lbl_020220b4
	b lbl_02021144
	b lbl_02021160
	b lbl_0202117c
	b lbl_02021198
	b lbl_02020f4c
	b lbl_02020f68
	b lbl_02020f84
	b lbl_020211b4
	b lbl_020211d0
	b lbl_02020fa0
	b lbl_02020fbc
	b lbl_02020bf8
	b lbl_020206c8
	b lbl_02021fc4
	b lbl_02021fd8
	b lbl_0202078c
	b lbl_020207a8
	b lbl_02021fec
	b lbl_020209a0
	b lbl_02022050
	b lbl_020208dc
	b lbl_020208f8
	b lbl_02020914
	b lbl_0202094c
	b lbl_020220f0
	b lbl_02022104
	b lbl_02020930
	b lbl_020209f4
	b lbl_02020a48
	b lbl_02020a64
	b lbl_02022258
	b lbl_0202226c
	b lbl_020222d0
	b lbl_020222e4
	b lbl_020222f8
	b lbl_0202230c
	b lbl_02020e38
	b lbl_02020e54
	b lbl_02020af0
	b lbl_02020b0c
	b lbl_02020b28
	b lbl_02020b44
	b lbl_0202217c
	b lbl_02022190
	b lbl_02020c68
	b lbl_02020c84
	b lbl_02020ca0
	b lbl_02020cbc
	b lbl_02020d2c
	b lbl_02020d44
	b lbl_02020d60
	b lbl_02020d7c
	b lbl_02020d98
	b lbl_02020db4
	b lbl_02020dd0
	b lbl_02021aa8
	b lbl_02021ac4
	b lbl_02021080
	b lbl_02020a80
	b lbl_020207e0
	b lbl_020207fc
	b lbl_02020968
	b lbl_02020984
	b lbl_020209d8
	b lbl_02022280
	b lbl_02022294
	b lbl_02020cd8
	b lbl_02021064
	b lbl_02022618
	b lbl_02022640
	b lbl_02022654
	b lbl_020217d0
	b lbl_020212e8
	b lbl_02021304
	b lbl_02020a9c
	b lbl_02022874
	b lbl_020220a0
	b lbl_020220c8
	b lbl_020220dc
	b lbl_02021fb0
	b lbl_02020754
	b lbl_0202283c
	b lbl_02022820
	b lbl_02022398
	b lbl_0202244c
	b lbl_02022460
	b lbl_02022000
	b lbl_02022014
	b lbl_02022028
	b lbl_02021048
	b lbl_02022078
	b lbl_02022118
	b lbl_020217b4
	b lbl_020217ec
	b lbl_02021974
	b lbl_02021240
	b lbl_02021224
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02021920
	b lbl_02022244
	b lbl_02022474
	b lbl_02021358
	b lbl_020222a8
	b lbl_0202125c
	b lbl_020221f4
	b lbl_02022208
	b lbl_0202221c
	b lbl_020221b8
	b lbl_02021278
	b lbl_020221cc
	b lbl_020221e0
	b lbl_02020b60
	b lbl_020212cc
	b lbl_02021294
	b lbl_020210b8
	b lbl_02022230
	b lbl_02022488
	b lbl_0202133c
	b lbl_020223d4
	b lbl_02021374
	b lbl_02021390
	b lbl_02022528
	b lbl_020224b0
	b lbl_020213ac
	b lbl_02021728
	b lbl_02022550
	b lbl_0202141c
	b lbl_0202177c
	b lbl_0202253c
	b lbl_02022858
	b lbl_020213c8
	b lbl_02022514
	b lbl_02021438
	b lbl_020224c4
	b lbl_0202249c
	b lbl_02021760
	b lbl_02022564
	b lbl_02020e08
	b lbl_02020e20
	b lbl_02021798
	b lbl_020224d8
	b lbl_02022500
	b lbl_02022874
	b lbl_02022578
	b lbl_02022874
	b lbl_02022874
	b lbl_020219ac
	b lbl_02022874
	b lbl_02021808
	b lbl_020219c8
	b lbl_02021824
	b lbl_02021a00
	b lbl_02021840
	b lbl_0202185c
	b lbl_02022874
	b lbl_0202258c
	b lbl_02021878
	b lbl_020225a0
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_02022874
	b lbl_020225b4
	b lbl_020225dc
	b lbl_02022874
	b lbl_020218b0
	b lbl_020218cc
	b lbl_020218e8
	b lbl_02022668
	b lbl_02021a54
	b lbl_020225f0
	b lbl_02022874
	b lbl_02022874
	b lbl_02021904
	b lbl_0202193c
	b lbl_02022604
	b lbl_02021958
	b lbl_02021990
	b lbl_02021a8c
	b lbl_02021a70
	b lbl_0202262c
	b lbl_02021a1c
	b lbl_02021400
	b lbl_02021a38
	b lbl_02020f30
	b lbl_02021ae0
	b lbl_02020edc
	b lbl_02021454
	b lbl_02021488
	b lbl_020214a4
	b lbl_020214c0
	b lbl_020214dc
	b lbl_020214f8
	b lbl_02021514
	b lbl_02021530
	b lbl_0202154c
	b lbl_0202267c
	b lbl_02022690
	b lbl_02021568
	b lbl_02021afc
	b lbl_02021b18
	b lbl_02020834
	b lbl_02021b50
	b lbl_02021b6c
	b lbl_02021b88
	b lbl_02021584
	b lbl_020215a0
	b lbl_02021c14
	b lbl_02021c30
	b lbl_020226a4
	b lbl_020226b8
	b lbl_020215bc
	b lbl_020215d8
	b lbl_02020850
	b lbl_02020818
	b lbl_020221a4
	b lbl_020226f4
	b lbl_0202276c
	b lbl_020215f4
	b lbl_02020b78
	b lbl_020226cc
	b lbl_020226e0
	b lbl_020212b0
	b lbl_02021610
	b lbl_0202162c
	b lbl_0202086c
	b lbl_02021648
	b lbl_02020b90
	b lbl_02021664
	b lbl_02021680
	b lbl_0202271c
	b lbl_02022730
	b lbl_02022744
	b lbl_02021c4c
	b lbl_02021c68
	b lbl_02022708
	b lbl_02021ca0
	b lbl_02021c84
	b lbl_02022758
	b lbl_02021cbc
	b lbl_02021894
	b lbl_02021cd8
	b lbl_02021cf4
	b lbl_02021d10
	b lbl_02021d2c
	b lbl_02022794
	b lbl_02021d48
	b lbl_02022874
	b lbl_02020ea8
	b lbl_02021d64
	b lbl_020227a8
	b lbl_02020bc4
	b lbl_02021d80
	b lbl_020227bc
	b lbl_02021d9c
	b lbl_0202169c
	b lbl_02021744
	b lbl_02021320
	b lbl_020216b8
	b lbl_020227d0
	b lbl_02022874
	b lbl_020225c8
	b lbl_02021db8
	b lbl_02021dd4
	b lbl_02021e0c
	b lbl_02021e28
	b lbl_02021f24
	b lbl_02021f08
	b lbl_020227f8
	b lbl_020219e4
	b lbl_02021df0
	b lbl_02021e44
	b lbl_020216d4
	b lbl_02021e60
	b lbl_020216f0
	b lbl_02022874
	b lbl_02021e7c
	b lbl_02021eb4
	b lbl_02021ed0
	b lbl_02021eec
	b lbl_020227e4
	b lbl_02022874
	b lbl_02021e98
	b lbl_02020ba8
	b lbl_0202170c
	b lbl_02021f40
	b lbl_02021470
	b lbl_02020ab8
	b lbl_02022874
	b lbl_020222bc
	b lbl_02021f5c
	b lbl_0202280c
	b lbl_020213e4
	b lbl_02020ad4
	b lbl_02021f78
	b lbl_02021f94
	b lbl_020207c4
	b lbl_020209bc
	b lbl_02022874
	b lbl_02021b34
	b lbl_020224ec
	b lbl_02022780
	b lbl_02021bc0
	b lbl_02021bdc
	b lbl_02021ba4
	b lbl_02020f14
	b lbl_02021bf8
lbl_02020630:
	bl func_02020008
	cmp r0, #0
	b lbl_02022884
lbl_0202063c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201f70c
	mov r4, r0
	b lbl_02022884
lbl_02020658:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201f7d8
	mov r4, r0
	b lbl_02022884
lbl_02020674:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023784
	mov r4, r0
	b lbl_02022884
lbl_02020690:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023828
	mov r4, r0
	b lbl_02022884
lbl_020206ac:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201f6f0
	mov r4, r0
	b lbl_02022884
lbl_020206c8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ce30
	mov r4, r0
	b lbl_02022884
lbl_020206e4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213cefc
	mov r4, r0
	b lbl_02022884
lbl_02020700:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213cf58
	mov r4, r0
	b lbl_02022884
lbl_0202071c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201fd80
	mov r4, r0
	b lbl_02022884
lbl_02020738:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201fdfc
	mov r4, r0
	b lbl_02022884
lbl_02020754:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ee4c
	mov r4, r0
	b lbl_02022884
lbl_02020770:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024880
	mov r4, r0
	b lbl_02022884
lbl_0202078c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d36c
	mov r4, r0
	b lbl_02022884
lbl_020207a8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d39c
	mov r4, r0
	b lbl_02022884
lbl_020207c4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213cda8
	mov r4, r0
	b lbl_02022884
lbl_020207e0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213cdd4
	mov r4, r0
	b lbl_02022884
lbl_020207fc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ce18
	mov r4, r0
	b lbl_02022884
lbl_02020818:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d068
	mov r4, r0
	b lbl_02022884
lbl_02020834:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024b68
	mov r4, r0
	b lbl_02022884
lbl_02020850:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024be8
	mov r4, r0
	b lbl_02022884
lbl_0202086c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024c70
	mov r4, r0
	b lbl_02022884
lbl_02020888:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d40c
	mov r4, r0
	b lbl_02022884
lbl_020208a4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d424
	mov r4, r0
	b lbl_02022884
lbl_020208c0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024ffc
	mov r4, r0
	b lbl_02022884
lbl_020208dc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d730
	mov r4, r0
	b lbl_02022884
lbl_020208f8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d754
	mov r4, r0
	b lbl_02022884
lbl_02020914:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d778
	mov r4, r0
	b lbl_02022884
lbl_02020930:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d3d4
	mov r4, r0
	b lbl_02022884
lbl_0202094c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d3f0
	mov r4, r0
	b lbl_02022884
lbl_02020968:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d7dc
	mov r4, r0
	b lbl_02022884
lbl_02020984:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d79c
	mov r4, r0
	b lbl_02022884
lbl_020209a0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d3b8
	mov r4, #0
	b lbl_02022884
lbl_020209bc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020246f0
	mov r4, r0
	b lbl_02022884
lbl_020209d8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d7bc
	mov r4, r0
	b lbl_02022884
lbl_020209f4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d7fc
	mov r4, r0
	b lbl_02022884
lbl_02020a10:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d818
	mov r4, r0
	b lbl_02022884
lbl_02020a2c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d864
	mov r4, r0
	b lbl_02022884
lbl_02020a48:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d8f8
	mov r4, r0
	b lbl_02022884
lbl_02020a64:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d9ac
	mov r4, r0
	b lbl_02022884
lbl_02020a80:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023ca0
	mov r4, r0
	b lbl_02022884
lbl_02020a9c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023d08
	mov r4, r0
	b lbl_02022884
lbl_02020ab8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023d70
	mov r4, r0
	b lbl_02022884
lbl_02020ad4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02025688
	mov r4, r0
	b lbl_02022884
lbl_02020af0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213db98
	mov r4, r0
	b lbl_02022884
lbl_02020b0c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213dbd8
	mov r4, r0
	b lbl_02022884
lbl_02020b28:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024acc
	mov r4, r0
	b lbl_02022884
lbl_02020b44:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024b08
	mov r4, r0
	b lbl_02022884
lbl_02020b60:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_0213fccc
	mov r4, r0
	b lbl_02022884
lbl_02020b78:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_02024914
	mov r4, r0
	b lbl_02022884
lbl_02020b90:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_0202492c
	mov r4, r0
	b lbl_02022884
lbl_02020ba8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020249c8
	mov r4, r0
	b lbl_02022884
lbl_02020bc4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_020249f4
	mov r4, r0
	b lbl_02022884
lbl_02020bdc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ee6c
	mov r4, r0
	b lbl_02022884
lbl_02020bf8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f074
	mov r4, r0
	b lbl_02022884
lbl_02020c14:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f00c
	mov r4, r0
	b lbl_02022884
lbl_02020c30:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f040
	mov r4, r0
	b lbl_02022884
lbl_02020c4c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f0d0
	mov r4, r0
	b lbl_02022884
lbl_02020c68:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201ff18
	mov r4, r0
	b lbl_02022884
lbl_02020c84:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201fee4
	mov r4, r0
	b lbl_02022884
lbl_02020ca0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201feb0
	mov r4, r0
	b lbl_02022884
lbl_02020cbc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201fe94
	mov r4, r0
	b lbl_02022884
lbl_02020cd8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201fe3c
	mov r4, r0
	b lbl_02022884
lbl_02020cf4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020244c4
	mov r4, r0
	b lbl_02022884
lbl_02020d10:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024564
	mov r4, r0
	b lbl_02022884
lbl_02020d2c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_02023dfc
	mov r4, r0
	b lbl_02022884
lbl_02020d44:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0202500c
	mov r4, r0
	b lbl_02022884
lbl_02020d60:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020250d4
	mov r4, r0
	b lbl_02022884
lbl_02020d7c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020250e8
	mov r4, r0
	b lbl_02022884
lbl_02020d98:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02025230
	mov r4, r0
	b lbl_02022884
lbl_02020db4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02025244
	mov r4, r0
	b lbl_02022884
lbl_02020dd0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02025278
	mov r4, r0
	b lbl_02022884
lbl_02020dec:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fa3c
	mov r4, r0
	b lbl_02022884
lbl_02020e08:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_0213fa58
	mov r4, r0
	b lbl_02022884
lbl_02020e20:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_02140718
	mov r4, r0
	b lbl_02022884
lbl_02020e38:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020255a8
	mov r4, r0
	b lbl_02022884
lbl_02020e54:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020255b8
	mov r4, r0
	b lbl_02022884
lbl_02020e70:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021408b8
	mov r4, r0
	b lbl_02022884
lbl_02020e8c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020245e8
	mov r4, r0
	b lbl_02022884
lbl_02020ea8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_02024bdc
	mov r4, r0
	b lbl_02022884
lbl_02020ec0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024650
	mov r4, r0
	b lbl_02022884
lbl_02020edc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0202467c
	mov r4, r0
	b lbl_02022884
lbl_02020ef8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fa08
	mov r4, r0
	b lbl_02022884
lbl_02020f14:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020256e4
	mov r4, r0
	b lbl_02022884
lbl_02020f30:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fe14
	mov r4, r0
	b lbl_02022884
lbl_02020f4c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023e7c
	mov r4, r0
	b lbl_02022884
lbl_02020f68:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213da5c
	mov r4, r0
	b lbl_02022884
lbl_02020f84:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213daec
	mov r4, r0
	b lbl_02022884
lbl_02020fa0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023e14
	mov r4, r0
	b lbl_02022884
lbl_02020fbc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023e58
	mov r4, r0
	b lbl_02022884
lbl_02020fd8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fa70
	mov r4, r0
	b lbl_02022884
lbl_02020ff4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fa90
	mov r4, r0
	b lbl_02022884
lbl_02021010:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213faa4
	mov r4, r0
	b lbl_02022884
lbl_0202102c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fac4
	mov r4, r0
	b lbl_02022884
lbl_02021048:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fadc
	mov r4, r0
	b lbl_02022884
lbl_02021064:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020255c8
	mov r4, r0
	b lbl_02022884
lbl_02021080:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0202561c
	mov r4, r0
	b lbl_02022884
lbl_0202109c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fe3c
	mov r4, r0
	b lbl_02022884
lbl_020210b8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fe50
	mov r4, r0
	b lbl_02022884
lbl_020210d4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fe80
	mov r4, r0
	b lbl_02022884
lbl_020210f0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213feac
	mov r4, r0
	b lbl_02022884
lbl_0202110c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ff50
	mov r4, r0
	b lbl_02022884
lbl_02021128:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ffac
	mov r4, r0
	b lbl_02022884
lbl_02021144:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023f10
	mov r4, r0
	b lbl_02022884
lbl_02021160:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023f28
	mov r4, r0
	b lbl_02022884
lbl_0202117c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023f44
	mov r4, r0
	b lbl_02022884
lbl_02021198:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020242dc
	mov r4, r0
	b lbl_02022884
lbl_020211b4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024304
	mov r4, r0
	b lbl_02022884
lbl_020211d0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024334
	mov r4, r0
	b lbl_02022884
lbl_020211ec:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213ffe0
	mov r4, r0
	b lbl_02022884
lbl_02021208:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f130
	mov r4, r0
	b lbl_02022884
lbl_02021224:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140108
	mov r4, r0
	b lbl_02022884
lbl_02021240:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140078
	mov r4, r0
	b lbl_02022884
lbl_0202125c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021404e4
	mov r4, r0
	b lbl_02022884
lbl_02021278:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140518
	mov r4, r0
	b lbl_02022884
lbl_02021294:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140560
	mov r4, r0
	b lbl_02022884
lbl_020212b0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f42c
	mov r4, r0
	b lbl_02022884
lbl_020212cc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214040c
	mov r4, r0
	b lbl_02022884
lbl_020212e8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024364
	mov r4, r0
	b lbl_02022884
lbl_02021304:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024374
	mov r4, r0
	b lbl_02022884
lbl_02021320:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024388
	mov r4, r0
	b lbl_02022884
lbl_0202133c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214048c
	mov r4, r0
	b lbl_02022884
lbl_02021358:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140154
	mov r4, r0
	b lbl_02022884
lbl_02021374:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214057c
	mov r4, r0
	b lbl_02022884
lbl_02021390:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f9d8
	mov r4, r0
	b lbl_02022884
lbl_020213ac:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021405a4
	mov r4, r0
	b lbl_02022884
lbl_020213c8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f14c
	mov r4, r0
	b lbl_02022884
lbl_020213e4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f168
	mov r4, r0
	b lbl_02022884
lbl_02021400:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f17c
	mov r4, r0
	b lbl_02022884
lbl_0202141c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024434
	mov r4, r0
	b lbl_02022884
lbl_02021438:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f198
	mov r4, r0
	b lbl_02022884
lbl_02021454:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020246b4
	mov r4, r0
	b lbl_02022884
lbl_02021470:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	bl func_021419c0
	mov r4, r0
	b lbl_02022884
lbl_02021488:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020246c0
	mov r4, r0
	b lbl_02022884
lbl_020214a4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020246d0
	mov r4, r0
	b lbl_02022884
lbl_020214c0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d468
	mov r4, r0
	b lbl_02022884
lbl_020214dc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d4c8
	mov r4, r0
	b lbl_02022884
lbl_020214f8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d4ec
	mov r4, r0
	b lbl_02022884
lbl_02021514:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d544
	mov r4, r0
	b lbl_02022884
lbl_02021530:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213d72c
	mov r4, r0
	b lbl_02022884
lbl_0202154c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140dbc
	mov r4, r0
	b lbl_02022884
lbl_02021568:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024b44
	mov r4, r0
	b lbl_02022884
lbl_02021584:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140e00
	mov r4, r0
	b lbl_02022884
lbl_020215a0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140e1c
	mov r4, r0
	b lbl_02022884
lbl_020215bc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140e3c
	mov r4, r0
	b lbl_02022884
lbl_020215d8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140e60
	mov r4, r0
	b lbl_02022884
lbl_020215f4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140e70
	mov r4, r0
	b lbl_02022884
lbl_02021610:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140f64
	mov r4, r0
	b lbl_02022884
lbl_0202162c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140f84
	mov r4, r0
	b lbl_02022884
lbl_02021648:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0212db3c
	mov r4, r0
	b lbl_02022884
lbl_02021664:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140fc4
	mov r4, r0
	b lbl_02022884
lbl_02021680:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141144
	mov r4, r0
	b lbl_02022884
lbl_0202169c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024eb0
	mov r4, r0
	b lbl_02022884
lbl_020216b8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024ecc
	mov r4, r0
	b lbl_02022884
lbl_020216d4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024f74
	mov r4, r0
	b lbl_02022884
lbl_020216f0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021417f8
	mov r4, r0
	b lbl_02022884
lbl_0202170c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021418dc
	mov r4, r0
	b lbl_02022884
lbl_02021728:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0212d968
	mov r4, r0
	b lbl_02022884
lbl_02021744:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0212d9dc
	mov r4, r0
	b lbl_02022884
lbl_02021760:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140624
	mov r4, r0
	b lbl_02022884
lbl_0202177c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140590
	mov r4, r0
	b lbl_02022884
lbl_02021798:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140650
	mov r4, r0
	b lbl_02022884
lbl_020217b4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140024
	mov r4, r0
	b lbl_02022884
lbl_020217d0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214072c
	mov r4, r0
	b lbl_02022884
lbl_020217ec:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140040
	mov r4, r0
	b lbl_02022884
lbl_02021808:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020243b4
	mov r4, r0
	b lbl_02022884
lbl_02021824:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020243f8
	mov r4, r0
	b lbl_02022884
lbl_02021840:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024aa0
	mov r4, r0
	b lbl_02022884
lbl_0202185c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024ab0
	mov r4, r0
	b lbl_02022884
lbl_02021878:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141424
	mov r4, r0
	b lbl_02022884
lbl_02021894:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214151c
	mov r4, r0
	b lbl_02022884
lbl_020218b0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fd74
	mov r4, r0
	b lbl_02022884
lbl_020218cc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214078c
	mov r4, r0
	b lbl_02022884
lbl_020218e8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024ea0
	mov r4, r0
	b lbl_02022884
lbl_02021904:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021407b8
	mov r4, r0
	b lbl_02022884
lbl_02021920:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021407f4
	mov r4, r0
	b lbl_02022884
lbl_0202193c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fe00
	mov r4, r0
	b lbl_02022884
lbl_02021958:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021404c0
	mov r4, r0
	b lbl_02022884
lbl_02021974:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214005c
	mov r4, r0
	b lbl_02022884
lbl_02021990:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021404a0
	mov r4, r0
	b lbl_02022884
lbl_020219ac:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020243e8
	mov r4, r0
	b lbl_02022884
lbl_020219c8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020243c8
	mov r4, r0
	b lbl_02022884
lbl_020219e4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020243d8
	mov r4, r0
	b lbl_02022884
lbl_02021a00:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024410
	mov r4, r0
	b lbl_02022884
lbl_02021a1c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023f74
	mov r4, r0
	b lbl_02022884
lbl_02021a38:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f1c4
	mov r4, r0
	b lbl_02022884
lbl_02021a54:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02023f70
	mov r4, r0
	b lbl_02022884
lbl_02021a70:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140744
	mov r4, r0
	b lbl_02022884
lbl_02021a8c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02140764
	mov r4, r0
	b lbl_02022884
lbl_02021aa8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213faf0
	mov r4, r0
	b lbl_02022884
lbl_02021ac4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213fc44
	mov r4, r0
	b lbl_02022884
lbl_02021ae0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0212d954
	mov r4, r0
	b lbl_02022884
lbl_02021afc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020241e8
	mov r4, r0
	b lbl_02022884
lbl_02021b18:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020242b4
	mov r4, r0
	b lbl_02022884
lbl_02021b34:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_020242c8
	mov r4, r0
	b lbl_02022884
lbl_02021b50:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f214
	mov r4, r0
	b lbl_02022884
lbl_02021b6c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f224
	mov r4, r0
	b lbl_02022884
lbl_02021b88:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f244
	mov r4, r0
	b lbl_02022884
lbl_02021ba4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02025698
	mov r4, r0
	b lbl_02022884
lbl_02021bc0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141bf0
	mov r4, r0
	b lbl_02022884
lbl_02021bdc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141bb4
	mov r4, r0
	b lbl_02022884
lbl_02021bf8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141c00
	mov r4, r0
	b lbl_02022884
lbl_02021c14:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f294
	mov r4, r0
	b lbl_02022884
lbl_02021c30:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0213f404
	mov r4, r0
	b lbl_02022884
lbl_02021c4c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214139c
	mov r4, r0
	b lbl_02022884
lbl_02021c68:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021413ac
	mov r4, r0
	b lbl_02022884
lbl_02021c84:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141400
	mov r4, r0
	b lbl_02022884
lbl_02021ca0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021413e8
	mov r4, r0
	b lbl_02022884
lbl_02021cbc:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021413b0
	mov r4, r0
	b lbl_02022884
lbl_02021cd8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024e90
	mov r4, r0
	b lbl_02022884
lbl_02021cf4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141530
	mov r4, r0
	b lbl_02022884
lbl_02021d10:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141550
	mov r4, r0
	b lbl_02022884
lbl_02021d2c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0201f9a8
	mov r4, r0
	b lbl_02022884
lbl_02021d48:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141574
	mov r4, r0
	b lbl_02022884
lbl_02021d64:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024424
	mov r4, r0
	b lbl_02022884
lbl_02021d80:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021415d4
	mov r4, r0
	b lbl_02022884
lbl_02021d9c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024cac
	mov r4, r0
	b lbl_02022884
lbl_02021db8:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141760
	mov r4, r0
	b lbl_02022884
lbl_02021dd4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141770
	mov r4, r0
	b lbl_02022884
lbl_02021df0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021417c8
	mov r4, r0
	b lbl_02022884
lbl_02021e0c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214179c
	mov r4, r0
	b lbl_02022884
lbl_02021e28:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024ee8
	mov r4, r0
	b lbl_02022884
lbl_02021e44:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021417e0
	mov r4, r0
	b lbl_02022884
lbl_02021e60:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021417f4
	mov r4, r0
	b lbl_02022884
lbl_02021e7c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141868
	mov r4, r0
	b lbl_02022884
lbl_02021e98:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021418c8
	mov r4, r0
	b lbl_02022884
lbl_02021eb4:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024f80
	mov r4, r0
	b lbl_02022884
lbl_02021ed0:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024fd0
	mov r4, r0
	b lbl_02022884
lbl_02021eec:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024fe8
	mov r4, r0
	b lbl_02022884
lbl_02021f08:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024a34
	mov r4, r0
	b lbl_02022884
lbl_02021f24:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02024a8c
	mov r4, r0
	b lbl_02022884
lbl_02021f40:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0214192c
	mov r4, r0
	b lbl_02022884
lbl_02021f5c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141a28
	mov r4, r0
	b lbl_02022884
lbl_02021f78:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141ab0
	mov r4, r0
	b lbl_02022884
lbl_02021f94:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_02141ac0
	mov r4, r0
	b lbl_02022884
lbl_02021fb0:
	ldr r0, =data_020ec61c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02021fc4:
	ldr r0, =data_0215fba4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02021fd8:
	ldr r0, =data_0215fb90
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02021fec:
	ldr r0, =data_0215fbf8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022000:
	ldr r0, =data_0215fbc8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022014:
	ldr r0, =data_0215fb8c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022028:
	ldr r0, =data_0216010c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202203c:
	ldr r0, =data_020ec5e8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022050:
	ldr r0, =data_0215fbb8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022064:
	ldr r0, =data_020ec5a4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022078:
	ldr r0, =data_02160070
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202208c:
	ldr r0, =data_0215fcb8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020220a0:
	ldr r0, =data_0215fcc0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020220b4:
	ldr r0, =data_0215fcc8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020220c8:
	ldr r0, =data_0215fcd0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020220dc:
	ldr r0, =data_0215fcd8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020220f0:
	ldr r0, =data_020ec59c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022104:
	ldr r0, =data_020ec5a0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022118:
	ldr r0, =data_020ec60c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202212c:
	ldr r0, =data_020ecf58
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022140:
	ldr r0, =data_020ecf68
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022154:
	ldr r0, =data_020ecf60
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022168:
	ldr r0, =data_020ecf50
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202217c:
	ldr r0, =data_0215fc68
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022190:
	ldr r0, =data_0215fc58
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020221a4:
	ldr r0, =data_021600f4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020221b8:
	ldr r0, =data_0215fc70
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020221cc:
	ldr r0, =data_0215fc88
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020221e0:
	ldr r0, =data_0215fc78
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020221f4:
	ldr r0, =data_0215fda0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022208:
	ldr r0, =data_021601a4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202221c:
	ldr r0, =data_021601bc
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022230:
	ldr r0, =data_020ecf40
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022244:
	ldr r0, =data_0215fce0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022258:
	ldr r0, =data_0215fbd0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202226c:
	ldr r0, =data_0215fb94
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022280:
	ldr r0, =data_0215fbc4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022294:
	ldr r0, =data_0215fbb0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020222a8:
	ldr r0, =data_0215fc4c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020222bc:
	ldr r0, =data_0215fc18
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020222d0:
	ldr r0, =data_0215fbf0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020222e4:
	ldr r0, =data_0215fba0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020222f8:
	ldr r0, =data_0215fc0c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202230c:
	ldr r0, =data_0215fbe8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022320:
	ldr r0, =data_0215fc30
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022334:
	ldr r0, =data_0215fbe4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022348:
	ldr r0, =data_0215fc1c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202235c:
	ldr r0, =data_0215fc08
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022370:
	ldr r0, =data_0215fc54
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022384:
	ldr r0, =data_0215fbd8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022398:
	ldr r0, =data_0215fbe0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020223ac:
	ldr r0, =data_0215fc28
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020223c0:
	ldr r0, =data_0215fbcc
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020223d4:
	ldr r0, =data_0215fc38
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020223e8:
	ldr r0, =data_0215fc48
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020223fc:
	ldr r0, =data_0215fc44
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022410:
	ldr r0, =data_020ecfe8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022424:
	ldr r0, =data_0215fc40
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022438:
	ldr r0, =data_0215fbb4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202244c:
	ldr r0, =data_0215fbc0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022460:
	ldr r0, =data_0215fbf4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022474:
	ldr r0, =data_0215fd10
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022488:
	ldr r0, =data_0215fb88
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202249c:
	ldr r0, =data_0215fc24
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020224b0:
	ldr r0, =data_0215fcf0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020224c4:
	ldr r0, =data_02160140
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020224d8:
	ldr r0, =data_02160164
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020224ec:
	ldr r0, =data_0215fc90
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022500:
	ldr r0, =data_02160178
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022514:
	ldr r0, =data_0215fbfc
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022528:
	ldr r0, =data_0215fb9c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202253c:
	ldr r0, =data_02164a24
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022550:
	ldr r0, =data_02164a28
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022564:
	ldr r0, =data_02164a2c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022578:
	ldr r0, =data_020ed024
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202258c:
	ldr r0, =data_020ed000
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020225a0:
	ldr r0, =data_0215fca0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020225b4:
	ldr r0, =data_0215fbbc
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020225c8:
	ldr r0, =data_0215fbec
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020225dc:
	ldr r0, =data_020ecf44
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020225f0:
	ldr r0, =data_020ed034
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022604:
	ldr r0, =data_02160150
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022618:
	ldr r0, =data_0215fc34
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202262c:
	ldr r0, =data_0215fbd4
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022640:
	ldr r0, =data_0215fc00
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022654:
	ldr r0, =data_0215fc04
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022668:
	ldr r0, =data_020ecf4c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202267c:
	ldr r0, =data_0215fc50
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022690:
	ldr r0, =data_0215fc14
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020226a4:
	ldr r0, =data_0215fc10
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020226b8:
	ldr r0, =data_0215fbac
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020226cc:
	ldr r0, =data_0215fcb0
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020226e0:
	ldr r0, =data_0215fba8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020226f4:
	ldr r0, =data_0215fb98
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022708:
	ldr r0, =data_0215fca8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202271c:
	ldr r0, =data_0215fce8
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022730:
	ldr r0, =data_02160130
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022744:
	ldr r0, =data_0216018c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022758:
	ldr r0, =data_0215fc98
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202276c:
	ldr r0, =data_020ecf48
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022780:
	ldr r0, =data_0215fc3c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022794:
	ldr r0, =data_020ed04c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020227a8:
	ldr r0, =data_0215fc80
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020227bc:
	ldr r0, =data_020ec630
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020227d0:
	ldr r0, =data_0215fc60
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020227e4:
	ldr r0, =data_02164a20
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_020227f8:
	ldr r0, =data_0215fc2c
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_0202280c:
	ldr r0, =data_0215fbdc
	mov r1, r5
	bl func_02023518
	mov r4, r0
	b lbl_02022884
lbl_02022820:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_0202487c
	mov r4, r0
	b lbl_02022884
lbl_0202283c:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021404c4
	mov r4, r0
	b lbl_02022884
lbl_02022858:
	bl func_02020008
	cmp r0, #0
	beq lbl_02022884
	add r0, r5, #4
	bl func_021405cc
	mov r4, r0
	b lbl_02022884
lbl_02022874:
	mov r0, r5
	bl func_02020008
	cmp r0, #0
	movne r4, #1
lbl_02022884:
	mov r0, r4
	ldmia sp!, {r3, r4, r5, pc}
}

extern "C" asm void func_02022a3c(void)
{
	bx lr
}

extern "C" asm void func_02022a40(void)
{
	bx lr
}

extern "C" asm void func_02022a44(void)
{
	bx lr
}

extern "C" asm void func_02022a48(void)
{
	bx lr
}

extern "C" asm void func_02022a4c(void)
{
	bx lr
}

extern "C" asm void func_02022a50(void)
{
	bx lr
}

extern "C" asm void func_02022a54(void)
{
	bx lr
}

extern "C" asm void func_02022a58(void)
{
	bx lr
}

extern "C" asm void func_02022a5c(void)
{
	bx lr
}

extern "C" asm void func_02022a60(void)
{
	bx lr
}

extern "C" asm void func_02022a64(void)
{
	bx lr
}

extern "C" asm void func_02022a68(void)
{
	bx lr
}

extern "C" asm void func_02022a6c(void)
{
	bx lr
}

extern "C" asm void func_02022a70(void)
{
	bx lr
}

extern "C" asm void func_02022a74(void)
{
	bx lr
}

extern "C" asm void func_02022a78(void)
{
	bx lr
}

extern "C" asm void func_02022a7c(void)
{
	bx lr
}

#pragma thumb on
