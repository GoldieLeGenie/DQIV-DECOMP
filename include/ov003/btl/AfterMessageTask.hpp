#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/status/BaseAction.hpp"
#include "main/status/BaseActionStatus.hpp"
#include "main/task/PartTask.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"

namespace btl {
    struct AfterMessageTask : task::PartTask
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

extern "C" void  func_ov003_0212a580(status::UseActionParam*, int);   // 
extern "C" int   func_ov003_0212c000(status::UseActionParam*, int);   // 
extern "C" void  func_0208988c(void);                                 // 
extern "C" BattleMonsterDraw2* func_ov003_02121d04(void);             // 
extern "C" void  func_ov003_02121970(BattleMonsterDrawEntry*, int, int); // 
extern "C" void  func_02026cd0(int, int);                             // 
extern "C" void  func_0200d748(void);                                 // 
extern "C" void  func_ov003_02129c58(status::CharacterStatus*, int, int, int); // 
extern "C" void func_ov003_02129ca0(status::CharacterStatus*, int);  // 

extern "C" int func_ov003_0212a914(BattleEffectManager*);  //
extern "C" int func_020898a0(void);                        // 
