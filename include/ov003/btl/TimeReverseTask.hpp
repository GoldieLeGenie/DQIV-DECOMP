#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/task/PartTask.hpp"
#include "main/task/PartTaskManager.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"

namespace btl {
    struct TimeReverseTask : task::PartTask
    {
        int counter_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };
}

extern task::PartTaskManager data_020ef7e4; //g_PartTaskManager

extern "C" void func_ov003_02121970(BattleMonster*, int, int);
