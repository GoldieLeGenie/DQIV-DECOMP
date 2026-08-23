#include "ov003/btl/RecoveryAutoActionParam.hpp"
#include "ov015/btl/BattleSelectTarget.hpp"
#pragma profile on

THUMB void btl::RecoveryAutoActionParam::setupTarget()
{
    battleSelectTargetParam_.clear();

    if (player_->characterType_ == PLAYER) {
        btl::BattleSelectTarget::setTargetPlayerWithDeath(&battleSelectTargetParam_);

        if (status::UseAction::getUseType(actionIndex_) == 0) {
            battleSelectTargetParam_.sourceCount_ = 1;
            battleSelectTargetParam_.setSourceCharacterStatus(0, player_);
        }
    }

    if (player_->characterType_ == MONSTER) {
        btl::BattleSelectTarget::setTargetMonster(&battleSelectTargetParam_);
    }
}

THUMB void btl::RecoveryAutoActionParam::calcEffectValue()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        if (battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.isDeath()) {
            targetEffectValue_[i] = 0;
        } else {
            targetEffectValue_[i] = status::UseAction::getEffectValueToPlayerMin(actionIndex_);
        }
    }
}

THUMB void btl::RecoveryAutoActionParam::calcEffectValueException()
{
    if (actionIndex_ == 61) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            status::CharacterStatus* target = battleSelectTargetParam_.getSourceCharacterStatus(i);
            if (target->haveStatusInfo_.isDeath()) {
                int hpMax = target->haveStatusInfo_.getHpMax();
                targetEffectValue_[i] = (hpMax - target->haveStatusInfo_.getHp()) / 2;
            }
        }
    }

    if (actionIndex_ == 62) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            status::CharacterStatus* target = battleSelectTargetParam_.getSourceCharacterStatus(i);
            if (target->haveStatusInfo_.isDeath()) {
                int hpMax = target->haveStatusInfo_.getHpMax();
                targetEffectValue_[i] = hpMax - target->haveStatusInfo_.getHp();
            }
        }
    }
}

THUMB void btl::RecoveryAutoActionParam::calcCorrectEffectVelue()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        int hpMax = battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHpMax();
        lastEffectValue_[i] = status::HaveStatusInfo::getClampValue(
            lastEffectValue_[i], 0,
            (short)(hpMax - battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHp()));
    }
}

THUMB void btl::RecoveryAutoActionParam::calcCorrectEffectVelueException()
{
    int minIndex = -1;
    int minRate = 100;

    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        int hpMax = battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHpMax();
        int rate = battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHp() * 100 / hpMax;
        if (minRate > rate  ) {
            minRate = rate;
            minIndex = i;
        }
    }

    if (minIndex != -1) {
        lastEffectValue_[minIndex] = lastEffectValue_[minIndex] + 1;
    }
}

THUMB int btl::RecoveryAutoActionParam::isMemberHpDown(int percent)
{
    int i = 0;
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (; i < targetCount_; i++) {
        if (!battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.isDeath()) {
            int hpMax = battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHpMax();
            int hp = battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHp();
            if (hp < hpMax * (100 - percent) / 100) {
                return 1;
            }
        }
    }

    return 0;
}
THUMB int btl::RecoveryAutoActionParam::isMemberDeath()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        if (battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.isDeath()) {
            return 1;
        }
    }

    return 0;
}

THUMB int btl::RecoveryAutoActionParam::getMemberSpazz()
{
    int count = 0;
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        if (battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSpazz)) {
            count++;
        }
    }

    return count;
}