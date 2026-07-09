#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/BaseActionMessage.hpp"

namespace status{
    struct BaseAction {
        static int kaishinFlag_;   // data_020d07f8
        static int tsukonFlag_;    // data_020d07f4
        static int tsukon2Flag_;   // data_020d07f0
        static int doubleFlag_;    // data_020d080c
        void* unk;
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
        void initialize();
        void clear();
        void exec(UseActionParam& useActionParam, int flag);
    };
    struct BaseActionData {
        UseActionParam* useActionParam_;    // 0x00
        int missFlag_;                      // 0x04
        int workParam_;                     // 0x08
        param::ActionParam* actionParam_;   // 0x0C
        int flag_;                          // 0x10
        int multiFlag_;                     // 0x14
        int unk_18;                         // 0x18
        int unk_1C;                         // 0x1C
        int tsukon2Flag_;                   // 0x20
        int tsukonFlag_;                    // 0x24
        int kaishinFlag_;                   // 0x28
        int allKaishinFlag_;                // 0x2C
        int timeReverseFlag_;               // 0x30
        int joukFlag_;                      // 0x34
        int splitFlag_;                     // 0x38
        int doubleFlag_;                    // 0x3C
        int callMonster_[4];                // 0x40
    };
    extern BaseActionData BaseActionData_; //data_020d07d0
}
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
extern int data_020d0810[4];
