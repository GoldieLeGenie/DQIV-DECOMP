#pragma once
#include "main/btl/BattleAutoFeed.hpp"
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/status/BaseAction.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/task/PartTask.hpp"


namespace btl {
    struct ResultMessageTask : task::PartTask
    {
        status::UseActionParam *useActionParam_;
        int message_;
        void setup(status::UseActionParam *useActionParam);
        void cleanup();
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

}

extern int currentTarget_; //currentTarget_
extern int targetCount_;   //targetCount_

extern "C" void func_ov003_0212c09c(status::UseActionParam* uap, int idx);
extern "C" void func_ov003_02129480(status::UseActionParam* uap, int idx);