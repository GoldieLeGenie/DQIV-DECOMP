#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/status/BaseAction.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/param/Param.hpp"
#include "main/task/PartTask.hpp"
#include "main/task/PartTaskManager.hpp"

namespace btl {
    struct SpecialMessageTask : task::PartTask
    {
        status::UseActionParam *useActionParam_;
        int message_;
        int counter_;
        void setup(status::UseActionParam *useActionParam);
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

}

struct BattleEffectUnit {
    char data[0x118];              // sizeof = 0x118
};

struct BattleEffectManager {
    char _pad0[0xC130];            // 
    BattleEffectUnit unit_[8];     // 
    int wait_;

};


extern int currentTarget_; //currentTarget_
extern int targetCount_; //targetCount_ 

extern "C" BattleEffectManager* func_ov003_0212a678();
extern "C" int  func_ov003_0212a94c(BattleEffectManager* p, status::CharacterStatus* actor);
extern "C" param::EffectParam* func_ov003_0212a980(BattleEffectManager* p, int id);
extern "C" int  func_ov003_0212a9d4(BattleEffectManager* p, int id);
extern "C" void func_ov003_0212ad64(BattleEffectUnit* u, status::UseActionParam* uap, int a);
extern "C" void func_ov003_0212b844(BattleEffectUnit* u, int a);
extern "C" void func_ov003_0212a398(status::UseActionParam* uap);
extern "C" int  func_ov003_0212bf88(status::UseActionParam* uap, int idx);
extern "C" int  func_ov003_021249e4();
extern "C" void func_02026cc8(int a, int b);
extern "C" int  func_020897a0();

