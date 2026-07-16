/* Auto-generated from baserom via tools/gen_thumb_lib.py */
#include "globaldefs.h"

extern "C" {
    void func_020164a8(void);
    void func_02016768(void);
    void func_020170b0(void);
    void func_020170f8(void);
    void func_020173b0(void);
    void func_02017584(void);
    void func_02017778(void);
    void func_02017928(void);
    void func_02017978(void);
    void func_020179d0(void);
    void func_02017a58(void);
    void func_02017b38(void);
    void func_02017c40(void);
    void func_02017e54(void);
    void func_02017ea0(void);
    void func_02017ee8(void);
    void func_02017f98(void);
    void func_020180bc(void);
    void func_02018118(void);
    void func_0201817c(void);
    void func_020181dc(void);
    void func_02018274(void);
    void func_0201830c(void);
    void func_02018394(void);
    void func_02018404(void);
    void func_02018500(void);
    void func_02018558(void);
    void func_020185d4(void);
    void func_02018688(void);
    void func_02018728(void);
    void func_02018794(void);
    void func_02018898(void);
    void func_020189e0(void);
    void func_02018adc(void);
    void func_02018c54(void);
    void func_02018cc0(void);
    void func_02018da0(void);
    void func_02019138(void);
    void func_020191e0(void);
    void func_0201926c(void);
    void func_02019398(void);
    void func_020193fc(void);
    void func_02019498(void);
    void func_020195c0(void);
    void func_02019668(void);
    void func_020196d4(void);
    void func_02019840(void);
    void func_02019914(void);
    void func_0201993c(void);
    void func_02019d3c(void);
    void func_02019d64(void);
    void func_02019f2c(void);
    void func_02019f78(void);
    void func_02019fdc(void);
    void func_0201a3ec(void);
    void func_0201a430(void);
    void BaseActionStatus_(void);
    void BaseActionValue_(void);
    void _ZN6status10HaveAction10isTownModeEv(void);
    void _ZN6status11PartyStatus13setBattleModeEv(void);
    void _ZN6status11PartyStatus13setPlayerModeEv(void);
    void _ZN6status11PartyStatus15getPlayerStatusEi(void);
    void _ZN6status11PartyStatus16isInsideCarriageEi(void);
    void _ZN6status11PartyStatus34getAlivePlayerCountOutsideCarriageEv(void);
    void _ZN6status11PartyStatus8getCountEv(void);
    void _ZN6status12StatusChange14getActionIndexENS0_6StatusE(void);
    void _ZN6status12StatusChange14getExecMessageENS0_6StatusE(void);
    void _ZN6status12StatusChange15execStartOfTurnEv(void);
    void _ZN6status12StatusChange15getExecMessage1ENS0_6StatusE(void);
    void _ZN6status12StatusChange17getReleaseMessageEv(void);
    void _ZN6status12StatusChange17getResultMessage1ENS0_6StatusE(void);
    void _ZN6status12StatusChange17getResultMessage2ENS0_6StatusE13CharacterType(void);
    void _ZN6status12StatusChange17getResultMessage3ENS0_6StatusE13CharacterType(void);
    void _ZN6status12StatusChange22getAgainDisableMessageENS0_6StatusE(void);
    void _ZN6status12StatusChange5setupEib(void);
    void _ZN6status12StatusChange6setup2ENS0_6StatusEi(void);
    void _ZN6status12StatusChange7releaseENS0_6StatusE(void);
    void _ZN6status12StatusChange8isEnableENS0_6StatusE(void);
    void _ZN6status12StatusChange9isReleaseEv(void);
    void _ZN6status13ActionDefence4execE17ActionDefenceKind17ActionDefenceType(void);
    void _ZN6status13HaveEquipment11isEquipmentEi(void);
    void _ZN6status14HaveStatusInfo12isAllKaishinEv(void);
    void _ZN6status14HaveStatusInfo12setMpFailureEb(void);
    void _ZN6status14HaveStatusInfo13addHpInBattleENS0_10DiffStatusEi(void);
    void _ZN6status14HaveStatusInfo13addMpInBattleENS0_10DiffStatusEi(void);
    void _ZN6status14HaveStatusInfo13setFubahaFlagEb(void);
    void _ZN6status14HaveStatusInfo13setKillMyselfEb(void);
    void _ZN6status14HaveStatusInfo13setTargetJoukEb(void);
    void _ZN6status14HaveStatusInfo14setSleepAttackEb(void);
    void _ZN6status14HaveStatusInfo15clearHpInBattleEv(void);
    void _ZN6status14HaveStatusInfo15clearMpInBattleEv(void);
    void _ZN6status14HaveStatusInfo15setDamageMyselfEb(void);
    void _ZN6status14HaveStatusInfo16setCounterDamageEb(void);
    void _ZN6status14HaveStatusInfo17setAddEffectSleepEb(void);
    void _ZN6status14HaveStatusInfo17setAddEffectSpazzEb(void);
    void _ZN6status14HaveStatusInfo17setImmidiateDeathEb(void);
    void _ZN6status14HaveStatusInfo18isMahokantaCounterEv(void);
    void _ZN6status14HaveStatusInfo18setAddEffectDamageEb(void);
    void _ZN6status14HaveStatusInfo18setAddEffectPoisonEb(void);
    void _ZN6status14HaveStatusInfo18setMahotoneFailureEb(void);
    void _ZN6status14HaveStatusInfo18setWeaponAddDamageEb(void);
    void _ZN6status14HaveStatusInfo19isConfuseMissAttackEv(void);
    void _ZN6status14HaveStatusInfo19setBaikirutoDisableEb(void);
    void _ZN6status14HaveStatusInfo20setAddEffectMahotoraEb(void);
    void _ZN6status14HaveStatusInfo20setAddEffectRecoveryEb(void);
    void _ZN6status14HaveStatusInfo20setConfuseMissAttackEb(void);
    void _ZN6status14HaveStatusInfo21isStatusChangeReleaseEv(void);
    void _ZN6status14HaveStatusInfo21setAddMahotoraExecuteEb(void);
    void _ZN6status14HaveStatusInfo21setExecuteMeganteRingEb(void);
    void _ZN6status14HaveStatusInfo22setStatusChangeReleaseEb(void);
    void _ZN6status14HaveStatusInfo23setStatusChangeInBattleENS0_10DiffStatusE(void);
    void _ZN6status14HaveStatusInfo23setUseActionEffectValueEi(void);
    void _ZN6status14HaveStatusInfo25clearStatusChangeInBattleEv(void);
    void _ZN6status14HaveStatusInfo5getHpEv(void);
    void _ZN6status14HaveStatusInfo5getMpEv(void);
    void _ZN6status14HaveStatusInfo7isDeathEv(void);
    void _ZN6status14HaveStatusInfo9execThrowEi(void);
    void _ZN6status14HaveStatusInfo9getAttackEi(void);
    void _ZN6status15BaseActionData_E(void);
    void _ZN6status15CharacterStatus17setDeathAnimationEv(void);
    void _ZN6status15CharacterStatus21setAddDamageAnimationEv(void);
    void _ZN6status15initCallMonsterEv(void);
    void _ZN6status16BaseActionStatus14setEffectValueEiii(void);
    void _ZN6status16BaseActionStatus15actionTypeAddMPEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus15actionTypeLightEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus15actionTypeSleepEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus15actionTypeSpazzEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus15actionTypeSubMPEPNS_15CharacterStatusES2_(void);
    void _ZN6status16BaseActionStatus16actionTypeDamageEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus16actionTypeFubahaEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus16actionTypeManusaEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus16actionTypeMosyasEPNS_15CharacterStatusES2_(void);
    void _ZN6status16BaseActionStatus16actionTypePoisonEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus17actionTypeAstoronEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus17actionTypeDefenceEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus17actionTypeFeatherEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus17actionTypeMahotonEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus17actionTypeZaorikuEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus18actionTypeDragoramEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus18actionTypeMahosuteEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus18actionTypeRecoveryEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus19actionTypeBaikirutoEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus19actionTypeConfusionEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus19actionTypeMahokantaEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus19actionTypePowerSaveEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus21actionTypeStatusClearEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus22actionTypeInstantDeathEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus23actionTypeAgilityChangeEPNS_15CharacterStatusE(void);
    void _ZN6status16BaseActionStatus23actionTypeDefenceChangeEPNS_15CharacterStatusE(void);
    void _ZN6status16HaveBattleStatus6isJoukEv(void);
    void _ZN6status16UseActionMessage5clearEv(void);
    void _ZN6status17BaseActionMessage13setAddMessageEPNS_16UseActionMessageEii(void);
    void _ZN6status17BaseActionMessage14setExecMessageEPNS_16UseActionMessageE(void);
    void _ZN6status17BaseActionMessage14setExecMessageEPNS_16UseActionMessageEiiii(void);
    void _ZN6status17BaseActionMessage16setResultMessageEPNS_16UseActionMessageEii(void);
    void _ZN6status17BaseActionMessage21setMessageNotEnoughMpEPNS_16UseActionMessageE(void);
    void _ZN6status18getRandomVariationEiii(void);
    void _ZN6status19getCallMonsterCountEv(void);
    void _ZN6status20callDifferentMonsterEii(void);
    void _ZN6status20getCallMonsterStatusEi(void);
    void _ZN6status20parupunteMetalSlime1Ev(void);
    void _ZN6status27getKaishinAttackEffectValueEPNS_15CharacterStatusES1_(void);
    void _ZN6status27getUsuallyAttackEffectValueEPNS_15CharacterStatusES1_(void);
    void _ZN6status7g_PartyE(void);
    void _ZN6status9UseAction10isMahosuteEi(void);
    void _ZN6status9UseAction11isBaikirutoEi(void);
    void _ZN6status9UseAction11isCrossFireEi(void);
    void _ZN6status9UseAction11isMahokantaEi(void);
    void _ZN6status9UseAction11isPowerSaveEi(void);
    void _ZN6status9UseAction11isSplitJoukEi(void);
    void _ZN6status9UseAction13getActionTypeEi(void);
    void _ZN6status9UseAction13getDamageTypeEi(void);
    void _ZN6status9UseAction18isReleaseConfusionEi(void);
    void _ZN6status9UseAction20getActionDefenceKindEi(void);
    void _ZN6status9UseAction20getActionDefenceTypeEi(void);
    void _ZN6status9UseAction21isSpecialSelectTargetEi(void);
    void _ZN6status9UseAction22getEffectValueToPlayerEi(void);
    void _ZN6status9UseAction23getEffectValueToMonsterEi(void);
    void _ZN6status9UseAction6isJoukEi(void);
    void _ZN6status9UseAction7isAddHpEi(void);
    void _ZN6status9UseAction8getUseMpEi(void);
    void _ZN6status9UseAction8isErrorAEi(void);
    void _ZN6status9UseAction8isErrorBEi(void);
    void _ZN6status9UseAction8isForceEEi(void);
    void _ZN6status9UseAction8isFubahaEi(void);
    void _ZN6status9UseAction8isManusaEi(void);
    void _ZN6status9UseAction8isMultiFEi(void);
    void _ZN6status9UseAction9isAstoronEi(void);
    void _ZN6status9UseAction9isDamageCEi(void);
    void _ZN6status9UseAction9isDamageDEi(void);
    void _ZN6status9UseAction9isKaishinEi(void);
    void _ZN6status9UseAction9isMahotonEi(void);
    void _ZN7dssrand4randEi(void);
    void __PROFILE_ENTRY(void);
    void __PROFILE_EXIT(void);
    void _s32_div_f(void);
    void data_020b4d5c(void);
    void data_020bc9dc(void);
    void data_020bca04(void);
    void data_020bca28(void);
    void data_020bca68(void);
    void data_020bcaa4(void);
    void data_020bcae8(void);
    void data_020bcb28(void);
    void data_020bcb74(void);
    void data_020bcba4(void);
    void data_020bcbf4(void);
    void data_020bcc20(void);
    void data_020bcc48(void);
    void data_020bcc70(void);
    void data_020bcc98(void);
    void data_020bccc0(void);
    void data_020bccec(void);
    void data_020bcd30(void);
    void data_020bcd7c(void);
    void data_020bcdb0(void);
    void data_020bcdd8(void);
    void data_020bcdfc(void);
    void data_020bce24(void);
    void data_020bce50(void);
    void data_020bce90(void);
    void data_020bced4(void);
    void data_020bcf20(void);
    void data_020bcf6c(void);
    void data_020bcfb0(void);
    void data_020bcff8(void);
    void data_020bd03c(void);
    void data_020bd080(void);
    void data_020bd0c4(void);
    void data_020bd104(void);
    void data_020bd148(void);
    void data_020bd198(void);
    void data_020bd1e8(void);
    void data_020bd230(void);
    void data_020bd274(void);
    void data_020bd2b8(void);
    void data_020bd2fc(void);
    void data_020bd340(void);
    void data_020bd380(void);
    void data_020bd3c4(void);
    void data_020bd408(void);
    void data_020bd44c(void);
    void data_020bd490(void);
    void data_020bd4d4(void);
    void data_020bd51c(void);
    void data_020bd564(void);
    void data_020bd5a8(void);
    void data_020bd5e4(void);
    void data_020bd604(void);
    void data_020bd644(void);
    void data_020bd674(void);
    void data_020bd6c0(void);
    void data_020bd6ec(void);
    void data_020eecd0(void);
    void data_020eecd4(void);
    void data_020eecd8(void);
    void data_020eecdc(void);
    void data_020eece8(void);
    void data_020eecfc(void);
    void func_02008ea0(void);
    void func_0201d8c8(void);
    void func_0202efb8(void);
    void func_021721cc(void);
    void func_02172784(void);
    void g_Global(void);
    void sym_L_0201706c(void);
}

#pragma thumb on
extern "C" asm void func_020164a8(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x274]
	dcd 0xEC72F063
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	ldr r0, [pc, #0x264]
	add r4, r1, #0
	ldr r1, [r0]
	mov r3, #3
	ldr r2, [r0]
	tst r3, r1
	beq lbl_02016520
	mov r3, #1
	tst r2, r3
	beq lbl_020164f2
	mov r2, #1
	bic r1, r2
	str r1, [r0]
	ldr r1, [pc, #0x250]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r2, r1
	mov r1, #0x30
	mul r1, r4
	add r1, r2
	ldr r2, [pc, #0x240]
	add r0, #0x38
	mov r3, #0
	dcd 0xFE3FF016
lbl_020164f2:
	ldr r1, [pc, #0x230]
	mov r0, #2
	ldr r2, [r1]
	tst r0, r2
	beq lbl_02016520
	ldr r2, [r1]
	mov r0, #2
	bic r2, r0
	str r2, [r1]
	ldr r1, [pc, #0x220]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r2, r1
	mov r1, #0x30
	mul r1, r4
	add r1, r2
	ldr r2, [pc, #0x218]
	add r0, #0x38
	mov r3, #0
	dcd 0xFE28F016
lbl_02016520:
	ldr r1, [r5, #4]
	ldr r0, [pc, #0x210]
	cmp r1, r0
	bne lbl_02016570
	ldr r1, [pc, #0x1fc]
	sub r0, #0x37
	ldr r1, [r1]
	ldr r6, [r1, r0]
	lsl r0, r6, #2
	add r1, r0
	add r0, r1, #0
	add r0, #0xdc
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_02016570
	ldr r0, [r1, #4]
	add r0, #8
	dcd 0xFBFDF7FC
	cmp r0, #0
	beq lbl_0201655e
	ldr r1, [pc, #0x1dc]
	ldr r0, [pc, #0x1e8]
	ldr r2, [r1]
	mov r1, #0x30
	mul r1, r6
	add r2, r1
	mov r1, #0x16
	lsl r1, r1, #4
	str r0, [r2, r1]
	b lbl_02016570
lbl_0201655e:
	ldr r1, [pc, #0x1c8]
	ldr r0, [pc, #0x1d8]
	ldr r2, [r1]
	mov r1, #0x30
	mul r1, r6
	add r2, r1
	mov r1, #0x16
	lsl r1, r1, #4
	str r0, [r2, r1]
lbl_02016570:
	ldr r0, [pc, #0x1b4]
	lsl r4, r4, #2
	ldr r0, [r0]
	add r0, r4
	ldr r0, [r0, #4]
	cmp r0, #0
	beq lbl_0201659c
	add r0, #8
	dcd 0xF896F7FD
	cmp r0, #0
	beq lbl_0201659c
	ldr r0, [pc, #0x19c]
	ldr r0, [r0]
	add r0, r4
	ldr r1, [r0, #4]
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r2, [r1, r0]
	add r1, r4
	add r0, #0x10
	str r2, [r1, r0]
lbl_0201659c:
	ldr r1, [r5, #4]
	ldr r0, [pc, #0x1a0]
	cmp r1, r0
	bne lbl_020165e4
	ldr r0, [pc, #0x180]
	ldr r2, [pc, #0x19c]
	ldr r0, [r0]
	mov r1, #3
	ldr r0, [r0]
	add r0, #8
	dcd 0xFE86F7FB
	ldr r0, [pc, #0x170]
	mov r1, #1
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFFF5F7FC
	ldr r0, [pc, #0x164]
	mov r2, #5
	ldr r3, [r0]
	lsl r2, r2, #6
	add r1, r3, r2
	sub r2, #0xc
	ldr r2, [r3, r2]
	add r0, r5, #0
	sub r3, r2, #1
	mov r2, #0x30
	mul r2, r3
	add r1, r2
	ldr r2, [pc, #0x16c]
	add r0, #0x38
	mov r3, #0
	dcd 0xFDCAF016
lbl_020165e4:
	ldr r0, [pc, #0x164]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_0201660e
	mov r2, #0
	str r2, [r0]
	ldr r0, [pc, #0x134]
	mov r3, #5
	ldr r4, [r0]
	lsl r3, r3, #6
	add r1, r4, r3
	sub r3, r3, #4
	ldr r4, [r4, r3]
	mov r3, #0x30
	add r0, r5, #0
	mul r3, r4
	add r1, r3
	add r0, #0x38
	add r3, r2, #0
	dcd 0xFDB1F016
lbl_0201660e:
	ldr r0, [pc, #0x140]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_0201663a
	mov r3, #0
	str r3, [r0]
	ldr r0, [pc, #0x10c]
	mov r2, #5
	ldr r4, [r0]
	lsl r2, r2, #6
	add r1, r4, r2
	sub r2, r2, #4
	ldr r4, [r4, r2]
	mov r2, #0x30
	mul r2, r4
	add r1, r2
	ldr r2, [pc, #0x124]
	add r0, r5, #0
	ldr r2, [r2]
	add r0, #0x38
	dcd 0xFD9BF016
lbl_0201663a:
	ldr r0, [pc, #0x11c]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_02016666
	mov r3, #0
	str r3, [r0]
	ldr r0, [pc, #0xe0]
	mov r2, #5
	ldr r4, [r0]
	lsl r2, r2, #6
	add r1, r4, r2
	sub r2, r2, #4
	ldr r4, [r4, r2]
	mov r2, #0x30
	mul r2, r4
	add r1, r2
	ldr r2, [pc, #0xf8]
	add r0, r5, #0
	ldr r2, [r2]
	add r0, #0x38
	dcd 0xFD85F016
lbl_02016666:
	ldr r0, [pc, #0xf4]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_02016692
	mov r3, #0
	str r3, [r0]
	ldr r0, [pc, #0xb4]
	mov r2, #5
	ldr r4, [r0]
	lsl r2, r2, #6
	add r1, r4, r2
	sub r2, r2, #4
	ldr r4, [r4, r2]
	mov r2, #0x30
	mul r2, r4
	add r1, r2
	ldr r2, [pc, #0xcc]
	add r0, r5, #0
	ldr r2, [r2]
	add r0, #0x38
	dcd 0xFD6FF016
lbl_02016692:
	ldr r0, [pc, #0xcc]
	ldr r1, [r0]
	cmp r1, #0
	beq lbl_020166be
	mov r3, #0
	str r3, [r0]
	ldr r0, [pc, #0x88]
	mov r2, #5
	ldr r4, [r0]
	lsl r2, r2, #6
	add r1, r4, r2
	sub r2, r2, #4
	ldr r4, [r4, r2]
	mov r2, #0x30
	mul r2, r4
	add r1, r2
	ldr r2, [pc, #0xa0]
	add r0, r5, #0
	ldr r2, [r2]
	add r0, #0x38
	dcd 0xFD59F016
lbl_020166be:
	ldr r0, [r5, #4]
	dcd 0xFFB4F7FE
	cmp r0, #0xa
	bne lbl_0201670c
	ldr r0, [r5, #0x14]
	cmp r0, #0
	bne lbl_0201670c
	ldr r0, [pc, #0x58]
	ldr r2, [r0]
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r4, [r2, r0]
	lsl r1, r4, #2
	add r1, r2
	ldr r1, [r1, #4]
	cmp r1, #0
	beq lbl_0201670c
	add r0, #0x4c
	add r0, r1
	mov r1, #0xa
	dcd 0xFB3CF008
	cmp r0, #0
	beq lbl_0201670c
	ldr r1, [pc, #0x34]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r2, r1
	mov r1, #0x30
	mul r1, r4
	add r1, r2
	ldr r2, [pc, #0x60]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFD32F016
lbl_0201670c:
	mov r0, #1
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEB40F063
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BC9DC
	dcd 0x020EECEC
	dcd 0x020D07D0
	dcd 0x000C3AAF
	dcd 0x000C3AAB
	dcd 0x00000173
	dcd 0x000C3924
	dcd 0x000C3922
	dcd 0x0000010D
	dcd 0xFFFFFC01
	dcd 0x000C39E9
	dcd 0x020EECDC
	dcd 0x020EECD8
	dcd 0x020EECE8
	dcd 0x020EECD4
	dcd 0x020EECD0
	dcd 0x020EECCC
	dcd 0x000C3CCF
}

extern "C" asm void func_02016768(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x310]
	dcd 0xEB12F063
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #0x10
	add r5, r0, #0
	ldr r0, [pc, #0x300]
	add r7, r1, #0
	ldr r1, [r0]
	ldr r2, [r5, #0x10]
	ldr r0, [pc, #0x2fc]
	str r2, [r1, r0]
	ldr r1, [r5, #4]
	cmp r1, #0xad
	beq lbl_02016796
	ldr r0, [pc, #0x2f4]
	cmp r1, r0
	bne lbl_020167cc
lbl_02016796:
	ldr r4, [pc, #0x2e8]
	mov r0, #0x4d
	ldr r1, [r4]
	lsl r0, r0, #2
	ldr r1, [r1, r0]
	mov r0, #0
	cmp r1, #0
	ble lbl_020167c0
	add r2, r0, #0
	mov r6, #1
lbl_020167aa:
	ldr r3, [r4]
	add r3, r2
	add r3, #0xdc
	ldr r3, [r3]
	cmp r3, #0
	beq lbl_020167b8
	str r6, [r5, #0x14]
lbl_020167b8:
	add r0, r0, #1
	add r2, r2, #4
	cmp r0, r1
	blt lbl_020167aa
lbl_020167c0:
	ldr r0, [pc, #0x2bc]
	ldr r2, [r5, #0x14]
	ldr r1, [r0]
	mov r0, #0x4a
	lsl r0, r0, #4
	str r2, [r1, r0]
lbl_020167cc:
	mov r0, #0x57
	ldr r1, [r5, #4]
	lsl r0, r0, #2
	cmp r1, r0
	bne lbl_0201680e
	ldr r0, [r5, #0x14]
	cmp r0, #0
	beq lbl_0201680e
	mov r0, #0xa
	dcd 0xEAB4F06A
	cmp r0, #0
	bne lbl_0201680e
	ldr r0, [pc, #0x298]
	ldr r1, [pc, #0x2a0]
	ldr r0, [r0]
	ldr r2, [r0]
	add r0, r2, #0
	ldr r1, [r2, r1]
	add r0, #8
	dcd 0xFBDAF7FC
	ldr r1, [pc, #0x284]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x288]
	add r0, #0x38
	mov r3, #0
	dcd 0xFCB5F016
lbl_0201680e:
	ldr r0, [r5, #4]
	cmp r0, #0xa0
	bne lbl_02016840
	ldr r0, [r5, #0x14]
	cmp r0, #0
	beq lbl_02016840
	mov r0, #0xa
	dcd 0xEA94F06A
	cmp r0, #0
	bne lbl_02016840
	mov r0, #1
	dcd 0xFDE1F003
	ldr r1, [pc, #0x254]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x258]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC9CF016
lbl_02016840:
	cmp r7, #0
	bne lbl_0201684a
	mov r0, #1
	dcd 0xFC11F000
lbl_0201684a:
	add r0, r5, #0
	dcd 0xFA8AF003
	ldr r0, [r5, #4]
	cmp r0, #0x3f
	bne lbl_0201689a
	ldr r1, [pc, #0x23c]
	mov r0, #4
	ldr r2, [r1]
	tst r0, r2
	beq lbl_0201689a
	ldr r2, [r1]
	mov r0, #4
	bic r2, r0
	ldr r0, [pc, #0x218]
	str r2, [r1]
	ldr r0, [r0]
	ldr r2, [pc, #0x228]
	ldr r0, [r0]
	mov r1, #3
	add r0, #8
	dcd 0xFD24F7FB
	ldr r0, [pc, #0x204]
	mov r2, #5
	ldr r3, [r0]
	lsl r2, r2, #6
	add r1, r3, r2
	sub r2, #0xc
	ldr r2, [r3, r2]
	add r0, r5, #0
	sub r3, r2, #1
	mov r2, #0x30
	mul r2, r3
	add r1, r2
	ldr r2, [pc, #0x208]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC6FF016
lbl_0201689a:
	ldr r0, [r5, #4]
	cmp r0, #0x1b
	bne lbl_020168e0
	ldr r0, [pc, #0x1dc]
	ldr r2, [pc, #0x1f4]
	ldr r0, [r0]
	mov r1, #3
	ldr r0, [r0]
	add r0, #8
	dcd 0xFD08F7FB
	ldr r0, [pc, #0x1cc]
	mov r1, #1
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFE77F7FC
	ldr r0, [pc, #0x1c0]
	mov r2, #5
	ldr r3, [r0]
	lsl r2, r2, #6
	add r1, r3, r2
	sub r2, #0xc
	ldr r2, [r3, r2]
	add r0, r5, #0
	sub r3, r2, #1
	mov r2, #0x30
	mul r2, r3
	add r1, r2
	ldr r2, [pc, #0x1c4]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC4CF016
lbl_020168e0:
	ldr r1, [r5, #4]
	ldr r0, [pc, #0x1bc]
	cmp r1, r0
	bne lbl_0201691a
	ldr r0, [pc, #0x194]
	ldr r2, [pc, #0x1ac]
	ldr r0, [r0]
	mov r1, #3
	ldr r0, [r0]
	add r0, #8
	dcd 0xFCE4F7FB
	ldr r0, [pc, #0x184]
	mov r2, #5
	ldr r3, [r0]
	lsl r2, r2, #6
	add r1, r3, r2
	sub r2, #0xc
	ldr r2, [r3, r2]
	add r0, r5, #0
	sub r3, r2, #1
	mov r2, #0x30
	mul r2, r3
	add r1, r2
	ldr r2, [pc, #0x188]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC2FF016
lbl_0201691a:
	ldr r0, [r5, #4]
	ldr r3, [pc, #0x184]
	cmp r0, r3
	bne lbl_02016946
	ldr r4, [pc, #0x15c]
	add r2, r3, #0
	ldr r1, [r4]
	sub r2, #0xcd
	ldr r2, [r1, r2]
	ldr r0, [pc, #0x178]
	sub r6, r2, #1
	mov r2, #0x30
	mul r2, r6
	add r1, r2
	sub r3, #0x99
	str r0, [r1, r3]
	ldr r0, [r4]
	mov r1, #1
	ldr r0, [r0]
	add r0, #8
	dcd 0xF865F7FD
lbl_02016946:
	ldr r0, [r5, #4]
	ldr r3, [pc, #0x154]
	cmp r0, r3
	bne lbl_02016966
	ldr r0, [pc, #0x130]
	add r2, r3, #0
	ldr r1, [r0]
	sub r2, #0xce
	ldr r2, [r1, r2]
	ldr r0, [pc, #0x14c]
	sub r4, r2, #1
	mov r2, #0x30
	mul r2, r4
	add r1, r2
	sub r3, #0x96
	str r0, [r1, r3]
lbl_02016966:
	ldr r0, [pc, #0x118]
	ldr r0, [r0]
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_02016978
	add r0, #8
	mov r1, #0
	dcd 0xFE5AF7FC
lbl_02016978:
	ldr r1, [r5, #4]
	ldr r2, [pc, #0x130]
	cmp r1, r2
	blt lbl_020169ea
	add r0, r2, #0
	add r0, #8
	cmp r1, r0
	bgt lbl_020169ea
	mov r0, #0
	cmp r1, r2
	bne lbl_02016990
	ldr r0, [pc, #0x120]
lbl_02016990:
	ldr r2, [pc, #0x120]
	cmp r1, r2
	bne lbl_02016998
	mov r0, #0
lbl_02016998:
	mov r2, #0x22
	lsl r2, r2, #4
	cmp r1, r2
	bne lbl_020169a2
	ldr r0, [pc, #0x114]
lbl_020169a2:
	ldr r2, [pc, #0x118]
	cmp r1, r2
	bne lbl_020169aa
	ldr r0, [pc, #0x114]
lbl_020169aa:
	ldr r2, [pc, #0x118]
	cmp r1, r2
	bne lbl_020169b8
	ldr r1, [pc, #0xcc]
	mov r2, #1
	ldr r0, [pc, #0x110]
	str r2, [r1, #0x3c]
lbl_020169b8:
	ldr r2, [r5, #4]
	ldr r1, [pc, #0x110]
	cmp r2, r1
	bne lbl_020169c2
	ldr r0, [pc, #0x10c]
lbl_020169c2:
	mov r1, #0x89
	lsl r1, r1, #2
	cmp r2, r1
	bne lbl_020169cc
	ldr r0, [pc, #0x108]
lbl_020169cc:
	ldr r1, [pc, #0x108]
	cmp r2, r1
	bne lbl_020169d4
	ldr r0, [pc, #0x108]
lbl_020169d4:
	ldr r1, [pc, #0x108]
	cmp r2, r1
	bne lbl_020169dc
	ldr r0, [pc, #0x108]
lbl_020169dc:
	cmp r0, #0
	beq lbl_020169ea
	ldr r1, [pc, #0x9c]
	ldr r2, [r1]
	mov r1, #0x53
	lsl r1, r1, #2
	str r0, [r2, r1]
lbl_020169ea:
	ldr r2, [r5, #4]
	ldr r3, [pc, #0xf8]
	cmp r2, r3
	blt lbl_020169fa
	add r0, r3, #0
	add r0, #0x1a
	cmp r2, r0
	ble lbl_020169fc
lbl_020169fa:
	b lbl_02016cc0
lbl_020169fc:
	mov r0, #0
	add r1, r0, #0
	cmp r2, r3
	bne lbl_02016a06
	ldr r0, [pc, #0xe4]
lbl_02016a06:
	mov r3, #0x73
	lsl r3, r3, #2
	cmp r2, r3
	bne lbl_02016a12
	mov r0, #0
	add r1, r0, #0
lbl_02016a12:
	ldr r3, [pc, #0xdc]
	cmp r2, r3
	bne lbl_02016a1c
	mov r0, #0
	add r1, r0, #0
lbl_02016a1c:
	ldr r3, [pc, #0xd4]
	cmp r2, r3
	bne lbl_02016a26
	mov r0, #0
	add r1, r0, #0
lbl_02016a26:
	ldr r3, [pc, #0xd0]
	cmp r2, r3
	bne lbl_02016a30
	mov r0, #0
	add r1, r0, #0
lbl_02016a30:
	mov r3, #0x1d
	lsl r3, r3, #4
	cmp r2, r3
	bne lbl_02016a3c
	ldr r0, [pc, #0xc0]
	mov r1, #0
lbl_02016a3c:
	ldr r3, [pc, #0xc0]
	cmp r2, r3
	bne lbl_02016a46
	ldr r0, [pc, #0xc0]
	mov r1, #0
lbl_02016a46:
	ldr r3, [pc, #0xc0]
	cmp r2, r3
	bne lbl_02016a50
	mov r0, #0
	add r1, r0, #0
lbl_02016a50:
	ldr r3, [pc, #0xb8]
	cmp r2, r3
	bne lbl_02016a5a
	ldr r0, [pc, #0xb8]
	mov r1, #0
lbl_02016a5a:
	mov r3, #0x75
	lsl r3, r3, #2
	cmp r2, r3
	bne lbl_02016a66
	ldr r0, [pc, #0xb0]
	mov r1, #0
lbl_02016a66:
	ldr r3, [pc, #0xb0]
	cmp r2, r3
	bne lbl_02016a70
	mov r0, #0
	add r1, r0, #0
lbl_02016a70:
	ldr r3, [pc, #0xa8]
	cmp r2, r3
	bne lbl_02016b26
	ldr r0, [pc, #0xa8]
	b lbl_02016b24
	mov r8, r8
	dcd 0x020BCA04
	dcd 0x020D07D0
	dcd 0x000004A4
	dcd 0x0000016D
	dcd 0x00000488
	dcd 0x000C3A2C
	dcd 0x020EECEC
	dcd 0xFFFFFC01
	dcd 0x000C39E9
	dcd 0x00000202
	dcd 0x00000201
	dcd 0x000C3A4B
	dcd 0x0000021E
	dcd 0x000C3BF4
	dcd 0x0000021F
	dcd 0x000C3BF7
	dcd 0x00000221
	dcd 0x000C3BFA
	dcd 0x00000222
	dcd 0x000C3BFD
	dcd 0x00000223
	dcd 0x000C3BFF
	dcd 0x000C3C02
	dcd 0x00000225
	dcd 0x000C3C05
	dcd 0x00000226
	dcd 0x000C3C08
	dcd 0x000001CB
	dcd 0x000C3B59
	dcd 0x000001CD
	dcd 0x000001CE
	dcd 0x000001CF
	dcd 0x000C3965
	dcd 0x000001D1
	dcd 0x000C3B6B
	dcd 0x000001D2
	dcd 0x000001D3
	dcd 0x000C3B6D
	dcd 0x000C3B71
	dcd 0x000001D5
	dcd 0x000001D6
	dcd 0x000C3B80
lbl_02016b24:
	dcd 0x00002100
lbl_02016b26:
	dcd 0x429A4BAF
	dcd 0x48AED101
	dcd 0x23761CC1
	dcd 0x429A009B
	dcd 0x48ABD101
	dcd 0x4BAB1D81
	dcd 0xD101429A
	dcd 0x1C012000
	dcd 0x429A4BAA
	dcd 0x48A9D101
	dcd 0x4BA92100
	dcd 0xD101429A
	dcd 0x1C012000
	dcd 0x009B2377
	dcd 0xD101429A
	dcd 0x210048A6
	dcd 0x429A4BA6
	dcd 0x48A5D101
	dcd 0x4BA52100
	dcd 0xD101429A
	dcd 0x210048A5
	dcd 0x429A4BA5
	dcd 0x2000D101
	dcd 0x231E1C01
	dcd 0x429A011B
	dcd 0x2000D101
	dcd 0x4BA01C01
	dcd 0xD101429A
	dcd 0x1C012000
	dcd 0x429A4B9F
	dcd 0x489ED101
	dcd 0x4B9E2100
	dcd 0xD101429A
	dcd 0x1C012000
	dcd 0x009B2379
	dcd 0xD101429A
	dcd 0x1C012000
	dcd 0x429A4B9A
	dcd 0x2000D101
	dcd 0x28001C01
	dcd 0x4A97D004
	dcd 0x22526813
	dcd 0x50980092
	dcd 0xD0042900
	dcd 0x68024894
	dcd 0x00802053
	dcd 0x68695011
	dcd 0x42814892
	dcd 0x4891D10D
	dcd 0xF9D3F7F8
	dcd 0xF7F84890
	dcd 0x2801F91C
	dcd 0x488BDD05
	dcd 0x68014A8E
	dcd 0x00802052
	dcd 0x6869500A
	dcd 0x4281488C
	dcd 0x4986D116
	dcd 0x2A006C4A
	dcd 0x2A01D004
	dcd 0x2A02D007
	dcd 0xE00DD00A
	dcd 0x68094A87
	dcd 0x500A386B
	dcd 0x4A85E008
	dcd 0x386B6809
	dcd 0xE003500A
	dcd 0x68094A84
	dcd 0x500A386B
	dcd 0x48706869
	dcd 0xD1164281
	dcd 0x6C4A4979
	dcd 0xD0042A00
	dcd 0xD0072A01
	dcd 0xD00A2A02
	dcd 0x4A7CE00D
	dcd 0x387D6809
	dcd 0xE008500A
	dcd 0x68094A7B
	dcd 0x500A387D
	dcd 0x4A79E003
	dcd 0x387D6809
	dcd 0x6869500A
	dcd 0x42814869
	dcd 0x486BD10D
	dcd 0x68006800
	dcd 0xF7FC3008
	dcd 0x2800F85E
	dcd 0x4867D105
	dcd 0x68014A72
	dcd 0x0080205A
	dcd 0x6868500A
	dcd 0x42984B56
	dcd 0x4862D10B
	dcd 0x68011C1A
	dcd 0x588A3AA6
	dcd 0x1E54486C
	dcd 0x43622230
	dcd 0x3B721889
	dcd 0x686950C8
	dcd 0x42814850
	dcd 0xF7FED101
	dcd 0x0000FAAA
lbl_02016cc0:
	dcd 0x4966686A
	dcd 0xDB15428A
	dcd 0x30291C08
	dcd 0xDC114282
	dcd 0x300C1C08
	dcd 0xD1044282
	dcd 0x4A614853
	dcd 0x39556800
	dcd 0x68695042
	dcd 0x4281485F
	dcd 0x494FD104
	dcd 0x68094A5E
	dcd 0x500A385B
	dcd 0x686A2121
	dcd 0x428A0109
	dcd 0x1C08DB0B
	dcd 0x4282300D
	dcd 0x1D88DC07
	dcd 0xD1044282
	dcd 0x4A574846
	dcd 0x39B86800
	dcd 0x68685042
	dcd 0xD1052861
	dcd 0x4A544842
	dcd 0x20536801
	dcd 0x500A0080
	dcd 0x6869201D
	dcd 0x42810100
	dcd 0x493DD104
	dcd 0x68094A4E
	dcd 0x500A3884
	dcd 0x484D6869
	dcd 0xDB274281
	dcd 0x4281300C
	dcd 0x6968DC24
	dcd 0xD0212800
	dcd 0xF980F7FE
	dcd 0x48349003
	dcd 0x6802214D
	dcd 0x00899803
	dcd 0x50502700
	dcd 0xDD152800
	dcd 0x1C3C1C3E
	dcd 0xF7FE1C38
	dcd 0x492DF977
	dcd 0x68091C7F
	dcd 0x60481989
	dcd 0x1D36482A
	dcd 0x20166801
	dcd 0x580A0100
	dcd 0x500A1909
	dcd 0x34309803
	dcd 0xDBEB4287
	dcd 0x48386869
	dcd 0xD1044281
	dcd 0x4A374922
	dcd 0x301D6809
	dcd 0x6868500A
	dcd 0x28013830
	dcd 0x4C1ED814
	dcd 0x6821204D
	dcd 0x580A0080
	dcd 0x2A002100
	dcd 0x2716DD0C
	dcd 0x1C081C0B
	dcd 0x2900013F
	dcd 0x6826D002
	dcd 0x51F018F6
	dcd 0x33301C49
	dcd 0xDBF64291
	dcd 0x282B6868
	dcd 0x4C12D164
	dcd 0x46C0E04E
	dcd 0x000001D7
	dcd 0x000C3B85
	dcd 0x000001D9
	dcd 0x000001DA
	dcd 0x000C3B8E
	dcd 0x000001DB
	dcd 0x000C3A31
	dcd 0x000001DD
	dcd 0x000C3B98
	dcd 0x000001DE
	dcd 0x000C3BFD
	dcd 0x000001DF
	dcd 0x000001E1
	dcd 0x000001E2
	dcd 0x000C3BAD
	dcd 0x000001E3
	dcd 0x000001E5
	dcd 0x020D07D0
	dcd 0x000001D1
	dcd 0x020C7B1C
	dcd 0x000C3CCD
	dcd 0x000001CB
	dcd 0x000C3B62
	dcd 0x000C3B65
	dcd 0x000C3B68
	dcd 0x000C3B9B
	dcd 0x000C3B9E
	dcd 0x000C3BA1
	dcd 0x000C3BAF
	dcd 0x000C3C9C
	dcd 0x000001A1
	dcd 0x000C3CC5
	dcd 0x000001A7
	dcd 0x000C3CAC
	dcd 0x000C391C
	dcd 0x000C3CC1
	dcd 0x0000010E
	dcd 0x0000012F
	dcd 0x000C3CC3
	dcd 0x6821204D
	dcd 0x580A0080
	dcd 0x2A002100
	dcd 0x2716DD0C
	dcd 0x1C081C0B
	dcd 0x2900013F
	dcd 0x6826D002
	dcd 0x51F018F6
	dcd 0x33301C49
	dcd 0xDBF64291
	dcd 0x68692021
	dcd 0x42810100
	dcd 0x4C73D125
	dcd 0x682138DC
	dcd 0x2100580A
	dcd 0xDD0C2A00
	dcd 0x1C0B2716
	dcd 0x013F1C08
	dcd 0xD0022900
	dcd 0x18F66826
	dcd 0x1C4951F0
	dcd 0x42913330
	dcd 0x4869DBF6
	dcd 0x29016C01
	dcd 0x6801D104
	dcd 0x4A672016
	dcd 0x500A0100
	dcd 0x6C014864
	dcd 0xD1042902
	dcd 0x20166801
	dcd 0x01004A63
	dcd 0x6869500A
	dcd 0x42814862
	dcd 0x4C5ED125
	dcd 0x682138DD
	dcd 0x2100580A
	dcd 0xDD0C2A00
	dcd 0x1C0B2716
	dcd 0x013F1C08
	dcd 0xD0022900
	dcd 0x18F66826
	dcd 0x1C4951F0
	dcd 0x42913330
	dcd 0x4854DBF6
	dcd 0x29016C01
	dcd 0x6801D104
	dcd 0x4A552016
	dcd 0x500A0100
	dcd 0x6C01484F
	dcd 0xD1042902
	dcd 0x20166801
	dcd 0x01004A51
	dcd 0x6868500A
	dcd 0x42884950
	dcd 0x4849D10D
	dcd 0x204A6802
	dcd 0x58100100
	dcd 0xD0032800
	dcd 0x3927484C
	dcd 0xE0025050
	dcd 0x3927484B
	dcd 0x68685050
	dcd 0x4288494A
	dcd 0x4840D139
	dcd 0x68003997
	dcd 0x58402700
	dcd 0x20019000
	dcd 0x90019002
	dcd 0x28009800
	dcd 0x1C3EDD2D
	dcd 0x48391C3C
	dcd 0x19816800
	dcd 0x68496849
	dcd 0xD10B2900
	dcd 0x29009902
	dcd 0x2000D002
	dcd 0xE0059002
	dcd 0x01892105
	dcd 0x19001840
	dcd 0xFB68F01C
	dcd 0x6800482F
	dcd 0x68491981
	dcd 0x29016849
	dcd 0x9901D10B
	dcd 0xD0022900
	dcd 0x90012000
	dcd 0x2105E005
	dcd 0x18400189
	dcd 0xF01C1900
	dcd 0x9800FB55
	dcd 0x1D361C7F
	dcd 0x42873430
	dcd 0x6868DBD3
	dcd 0x4288492C
	dcd 0x4821D115
	dcd 0x680039A9
	dcd 0x58472400
	dcd 0xDD0E2F00
	dcd 0x2C001C26
	dcd 0x481CD007
	dcd 0x20056801
	dcd 0x18080180
	dcd 0xF01C1980
	dcd 0x1C64FB39
	dcd 0x42BC3630
	dcd 0x6868DBF1
	dcd 0xD11E281B
	dcd 0x26004814
	dcd 0x204D6801
	dcd 0x580F0080
	dcd 0xDD162F00
	dcd 0x1C351C34
	dcd 0x6800480F
	dcd 0x68401900
	dcd 0xF7FB3008
	dcd 0x2800FE79
	dcd 0x480BD106
	dcd 0x68004915
	dcd 0x20161942
	dcd 0x50110100
	dcd 0x1D241C76
	dcd 0x42BE3530
	dcd 0x2001DBEA
lbl_0201706c:
	dcd 0xB401B004
	dcd 0xB4019805
	dcd 0xEE90F062
	dcd 0xB0029801
	dcd 0x46C0BDF8
	dcd 0x020D07D0
	dcd 0x000C3BB8
	dcd 0x000C3BBB
	dcd 0x00000211
	dcd 0x000C3BC0
	dcd 0x000C3BC2
	dcd 0x00000173
	dcd 0x000C3ABF
	dcd 0x000C3AC2
	dcd 0x000001CB
	dcd 0x000001DD
	dcd 0x000C3922
}

extern "C" asm void func_020170b0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x38]
	dcd 0xEE6EF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	mov r4, #0
	ldr r3, [pc, #0x28]
	str r4, [r0, #0x14]
	str r4, [r3, #0x28]
	str r4, [r3, #0x1c]
	str r4, [r3, #0x38]
	str r4, [r3, #0x34]
	cmp r2, #0
	beq lbl_020170d8
	ldr r3, [pc, #0x1c]
	str r4, [r2, r3]
lbl_020170d8:
	dcd 0xF80EF000
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xEE5AF062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	dcd 0x020BCA28
	dcd 0x020D07D0
	dcd 0x00000414
}

extern "C" asm void func_020170f8(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x2ac]
	dcd 0xEE4AF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r6, r1, #0
	add r4, r2, #0
	beq lbl_0201712a
	add r0, r4, #0
	add r0, #8
	dcd 0xF8C1F7FB
	add r0, r4, #0
	add r0, #8
	dcd 0xF931F7FB
	add r0, r4, #0
	add r0, #8
	dcd 0xF975F7FB
lbl_0201712a:
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xF89DF002
	cmp r0, #0
	bne lbl_0201713a
	mov r0, #0
	b lbl_02017398
lbl_0201713a:
	add r0, r5, #0
	ldr r2, [r0]
	add r1, r4, #0
	ldr r2, [r2]
	blx r2
	cmp r6, #0
	beq lbl_02017156
	cmp r4, #0
	beq lbl_02017156
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xFE28F7FD
	str r0, [r5, #0x34]
lbl_02017156:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF952F001
	add r7, r0, #0
	beq lbl_020171a8
	add r0, #8
	add r4, r7, #0
	dcd 0xF898F7FB
	add r0, r7, #0
	add r0, #8
	dcd 0xF908F7FB
	add r7, #8
	add r0, r7, #0
	dcd 0xF94CF7FB
	ldr r1, [pc, #0x22c]
	add r0, r5, #0
	ldr r1, [r1]
	ldr r1, [r1]
	dcd 0xF908F002
	cmp r0, #0
	beq lbl_020171a8
	ldr r2, [pc, #0x21c]
	mov r1, #0x4d
	ldr r0, [r2]
	lsl r1, r1, #2
	ldr r3, [r0, r1]
	cmp r3, #2
	beq lbl_020171a8
	mov r3, #1
	str r3, [r2, #0x14]
	ldr r3, [r0, #4]
	str r3, [r0, #8]
	ldr r0, [r2]
	mov r3, #2
	str r3, [r0, r1]
lbl_020171a8:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFF15F002
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xF9A3F001
	cmp r0, #0
	bne lbl_020171c2
	mov r0, #0
	b lbl_02017398
lbl_020171c2:
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xF8A1F001
	cmp r0, #0
	bne lbl_020171d2
	mov r0, #0
	b lbl_02017398
lbl_020171d2:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xF9BFF001
	cmp r0, #0
	bne lbl_020171e2
	mov r0, #0
	b lbl_02017398
lbl_020171e2:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFA4FF001
	cmp r0, #0
	bne lbl_020171f2
	mov r0, #0
	b lbl_02017398
lbl_020171f2:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF9ECF001
	cmp r0, #0
	bne lbl_02017204
	mov r0, #0
	b lbl_02017398
lbl_02017204:
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xFFEAF001
	cmp r0, #0
	bne lbl_02017214
	mov r0, #0
	b lbl_02017398
lbl_02017214:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFA86F001
	cmp r0, #0
	bne lbl_02017224
	mov r0, #0
	b lbl_02017398
lbl_02017224:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFAB4F001
	cmp r0, #0
	bne lbl_02017234
	mov r0, #0
	b lbl_02017398
lbl_02017234:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFB2EF001
	cmp r0, #0
	bne lbl_02017244
	mov r0, #0
	b lbl_02017398
lbl_02017244:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFBCAF001
	cmp r0, #0
	bne lbl_02017254
	mov r0, #1
	b lbl_02017398
lbl_02017254:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFDA2F001
	cmp r0, #0
	bne lbl_02017264
	mov r0, #1
	b lbl_02017398
lbl_02017264:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFF65F001
	cmp r0, #0
	bne lbl_02017276
	mov r0, #0
	b lbl_02017398
lbl_02017276:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF8BEF002
	cmp r0, #0
	bne lbl_02017288
	mov r0, #0
	b lbl_02017398
lbl_02017288:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF903F002
	cmp r0, #0
	bne lbl_0201729a
	mov r0, #0
	b lbl_02017398
lbl_0201729a:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF98EF002
	cmp r0, #0
	bne lbl_020172ac
	mov r0, #0
	b lbl_02017398
lbl_020172ac:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF9D9F002
	cmp r0, #0
	bne lbl_020172be
	mov r0, #0
	b lbl_02017398
lbl_020172be:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFA06F002
	cmp r0, #0
	bne lbl_020172d0
	mov r0, #0
	b lbl_02017398
lbl_020172d0:
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xF85EF001
	cmp r0, #0
	bne lbl_020172e0
	mov r0, #0
	b lbl_02017398
lbl_020172e0:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFE00F000
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFE54F000
	ldr r0, [r5, #0xc]
	cmp r0, #0
	bne lbl_02017308
	mov r1, #0
	str r1, [r5, #0x14]
	cmp r4, #0
	beq lbl_02017316
	add r0, r4, #0
	add r0, #8
	dcd 0xFEF7F7FB
	b lbl_02017316
lbl_02017308:
	mov r0, #1
	str r0, [r5, #0x14]
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF84DF000
lbl_02017316:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xF932F000
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFA27F000
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFD05F002
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFBD1F001
	cmp r0, #0
	bne lbl_02017342
	mov r0, #0
	b lbl_02017398
lbl_02017342:
	add r0, r5, #0
	add r1, r4, #0
	dcd 0xFC85F001
	cmp r0, #0
	bne lbl_02017352
	mov r0, #0
	b lbl_02017398
lbl_02017352:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFA72F002
	cmp r0, #0
	bne lbl_02017364
	mov r0, #0
	b lbl_02017398
lbl_02017364:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFAD3F002
	cmp r0, #0
	bne lbl_02017376
	mov r0, #0
	b lbl_02017398
lbl_02017376:
	add r0, r5, #0
	add r1, r6, #0
	add r2, r4, #0
	dcd 0xFADEF002
	cmp r0, #0
	bne lbl_02017388
	mov r0, #0
	b lbl_02017398
lbl_02017388:
	mov r0, #1
	str r0, [r5, #0x10]
	ldr r1, [pc, #0x1c]
	ldr r3, [r5, #0x14]
	ldr r2, [r1]
	mov r1, #0x4a
	lsl r1, r1, #4
	str r3, [r2, r1]
lbl_02017398:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xECFCF062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BCA68
	dcd 0x020D07D0
}

extern "C" asm void func_020173b0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x1c8]
	dcd 0xECEEF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r6, r1, #0
	add r4, r2, #0
	bne lbl_020173cc
	b lbl_0201756c
lbl_020173cc:
	ldr r1, [r5, #4]
	ldr r0, [pc, #0x1b0]
	str r1, [r0]
	ldr r0, [r5, #0xc]
	ldr r1, [r5, #0x2c]
	ldr r2, [r5, #0x30]
	dcd 0xFE74F016
	cmp r4, #0
	beq lbl_020173ea
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	dcd 0xFE85F7FB
lbl_020173ea:
	mov r0, #0
	str r0, [r5, #0x18]
	str r0, [r5, #0x3c]
	ldr r0, [r5, #4]
	dcd 0xF91BF7FE
	cmp r0, #0x27
	bls lbl_020173fc
	b lbl_0201756c
lbl_020173fc:
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r6, r1, #1
	lsl r2, r3, #1
	lsl r4, r0, #2
	lsl r6, r1, #2
	lsl r6, r2, #2
	lsl r0, r4, #2
	lsl r2, r5, #2
	lsl r2, r7, #3
	lsl r6, r1, #4
	lsl r0, r5, #3
	lsl r6, r2, #3
	lsl r6, r4, #4
	lsl r6, r6, #2
	lsl r6, r5, #4
	lsl r6, r7, #2
	lsl r6, r0, #3
	lsl r0, r3, #5
	lsl r0, r2, #5
	lsl r6, r1, #3
	lsl r6, r3, #4
	lsl r6, r2, #4
	lsl r2, r4, #5
	lsl r0, r4, #3
	lsl r2, r4, #5
	lsl r0, r6, #3
	lsl r4, r0, #4
	lsl r6, r6, #4
	lsl r2, r4, #5
	lsl r6, r7, #4
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r2, r4, #5
	lsl r0, r1, #5
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xFDACF017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFE45F016
	str r0, [r5, #0x14]
	mov r0, #1
	str r0, [r5, #0x3c]
	str r0, [r5, #0x18]
	add r0, r4, #0
	add r0, #8
	dcd 0xFC63F7FB
	cmp r0, #0
	beq lbl_0201756c
	cmp r6, r4
	bne lbl_0201756c
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xF982F7FC
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFF14F016
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFED1F016
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFFB3F016
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFF2CF016
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xFF56F016
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF8D1F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF8F7F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF915F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF929F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF93DF017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF976F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF98AF017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF9A2F017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xF9DDF017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFAC0F017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFAF1F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFB1DF017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFB43F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFB79F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFB8DF017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFBA1F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFBB5F017
	str r0, [r5, #0x14]
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFBE6F017
	b lbl_0201756c
	add r0, r4, #0
	dcd 0xFBF4F017
	b lbl_0201756c
	add r0, r6, #0
	add r1, r4, #0
	dcd 0xFC01F017
	str r0, [r5, #0x14]
lbl_0201756c:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEC12F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCAA4
	dcd 0x020EECFC
}

extern "C" asm void func_02017584(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x1d8]
	dcd 0xEC04F062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r6, r1, #0
	add r5, r0, #0
	add r4, r2, #0
	cmp r6, #0
	beq lbl_02017640
	cmp r4, #0
	beq lbl_02017640
	ldr r0, [r5, #4]
	cmp r0, #0xe9
	bne lbl_02017630
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r0, [r4, r0]
	cmp r0, #0
	beq lbl_02017640
	add r0, r4, #0
	add r0, #8
	dcd 0xFBC2F7FB
	cmp r0, #0
	bne lbl_02017640
	mov r0, #8
	dcd 0xEBC2F069
	cmp r0, #3
	bge lbl_02017630
	mov r0, #0x1c
	dcd 0xFEBAF7FD
	add r7, r0, #0
	mov r0, #0x1c
	dcd 0xFF24F7FD
	add r2, r0, #0
	mov r0, #0x5a
	lsl r0, r0, #2
	add r0, r4
	add r1, r7, #0
	dcd 0xF81BF7FD
	cmp r0, #0
	beq lbl_02017630
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0xa
	mov r2, #1
	dcd 0xFA8CF007
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFF1FF7FA
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFF1AF7FA
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFEEBF7FB
	mov r0, #1
	str r0, [r5, #0x28]
	ldr r1, [pc, #0x148]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x140]
	add r0, #0x38
	mov r3, #0
	dcd 0xFDA4F015
lbl_02017630:
	ldr r0, [r5, #4]
	cmp r0, #0xea
	bne lbl_02017690
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r0, [r4, r0]
	cmp r0, #0
	bne lbl_02017642
lbl_02017640:
	b lbl_0201774e
lbl_02017642:
	add r0, r4, #0
	add r0, #8
	dcd 0xFB7BF7FB
	cmp r0, #0
	bne lbl_0201774e
	mov r0, #8
	dcd 0xEB7AF069
	cmp r0, #3
	bge lbl_02017690
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x16
	mov r2, #0
	dcd 0xFA55F007
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFEE8F7FA
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFEEDF7FB
	ldr r1, [pc, #0xe8]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0xe4]
	add r0, #0x38
	mov r3, #0
	dcd 0xFD74F015
lbl_02017690:
	ldr r0, [r5, #4]
	cmp r0, #0xeb
	bne lbl_020176ee
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r0, [r4, r0]
	cmp r0, #0
	beq lbl_0201774e
	add r0, r4, #0
	add r0, #8
	dcd 0xFB4CF7FB
	cmp r0, #0
	bne lbl_0201774e
	mov r0, #8
	dcd 0xEB4CF069
	cmp r0, #1
	bge lbl_020176ee
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #9
	mov r2, #1
	dcd 0xFA26F007
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFEB9F7FA
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFEAAF7FB
	ldr r1, [pc, #0x88]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x88]
	add r0, #0x38
	mov r3, #0
	dcd 0xFD45F015
lbl_020176ee:
	ldr r1, [r5, #4]
	ldr r0, [pc, #0x80]
	cmp r1, r0
	bne lbl_0201774e
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r0, [r4, r0]
	cmp r0, #0
	beq lbl_0201774e
	add r0, r4, #0
	add r0, #8
	dcd 0xFB1CF7FB
	cmp r0, #0
	bne lbl_0201774e
	mov r0, #8
	dcd 0xEB1CF069
	cmp r0, #0
	bne lbl_0201774e
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #9
	mov r2, #0
	dcd 0xF9F6F007
	add r4, #8
	add r0, r4, #0
	mov r1, #2
	dcd 0xFE89F7FA
	add r6, #8
	add r0, r6, #0
	mov r1, #1
	dcd 0xFE7AF7FB
	ldr r1, [pc, #0x28]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x28]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFD15F015
lbl_0201774e:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEB20F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BCAE8
	dcd 0x020D07D0
	dcd 0x000C3A77
	dcd 0x000C3A7B
	dcd 0x000C3A7D
	dcd 0x00000233
}

extern "C" asm void func_02017778(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x194]
	dcd 0xEB0AF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r4, r1, #0
	add r5, r0, #0
	add r6, r2, #0
	cmp r4, #0
	beq lbl_020177ae
	cmp r6, #0
	beq lbl_020177ae
	ldr r0, [r5, #4]
	dcd 0xF8EBF7FE
	cmp r0, #0
	beq lbl_020177ae
	add r0, r6, #0
	add r0, #8
	dcd 0xFACBF7FB
	cmp r0, #0
	beq lbl_020177b0
lbl_020177ae:
	b lbl_020178fe
lbl_020177b0:
	mov r7, #0x51
	lsl r7, r7, #2
	add r0, r4, r7
	mov r1, #0x19
	dcd 0xF832F7FA
	cmp r0, #0
	beq lbl_0201780e
	ldr r0, [pc, #0x150]
	ldr r0, [r0, #0x18]
	cmp r0, #0
	bne lbl_0201780e
	ldr r0, [r5, #0x30]
	cmp r0, #0
	beq lbl_0201780e
	mov r0, #8
	dcd 0xEABAF069
	cmp r0, #0
	bne lbl_0201780e
	add r0, r7, #0
	add r0, #0x44
	add r0, r6
	mov r1, #9
	mov r2, #0
	dcd 0xF995F007
	add r0, r6, #0
	add r0, #8
	mov r1, #2
	dcd 0xFE28F7FA
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFE19F7FB
	ldr r1, [pc, #0x118]
	add r0, r5, #0
	ldr r2, [r1]
	sub r1, r7, #4
	add r1, r2
	ldr r2, [pc, #0x110]
	add r0, #0x38
	mov r3, #0
	dcd 0xFCB5F015
lbl_0201780e:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x23
	dcd 0xF803F7FA
	cmp r0, #0
	beq lbl_0201783e
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r0, [r6, r0]
	cmp r0, #0
	beq lbl_020178fe
	ldr r1, [pc, #0xe8]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0xe4]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC9DF015
lbl_0201783e:
	add r0, r4, r7
	mov r1, #0x18
	dcd 0xFFEDF7F9
	cmp r0, #0
	beq lbl_020178ac
	ldr r0, [r5, #0x30]
	cmp r0, #0
	beq lbl_020178ac
	mov r0, #3
	dcd 0xEA7AF069
	cmp r0, #0
	bne lbl_020178ac
	mov r0, #0x1c
	dcd 0xFD72F7FD
	str r0, [sp]
	mov r0, #0x1c
	dcd 0xFDDCF7FD
	add r2, r0, #0
	mov r0, #0x5a
	lsl r0, r0, #2
	ldr r1, [sp]
	add r0, r6
	dcd 0xFED3F7FC
	cmp r0, #0
	beq lbl_020178ac
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0xa
	mov r2, #1
	dcd 0xF944F007
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFDADF7FB
	mov r0, #1
	str r0, [r5, #0x28]
	ldr r1, [pc, #0x7c]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x7c]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC66F015
lbl_020178ac:
	add r0, r4, r7
	mov r1, #0x20
	dcd 0xFFB6F7F9
	add r0, r4, r7
	mov r1, #0x29
	dcd 0xFFB2F7F9
	cmp r0, #0
	beq lbl_020178fe
	ldr r0, [r5, #0x30]
	cmp r0, #0
	beq lbl_020178fe
	mov r0, #6
	dcd 0xEA3EF069
	cmp r0, #0
	bne lbl_020178fe
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0x16
	mov r2, #1
	dcd 0xF919F007
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xFDB6F7FB
	ldr r1, [pc, #0x28]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x2c]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFC3DF015
lbl_020178fe:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEA48F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BCB28
	dcd 0x020D07D0
	dcd 0x000C3A7D
	dcd 0x000C3AB7
	dcd 0x000C3A77
	dcd 0x000C3A7B
}

extern "C" asm void func_02017928(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x44]
	dcd 0xEA32F062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	ldr r0, [pc, #0x38]
	mov r4, #0x62
	ldr r0, [r0]
	lsl r4, r4, #2
	ldr r5, [r0]
	add r0, r5, r4
	dcd 0xFA29F007
	add r0, r5, r4
	dcd 0xFA82F007
	cmp r0, #0
	beq lbl_0201795c
	cmp r0, #0xa
	bne lbl_0201795c
	mov r0, #1
	b lbl_0201795e
lbl_0201795c:
	mov r0, #0
lbl_0201795e:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEA18F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BCB74
	dcd 0x020D07D0
}

extern "C" asm void func_02017978(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x50]
	dcd 0xEA0AF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	add r4, r1, #0
	bne lbl_02017992
	mov r0, #1
	b lbl_020179ba
lbl_02017992:
	dcd 0xFC59F7F9
	cmp r0, #0
	beq lbl_020179a8
	add r4, #8
	add r0, r4, #0
	mov r1, #0
	dcd 0xFF62F7FB
	mov r0, #1
	b lbl_020179ba
lbl_020179a8:
	add r4, #8
	add r0, r4, #0
	dcd 0xFF6CF7FB
	cmp r0, #0
	bne lbl_020179b8
	mov r0, #1
	b lbl_020179ba
lbl_020179b8:
	mov r0, #0
lbl_020179ba:
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xE9EAF062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	mov r8, r8
	dcd 0x020BCBA4
}

extern "C" asm void func_020179d0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x7c]
	dcd 0xE9DEF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	sub sp, #8
	add r5, r0, #0
	ldr r0, [pc, #0x6c]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #8
	add r0, r4, r6
	dcd 0xF9B6F007
	cmp r0, #0
	beq lbl_02017a3c
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	mov r1, #8
	dcd 0xFA66F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x40]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xFB97F015
	ldr r1, [pc, #0x30]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xFB9CF015
	mov r0, #0
	b lbl_02017a3e
lbl_02017a3c:
	mov r0, #1
lbl_02017a3e:
	add sp, #8
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE9A8F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCBF4
	dcd 0x020D07D0
}

extern "C" asm void func_02017a58(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xd4]
	dcd 0xE99AF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	sub sp, #8
	add r5, r0, #0
	ldr r0, [pc, #0xc4]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #9
	add r0, r4, r6
	dcd 0xF972F007
	cmp r0, #0
	beq lbl_02017ac4
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	mov r1, #9
	dcd 0xFA22F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x98]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xFB53F015
	ldr r1, [pc, #0x88]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xFB58F015
	mov r0, #0
	b lbl_02017b1e
lbl_02017ac4:
	add r0, r4, r6
	mov r1, #9
	dcd 0xF9D4F007
	cmp r0, #0
	beq lbl_02017b1c
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	dcd 0xFAA3F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x50]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xFB2EF015
	ldr r1, [pc, #0x3c]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xFB33F015
	ldr r0, [pc, #0x28]
	mov r1, #1
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFEA8F7FB
	mov r0, #0
	b lbl_02017b1e
lbl_02017b1c:
	mov r0, #1
lbl_02017b1e:
	add sp, #8
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE938F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCC20
	dcd 0x020D07D0
}

extern "C" asm void func_02017b38(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xf8]
	dcd 0xE92AF062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	sub sp, #8
	add r5, r0, #0
	ldr r0, [pc, #0xe8]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #0xa
	add r0, r4, r6
	dcd 0xF902F007
	cmp r0, #0
	beq lbl_02017bc8
	add r0, r6, #0
	ldr r1, [r5, #4]
	sub r0, #0x44
	sub r1, r1, r0
	cmp r1, #1
	bhi lbl_02017b88
	ldr r1, [pc, #0xc4]
	ldr r2, [pc, #0xc8]
	ldr r1, [r1]
	sub r0, r0, #4
	str r2, [r1, r0]
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xFB80F7FB
	mov r0, #1
	b lbl_02017c22
lbl_02017b88:
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xF9A0F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x98]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xFAD1F015
	ldr r1, [pc, #0x88]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xFAD6F015
	mov r0, #0
	b lbl_02017c22
lbl_02017bc8:
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xF952F007
	cmp r0, #0
	beq lbl_02017c20
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	dcd 0xFA21F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x50]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xFAACF015
	ldr r1, [pc, #0x3c]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xFAB1F015
	ldr r0, [pc, #0x28]
	mov r1, #1
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFE26F7FB
	mov r0, #0
	b lbl_02017c22
lbl_02017c20:
	mov r0, #1
lbl_02017c22:
	add sp, #8
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE8B6F062
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCC48
	dcd 0x020D07D0
	dcd 0x000C3ACD
}

extern "C" asm void func_02017c40(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x1e0]
	dcd 0xE8A6F062
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	sub sp, #8
	add r5, r0, #0
	ldr r0, [pc, #0x1d0]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #0x15
	add r0, r4, r6
	dcd 0xF87EF007
	cmp r0, #0
	bne lbl_02017c6e
	b lbl_02017db8
lbl_02017c6e:
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF91FF007
	add r1, r6, #0
	sub r1, #0x7e
	cmp r0, r1
	bne lbl_02017ca6
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF925F007
	mov r7, #0
	str r7, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x194]
	str r7, [sp, #4]
	ldr r3, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r3
	add r0, #0x38
	add r3, r7, #0
	dcd 0xFA55F015
lbl_02017ca6:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF905F007
	ldr r1, [pc, #0x17c]
	cmp r0, r1
	bne lbl_02017ccc
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0x16c]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0x15
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0x168]
	add r0, #0x38
	dcd 0xFA42F015
lbl_02017ccc:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF8F2F007
	mov r1, #0x6e
	lsl r1, r1, #2
	cmp r0, r1
	bne lbl_02017cf4
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0x144]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0x78
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0x144]
	add r0, #0x38
	dcd 0xFA2EF015
lbl_02017cf4:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF8DEF007
	ldr r1, [pc, #0x138]
	cmp r0, r1
	bne lbl_02017d1a
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0x120]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0xd2
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0x128]
	add r0, #0x38
	dcd 0xFA1BF015
lbl_02017d1a:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF8CBF007
	ldr r1, [pc, #0x114]
	cmp r0, r1
	bne lbl_02017d40
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0xf8]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0xd2
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0x104]
	add r0, #0x38
	dcd 0xFA08F015
lbl_02017d40:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF8B8F007
	mov r1, #0x86
	lsl r1, r1, #2
	cmp r0, r1
	bne lbl_02017d68
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0xd0]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0xd8
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0xdc]
	add r0, #0x38
	dcd 0xF9F4F015
lbl_02017d68:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF8A4F007
	ldr r1, [pc, #0xd0]
	cmp r0, r1
	bne lbl_02017d8e
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0xac]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0xd9
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0xc0]
	add r0, #0x38
	dcd 0xF9E1F015
lbl_02017d8e:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF891F007
	ldr r1, [pc, #0xb4]
	cmp r0, r1
	bne lbl_02017db4
	mov r3, #0
	str r3, [sp]
	ldr r2, [pc, #0x84]
	str r3, [sp, #4]
	ldr r2, [r2]
	sub r1, #0xda
	add r5, #0x38
	add r1, r2
	ldr r2, [pc, #0xa0]
	add r0, r5, #0
	dcd 0xF9CEF015
lbl_02017db4:
	mov r0, #0
	b lbl_02017e12
lbl_02017db8:
	add r0, r4, r6
	mov r1, #0x15
	dcd 0xF85AF007
	cmp r0, #0
	beq lbl_02017e10
	mov r0, #0
	str r0, [r5, #0x14]
	add r0, r4, r6
	dcd 0xF929F007
	mov r3, #0
	str r3, [sp]
	add r2, r0, #0
	add r0, r5, #0
	ldr r1, [pc, #0x50]
	str r3, [sp, #4]
	ldr r4, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r4
	dcd 0xF9B4F015
	ldr r1, [pc, #0x3c]
	add r5, #0x38
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r1, r2
	mov r2, #0
	add r0, r5, #0
	add r3, r2, #0
	dcd 0xF9B9F015
	ldr r0, [pc, #0x28]
	mov r1, #1
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFD2EF7FB
	mov r0, #0
	b lbl_02017e12
lbl_02017e10:
	mov r0, #1
lbl_02017e12:
	add sp, #8
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEFBEF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BCC70
	dcd 0x020D07D0
	dcd 0x00000155
	dcd 0x000C3ADC
	dcd 0x000C3ADE
	dcd 0x00000212
	dcd 0x000C39B4
	dcd 0x000C3AEA
	dcd 0x00000219
	dcd 0x000C3AEC
	dcd 0x0000021A
	dcd 0x000C3ADA
}

extern "C" asm void func_02017e54(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x40]
	dcd 0xEF9CF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	add r4, r0, #0
	ldr r0, [pc, #0x30]
	ldr r0, [r0]
	ldr r1, [r0]
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r1
	mov r1, #0x1e
	dcd 0xFF75F006
	cmp r0, #0
	beq lbl_02017e84
	mov r0, #0
	str r0, [r4, #0x14]
	b lbl_02017e86
lbl_02017e84:
	mov r0, #1
lbl_02017e86:
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xEF84F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	mov r8, r8
	dcd 0x020BCC98
	dcd 0x020D07D0
}

extern "C" asm void func_02017ea0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x38]
	dcd 0xEF76F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, lr}
	ldr r0, [pc, #0x2c]
	ldr r0, [r0]
	ldr r1, [r0]
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r1
	mov r1, #0x14
	dcd 0xFF50F006
	cmp r0, #0
	beq lbl_02017ed4
	ldr r0, [pc, #0x14]
	ldr r2, [pc, #0x18]
	ldr r1, [r0]
	mov r0, #5
	lsl r0, r0, #6
	str r2, [r1, r0]
lbl_02017ed4:
	dcd 0xEF60F061
	pop {r3, pc}
	mov r8, r8
	dcd 0x020BCCC0
	dcd 0x020D07D0
	dcd 0x000C3AEF
}

extern "C" asm void func_02017ee8(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xa4]
	dcd 0xEF52F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	beq lbl_02017f7e
	ldr r0, [r5, #4]
	dcd 0xFA1FF7FD
	add r6, r0, #0
	ldr r0, [r5, #4]
	dcd 0xFA89F7FD
	add r2, r0, #0
	mov r0, #0x5a
	lsl r0, r0, #2
	add r0, r4
	add r1, r6, #0
	dcd 0xFB80F7FC
	str r0, [r5, #0xc]
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_02017f5e
	add r0, r4, #0
	add r0, #0x4c
	ldrh r0, [r0]
	cmp r0, #0x19
	bne lbl_02017f36
	cmp r6, #0xd
	bne lbl_02017f36
	mov r0, #0
	str r0, [r5, #0xc]
lbl_02017f36:
	mov r0, #0x5b
	ldrsb r0, [r4, r0]
	cmp r0, #0
	beq lbl_02017f5e
	cmp r6, #8
	bne lbl_02017f5e
	ldr r0, [r5, #4]
	cmp r0, #0x1d
	bne lbl_02017f5e
	mov r0, #0xfa
	lsl r0, r0, #2
	dcd 0xEEFCF068
	ldr r1, [pc, #0x40]
	cmp r0, r1
	bge lbl_02017f5a
	add r1, #0xfa
	b lbl_02017f5c
lbl_02017f5a:
	mov r1, #0
lbl_02017f5c:
	str r1, [r5, #0xc]
lbl_02017f5e:
	ldr r1, [r5, #0x2c]
	ldr r0, [r5, #0xc]
	mul r0, r1
	mov r1, #0xfa
	lsl r1, r1, #2
	dcd 0xE860F7EE
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	ldr r0, [r5, #0xc]
	mul r0, r1
	mov r1, #0xfa
	lsl r1, r1, #2
	dcd 0xE858F7EE
	str r0, [r5, #0x30]
lbl_02017f7e:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEF08F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BCCEC
	dcd 0x000002EE
}

extern "C" asm void func_02017f98(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x118]
	dcd 0xEEFAF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r5, r0, #0
	add r4, r1, #0
	beq lbl_020180a2
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x3e
	dcd 0xFC32F7F9
	cmp r0, #0
	beq lbl_02017fd8
	ldr r0, [r5, #4]
	dcd 0xF9BFF7FD
	cmp r0, #9
	beq lbl_02017fce
	cmp r0, #0xd
	bne lbl_02017fd8
lbl_02017fce:
	mov r1, #0x7d
	add r0, r5, #0
	lsl r1, r1, #2
	dcd 0xF872F000
lbl_02017fd8:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x59
	dcd 0xFC1EF7F9
	cmp r0, #0
	beq lbl_02018002
	ldr r0, [r5, #4]
	dcd 0xF9ABF7FD
	cmp r0, #8
	beq lbl_02017ffa
	cmp r0, #0xd
	beq lbl_02017ffa
	cmp r0, #0x1b
	bne lbl_02018002
lbl_02017ffa:
	ldr r1, [pc, #0xbc]
	add r0, r5, #0
	dcd 0xF85DF000
lbl_02018002:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x5b
	dcd 0xFC09F7F9
	cmp r0, #0
	beq lbl_02018024
	ldr r0, [r5, #4]
	dcd 0xF996F7FD
	cmp r0, #0xd
	bne lbl_02018024
	ldr r1, [pc, #0x98]
	add r0, r5, #0
	dcd 0xF84CF000
lbl_02018024:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x5d
	dcd 0xFBF8F7F9
	cmp r0, #0
	beq lbl_0201804e
	ldr r0, [r5, #4]
	dcd 0xF985F7FD
	cmp r0, #8
	beq lbl_02018046
	cmp r0, #0xd
	beq lbl_02018046
	cmp r0, #0x1b
	bne lbl_0201804e
lbl_02018046:
	ldr r1, [pc, #0x70]
	add r0, r5, #0
	dcd 0xF837F000
lbl_0201804e:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x5e
	dcd 0xFBE3F7F9
	cmp r0, #0
	beq lbl_02018078
	ldr r0, [r5, #4]
	dcd 0xF970F7FD
	cmp r0, #8
	beq lbl_02018070
	cmp r0, #9
	beq lbl_02018070
	cmp r0, #0x1b
	bne lbl_02018078
lbl_02018070:
	ldr r1, [pc, #0x44]
	add r0, r5, #0
	dcd 0xF822F000
lbl_02018078:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x67
	dcd 0xFBCEF7F9
	cmp r0, #0
	beq lbl_020180a2
	ldr r0, [r5, #4]
	dcd 0xF95BF7FD
	cmp r0, #8
	beq lbl_0201809a
	cmp r0, #0xd
	beq lbl_0201809a
	cmp r0, #0x1b
	bne lbl_020180a2
lbl_0201809a:
	ldr r1, [pc, #0x1c]
	add r0, r5, #0
	dcd 0xF80DF000
lbl_020180a2:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEE76F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BCD30
	dcd 0x0000014D
}

extern "C" asm void func_020180bc(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x54]
	dcd 0xEE68F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r4, r0, #0
	mov r0, #0xfa
	lsl r0, r0, #2
	add r5, r1, #0
	dcd 0xEE38F068
	cmp r0, r5
	blt lbl_020180e2
	mov r0, #0
	str r0, [r4, #0xc]
lbl_020180e2:
	ldr r1, [r4, #0x2c]
	ldr r0, [r4, #0xc]
	mul r0, r1
	mov r1, #0xfa
	lsl r1, r1, #2
	dcd 0xEF9EF7ED
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	ldr r0, [r4, #0xc]
	mul r0, r1
	mov r1, #0xfa
	lsl r1, r1, #2
	dcd 0xEF96F7ED
	str r0, [r4, #0x30]
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEE46F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BCD7C
}

extern "C" asm void func_02018118(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x58]
	dcd 0xEE3AF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	add r4, r0, #0
	dcd 0xF826F000
	cmp r0, #0
	beq lbl_02018138
	mov r0, #1
	b lbl_02018162
lbl_02018138:
	mov r0, #0
	str r0, [r4, #0x14]
	ldr r0, [pc, #0x38]
	ldr r0, [r0]
	ldr r0, [r0]
	cmp r0, #0
	beq lbl_0201814e
	add r0, #8
	mov r1, #1
	dcd 0xFBC5F7FB
lbl_0201814e:
	ldr r1, [pc, #0x28]
	add r4, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r0, r4, #0
	add r1, r2
	dcd 0xF812F015
	mov r0, #0
lbl_02018162:
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xEE16F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	mov r8, r8
	dcd 0x020BCDB0
	dcd 0x020D07D0
}

extern "C" asm void func_0201817c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x54]
	dcd 0xEE08F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	ldr r0, [r0, #4]
	dcd 0xF99AF7FD
	add r4, r0, #0
	cmp r4, #0xff
	bne lbl_020181ae
	ldr r0, [pc, #0x3c]
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xF853F7FA
	cmp r0, #0
	beq lbl_020181ae
	mov r0, #1
	b lbl_020181c4
lbl_020181ae:
	ldr r0, [pc, #0x28]
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xF849F7FA
	cmp r0, r4
	blt lbl_020181c2
	mov r0, #1
	b lbl_020181c4
lbl_020181c2:
	mov r0, #0
lbl_020181c4:
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xEDE6F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	dcd 0x020BCDD8
	dcd 0x020D07D0
}

extern "C" asm void func_020181dc(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x8c]
	dcd 0xEDD8F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	ldr r0, [r5, #4]
	dcd 0xFBF3F7FD
	cmp r0, #0
	beq lbl_02018258
	ldr r0, [pc, #0x74]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #0x12
	add r0, r4, r6
	dcd 0xFDACF006
	cmp r0, #0
	beq lbl_02018258
	mov r0, #0
	str r0, [r5, #0x14]
	ldr r1, [pc, #0x58]
	add r0, r5, #0
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r2
	dcd 0xFF13F014
	add r0, r4, r6
	mov r1, #0x12
	dcd 0xFE71F006
	ldr r1, [pc, #0x40]
	add r2, r0, #0
	ldr r3, [r1]
	add r1, r6, #0
	add r0, r5, #0
	sub r1, #0x48
	add r1, r3
	add r0, #0x38
	mov r3, #0
	dcd 0xFF96F014
	mov r1, #1
	ldr r0, [pc, #0x28]
	str r1, [r5, #0x10]
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFB5EF7FB
	mov r0, #0
	b lbl_0201825a
lbl_02018258:
	mov r0, #1
lbl_0201825a:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xED9AF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BCDFC
	dcd 0x020D07D0
}

extern "C" asm void func_02018274(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x8c]
	dcd 0xED8CF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	ldr r0, [r5, #4]
	dcd 0xFBA7F7FD
	cmp r0, #0
	beq lbl_020182f0
	ldr r0, [pc, #0x74]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #0x1f
	add r0, r4, r6
	dcd 0xFD60F006
	cmp r0, #0
	beq lbl_020182f0
	mov r0, #0
	str r0, [r5, #0x14]
	ldr r1, [pc, #0x58]
	add r0, r5, #0
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r2
	dcd 0xFEC7F014
	add r0, r4, r6
	mov r1, #0x1f
	dcd 0xFE25F006
	ldr r1, [pc, #0x40]
	add r2, r0, #0
	ldr r3, [r1]
	add r1, r6, #0
	add r0, r5, #0
	sub r1, #0x48
	add r1, r3
	add r0, #0x38
	mov r3, #0
	dcd 0xFF4AF014
	mov r1, #1
	ldr r0, [pc, #0x28]
	str r1, [r5, #0x10]
	ldr r0, [r0]
	ldr r0, [r0]
	add r0, #8
	dcd 0xFB12F7FB
	mov r0, #0
	b lbl_020182f2
lbl_020182f0:
	mov r0, #1
lbl_020182f2:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xED4EF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BCE24
	dcd 0x020D07D0
}

extern "C" asm void func_0201830c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x7c]
	dcd 0xED40F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	ldr r0, [r5, #4]
	dcd 0xFA41F7FD
	cmp r0, #0
	beq lbl_0201837a
	ldr r0, [pc, #0x64]
	mov r6, #0x62
	ldr r0, [r0]
	lsl r6, r6, #2
	ldr r4, [r0]
	mov r1, #0x11
	add r0, r4, r6
	dcd 0xFD14F006
	cmp r0, #0
	beq lbl_0201837a
	add r0, r4, r6
	mov r1, #0x11
	dcd 0xFDB0F006
	ldr r0, [pc, #0x44]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	bne lbl_0201837a
	ldr r1, [r5, #0xc]
	mov r0, #0x14
	mul r0, r1
	mov r1, #0xa
	dcd 0xEE68F7ED
	str r0, [r5, #0xc]
	ldr r1, [r5, #0x2c]
	mov r0, #0x14
	mul r0, r1
	mov r1, #0xa
	dcd 0xEE62F7ED
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	mov r0, #0x14
	mul r0, r1
	mov r1, #0xa
	dcd 0xEE5AF7ED
	str r0, [r5, #0x30]
lbl_0201837a:
	mov r0, #1
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xED0AF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCE50
	dcd 0x020D07D0
}

extern "C" asm void func_02018394(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x64]
	dcd 0xECFCF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r5, r0, #0
	ldr r0, [r5, #4]
	add r4, r1, #0
	dcd 0xFA0EF7FD
	cmp r0, #0
	beq lbl_020183ea
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0xc
	dcd 0xFCD2F006
	cmp r0, #0
	beq lbl_020183ea
	ldr r0, [pc, #0x38]
	ldr r1, [r0, #0x28]
	cmp r1, #0
	bne lbl_020183ea
	ldr r1, [r0]
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r0, [r1, r0]
	cmp r0, #0
	bne lbl_020183ea
	ldr r0, [r5, #0xc]
	lsl r0, r0, #1
	str r0, [r5, #0xc]
	ldr r0, [r5, #0x2c]
	lsl r0, r0, #1
	str r0, [r5, #0x2c]
	ldr r0, [r5, #0x30]
	lsl r0, r0, #1
	str r0, [r5, #0x30]
lbl_020183ea:
	mov r0, #1
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xECD2F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	dcd 0x020BCE90
	dcd 0x020D07D0
}

extern "C" asm void func_02018404(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xec]
	dcd 0xECC4F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r4, r1, #0
	add r5, r0, #0
	add r6, r2, #0
	cmp r4, #0
	bne lbl_02018424
	mov r0, #0
	b lbl_020184e4
lbl_02018424:
	cmp r6, #0
	bne lbl_0201842c
	mov r0, #0
	b lbl_020184e4
lbl_0201842c:
	ldr r0, [pc, #0xc8]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	beq lbl_0201844a
	mov r0, #0x46
	lsl r0, r0, #4
	ldr r0, [r4, r0]
	cmp r0, #0xe7
	beq lbl_02018442
	cmp r0, #0xe8
	bne lbl_02018446
lbl_02018442:
	ldr r0, [r5, #0x34]
	str r0, [r5, #0x30]
lbl_02018446:
	mov r0, #0
	b lbl_020184e4
lbl_0201844a:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x27
	dcd 0xF9E5F7F9
	cmp r0, #0
	beq lbl_0201845e
	mov r0, #0
	b lbl_020184e4
lbl_0201845e:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x28
	dcd 0xF9DBF7F9
	cmp r0, #0
	beq lbl_02018472
	mov r0, #0
	b lbl_020184e4
lbl_02018472:
	ldr r0, [pc, #0x88]
	ldr r0, [r0, #0x14]
	cmp r0, #0
	beq lbl_0201847e
	mov r0, #0
	b lbl_020184e4
lbl_0201847e:
	ldr r0, [r5, #4]
	dcd 0xFAD0F7FD
	cmp r0, #0
	beq lbl_020184c8
	ldr r0, [r6, #4]
	cmp r0, #0
	bne lbl_020184a4
	ldr r0, [pc, #0x6c]
	ldr r0, [r0]
	dcd 0xFE9BF159
	ldr r0, [pc, #0x64]
	ldr r1, [r0]
	mov r0, #0x4e
	lsl r0, r0, #2
	ldr r0, [r1, r0]
	str r0, [r5, #0x34]
	str r0, [r5, #0x2c]
lbl_020184a4:
	ldr r0, [r6, #4]
	cmp r0, #1
	bne lbl_020184c0
	ldr r0, [pc, #0x50]
	ldr r0, [r0]
	dcd 0xFE8DF159
	ldr r0, [pc, #0x48]
	ldr r1, [r0]
	mov r0, #0x4e
	lsl r0, r0, #2
	ldr r0, [r1, r0]
	str r0, [r5, #0x34]
	str r0, [r5, #0x30]
lbl_020184c0:
	ldr r0, [pc, #0x38]
	ldr r0, [r0]
	ldr r0, [r0, #4]
	b lbl_020184e4
lbl_020184c8:
	ldr r0, [r5, #4]
	dcd 0xF9A1F7FD
	cmp r0, #0
	beq lbl_020184e2
	ldr r0, [pc, #0x28]
	ldr r0, [r0]
	dcd 0xF955F15A
	ldr r0, [pc, #0x20]
	ldr r0, [r0]
	ldr r0, [r0, #4]
	b lbl_020184e4
lbl_020184e2:
	mov r0, #0
lbl_020184e4:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEC56F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCED4
	dcd 0x020C768C
	dcd 0x020D07D0
}

extern "C" asm void func_02018500(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x4c]
	dcd 0xEC46F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r5, r0, #0
	add r4, r1, #0
	dcd 0xFE97F7F8
	cmp r0, #0
	beq lbl_0201853c
	ldr r0, [r5, #4]
	sub r0, #0xc8
	cmp r0, #1
	bhi lbl_0201853c
	add r4, #8
	add r0, r4, #0
	dcd 0xFC09F7FA
	cmp r0, #0
	bne lbl_0201853c
	ldr r1, [pc, #0x20]
	mov r0, #2
	ldr r2, [r1, #8]
	orr r0, r2
	str r0, [r1, #8]
lbl_0201853c:
	mov r0, #1
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEC28F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BCF20
	dcd 0x020D07D0
}

extern "C" asm void func_02018558(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x70]
	dcd 0xEC1AF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_02018574
	mov r0, #1
	b lbl_020185bc
lbl_02018574:
	ldr r0, [r5, #4]
	cmp r0, #0x2c
	bne lbl_020185ba
	mov r6, #0x62
	lsl r6, r6, #2
	add r0, r4, r6
	mov r1, #0xc
	dcd 0xFBEFF006
	cmp r0, #0
	beq lbl_020185ba
	ldr r1, [pc, #0x44]
	add r0, r5, #0
	ldr r2, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r0, #0x38
	add r1, r2
	dcd 0xFD58F014
	add r0, r4, r6
	mov r1, #0xc
	dcd 0xFD36F006
	ldr r1, [pc, #0x28]
	add r5, #0x38
	ldr r3, [r1]
	add r1, r6, #0
	sub r1, #0x48
	add r2, r0, #0
	add r1, r3
	add r0, r5, #0
	mov r3, #0
	dcd 0xFDDBF014
lbl_020185ba:
	mov r0, #1
lbl_020185bc:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEBEAF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BCF6C
	dcd 0x020D07D0
}

extern "C" asm void func_020185d4(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xa8]
	dcd 0xEBDCF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r4, r2, #0
	cmp r1, #0
	bne lbl_020185f2
	mov r0, #1
	b lbl_0201866e
lbl_020185f2:
	cmp r4, #0
	bne lbl_020185fa
	mov r0, #1
	b lbl_0201866e
lbl_020185fa:
	cmp r1, r4
	bne lbl_02018602
	mov r0, #1
	b lbl_0201866e
lbl_02018602:
	ldr r0, [r5, #4]
	dcd 0xF93AF7FD
	cmp r0, #0
	beq lbl_0201866c
	mov r7, #0x62
	lsl r7, r7, #2
	add r0, r4, r7
	mov r1, #0xf
	dcd 0xFBA6F006
	cmp r0, #0
	beq lbl_0201866c
	ldr r0, [pc, #0x64]
	add r2, r7, #0
	ldr r1, [r0]
	sub r2, #0x4c
	ldr r0, [r1, r2]
	add r2, r2, #4
	add r6, r0, #0
	mov r3, #0x30
	add r0, r5, #0
	mul r6, r3
	add r1, r2
	add r0, #0x38
	add r1, r6
	dcd 0xFD09F014
	ldr r2, [pc, #0x48]
	add r0, r4, r7
	ldr r2, [r2]
	mov r1, #0xf
	ldr r2, [r2]
	ldr r2, [r2, #4]
	dcd 0xFC81F006
	ldr r1, [pc, #0x38]
	add r2, r0, #0
	ldr r3, [r1]
	add r1, r7, #0
	sub r1, #0x48
	add r1, r3
	add r0, r5, #0
	add r0, #0x38
	add r1, r6
	mov r3, #0
	dcd 0xFD87F014
	mov r0, #0
	str r0, [r5, #0x14]
	mov r1, #1
	str r1, [r5, #0x10]
	b lbl_0201866e
lbl_0201866c:
	mov r0, #1
lbl_0201866e:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEB90F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BCFB0
	dcd 0x020D07D0
}

extern "C" asm void func_02018688(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x94]
	dcd 0xEB82F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r6, r1, #0
	bne lbl_020186a4
	mov r0, #1
	b lbl_02018710
lbl_020186a4:
	ldr r0, [r5, #4]
	dcd 0xF8C5F7FD
	cmp r0, #0
	beq lbl_0201870e
	mov r7, #0x62
	lsl r7, r7, #2
	add r0, r6, r7
	mov r1, #8
	dcd 0xFB55F006
	cmp r0, #0
	beq lbl_0201870e
	ldr r0, [pc, #0x64]
	add r2, r7, #0
	ldr r1, [r0]
	sub r2, #0x4c
	ldr r0, [r1, r2]
	add r2, r2, #4
	add r4, r0, #0
	mov r3, #0x30
	add r0, r5, #0
	mul r4, r3
	add r1, r2
	add r0, #0x38
	add r1, r4
	dcd 0xFCB8F014
	ldr r2, [pc, #0x44]
	add r0, r6, r7
	ldr r2, [r2]
	mov r1, #8
	ldr r2, [r2]
	ldr r2, [r2, #4]
	dcd 0xFC30F006
	ldr r1, [pc, #0x34]
	add r2, r0, #0
	ldr r3, [r1]
	add r1, r7, #0
	sub r1, #0x48
	add r1, r3
	add r0, r5, #0
	add r0, #0x38
	add r1, r4
	mov r3, #0
	dcd 0xFD36F014
	mov r0, #0
	str r0, [r5, #0x14]
	mov r1, #1
	str r1, [r5, #0x10]
	b lbl_02018710
lbl_0201870e:
	mov r0, #1
lbl_02018710:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEB40F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BCFF8
	dcd 0x020D07D0
}

extern "C" asm void func_02018728(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x64]
	dcd 0xEB32F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_02018744
	mov r0, #1
	b lbl_0201877e
lbl_02018744:
	ldr r0, [r5, #4]
	dcd 0xFFF9F7FC
	cmp r0, #0
	beq lbl_0201877c
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFCF0F7FA
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0xd
	dcd 0xFB00F006
	cmp r0, #0
	beq lbl_0201877c
	ldr r1, [r5, #0x2c]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x30]
lbl_0201877c:
	mov r0, #1
lbl_0201877e:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEB08F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BD03C
}

extern "C" asm void func_02018794(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xfc]
lbl_02018798:
	dcd 0xEAFCF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_020187b0
	mov r0, #1
	b lbl_02018884
lbl_020187b0:
	ldr r0, [r5, #4]
	dcd 0xFF3BF7FC
	cmp r0, #1
	bne lbl_02018882
	mov r6, #0x62
	lsl r6, r6, #2
	add r0, r6, #0
	sub r0, #0x44
	add r0, r4
	mov r1, #0x43
	dcd 0xF82BF7F9
	cmp r0, #0
	beq lbl_020187fa
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xFAC7F006
	cmp r0, #0
	beq lbl_020187e4
	add r0, r4, r6
	mov r1, #0x9b
	mov r2, #1
	dcd 0xFF9CF005
lbl_020187e4:
	add r0, r4, r6
	mov r1, #9
	dcd 0xFABCF006
	cmp r0, #0
	beq lbl_020187fa
	add r0, r4, r6
	mov r1, #0x9b
	mov r2, #1
	dcd 0xFF91F005
lbl_020187fa:
	add r0, r4, r6
	mov r1, #0x1b
	dcd 0xFAB1F006
	cmp r0, #0
	beq lbl_02018882
	add r0, r4, r6
	mov r1, #0x1b
	dcd 0xFB55F006
	cmp r0, #0x9b
	bne lbl_02018826
	ldr r1, [r5, #0x2c]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x30]
lbl_02018826:
	add r0, r4, r6
	mov r1, #0x1b
	dcd 0xFB45F006
	cmp r0, #0x9c
	bne lbl_02018862
	ldr r0, [r5, #4]
	cmp r0, #0x47
	bne lbl_0201884e
	ldr r0, [r5, #0x2c]
	mov r1, #5
	dcd 0xEBF6F7ED
	str r0, [r5, #0x2c]
	ldr r0, [r5, #0x30]
	mov r1, #5
	dcd 0xEBF2F7ED
	str r0, [r5, #0x30]
	b lbl_02018862
lbl_0201884e:
	ldr r1, [r5, #0x2c]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x30]
lbl_02018862:
	add r0, r4, r6
	mov r1, #0x1b
	dcd 0xFB27F006
	cmp r0, #0x4b
	bne lbl_02018882
	ldr r0, [r5, #0x2c]
	mov r1, #0xa
	dcd 0xEBDCF7ED
	str r0, [r5, #0x2c]
	ldr r0, [r5, #0x30]
	mov r1, #0xa
	dcd 0xEBD6F7ED
	str r0, [r5, #0x30]
lbl_02018882:
	mov r0, #1
lbl_02018884:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEA86F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BD080
}

extern "C" asm void func_02018898(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x134]
	dcd 0xEA7AF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_020188b4
	mov r0, #1
	b lbl_020189be
lbl_020188b4:
	ldr r0, [pc, #0x11c]
	ldr r1, [r0, #0x28]
	cmp r1, #0
	beq lbl_020188c0
	mov r0, #1
	b lbl_020189be
lbl_020188c0:
	ldr r1, [r0, #0x24]
	cmp r1, #0
	beq lbl_020188ca
	mov r0, #1
	b lbl_020189be
lbl_020188ca:
	ldr r0, [r0, #0x20]
	cmp r0, #0
	beq lbl_020188d4
	mov r0, #1
	b lbl_020189be
lbl_020188d4:
	ldr r0, [r5, #4]
	dcd 0xFF55F7FC
	cmp r0, #0
	beq lbl_020189bc
	mov r6, #0x62
	lsl r6, r6, #2
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xFA3DF006
	cmp r0, #0
	beq lbl_020188f2
	mov r0, #1
	b lbl_020189be
lbl_020188f2:
	add r0, r4, r6
	mov r1, #9
	dcd 0xFA35F006
	cmp r0, #0
	beq lbl_02018902
	mov r0, #1
	b lbl_020189be
lbl_02018902:
	ldr r0, [pc, #0xd4]
	add r0, r4
	dcd 0xFC1BF002
	cmp r0, #0
	beq lbl_02018958
	ldr r0, [pc, #0xc4]
	add r2, r6, #0
	ldr r1, [r0]
	sub r2, #0x4c
	ldr r3, [r1, r2]
	add r2, r2, #4
	mov r0, #0x30
	add r6, r3, #0
	mul r6, r0
	add r0, r5, #0
	add r1, r2
	add r0, #0x38
	add r1, r6
	dcd 0xFB90F014
	ldr r1, [pc, #0xa4]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0xa0]
	add r0, #0x38
	add r1, r6
	mov r3, #0
	dcd 0xFC16F014
	mov r0, #0
	add r4, #8
	str r0, [r5, #0x14]
	mov r1, #1
	add r0, r4, #0
	str r1, [r5, #0x10]
	dcd 0xFDF4F7FA
	mov r0, #0
	b lbl_020189be
lbl_02018958:
	add r0, r6, #0
	sub r0, #0x44
lbl_0201895c:
	add r0, r4
	mov r1, #0x3a
	dcd 0xFF5EF7F8
	cmp r0, #0
	beq lbl_020189bc
	mov r0, #8
	dcd 0xE9EEF068
	cmp r0, #0
	bne lbl_020189bc
	ldr r0, [pc, #0x60]
	add r2, r6, #0
	ldr r1, [r0]
	sub r2, #0x4c
	ldr r3, [r1, r2]
	add r2, r2, #4
	mov r0, #0x30
	add r6, r3, #0
	mul r6, r0
	add r0, r5, #0
	add r1, r2
	add r0, #0x38
	add r1, r6
	dcd 0xFB5EF014
	ldr r1, [pc, #0x40]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x3c]
	add r0, #0x38
	add r1, r6
	mov r3, #0
	dcd 0xFBE4F014
	mov r0, #0
	add r4, #8
	str r0, [r5, #0x14]
	mov r1, #1
	add r0, r4, #0
	str r1, [r5, #0x10]
	dcd 0xFDC2F7FA
	mov r0, #0
	b lbl_020189be
lbl_020189bc:
	mov r0, #1
lbl_020189be:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE9E8F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BD0C4
	dcd 0x020D07D0
	dcd 0x00000424
	dcd 0x000C392E
}

extern "C" asm void func_020189e0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xe4]
	dcd 0xE9D6F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, lr}
	sub sp, #0xc
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_020189fe
	mov r0, #1
	b lbl_02018ab6
lbl_020189fe:
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_02018a08
	mov r0, #1
	b lbl_02018ab6
lbl_02018a08:
	ldr r0, [pc, #0xc0]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	beq lbl_02018a14
	mov r0, #1
	b lbl_02018ab6
lbl_02018a14:
	ldr r0, [pc, #0xb8]
	ldr r0, [r4, r0]
	cmp r0, #0xb
	beq lbl_02018a24
	cmp r0, #0x83
	beq lbl_02018a24
	mov r0, #1
	b lbl_02018ab6
lbl_02018a24:
	ldr r1, [pc, #0xac]
	mov r0, #0x4f
	ldr r2, [r1]
	lsl r0, r0, #2
	ldr r0, [r2, r0]
	cmp r0, #0
	beq lbl_02018a36
	mov r0, #1
	b lbl_02018ab6
lbl_02018a36:
	mov r0, #1
	str r0, [r5, #0x10]
	ldr r1, [r1, #0x28]
	cmp r1, #0
	bne lbl_02018ab6
	ldr r0, [r5, #4]
	dcd 0xFF3DF7FC
	cmp r0, #0
	beq lbl_02018ab4
	ldr r3, [pc, #0x8c]
	add r2, sp, #0
	ldmia r3!, {r0, r1}
	stmia r2!, {r0, r1}
	ldr r0, [r3]
	mov r6, #0
	str r0, [r2]
	mov r0, #0x10
	dcd 0xE976F068
	add r1, r0, #0
	add r0, sp, #0
	mov r2, #3
	dcd 0xFF30F004
	cmp r0, #0
	bne lbl_02018a6e
	mov r6, #1
lbl_02018a6e:
	cmp r0, #1
	bne lbl_02018a7a
	ldr r1, [pc, #0x60]
	mov r2, #1
	str r2, [r1, #0x34]
	mov r6, #0
lbl_02018a7a:
	cmp r0, #2
	bne lbl_02018ab0
	ldr r0, [pc, #0x50]
	ldr r6, [r4, r0]
	add r0, r0, #4
	ldr r4, [r4, r0]
	dcd 0xFAC3F7FC
	add r0, r4, #0
	add r1, r6, #0
	dcd 0xFAF9F7FC
	cmp r0, #0
	beq lbl_02018aa2
	ldr r0, [pc, #0x3c]
	mov r1, #1
	str r1, [r0, #0x38]
	mov r6, #0
	str r6, [r0, #0x34]
	b lbl_02018aac
lbl_02018aa2:
	ldr r0, [pc, #0x30]
	mov r6, #0
	str r6, [r0, #0x38]
	mov r1, #1
	str r1, [r0, #0x34]
lbl_02018aac:
	mov r0, #0
	str r0, [r5, #0x14]
lbl_02018ab0:
	add r0, r6, #0
	b lbl_02018ab6
lbl_02018ab4:
	mov r0, #1
lbl_02018ab6:
	add sp, #0xc
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE96CF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, pc}
	dcd 0x020BD104
	dcd 0x020C768C
	dcd 0x000004D4
lbl_02018ad4:
	dcd 0x020D07D0
	dcd 0x020B4D5C
}

extern "C" asm void func_02018adc(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x164]
	dcd 0xE958F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_02018af8
	mov r0, #1
	b lbl_02018c32
lbl_02018af8:
	ldr r0, [r5, #0x14]
	cmp r0, #0
	bne lbl_02018b02
	mov r0, #1
	b lbl_02018c32
lbl_02018b02:
	ldr r0, [r5, #0x28]
	cmp r0, #0
	beq lbl_02018b0c
	mov r0, #1
	b lbl_02018c32
lbl_02018b0c:
	ldr r0, [r5, #4]
	dcd 0xFEC7F7FC
	cmp r0, #0
	bne lbl_02018b18
	b lbl_02018c30
lbl_02018b18:
	add r0, r4, #0
	add r0, #8
	dcd 0xF910F7FA
	cmp r0, #0
	beq lbl_02018b28
	mov r0, #1
	b lbl_02018c32
lbl_02018b28:
	mov r6, #0x62
	lsl r6, r6, #2
	add r0, r4, r6
	mov r1, #0x14
	dcd 0xF918F006
	cmp r0, #0
	beq lbl_02018bb6
	add r0, r6, #0
	sub r0, #0x44
	add r0, r4
	mov r1, #0x5a
	dcd 0xFE6EF7F8
	cmp r0, #0
	bne lbl_02018bb6
	ldr r0, [r4, #4]
	mov r1, #0
	cmp r0, #0
	bne lbl_02018b60
	mov r0, #2
	dcd 0xE8FAF068
	cmp r0, #0
	bne lbl_02018b5e
	mov r1, #1
	b lbl_02018b60
lbl_02018b5e:
	mov r1, #0
lbl_02018b60:
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_02018b76
	mov r0, #4
	dcd 0xE8EEF068
	cmp r0, #0
	bne lbl_02018b74
	mov r1, #1
	b lbl_02018b76
lbl_02018b74:
	mov r1, #0
lbl_02018b76:
	cmp r1, #0
	beq lbl_02018bb6
	add r0, r4, r6
	mov r1, #0x14
	dcd 0xF993F006
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFC5AF7F9
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFE69F7FA
	ldr r0, [pc, #0xb0]
	mov r3, #5
	ldr r2, [r0]
	lsl r3, r3, #6
	add r1, r2, r3
	sub r3, r3, #4
	ldr r3, [r2, r3]
	mov r2, #0x30
	mul r2, r3
	add r0, r5, #0
	add r1, r2
	ldr r2, [pc, #0x9c]
	add r0, #0x38
	mov r3, #0
	dcd 0xFAE1F014
lbl_02018bb6:
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xF8D3F006
	cmp r0, #0
	beq lbl_02018c30
	ldr r0, [r4, #4]
	mov r1, #0
	cmp r0, #0
	bne lbl_02018bda
	mov r0, #2
	dcd 0xE8BCF068
	cmp r0, #0
	bne lbl_02018bd8
	mov r1, #1
	b lbl_02018bda
lbl_02018bd8:
	mov r1, #0
lbl_02018bda:
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_02018bf0
	mov r0, #4
	dcd 0xE8B2F068
	cmp r0, #0
lbl_02018be8:
	bne lbl_02018bee
	mov r1, #1
	b lbl_02018bf0
lbl_02018bee:
	mov r1, #0
lbl_02018bf0:
	cmp r1, #0
	beq lbl_02018c30
	add r0, r4, r6
	mov r1, #0xa
	dcd 0xF956F006
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	dcd 0xFC1DF7F9
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xFE2CF7FA
	ldr r0, [pc, #0x34]
	mov r1, #5
	ldr r2, [r0]
	lsl r1, r1, #6
	add r3, r2, r1
	sub r1, r1, #4
	ldr r2, [r2, r1]
	mov r1, #0x30
	mul r1, r2
	add r5, #0x38
	add r1, r3
	ldr r2, [pc, #0x28]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFAA4F014
lbl_02018c30:
	mov r0, #1
lbl_02018c32:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xE8AEF061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BD148
	dcd 0x020D07D0
	dcd 0x000C3C14
	dcd 0x000C3C0E
}

extern "C" asm void func_02018c54(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x5c]
	dcd 0xE89CF061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	sub sp, #8
	cmp r1, #0
	bne lbl_02018c70
	mov r0, #1
	b lbl_02018ca2
lbl_02018c70:
	ldr r2, [r0, #4]
	cmp r2, #0x6a
	beq lbl_02018c7e
	mov r1, #0x55
	lsl r1, r1, #2
	cmp r2, r1
	bne lbl_02018ca0
lbl_02018c7e:
	ldr r1, [pc, #0x38]
	mov r3, #5
	ldr r4, [r1]
	mov r2, #0
	str r2, [sp]
	lsl r3, r3, #6
	add r1, r4, r3
	str r2, [sp, #4]
	sub r3, r3, #4
	ldr r4, [r4, r3]
	mov r3, #0x30
	mul r3, r4
	add r1, r3
	ldr r3, [pc, #0x20]
	add r0, #0x38
	dcd 0xFA58F014
lbl_02018ca0:
	mov r0, #1
lbl_02018ca2:
	add sp, #8
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xE876F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	dcd 0x020BD198
	dcd 0x020D07D0
	dcd 0x000AAE66
}

extern "C" asm void func_02018cc0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xd0]
	dcd 0xE866F061
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r4, r2, #0
	cmp r1, #0
lbl_02018cd8:
	bne lbl_02018cde
	mov r0, #0
	b lbl_02018d82
lbl_02018cde:
	cmp r4, #0
	bne lbl_02018ce6
	mov r0, #0
	b lbl_02018d82
lbl_02018ce6:
	cmp r1, r4
	bne lbl_02018cee
	mov r0, #0
	b lbl_02018d82
lbl_02018cee:
	ldr r0, [r5, #4]
	dcd 0xFDB2F7FC
	cmp r0, #0
	beq lbl_02018d80
	mov r7, #0x62
	lsl r7, r7, #2
	add r0, r4, r7
	mov r1, #0xe
	dcd 0xF830F006
	cmp r0, #0
	beq lbl_02018d36
	mov r0, #1
	str r0, [r5, #0x1c]
	ldr r0, [pc, #0x88]
	ldr r2, [r4, #4]
	ldr r1, [r0]
	add r0, r7, #0
	sub r0, #0x4c
	ldr r6, [r1, r0]
	add r0, r4, r7
	mov r1, #0xe
	dcd 0xF916F006
	ldr r1, [pc, #0x74]
	ldr r2, [r1]
	mov r1, #0x30
	mul r1, r6
	add r2, r1
	add r1, r7, #0
	sub r1, #0x30
	str r0, [r2, r1]
	mov r0, #1
	str r0, [r5, #0x10]
	b lbl_02018d82
lbl_02018d36:
	add r0, r7, #0
	sub r0, #0x44
	add r0, r4
	mov r1, #0x45
	dcd 0xFD6FF7F8
	cmp r0, #0
	beq lbl_02018d80
	mov r0, #3
	dcd 0xEFFEF067
	cmp r0, #0
	bne lbl_02018d80
	mov r0, #1
	str r0, [r5, #0x1c]
	ldr r0, [pc, #0x40]
	ldr r2, [r4, #4]
	ldr r1, [r0]
	add r0, r7, #0
	sub r0, #0x4c
	ldr r6, [r1, r0]
	add r0, r4, r7
	mov r1, #0xe
	dcd 0xF920F006
lbl_02018d68:
	ldr r1, [pc, #0x2c]
	ldr r0, [pc, #0x30]
	ldr r2, [r1]
	mov r1, #0x30
	mul r1, r6
	add r2, r1
	add r1, r7, #0
	sub r1, #0x30
	str r0, [r2, r1]
	mov r0, #1
	str r0, [r5, #0x10]
	b lbl_02018d82
lbl_02018d80:
	mov r0, #0
lbl_02018d82:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xE806F061
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BD1E8
	dcd 0x020D07D0
	dcd 0x000C3941
}

extern "C" asm void func_02018da0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x2c0]
	dcd 0xEFF6F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r4, r0, #0
	add r5, r1, #0
	bne lbl_02018dbc
	mov r0, #1
	b lbl_02019128
lbl_02018dbc:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x35
	dcd 0xFD2CF7F8
	cmp r0, #0
	beq lbl_02018dfa
	ldr r0, [r4, #4]
	dcd 0xFAB9F7FC
	cmp r0, #6
	bhi lbl_02018dfa
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r2
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r6, r2
	mov r4, r1
	mov r4, r1
	ldr r1, [pc, #0x274]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF8BFF001
lbl_02018dfa:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x39
	dcd 0xFD0DF7F8
	cmp r0, #0
	beq lbl_02018e26
	ldr r0, [r4, #4]
	dcd 0xFA9AF7FC
	cmp r0, #0x18
	beq lbl_02018e18
	cmp r0, #0x19
	bne lbl_02018e26
lbl_02018e18:
	mov r1, #0xfa
	mov r2, #0x13
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xF8A9F001
lbl_02018e26:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x3b
	dcd 0xFCF7F7F8
	cmp r0, #0
	beq lbl_02018e64
	ldr r0, [r4, #4]
	dcd 0xFA84F7FC
	cmp r0, #6
	bhi lbl_02018e64
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r2
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r6, r2
	mov r4, r1
	mov r4, r1
	ldr r1, [pc, #0x20c]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF88AF001
lbl_02018e64:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x3c
	dcd 0xFCD8F7F8
	cmp r0, #0
	beq lbl_02018ea2
	ldr r0, [r4, #4]
	dcd 0xFA65F7FC
	cmp r0, #0x18
	bgt lbl_02018e94
	bge lbl_02018e98
	cmp r0, #3
	bgt lbl_02018ea2
	cmp r0, #1
	blt lbl_02018ea2
	beq lbl_02018e98
	cmp r0, #2
	beq lbl_02018e98
	cmp r0, #3
	beq lbl_02018e98
	b lbl_02018ea2
lbl_02018e94:
	cmp r0, #0x19
	bne lbl_02018ea2
lbl_02018e98:
	ldr r1, [pc, #0x1cc]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF86BF001
lbl_02018ea2:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x3e
	dcd 0xFCB9F7F8
	cmp r0, #0
	beq lbl_02018ee0
	ldr r0, [r4, #4]
	dcd 0xFA46F7FC
	cmp r0, #6
	bhi lbl_02018ee0
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r2
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r6, r2
	mov r4, r1
	mov r4, r1
	ldr r1, [pc, #0x190]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF84CF001
lbl_02018ee0:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x41
	dcd 0xFC9AF7F8
	cmp r0, #0
	beq lbl_02018f1e
	ldr r0, [r4, #4]
	dcd 0xFA27F7FC
	cmp r0, #0x18
	bgt lbl_02018f10
	bge lbl_02018f14
	cmp r0, #3
	bgt lbl_02018f1e
	cmp r0, #1
	blt lbl_02018f1e
	beq lbl_02018f14
	cmp r0, #2
	beq lbl_02018f14
	cmp r0, #3
	beq lbl_02018f14
	b lbl_02018f1e
lbl_02018f10:
	cmp r0, #0x19
	bne lbl_02018f1e
lbl_02018f14:
	ldr r1, [pc, #0x150]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF82DF001
lbl_02018f1e:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x42
	dcd 0xFC7BF7F8
	cmp r0, #0
	beq lbl_02018f5c
	ldr r0, [r4, #4]
	dcd 0xFA08F7FC
	cmp r0, #6
	bhi lbl_02018f5c
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r2
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r6, r2
	mov r4, r1
	mov r4, r1
	ldr r1, [pc, #0x114]
	add r0, r4, #0
	mov r2, #0
	dcd 0xF80EF001
lbl_02018f5c:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x46
	dcd 0xFC5CF7F8
	cmp r0, #0
	beq lbl_02018f88
	ldr r0, [r4, #4]
	dcd 0xF9E9F7FC
	cmp r0, #1
	beq lbl_02018f7e
	cmp r0, #2
	beq lbl_02018f7e
	cmp r0, #3
	bne lbl_02018f88
lbl_02018f7e:
	ldr r1, [pc, #0xe8]
	add r0, r4, #0
	mov r2, #0
	dcd 0xFFF8F000
lbl_02018f88:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x48
	dcd 0xFC46F7F8
	cmp r0, #0
	beq lbl_02018fc6
	ldr r0, [r4, #4]
	dcd 0xF9D3F7FC
	cmp r0, #6
	bhi lbl_02018fc6
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r6, r2
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r6, r2
	mov r4, r1
	mov r4, r1
	ldr r1, [pc, #0xa8]
	add r0, r4, #0
	mov r2, #0
	dcd 0xFFD9F000
lbl_02018fc6:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x4b
	dcd 0xFC27F7F8
	cmp r0, #0
	beq lbl_02018ff2
	ldr r0, [r4, #4]
	dcd 0xF9B4F7FC
	cmp r0, #0x18
	beq lbl_02018fe4
	cmp r0, #0x19
	bne lbl_02018ff2
lbl_02018fe4:
	mov r1, #0xfa
	mov r2, #4
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xFFC3F000
lbl_02018ff2:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x4c
	dcd 0xFC11F7F8
	cmp r0, #0
	beq lbl_0201901e
	ldr r0, [r4, #4]
	dcd 0xF99EF7FC
	cmp r0, #0x18
	beq lbl_02019010
	cmp r0, #0x19
	bne lbl_0201901e
lbl_02019010:
	mov r1, #0xfa
	mov r2, #0xe
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xFFADF000
lbl_0201901e:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x4d
	dcd 0xFBFBF7F8
	cmp r0, #0
	beq lbl_02019076
	ldr r0, [pc, #0x3c]
	mov r1, #0
	str r1, [r0, #4]
	ldr r0, [r4, #4]
	dcd 0xF985F7FC
	cmp r0, #6
	bhi lbl_02019076
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	mov r2, r5
	mov r4, r1
	mov r4, r1
	mov r4, r1
	mov r2, r5
	mov r4, r1
	mov r4, r1
	ldr r1, [r4, #0x2c]
	ldr r0, [pc, #0x10]
	mov r2, #0
	str r1, [r0, #4]
	ldr r1, [pc, #4]
	b lbl_02019070
	dcd 0x020BD230
	dcd 0x0000029A
	dcd 0x020D07D0
lbl_02019070:
	add r0, r4, #0
	dcd 0xFF81F000
lbl_02019076:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x4f
	dcd 0xFBCFF7F8
	cmp r0, #0
	beq lbl_020190a2
	ldr r0, [r4, #4]
	dcd 0xF95CF7FC
	cmp r0, #0x18
	beq lbl_02019094
	cmp r0, #0x19
	bne lbl_020190a2
lbl_02019094:
	mov r1, #0xfa
	mov r2, #0x18
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xFF6BF000
lbl_020190a2:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x50
	dcd 0xFBB9F7F8
	cmp r0, #0
	beq lbl_020190ce
	ldr r0, [r4, #4]
	dcd 0xF946F7FC
	cmp r0, #0x18
	beq lbl_020190c0
	cmp r0, #0x19
	bne lbl_020190ce
lbl_020190c0:
	mov r1, #0xfa
	mov r2, #0x1d
	add r0, r4, #0
	lsl r1, r1, #2
lbl_020190c8:
	mvn r2, r2
	dcd 0xFF55F000
lbl_020190ce:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x51
	dcd 0xFBA3F7F8
	cmp r0, #0
	beq lbl_020190fa
	ldr r0, [r4, #4]
	dcd 0xF930F7FC
	cmp r0, #0x18
	beq lbl_020190ec
	cmp r0, #0x19
	bne lbl_020190fa
lbl_020190ec:
	mov r1, #0xfa
	mov r2, #0x27
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xFF3FF000
lbl_020190fa:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x52
	dcd 0xFB8DF7F8
	cmp r0, #0
	beq lbl_02019126
	ldr r0, [r4, #4]
	dcd 0xF91AF7FC
	cmp r0, #0x18
	beq lbl_02019118
	cmp r0, #0x19
	bne lbl_02019126
lbl_02019118:
	mov r1, #0xfa
	mov r2, #0x1d
	add r0, r4, #0
	lsl r1, r1, #2
	mvn r2, r2
	dcd 0xFF29F000
lbl_02019126:
	mov r0, #1
lbl_02019128:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEE34F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
}

extern "C" asm void func_02019138(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x9c]
	dcd 0xEE2AF060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r6, r1, #0
	add r5, r0, #0
	add r4, r2, #0
	cmp r6, #0
	bne lbl_02019158
	mov r0, #1
	b lbl_020191c8
lbl_02019158:
	cmp r4, #0
	bne lbl_02019160
	mov r0, #1
	b lbl_020191c8
lbl_02019160:
	ldr r0, [pc, #0x78]
	ldr r1, [r0, #0x28]
	cmp r1, #0
	beq lbl_0201916c
	mov r0, #1
	b lbl_020191c8
lbl_0201916c:
	ldr r1, [r0, #0x24]
	cmp r1, #0
	beq lbl_02019176
	mov r0, #1
	b lbl_020191c8
lbl_02019176:
	ldr r0, [r0, #0x20]
	cmp r0, #0
	beq lbl_02019180
	mov r0, #1
	b lbl_020191c8
lbl_02019180:
	ldr r0, [r5, #4]
	dcd 0xFAEDF7FC
	cmp r0, #0
	beq lbl_020191c6
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0xb
	dcd 0xFDE7F005
	cmp r0, #0
	beq lbl_020191c6
	ldr r0, [r4, #4]
	cmp r0, #0
	bne lbl_020191b0
	mov r0, #8
	dcd 0xEDD2F067
	cmp r0, #2
	bgt lbl_020191b0
	mov r0, #0
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_020191b0:
	ldr r0, [r4, #4]
	cmp r0, #1
	bne lbl_020191c6
	mov r0, #8
	dcd 0xEDC6F067
	cmp r0, #4
	bgt lbl_020191c6
	mov r0, #0
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_020191c6:
	mov r0, #1
lbl_020191c8:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEDE4F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
lbl_020191d8:
	dcd 0x020BD274
	dcd 0x020D07D0
}

extern "C" asm void func_020191e0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x80]
	dcd 0xEDD6F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_020191fc
	mov r0, #1
	b lbl_02019252
lbl_020191fc:
	ldr r0, [r5, #4]
	dcd 0xFAAFF7FC
	cmp r0, #0
	beq lbl_02019250
	mov r7, #0x62
	lsl r7, r7, #2
	add r0, r4, r7
	mov r1, #0x1a
	dcd 0xFDA9F005
	cmp r0, #0
	beq lbl_02019250
	ldr r0, [pc, #0x50]
	mov r2, #1
	ldr r1, [r0]
	add r0, r7, #0
	sub r0, #0x4c
	ldr r6, [r1, r0]
	add r0, r4, r7
	mov r1, #0x1a
	dcd 0xFE91F005
	ldr r1, [pc, #0x3c]
	add r2, r0, #0
	ldr r3, [r1]
	add r1, r7, #0
	sub r1, #0x48
	add r3, r1
	mov r1, #0x30
	add r0, r5, #0
	mul r1, r6
	add r1, r3
	add r0, #0x38
	mov r3, #0
	dcd 0xFF95F013
	mov r0, #0
	str r0, [r5, #0x14]
	mov r1, #1
	str r1, [r5, #0x10]
	b lbl_02019252
lbl_02019250:
	mov r0, #1
lbl_02019252:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xED9EF060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BD2B8
	dcd 0x020D07D0
}

extern "C" asm void func_0201926c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x120]
	dcd 0xED90F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r6, r0, #0
	add r5, r1, #0
	bne lbl_02019288
	mov r0, #1
	b lbl_0201937e
lbl_02019288:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x27
	dcd 0xFAC6F7F8
	cmp r0, #0
	beq lbl_0201929c
	mov r0, #1
	b lbl_0201937e
lbl_0201929c:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x28
	dcd 0xFABCF7F8
	cmp r0, #0
	beq lbl_020192b0
	mov r0, #1
	b lbl_0201937e
lbl_020192b0:
	add r0, r5, #0
	add r0, #8
	dcd 0xF88EF7FA
	cmp r0, #0
	beq lbl_020192c0
	mov r0, #1
	b lbl_0201937e
lbl_020192c0:
	cmp r5, #0
	beq lbl_020192d8
lbl_020192c4:
	mov r0, #0x62
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0xc
	dcd 0xFD4AF005
	cmp r0, #0
	beq lbl_020192d8
	mov r0, #1
	b lbl_0201937e
lbl_020192d8:
	ldr r0, [r6, #4]
	dcd 0xFA87F7FC
	cmp r0, #0
	beq lbl_0201937c
	ldr r0, [r5, #4]
	cmp r0, #0
	bne lbl_02019348
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x13
	dcd 0xFA96F7F8
	cmp r0, #0
	beq lbl_02019312
	mov r0, #3
	dcd 0xED26F067
	cmp r0, #0
	bne lbl_0201930a
	ldr r0, [pc, #0x90]
	mov r1, #1
	str r1, [r0, #0x28]
	b lbl_02019348
lbl_0201930a:
	ldr r0, [pc, #0x88]
	mov r1, #1
	str r1, [r0, #0x1c]
	b lbl_02019348
lbl_02019312:
	add r0, r5, #0
	add r0, #0x4c
	ldrh r0, [r0]
	cmp r0, #4
	bne lbl_02019338
	add r0, r5, #0
	add r0, #0x5a
	ldrb r4, [r0]
	mov r0, #2
	lsl r0, r0, #8
	dcd 0xED10F067
	add r4, #0xf
	cmp r0, r4
	bge lbl_02019348
	ldr r0, [pc, #0x60]
	mov r1, #1
	str r1, [r0, #0x28]
	b lbl_02019348
lbl_02019338:
	mov r0, #0x20
	dcd 0xED06F067
	cmp r0, #0
	bne lbl_02019348
	ldr r0, [pc, #0x50]
	mov r1, #1
	str r1, [r0, #0x28]
lbl_02019348:
	add r5, #8
	add r0, r5, #0
	dcd 0xFBE8F7FA
	cmp r0, #0
	beq lbl_0201935a
	ldr r0, [pc, #0x3c]
	mov r1, #1
	str r1, [r0, #0x28]
lbl_0201935a:
	ldr r0, [r6, #4]
	cmp r0, #0xe7
	bne lbl_02019370
	mov r0, #4
	dcd 0xECF2F067
	cmp r0, #0
	bne lbl_02019370
	ldr r0, [pc, #0x28]
	mov r1, #1
	str r1, [r0, #0x24]
lbl_02019370:
	ldr r0, [r6, #4]
	cmp r0, #0xe8
	bne lbl_0201937c
	ldr r0, [pc, #0x1c]
	mov r1, #1
	str r1, [r0, #0x20]
lbl_0201937c:
	mov r0, #1
lbl_0201937e:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xED08F060
	ldr r0, [sp, #4]
	add sp, #8
lbl_0201938c:
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BD2FC
lbl_02019394:
	dcd 0x020D07D0
}

extern "C" asm void func_02019398(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x5c]
	dcd 0xECFAF060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, lr}
	add r4, r1, #0
	bne lbl_020193b2
	mov r0, #0
	b lbl_020193e6
lbl_020193b2:
	ldr r0, [r0, #4]
	dcd 0xFAEEF7FC
	cmp r0, #0
	beq lbl_020193e4
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x16
	dcd 0xFA2CF7F8
	cmp r0, #0
	beq lbl_020193d0
	mov r0, #1
	b lbl_020193e6
lbl_020193d0:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x25
	dcd 0xFA22F7F8
	cmp r0, #0
	beq lbl_020193e4
	mov r0, #1
	b lbl_020193e6
lbl_020193e4:
	mov r0, #0
lbl_020193e6:
	push {r0}
	ldr r0, [sp, #8]
	push {r0}
	dcd 0xECD4F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, pc}
	mov r8, r8
	dcd 0x020BD340
}

extern "C" asm void func_020193fc(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x90]
	dcd 0xECC8F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r5, r0, #0
	add r4, r1, #0
	bne lbl_02019418
	mov r0, #1
	b lbl_0201947e
lbl_02019418:
	ldr r0, [r5, #4]
	dcd 0xFA63F7FC
	cmp r0, #0
	beq lbl_02019450
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x13
	dcd 0xF9F9F7F8
	cmp r0, #0
	beq lbl_02019450
	ldr r0, [pc, #0x60]
	ldr r1, [r0, #0x28]
	cmp r1, #0
	bne lbl_02019450
	ldr r0, [r0, #0x1c]
	cmp r0, #0
	bne lbl_02019450
	mov r0, #3
	dcd 0xEC82F067
	cmp r0, #0
	bne lbl_02019450
	ldr r0, [pc, #0x48]
	mov r1, #1
	str r1, [r0, #0x1c]
lbl_02019450:
	ldr r0, [pc, #0x40]
	ldr r1, [r0, #0x1c]
	cmp r1, #0
	beq lbl_02019460
	mov r1, #0
	str r1, [r0, #0x1c]
	str r1, [r5, #0x2c]
	str r1, [r5, #0x30]
lbl_02019460:
	add r0, r4, #0
	add r0, #8
	dcd 0xFFB6F7F9
	cmp r0, #0
	beq lbl_0201947c
	add r4, #8
	add r0, r4, #0
	mov r1, #0
	dcd 0xFF9BF7F9
	mov r0, #0
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_0201947c:
	mov r0, #1
lbl_0201947e:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEC88F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	mov r8, r8
	dcd 0x020BD380
	dcd 0x020D07D0
}

extern "C" asm void func_02019498(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x11c]
	dcd 0xEC7AF060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r4, r0, #0
	add r5, r1, #0
	bne lbl_020194b4
	mov r0, #1
	b lbl_020195a6
lbl_020194b4:
	cmp r2, #0
	bne lbl_020194bc
	mov r0, #1
	b lbl_020195a6
lbl_020194bc:
	ldr r0, [r4, #4]
	dcd 0xFA23F7FC
	cmp r0, #0
	beq lbl_020195a4
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x27
	dcd 0xF9A7F7F8
	add r6, r0, #0
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	mov r1, #0x28
	dcd 0xF9A0F7F8
	cmp r6, #0
	bne lbl_020194ec
	cmp r0, #0
	bne lbl_020194ec
	mov r0, #1
	b lbl_020195a6
lbl_020194ec:
	ldr r0, [pc, #0xcc]
	ldr r1, [r0]
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r0, [r1, r0]
	cmp r0, #4
	bhi lbl_02019588
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r4, r3, #2
	mov r0, r1
	mov r6, r4
	lsl r4, r0, #1
	lsl r2, r4, #1
	ldr r1, [r4, #0x2c]
	mov r0, #0x50
	mul r0, r1
	mov r1, #0x64
	dcd 0xED88F7EC
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	mov r0, #0x50
	mul r0, r1
	mov r1, #0x64
	dcd 0xED82F7EC
	str r0, [r4, #0x30]
	b lbl_020195a4
	ldr r1, [r4, #0x2c]
	mov r0, #0x46
	mul r0, r1
	mov r1, #0x64
	dcd 0xED7AF7EC
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	mov r0, #0x46
	mul r0, r1
	mov r1, #0x64
lbl_02019544:
	dcd 0xED72F7EC
	str r0, [r4, #0x30]
	b lbl_020195a4
	ldr r1, [r4, #0x2c]
	mov r0, #0x32
	mul r0, r1
	mov r1, #0x64
	dcd 0xED6AF7EC
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	mov r0, #0x32
	mul r0, r1
	mov r1, #0x64
	dcd 0xED64F7EC
	str r0, [r4, #0x30]
	b lbl_020195a4
	ldr r1, [r4, #0x2c]
	mov r0, #0x1e
	mul r0, r1
	mov r1, #0x64
	dcd 0xED5CF7EC
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	mov r0, #0x1e
	mul r0, r1
	mov r1, #0x64
	dcd 0xED54F7EC
	str r0, [r4, #0x30]
	b lbl_020195a4
lbl_02019588:
	ldr r1, [r4, #0x2c]
	mov r0, #0x14
	mul r0, r1
	mov r1, #0x64
	dcd 0xED4CF7EC
	str r0, [r4, #0x2c]
	ldr r1, [r4, #0x30]
	mov r0, #0x14
	mul r0, r1
	mov r1, #0x64
	dcd 0xED46F7EC
	str r0, [r4, #0x30]
lbl_020195a4:
	mov r0, #1
lbl_020195a6:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEBF4F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BD3C4
	dcd 0x020D07D0
}

extern "C" asm void func_020195c0(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x98]
	dcd 0xEBE6F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r4, r1, #0
	add r6, r2, #0
	bne lbl_020195de
	mov r0, #1
	b lbl_0201964a
lbl_020195de:
	ldr r0, [r5, #4]
	dcd 0xF9A4F7FC
	cmp r0, #0
	beq lbl_02019648
	mov r7, #0x51
	lsl r7, r7, #2
	add r0, r4, r7
	mov r1, #0xf
	dcd 0xF916F7F8
	cmp r0, #0
	beq lbl_02019610
	mov r0, #0x4b
	lsl r0, r0, #4
	ldrb r0, [r6, r0]
	cmp r0, #0
	beq lbl_02019610
	ldr r0, [pc, #0x5c]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	bne lbl_02019610
	mov r0, #2
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_02019610:
	add r0, r4, r7
	mov r1, #0x15
	dcd 0xF904F7F8
	cmp r0, #0
	beq lbl_02019648
	ldr r0, [pc, #0x44]
	ldrb r0, [r6, r0]
	cmp r0, #0
	beq lbl_02019648
	ldr r0, [pc, #0x38]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	bne lbl_02019648
	ldr r1, [r5, #0x2c]
	lsl r0, r1, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	lsl r0, r1, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r5, #0x30]
lbl_02019648:
	mov r0, #1
lbl_0201964a:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEBA2F060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BD408
	dcd 0x020D07D0
	dcd 0x000004AF
}

extern "C" asm void func_02019668(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x60]
	dcd 0xEB92F060
lbl_02019670:
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	add r6, r2, #0
	bne lbl_02019686
	mov r0, #1
	b lbl_020196ba
lbl_02019686:
	ldr r0, [r5, #4]
	dcd 0xF962F7FC
	cmp r0, #0
	beq lbl_020196b8
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0xf
	dcd 0xF8C2F7F8
	cmp r0, #0
	beq lbl_020196b8
	mov r0, #0x4b
	lsl r0, r0, #4
	ldrb r0, [r6, r0]
	cmp r0, #0
	beq lbl_020196b8
	ldr r0, [pc, #0x24]
	ldr r0, [r0, #0x28]
	cmp r0, #0
	bne lbl_020196b8
	mov r0, #2
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_020196b8:
	mov r0, #1
lbl_020196ba:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEB6AF060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	mov r8, r8
	dcd 0x020BD44C
	dcd 0x020D07D0
}

extern "C" asm void func_020196d4(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x154]
	dcd 0xEB5CF060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	add r6, r1, #0
	add r4, r2, #0
	bne lbl_020196f2
	mov r0, #1
	b lbl_0201981a
lbl_020196f2:
	ldr r0, [r5, #4]
	dcd 0xF93EF7FC
	cmp r0, #0
	bne lbl_020196fe
	b lbl_02019818
lbl_020196fe:
	mov r7, #0x51
	lsl r7, r7, #2
	add r0, r6, r7
	mov r1, #0x10
	dcd 0xF88BF7F8
	cmp r0, #0
	beq lbl_02019788
	mov r0, #8
	dcd 0xEB1AF067
	cmp r0, #0
	bne lbl_02019782
	ldr r0, [pc, #0x114]
	ldr r0, [r0, #0x18]
	cmp r0, #0
	bne lbl_02019782
	add r0, r4, #0
	ldr r2, [pc, #0x110]
	add r0, #8
	mov r1, #2
	dcd 0xFDCAF7F8
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	dcd 0xFCDFF7F9
	add r0, r4, #0
	dcd 0xFBA4F00D
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xF935F7FA
	ldr r1, [pc, #0xe8]
	add r0, r5, #0
	ldr r2, [r1]
	sub r1, r7, #4
	add r0, #0x38
lbl_02019750:
	add r1, r2
	dcd 0xFC7BF013
	ldr r1, [pc, #0xd8]
	add r0, r5, #0
	ldr r2, [r1]
	sub r1, r7, #4
	add r1, r2
	ldr r2, [pc, #0xd4]
	add r0, #0x38
	mov r3, #0
	dcd 0xFD03F013
	ldr r1, [pc, #0xc4]
	add r5, #0x38
	ldr r2, [r1]
	sub r1, r7, #4
	add r1, r2
	ldr r2, [pc, #0xc4]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFCFDF013
	mov r0, #0
	b lbl_0201981a
lbl_02019782:
	mov r0, #1
	str r0, [r5, #0x2c]
	str r0, [r5, #0x30]
lbl_02019788:
	add r0, r6, r7
	mov r1, #0x26
	dcd 0xF848F7F8
	cmp r0, #0
	beq lbl_02019818
	ldr r0, [pc, #0x98]
	ldr r0, [r0, #0x18]
	cmp r0, #0
	bne lbl_02019818
	mov r0, #8
	dcd 0xEAD4F067
	cmp r0, #0
	bne lbl_02019818
	add r6, #8
	add r0, r6, #0
	mov r1, #1
	dcd 0xFDDEF7F9
	add r0, r4, #0
	ldr r2, [pc, #0x80]
	add r0, #8
	mov r1, #2
	dcd 0xFD82F7F8
	add r0, r4, #0
	add r0, #8
	mov r1, #0
	dcd 0xFC97F7F9
	add r0, r4, #0
	dcd 0xFB5CF00D
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xF8EDF7FA
	ldr r1, [pc, #0x58]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r0, #0x38
	add r1, r2
	dcd 0xFC32F013
	ldr r1, [pc, #0x44]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x40]
	add r0, #0x38
	mov r3, #0
	dcd 0xFCB9F013
	ldr r1, [pc, #0x30]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x30]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFCB2F013
	mov r0, #0
	b lbl_0201981a
lbl_02019818:
	mov r0, #1
lbl_0201981a:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEABAF060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020BD490
	dcd 0x020D07D0
	dcd 0xFFFFFC01
	dcd 0x000C3AC9
	dcd 0x000C3A6D
}

extern "C" asm void func_02019840(void)
{
	push {r0, lr}
	ldr r0, [pc, #0xc4]
	dcd 0xEAA6F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r6, r0, #0
	add r5, r1, #0
	add r4, r2, #0
	bne lbl_0201985e
	mov r0, #1
	b lbl_020198f8
lbl_0201985e:
	ldr r0, [r6, #4]
	dcd 0xF8AAF7FC
	cmp r0, #0
	beq lbl_020198f6
	mov r7, #0x51
	lsl r7, r7, #2
	add r0, r5, r7
	mov r1, #0x1c
	dcd 0xFFD6F7F7
	cmp r0, #0
	beq lbl_020198b0
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r1, [r4, r0]
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r2, r0, #2
	beq lbl_020198b0
	add r0, r5, #0
	add r0, #8
	mov r1, #2
	dcd 0xFD17F7F8
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFDF0F7F9
	ldr r1, [pc, #0x6c]
	add r0, r6, #0
	ldr r2, [r1]
	sub r1, r7, #4
	add r1, r2
	ldr r2, [pc, #0x68]
	add r0, #0x38
	mov r3, #0
	dcd 0xFC64F013
lbl_020198b0:
	add r0, r5, r7
	mov r1, #0x2a
lbl_020198b4:
	dcd 0xFFB4F7F7
	cmp r0, #0
	beq lbl_020198f6
	mov r0, #0xef
	lsl r0, r0, #2
	ldr r1, [r4, r0]
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r2, r0, #2
	beq lbl_020198f6
	add r5, #8
	add r0, r5, #0
	mov r1, #2
	dcd 0xFCF5F7F8
	add r4, #8
	add r0, r4, #0
	mov r1, #1
	dcd 0xFDCEF7F9
	ldr r1, [pc, #0x28]
	add r6, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x20]
	add r0, r6, #0
	mov r3, #0
	dcd 0xFC41F013
lbl_020198f6:
	mov r0, #1
lbl_020198f8:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEA4CF060
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BD4D4
	dcd 0x020D07D0
	dcd 0x000C3CA6
}

extern "C" asm void func_02019914(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x20]
	dcd 0xEA3CF060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	mov r0, #1
	push {r0}
	push {lr}
	dcd 0xEA36F060
	pop {r0}
	mov lr, r0
	pop {r0}
	bx lr
	mov r8, r8
	dcd 0x020BD51C
}

extern "C" asm void func_0201993c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x320]
	dcd 0xEA28F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r4, r1, #0
	add r5, r0, #0
	add r6, r2, #0
	cmp r4, #0
	bne lbl_0201995c
	mov r0, #1
	b lbl_02019d1e
lbl_0201995c:
	cmp r6, #0
	bne lbl_02019964
	mov r0, #1
	b lbl_02019d1e
lbl_02019964:
	dcd 0xFC70F7F7
	cmp r0, #0
	beq lbl_02019970
	mov r0, #1
	b lbl_02019d1e
lbl_02019970:
	ldr r0, [r5, #4]
	dcd 0xFFFFF7FB
	cmp r0, #0
	beq lbl_02019a06
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x1d
	dcd 0xFF4DF7F7
	cmp r0, #0
	beq lbl_02019a06
	ldr r0, [r5, #0x30]
	cmp r0, #0
	beq lbl_02019a06
	mov r0, #8
	dcd 0xE9DAF067
	cmp r0, #0
	bne lbl_02019a06
	mov r0, #0x22
	dcd 0xFE14F7FB
	add r7, r0, #0
	add r0, r6, #0
	add r0, #8
	dcd 0xFC51F7F8
	cmp r0, #0
	beq lbl_02019a06
	cmp r7, #0
	ble lbl_02019a06
	add r0, r6, #0
	add r0, #8
	dcd 0xFC49F7F8
	cmp r0, r7
	bge lbl_020199c8
	add r0, r6, #0
	add r0, #8
	dcd 0xFC43F7F8
	add r7, r0, #0
lbl_020199c8:
	add r0, r6, #0
	add r0, #8
	mov r1, #2
	neg r2, r7
	dcd 0xFCF2F7F8
	add r0, r4, #0
	add r0, #8
	mov r1, #2
	add r2, r7, #0
	dcd 0xFCECF7F8
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFD69F7F9
	mov r0, #1
	lsl r0, r0, #0xa
	str r7, [r6, r0]
	ldr r1, [pc, #0x270]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x268]
	add r0, #0x38
	mov r3, #0
	dcd 0xFBB9F013
lbl_02019a06:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0x3d
	dcd 0xFF07F7F7
	cmp r0, #0
	beq lbl_02019a70
	ldr r0, [r5, #0x2c]
	cmp r0, #0
	beq lbl_02019a70
	mov r0, #8
	dcd 0xE994F067
	cmp r0, #0
	bne lbl_02019a70
	cmp r4, r6
	beq lbl_02019a70
	ldr r0, [r5, #4]
	dcd 0xFD4CF7FB
	add r7, r0, #0
	beq lbl_02019a70
	add r0, r6, #0
	add r0, #8
	mov r1, #2
	add r2, r7, #0
	dcd 0xFCBCF7F8
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFE83F7F9
	mov r0, #1
	lsl r0, r0, #0xa
	str r7, [r6, r0]
	ldr r0, [pc, #0x210]
	mov r3, #5
	ldr r2, [r0]
	lsl r3, r3, #6
	add r1, r2, r3
	sub r3, r3, #4
	ldr r3, [r2, r3]
	mov r2, #0x30
	mul r2, r3
	add r0, r5, #0
	add r1, r2
	ldr r3, [pc, #0x204]
	add r0, #0x38
	mov r2, #0
	dcd 0xFB84F013
lbl_02019a70:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0x3f
	dcd 0xFED2F7F7
	cmp r0, #0
	beq lbl_02019b42
	ldr r0, [r5, #0x2c]
	cmp r0, #0
	beq lbl_02019b42
	mov r0, #2
	dcd 0xE95EF067
	cmp r0, #0
	bne lbl_02019b42
	ldr r0, [r5, #4]
	dcd 0xFE65F7FB
	cmp r0, #0
	beq lbl_02019b42
	ldr r0, [r5, #4]
	dcd 0xFDC6F7FB
	cmp r0, #1
	bne lbl_02019b42
	add r0, r4, #0
	add r0, #8
	dcd 0xF94AF7F9
	cmp r0, #0
	bne lbl_02019b42
	ldr r2, [r5, #0x2c]
	add r0, r4, #0
	neg r2, r2
	asr r3, r2, #1
	lsr r3, r3, #0x1e
	add r3, r2
	add r0, #8
	mov r1, #2
	asr r2, r3, #2
	dcd 0xFBFDF7F8
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFD16F7F9
	add r0, r6, #0
	dcd 0xF9CFF00D
	ldr r1, [r5, #0x2c]
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r0, r0, #2
	beq lbl_02019b42
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFDECF7F9
	ldr r1, [r5, #0x2c]
	mov r2, #0x4f
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r1, r0, #2
	mov r0, #1
	lsl r0, r0, #0xa
	str r1, [r4, r0]
	ldr r0, [pc, #0x164]
	lsl r2, r2, #2
	ldr r1, [r0]
	mov r3, #0x30
	ldr r0, [r1, r2]
	add r2, r2, #4
	add r7, r0, #0
	mul r7, r3
	add r1, r2
	add r0, r5, #0
	ldr r2, [pc, #0x15c]
	add r0, #0x38
	add r1, r7
	mov r3, #0
	dcd 0xFB2DF013
	add r0, r4, #0
	add r0, #8
	dcd 0xF90DF7F9
	cmp r0, #0
	beq lbl_02019b42
	ldr r1, [pc, #0x138]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	ldr r2, [pc, #0x13c]
	add r0, #0x38
	add r1, r7
	mov r3, #0
	dcd 0xFB1BF013
lbl_02019b42:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r4
	mov r1, #0x14
	dcd 0xFE69F7F7
	cmp r0, #0
	beq lbl_02019c08
	ldr r0, [r5, #4]
	dcd 0xFEEAF7FB
	cmp r0, #0
	beq lbl_02019c08
	ldr r0, [r5, #0x30]
	cmp r0, #0
	beq lbl_02019c08
	ldr r0, [r5, #4]
	dcd 0xFD62F7FB
	cmp r0, #1
	bne lbl_02019c08
	ldr r2, [r5, #0x30]
	add r0, r4, #0
	neg r2, r2
	asr r3, r2, #1
	lsr r3, r3, #0x1e
	add r3, r2
	add r0, #8
	mov r1, #2
	asr r2, r3, #2
	dcd 0xFB9FF7F8
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFCB8F7F9
	add r0, r6, #0
	dcd 0xF971F00D
	ldr r1, [r5, #0x30]
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r0, r0, #2
	beq lbl_02019c08
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFDF4F7F9
	ldr r1, [r5, #0x30]
	asr r0, r1, #1
	lsr r0, r0, #0x1e
	add r0, r1
	asr r1, r0, #2
	mov r0, #1
	lsl r0, r0, #0xa
	str r1, [r4, r0]
	ldr r0, [pc, #0xa8]
	ldr r1, [r0]
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r7, [r1, r0]
	add r0, r4, #0
	add r0, #8
	dcd 0xF8BBF7F9
	cmp r0, #0
	beq lbl_02019bec
	ldr r1, [pc, #0x94]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	mov r2, #0x30
	mul r2, r7
	add r1, r2
	ldr r2, [pc, #0x94]
	add r0, #0x38
	mov r3, #0
	dcd 0xFAC7F013
	b lbl_02019c08
lbl_02019bec:
	ldr r1, [pc, #0x74]
	add r0, r5, #0
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r1, r2
	mov r2, #0x30
	mul r2, r7
	add r1, r2
	ldr r2, [pc, #0x7c]
	add r0, #0x38
	mov r3, #0
	dcd 0xFAB8F013
lbl_02019c08:
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r6
	mov r1, #0x4d
	dcd 0xFE06F7F7
	cmp r0, #0
	bne lbl_02019c1a
	b lbl_02019d1c
lbl_02019c1a:
	ldr r0, [r5, #4]
	dcd 0xFF76F7FB
	cmp r0, #1
	bne lbl_02019d1c
	ldr r0, [r5, #4]
	dcd 0xFD01F7FB
	cmp r0, #1
	bne lbl_02019d1c
	ldr r0, [r5, #0x2c]
	cmp r0, #0
	beq lbl_02019d1c
	add r0, r4, #0
	add r0, #8
	dcd 0xF882F7F9
	cmp r0, #0
	bne lbl_02019d1c
	ldr r0, [r5, #4]
	dcd 0xFB7FF7FB
	add r7, r0, #0
	ldr r0, [r5, #4]
	dcd 0xFBE9F7FB
	add r2, r0, #0
	mov r0, #0x5a
	lsl r0, r0, #2
	add r0, r4
	add r1, r7, #0
	dcd 0xFCE0F7FA
	ldr r1, [pc, #4]
	b lbl_02019c80
	dcd 0x020BD564
	dcd 0x020D07D0
	dcd 0x000C3A8B
	dcd 0x000C3AC7
	dcd 0x000C3CB4
	dcd 0x000C3CB6
	dcd 0x000C3CBA
	dcd 0x000C3CB8
lbl_02019c80:
	ldr r1, [r1, #4]
	mul r0, r1
	mov r1, #0xfa
	lsl r1, r1, #2
	dcd 0xE9D0F7EC
	add r7, r0, #0
	neg r3, r7
	asr r2, r3, #1
	lsr r2, r2, #0x1e
	add r0, r4, #0
	add r2, r3
	add r0, #8
	mov r1, #2
	asr r2, r2, #2
	dcd 0xFB0FF7F8
	add r0, r6, #0
	add r0, #8
	mov r1, #1
	dcd 0xFC28F7F9
	add r0, r6, #0
	dcd 0xF8E1F00D
	asr r0, r7, #1
lbl_02019cb4:
	lsr r0, r0, #0x1e
	add r0, r7
	asr r6, r0, #2
	beq lbl_02019d1c
	add r0, r4, #0
	add r0, #8
	mov r1, #1
	dcd 0xFCFFF7F9
	mov r0, #1
	lsl r0, r0, #0xa
	str r6, [r4, r0]
	ldr r0, [pc, #0x60]
	add r4, #8
	ldr r1, [r0]
	mov r0, #0x4f
	lsl r0, r0, #2
	ldr r6, [r1, r0]
	add r0, r4, #0
	dcd 0xF831F7F9
	cmp r0, #0
	beq lbl_02019d00
	ldr r1, [pc, #0x4c]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r2, r1
	mov r1, #0x30
	mul r1, r6
	add r1, r2
	ldr r2, [pc, #0x3c]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFA3DF013
	b lbl_02019d1c
lbl_02019d00:
	ldr r1, [pc, #0x2c]
	add r5, #0x38
	ldr r2, [r1]
	mov r1, #5
	lsl r1, r1, #6
	add r2, r1
	mov r1, #0x30
	mul r1, r6
	add r1, r2
	ldr r2, [pc, #0x24]
	add r0, r5, #0
	mov r3, #0
	dcd 0xFA2EF013
lbl_02019d1c:
	mov r0, #1
lbl_02019d1e:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xE838F060
	ldr r0, [sp, #4]
	add sp, #8
lbl_02019d2c:
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x020D07D0
	dcd 0x000C3CB6
	dcd 0x000C3CB4
}

extern "C" asm void func_02019d3c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x20]
	dcd 0xE828F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	cmp r1, #0
	push {r0}
	push {lr}
	dcd 0xE822F060
	pop {r0}
	mov lr, r0
	pop {r0}
	bx lr
	mov r8, r8
	dcd 0x020BD5A8
}

extern "C" asm void func_02019d64(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x1b0]
	dcd 0xE814F060
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r5, r0, #0
	ldr r0, [r5, #0x10]
	cmp r0, #0
	bne lbl_02019d80
	b lbl_02019f08
lbl_02019d80:
	ldr r0, [r5, #4]
	sub r0, #0xc4
	cmp r0, #3
	bhi lbl_02019db0
	ldr r1, [pc, #0x190]
	mov r0, #0
	ldr r3, [r1]
	mov r1, #0x4d
	lsl r1, r1, #2
	ldr r2, [r3, r1]
	add r1, r0, #0
	cmp r2, #0
	ble lbl_02019dac
	mov r4, #0xef
	lsl r4, r4, #2
lbl_02019d9e:
	ldr r6, [r3, #4]
	add r1, r1, #1
	ldr r6, [r6, r4]
	add r3, r3, #4
	add r0, r6
	cmp r1, r2
	blt lbl_02019d9e
lbl_02019dac:
	cmp r0, #0
	beq lbl_02019dd4
lbl_02019db0:
	dcd 0xFA4AF7F7
	cmp r0, #0
	beq lbl_02019dd6
	ldr r0, [r5, #4]
	cmp r0, #0xca
	beq lbl_02019dce
	cmp r0, #0xcb
	beq lbl_02019dce
	cmp r0, #0xcc
	beq lbl_02019dce
	cmp r0, #0xcd
	beq lbl_02019dce
	cmp r0, #0xd0
	bne lbl_02019dd6
lbl_02019dce:
	ldr r0, [r5, #0x14]
	cmp r0, #0
	bne lbl_02019dd6
lbl_02019dd4:
	b lbl_02019f08
lbl_02019dd6:
	ldr r1, [pc, #0x144]
	mov r0, #2
	ldr r2, [r1, #8]
	tst r0, r2
	beq lbl_02019dea
	ldr r2, [r1, #8]
	mov r0, #2
	bic r2, r0
	str r2, [r1, #8]
	b lbl_02019f08
lbl_02019dea:
	ldr r0, [r5, #4]
	dcd 0xFB6CF7FB
	add r4, r0, #0
	ldr r0, [pc, #0x128]
	ldr r0, [r0]
	ldr r1, [r0]
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r1
	mov r1, #0x11
	dcd 0xFD0EF7F7
	cmp r0, #0
	beq lbl_02019e18
	ldr r1, [r5, #4]
	cmp r1, #0x47
	beq lbl_02019e16
	ldr r0, [pc, #0x110]
	sub r0, r1, r0
	cmp r0, #1
	bhi lbl_02019e18
lbl_02019e16:
	mov r4, #3
lbl_02019e18:
	cmp r4, #0xff
	bne lbl_02019e4e
	ldr r0, [pc, #0xfc]
	ldr r2, [pc, #0x104]
	ldr r0, [r0]
	mov r1, #1
	ldr r0, [r0]
	add r0, #8
	dcd 0xFAC6F7F8
	ldr r0, [pc, #0xec]
	mov r1, #2
	ldr r0, [r0]
	mov r2, #0
	ldr r0, [r0]
	add r0, #8
	dcd 0xFABEF7F8
	ldr r0, [pc, #0xdc]
	mov r1, #3
	ldr r0, [r0]
	mov r2, #0
	ldr r0, [r0]
	add r0, #8
	dcd 0xFAB6F7F8
	b lbl_02019e82
lbl_02019e4e:
	cmp r4, #0
	beq lbl_02019e82
	ldr r0, [pc, #0xc8]
	mov r1, #1
	ldr r0, [r0]
	neg r2, r4
	ldr r0, [r0]
	add r0, #8
	dcd 0xFAABF7F8
	ldr r0, [pc, #0xb8]
	mov r1, #2
	ldr r0, [r0]
	mov r2, #0
	ldr r0, [r0]
	add r0, #8
	dcd 0xFAA3F7F8
	ldr r0, [pc, #0xa8]
	mov r1, #3
	ldr r0, [r0]
	mov r2, #0
	ldr r0, [r0]
	add r0, #8
	dcd 0xFA9BF7F8
lbl_02019e82:
	ldr r0, [r5, #4]
	cmp r0, #0x13
	bne lbl_02019f08
	ldr r0, [pc, #0x9c]
	dcd 0xF8A9F7F5
	ldr r0, [pc, #0x98]
	dcd 0xFBB4F7F5
	add r7, r0, #0
	mov r5, #0
	cmp r7, #0
	ble lbl_02019f08
	neg r6, r4
	ldr r4, [pc, #0x88]
lbl_02019ea0:
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFF4CF7F4
	cmp r0, #0
	bne lbl_02019f02
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFF1CF7F4
	add r0, #0x4c
	ldrh r0, [r0]
	cmp r0, #1
	beq lbl_02019f02
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFF14F7F4
	add r0, #0x4c
	ldrh r0, [r0]
	cmp r0, #2
	beq lbl_02019f02
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFF0CF7F4
	add r0, #8
	mov r1, #1
	add r2, r6, #0
	dcd 0xFA6DF7F8
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFF03F7F4
	add r0, #8
	mov r1, #2
	mov r2, #0
	dcd 0xFA64F7F8
	add r0, r4, #0
	add r1, r5, #0
	dcd 0xFEFAF7F4
	add r0, #8
	mov r1, #3
	mov r2, #0
	dcd 0xFA5BF7F8
lbl_02019f02:
	add r5, r5, #1
	cmp r5, r7
	blt lbl_02019ea0
lbl_02019f08:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xEF44F05F
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	dcd 0x020BD5E4
	dcd 0x020D07D0
	dcd 0x000001A1
	dcd 0xFFFFFC00
	dcd 0x020C7B1C
}

extern "C" asm void func_02019f2c(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x44]
	dcd 0xEF30F05F
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, lr}
	add r4, r0, #0
	add r5, r1, #0
	beq lbl_02019f64
	ldr r0, [r4, #4]
	dcd 0xFB2FF7FB
	str r0, [r4, #0x2c]
	ldr r0, [r4, #4]
	dcd 0xFB3BF7FB
	str r0, [r4, #0x30]
	ldr r0, [r5, #4]
	cmp r0, #0
	bne lbl_02019f60
	ldr r0, [r4, #0x2c]
	str r0, [r4, #0x34]
	b lbl_02019f64
lbl_02019f60:
	ldr r0, [r4, #0x30]
	str r0, [r4, #0x34]
lbl_02019f64:
	push {r0}
	ldr r0, [sp, #0xc]
	push {r0}
	dcd 0xEF16F05F
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, pc}
	dcd 0x020BD604
}

extern "C" asm void func_02019f78(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x5c]
	dcd 0xEF0AF05F
lbl_02019f80:
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r4, r5, r6, lr}
	add r5, r0, #0
	add r4, r1, #0
	ldr r1, [r5, #0x2c]
	add r6, r2, #0
	add r0, r1, #0
	mov r1, #0xfa
	mul r0, r4
	lsl r1, r1, #2
	dcd 0xE848F7EC
	add r0, r6
	str r0, [r5, #0x2c]
	ldr r1, [r5, #0x30]
	add r0, r1, #0
	mov r1, #0xfa
	mul r0, r4
	lsl r1, r1, #2
	dcd 0xE83EF7EC
	add r0, r6
	str r0, [r5, #0x30]
	ldr r0, [r5, #0x2c]
	cmp r0, #0
	bge lbl_02019fbe
	mov r0, #0
	str r0, [r5, #0x2c]
lbl_02019fbe:
	ldr r0, [r5, #0x30]
	cmp r0, #0
	bge lbl_02019fc8
	mov r0, #0
	str r0, [r5, #0x30]
lbl_02019fc8:
	push {r0}
	ldr r0, [sp, #0x10]
	push {r0}
	dcd 0xEEE4F05F
	ldr r0, [sp, #4]
	add sp, #8
	pop {r4, r5, r6, pc}
	dcd 0x020BD644
}

extern "C" asm void func_02019fdc(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x320]
	dcd 0xEED8F05F
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	push {r3, r4, r5, r6, r7, lr}
	add r4, r0, #0
	add r5, r1, #0
	ldr r1, [r4, #4]
	add r6, r2, #0
	cmp r1, #0x47
	beq lbl_0201a002
	ldr r0, [pc, #0x308]
	sub r0, r1, r0
	cmp r0, #1
	bhi lbl_0201a02a
lbl_0201a002:
	ldr r0, [pc, #0x304]
	mov r1, #0x25
	ldr r0, [r0, #0x28]
	ldr r7, [r4, #0x34]
	cmp r0, #0
	mov r0, #0x51
	lsl r0, r0, #2
	add r0, r5
	dcd 0xFC05F7F7
	cmp r0, #0
	beq lbl_0201a026
	mov r0, #0x4b
	mul r0, r7
	mov r1, #0x64
	dcd 0xE804F7EC
	add r7, r0, #0
lbl_0201a026:
	str r7, [r4, #0x2c]
	str r7, [r4, #0x30]
lbl_0201a02a:
	ldr r0, [r4, #4]
	cmp r0, #0x6c
	bne lbl_0201a050
	add r0, r5, #0
	add r0, #0x5a
	ldrb r1, [r0]
	mov r2, #0xb4
	lsl r0, r1, #1
	add r0, r1
	add r0, #0xa
	mov r1, #0
	dcd 0xEF2EF7EE
	mov r1, #0xf
	add r2, r1, #0
	dcd 0xFF60F7FA
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a050:
	ldr r0, [r4, #4]
	cmp r0, #0x6d
	bne lbl_0201a074
	add r0, r5, #0
	add r0, #0x5a
	ldrb r0, [r0]
	mov r1, #0
	mov r2, #0x5f
	lsl r0, r0, #1
	add r0, #0x1e
lbl_0201a064:
	dcd 0xEF1CF7EE
	mov r1, #0xa
	add r2, r1, #0
	dcd 0xFF4EF7FA
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a074:
	ldr r0, [r4, #4]
	cmp r0, #0x7f
	bne lbl_0201a08a
	add r0, r5, #0
	add r0, #8
	dcd 0xF8E5F7F8
	lsl r1, r0, #1
	add r0, r1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a08a:
	ldr r0, [r4, #4]
	cmp r0, #0x82
	bne lbl_0201a0aa
	add r0, r6, #0
	add r0, #8
	dcd 0xF842F7F8
	mov r1, #0x5f
	mul r1, r0
	add r0, r1, #0
	mov r1, #0x64
	dcd 0xEFC4F7EB
	add r0, r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a0aa:
	ldr r0, [r4, #4]
	cmp r0, #0x85
	bne lbl_0201a0bc
	ldr r1, [r4, #0x34]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a0bc:
	ldr r0, [r4, #4]
	cmp r0, #0x86
	bne lbl_0201a0ea
	mov r0, #8
	dcd 0xEE40F066
	cmp r0, #3
	bge lbl_0201a0e4
	add r0, r5, #0
	add r0, #8
	mov r1, #0
	dcd 0xFA37F7F8
	mov r1, #5
	add r2, r1, #0
	dcd 0xFF17F7FA
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
	b lbl_0201a0ea
lbl_0201a0e4:
	mov r0, #0
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a0ea:
	ldr r0, [r4, #4]
	cmp r0, #0x89
	bne lbl_0201a102
	ldr r1, [r4, #0x34]
	lsl r0, r1, #1
	add r0, r1
	ldr r1, [r4, #0x20]
	add r1, r1, #1
	dcd 0xEF98F7EB
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a102:
	ldr r0, [r4, #4]
	cmp r0, #0x8c
	bne lbl_0201a122
	ldr r1, [pc, #0x200]
	ldr r0, [r4, #0x34]
	ldr r2, [r6, r1]
	mov r1, #1
	tst r1, r2
	beq lbl_0201a11e
	lsl r1, r0, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
lbl_0201a11e:
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a122:
	ldr r0, [r4, #4]
	cmp r0, #0x8e
	bne lbl_0201a144
	ldr r1, [pc, #0x1e0]
	ldr r0, [r4, #0x34]
	ldr r2, [r6, r1]
	mov r1, #2
	tst r1, r2
	beq lbl_0201a140
	lsl r1, r0, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	add r0, r0, #1
lbl_0201a140:
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a144:
	ldr r0, [r4, #4]
	cmp r0, #0x94
	bne lbl_0201a1c2
	ldr r0, [r4, #0x24]
	ldr r1, [r4, #0x34]
	cmp r0, #0xa
	bhi lbl_0201a1b8
	add r0, r0
	add r0, pc
	ldrh r0, [r0, #6]
	lsl r0, r0, #0x10
	asr r0, r0, #0x10
	add pc, r0
	lsl r0, r3, #1
	mov r4, r2
	mov r2, r4
	mov r0, r6
	mov r6, r7
	lsl r4, r1, #1
	lsl r4, r1, #1
	lsl r4, r1, #1
	lsl r4, r1, #1
	lsl r4, r1, #1
	lsl r4, r1, #1
	mov r0, #0x50
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF58F7EB
	add r1, r0, #0
	b lbl_0201a1b8
	mov r0, #0x46
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF50F7EB
	add r1, r0, #0
	b lbl_0201a1b8
	mov r0, #0x32
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF4AF7EB
	add r1, r0, #0
	b lbl_0201a1b8
	mov r0, #0x1e
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF42F7EB
	add r1, r0, #0
	b lbl_0201a1b8
	mov r0, #0x14
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF3CF7EB
	add r1, r0, #0
lbl_0201a1b8:
	ldr r0, [r4, #0x24]
	add r0, r0, #1
	str r0, [r4, #0x24]
	str r1, [r4, #0x2c]
	str r1, [r4, #0x30]
lbl_0201a1c2:
	ldr r0, [r4, #4]
	cmp r0, #0x95
	bne lbl_0201a1d8
	ldr r1, [r4, #0x34]
	lsl r0, r1, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a1d8:
	ldr r0, [r4, #4]
	cmp r0, #0xe9
	bne lbl_0201a1e4
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a1e4:
	ldr r0, [r4, #4]
	cmp r0, #0xea
	bne lbl_0201a1f0
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a1f0:
	ldr r0, [r4, #4]
	cmp r0, #0xeb
	bne lbl_0201a1fc
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a1fc:
	ldr r0, [r4, #4]
	cmp r0, #0xed
	bne lbl_0201a212
	ldr r1, [r4, #0x34]
	mov r0, #0x7d
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF10F7EB
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a212:
	ldr r0, [r4, #4]
	cmp r0, #0xee
	bne lbl_0201a228
	ldr r1, [r4, #0x34]
	mov r0, #0x7d
	mul r0, r1
	mov r1, #0x64
	dcd 0xEF04F7EB
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a228:
	ldr r0, [r4, #4]
	cmp r0, #0xef
	bne lbl_0201a23e
	ldr r1, [r4, #0x34]
	mov r0, #0x7d
	mul r0, r1
	mov r1, #0x64
	dcd 0xEEFAF7EB
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a23e:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0xcc]
	cmp r1, r0
	bne lbl_0201a254
	ldr r1, [r4, #0x34]
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	add r0, #0x96
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a254:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0xbc]
	cmp r1, r0
	bne lbl_0201a276
	add r0, r6, #0
	add r0, #8
	dcd 0xFF5CF7F7
	mov r1, #0x5f
	mul r1, r0
	add r0, r1, #0
	mov r1, #0x64
	dcd 0xEEDEF7EB
	add r0, r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a276:
	mov r0, #0x4f
	ldr r1, [r4, #4]
	lsl r0, r0, #2
	cmp r1, r0
	bne lbl_0201a286
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a286:
	ldr r0, [r4, #4]
	cmp r0, #0xf0
	bne lbl_0201a292
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a292:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x80]
	cmp r1, r0
	bne lbl_0201a2c2
	ldr r2, [pc, #0x6c]
	ldr r0, [r2, #0x10]
	cmp r0, #0
	beq lbl_0201a2bc
	ldr r1, [pc, #0x68]
	ldr r3, [r6, r1]
	mov r1, #2
	tst r1, r3
	bne lbl_0201a2b4
	str r0, [r4, #0x2c]
	ldr r0, [r2, #0x10]
	str r0, [r4, #0x30]
	b lbl_0201a2c2
lbl_0201a2b4:
	mov r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
	b lbl_0201a2c2
lbl_0201a2bc:
	mov r0, #0
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a2c2:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x54]
	cmp r1, r0
	bne lbl_0201a2d0
	ldr r0, [r4, #0x34]
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a2d0:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x4c]
	cmp r1, r0
	bne lbl_0201a2e4
	add r0, r5, #0
	add r1, r6, #0
	dcd 0xFDECF7FA
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a2e4:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x3c]
	cmp r1, r0
	bne lbl_0201a2fa
	add r0, r5, #0
	add r0, #8
	mov r1, #0
	dcd 0xF927F7F8
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a2fa:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x28]
	b lbl_0201a32c
	dcd 0x020BD674
	dcd 0x000001A1
	dcd 0x020D07D0
	dcd 0x000004F4
	dcd 0x0000012F
	dcd 0x00000132
	dcd 0x00000173
	dcd 0x000001E9
	dcd 0x00000216
	dcd 0x0000021D
	dcd 0x00000221
lbl_0201a32c:
	cmp r1, r0
	bne lbl_0201a340
	add r5, #0x5a
	ldrb r0, [r5]
	mov r1, #0x32
	mov r2, #0x64
	dcd 0xFDE8F7FA
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a340:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x8c]
	cmp r1, r0
	bne lbl_0201a35a
	ldr r0, [pc, #0x88]
	ldr r2, [r4, #0x34]
	ldr r1, [r6, r0]
	mov r0, #2
	tst r0, r1
	bne lbl_0201a356
	add r2, #0x3c
lbl_0201a356:
	str r2, [r4, #0x2c]
	str r2, [r4, #0x30]
lbl_0201a35a:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x78]
	cmp r1, r0
	bne lbl_0201a372
	ldr r1, [r4, #0x34]
	lsl r0, r1, #1
	add r1, r0
	lsr r0, r1, #0x1f
	add r0, r1
	asr r0, r0, #1
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a372:
	mov r0, #0x8d
	ldr r1, [r4, #4]
	lsl r0, r0, #2
	cmp r1, r0
	bne lbl_0201a384
	ldr r0, [r4, #0x34]
	add r0, #0x32
	str r0, [r4, #0x2c]
	str r0, [r4, #0x30]
lbl_0201a384:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x54]
	cmp r1, r0
	bne lbl_0201a392
	ldr r0, [pc, #0x50]
	mov r1, #1
	str r1, [r0, #0x3c]
lbl_0201a392:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x4c]
	cmp r1, r0
	bne lbl_0201a3a0
	ldr r0, [pc, #0x44]
	mov r1, #1
	str r1, [r0, #0x30]
lbl_0201a3a0:
	mov r0, #0x77
	ldr r1, [r4, #4]
	lsl r0, r0, #2
	cmp r1, r0
	bne lbl_0201a3b0
	ldr r0, [pc, #0x34]
lbl_0201a3ac:
	mov r1, #1
	str r1, [r0, #0x30]
lbl_0201a3b0:
	ldr r1, [r4, #4]
	ldr r0, [pc, #0x34]
	cmp r1, r0
	bne lbl_0201a3be
	ldr r0, [pc, #0x24]
	mov r1, #1
	str r1, [r0, #0x2c]
lbl_0201a3be:
	push {r0}
	ldr r0, [sp, #0x14]
	push {r0}
	dcd 0xECE8F05F
	ldr r0, [sp, #4]
	add sp, #8
	pop {r3, r4, r5, r6, r7, pc}
	mov r8, r8
	dcd 0x00000227
	dcd 0x000004F4
	dcd 0x00000233
	dcd 0x000001DE
	dcd 0x020D07D0
	dcd 0x00000171
	dcd 0x000001D1
}

extern "C" asm void func_0201a3ec(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x38]
	dcd 0xECD0F05F
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	cmp r0, #0
	beq lbl_0201a40c
	ldr r1, [pc, #0x28]
	mov r0, #1
	ldr r2, [r1, #8]
	orr r0, r2
	str r0, [r1, #8]
	b lbl_0201a416
lbl_0201a40c:
	ldr r1, [pc, #0x1c]
	mov r0, #1
	ldr r2, [r1, #8]
	bic r2, r0
	str r2, [r1, #8]
lbl_0201a416:
	push {r0}
	push {lr}
	dcd 0xECBEF05F
	pop {r0}
	mov lr, r0
	pop {r0}
	bx lr
	mov r8, r8
	dcd 0x020BD6C0
	dcd 0x020D07D0
}

extern "C" asm void func_0201a430(void)
{
	push {r0, lr}
	ldr r0, [pc, #0x28]
	dcd 0xECAEF05F
lbl_0201a438:
	ldr r0, [sp, #4]
	mov lr, r0
	ldr r0, [sp]
	add sp, #8
	ldr r0, [pc, #0x1c]
	ldr r1, [r0, #8]
	mov r0, #1
	tst r1, r0
	bne lbl_0201a44c
	mov r0, #0
lbl_0201a44c:
	push {r0}
	push {lr}
	dcd 0xECA2F05F
	pop {r0}
	mov lr, r0
	pop {r0}
	bx lr
	dcd 0x020BD6EC
	dcd 0x020D07D0
}
