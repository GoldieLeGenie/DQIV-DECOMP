#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/task/PartTaskManager.hpp"


namespace btl {
    struct BeforeMessageTask : task::PartTask {
        status::UseActionParam *useActionParam_;
        int message_;
        void setup(status::UseActionParam *useActionParam);
        virtual void initialize();
        virtual void terminate();
        virtual void execute();
    };
}

extern task::PartTaskManager partTaskManager; //data_ov003_021492dc

extern "C" void func_ov003_0212a3f8(status::CharacterStatus* actor, int a);
extern "C" void func_ov003_0212a4b0(status::CharacterStatus* target, int a, int b);
extern "C" void func_02034974(status::CharacterStatus* actor, int actionIndex);
extern "C" int  func_ov003_0212bf14(status::UseActionParam* uap);
extern "C" void func_0208988c();
extern "C" int func_020898a0();
