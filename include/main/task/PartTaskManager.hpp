#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/task/PartTask.hpp"

namespace task {

    struct PartTaskManager {
        PartTask *parts_[24];
        PartTask *currentTask_;
        int currentTaskID_;
        int previousTaskID_;
        int nextTaskID_;
        int sleepTaskID_;
        void run();
        void registerTask(int id, PartTask *task);
        void setNextTask(int id);
        int getCurrentTask();
        bool checkTask(int id);
        void setNextTaskWithSleep(int id);
        void wakeup();
        void initialize();
    };

    struct Data0211EC50 {
        char pad[0x14];
        int unk14;
    };

}  


extern task::Data0211EC50 data_0211ec50;
extern task::PartTaskManager partTaskManager;   // data_ov003_021492dc
extern "C" void func_02089ab8();