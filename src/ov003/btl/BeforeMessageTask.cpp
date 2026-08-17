#include "ov003/btl/BeforeMessageTask.hpp"
#include "main/task/PartTaskManager.hpp"
 
ARM void btl::BeforeMessageTask::setup(status::UseActionParam *useActionParam)
{
  useActionParam_ = useActionParam;
}


ARM void btl::BeforeMessageTask::initialize()
{
    int hp;

    func_ov003_0212a3f8(useActionParam_->actorCharacterStatus_, 0);
    func_ov003_0212a4b0(useActionParam_->targetCharacterStatus_[0], 0, 0);
    func_02034974(useActionParam_->actorCharacterStatus_, useActionParam_->actionIndex_);
    message_ = func_ov003_0212bf14(useActionParam_);
    func_0208988c();

    if ((unsigned int)(useActionParam_->actionIndex_ - 0x201) > 1) {
        return;
    }
    if (useActionParam_->actorCharacterStatus_ == 0) {
        return;
    }

    hp = useActionParam_->actorCharacterStatus_->haveStatusInfo_.getHp();
    useActionParam_->actorCharacterStatus_->haveStatusInfo_.setHp(0);
    useActionParam_->actorCharacterStatus_->haveStatusInfo_.clearHpInBattle();
    useActionParam_->actorCharacterStatus_->haveStatusInfo_.setHp((unsigned short)hp);
}

ARM void btl::BeforeMessageTask::terminate()
{
  return;
}

ARM void btl::BeforeMessageTask::execute()
{
    if (message_ != 0) {
        if (func_020898a0() != 0) {
            partTaskManager.setNextTask(3);
        }
    }
    else {
        partTaskManager.setNextTask(3);
    }
}


