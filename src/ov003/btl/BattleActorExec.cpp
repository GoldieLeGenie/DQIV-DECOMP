#include "ov003/btl/BattleActorExec.hpp"

#pragma profile on

THUMB btl::BattleActorExec::BattleActorExec()
{
}


THUMB btl::BattleActorExec::~BattleActorExec()
{
  return;
}

THUMB void btl::BattleActorExec::setup(status::UseActionParam* param)
{
    func_ov003_02121298();
    func_ov003_02121394();

    useActionParam_ = param;
    beforeActionTask_.useActionParam_ = param;
    execActionTask_.useActionParam_ = useActionParam_;

    beforeMessageTask_.setup(useActionParam_);
    execMessageTask_.useActionParam_ = useActionParam_;
    specialMessageTask_.setup(useActionParam_);
    resultMessageTask_.setup(useActionParam_);
    afterMessageTask_.setup(useActionParam_);
    afterActionTask_.useActionParam_ = useActionParam_;
    endActionTask_.useActionParam_ = useActionParam_;

    partTaskManager.registerTask(0, &beforeActionTask_);
    partTaskManager.registerTask(1, &execActionTask_);
    partTaskManager.registerTask(7, &afterActionTask_);
    partTaskManager.registerTask(2, &beforeMessageTask_);
    partTaskManager.registerTask(3, &execMessageTask_);
    partTaskManager.registerTask(4, &specialMessageTask_);
    partTaskManager.registerTask(5, &resultMessageTask_);
    partTaskManager.registerTask(6, &afterMessageTask_);
    partTaskManager.registerTask(8, &endActionTask_);
    partTaskManager.registerTask(9, &endTask_);
    partTaskManager.setNextTask(0);

    if ((unsigned int)(useActionParam_->actionIndex_ - 0x201) <= 1 && useActionParam_->actorCharacterStatus_ != 0) {
        int hp = useActionParam_->actorCharacterStatus_->haveStatusInfo_.getHp();
        useActionParam_->actorCharacterStatus_->haveStatusInfo_.setHp(0);
        useActionParam_->actorCharacterStatus_->haveStatusInfo_.clearHpInBattle();
        useActionParam_->actorCharacterStatus_->haveStatusInfo_.setHp((unsigned short)hp);
    }
}


THUMB void btl::BattleActorExec::execute()
{
    partTaskManager.run();
}

THUMB int btl::BattleActorExec::isEnd()
{
    return partTaskManager.checkTask(9) != 0;
}

THUMB bool btl::BattleActorExec::isActionEnd()
{
    return partTaskManager.checkTask(9);
}