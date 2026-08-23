#include "ov003/btl/AutoActionParam.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/UseItem.hpp"
#include "main/status/ActionExec.hpp"
#include "ov015/btl/BattleSelectTarget.hpp"

#pragma profile on

THUMB btl::AutoActionParam::AutoActionParam()
{
    clear();
}

THUMB btl::AutoActionParam::~AutoActionParam()
{
}

THUMB void btl::AutoActionParam::setup(int actionIndex, int itemIndex, status::CharacterStatus* player)
{
    actionIndex_ = actionIndex;
    itemIndex_ = itemIndex;
    player_ = player;

    setupTarget();
    calcEffectValue();
    calcEffectValueException();
    calcActionDefence();
    calcTargetEffectValue();
    calcCorrectEffectVelue();
    calcCorrectEffectVelueException();
    calcGroupValue();
    calcAllValue();
    calcTargetCount();
    calcSelectGroup();
    calcSelectIndex();
}

THUMB void btl::AutoActionParam::clear()
{
    actionIndex_ = 0;
    itemIndex_ = 0;

    for (int i = 0; i < 12; i++) {
        targetActionDefence_[i] = 0;
        targetEffectValue_[i] = 0;
        lastEffectValue_[i] = 0;
    }

    for (int i = 0; i < 5; i++) {
        targetGroupEffectValue_[i] = 0;
    }
}

THUMB void btl::AutoActionParam::setupTarget()
{
    battleSelectTargetParam_.clear();

    if (player_->characterType_ == MONSTER) {
        btl::BattleSelectTarget::setTargetMonster(&battleSelectTargetParam_);
    }
    if (player_->characterType_ == PLAYER) {
        btl::BattleSelectTarget::setTargetPlayer(&battleSelectTargetParam_);
    }
}

THUMB void btl::AutoActionParam::calcEffectValue()
{
    if (player_->characterType_ == PLAYER) {
        effectValue_ = status::UseAction::getEffectValueToMonsterMin(actionIndex_);
    }

    for (int i = 0; i < 12; i++) {
        targetEffectValue_[i] = effectValue_;
    }
}

THUMB void btl::AutoActionParam::calcEffectValueException()
{
    if (actionIndex_ != 71) {
        return;
    }

    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        targetEffectValue_[i] = status::getUsuallyAttackEffectValue(
            player_, battleSelectTargetParam_.getSourceCharacterStatus(i));
    }
}

THUMB void btl::AutoActionParam::calcActionDefence()
{
    ActionDefenceKind kind;
    ActionDefenceType type;

    kind = status::UseAction::getActionDefenceKind(actionIndex_);
    type = status::UseAction::getActionDefenceType(actionIndex_);

    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        targetActionDefence_[i] = battleSelectTargetParam_.getSourceCharacterStatus(i)
            ->haveStatusInfo_.actionDefence_.execAI(kind,type);
    }
}

THUMB void btl::AutoActionParam::calcTargetEffectValue()
{
    for (int i = 0; i < targetCount_; i++) {
        lastEffectValue_[i] = targetActionDefence_[i] * targetEffectValue_[i] / 1000;
    }
}

THUMB void btl::AutoActionParam::calcCorrectEffectVelue()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        lastEffectValue_[i] = status::HaveStatusInfo::getClampValue(
            lastEffectValue_[i], 0,
            battleSelectTargetParam_.getSourceCharacterStatus(i)->haveStatusInfo_.getHp());
    }
}

THUMB void btl::AutoActionParam::calcCorrectEffectVelueException(){
    return;
}


THUMB void btl::AutoActionParam::calcGroupValue()
{
    targetCount_ = battleSelectTargetParam_.sourceCount_;

    for (int i = 0; i < targetCount_; i++) {
        int group = battleSelectTargetParam_.getSourceCharacterStatus(i)->characterGroup_;
        targetGroupEffectValue_[group] = targetGroupEffectValue_[group] + lastEffectValue_[i];
    }
}

THUMB void btl::AutoActionParam::calcAllValue(){
    return;
}

THUMB void btl::AutoActionParam::calcTargetCount()
{
    int count;
    short* total;
    switch (status::UseAction::getUseArea(actionIndex_)) {
    case 1:
        for (int i = 0; i < 4; i++) {
            count = battleSelectTargetParam_.getSourceCountForGroup(i);
            if (count != 0) {
                targetGroupEffectValue_[i] = targetGroupEffectValue_[i] / count;
            }
        }
        break;
    case 3: {
        int i;
        for (i = 0;  i < 4; i++) {
            total = &targetGroupEffectValue_[4];
            *total += targetGroupEffectValue_[i];
        }
        for (int j = 0; j < 4; j++) {
            targetGroupEffectValue_[j] = 0;
        }
        break;
    }
    case 0:
    case 2:
    case 4:
    case 5:
    case 6:
        break;
    }
}

THUMB void btl::AutoActionParam::calcSelectGroup()
{
    int max = -1;
    maxGroup_ = -1;
    for (int i = 0; i < 5; i++) {
        if (max < targetGroupEffectValue_[i]) {
            max = targetGroupEffectValue_[i];
            maxGroup_ = i;
        }
    }
}

THUMB void btl::AutoActionParam::calcSelectIndex()
{
    int max = -1;
    maxIndex_ = -1;
    for (int i = 0; i < 12; i++) {
        if (max < lastEffectValue_[i]) {
            max = lastEffectValue_[i];
            maxIndex_ = i;
        }
    }
}