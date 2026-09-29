#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/UseActionParam.hpp"
#include "main/task/PartTask.hpp"
#include "main/task/PartTaskManager.hpp"
#include "main/status/UseActionMacro.hpp"


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

extern "C" void func_0208988c();
extern "C" int func_020898a0();
