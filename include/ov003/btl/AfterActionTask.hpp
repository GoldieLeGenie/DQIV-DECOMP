#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/status/PlayerStatus.hpp"
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
extern "C" void  func_ov003_02121970(BattleMonsterDrawEntry*, int, int);     // BattleMonster::startAnimation
extern "C" BattleMonsterDraw2* func_ov003_02121d04(void);                    // &BattleMonsterDraw2::m_singleton (base)
extern "C" void* func_ov003_021224b0();                                      // BattleCamera::getSingleton
extern "C" int   func_ov003_02122948(void* thisptr);                         // BattleCamera::isCameraAnimation
extern "C" int   func_02089684();                                            // BattleAutoFeed::isEndMessage
extern "C" void func_ov003_0212fa14(btl::AfterActionTask* thisptr);
extern "C" int   func_ov003_0212fba0(btl::AfterActionTask* thisptr);
extern "C" void  func_ov003_0212a3f8(status::CharacterStatus* actor, int a);
extern "C" void  func_02035020(status::CharacterStatus* actor);
extern "C" void  func_ov003_0212a4b0(status::CharacterStatus* target, int a, int b);
extern "C" void  func_ov003_02129d40(status::CharacterStatus* target);
extern "C" void  func_ov003_0212be8c(int message, int a, int b, int c);