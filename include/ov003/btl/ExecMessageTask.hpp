#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "ov003/btl/BattleActorEffect.hpp"

namespace btl{
    struct ExecMessageTask : task::PartTask {
        status::UseActionParam *useActionParam_;
        int message_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };
    
}

extern "C" void func_ov003_021293b0(status::CharacterStatus* actor);
extern "C" int  func_ov003_0212bf48(status::UseActionParam* uap);
extern "C" void func_0208978c();
extern "C" int  func_ov003_0212a064();
extern "C" int  func_020897a0();