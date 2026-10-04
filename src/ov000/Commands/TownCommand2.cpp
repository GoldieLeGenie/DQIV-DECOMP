#include "ov000/Commands/TownCommand.hpp"
#include "ov000/town/TownWindowSystem.hpp"
#include "ov000/town/TownActionCalculate.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/global/Global.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/menu/MenuDataCommon.hpp"
#include "main/dss/Random.hpp"
#include "main/profile/Profile.hpp"

THUMB int cmd_set_character_position(int* param)
{
    int index = getPlacementCtrlId();
    dss::Fix32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    TownCharacterManager::getSingleton()->setPosition(index, pos);
    return 1;
}

THUMB int cmd_set_character_direction(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setRotate(index, param[0] << 14);
    return 1;
}

THUMB int cmd_character_action_sleep(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setSleepCharacter(index, param[0]);
    return 1;
}

THUMB int cmd_character_action_display(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setDisplay(index, param[0]);
    return 1;
}

THUMB int cmd_character_action_near(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setNearCharacter(index, param[0]);
    return 1;
}

THUMB int cmd_map_animation_a(int* param)
{
    TownStageManager::getSingleton()->setObjectDraw(param[0], param[1], 1);
    return 1;
}

THUMB int cmd_set_map_collision(int* param)
{
    if (param[1] == 1) {
        TownStageManager::getSingleton()->setCollision(param[0], 0);
        TownStageManager::getSingleton()->setCollisionObject(param[0]);
    } else {
        TownStageManager::getSingleton()->setCollision(param[0], 1);
        TownStageManager::getSingleton()->collEraseMapUid(param[0]);
    }
    return 1;
}

THUMB int cmd_chara_set_priority_sure_appointment(int* param)
{
    int values[5];
    values[0] = param[3];
    values[1] = param[4];
    values[2] = param[5];
    values[3] = param[6];
    values[4] = param[7];
    for (unsigned int i = 0; i < (unsigned int)param[2]; i++) {
        if (values[i] < 100) {
            values[i]--;
        }
    }
    if (g_Global.isAreaChange() == 1) {
        func_02037e20(func_02037da4(), param[0], param[1], param[2], values);
    }
    return 1;
}

THUMB int cmd_chara_set_normal_sure_appointment(int* param)
{
    if (g_Global.isAreaChange() == 1) {
        func_02037db0(func_02037da4(), param[0], param[1]);
    }
    return 1;
}

THUMB int cmd_chara_set_normal_sure(int* param)
{
    int index = getPlacementCtrlId();
    int id = getPlacementIndex(index);
    int result = func_02037ef4(func_02037da4(), id, param[0]);
    if (result != 0xff) {
        TownCharacterManager::getSingleton()->setSureId(index, param[0]);
        TownCharacterManager::getSingleton()->character_[index]->changePose(result);
    } else {
        TownCharacterManager::getSingleton()->setDisplay(index, 0);
    }
    return 0;
}

THUMB int cmd_chara_talk_to_player_sure(int* param)
{
    int index = getPlacementCtrlId();
    if (index < getObjectCount()) {
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(index));
    }
    if (param[1] == 1) {
        data_020f0078 = 1;
    } else {
        int id = getPlacementIndex(index);
        int value = TownCharacterManager::getSingleton()->character_[index]->getSurechigaiMapNo();
        func_0203a34c(&data_020f0078, func_02037f40(func_02037da4(), id, value));
    }
    if (param[0] == 1) {
        TownCharacterManager::getSingleton()->setPlayerDirection(index);
    }

    unsigned char* name = func_0203a65c(&data_020f0078);
    unsigned char* comment = func_0203a938(&data_020f0078);
    unsigned char sex = func_0203a714(&data_020f0078);
    unsigned char aetas = func_0203a750(&data_020f0078);
    unsigned char skill = func_0203a78c(&data_020f0078);
    unsigned char* townName = func_0203a820(&data_020f0078);
    char text0[0x40];
    char text1[0x40];
    char text2[0x40];
    func_ov016_0216fa48(text0, text1, text2, (int)comment);
    TextAPI::setUserString(0, (char*)name);
    TextAPI::setUserString(1, (char*)text0);
    TextAPI::setUserString(2, (char*)text1);
    TextAPI::setUserString(3, (char*)text2);
    TextAPI::setUserString(4, (char*)townName);
    TownWindowSystem::getSingleton()->openCommonMessage();

    if (param[1] == 1) {
        TextAPI::setMACRO0(0x1c, 0xd0000000, 0);
        TextAPI::setMACRO1(0x21, 0xd0000000, 1);
        TextAPI::setMACRO2(0x21, 0xd0000000, 2);
        TextAPI::setMACRO3(0x21, 0xd0000000, 3);
        TownWindowSystem::getSingleton()->addCommonMessage(0x92a8c);
    } else {
        TextAPI::setMACRO0(0x1d, 0xd0000000, 0);
        TextAPI::setMACRO1(0x20, 0xd0000000, 1);
        TextAPI::setMACRO2(0x20, 0xd0000000, 2);
        TextAPI::setMACRO3(0x20, 0xd0000000, 3);
        TownWindowSystem::getSingleton()->addCommonMessage(0x92ac0);
    }

    if (param[1] != 1) {
        ui_MsgSndSet(0x30);
        TextAPI::setUserString(0, (char*)name);
        TextAPI::setMACRO0(0x1d, 0xd0000000, 0);
        TextAPI::setMACRO0(0x22, 0xa0000000, menu::MenuDataCommon::getSurechigaiAetas(aetas) & 0xfffffff);
        TextAPI::setMACRO0(0x23, 0xa0000000, menu::MenuDataCommon::getSuretigaiSex(sex) & 0xfffffff);
        TextAPI::setMACRO0(0x24, 0xe0000000, menu::MenuDataCommon::getSurechigaiSkill(skill) & 0xfffffff);
        TextAPI::setMACRO0(0x1e, 0xd0000000, 4);
        TownWindowSystem::getSingleton()->addCommonMessage(0x92ac1);
    }
    return 1;
}

THUMB int cmd_set_surechigai_level(int* param)
{
    return 1;
}

THUMB int cmd_character_action_stepping(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setWriggleCharacter(index, 0);
    TownCharacterManager::getSingleton()->setAnimation(index, 1);
    return 1;
}

THUMB int cmd_character_action_still(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setWriggleCharacter(index, 0);
    TownCharacterManager::getSingleton()->setAnimation(index, 0);
    return 1;
}

THUMB int cmd_character_action_wriggle(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setAnimation(index, 1);
    TownCharacterManager::getSingleton()->setWriggleCharacter(index, 1);
    return 1;
}

THUMB int cmd_player_action_stepping(int* param)
{
    TownPlayerManager::getSingleton()->partyDraw_.setWriggleCharacter(0);
    TownPlayerManager::getSingleton()->partyDraw_.setAnimation(1);
    return 1;
}

THUMB int cmd_player_action_still(int* param)
{
    TownPlayerManager::getSingleton()->partyDraw_.setWriggleCharacter(0);
    TownPlayerManager::getSingleton()->partyDraw_.setAnimation(0);
    return 1;
}

THUMB int cmd_player_action_wriggle(int* param)
{
    TownPlayerManager::getSingleton()->partyDraw_.setAnimationOne(1);
    TownPlayerManager::getSingleton()->partyDraw_.setWriggleCharacter(1);
    return 1;
}

THUMB int cmd_set_character_collision(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setCollFlag(index, param[0]);
    return 1;
}

THUMB int cmd_is_trigger(int* param)
{
    dss::Fix32Vector3 pos = TownPlayerManager::getSingleton()->getPosition();
    if (param[0] < pos.vx.value && param[3] > pos.vx.value &&
        param[1] < pos.vy.value && param[4] > pos.vy.value &&
        param[2] < pos.vz.value && param[5] > pos.vz.value) {
        return 1;
    }
    return 0;
}

THUMB int cmd_is_trigger2(int* param)
{
    dss::Fix32Vector3 pos = TownPlayerManager::getSingleton()->getPosition();
    if (param[0] < pos.vx.value && param[3] > pos.vx.value &&
        param[1] < pos.vy.value && param[4] > pos.vy.value &&
        param[2] < pos.vz.value && param[5] > pos.vz.value) {
        short dir = TownPlayerManager::getSingleton()->getDirection();
        dss::Fix32Vector3 front;
        TownActionCalculate::getDirByIdx(dir, front);
        dss::Fix32Vector3 target = TownActionCalculate::getParamVec((unsigned char)param[6]);
        dss::Fix32 dot = front * target;
        if (dot >= dss::Fix32(data_ov000_021487ac)) {
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_character_action_pursue(int* param)
{
    TownCharaMoveParam move;
    int index = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[index]->moveType_ != MOVE_TYPE_PURSUE) {
        TownCharacterManager::getSingleton()->setCollFlag(index, 0);
        index = getPlacementCtrlId();
        move.speed_.value = param[0];
        move.speed_ *= data_ov000_021487b0;
        move.unk_38 = 0;
        move.unk_34 = 0;
        TownCharacterBase** chara = TownCharacterManager::getSingleton()->character_;
        chara[index]->moveType_ = MOVE_TYPE_PURSUE;
        TownCharacterBase* c = chara[index];
        c->moveData_.vector[0] = move.pos_[0];
        c->moveData_.vector[1] = move.pos_[1];
        c->moveData_.vector[2] = move.pos_[2];
        c->moveData_.vector[3] = move.pos_[3];
        c->moveData_.speed = move.speed_;
        c->moveData_.frame = move.unk_34;
        c->moveData_.counter = move.unk_38;
    }
    return 1;
}

THUMB int cmd_character_move_roam(int* param)
{
    int index = getPlacementCtrlId();
    TownCharaMoveParam move;
    move.unk_38 = dssrand::rand(0x50);
    move.unk_34 = 0;
    move.pos_[0].vx.value = param[0];
    move.pos_[0].vy.value = param[1];
    move.pos_[0].vz.value = param[2];
    move.pos_[1].vx.value = param[3];
    move.pos_[1].vy.value = param[4];
    move.pos_[1].vz.value = param[5];
    move.speed_.value = param[6];
    move.speed_ *= data_ov000_021487b0;
    TownCharacterBase** chara = TownCharacterManager::getSingleton()->character_;
    chara[index]->moveType_ = MOVE_TYPE_AREA;
    TownCharacterBase* c = chara[index];
    c->moveData_.vector[0] = move.pos_[0];
    c->moveData_.vector[1] = move.pos_[1];
    c->moveData_.vector[2] = move.pos_[2];
    c->moveData_.vector[3] = move.pos_[3];
    c->moveData_.speed = move.speed_;
    c->moveData_.frame = move.unk_34;
    c->moveData_.counter = move.unk_38;
    return 1;
}

THUMB int cmd_is_trigger_character(int* param)
{
    int index = getPlacementCtrlId();
    dss::Fix32Vector3 pos = TownCharacterManager::getSingleton()->getPosition(index);
    short dir = TownCharacterManager::getSingleton()->getDirection(index);
    dss::Fix32Vector3 min;
    dss::Fix32Vector3 max;
    min.set(param[0], param[1], param[2]);
    max.set(param[3], param[4], param[5]);
    TriggerCheck check = param[6] == 0 ? TRIGGER_CHECK_0 : TRIGGER_CHECK_1;
    int type = param[7] == 0 ? 7 : 6;
    return cmn::CommonCalculate::areaCheck(pos, dir, min, max, check, type);
}

THUMB int cmd_is_trigger2_character(int* param)
{
    TriggerCheck check;
    int index = getPlacementCtrlId();
    dss::Fix32Vector3 pos = TownCharacterManager::getSingleton()->getPosition(index);
    short dir = TownCharacterManager::getSingleton()->getDirection(index);
    dss::Fix32Vector3 min;
    dss::Fix32Vector3 max;
    min.set(param[0], param[1], param[2]);
    max.set(param[3], param[4], param[5]);
    switch (param[6]) {
    case 0:
        check = TRIGGER_CHECK_2;
        break;
    case 1:
        check = TRIGGER_CHECK_3;
        break;
    case 2:
        check = TRIGGER_CHECK_4;
        break;
    case 3:
        check = TRIGGER_CHECK_5;
        break;
    }
    int type = param[7] == 0 ? 7 : 6;
    return cmn::CommonCalculate::areaCheck(pos, dir, min, max, check, type);
}

THUMB int cmd_party_join(int* param)
{
    int index = getPlacementCtrlId(param[0]);
    status::g_Party.add(param[1]);
    TownPlayerManager::getSingleton()->resetParty();
    TownCharacterManager::getSingleton()->setDisplay(index, 0);
    TownCharacterManager::getSingleton()->setCollFlag(index, 0);
    return 1;
}

THUMB int cmd_party_quit(int* param)
{
    status::g_Party.setNormalMode();
    int index = getPlacementCtrlId();
    int sortIndex = status::g_Party.getSortIndex(param[1]);
    int order[4] = {0, 0, 0, 0};
    if (sortIndex == -1) {
        return 1;
    }
    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        if (param[1] != status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.playerIndex_) {
            order[i] = status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.playerIndex_;
        }
    }
    dss::Fix32Vector3 pos = TownPlayerManager::getSingleton()->party_.getMemberPosition(sortIndex);
    TownCharacterManager::getSingleton()->setDisplay(index, 1);
    TownCharacterManager::getSingleton()->setCollFlag(index, 1);
    TownCharacterManager::getSingleton()->setPosition(index, pos);
    status::g_Party.del(param[1]);
    status::g_Party.reorder(order[0], order[1], order[2], order[3]);
    TownPlayerManager::getSingleton()->resetParty();
    return 1;
}
