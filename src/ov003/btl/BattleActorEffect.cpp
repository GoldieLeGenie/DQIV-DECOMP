#include "ov003/btl/BattleActorEffect.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/param/MonsterAnim.hpp"
#include "main/status/ExcelParam.hpp"

int btl::BattleActorEffect::wait_;

THUMB void btl::BattleActorEffect::setExecEffect(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    wait_ = 0;

    if (checkCommonExecEffect(useActionParam) == 0) {
        return;
    }

    if (useActionParam->actorCharacterStatus_->characterType_ == PLAYER) {
        wait_ = setPlayerEffect(useActionParam);
    } else if (useActionParam->actorCharacterStatus_->characterType_ == MONSTER) {
        wait_ = func_ov003_02128e20(useActionParam);

        if (status::UseAction::getActionType(useActionParam->actionIndex_) == status::UseAction::ActionTypeMagic) {
            if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahoton)) {
                int w = wait_;
                func_ov003_0212a678()->wait_ = w;
                return;
            }
        }

        wait_ += func_ov003_02128f58(useActionParam);
    }

    int w = wait_;
    func_ov003_0212a678()->wait_ = w;
}

THUMB int btl::BattleActorEffect::checkCommonExecEffect(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;
    param::ActionParam* actionParam = status::excelParam.actionParam_;

    if (actor->haveStatusInfo_.isStatusChangeRelease()) {
        return 0;
    }

    if (actionParam[useActionParam->actionIndex_].useMP != 0) {
        if (actor->haveStatusInfo_.isMpFailure()) {
            return 0;
        }
    }

    if (actor->haveStatusInfo_.isDeath()) {
        if (actor->haveStatusInfo_.isSelfImmolation() == 1) {
            return 1;
        }
        if (actor->haveStatusInfo_.isDamageMyself() == 1) {
            return 1;
        }
        if (actor->haveStatusInfo_.isMahokantaCounter() == 1) {
            return 1;
        }
        if (useActionParam->actionIndex_ == 543) {
            return 1;
        }
    }

    if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSleep)) {
        if (useActionParam->actionIndex_ == 466) {
            return 1;
        }
        if (actor->haveStatusInfo_.isMahokantaCounter() == 1) {
            return 1;
        }
    }

    if (!actor->haveStatusInfo_.isAttackEnable()) {
        return 0;
    }
    return 1;
}
THUMB int btl::BattleActorEffect::setPlayerEffect(status::UseActionParam* useActionParam)
{
    param::ActionParam* actionParam = status::excelParam.actionParam_;
    int camera;
    int wait;
    int actionIndex = useActionParam->actionIndex_;

    if (!checkPlayerExecEffect(useActionParam)) {
        return 0;
    }

    int effectID = actionParam[actionIndex].effectFriend;
    camera = ((actionParam[actionIndex].byte_6 & 0xe0) << 19) >> 24;

    if (effectID == 300) {
        if (useActionParam->targetCharacterStatus_[0]->characterType_ == PLAYER) {
            return 0;
        }
    }

    if (effectID != 0) {
        if (effectID == 300) {
            if (useActionParam->actorCharacterStatus_->haveStatusInfo_.haveStatus_.charaIndex_ == 138) {
                effectID = 345;
            } else {
                effectID = func_ov003_0212a94c(func_ov003_0212a678(), useActionParam->actorCharacterStatus_);
            }
        }

        param::EffectParam* effectParam = func_ov003_0212a980(func_ov003_0212a678(), effectID);

        if (actionIndex == 484) {
            effectParam->byte_1 = effectParam->byte_1 & ~0x78;
            effectParam->byte_1 = effectParam->byte_1 + 0x18;
        }

        int unitIndex = func_ov003_0212a9d4(func_ov003_0212a678(), effectID);
        if (unitIndex < 0) {
            return 0;
        }

        if (camera == 4 && actionIndex != 471) {
            BattleEffectManager* mgr = func_ov003_0212a678();
            func_ov003_0212ad64(&mgr->unit_[unitIndex], useActionParam, 1);
        } else {
            BattleEffectManager* mgr = func_ov003_0212a678();
            func_ov003_0212ad64(&mgr->unit_[unitIndex], useActionParam, 0);
        }

        wait = func_0208995c();
        if (wait < 0) {
            wait = 24;
        }
        BattleEffectManager* mgr = func_ov003_0212a678();
        func_ov003_0212b844(&mgr->unit_[unitIndex], wait);

        if (useActionParam->actorCharacterStatus_->haveStatusInfo_.isFirstKaishin()
            || useActionParam->actorCharacterStatus_->damageSound_ == status::CharacterStatus::TsukonSe) {

            int scale = ((effectParam->byte_1 & 0x78) << 21) >> 24;
            unsigned short frame = effectParam->frame;
            if (scale < 3) {
                scale = 2;
            }
            BattleEffectManager* mgr = func_ov003_0212a678();
            param::EffectParam* kaishinParam = func_ov003_0212a980(mgr, 344);
            kaishinParam->byte_1 = kaishinParam->byte_1 & ~0x78;
            kaishinParam->byte_1 = kaishinParam->byte_1 + (char)((scale << 3) & 0x78);
            kaishinParam->frame = frame;

            unitIndex = func_ov003_0212a9d4(func_ov003_0212a678(), 344);
            if (unitIndex >= 0) {
                BattleEffectManager* mgr = func_ov003_0212a678();
                func_ov003_0212ad64(&mgr->unit_[unitIndex], useActionParam, 0);
                func_ov003_0212b844(&func_ov003_0212a678()->unit_[unitIndex], wait);
            }

            useActionParam->actorCharacterStatus_->haveStatusInfo_.setFirstKaishin(false);
        }

        if (camera != 4) {
            BattleEffectManager* mgr = func_ov003_0212a678();
            return wait + func_ov003_0212b7ec(&mgr->unit_[unitIndex]);
        }
    }

    return 0;
}

THUMB int btl::BattleActorEffect::checkPlayerExecEffect(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    if (useActionParam->targetCharacterStatus_[0] == 0) {
        return 0;
    }

    if (useActionParam->actionIndex_ == 0) {
        return 0;
    }

    if (status::UseAction::getActionType(useActionParam->actionIndex_) == status::UseAction::ActionTypeMagic) {
        if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusFizzleZone)) {
            return 0;
        }
        if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahoton)) {
            return 0;
        }
    }

    if (useActionParam->actionIndex_ == 371) {
        if (useActionParam->result_ == 0) {
            return 0;
        }
    }

    return 1;
}

int btl::BattleActorEffect::setEnemyEffect(status::UseActionParam* useActionParam)
{
    int actionIndex = useActionParam->actionIndex_;
    int ctrlId = useActionParam->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
    int animIndex = useActionParam->actorCharacterStatus_->haveBattleStatus_.getActionAnimation();
    int monsterNo = func_ov003_02121d04()->monster_[ctrlId].monsterIndex_;

    if (!func_ov003_02128f3c(useActionParam)) {
        return 0;
    }

    if (actionIndex == 417 || actionIndex == 418 || actionIndex == 430) {
        actionIndex = 71;
    }

    int animDataIndex = status::excelParam.monsterAnim_->getAnimData( monsterNo, actionIndex, animIndex);
    if (animDataIndex >= 0) {
        param::MonsterAnim* animData = &status::excelParam.monsterAnim_[animDataIndex];
        int effectID = animData->effect;

        if (effectID == 0) {
            return animData->startframe + animData->hitframe;
        }

        param::EffectParam* effectParam = func_ov003_0212a980(func_ov003_0212a678(), effectID);
        effectParam->frame = animData->hitframe;

        char animBits = (animData->byte_1 & 0x3c) >> 2;
        char effectBits = effectParam->byte_1;
        effectParam->byte_1 = effectBits & ~0x78;
        effectParam->byte_1 += (char)((animBits << 3) & 0x78);
        effectParam->scale = animData->scale;

        int unitIndex = func_ov003_0212a9d4(func_ov003_0212a678(), effectID);
        if (unitIndex < 0) {
            return animData->startframe;
        }

        int animfile = animData->animfile;
        status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;
        BattleEffectManager* mgr = func_ov003_0212a678();
        func_ov003_0212af18(&mgr->unit_[unitIndex], actor, animfile);

        int startframe = animData->startframe;
        mgr = func_ov003_0212a678();
        func_ov003_0212b844(&mgr->unit_[unitIndex], startframe);

        return animData->startframe + animData->hitframe;
    }

    return 0;
}