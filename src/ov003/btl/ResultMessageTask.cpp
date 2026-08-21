#include "ov003/btl/ResultMessageTask.hpp"
#include "main/task/PartTaskManager.hpp"
#include "ov003/btl/SpecialMessageTask.hpp"
#include "ov003/btl/BattleActorManager2.hpp"
ARM void btl::ResultMessageTask::setup(status::UseActionParam *useActionParam)
{
  useActionParam_ = useActionParam;
}

ARM void btl::ResultMessageTask::cleanup()
{
  partTaskManager.setNextTask(6);
}

ARM void btl::ResultMessageTask::initialize()
{
    status::CharacterStatus* target;
    int id;

    if (status::BaseAction::multiFlag_ != 0) {
        target = useActionParam_->targetCharacterStatus_[currentTarget_];
        if (target != 0) {
            if (currentTarget_ == 0) {
                target->haveStatusInfo_.setUseActionEffectValue(
                    target->haveStatusInfo_.effectValueMulti_[0]);
            }
            if (currentTarget_ == 1) {
                useActionParam_->targetCharacterStatus_[currentTarget_]
                    ->haveStatusInfo_.setUseActionEffectValue(
                        useActionParam_->targetCharacterStatus_[currentTarget_]
                            ->haveStatusInfo_.effectValueMulti_[1]);
            }
        }
    }

    target = useActionParam_->targetCharacterStatus_[currentTarget_];
    if (target != 0 && target->haveStatusInfo_.isMosyasRelease() != 0) {
        func_ov003_02129d40(useActionParam_->targetCharacterStatus_[currentTarget_]);
    }

    func_ov003_0212a3c4(useActionParam_, currentTarget_);

    if (btl::BattleActorManager2::getSingleton()->eventType_ != BattleActorManager2::Velorinman) {
        message_ = func_ov003_0212bfc8(useActionParam_, currentTarget_);
    }
    else if (useActionParam_->actorCharacterStatus_->characterType_ == PLAYER &&
             (id = useActionParam_->targetCharacterStatus_[0]
                       ->haveStatusInfo_.drawCtrlId_,
              id != func_ov003_021249e4())) {
        message_ = 0;
    }
    else {
        message_ = func_ov003_0212bfc8(useActionParam_, currentTarget_);
    }

    func_0208980c();
    func_ov003_0212c09c(useActionParam_, currentTarget_);
    func_ov003_02129480(useActionParam_, currentTarget_);

    target = useActionParam_->targetCharacterStatus_[currentTarget_];
    if (target != 0) {
        target->setMenuStatusFlag((status::HaveStatusInfo::DiffStatus)2);
    }
}



ARM void btl::ResultMessageTask::terminate()
{
  return;
}


ARM void btl::ResultMessageTask::execute()
{
    if (func_02089820() || message_ == 0) {
        cleanup();
    }
}
