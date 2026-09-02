#include "ov003/btl/BattleActorAnimation.hpp"
#include "ov003/btl/BattleActorManager2.hpp"
#include "ov003/status/MonsterParty.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/HaveEquipment.hpp"

THUMB int btl::BattleActorAnimation::setExecAnimation(status::UseActionParam* useActionParam)
{
    int actionIndex = useActionParam->actionIndex_;
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    if (!checkExecAnimation(useActionParam)) {
        return 0;
    }

    if (checkNormalAnimation(useActionParam)) {
        int animIndex;
        int ctrlId = useActionParam->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
        animIndex = useActionParam->actorCharacterStatus_->haveBattleStatus_.getActionAnimation();

        switch (actionIndex) {
        case 417:
        case 418:
        case 430:
        case 489:
            actionIndex = 71;
            animIndex = 0;
            break;
        }

        if (actionIndex == 231 || actionIndex == 232) {
            if (useActionParam->actorCharacterStatus_->damageSound_ != status::CharacterStatus::TsukonSe) {
                actionIndex = 71;
                animIndex = 0;
            }
        }

        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], actionIndex, animIndex);
        return func_0208995c();
    }

    int action = useActionParam->actionIndex_;

    if (useActionParam->result_ != 0) {
        if (actor->isEscapeAnimation()) {
            useActionParam->actorCharacterStatus_->clearEscapeAnimation();
            int ctrlId = useActionParam->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
            int animIndex = useActionParam->actorCharacterStatus_->haveBattleStatus_.getActionAnimation();
            func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], action, animIndex);
            func_02026cc8(408, 0);
        }
    }

    if (action == 324) {
        int ctrlId = useActionParam->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
        useActionParam->actorCharacterStatus_->haveBattleStatus_.getActionAnimation();
        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], action, 9);
    }

    if (actor->isDisappearAnimation()) {
        actor->clearDisappearAnimation();
        int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 31);
    }

        if (actor->haveStatusInfo_.isKillMyself()) {
        int ctrlId = useActionParam->actorCharacterStatus_->haveStatusInfo_.drawCtrlId_;
        int animIndex = useActionParam->actorCharacterStatus_->haveBattleStatus_.getActionAnimation();
        BattleMonsterDraw2* mgr = func_ov003_02121d04();
        func_ov003_02121970(&mgr->monster_[ctrlId], action, animIndex);
        mgr = func_ov003_02121d04();
        func_ov003_02121c08(&mgr->monster_[ctrlId]);
    }

    return 0;
}

THUMB void btl::BattleActorAnimation::setExecAnimationMonster(status::CharacterStatus* actor)
{
    if (actor != 0 && actor != 0) {
        setMonsterChangeSetup(actor);
    }
}

THUMB int btl::BattleActorAnimation::checkExecAnimation(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    if (actor->haveStatusInfo_.isStatusChangeRelease()) {
        return 0;
    }
    if (actor->characterType_ == MONSTER) {
        return 1;
    }
    return 0;
}

THUMB int btl::BattleActorAnimation::checkNormalAnimation(status::UseActionParam* useActionParam)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;

    if (actor->haveStatusInfo_.isDeath()) {
        if (actor->haveStatusInfo_.isSelfImmolation()) {
            return 1;
        }
        if (actor->haveStatusInfo_.isDamageMyself()) {
            return 1;
        }
        if (actor->haveStatusInfo_.isMahokantaCounter()) {
            return 1;
        }
        if (actor->haveStatusInfo_.isExecuteMeganteRing()) {
            return 1;
        }
    }

    if (actor->haveStatusInfo_.isAttackEnable() == 1) {
        return 1;
    }

    if (actor->haveStatusInfo_.isAstoron()) {
        for (int i = 0; i < useActionParam->targetCount_; i++) {
            useActionParam->targetCharacterStatus_[i]->haveStatusInfo_.setAstoron(false);
        }
        return 1;
    }

    return 0;
}

THUMB void btl::BattleActorAnimation::setResultAnimation(status::UseActionParam* useActionParam, int currentTarget)
{
    int partyIndex;
    short* tai;
    int i;
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;
    status::CharacterStatus* target = useActionParam->targetCharacterStatus_[currentTarget];

    if (!checkResultAnimation(useActionParam, currentTarget)) {
        return;
    }

    if (!checkNormalAnimation(useActionParam)) {
        if (actor->haveStatusInfo_.isSleepAttack()) {
            if (target->haveStatusInfo_.effectValue_ > 0) {
                func_02026cc8(403, 0);
                return;
            }
            func_02026cc8(404, 0);
            return;
        }
        return;
    }

    if (target->characterType_ == PLAYER) {
        setPlayerSE(useActionParam, currentTarget);
    } else {
        int ctrlId = target->haveStatusInfo_.drawCtrlId_;

        if (btl::BattleActorManager2::getSingleton()->eventType_ == 1) {
            if (ctrlId != func_ov003_021249e4()) {
                return;
            }
        }

        if (status::UseAction::getDamageType(useActionParam->actionIndex_) == 1) {
            if (target->isDamageAnimation()) {
                int effectValue = target->haveStatusInfo_.effectValue_;
                if (effectValue > 0) {
                    tai = data_020c04f4[g_monster.getMonsterStatusWithCtrlId(ctrlId)->characterIndex_];

                    for (i = 0; i < g_monster.getCount(); i++) {
                        if (ctrlId == g_monster.getMonsterStatus(i)->haveStatusInfo_.drawCtrlId_) {
                            partyIndex = i;
                            break;
                        }
                    }

                    int* ctrl = (int*)func_02057128(partyIndex);
                    int a = ctrl[0];
                    int b = ctrl[1];
                    int value = b - status::HaveEquipment::getAbsoluteValue(tai[1] - tai[3]);
                    if (value <= 32) {
                        value = 32;
                    }
                    func_02050e88(a, value, effectValue, 0);
                    func_02026cc8(402, 0);
                }
            }
        }
    }

    setCommonSE(useActionParam, currentTarget);
    setResultAnimationMonster(actor, target, currentTarget);
    setMosyasChange(actor);
    setMonstersDisappear(useActionParam);
}

THUMB void btl::BattleActorAnimation::setPlayerSE(status::UseActionParam* useActionParam, int currentTarget)
{
    status::CharacterStatus* target = useActionParam->targetCharacterStatus_[currentTarget];

    switch (status::UseAction::getDamageType(useActionParam->actionIndex_)) {
    case status::UseAction::DamageTypeDamage:
        if (useActionParam->targetResult_[currentTarget] != 0) {
            if (target->haveStatusInfo_.effectValue_ > 0) {
                func_02026cc8(403, 0);
                return;
            }
            func_02026cc8(404, 0);
            return;
        }
        break;

    case status::UseAction::DamageTypeRecovery:
        func_02026cc8(501, 0);
        break;

    case status::UseAction::DamageTypeAgilityChange:
        if (target->haveStatusInfo_.effectValue_ > 0) {
            func_02026cc8(506, 0);
        }
        break;

    case status::UseAction::DamageTypeRebirth:
        func_02026cc8(553, 0);
        break;

    case status::UseAction::DamageTypeFubaha:
        if (currentTarget == 0) {
            func_02026cc8(543, 0);
        }
        break;

    case status::UseAction::DamageTypeBaikiruto:
        func_02026cc8(544, 0);
        break;

    case status::UseAction::DamageTypeMahokanta:
        func_02026cc8(541, 0);
        break;

    case status::UseAction::DamageTypeDefenceChange:
        switch (useActionParam->actionIndex_) {
        case 39:
        case 40:
        case 41:
        case 42:
        case 479:
            if (target->haveStatusInfo_.effectValue_ > 0) {
                func_02026cc8(502, 0);
            }
            break;
        case 37:
        case 38:
            if (target->haveStatusInfo_.effectValue_ > 0) {
                func_02026cc8(503, 0);
            }
            break;
        }
        break;

    case status::UseAction::DamageTypeAstoron:
        func_02026cc8(547, 0);
        break;

    case status::UseAction::DamageTypeMahosute:
        func_02026cc8(559, 0);
        break;

    case status::UseAction::DamageTypePowerSave:
        func_02026cc8(618, 0);
        break;

    default:
        if (useActionParam->actionIndex_ == 63) {
            func_02026cc8(501, 0);
        }
        break;
    }
}

THUMB void btl::BattleActorAnimation::setCommonSE(status::UseActionParam* useActionParam, int currentTarget)
{
    status::CharacterStatus* target = useActionParam->targetCharacterStatus_[currentTarget];
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;
    param::ActionParam* actionParam = status::excelParam.actionParam_;

    if (useActionParam->actionIndex_ == 371) {
        return;
    }

    switch (status::UseAction::getDamageType(useActionParam->actionIndex_)) {
    case status::UseAction::DamageTypeDamage:
        if (target->haveStatusInfo_.isImmidiateDeath()) {
            return;
        }
        if (actionParam[useActionParam->actionIndex_].magictype != 23) {
            return;
        }
        if (target->haveStatusInfo_.effectValue_ == 0 || target->haveStatusInfo_.isTargetJouk()) {
            if (actor->characterType_ == PLAYER) {
                func_02026cc8(405, 0);
                return;
            }
            func_02026cc8(404, 0);
            return;
        }
        break;

    case status::UseAction::DamageTypeSubMp:
        if (useActionParam->actionIndex_ != 34) {
            func_02026cc8(547, 0);
        }
        break;

    case status::UseAction::DamageTypeNone:
        setCommonSEFromAction(useActionParam);
        break;
    }
}

THUMB void btl::BattleActorAnimation::setCommonSEFromAction(status::UseActionParam* useActionParam)
{
    switch (useActionParam->actionIndex_) {
    case 465:
        func_02026cc8(504, 0);
        break;
    case 420:
        func_02026cc8(459, 0);
        break;
    case 424:
        func_02026cc8(457, 0);
        break;
    case 425:
        func_02026cc8(1102, 0);
        break;
    case 432:
        func_02026cc8(456, 0);
        break;
    case 440:
        func_02026cc8(460, 0);
        break;
    case 444:
        func_02026cc8(461, 0);
        break;
    case 453:
        func_02026cc8(646, 0);
        break;
    case 457:
        func_02026cc8(641, 0);
        break;
    case 456:
        func_02026cc8(462, 0);
        break;
    case 483:
        func_02026cc8(501, 0);
        break;
    }
}

THUMB int btl::BattleActorAnimation::checkResultAnimation(status::UseActionParam* useActionParam, int currentTarget)
{
    status::CharacterStatus* actor = useActionParam->actorCharacterStatus_;
    param::ActionParam* actionParam = status::excelParam.actionParam_;

    if (useActionParam->targetCharacterStatus_[currentTarget] == 0) {
        return false;
    }

    if (actor->haveStatusInfo_.isStatusChangeRelease()) {
        return false;
    }

    if (status::UseAction::getActionType(useActionParam->actionIndex_) == status::UseAction::ActionTypeMagic) {
        if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusFizzleZone)) {
            return false;
        }
        if (actor->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahoton)) {
            return false;
        }
    }

    if (actionParam[useActionParam->actionIndex_].useMP != 0) {
        if (actor->haveStatusInfo_.isMpFailure()) {
            actor->haveStatusInfo_.setMpFailure(false);
            return false;
        }
    }

    return true;
}

THUMB void btl::BattleActorAnimation::setResultAnimationMonster(status::CharacterStatus* actor, status::CharacterStatus* target, int currentTarget)
{
    setCallFriend(actor);
    setCallFriend(target);
    setCallFriend();

    if (!actor->haveStatusInfo_.isAttackEnable()
        && !actor->haveStatusInfo_.isSelfImmolation()
        && !actor->haveStatusInfo_.isDamageMyself()
        && !actor->haveStatusInfo_.isMahokantaCounter()
        && !actor->haveStatusInfo_.isExecuteMeganteRing()) {
        return;
    }

    if (target->characterType_ == MONSTER) {
        int ctrlId = target->haveStatusInfo_.drawCtrlId_;

        if (currentTarget == 0 && target->isMultiDamageAnimation()) {
            if (!target->isMultiDamageAnimation1()) {
                return;
            }
            target->clearMultiDamageAnimation1();
            if (target->haveStatusInfo_.effectValueMulti_[0] == 0) {
                return;
            }
            if (target->haveStatusInfo_.isDeath() && !target->isMultiDamageAnimation2nd()) {
                BattleMonsterDraw2* mgr = func_ov003_02121d04();
                func_ov003_02121970(&mgr->monster_[ctrlId], 0, 34);
                if (!target->isDeathDisable()) {
                    return;
                }
                mgr = func_ov003_02121d04();
                func_ov003_02121970(&mgr->monster_[ctrlId], 0, 35);
                return;
            }
            func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 35);
            return;
        }
        else if (currentTarget == 1 && target->isMultiDamageAnimation()) {
            target->clearMultiDamageAnimation();
            if (target->isMultiDamageAnimation2()) {
                target->clearMultiDamageAnimation2();
                if (target->haveStatusInfo_.effectValueMulti_[1] != 0) {
                    if (target->haveStatusInfo_.isDeath()) {
                        BattleMonsterDraw2* mgr = func_ov003_02121d04();
                        func_ov003_02121970(&mgr->monster_[ctrlId], 0, 34);
                        if (target->isDeathDisable()) {
                            mgr = func_ov003_02121d04();
                            func_ov003_02121970(&mgr->monster_[ctrlId], 0, 35);
                        }
                    } else {
                        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 35);
                    }
                }
            }
            target->clearDamageAnimation();
            return;
        }
        else if (target->isDamageAnimation()) {
            target->clearDamageAnimation();
            if (target->haveStatusInfo_.isDeath()) {
                BattleMonsterDraw2* mgr = func_ov003_02121d04();
                func_ov003_02121970(&mgr->monster_[ctrlId], 0, 34);
                if (target->isDeathDisable()) {
                    mgr = func_ov003_02121d04();
                    func_ov003_02121970(&mgr->monster_[ctrlId], 0, 35);
                }
            } else {
                func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 35);
            }
        }

        if (target->isDeathAnimation()) {
            target->clearDeathAnimation();
            if (target->haveStatusInfo_.isImmidiateDeath()) {
                target->haveStatusInfo_.setImmidiateDeath(false);
                func_02026cc8(402, 0);
            }
            BattleMonsterDraw2* mgr = func_ov003_02121d04();
            func_ov003_02121970(&mgr->monster_[ctrlId], 0, 34);
            if (target->isDeathDisable()) {
                mgr = func_ov003_02121d04();
                func_ov003_02121970(&mgr->monster_[ctrlId], 0, 35);
            }
        }

        if (target->isDisappearAnimation()) {
            target->clearDisappearAnimation();
            func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 31);
        }

        if (target->isRebirthAnimation()) {
            target->clearRebirthAnimation();
            func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 32);
        }

        if (target->isEscapeAnimation()) {
            func_02026cc8(408, 0);
        }
    }
}

THUMB void btl::BattleActorAnimation::setAfterAnimation(status::CharacterStatus* actor, status::CharacterStatus* target, int targetCount, int currentIndex)
{
    if (actor == 0) {
        return;
    }
    if (currentIndex != targetCount - 1) {
        return;
    }
    if (!actor->haveStatusInfo_.isSelfImmolation()) {
        return;
    }
    actor->haveStatusInfo_.setSelfImmolation(false);
    if (actor->characterType_ == MONSTER) {
        int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
        func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 31);
    }
}

THUMB void btl::BattleActorAnimation::setAfterAnimation2(status::CharacterStatus* actor, status::CharacterStatus* target){
    setMonsterChange(actor);
}

THUMB void btl::BattleActorAnimation::setMosyasChange(status::CharacterStatus* actor)
{
    if (actor == 0) {
        return;
    }
    if (actor->characterType_ != MONSTER) {
        return;
    }
    if (!actor->haveStatusInfo_.isMosyasExec()) {
        return;
    }
    actor->haveStatusInfo_.setMosyasExec(false);

    int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
    int group = actor->characterGroup_;
    dss::Fx32Vector3 pos = *func_02083648(&func_ov003_02121d04()->monster_[ctrlId]);

    func_ov003_02121fb8(func_ov003_02121d04(), ctrlId);

    BattleMonsterDraw2* mgr = func_ov003_02121d04();
    ctrlId = func_ov003_02121f54(mgr, group, status::getMosyasIndex());

    func_ov003_02121878(&func_ov003_02121d04()->monster_[ctrlId], &pos);

    actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
    actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
}

THUMB void btl::BattleActorAnimation::setMosyasReverse(status::CharacterStatus* actor)
{
    if (actor->haveStatusInfo_.isMosyasRelease()) {
        int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
        int group = actor->characterGroup_;
        dss::Fx32Vector3 pos = *func_02083648(&func_ov003_02121d04()->monster_[ctrlId]);

        func_ov003_02121fb8(func_ov003_02121d04(), ctrlId);

        ctrlId = func_ov003_02121f54(func_ov003_02121d04(), group, 122);

        func_ov003_02121878(&func_ov003_02121d04()->monster_[ctrlId], &pos);

        actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
        actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
    }
}


THUMB void btl::BattleActorAnimation::setCallFriend(status::CharacterStatus* chara)
{
    if (chara == 0) {
        return;
    }
    if (!chara->haveStatusInfo_.isCallFriend()) {
        return;
    }
    chara->haveStatusInfo_.setCallFriend(false);
    func_ov003_0212243c(func_ov003_02121d04(), chara->haveStatusInfo_.drawCtrlId_, 32, 1);
}


THUMB void btl::BattleActorAnimation::setCallFriend()
{
    int count = g_monster.getCount();
    for (int i = 0; i < count; i++) {
        status::MonsterStatus* monster = g_monster.getMonsterStatus(i);
        if (monster->haveStatusInfo_.isCallFriend()) {
            monster->haveStatusInfo_.setCallFriend(false);
            func_ov003_0212243c(func_ov003_02121d04(), monster->haveStatusInfo_.drawCtrlId_, 32, 1);
        }
    }
}


THUMB void btl::BattleActorAnimation::gattaiSlimeStart(status::CharacterStatus* actor, int actionIndex)
{
    if (actor == 0) {
        return;
    }
    if (!actor->haveStatusInfo_.isAttackEnable()) {
        return;
    }
    if (actionIndex != 229) {
        return;
    }

    for (int i = 0; i < g_monster.getCount(); i++) {
        if (g_monster.getMonsterStatus(i)->isBattleEnable()) {
            int ctrlId = g_monster.getMonsterStatus(i)->haveStatusInfo_.drawCtrlId_;
            if (actor == g_monster.getMonsterStatus(i)) {
                actor->haveStatusInfo_.setMonsterChange(true);
                BattleMonsterDraw2* mgr = func_ov003_02121d04();
                func_ov003_02121af4(&mgr->monster_[ctrlId]);
                dss::Fx32Vector3 pos(0, 0, 0);
                mgr = func_ov003_02121d04();
                func_ov003_02121878(&mgr->monster_[ctrlId], &pos);
                func_02026cc8(705, 0);
                func_0204d0c4(107);
            } else {
                func_ov003_02121b58(&func_ov003_02121d04()->monster_[ctrlId]);
                actor->haveStatusInfo_.setMonsterChange(true);
            }
        }
    }
}

THUMB void btl::BattleActorAnimation::gattaiSlime(status::CharacterStatus* actor, int actionIndex)
{
    if (actor == 0) {
        return;
    }
    if (!actor->haveStatusInfo_.isAttackEnable()) {
        return;
    }
    if (actionIndex != 229) {
        return;
    }
    if (!actor->haveStatusInfo_.isMonsterChange()) {
        return;
    }

    actor->haveBattleStatus_.newBaseChangeMonster(107);
    actor->haveStatusInfo_.setMonsterChange(false);

    int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
    int group = actor->characterGroup_;
    dss::Fx32Vector3 pos = *func_02083648(&func_ov003_02121d04()->monster_[ctrlId]);

    func_ov003_02121fb8(func_ov003_02121d04(), ctrlId);

    for (int i = 0; i < g_monster.getCount(); i++) {
        if (g_monster.getMonsterStatus(i)->isBattleEnable()) {
            if (g_monster.getMonsterStatus(i) != actor) {
                g_monster.getMonsterStatus(i)->haveStatusInfo_.setDisappearFlag(true);
                g_monster.getMonsterStatus(i)->haveStatusInfo_.setDeath();
            }
        }
    }

    actor->characterIndex_ = 107;
    ctrlId = func_ov003_02121f54(func_ov003_02121d04(), group, actor->haveBattleStatus_.index_);

    func_ov003_02121878(&func_ov003_02121d04()->monster_[ctrlId], &pos);

    actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
    actor->haveStatusInfo_.drawCtrlId_ = ctrlId;
    func_0204d0dc(107);
}

THUMB void btl::BattleActorAnimation::setMonsterChangeSetup(status::CharacterStatus* actor)
{
    data_ov003_02158a54 = 0;

    if (actor->haveStatusInfo_.isMonsterChange()) {
        if (!actor->haveStatusInfo_.isDisableTextureCache()) {
            func_0204d0c4(actor->haveBattleStatus_.index_);
        }
        data_ov003_02158a54 = 1;
    }
}

THUMB int btl::BattleActorAnimation::isMonsterChangeSetupEnd()
{
    if (data_ov003_02158a54 == 0) {
        return 1;
    }
    data_ov003_02158a54 = data_ov003_02158a54 + 1;
    if (data_ov003_02158a54 >= 6) {
        return 1;
    }
    return 0;
}


THUMB void btl::BattleActorAnimation::setMonsterChange(status::CharacterStatus* actor)
{
    if (!actor->haveStatusInfo_.isMonsterChange()) {
        return;
    }
    actor->haveStatusInfo_.setMonsterChange(false);

    int ctrlId = actor->haveStatusInfo_.drawCtrlId_;
    BattleMonsterDraw2* mgr = func_ov003_02121d04();
    int a = mgr->monster_[ctrlId].screenPosition_;
    int b = func_ov003_02121d04()->monster_[ctrlId].screenWidth_;
    int group = actor->characterGroup_;
    dss::Fx32Vector3 pos = *func_02083648(&func_ov003_02121d04()->monster_[ctrlId]);

    func_ov003_02121fb8(func_ov003_02121d04(), ctrlId);

    int newCtrlId = func_ov003_02121f54(func_ov003_02121d04(), group, actor->haveBattleStatus_.index_);

    mgr = func_ov003_02121d04();
    func_ov003_02121878(&mgr->monster_[newCtrlId], &pos);

    actor->haveStatusInfo_.drawCtrlId_ = newCtrlId;
    actor->haveStatusInfo_.drawCtrlId_ = newCtrlId;

    int index = actor->haveBattleStatus_.index_;
    if (!actor->haveStatusInfo_.isDisableTextureCache()) {
        func_0204d0dc(index);
    }
    actor->haveStatusInfo_.setDisableTextureCache(false);

    func_ov003_02121d04()->monster_[newCtrlId].screenPosition_ = a;
    func_ov003_02121d04()->monster_[newCtrlId].screenWidth_ = b;
}

THUMB void btl::BattleActorAnimation::setMonstersDisappear(status::UseActionParam* useActionParam)
{
    if (useActionParam->actionIndex_ == 477 || useActionParam->actionIndex_ == 528) {
        int count = useActionParam->targetCount_;
        for (int i = 0; i < count; i++) {
            status::CharacterStatus* target = useActionParam->targetCharacterStatus_[i];
            if (target != 0 && target->isDisappearAnimation()) {
                target->clearDisappearAnimation();
                int ctrlId = target->haveStatusInfo_.drawCtrlId_;
                func_ov003_02121970(&func_ov003_02121d04()->monster_[ctrlId], 0, 31);
            }
        }
    }
}