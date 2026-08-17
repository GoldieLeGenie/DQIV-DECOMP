#include "ov015/btl/BattleSelectTarget.hpp"
#include "ov003/btl/BattleSelectTargetParam.hpp"
#include "main/status/CharacterStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/StatusChange.hpp"
#include "main/dss/Random.hpp"
#include "main/status/ActionExec.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/HaveBattleStatus.hpp"

status::CharacterStatus * btl::BattleSelectTarget::specialTarget_[15]; //data_ov015_0217ad84
struct SpecialPlayerRate2 { int rate_[2]; };
struct SpecialPlayerRate3 { int rate_[3]; };
struct SpecialPlayerRate4 { int rate_[4]; };

const SpecialPlayerRate2 specialPlayerRate2 = { { 0x92, 0x6E } };//data_ov015_02176530 
const SpecialPlayerRate3 specialPlayerRate3 = { { 0x72, 0x55, 0x39 } };//data_ov015_02176538 ;
const SpecialPlayerRate4 specialPlayerRate4 = { { 0x71, 0x4D, 0x2D, 0x15 } };//data_ov015_02176544 ;

#pragma profile on

THUMB void btl::BattleSelectTarget::setTarget(status::UseActionParam* param, BattleSelectTargetParam::CallTargetSelect select)
{
    int i;
    int count;
    unsigned char brain = param->actorCharacterStatus_->haveBattleStatus_.brains_;

    if (select == BattleSelectTargetParam::StartTurn && param->actorCharacterStatus_->characterType_ != PLAYER && brain != 2) {
        count = param->targetCount_;
        for (i = 0; i < count; i++) {
            param->targetCharacterStatus_[i]->haveStatusInfo_.isDeath();
        }
    }

    while (setTargetSet(param, select) == 0) {
    }
}

THUMB int btl::BattleSelectTarget::setTargetSet(
    status::UseActionParam* actionParam,
    btl::BattleSelectTargetParam::CallTargetSelect callTarget)
{
    int result;
    int action;
    status::CharacterStatus* actor;
    status::CharacterStatus* target;
    int command;
    int count;

    action = actionParam->actionIndex_;
    result = 1;

    if (action == 0) {
        return result;
    }

    actor = actionParam->actorCharacterStatus_;

    {
        btl::BattleSelectTargetParam selectParam;

        selectParam.clear();

        selectParam.actionIndex_ = actionParam->actionIndex_;
        selectParam.callTarget_ = callTarget;
        selectParam.actorCharacterStatus_ = actor;

        command =
            actionParam->actorCharacterStatus_->haveBattleStatus_.selectCommand_;

        if (command == status::HaveBattleStatus::AISelect) {
            if (callTarget == BattleSelectTargetParam::StartTurn) {
                selectParam.targetGroup_ =
                    actor->haveBattleStatus_.selectedGroup_;

                selectParam.targetIndex_ =
                    actor->haveBattleStatus_.selectedTarget_;

                count = actionParam->targetCount_;
                selectParam.targetCount_ = count;

                for (int i = 0; i < count; i++) {
                    target = actionParam->targetCharacterStatus_[i];
                    selectParam.setTargetCharacterStatus(i, target);
                }
            }
        }
        else {
            selectParam.targetGroup_ =
                actor->haveBattleStatus_.selectedGroup_;

            selectParam.targetIndex_ =
                actor->haveBattleStatus_.selectedTarget_;

            count = actionParam->targetCount_;

            if (callTarget == BattleSelectTargetParam::StartTurn) {
                selectParam.targetCount_ = count;

                for (int i = 0; i < count; i++) {
                    target = actionParam->targetCharacterStatus_[i];
                    selectParam.setTargetCharacterStatus(i, target);
                }
            }
        }

        result = 1;

        switch (status::UseAction::getUseType(action)) {
        case status::UseItem::Myself:
            result = btl::BattleSelectTarget::setTargetMyself(
                actor, &selectParam);
            break;

        case status::UseItem::Friend:
            result = btl::BattleSelectTarget::setTargetFriend(
                actor, action, &selectParam);
            break;

        case status::UseItem::Enemy:
            result = btl::BattleSelectTarget::setTargetEnemy(
                actor, action, &selectParam);
            break;

        case status::UseItem::Both:
            result = btl::BattleSelectTarget::setTargetBoth(
                action, &selectParam);
            break;

        case status::UseItem::None:
            result = btl::BattleSelectTarget::setTargetNone(
                actor, &selectParam);
            break;
        }

        if (result != 0) {
            count = selectParam.targetCount_;

            for (int i = 0; i < count; i++) {
                target = selectParam.getTargetCharacterStatus(i);
                actionParam->targetCharacterStatus_[i] = target;
            }

            actionParam->targetCount_ = count;

            if (selectParam.actionIndex_ == 0x1e9) {
                actionParam->actionIndex_ = 0x1e9;
            }

            selectParam.getTargetCharacterStatus(0);

            target = selectParam.getTargetCharacterStatus(0);

            actor->haveBattleStatus_.selectedGroup_ =
                target->characterGroup_;

            actor->haveBattleStatus_.selectedTarget_ =
                selectParam.targetIndex_;

            actor->haveBattleStatus_.setActionIndex(
                selectParam.actionIndex_);
        }
        else {
            actionParam->actionIndex_ =
                selectParam.actorCharacterStatus_->
                    haveBattleStatus_.actionIndex_;
        }
    }

    return result;
}
THUMB void btl::BattleSelectTarget::printTarget(status::UseActionParam* param)
{
}

THUMB void btl::BattleSelectTarget::setTargetPlayer(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    status::g_Party.setBattleMode();
    count = status::g_Party.getCarriageOutCount();
    index = 0;

    for (int i = 0; i < count; i++) {
        if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
            param->setSourceCharacterStatus(index, status::g_Party.getPlayerStatus(i));
            index++;
        }
    }
    param->sourceCount_ = index;
}

THUMB void btl::BattleSelectTarget::setTargetPlayerWithDeath(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    status::g_Party.setBattleMode();
    count = status::g_Party.getCarriageOutCount();
    index = 0;

    for (int i = 0; i < count; i++) {
        param->setSourceCharacterStatus(index, status::g_Party.getPlayerStatus(i));
        index++;
    }
    param->sourceCount_ = index;
}


THUMB void btl::BattleSelectTarget::setTargetPlayerAll(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    status::g_Party.setBattleMode();
    count = status::g_Party.getCount();
    index = 0;

    for (int i = 0; i < count; i++) {
        if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
            param->setSourceCharacterStatus(index,  status::g_Party.getPlayerStatus(i));
            index++;
        }
    }
    param->sourceCount_ = index;
}

THUMB void btl::BattleSelectTarget::setTargetPlayerAllWithDeath(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    status::g_Party.setBattleMode();
    count = status::g_Party.getCount();
        index = 0;

    for (int i = 0; i < count; i++) {
        param->setSourceCharacterStatus(index,  status::g_Party.getPlayerStatus(i));
        index++;
    }
    param->sourceCount_ = index;
}

THUMB void btl::BattleSelectTarget::setTargetMonster(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    count = g_monster.getCount();
    index = 0;

    for (int i = 0; i < count; i++) {
        if (g_monster.getMonsterStatus(i)->haveStatusInfo_.isDeath() == 0) {
            param->setSourceCharacterStatus(index,  g_monster.getMonsterStatus(i));
            index++;
        }
    }
    param->sourceCount_ = index;
}


THUMB void btl::BattleSelectTarget::setTargetMonsterWithDeath(btl::BattleSelectTargetParam* param)
{
    int index;
    int count;

    count = g_monster.getCount();
    index = 0;

    for (int i = 0; i < count; i++) {
        param->setSourceCharacterStatus(index,  g_monster.getMonsterStatus(i));
        index++;
    }
    param->sourceCount_ = index;
}


THUMB int btl::BattleSelectTarget::setTargetBoth(int actionIndex, btl::BattleSelectTargetParam* param)
{
    int i;
    int index;
    int count;
    int monsterCount;
    int playerCount;
    int result;

    param->clear();
    param->actionIndex_ = actionIndex;
    if (status::UseAction::isTargetDeadOrAlive(actionIndex) != 0) {
        index = 0;
        count = g_monster.getCount();
        for (i = 0; i < count; i++) {
            if (g_monster.getMonsterStatus(i)->haveStatusInfo_.isDeath() == 0) {
                param->setSourceCharacterStatus(index,  g_monster.getMonsterStatus(i));
                index++;
            }
        }
        status::g_Party.setBattleMode();
        count = status::g_Party.getCarriageOutCount();
        for (i = 0; i < count; i++) {
            if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
                param->setSourceCharacterStatus(index,  status::g_Party.getPlayerStatus(i));
                index++;
            }
        }
        param->sourceCount_ = index;
    }
    else {
        monsterCount = g_monster.getCount();
        for (i = 0; i < monsterCount; i++) {
            param->setSourceCharacterStatus(i, g_monster.getMonsterStatus(i));
        }
        status::g_Party.setBattleMode();
        playerCount = status::g_Party.getCarriageOutCount();
        for (i = 0; i < playerCount; i++) {
           param->setSourceCharacterStatus(monsterCount + i, status::g_Party.getPlayerStatus(i));
        }
        param->sourceCount_ = playerCount + monsterCount;
    }

    result = 1;
    switch (status::UseAction::getUseArea(actionIndex)) {
    case 0:
        result = btl::BattleSelectTarget::setTargetOne(param);
        break;
    case 1:
        param->targetGroup_ = -1;
        result = btl::BattleSelectTarget::setTargetOne(param);
        break;
    case 2:
        result = btl::BattleSelectTarget::setTargetGroup(param);
        break;
    case 3:
        result = btl::BattleSelectTarget::setTargetAll(param);
        break;
    case 4:
    case 5:
    case 6:
        if (status::UseAction::isTargetDeadOrAlive(actionIndex) != 0) {
            index = 0;
            count = g_monster.getCount();
            for (i = 0; i < count; i++) {
                if (g_monster.getMonsterStatus(i)->haveStatusInfo_.isDeath() == 0) {
                    param->setSourceCharacterStatus(index,  g_monster.getMonsterStatus(i));
                    index++;
                }
            }
            status::g_Party.setBattleMode();
            count = status::g_Party.getCount();
            for (i = 0; i < count; i++) {
                if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
                    param->setSourceCharacterStatus(index,  status::g_Party.getPlayerStatus(i));
                    index++;
                }
            }
            param->sourceCount_ = index;
        }
        else {
            monsterCount = g_monster.getCount();
            for (i = 0; i < monsterCount; i++) {
                param->setSourceCharacterStatus( i, g_monster.getMonsterStatus(i));
            }
            status::g_Party.setBattleMode();
            playerCount = status::g_Party.getCount();
            for (i = 0; i < playerCount; i++) {
                param->setSourceCharacterStatus( monsterCount + i, status::g_Party.getPlayerStatus(i));
            }
            param->sourceCount_ = playerCount + monsterCount;
        }
        result = btl::BattleSelectTarget::setTargetAllWithCarriage(param);
        break;
    }
    return result;
}

THUMB void btl::BattleSelectTarget::setTargetStadiumEnemy(BattleSelectTargetParam* param)
{
    int outCount;
    int i;
    status::CharacterStatus* actor;
    int count;

    count = g_monster.getCount();
    outCount = 0;
    for (i = 0; i < count; i++) {
        if (g_monster.getMonsterStatus(i)->haveStatusInfo_.isDeath() == 0) {
            actor = param->actorCharacterStatus_;
            if (actor != g_monster.getMonsterStatus(i)) {
                param->setSourceCharacterStatus( outCount, g_monster.getMonsterStatus(i));
                outCount++;
            }
        }
    }
    param->sourceCount_ = outCount;
}

THUMB int btl::BattleSelectTarget::setTargetStadiumMine(BattleSelectTargetParam* param)
{
    param->setSourceCharacterStatus( 0, param->actorCharacterStatus_);
    param->sourceCount_ = 1;
    return 1;
}

THUMB int btl::BattleSelectTarget::setTargetNone(status::CharacterStatus* chara, BattleSelectTargetParam* param)
{
    if (param->actionIndex_ == 0x1D4) {
        if (dssrand::rand(300) > 99) {
            setTargetPlayer(param);
        }
        else {
            setTargetMonster(param);
        }
        return setTargetAll(param);
    }
    if (chara->characterType_ == PLAYER) {
        setTargetPlayer(param);
    }
    if (chara->characterType_ == MONSTER) {
        if (g_Global.fightStadiumFlag_ != 0) {
            setTargetStadiumMine(param);
        }
        else {
            setTargetMonster(param);
        }
    }
    param->setTargetCharacterStatus(0, chara);
    param->targetCount_ = 1;
    return setTargetOne(param);
}

THUMB int btl::BattleSelectTarget::setTargetMyself(status::CharacterStatus* chara, BattleSelectTargetParam* param)
{
    if (chara->characterType_ == PLAYER) {
        setTargetPlayer(param);
    }
    if (chara->characterType_ == MONSTER) {
        if (g_Global.fightStadiumFlag_!= 0) {
            setTargetStadiumMine(param);
        }
        else {
            setTargetMonster(param);
        }
    }
    return setTargetOne(param);
}

THUMB int btl::BattleSelectTarget::setTargetFriend(status::CharacterStatus* chara, int action, BattleSelectTargetParam* param)
{
    int target;
    int result;

    if (chara->characterType_ == PLAYER) {
        if (status::UseAction::isTargetDeadOrAlive(action) != 0) {
            setTargetPlayer(param);
        }
        else {
            setTargetPlayerWithDeath(param);
        }
        target = chara->haveBattleStatus_.selectedTarget_;
        if (target != -1) {
            if (chara->haveBattleStatus_.brains_ == 0) {
                if (status::UseAction::isTargetDeadOrAlive(action) != 0) {
                    setTargetPlayerWithDeath(param);
                    if (param->getSourceCharacterStatus(target)->haveStatusInfo_.isDeath() == 0) {
                        param->setTargetCharacterStatus( 0, param->getSourceCharacterStatus( target));
                        param->targetCount_ = 1;
                        return 1;
                    }
                    setTargetPlayer(param);
                }
                else {
                    setTargetPlayerWithDeath(param);
                    param->setTargetCharacterStatus( 0, param->getSourceCharacterStatus( target));
                    param->targetCount_ = 1;
                    return 1;
                }
            }
        }
    }
    if (chara->characterType_ == MONSTER) {
        if (status::UseAction::isTargetDeadOrAlive(action) != 0) {
            setTargetMonster(param);
        }
        else {
            setTargetMonsterWithDeath(param);
        }
        if (g_Global.fightStadiumFlag_ != 0) {
            setTargetStadiumMine(param);
        }
    }

    result = 1;
    switch (status::UseAction::getUseArea(action)) {
    case 0:
        result = setTargetOne(param);
        break;
    case 1:
        result = setTargetOne(param);
        break;
    case 2:
        result = setTargetGroup(param);
        break;
    case 3:
        result = setTargetAll(param);
        break;
    case 4:
    case 5:
    case 6:
        if (chara->characterType_ == PLAYER) {
            if (status::UseAction::isTargetDeadOrAlive(action) != 0) {
                setTargetPlayerAll(param);
            }
            else {
                setTargetPlayerAllWithDeath(param);
            }
        }
        result = setTargetAllWithCarriage(param);
        break;
    }
    return result;
}

THUMB int btl::BattleSelectTarget::setTargetEnemy(status::CharacterStatus* chara, int action, BattleSelectTargetParam* param)
{
    int group;
    int result;

    if (chara->characterType_ == PLAYER) {
        setTargetMonster(param);
        group = chara->haveBattleStatus_.selectedGroup_;
        if (param->targetCount_ > 0) {
            param->getSourceCountForGroup(group);
        }
        param->targetGroup_ = group;
    }
    else if (chara->characterType_ == MONSTER) {
        if (g_Global.fightStadiumFlag_ != 0) {
            setTargetStadiumEnemy(param);
        }
        else {
            setTargetPlayer(param);
        }
    }

    result = 1;
    switch (status::UseAction::getUseArea(action)) {
    case 0:
        result = setTargetOne(param);
        break;
    case 1:
        result = setTargetOne(param);
        break;
    case 2:
        result = setTargetGroup(param);
        break;
    case 3:
        result = setTargetAll(param);
        break;
    case 4:
    case 5:
    case 6:
        result = setTargetAllWithCarriage(param);
        break;
    }
    return result;
}

//no matching 
THUMB int btl::BattleSelectTarget::setTargetOne(btl::BattleSelectTargetParam* param)
{
    int group;
    int index;
    status::CharacterStatus* target;
    status::CharacterStatus* actor;
    int result = 1;
    int flag = 0;
    int i;
    int action;
    CharacterType playertype;

    switch (param->callTarget_) {
    case BattleSelectTargetParam::StartTurn:
        if (param->targetCount_ > 0) {
            flag = result;
            for (i = 0; i < param->targetCount_; i++) {
                if (param->getTargetCharacterStatus(i)->haveStatusInfo_.isDeath() != 0) {
                    flag = 0;
                }
            }
            if (flag != 0 && status::UseAction::isTargetDeadOrAlive(param->actionIndex_) != 0) {
                group = param->targetGroup_;
                for (i = 0; i < param->getSourceCountForGroup(group); i++) {
                    target = param->getSourceCharacterStatusForGroup(group, i);
                    if (target == param->getTargetCharacterStatus(0)) {
                        param->targetIndex_ = i;
                    }
                }
                actor = param->actorCharacterStatus_;
                playertype = actor->characterType_;

                action = param->actionIndex_;
                if (playertype == PLAYER && action == 0x47) {
                    if (actor->haveStatusInfo_.haveEquipment_.isEquipment(0x27) != 0 ||
                        actor->haveStatusInfo_.haveEquipment_.isEquipment(0x28) != 0) {
                        flag = 0;
                    }
                }
            }
            else if (flag == 0 && status::UseAction::isTargetDeadOrAlive(param->actionIndex_) == 0) {
                group = param->targetGroup_;
                for (i = 0; i < param->getSourceCountForGroupDead(group); i++) {
                    target = param->getSourceCharacterStatusForGroupDead(group, i);
                    if (target == param->getTargetCharacterStatus(0)) {
                        param->targetIndex_ = i;
                    }
                }
            }
        }
        break;
    default:
        break;
    }

    if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 2) {
        switch (status::excelParam.actionParam_[param->actionIndex_].god) {
        case 3:    result = func_ov015_02172ae8(param); break;
        case 0xa:  result = func_ov015_021739f4(param); break;
        case 8:    result = func_ov015_02172cbc(param); break;
        case 0xf:  result = func_ov015_02173bec(param); break;
        case 0x44: result = func_ov015_02172de0(param); break;
        case 0x45: result = func_ov015_02173de4(param); break;
        case 0x13: result = func_ov015_02174278(param); break;
        case 0x17: result = func_ov015_02174498(param); break;
        case 0x1f: result = func_ov015_02174690(param); break;
        case 0x2a: result = func_ov015_02173fd0(param); break;
        case 0x21: result = func_ov015_021732f4(param); break;
        case 0x22: result = func_ov015_021734b4(param); break;
        case 0x23: result = func_ov015_02173504(param); break;
        case 0x25: result = func_ov015_0217377c(param); break;
        case 0x3c: result = func_ov015_021739a8(param); break;
        case 0x3e: result = func_ov015_02174c94(param); break;
        case 0x37: result = func_ov015_02174cf0(param); break;
        case 0x36: result = func_ov015_02174e3c(param); break;
        case 1:    // fall-through
        case 0x40: result = func_ov015_02172964(param); break;
        case 0x20: result = func_ov015_02174888(param); break;
        case 0x2e: result = func_ov015_02174d30(param); break;
        case 0x2c: result = func_ov015_02174c4c(param); break;
        case 0x11: result = func_ov015_02174fd0(param); break;
        case 0x34: result = func_ov015_02174d78(param); break;
        case 0x31: result = func_ov015_02174f14(param); break;
        case 0x42: result = func_ov015_02172d04(param); break;
        case 0:    result = func_ov015_021750f8(param); break;
        case 0x14: case 0x15:
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 1 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].human) {
        case 3:    result = func_ov015_02172ae8(param); break;
        case 8:    result = func_ov015_02172cbc(param); break;
        case 0xe:  result = func_ov015_02172ce0(param); break;
        case 0x44: result = func_ov015_02172de0(param); break;
        case 0x12: result = func_ov015_02172f80(param); break;
        case 0x16: result = func_ov015_02173124(param); break;
        case 0x1d: result = func_ov015_021732d0(param); break;
        case 0x21: result = func_ov015_021732f4(param); break;
        case 0x22: result = func_ov015_021734b4(param); break;
        case 0x23: result = func_ov015_02173504(param); break;
        case 0x25: result = func_ov015_0217377c(param); break;
        case 0x3c: result = func_ov015_021739a8(param); break;
        case 0x3e: result = func_ov015_02174c94(param); break;
        case 0x37: result = func_ov015_02174cf0(param); break;
        case 0x36: result = func_ov015_02174e3c(param); break;
        case 1:    // fall-through
        case 0x1e: // fall-through
        case 0x40: result = func_ov015_02172964(param); break;
        case 0x2e: result = func_ov015_02174d30(param); break;
        case 0x2c: result = func_ov015_02174c4c(param); break;
        case 0x10: result = func_ov015_02174bf4(param); break;
        case 0x34: result = func_ov015_02174d78(param); break;
        case 0x31: result = func_ov015_02174f14(param); break;
        case 0x42: result = func_ov015_02172d04(param); break;
        case 0:    result = func_ov015_021750f8(param); break;
        case 0x17:
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 0 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].fool) {
        case 0x25: result = func_ov015_0217377c(param); break;
        case 1:    // fall-through
        case 0x1e: // fall-through
        case 0x40: // fall-through
        case 0x41: result = func_ov015_021751e4(param); break;
        case 0x42: result = func_ov015_02172d04(param); break;
        case 0:    result = func_ov015_021750f8(param); break;
        default:   result = func_ov015_02172964(param); break;
        }
    }

    if (result == 0) {
        param->actorCharacterStatus_->haveBattleStatus_.setActionDisable2nd();
        param->actorCharacterStatus_->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartRound);
        return 0;
    }

    if (status::UseAction::isTargetDeadOrAlive(param->actionIndex_) != 0) {
        group = param->targetGroup_;
        index = param->targetIndex_;
        param->getSourceCountForGroup(group);
        if (param->targetCount_ == 1) {
            target = param->getSourceCharacterStatusForGroup(group, index);
            param->setTargetCharacterStatus(0, target);
            param->targetCount_ = 1;
        }
    }
    else {
        group = param->targetGroup_;
        index = param->targetIndex_;
        param->getSourceCountForGroupDead(group);
        if (param->targetCount_ == 1) {
            target = param->getSourceCharacterStatusForGroupDead(group, index);
            param->setTargetCharacterStatus(0, target);
            param->targetCount_ = 1;
        }
    }
    return 1;
}

THUMB int btl::BattleSelectTarget::setTargetGroup(btl::BattleSelectTargetParam* param)
{
    int result;
    int flag;
    int i;
    int count;
    int group;
    status::CharacterStatus* target;

    result = 1;
    flag = 0;
    if (param->callTarget_ == BattleSelectTargetParam::StartTurn) {
        if (param->getSourceCountForGroup(param->targetGroup_) > 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }

    if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 2) {
        switch (status::excelParam.actionParam_[param->actionIndex_].god) {
        case 4:    result = func_ov015_02175370(param); break;
        case 7:    result = func_ov015_02175474(param); break;
        case 9:    result = func_ov015_021757dc(param); break;
        case 0xc:  result = func_ov015_02175900(param); break;
        case 8:    result = func_ov015_02175474(param); break;
        case 0xd:  result = func_ov015_02175498(param); break;
        case 0x15: result = func_ov015_02175a18(param); break;
        case 0x1b: result = func_ov015_02175624(param); break;
        case 0x29: result = func_ov015_02175704(param); break;
        case 0x3d: result = func_ov015_02175528(param); break;
        case 0x32: result = func_ov015_021754e0(param); break;
        case 0x33: result = func_ov015_02175504(param); break;
        case 0:
        case 2:
        case 0x3f: result = func_ov015_021752a4(param); break;
        default:   result = func_ov015_021752a4(param); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 1 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].human) {
        case 7:    result = func_ov015_02175474(param); break;
        case 0xd:  result = func_ov015_02175498(param); break;
        case 0xb:  result = func_ov015_021754bc(param); break;
        case 0x14: result = func_ov015_0217554c(param); break;
        case 0x1b: result = func_ov015_02175624(param); break;
        case 0x29: result = func_ov015_02175704(param); break;
        case 0x3d: result = func_ov015_02175528(param); break;
        case 0x32: result = func_ov015_021754e0(param); break;
        case 0x33: result = func_ov015_02175504(param); break;
        case 0:
        case 2:
        case 0x3f: result = func_ov015_021752a4(param); break;
        default:   result = func_ov015_021752a4(param); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 0 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].fool) {
        case 0:
        case 2:
        case 0x3f: result = func_ov015_021752a4(param); break;
        default:   result = func_ov015_021752a4(param); break;
        }
    }

    if (result == 0) {
        param->actorCharacterStatus_->haveBattleStatus_.setActionDisable2nd();
        param->actorCharacterStatus_->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartRound);
        return 0;
    }

    group = param->targetGroup_;
    count = param->getSourceCountForGroup(group);
    for (i = 0; i < count; i++) {
        target = param->getSourceCharacterStatusForGroup( group, i);
        param->setTargetCharacterStatus( i, target);
    }
    param->targetCount_ = count;
    return 1;
}

THUMB int btl::BattleSelectTarget::setTargetAll(btl::BattleSelectTargetParam* param)
{
    int result;
    int flag;
    int outCount;
    int i;
    status::CharacterStatus* target;
    status::HaveStatusInfo* info;
    int count;

    result = 1;
    flag = 0;
    if (param->callTarget_ == BattleSelectTargetParam::StartTurn) {
        if (param->getSourceCountForGroup(param->targetGroup_) > 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }
    }

    if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 2) {
        switch (status::excelParam.actionParam_[param->actionIndex_].god) {
        case 5:    result = func_ov015_02175c44(param); break;
        case 0x30: result = func_ov015_02175d88(param); break;
        case 0x2d: result = func_ov015_02175d08(param); break;
        case 0x26: result = func_ov015_02176144(param); break;
        case 0x35: result = func_ov015_02176208(param); break;
        case 0x2f: result = func_ov015_0217629c(param); break;
        case 0x24: result = func_ov015_02175df8(param); break;
        case 0x28: result = func_ov015_02175ef0(param); break;
        case 0x2b: result = func_ov015_02175fd0(param); break;
        case 0x1c: result = func_ov015_021760b0(param); break;
        case 0:
        case 0x3b: result = func_ov015_021763ac(); break;
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 1 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].human) {
        case 0x30: result = func_ov015_02175d88(param); break;
        case 0x2d: result = func_ov015_02175d08(param); break;
        case 0x26: result = func_ov015_02176144(param); break;
        case 0x35: result = func_ov015_02176208(param); break;
        case 0x2f: result = func_ov015_0217629c(param); break;
        case 0x24: result = func_ov015_02175df8(param); break;
        case 0x1c: result = func_ov015_021760b0(param); break;
        case 0:
        case 0x3b: result = func_ov015_021763ac(); break;
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 0 && flag == 0) {
        switch (status::excelParam.actionParam_[param->actionIndex_].fool) {
        case 0:
        case 0x3b: result = func_ov015_021763ac(); break;
        default:   result = func_ov015_021763ac(); break;
        }
    }

    if (result == 0) {
        param->actorCharacterStatus_->haveBattleStatus_.setActionDisable2nd();
        param->actorCharacterStatus_->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartRound);
        return 0;
    }

    count = param->sourceCount_;
    outCount = 0;
    for (i = 0; i < count; i++) {
        target = param->getSourceCharacterStatus( i);
        info = &target->haveStatusInfo_;
        if (info->isEscapeFlag() == 0) {
            if (info->isDisappearFlag() == 0) {
                param->setTargetCharacterStatus( outCount, target);
                outCount++;
            }
        }
    }
    param->targetCount_ = outCount;
    return 1;
}


THUMB int btl::BattleSelectTarget::setTargetAllWithCarriage(btl::BattleSelectTargetParam* param)
{
    int result;
    int flag;
    int outCount;
    status::CharacterStatus* target;
    status::HaveStatusInfo* info;
    int count;

    result = 1;
    flag = 0;
    if (param->callTarget_ == BattleSelectTargetParam::StartTurn && param->sourceCount_ > 0) {
        flag = 1;
    }

    if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 2) {
        switch (param->actionIndex_) {
        case 0x24: result = func_ov015_02175df8(param); break;
        case 0x28: result = func_ov015_02175ef0(param); break;
        case 0x2b: result = func_ov015_02175fd0(param); break;
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 1 && flag == 0) {
        switch (param->actionIndex_) {
        case 0x24: result = func_ov015_02175df8(param); break;
        case 0x28: result = func_ov015_02175ef0(param); break;
        case 0x2b: result = func_ov015_02175fd0(param); break;
        default:   result = func_ov015_021763ac(); break;
        }
    }
    else if (param->actorCharacterStatus_->haveBattleStatus_.brains_ == 0 && flag == 0) {
        result = func_ov015_021763ac();
    }

    if (result == 0) {
        param->actorCharacterStatus_->haveBattleStatus_.setActionDisable2nd();
        param->actorCharacterStatus_->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartRound);
        return 0;
    }

    count = param->sourceCount_;
    outCount = 0;
    for (int i = 0; i < count; i++) {
        target = param->getSourceCharacterStatus(i);
        info = &target->haveStatusInfo_;
        if (info->isEscapeFlag() == 0) {
            if (info->isDisappearFlag() == 0) {
                param->setTargetCharacterStatus( outCount, target);
                outCount++;
            }
        }
    }
    param->targetCount_ = count;
    return 1;
}


THUMB void btl::BattleSelectTarget::setTargetSpecial(status::UseActionParam* param)
{
    if (param->actorCharacterStatus_->characterType_ == PLAYER) {
        setTargetSpecialToMonster(param);
    }
    if (param->actorCharacterStatus_->characterType_ == MONSTER) {
        setTargetSpecialToPlayer(param);
    }
}

THUMB void btl::BattleSelectTarget::setTargetSpecialToPlayer(status::UseActionParam* param)
{
    status::CharacterStatus* actor;     
    int aliveCount;
    int i;
    int count;
    int target;
    int aliveIndex;

    status::g_Party.setBattleMode();
    count = status::g_Party.getCount();

    aliveCount = 0;
    for (int i = 0; i < count; i++) {
        if (status::g_Party.isInsideCarriage(i) == 0) {
            if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
                aliveCount++;
            }
        }
    }

    switch (aliveCount) {
    case 1:
        target = 0;
        break;
    case 2: 
        SpecialPlayerRate2 table = specialPlayerRate2;
        target = func_0201d8c8(table.rate_, dssrand::rand(256), 2);
        break;
    
    case 3: 
        SpecialPlayerRate3 table2 = specialPlayerRate3;
        target = func_0201d8c8(table2.rate_, dssrand::rand(256), 3);
        break;
    default: 
        SpecialPlayerRate4 table3 = specialPlayerRate4;
        target = func_0201d8c8(table3.rate_, dssrand::rand(256), 4);
        break;
    }
    aliveIndex = 0;
    for (i = 0; i < count; i++) {
        if (status::g_Party.isInsideCarriage(i) == 0) {
            if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
                if (target == aliveIndex) {
                    target = i;
                    break;
                }
                aliveIndex++;
            }
        }
    }

    param->targetCharacterStatus_[0] = status::g_Party.getPlayerStatus(target);
    param->targetCount_ = 1;
    actor = param->actorCharacterStatus_;
    param->damage_ = status::getUsuallyAttackEffectValue(actor, status::g_Party.getPlayerStatus(target));
}

THUMB void btl::BattleSelectTarget::setTargetSpecialToMonster(status::UseActionParam* param)
{
    BattleSelectTargetParam list;
    int values[8];
    int group;
    int count;
    int i;
    list.clear();
    setTargetMonster(&list);

    group = param->actorCharacterStatus_->haveBattleStatus_.selectedGroup_;
    list.targetGroup_ = group;

    count = list.getSourceCountForGroup(group);
    for (int i = 0; i < count; i++) {
        specialTarget_[i] = list.getSourceCharacterStatusForGroup(group, i);
    }

    for (int g = 0; g < 4; g++) {
        if (g != group && count == 0) {
            count = list.getSourceCountForGroup(g);
            i = 0;
            if (count > 0) {
                group = g;
                for (; i < count; i++) {
                    specialTarget_[i] = list.getSourceCharacterStatusForGroup( g, i);
                }
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        values[i] = 0;
    }
    for (int i = 0; i < count; i++) {
        values[i] = status::getUsuallyAttackEffectValue(param->actorCharacterStatus_, specialTarget_[i]);
        specialTarget_[i]->haveStatusInfo_.setSpecialTargetDamage(values[i]);
    }

    count = setTargetSpecialToMonsterNoSpazz2(count);
    if (count == 1) {
        setTargetSpecialToParam2(param);
        return;
    }
    count = setTargetSpecialToMonsterNoConfusion2(count);
    if (count == 1) {
        setTargetSpecialToParam2(param);
        return;
    }
    count = setTargetSpecialToMonsterNearDeath2(count);
    if (count == 1) {
        setTargetSpecialToParam2(param);
        return;
    }
    count = setTargetSpecialToMonsterHpMin2(count);
    if (count == 1) {
        setTargetSpecialToParam2(param);
        return;
    }
}



THUMB int btl::BattleSelectTarget::setTargetSpecialToMonsterNoSpazz2(int targetCount)
{
    status::CharacterStatus* list[8];
    int noSpazzCount;

    noSpazzCount = 0;
    for (int i = 0; i < targetCount; i++) {
        if (specialTarget_[i]->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusSpazz) == 0) {
            list[noSpazzCount++] = specialTarget_[i];
        }
    }
    if (noSpazzCount != 0) {
        for (int i = 0; i < 8; i++) {
            specialTarget_[i] = 0;
        }
        for (int i = 0; i < noSpazzCount; i++) {
            specialTarget_[i] = list[i];
        }
    }
    else {
        noSpazzCount = targetCount;
    }
    return noSpazzCount;
}

THUMB int btl::BattleSelectTarget::setTargetSpecialToMonsterNoConfusion2(int targetCount)
{
    status::CharacterStatus* list[8];
    int noConfusionCount;
 

    noConfusionCount = 0;
    for (int i = 0; i < targetCount; i++) {
        if (specialTarget_[i]->haveStatusInfo_.statusChange_.isEnable(status::StatusChange::StatusConfusion) == 0) {
            list[noConfusionCount++] = specialTarget_[i];
        }
    }
    if (noConfusionCount != 0) {
        for (int i = 0; i < 8; i++) {
            specialTarget_[i] = 0;
        }
        for (int i = 0; i < noConfusionCount; i++) {
            specialTarget_[i] = list[i];
        }
    }
    else {
        noConfusionCount = targetCount;
    }
    return noConfusionCount;
}


THUMB int btl::BattleSelectTarget::setTargetSpecialToMonsterNearDeath2(int targetCount)
{
    status::CharacterStatus* list[8];
    status::CharacterStatus* target;
    int damage;
    int maxHp;
    int nearCount;

    nearCount = 0;
    for (int i = 0; i < targetCount; i++) {
        damage = specialTarget_[i]->haveStatusInfo_.getSpecialTargetDamage();
        if (specialTarget_[i]->haveStatusInfo_.getHp() <= damage) {
            list[nearCount++] = specialTarget_[i];
        }
    }
    if (nearCount != 0) {
        for (int i = 0; i < 8; i++) {
            specialTarget_[i] = 0;
        }
        for (int i = 0; i < nearCount; i++) {
            specialTarget_[i] = list[i];
        }
        maxHp = 0;
        target = 0;
        for (int i = 0; i < nearCount; i++) {
            if (maxHp < specialTarget_[i]->haveStatusInfo_.getHp()) {
                maxHp = specialTarget_[i]->haveStatusInfo_.getHp();
                target = specialTarget_[i];
            }
        }
        if (target != 0) {
            nearCount = 1;
            for (int i = 0; i < 8; i++) {
                specialTarget_[i] = 0;
            }
            specialTarget_[0] = target;
        }
    }
    else {
        nearCount = targetCount;
    }
    return nearCount;
}

THUMB int btl::BattleSelectTarget::setTargetSpecialToMonsterHpMin2(int targetCount)
{
    int values[8];
    int damage;
    int index;
    status::CharacterStatus* target;

    for (int i= 0; i < targetCount; i++) {
        values[i] = 0;
    }
    for (int i= 0; i < targetCount; i++) {
        damage = specialTarget_[i]->haveStatusInfo_.getSpecialTargetDamage();
        values[i] = specialTarget_[i]->haveStatusInfo_.getHp() - damage;
    }
    index = func_0201d948(values, targetCount);
    target = specialTarget_[index];
    for (int i = 0; i < 8; i++) {
        specialTarget_[i] = 0;
    }
    specialTarget_[0] = target;
    return 1;
}


THUMB void btl::BattleSelectTarget::setTargetSpecialToParam2(status::UseActionParam* param)
{
    if (specialTarget_[0] != 0) {
        param->targetCharacterStatus_[0] = specialTarget_[0];
        param->targetCount_ = 1;
        param->damage_ = specialTarget_[0]->haveStatusInfo_.getSpecialTargetDamage();
    }
}


THUMB void btl::BattleSelectTarget::setTargetCrossFire(status::UseActionParam* param)
{
    BattleSelectTargetParam list;
    int i;
    int found;
    int crossFire;

    list.clear();
    list.actorCharacterStatus_ = param->actorCharacterStatus_;

    if (param->actorCharacterStatus_->characterType_ == PLAYER) {
        setTargetMonster(&list);
    }
    if (param->actorCharacterStatus_->characterType_ == MONSTER) {
        setTargetPlayer(&list);
    }

    crossFire = param->actorCharacterStatus_->haveBattleStatus_.crossFire_;
    if (crossFire == 0) {
        return;
    }

    if (crossFire == 1) {
        found = -1;
        int target = param->actorCharacterStatus_->haveBattleStatus_.crossFireTarget_;
        if (target != -1) {
            int count = list.sourceCount_;
            for (i = 0; i < count; i++) {
                if (target == list.getSourceCharacterStatus(i)->arrayIndex_) {
                    found = i;
                    break;
                }
            }
        }
        if (found == -1) {
            target = -1;
        }
        if (target == -1) {
            found = dssrand::rand(list.sourceCount_);
            list.actorCharacterStatus_->haveBattleStatus_.crossFireTarget_ = list.getSourceCharacterStatus(found)->arrayIndex_;
        }
        param->targetCharacterStatus_[0] = list.getSourceCharacterStatus(found);
        param->targetCount_ = 1;
    }

    if (crossFire == 2) {
        int hp[8];
        for (int i = 0; i < 8; i++) {
            hp[i] = 0;
        }
        int count = list.targetCount_;
        for (int i = 0; i < count; i++) {
            hp[i] = list.getSourceCharacterStatus(i)->haveStatusInfo_.getHp();
        }
        int index = func_0201d948(hp, count);
        param->targetCharacterStatus_[0] = list.getSourceCharacterStatus(index);
        param->targetCount_ = 1;
    }

    if (crossFire == 3) {
        list.setTargetCharacterStatus(0, list.getSourceCharacterStatus(list.targetCount_ - 1));
        list.targetCount_ = 1;
        param->targetCharacterStatus_[0] = list.getSourceCharacterStatus(0);
        param->targetCount_ = 1;
    }
}


THUMB void btl::BattleSelectTarget::setActorAction(status::UseActionParam* param,
                                             BattleSelectTargetParam::CallTargetSelect select)
{
    status::CharacterStatus* actor = param->actorCharacterStatus_;

    if (select == BattleSelectTargetParam::StartTurn) {
        if (actor->haveBattleStatus_.brains_ == 2) {
            actor->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartTurn);
        }
    }
    else {
        actor->haveBattleStatus_.setActionSelect(status::HaveBattleStatus::StartRound);
    }

    param->actorCharacterStatus_->haveBattleStatus_.setupTurnBeforeAction();

    param->actionIndex_   = actor->haveBattleStatus_.actionIndex_;
    param->itemSortIndex_ = actor->haveBattleStatus_.sortIndex_;
}
#pragma profile off