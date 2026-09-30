#pragma once
#include <globaldefs.h>
#include "ov003/btl/BattleCamera.hpp"
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseActionMacro.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"

namespace btl {
    struct AfterActionTask : task::PartTask
    {
        status::UseActionParam *useActionParam_;
        int mess_;
        void cleanup();
        bool isStatusChangeEnable();
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
        int isMessageStatusChangeRelease();
    };   
}

extern "C" int   func_ov003_0212fa2c(btl::AfterActionTask*);
extern "C" void func_ov003_0212fa14(btl::AfterActionTask* thisptr);
extern "C" int   func_ov003_0212fba0(btl::AfterActionTask* thisptr);
