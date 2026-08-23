#include "ov003/btl/selectAI.hpp"

#pragma profile on
THUMB void btl::selectAI(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    if (actor->characterType_ != PLAYER) {
        return;
    }
    if (actor->haveStatusInfo_.battleCommand_ == COMMAND_MEIREISASERO) {
        return;
    }
    if (actor->haveStatusInfo_.haveStatus_.isPlayer_ == 0) {
        return;
    }
    if (!actor->haveStatusInfo_.isAttackEnable()) {
        return;
    }
    if (useActionParam->actionIndex_ == 513) {
        return;
    }
    if (useActionParam->actionIndex_ == 514) {
        return;
    }

    func_ov003_0212c384(&data_ov003_02149350);
    func_ov003_0212c400(&data_ov003_02149350, actor);

    if (actor->haveBattleStatus_.getSelectCommand() == 3) {
        actor->haveStatusInfo_.haveItem_.getItem(actor->haveBattleStatus_.selectIndex_);
        actor->haveBattleStatus_.setActionSelect((status::HaveBattleStatus::CallStart)0);
    }

    useActionParam->actionIndex_ = actor->haveBattleStatus_.actionIndex_;
}