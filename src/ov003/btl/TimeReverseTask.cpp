#include "ov003/btl/TimeReverseTask.hpp"
#include "ov003/status/MonsterParty.hpp"
#include "main/sound/SoundManager.hpp"

THUMB void btl::TimeReverseTask::initialize()
{
    int count = g_monster.getCount();
    for (int i = 0; i < count; i++) {
        int ctrlId = g_monster.getMonsterStatus(i)->haveStatusInfo_.drawCtrlId_;
        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 0x1f);
    }
    counter_ = 0;
}

THUMB void btl::TimeReverseTask::terminate()
{
    status::MonsterParty* monster = &g_monster;
    monster->clear();
    SoundManager::resetLastBossPlay();
    SoundManager::playStart(SoundManager::bgmIndex_, 0xf);
}

THUMB void btl::TimeReverseTask::execute()
{
    if (++counter_ > 30) {
        data_020ef7e4.setNextTask(0xe);
    }
}
