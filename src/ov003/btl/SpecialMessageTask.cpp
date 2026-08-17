#include "ov003/btl/SpecialMessageTask.hpp"
#include "main/status/BaseAction.hpp"




ARM void btl::SpecialMessageTask::setup(status::UseActionParam* useActionParam)
{
    useActionParam_ = useActionParam;
    currentTarget_ = 0;
}


ARM void btl::SpecialMessageTask::initialize()
{
    char v;
    int id;
    int idx;
    param::EffectParam* effectParam;

    targetCount_ = useActionParam_->targetCount_;

    if (status::BaseAction::multiFlag_ != 0 &&
        useActionParam_->targetCharacterStatus_[currentTarget_] != 0 &&
        currentTarget_ == 1 &&
        useActionParam_->actorCharacterStatus_->characterType_ == PLAYER) {

        if (useActionParam_->actorCharacterStatus_->haveStatusInfo_.haveStatus_.charaIndex_ == 0x8a) {
            id = 0x159;
        }
        else {
            id = func_ov003_0212a94c(func_ov003_0212a678(),
                                     useActionParam_->actorCharacterStatus_);
        }

        effectParam = func_ov003_0212a980(func_ov003_0212a678(), id);

        if (useActionParam_->actorCharacterStatus_->haveStatusInfo_.isSecondKaishin() ||
            useActionParam_->actorCharacterStatus_->damageSound_ == status::CharacterStatus::TsukonSe) {

            v = (effectParam->byte_1 & 0x78) >> 3;
            if (v < 3) {
                v = 2;
            }

            effectParam = func_ov003_0212a980(func_ov003_0212a678(), 0x158);
            effectParam->byte_1 &= ~0x78;
            effectParam->byte_1 += (char)((v << 3) & 0x78);
            effectParam->frame = 0;

            if ((idx = func_ov003_0212a9d4(func_ov003_0212a678(), 0x158)) >= 0) {
                status::UseActionParam* uap = useActionParam_;
                BattleEffectManager* mgr;

                mgr = func_ov003_0212a678();
                func_ov003_0212ad64(&mgr->unit_[idx], uap, 0);

                mgr = func_ov003_0212a678();
                func_ov003_0212b844(&mgr->unit_[idx], 0);
            }

            useActionParam_->actorCharacterStatus_->haveStatusInfo_.setSecondKaishin(false);
        }
    }

    if (status::BaseAction::tsukonFlag_ != 0 || status::BaseAction::tsukon2Flag_ != 0) {
        func_ov003_0212a398(useActionParam_);
    }

    message_ = func_ov003_0212bf88(useActionParam_, currentTarget_);
    counter_ = 0;
}


ARM void btl::SpecialMessageTask::terminate()
{
  return;
}

ARM void btl::SpecialMessageTask::execute()
{
    int id;

    counter_++;
    if (counter_ == 4) {
        if (func_ov003_02126ee8()->eventType_ != BattleActorManager2::Velorinman ||
            (id = useActionParam_->targetCharacterStatus_[0]
                      ->haveStatusInfo_.drawCtrlId_,
             id == func_ov003_021249e4())) {

            if (useActionParam_->actorCharacterStatus_->damageSound_ ==
                    status::CharacterStatus::KaishinSe) {
                func_02026cc8(0x197, 0);
            }
            else if (useActionParam_->actorCharacterStatus_->damageSound_ ==
                     status::CharacterStatus::TsukonSe) {
                if (useActionParam_->actorCharacterStatus_->characterType_ == PLAYER) {
                    func_02026cc8(0x197, 0);
                }
                else {
                    func_02026cc8(0x196, 0);
                }
            }
        }
    }

    if (func_020897a0() || message_ == 0) {
        partTaskManager.setNextTask(5);
    }
}