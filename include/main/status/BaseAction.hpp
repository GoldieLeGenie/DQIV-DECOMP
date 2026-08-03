#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/BaseActionMessage.hpp"
#include "main/status/ActionExec.hpp"
#include "main/status/UseAction.hpp"
#include "main/dss/DssUtils.hpp"

namespace status{
    struct BaseAction {
        static int kaishinFlag_;   // data_020d07f8
        static int tsukonFlag_;    // data_020d07f4
        static int tsukon2Flag_;   // data_020d07f0
        static int doubleFlag_;    // data_020d080c
        static int splitFlag_;  // data_020d0808
        static int joukFlag_;  //data_020d0804
        int actionIndex_;
        CharacterType targetType_;
        int effectValue_;
        int executeAction_;
        int resultFlag_;
        int instantDeath_;
        int mahokantaFlag_;
        int moonSaltCount_;
        int rollingKick_;
        int sleepTurn_;
        int playerEffectValue_;
        int monsterEffectValue_;
        int originalEffectValue_;
        BaseActionMessage message_;
        BaseAction();
        ~BaseAction();
        void initialize();
        void clear();
        void exec(UseActionParam& useActionParam, int flag);
        int execBefore();
        int execAfterOne(int index);
        int execAfter(int flag);
        int execMainRoot(status::CharacterStatus* actor, status::CharacterStatus* target);
        int execMain(status::CharacterStatus *actor,status::CharacterStatus *target);
        void execActionEffect(status::CharacterStatus* actor, status::CharacterStatus* target);
        void execAddDamage(status::CharacterStatus* actor, status::CharacterStatus* target);
        void execAddDamageItemForceE(status::CharacterStatus* actor, status::CharacterStatus* target);
        int checkStatusRelease();
        int checkActorStatusChangeRelease(status::CharacterStatus* actor);
        int checkActorAstoron();
        int checkSpazz();
        int checkSleep();
        int checkPath1();
        int checkTimeStop();
        void checkConfusion();
        void execActionDefence(status::CharacterStatus* target);
        void execActionDefenceException(status::CharacterStatus *target);
        void setActionDefenceValueAdd(int ratio);
        int checkUseMp();
        int isUseMp();
        int checkMahoton();
        int checkFizzleZone();  
        int checkPowerSave(status::CharacterStatus* actor);
        int checkActorBaikiruto(status::CharacterStatus* actor);
        status::CharacterStatus* checkTargetSpecialSelect(
        status::CharacterStatus *actor,
        status::CharacterStatus *target);
        int checkTargetZaoraruZaoriku(status::CharacterStatus *target);
        int checkTargetBaikiruto(status::CharacterStatus *target);
        int checkTargetMahosute(status::CharacterStatus *target, status::CharacterStatus *actor);
        int checkTargetAstoron(status::CharacterStatus *target);
        int checkTargetFubaha(status::CharacterStatus *target);
        int checkTargetDefence(status::CharacterStatus *target);
        int checkTargetJouk(status::CharacterStatus *target);
        int checkTargetSplitJouk(status::CharacterStatus *target);
        int checkTargetReleaseConfusionSleep(status::CharacterStatus *target);
        int checkTargetReleaseItetsukuhadou(status::CharacterStatus *target);
        int checkTargetMahokanta(status::CharacterStatus *actor,status::CharacterStatus *target);
        int checkTargetEquipment(status::CharacterStatus *target);
        int checkActorManusa(status::CharacterStatus *actor,status::CharacterStatus *target);
        int checkTargetFeather(status::CharacterStatus *target);
        int checkActorKaishin(status::CharacterStatus *target);
        int checkActorDouble(status::CharacterStatus *target);
        int checkItemMissA(status::CharacterStatus *actor, status::CharacterStatus *target);
        int checkItemMuchiB(status::CharacterStatus *actor, status::CharacterStatus *target);
        int checkItemDamageC(status::CharacterStatus *actor, status::CharacterStatus *target);
        int checkItemDamageD(status::CharacterStatus *actor, status::CharacterStatus *target);
        int checkItemForceE(status::CharacterStatus *actor, status::CharacterStatus *target);
        int checkItemRecoveryI(status::CharacterStatus *actor,status::CharacterStatus *target);
        int checkItemRecoveryJ(status::CharacterStatus *actor,status::CharacterStatus *target);
        int checkItemOther(status::CharacterStatus *actor,status::CharacterStatus *target);
        void checkSleep(status::CharacterStatus *target);
        void useMp();
        virtual void setEffectValue(status::CharacterStatus *target);
        void setEffectValueAdd(int ratio, int offset);
        void setEffectValueException(status::CharacterStatus *actor,status::CharacterStatus *target);
        static void setBreakPrayRing(int flag);
        static bool isBreakPrayRing();


    };
    
    struct BaseActionData {
        UseActionParam* useActionParam_;    // 0x00
        int mirrorDamage_;                      // 0x04
        volatile int workParam_;
        param::ActionParam* actionParam_;   // 0x0C
        int flag_;                          // 0x10
        int multiFlag_;                     // 0x14
        int eventBattle_;                   // 0x18
        int missFlag_;                         // 0x1C
        int tsukon2Flag_;                   // 0x20
        int tsukonFlag_;                    // 0x24
        volatile int kaishinFlag_;                   // 0x28
        int allKaishinFlag_;                // 0x2C
        int timeReverseFlag_;               // 0x30
        int joukFlag_;                      // 0x34
        int splitFlag_;                     // 0x38
        int doubleFlag_;                    // 0x3C
        int callMonster_[4];                // 0x40
    };
    extern BaseActionData BaseActionData_; //data_020d07d0
}

struct SplitJoukTable { int v[3]; };
extern SplitJoukTable splitJoukTable;   /* data_020b4d5c */

extern int data_020d0810[4];
extern int data_020eecfc; //actionIndex
extern int baikirutoMessFlag;   // data_020eeccc
extern int unkFlag_020eecd0;    // data_020eecd0
extern int sleepMessFlag;       // data_020eecd4
extern int confusionMessFlag;   // data_020eecd8
extern int mahokantaMessFlag;   // data_020eecdc
extern int workMess;            // data_020eece8


extern "C" void func_02019f78(status::BaseAction*, int, int);
extern "C" void func_ov015_021721cc(status::UseActionParam*);
extern "C" void func_ov015_02172784(status::UseActionParam*);
extern "C" int  func_020170b0(status::BaseAction* action, status::CharacterStatus* actor, status::CharacterStatus* target);  // execMain
extern "C" void func_02016768(status::BaseAction* action, int flag);            // execAfter
extern "C" void func_020164a8(status::BaseAction* action, int targetIndex);     // execAfterOne
extern "C" void func_02017ea0(status::BaseAction* action);                      // checkConfusion
extern "C" void func_02019d64(status::BaseAction* action);                      // useMp
extern "C" void func_020162c0(status::BaseAction* action);                      // execBefore
extern "C" int  func_02017978(status::BaseAction* action, status::CharacterStatus* actor);  // checkActorStatusChangeRelease
extern "C" int  func_020179d0(status::BaseAction* action);                      // checkAstron
extern "C" int  func_02017a58(status::BaseAction* action);                      // checkSpazz
extern "C" int  func_02017b38(status::BaseAction* action);                      // checkSleep
extern "C" int  func_02017c40(status::BaseAction* action);                      // checkPath1
extern "C" int  func_02017e54(status::BaseAction* action);                      // checkTimeStop
extern "C" int  func_02018118(status::BaseAction* action);                      // checkMp
extern "C" int  func_020181dc(status::BaseAction* action);                      // checkMahoton
extern "C" int  func_02018274(status::BaseAction* action);                      // checkFizzleZone
extern "C" void func_02017928(status::BaseAction* action);                      // checkStatusRelease
extern "C" int  func_02018cc0(status::BaseAction* action, status::CharacterStatus* actor, status::CharacterStatus* target);  // checkTargetMahokanta
extern "C" int  func_02019398(status::BaseAction* action, status::CharacterStatus* actor);  // checkActorDouble
extern "C" int func_0201926c(status::BaseAction*, status::CharacterStatus*);                             // checkActorKaishin
extern "C" status::CharacterStatus* func_02018404(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkTargetSpecialSelect
extern "C" void func_02019fdc(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*);  // setEffectValueException
extern "C" int func_02018500(status::BaseAction*, status::CharacterStatus*);  // checkTargetZaoraruZaoriku
extern "C" int func_0201830c(status::BaseAction*, status::CharacterStatus*);  // checkPowerSave
extern "C" int func_02018558(status::BaseAction*, status::CharacterStatus*);  // checkTargetBaikiruto
extern "C" int func_02018688(status::BaseAction*, status::CharacterStatus*);  // checkTargetAstoron
extern "C" int func_020185d4(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkTargetMahosute
extern "C" int func_020191e0(status::BaseAction*, status::CharacterStatus*);  // checkTargetFeather
extern "C" int func_02018728(status::BaseAction*, status::CharacterStatus*);  // checkTargetFubaha
extern "C" int func_02018794(status::BaseAction*, status::CharacterStatus*);  // checkTargetDefence
extern "C" int func_02018898(status::BaseAction*, status::CharacterStatus*);  // checkTargetJouk
extern "C" int func_020189e0(status::BaseAction*, status::CharacterStatus*);  // checkTargetSplitJouk
extern "C" int func_02018da0(status::BaseAction*, status::CharacterStatus*);  // checkTargetEquipment
extern "C" int func_02019138(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkActorManusa
extern "C" int func_020193fc(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemMissA
extern "C" int func_02019498(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemMuchiB
extern "C" int func_020195c0(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemDamageC
extern "C" int func_02019668(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemDamageD
extern "C" int func_020196d4(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemForceE
extern "C" int func_02018394(status::BaseAction*, status::CharacterStatus*);  // checkActorBaikiruto
extern "C" void func_02017ee8(status::BaseAction*, status::CharacterStatus*); // execActionDefence
extern "C" void func_02017f98(status::BaseAction*, status::CharacterStatus*); // execActionDefenceException
extern "C" void func_020173b0(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // execActionEffect
extern "C" void func_02017584(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // execAddDamage
extern "C" void func_02017778(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // execAddDamageItemForceE
extern "C" void func_02019d3c(status::BaseAction*, status::CharacterStatus*); // checkSleep
extern "C" int func_02018adc(status::BaseAction*, status::CharacterStatus*);  // checkTargetReleaseConfusionSleep
extern "C" int func_02018c54(status::BaseAction*, status::CharacterStatus*);  // checkTargetReleaseItetsukuhadou
extern "C" int func_02019840(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemRecoveryI
extern "C" int func_02019914(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemRecoveryJ
extern "C" int func_0201993c(status::BaseAction*, status::CharacterStatus*, status::CharacterStatus*); // checkItemOther

