#include "ov003/btl/ExecMessageTask.hpp"
#include "main/status/ActionExec.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "ov003/status/MonsterParty.hpp"
#include "ov003/status/MonsterStatus.hpp"
#include "main/task/PartTaskManager.hpp"
#include "ov003/btl/BattleMessage.hpp"
#include "ov003/btl/BattleActorAnimation.hpp"

ARM void btl::ExecMessageTask::initialize()
{
    btl::BattleActorAnimation::setExecAnimation(useActionParam_);
    btl::BattleActorAnimation::setExecAnimationMonster(useActionParam_->actorCharacterStatus_);
    btl::BattleActorAnimation::gattaiSlimeStart(useActionParam_->actorCharacterStatus_,
                        useActionParam_->actionIndex_);
 
    if ((unsigned int)(useActionParam_->actionIndex_ - 0x201) <= 1 &&
        useActionParam_->actorCharacterStatus_ != 0) {
        useActionParam_->actorCharacterStatus_->haveStatusInfo_.setHp(0);
        useActionParam_->actorCharacterStatus_->haveStatusInfo_.clearHpInBattle();
    }
 
    {
        status::UseActionParam* uap = useActionParam_;
        for (int i = 0; i < uap->targetCount_; i++) {
            uap->bakTargetCharacterStatus_[i] = uap->targetCharacterStatus_[i];
        }
    }
 
    {
        status::UseActionParam* uap = useActionParam_;
        for (int i = 0; i < uap->targetCount_; i++) {
            if (uap->originalTargetCharacterStatus_[i] != 0) {
                uap->targetCharacterStatus_[i] = uap->originalTargetCharacterStatus_[i];
            }
        }
    }
 
    btl::BattleActorEffect::setExecEffect(useActionParam_);
 
    {
        status::UseActionParam* uap = useActionParam_;
        for (int i = 0; i < uap->targetCount_; i++) {
            uap->targetCharacterStatus_[i] = uap->bakTargetCharacterStatus_[i];
            uap->bakTargetCharacterStatus_[i] = 0;
        }
    }
 
    func_ov003_0212a398(useActionParam_);
    message_ = btl::BattleMessage::setExecMessage(useActionParam_);
    func_0208978c();
    useActionParam_->actorCharacterStatus_->setMenuStatusFlag(
        (status::HaveStatusInfo::DiffStatus)1);
}


ARM void btl::ExecMessageTask::terminate()
{
    int action;    
    int count;

    action = useActionParam_->actionIndex_;
    if (action != 0x1db) {
        return;
    }

    status::parupunteMetalSlime2(action);
    status::parupunteMetalSlime3(action);
    func_ov003_02121d04();
    func_ov003_02121d58();

    count = g_monster.getCount();
    for (int i = 0; i < count; i++) {
        if (!g_monster.getMonsterStatus(i)->haveStatusInfo_.isDeath()) {
            int id = g_monster.getMonsterStatus(i)->haveStatusInfo_.drawCtrlId_;
            func_ov003_02121ab0(&func_ov003_02121d04()->monster_[id], 0x20);
        }
    }
}

ARM void btl::ExecMessageTask::execute()
{
    int endWait;
    int flag;

    if (btl::BattleActorAnimation::isMonsterChangeSetupEnd()) {
        endWait = func_ov003_0212aa5c(func_ov003_0212a678());
        flag = 1;
        if (useActionParam_->actionIndex_ == 0xe5) {
            if (func_ov003_021223f4(func_ov003_02121d04())) {
                btl::BattleActorAnimation::gattaiSlime(useActionParam_->actorCharacterStatus_,
                                    useActionParam_->actionIndex_);
                flag = 1;
            }
        }
        if (flag) {
            if (func_020897a0() || message_ == 0) {
                if (endWait) {
                    partTaskManager.setNextTask(4);
                }
            }
        }
    }
}
 
 
 