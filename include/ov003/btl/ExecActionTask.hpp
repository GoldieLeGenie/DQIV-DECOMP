#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/status/BaseActionStatus.hpp"

namespace btl { struct BattleActorManager2; }
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/UseItem.hpp"
#include "main/status/ExcelParam.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"
#include "ov003/btl/BattleSelectTargetParam.hpp"
#include "ov015/btl/BattleSelectTarget.hpp"


namespace btl {
    struct ExecActionTask : task::PartTask{
        status::UseActionParam *useActionParam_;
        virtual void initialize();
        bool checkCommonExec(status::UseActionParam* param);
        virtual void terminate();
        virtual void execute();
        void setupTorunekoAction();
    };
}

extern "C" void func_ov003_02130b70(btl::ExecActionTask* thisptr);                      // setupTorunekoAction-like / à identifier
extern "C" void func_ov003_021289d8(btl::BattleActorManager2* mgr, status::UseActionParam* param);  // BattleActorManager2::setMegazaruRing
extern "C" int  func_ov003_02130a4c (btl::ExecActionTask* thisptr, status::UseActionParam* param); // ExecActionTask::checkCommonExec 
extern "C" void func_02026cc8(int seId, int a);                                         // SoundManager::playSe
