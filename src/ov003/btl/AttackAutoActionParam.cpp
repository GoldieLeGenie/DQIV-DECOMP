#include "ov003/btl/AttackAutoActionParam.hpp"
#include "main/status/ActionExec.hpp"
#include "main/status/BaseStatus.hpp"
#include "ov015/btl/BattleSelectTarget.hpp"
#pragma profile on

THUMB void btl::AttackAutoActionParam::setupTarget()
{
    battleSelectTargetParam_.clear();

    if (player_->characterType_ == MONSTER) {
        btl::BattleSelectTarget::setTargetPlayer(&battleSelectTargetParam_);
    }
    if (player_->characterType_ == PLAYER) {
        btl::BattleSelectTarget::setTargetMonster(&battleSelectTargetParam_);
    }
}

THUMB void btl::AttackAutoActionParam::calcEffectValue()
{
    if (player_->characterType_ == PLAYER) {
        effectValue_ = status::UseAction::getEffectValueToMonsterMin(actionIndex_);
    }

    for (int i = 0; i < 12; i++) {
        targetEffectValue_[i] = effectValue_;
    }
}

THUMB void btl::AttackAutoActionParam::calcEffectValueException()
{
    if (actionIndex_ == 71) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            targetEffectValue_[i] = status::getUsuallyAttackEffectValue(
                player_, battleSelectTargetParam_.getSourceCharacterStatus(i));
        }
    }

    if (actionIndex_ == 20 || actionIndex_ == 22 || actionIndex_ == 24) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            battleSelectTargetParam_.getSourceCharacterStatus(i);
            targetEffectValue_[i] = 1024;
        }
    }

    if (actionIndex_ == 137) {
        int count = battleSelectTargetParam_.sourceCount_;
        targetCount_ = count;
        for (int i = 0; i < targetCount_; i++) {
            status::CharacterStatus* target = battleSelectTargetParam_.getSourceCharacterStatus(i);
            status::getUsuallyAttackEffectValue(player_, target);
            targetEffectValue_[i] = (short)((short)status::getUsuallyAttackEffectValue(player_, target) * 3) / (count + 1);
        }
    }

    if (actionIndex_ == 109) {
        int value = status::getRandomVariation(
            func_02008ea0(player_->haveStatusInfo_.haveStatus_.level_ * 2 + 30, 0, 95), 10, 10);
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            battleSelectTargetParam_.getSourceCharacterStatus(i);
            targetEffectValue_[i] = value;
        }
    }

     if (actionIndex_ == 140) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            status::CharacterStatus* target = battleSelectTargetParam_.getSourceCharacterStatus(i);
            int value = status::getUsuallyAttackEffectValue(player_, target);
            if (target->type_.flag_  & 1) {
                value = value * 3 / 2;
            }
            targetEffectValue_[i] = value;
        }
    }

    if (actionIndex_ == 142) {
        targetCount_ = battleSelectTargetParam_.sourceCount_;
        for (int i = 0; i < targetCount_; i++) {
            status::CharacterStatus* target = battleSelectTargetParam_.getSourceCharacterStatus(i);
            int value = status::getUsuallyAttackEffectValue(player_, target);
            if (target->type_.flag_  & 2) {
                value = value * 3 / 2 + 1;
            }
            targetEffectValue_[i] = value;
        }
    }
}

THUMB void btl::AttackAutoActionParam::calcCorrectEffectVelue()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        lastEffectValue_[i] = status::HaveStatusInfo::getClampValue(
            lastEffectValue_[i], 0,
            battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHp());
    }
}

THUMB void btl::AttackAutoActionParam::calcCorrectEffectVelueException()
{
    calcCorrectEffectVelueMahokanta();
    calcCorrectEffectVelueMahosute();
}

THUMB void btl::AttackAutoActionParam::calcCorrectEffectVelueMahokanta()
{
    if (!status::UseAction::isMahokanta(actionIndex_)) {
        return;
    }

    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        if (battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahokanta)) {
            lastEffectValue_[i] = 0;
        }
    }
}

THUMB void btl::AttackAutoActionParam::calcCorrectEffectVelueMahosute()
{
    if (!status::UseAction::isMahosute(actionIndex_)) {
        return;
    }

    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        if (battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusMahosute)) {
            lastEffectValue_[i] = 0;
        }
    }
}