#include "main/global/GlobalDQ4.hpp"
#include "main/data/DataObject.hpp"
#include "main/dss/UnkArrayWarning.hpp"

GlobalDQ4 data_0210bb94;
static UnkGameTaskHook s_hook;

ARM GlobalDQ4::GlobalDQ4()
{
    currentTask_ = 0;
    part_id_ = 0;
    prevPartId_ = -1;
    nextPartId_ = -1;
    unk_70 = 1;
    unk_74 = 1;
}

ARM GlobalDQ4::~GlobalDQ4()
{
}

ARM void GlobalDQ4::unkfunc_02058014(int partId)
{
    part_id_ = partId;
    unkfunc_0207f898(&data_0211a60c);
    while (1) {
        int id = part_id_;
        if (id > 24) {
            unkfunc_0208960c(id, 24);
        }
        if (id < 0) {
            unkfunc_0208960c(id, 24);
        }
        currentTask_ = task_[id];
        unkfunc_02058148(currentTask_);
        do {
            unkfunc_02058188(currentTask_);
            if (s_hook.unk_08 != 0) {
                s_hook.unk_08();
            }
        } while (nextPartId_ == -1);
        unkfunc_0205815c(currentTask_);
        prevPartId_ = part_id_;
        part_id_ = nextPartId_;
        nextPartId_ = -1;
    }
}

ARM void GlobalDQ4::unkfunc_020580bc(int partId, UnkGameTask* task)
{
    if (partId > 24) {
        unkfunc_0208960c(partId, 24);
    }
    if (partId < 0) {
        unkfunc_0208960c(partId, 24);
    }
    task_[partId] = task;
}

ARM void GlobalDQ4::unkfunc_020580fc(int partId)
{
    nextPartId_ = partId;
}

ARM int GlobalDQ4::unkfunc_02058104()
{
    return nextPartId_;
}

ARM int GlobalDQ4::unkfunc_0205810c()
{
    return part_id_;
}

ARM int GlobalDQ4::unkfunc_02058114(int partId)
{
    return part_id_ == partId;
}

ARM void GlobalDQ4::unkfunc_02058128(void (*func)())
{
    s_hook.unk_08 = func;
}

ARM void GlobalDQ4::unkfunc_02058138(void (*func)())
{
    s_hook.unk_04 = func;
}

ARM void GlobalDQ4::unkfunc_02058148(UnkGameTask* task)
{
    task->vf00();
}

ARM void GlobalDQ4::unkfunc_0205815c(UnkGameTask* task)
{
    task->vf04();
    if (s_hook.unk_04 != 0) {
        s_hook.unk_04();
    }
}

ARM void GlobalDQ4::unkfunc_02058188(UnkGameTask* task)
{
    task->vf08();
    task->vf0c();
    task->vf10();
}

ARM void UnkGameTaskHook::vf00()
{
}

ARM void UnkGameTaskHook::vf04()
{
}

ARM void UnkGameTaskHook::vf08()
{
}

ARM void UnkGameTaskHook::vf10()
{
}

ARM void UnkGameTaskHook::vf0c()
{
}
