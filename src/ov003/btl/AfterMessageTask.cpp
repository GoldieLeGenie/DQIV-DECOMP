#include "ov003/btl/AfterMessageTask.hpp"



ARM void btl::AfterMessageTask::setup(status::UseActionParam *useActionParam)
{
  useActionParam_ = useActionParam;
}

ARM void btl::AfterMessageTask::cleanup()
{
    int i;

    currentTarget_++;
    if (currentTarget_ >= targetCount_) {
        partTaskManager.setNextTask(7);
        useActionParam_->actorCharacterStatus_->clearMenuStatusFlag();
        for (i = 0; i < useActionParam_->targetCount_; i++) {
            if (useActionParam_->targetCharacterStatus_[i] != 0) {
                useActionParam_->targetCharacterStatus_[i]->clearMenuStatusFlag();
            }
        }
    }
    else {
        partTaskManager.setNextTask(4);
    }
}

ARM void btl::AfterMessageTask::initialize()
{
    func_ov003_0212a580(useActionParam_, currentTarget_);
    message_ = func_ov003_0212c000(useActionParam_, currentTarget_);

    if (useActionParam_->targetCharacterStatus_[currentTarget_] == 0) {
        return;
    }

    if (func_ov003_02126ee8()->eventType_ == 1) {
        func_0208988c();
        int i;
        int drawCtrlId = useActionParam_->targetCharacterStatus_[0]->haveStatusInfo_.drawCtrlId_;
        if (useActionParam_->actorCharacterStatus_->characterType_ == 0) {
            for (i = 0; i < 4; i++) {
                if (i != func_ov003_021249e4()) {
                    func_ov003_02121970(&func_ov003_02121d04()->monsters_[i], 0, 0x1f);
                }
            }
            if (drawCtrlId != func_ov003_021249e4()) {
                int real = func_ov003_021249e4();
                func_ov003_02121970(&func_ov003_02121d04()->monsters_[real], 0, 0x1b);
            }
        }
    }

    if (useActionParam_->actionIndex_ == 0x1d7) {
        func_02026cd0(0x454, 0x1e);
    }

    if (useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.isAddEffectDamage()) {
        status::CharacterStatus* actor = useActionParam_->actorCharacterStatus_;
        if (actor->characterType_ == 1) {
            int drawCtrlId = actor->haveStatusInfo_.drawCtrlId_;
            if (actor->haveStatusInfo_.addDamage_ > 0) {
                if (actor->haveStatusInfo_.isDeath()) {
                    func_ov003_02121970(&func_ov003_02121d04()->monsters_[drawCtrlId], 0, 0x22);
                } else {
                    func_ov003_02121970(&func_ov003_02121d04()->monsters_[drawCtrlId], 0, 0x23);
                }
                func_02026cc8(0x192, 0);
            }
        } else if (actor->haveStatusInfo_.addDamage_ > 0) {
            func_02026cc8(0x193, 0);
            func_0200d748();
        }
        useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.setAddEffectDamage(false);
    }

    if (useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.isAddEffectRecovery()) {
        func_02026cc8(0x1f5, 0);
        useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.setAddEffectRecovery(false);
    }

    if (useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.isTargetJouk()) {
        useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.setTargetJouk(false);
    }

    if (useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.isAddEffectMahotora()) {
        if (useActionParam_->actorCharacterStatus_->characterType_ != 1 && useActionParam_->actionIndex_ == 0x47) {
            int idx = func_ov003_0212a9d4(func_ov003_0212a678(), 0x1e);
            if (idx < 0) {
                return;
            }
            status::UseActionParam* param = useActionParam_;
            BattleEffectManager* mgr;

            mgr = func_ov003_0212a678();
            func_ov003_0212ad64(&mgr->unit_[idx], param, 0);
        }
        useActionParam_->targetCharacterStatus_[currentTarget_]->haveStatusInfo_.setAddEffectMahotora(false);
    }

    func_ov003_02129c58(useActionParam_->actorCharacterStatus_, 0, targetCount_, currentTarget_);
}



ARM void btl::AfterMessageTask::terminate()
{
    func_ov003_02129ca0(useActionParam_->actorCharacterStatus_, 0);

    if (useActionParam_->actorCharacterStatus_ == 0) {
        return;
    }
    if (!useActionParam_->actorCharacterStatus_->haveStatusInfo_.isFirstMosyas()) {
        return;
    }
    useActionParam_->actorCharacterStatus_->haveStatusInfo_.setFirstMosyas(false);
}


ARM void btl::AfterMessageTask::execute()
{
    if (useActionParam_->actorCharacterStatus_ != 0) {
        if (useActionParam_->actorCharacterStatus_->haveStatusInfo_.isMonsterChange()) {
            if (func_ov003_0212a914(func_ov003_0212a678()) == 0) {
                return;
            }
        }
    }

    if (message_ != 0) {
        if (func_020898a0() == 0) {
            return;
        }
        cleanup();
    } else {
        cleanup();
    }
}