#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/task/PartTask.hpp"
#include "main/task/PartTaskManager.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/menu/MenuBase.hpp"
#include "main/task/ExecTask.hpp"

namespace btl {
    // declaration order = reverse of the vtable order in .data
    struct EncountTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct StatusTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct FirstReorderTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct StadiumResultTask : task::PartTask {
        int messageCount_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct StadiumDrawTask : task::PartTask {
        int messageCount_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct StadiumEndTask : task::PartTask {
        int messageCount_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct EventTask2 : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct EventTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct BattleEndTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct TimeReverseEndTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct TimeReverseTask : task::PartTask {
        int counter_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct CrusingEndTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct CrusingTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct DemolitionTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct PartyReorderTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct ExitWaitTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct EscapeTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct ExitTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct RoundEndTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct RoundTask : task::PartTask {
        int waitFlag_;
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct CommandTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

    struct FirstAttackTask : task::PartTask {
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };

}

extern "C" void func_ov003_02121970(BattleMonster*, int, int);

struct BattleMenuSub_HISTORY : menu::MenuBase {
    unsigned char unk_1C[8];            // 0x1C
    int update_;                        // 0x24
};
extern BattleMenuSub_HISTORY gBattleMenuSub_HISTORY;   // ov015

extern ExecTaskManager data_020ef8f0;   // g_BattleExecLevelup

extern "C" {
    void func_0200d5d4(void);
    void func_0200d5e8(void);
    void func_02036010(ExecTaskManager* self);   // BattleExecLevelup::terminate
}
