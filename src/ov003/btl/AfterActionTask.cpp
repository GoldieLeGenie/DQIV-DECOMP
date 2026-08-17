#include "ov003/btl/AfterActionTask.hpp"

ARM void btl::AfterActionTask::cleanup()
{
    partTaskManager.setNextTask(8);
}


ARM bool btl::AfterActionTask::isStatusChangeEnable()   
{
    int actionIndex = useActionParam_->actionIndex_;

    if (actionIndex == 0x42)  return false;
    if (actionIndex == 0x148) return false;
    if (actionIndex == 0x2f)  return false;
    if (actionIndex == 0x1e2) return false;
    if (actionIndex == 0x1d9) return false;
    if (actionIndex == 0x11e) return false;
    if (actionIndex == 0x11f) return false;
    if (actionIndex == 0x120) return false;

    return true;
}


ARM void btl::AfterActionTask::initialize()
{
    if (isStatusChangeEnable() == 0)
        return;

    status::StatusChange* statusChange = &useActionParam_->actorCharacterStatus_->haveStatusInfo_.statusChange_;
    statusChange->print();
    statusChange->execEndOfTurn();

    mess_  = isMessageStatusChangeRelease();
}

ARM void btl::AfterActionTask::terminate()
{
  return;
}


ARM void btl::AfterActionTask::execute()
{
    if (func_ov003_02122948(func_ov003_021224b0()) == 0) {
        if (this->mess_ == 0) {
            cleanup();
        }
        else if (func_02089684() != 0) {
            this->mess_ = isMessageStatusChangeRelease();
            if (this->mess_ == 0) {
                cleanup();
            }
        }
    }

    if (useActionParam_->actorCharacterStatus_->haveStatusInfo_.isAddEffectSleep() == 0)
        return;

    if (useActionParam_->actorCharacterStatus_->characterType_ != MONSTER)
        return;

    int drawCtrlId = useActionParam_->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
    if (useActionParam_->actorCharacterStatus_->haveStatusInfo_.addDamage_ > 0) {
        func_ov003_02121970(&func_ov003_02121d04()->monsters_[drawCtrlId], 0, 0x23);
    }
}


ARM int btl::AfterActionTask::isMessageStatusChangeRelease()
{
    status::CharacterStatus* actor = useActionParam_->actorCharacterStatus_;
    int result = 0;

    int releaseStatus = actor->haveStatusInfo_.statusChange_.isRelease();
    int death = useActionParam_->actorCharacterStatus_->haveStatusInfo_.isDeath();
    int battleCount = g_monster.getBattleCount();

    if (releaseStatus != 0 && death == 0 && battleCount != 0) {
        func_ov003_0212a3f8(useActionParam_->actorCharacterStatus_, result);
        func_02035020(useActionParam_->actorCharacterStatus_);

        if (releaseStatus == status::StatusChange::StatusDragoram) {
            func_ov003_0212a4b0(useActionParam_->actorCharacterStatus_, result, result);
            useActionParam_->actorCharacterStatus_->haveBattleStatus_.changeMonsterReverse();
        }

        if (releaseStatus == status::StatusChange::StatusMosyasu) {
            useActionParam_->actorCharacterStatus_->setMosyasRelease();
            func_ov003_0212a4b0(useActionParam_->actorCharacterStatus_, 0, 0);
            func_ov003_02129d40(useActionParam_->actorCharacterStatus_);
        }

        if (releaseStatus == status::StatusChange::StatusTimeStop) {
            int count;
            int i;

            status::g_Party.setBattleMode();

            count = status::g_Party.getCount();
            for (i = 0; i < count; i++) {
                status::PlayerStatus* chara = status::g_Party.getPlayerStatus(i);
                if (chara->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusTimeStop)) {
                    chara->haveStatusInfo_.statusChange_.release(status::StatusChange::StatusTimeStop);
                }
            }

            int j;
            int monsterCount = g_monster.getCount();
            for (j = 0; j < monsterCount; j++) {
                status::MonsterStatus* monster = g_monster.getMonsterStatus(j);
                if (monster->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusTimeStop)) {
                    monster->haveStatusInfo_.statusChange_.release(status::StatusChange::StatusTimeStop);
                }
            }
        }

        int message = actor->haveStatusInfo_.statusChange_.getReleaseMessage();
        func_ov003_0212be8c(message, 0, 0, 0);
        if (message != 0)
            result = 1;
    }

    return result;
}