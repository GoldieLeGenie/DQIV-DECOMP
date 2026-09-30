#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

struct ExecTask {
    // vtable                           // 0x00
    dss::Flag flag_;                    // 0x04

    ExecTask();                         // func_02035a80
    ~ExecTask();                        // func_02035a90
    bool execute();                     // func_02035aa0
    virtual void setup();               // func_02035adc
    virtual void exec();                // func_02035aec
    void terminate();                   // func_02035b04
    virtual void cleanup();             // func_02035b10
    virtual bool isEnd();               // func_02035b18
};

struct ExecTaskManager {
    // vtable                           // 0x00
    dss::Flag flag_;                    // 0x04
    ExecTask* pExecTask_[16];           // 0x08
    int currentId_;                     // 0x48

    ExecTaskManager() { flag_.flag_ = 0; }
    ~ExecTaskManager() {}
    virtual void initialize();          // func_02035b44
    void terminate();                   // func_02035b4c
    bool execute();                     // func_02035b54
    void clear();                       // func_02035bb8
    void resister(int id, ExecTask* task);   // func_02035bcc
};

extern ExecTaskManager data_020ef8f0;   // g_BattleExecLevelup

extern "C" {
    void func_02036010(ExecTaskManager* self);   // BattleExecLevelup::terminate
}
