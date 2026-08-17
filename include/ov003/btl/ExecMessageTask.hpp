#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/status/BaseActionStatus.hpp"

namespace btl{
    struct ExecMessageTask : task::PartTask {
        status::UseActionParam *useActionParam_;
        int message_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };
    
}

extern "C" void func_ov003_02129238(status::UseActionParam* uap);
extern "C" void func_ov003_021293b0(status::CharacterStatus* actor);
extern "C" void func_ov003_02129e3c(status::CharacterStatus* actor, int actionIndex);
extern "C" void func_ov003_02128a74(status::UseActionParam* uap);
extern "C" void func_ov003_0212a398(status::UseActionParam* uap);
extern "C" int  func_ov003_0212bf48(status::UseActionParam* uap);
extern "C" void func_0208978c();
extern "C" BattleMonsterDraw2* func_ov003_02121d04();
extern "C" void func_ov003_02121d58();
extern "C" void func_ov003_02121ab0(BattleMonsterDrawEntry* p, int a);
extern "C" int  func_ov003_0212aa5c(void* p);
extern "C" int  func_ov003_0212a064();
extern "C" int  func_ov003_021223f4(void* p);
extern "C" void func_ov003_02129f0c(status::CharacterStatus* actor, int actionIndex);
extern "C" int  func_020897a0();