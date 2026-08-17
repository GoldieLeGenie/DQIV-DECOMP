#pragma once
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

extern "C" int func_02089820();
extern "C" void func_ov003_02129d40(status::CharacterStatus* target);
extern "C" void func_ov003_0212a3c4(status::UseActionParam* uap, int idx);
extern "C" int  func_ov003_0212bfc8(status::UseActionParam* uap, int idx);
extern "C" int  func_ov003_021249e4();
extern "C" void func_0208980c();
extern "C" void func_ov003_0212c09c(status::UseActionParam* uap, int idx);
extern "C" void func_ov003_02129480(status::UseActionParam* uap, int idx);