#pragma once
#include <globaldefs.h>


struct UnkGameTask {
    virtual void vf00();                        // called when the task starts
    virtual void vf04();                        // called when the task ends
    virtual void vf08();                        // called every frame
    virtual void vf0c();                        // called every frame
    virtual void vf10();                        // called every frame
};


struct UnkGameTaskHook {
    // vtable                                   // 0x00
    void (*unk_04)();                           // 0x04  called after each task end
    void (*unk_08)();                           // 0x08  called every frame

    virtual void vf00();
    virtual void vf04();
    virtual void vf08();
    virtual void vf0c();
    virtual void vf10();
};


struct GlobalDQ4 {
    UnkGameTask* task_[24];                     // 0x00
    UnkGameTask* currentTask_;                  // 0x60
    int part_id_;                               // 0x64  current task
    int prevPartId_;                            // 0x68
    int nextPartId_;                            // 0x6C
    int unk_70;                                 // 0x70
    int unk_74;                                 // 0x74

    GlobalDQ4();
    ~GlobalDQ4();
    void unkfunc_02058014(int partId);                      // run (never returns)
    void unkfunc_020580bc(int partId, UnkGameTask* task);   // register task
    void unkfunc_020580fc(int partId);                      // set next task
    int unkfunc_02058104();                                 // next task
    int unkfunc_0205810c();                                 // current task (13 = battle auto feed)
    int unkfunc_02058114(int partId);                       // part_id_ == partId
    static void unkfunc_02058128(void (*func)());
    static void unkfunc_02058138(void (*func)());
    static void unkfunc_02058148(UnkGameTask* task);
    static void unkfunc_0205815c(UnkGameTask* task);
    static void unkfunc_02058188(UnkGameTask* task);
};

extern GlobalDQ4 data_0210bb94;

extern "C" {
    void func_0208960c(int index, int size);   /* "ARRAY ERROR %d/%d %08x !!!!" */
}
