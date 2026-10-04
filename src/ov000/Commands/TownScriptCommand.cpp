#include "ov000/Commands/TownScriptCommand.hpp"
#include "main/dss/DssUtils.hpp"
#include "ov000/Commands/TownCommand.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "main/cmn/CommonCalculate.hpp"
#include "main/script/ScriptBaseCommand.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownActionCalculate.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "ov000/town/TownCamera.hpp"
#include "ov000/town/TownDoorAction.hpp"
#include "ov000/town/TownEndrollManager.hpp"
#include "ov000/town/TownWindowSystem.hpp"
#include "main/menu/MaterielMenuWindowManager.hpp"
#include "main/menu/MaterielMenuPlayerControl.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "ov000/town/TownActionWalk.hpp"
#include "ov000/town/TownFurniture.hpp"
#include "ov000/town/TownFurnitureControl.hpp"
#include "ov000/town/riseup/TownRiseup.hpp"
#include "main/global/Global.hpp"
#include "main/sound/SoundManager.hpp"

static const dss::Fix32 defaultSpeed(0x66);

THUMB void __cmd_player_move::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE* param = (PARAM_PLAYER_MOVE*)scriptParam;
    dss::Fix32Vector3 startPos;
    dss::Fix32Vector3 endPos;
    startPos.vx.value = param->startX;
    startPos.vy.value = param->startY;
    startPos.vz.value = param->startZ;
    endPos.vx.value = param->endX;
    endPos.vy.value = param->endY;
    endPos.vz.value = param->endZ;
    TownPlayerManager::getSingleton()->setSimpleMove(startPos, endPos, param->frame);
}

THUMB int __cmd_player_move::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_move2::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE2* param = (PARAM_PLAYER_MOVE2*)scriptParam;
    dss::Fix32Vector3 startPos;
    dss::Fix32Vector3 endPos;
    startPos.vx.value = param->startX;
    startPos.vy.value = param->startY;
    startPos.vz.value = param->startZ;
    endPos.vx.value = param->endX;
    endPos.vy.value = param->endY;
    endPos.vz.value = param->endZ;
    dss::Fix32 rate;
    rate.value = param->rate;
    TownPlayerManager::getSingleton()->setSpeedMove(startPos, endPos, rate);
}

THUMB int __cmd_player_move2::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_wait::initialize(char* scriptParam)
{
    PARAM_PLAYER_WAIT* param = (PARAM_PLAYER_WAIT*)scriptParam;
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_player_wait::execute()
{
    count_++;
}

THUMB int __cmd_player_wait::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_move_to::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE_TO* param = (PARAM_PLAYER_MOVE_TO*)scriptParam;
    dss::Fix32Vector3 endPos;
    dss::Fix32Vector3 playerPos = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32Vector3 startPos(playerPos);
    endPos.vx.value = param->endX;
    endPos.vy.value = param->endY;
    endPos.vz.value = param->endZ;
    if (param->absFlag == 1) {
        endPos += playerPos;
    }
    TownPlayerManager::getSingleton()->setSimpleMove(startPos, endPos, param->frame);
}

THUMB int __cmd_player_move_to::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_move2_to::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE2_TO* param = (PARAM_PLAYER_MOVE2_TO*)scriptParam;
    dss::Fix32Vector3 startPos;
    dss::Fix32Vector3 endPos;
    dss::Fix32Vector3 playerPos = TownPlayerManager::getSingleton()->getPosition();
    startPos = playerPos;
    endPos.vx.value = param->endX;
    endPos.vy.value = param->endY;
    endPos.vz.value = param->endZ;
    if (param->absFlag == 1) {
        endPos += playerPos;
    }
    dss::Fix32 rate;
    rate.value = param->rate;
    TownPlayerManager::getSingleton()->setSpeedMove(startPos, endPos, rate);
}

THUMB int __cmd_player_move2_to::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_party_move2_formation::initialize(char* scriptParam)
{
    PARAM_PARTY_MOVE2_FORMATION* param = (PARAM_PARTY_MOVE2_FORMATION*)scriptParam;
    dss::Fix32 speed;
    speed.value = param->rate;
    speed *= defaultSpeed;
    TownPlayerManager::getSingleton()->setFormation(param->frmDir, param->charaDir, speed);
}

THUMB void __cmd_party_move2_formation::execute()
{
}

THUMB int __cmd_party_move2_formation::isEnd()
{
    if (TownPlayerManager::getSingleton()->party_.isFormationEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_move_jump::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE_JUMP* param = (PARAM_PLAYER_MOVE_JUMP*)scriptParam;
    dss::Fix32Vector3 pos;
    pos.set(param->endX, param->endY, param->endZ);
    TownPlayerManager::getSingleton()->setJumpMove(pos, param->frame);
}

THUMB int __cmd_player_move_jump::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_move2_jump::initialize(char* scriptParam)
{
    PARAM_PLAYER_MOVE2_JUMP* param = (PARAM_PLAYER_MOVE2_JUMP*)scriptParam;
    dss::Fix32Vector3 pos;
    pos.set(param->endX, param->endY, param->endZ);
    dss::Fix32Vector3 start = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32 rate;
    rate.value = param->rate;
    dss::Fix32 speed = defaultSpeed * rate;
    int frame = cmn::CommonCalculate::getFrameByVector(start, pos, speed);
    TownPlayerManager::getSingleton()->setJumpMove(pos, frame);
}

THUMB int __cmd_player_move2_jump::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE* param = (PARAM_CHARACTER_MOVE*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0].vx.value = param->startX;
    scriptData.node[0].vy.value = param->startY;
    scriptData.node[0].vz.value = param->startZ;
    scriptData.node[1].vx.value = param->endX;
    scriptData.node[1].vy.value = param->endY;
    scriptData.node[1].vz.value = param->endZ;
    scriptData.frame = param->frame;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB void __cmd_character_move::execute()
{
}

THUMB int __cmd_character_move::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2* param = (PARAM_CHARACTER_MOVE2*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0].vx.value = param->startX;
    scriptData.node[0].vy.value = param->startY;
    scriptData.node[0].vz.value = param->startZ;
    scriptData.node[1].vx.value = param->endX;
    scriptData.node[1].vy.value = param->endY;
    scriptData.node[1].vz.value = param->endZ;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB void __cmd_character_move2::execute()
{
}

THUMB int __cmd_character_move2::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_wait::initialize(char* scriptParam)
{
    PARAM_CHARACTER_WAIT* param = (PARAM_CHARACTER_WAIT*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.frame = param->frame;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
}

THUMB void __cmd_character_wait::execute()
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[ctrl]->execWait();
}

THUMB int __cmd_character_wait::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_effect_mark::initialize(char* scriptParam)
{
    PARAM_CHARACTER_EFFECT_MARK* param = (PARAM_CHARACTER_EFFECT_MARK*)scriptParam;
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.num[0] = param->mark;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
}

THUMB void __cmd_character_effect_mark::execute()
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[ctrl]->execRiseup();
}

THUMB int __cmd_character_effect_mark::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_to::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_TO* param = (PARAM_CHARACTER_MOVE_TO*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.frame = param->frame;
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1].vx.value = param->endX;
    scriptData.node[1].vy.value = param->endY;
    scriptData.node[1].vz.value = param->endZ;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB void __cmd_character_move_to::execute()
{
}

THUMB int __cmd_character_move_to::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_to::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_TO* param = (PARAM_CHARACTER_MOVE2_TO*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1].vx.value = param->endX;
    scriptData.node[1].vy.value = param->endY;
    scriptData.node[1].vz.value = param->endZ;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB void __cmd_character_move2_to::execute()
{
}

THUMB int __cmd_character_move2_to::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_party::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_PARTY* param = (PARAM_CHARACTER_MOVE_PARTY*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.num[0] = param->mode;
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    int drawCount = TownPlayerManager::getSingleton()->partyDraw_.countReal_;
    scriptData.node[1] = TownPlayerManager::getSingleton()->party_.getMemberPosition(drawCount);
    scriptData.frame = param->frame;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setMoveToParty();
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
    TownCharacterManager::getSingleton()->setCollFlag(ctrl, 0);
}

THUMB void __cmd_character_move_party::execute()
{
}

THUMB int __cmd_character_move_party::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_party::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_PARTY* param = (PARAM_CHARACTER_MOVE2_PARTY*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    int drawCount = TownPlayerManager::getSingleton()->partyDraw_.countReal_;
    scriptData.node[1] = TownPlayerManager::getSingleton()->party_.getMemberPosition(drawCount);
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32Vector3 vec = (scriptData.node[1] - scriptData.node[0]);
    dss::Fix32 speed;
    dss::Fix32 dv;
    speed.value = param->rate;
    speed *= defaultSpeed;
    dv = vec.length() / speed;
    scriptData.frame = dv.value / 0x1000;
    scriptData.num[0] = param->mode;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setMoveToParty();
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
    TownCharacterManager::getSingleton()->setCollFlag(ctrl, 0);
}

THUMB void __cmd_character_move2_party::execute()
{
}

THUMB int __cmd_character_move2_party::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_player::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_PLAYER* param = (PARAM_CHARACTER_MOVE_PLAYER*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.num[0] = param->mode;
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = TownPlayerManager::getSingleton()->getPosition();
    unsigned char dir = param->direction;
    dss::Fix32Vector3 vec = TownActionCalculate::getParamVec(dir);
    dss::Fix32 rate;
    rate.value = param->adjust;
    scriptData.node[1] += vec * rate;
    scriptData.frame = param->frame;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setMoveToParty();
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
    TownCharacterManager::getSingleton()->setCollFlag(ctrl, 0);
}

THUMB void __cmd_character_move_player::execute()
{
}

THUMB int __cmd_character_move_player::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_player::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_PLAYER* param = (PARAM_CHARACTER_MOVE2_PLAYER*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.num[0] = param->mode;
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = TownPlayerManager::getSingleton()->getPosition();
    unsigned char dir = param->direction;
    dss::Fix32Vector3 vec = TownActionCalculate::getParamVec(dir);
    dss::Fix32 rate;
    rate.value = param->adjust;
    scriptData.node[1] += vec * rate;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setMoveToParty();
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
    TownCharacterManager::getSingleton()->setCollFlag(ctrl, 0);
}

THUMB void __cmd_character_move2_player::execute()
{
}

THUMB int __cmd_character_move2_player::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_relative::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_RELATIVE* param = (PARAM_CHARACTER_MOVE_RELATIVE*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vx.value += param->endX;
    scriptData.node[1].vy.value += param->endY;
    scriptData.node[1].vz.value += param->endZ;
    scriptData.frame = param->frame;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move_relative::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_relative::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_RELATIVE* param = (PARAM_CHARACTER_MOVE2_RELATIVE*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vx.value += param->endX;
    scriptData.node[1].vy.value += param->endY;
    scriptData.node[1].vz.value += param->endZ;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move2_relative::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_x::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_X* param = (PARAM_CHARACTER_MOVE_X*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vx.value = param->endX;
    scriptData.frame = param->frame;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move_x::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_x::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_X* param = (PARAM_CHARACTER_MOVE2_X*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vx.value = param->endX;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move2_x::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move_z::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE_Z* param = (PARAM_CHARACTER_MOVE_Z*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vz.value = param->endZ;
    scriptData.frame = param->frame;
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move_z::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_move2_z::initialize(char* scriptParam)
{
    PARAM_CHARACTER_MOVE2_Z* param = (PARAM_CHARACTER_MOVE2_Z*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = TownCharacterManager::getSingleton()->getPosition(ctrl);
    scriptData.node[1] = scriptData.node[0];
    scriptData.node[1].vz.value = param->endZ;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((scriptData.node[1] - scriptData.node[0])).length();
    scriptData.frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_character_move2_z::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_action_turn::initialize(char* scriptParam)
{
    PARAM_CHARACTER_ACTION_TURN* param = (PARAM_CHARACTER_ACTION_TURN*)scriptParam;
    int ctrl = getPlacementCtrlId();
    short idx = TownActionCalculate::getIdxByParam(param->direction);
    TownCharacterManager::getSingleton()->setSimpleRot(ctrl, idx, param->frame, param->rot);
}

THUMB int __cmd_character_action_turn::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isRotEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_action_gaze::initialize(char* scriptParam)
{
    PARAM_CHARACTER_ACTION_GAZE* param = (PARAM_CHARACTER_ACTION_GAZE*)scriptParam;
    int ctrl = getPlacementCtrlId();
    dss::Fix32Vector3 vec = (TownPlayerManager::getSingleton()->getPosition() - TownCharacterManager::getSingleton()->getPosition(ctrl));
    short idx = TownCharacterManager::getSingleton()->getDirection(ctrl);
    TownActionCalculate::getIdxByVec(idx, vec);
    TownCharacterManager::getSingleton()->setSimpleRot(ctrl, idx, param->frame, 0);
}

THUMB int __cmd_character_action_gaze::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isRotEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_furniture_move::initialize(char* scriptParam)
{
    PARAM_FURNITURE_MOVE* param = (PARAM_FURNITURE_MOVE*)scriptParam;
    dss::Fix32Vector3 end;
    dss::Fix32Vector3 start;
    start = TownStageManager::getSingleton()->getMapUidPos(param->target);
    end.vx.value = param->endX + start.vx.value;
    end.vy.value = param->endY + start.vy.value;
    end.vz.value = param->endZ + start.vz.value;
    m_index = TownFurnitureControlManager::getSingleton()->setFurnitureMove(param->target, param->frame, end);
    TownFurnitureControlManager::getSingleton()->setGarbageCorrect(m_index, false);
}

THUMB int __cmd_furniture_move::isEnd()
{
    if (TownFurnitureControlManager::getSingleton()->isEnd(m_index) != 0) {
        TownFurnitureControlManager::getSingleton()->cleanup(m_index);
        return true;
    }
    return false;
}

THUMB void __cmd_furniture_move2::initialize(char* scriptParam)
{
    PARAM_FURNITURE_MOVE2* param = (PARAM_FURNITURE_MOVE2*)scriptParam;
    dss::Fix32Vector3 end;
    dss::Fix32Vector3 start;
    start = TownStageManager::getSingleton()->getMapUidPos(param->target);
    end.vx.value = param->endX + start.vx.value;
    end.vy.value = param->endY + start.vy.value;
    end.vz.value = param->endZ + start.vz.value;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    dss::Fix32 len = ((start - end)).length();
    int frame = len.value / (param->rate * defaultSpeed.value / 0x1000);
    TownFurnitureControlManager* mgr = TownFurnitureControlManager::getSingleton();
    m_index = mgr->setFurnitureMove(param->target, frame, end);
    TownFurnitureControlManager::getSingleton()->setGarbageCorrect(m_index, false);
}

THUMB int __cmd_furniture_move2::isEnd()
{
    if (TownFurnitureControlManager::getSingleton()->isEnd(m_index) != 0) {
        TownFurnitureControlManager::getSingleton()->cleanup(m_index);
        return true;
    }
    return false;
}

THUMB void __cmd_effect_wait::initialize(char* scriptParam)
{
    PARAM_EFFECT_WAIT* param = (PARAM_EFFECT_WAIT*)scriptParam;
    dss::Fix32Vector3 pos;
    pos.vx.value = param->posX;
    pos.vy.value = param->posY;
    pos.vz.value = param->posZ;
    m_index = TownRiseupManager::getSingleton()->setupSprite(param->effect, pos, param->flag, 0);
}

THUMB int __cmd_effect_wait::isEnd()
{
    return TownRiseupManager::getSingleton()->isFinish(m_index);
}

THUMB void __cmd_effect_move::initialize(char* scriptParam)
{
    PARAM_EFFECT_MOVE* param = (PARAM_EFFECT_MOVE*)scriptParam;
    dss::Fix32Vector3 start;
    dss::Fix32Vector3 end;
    start.vx.value = param->startX;
    start.vy.value = param->startY;
    start.vz.value = param->startZ;
    end.vx.value = param->endX;
    end.vy.value = param->endY;
    end.vz.value = param->endZ;
    m_index = TownRiseupManager::getSingleton()->setupSpriteMove(param->effect, start, end, param->frame);
}

THUMB int __cmd_effect_move::isEnd()
{
    return TownRiseupManager::getSingleton()->isFinish(m_index);
}

THUMB void __cmd_effect_fade::initialize(char* scriptParam)
{
    PARAM_EFFECT_FADE* param = (PARAM_EFFECT_FADE*)scriptParam;
    dss::Fix32Vector3 pos;
    pos.vx.value = param->posX;
    pos.vy.value = param->posY;
    pos.vz.value = param->posZ;
    m_index = TownRiseupManager::getSingleton()->setupSpriteFade(param->effect, pos, param->frame, param->flag);
}

THUMB int __cmd_effect_fade::isEnd()
{
    return TownRiseupManager::getSingleton()->isFinish(m_index);
}

THUMB void __cmd_map_flash::initialize(char* scriptParam)
{
    PARAM_MAP_FLASH* param = (PARAM_MAP_FLASH*)scriptParam;
    count_ = 0;
    countFrame_ = param->frame;
    data_0210bd4c.unkfunc_0205c948(0, param->se);
    int flash_frame = countFrame_ / 2;
    unsigned char b = param->b;
    unsigned char g = param->g;
    unsigned char r = param->r;
    data_020f21f8.state_ = GlobalFade::FADE_IN_WHITE;
    data_020f21f8.count_ = 0;
    data_020f21f8.frames_ = flash_frame;
    func_02084e8c(data_020f220c, r, g, b);
    func_02084e8c(data_020f2244, r, g, b);
    data_0210bc18.unkfunc_02058294(&data_020f21f8);
}

THUMB void __cmd_map_flash::execute()
{
    count_++;
    int flash_frame = countFrame_ / 2;
    if (count_ == flash_frame) {
        data_020f21f8.state_ = (GlobalFade::FADE_STATE)6;
        data_020f21f8.count_ = 0;
        data_020f21f8.frames_ = flash_frame;
    }
}

THUMB int __cmd_map_flash::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_map_blend_color::initialize(char* scriptParam)
{
    PARAM_MAP_BLEND_COLOR* param = (PARAM_MAP_BLEND_COLOR*)scriptParam;
    rate_.vx.value = param->r;
    rate_.vy.value = param->g;
    rate_.vz.value = param->b;
    count_ = 0;
    countFrame_ = param->frame;
    TownStageManager::getSingleton()->mapEffect_.setPisaroEvent(countFrame_);
}

THUMB void __cmd_map_blend_color::execute()
{
    dss::Fix32 ratio;
    dss::Fix32 one;
    one.value = 0x1000;
    dss::Fix32Vector3 defaultRate = TownStageManager::getSingleton()->townData_.getDefaultPaletteRate();
    dss::Fix32Vector3 current;
    count_++;
    ratio.value = (count_ << 12) / countFrame_;
    current = defaultRate * (one - ratio) + rate_ * ratio;
    TownStageManager::getSingleton()->SetRGBRate(current, 0);
}

THUMB int __cmd_map_blend_color::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_map_texture_scale::initialize(char* scriptParam)
{
    PARAM_MAP_TEXTURE_SCALE* param = (PARAM_MAP_TEXTURE_SCALE*)scriptParam;
    fx32 x;
    fx32 y;
    TownStageManager::getSingleton()->getTextureScaling(x, y);
    frame_ = param->frame;
    scaleX_ = (param->scalex - x) / frame_;
    scaleY_ = (param->scaley - y) / frame_;
    counter_ = 0;
}

THUMB void __cmd_map_texture_scale::execute()
{
    fx32 x;
    fx32 y;
    TownStageManager::getSingleton()->getTextureScaling(x, y);
    TownStageManager::getSingleton()->setTextureScaling(x + scaleX_, y + scaleY_);
    counter_++;
}

THUMB int __cmd_map_texture_scale::isEnd()
{
    if (frame_ <= counter_) {
        return true;
    }
    return false;
}

THUMB void __cmd_map_blend_init::initialize(char* scriptParam)
{
    PARAM_MAP_BLEND_INIT* param = (PARAM_MAP_BLEND_INIT*)scriptParam;
    rate_ = TownStageManager::getSingleton()->townData_.rate_;
    count_ = 0;
    countFrame_ = param->frame;
}

THUMB void __cmd_map_blend_init::execute()
{
    dss::Fix32 ratio;
    dss::Fix32 one;
    one.value = 0x1000;
    dss::Fix32Vector3 defaultRate = TownStageManager::getSingleton()->townData_.getDefaultPaletteRate();
    dss::Fix32Vector3 current;
    count_++;
    ratio.value = (count_ << 12) / countFrame_;
    current = rate_ * (one - ratio) + defaultRate * ratio;
    TownStageManager::getSingleton()->SetRGBRate(current, 0);
}

THUMB int __cmd_map_blend_init::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_map_camera_move::initialize(char* param)
{
    PARAM_MAP_CAMERA_MOVE* data = (PARAM_MAP_CAMERA_MOVE*)param;
    dss::Fix32Vector3 target;
    target.vx.value = data->endX;
    target.vy.value = data->endY;
    target.vz.value = data->endZ;
    TownCamera::getSingleton()->setMoveTo(target, data->moveFrame, false);
    dss::Vector3<short> angle;
    TownActionCalculate::setAngle(data->axis, data->angle, angle);
    TownCamera::getSingleton()->setRotTo(angle, data->rotFrame, false);
}

THUMB int __cmd_map_camera_move::isEnd()
{
    return TownCamera::getSingleton()->cameraMove_.isEnd();
}

THUMB void __cmd_map_camera_position::initialize(char* param)
{
    PARAM_MAP_CAMERA_POSITION* data = (PARAM_MAP_CAMERA_POSITION*)param;
    dss::Fix32Vector3 target;
    target.vx.value = data->endX;
    target.vy.value = data->endY;
    target.vz.value = data->endZ;
    TownCamera::getSingleton()->setMoveTo(target, data->frame, false);
}

THUMB int __cmd_map_camera_position::isEnd()
{
    return TownCamera::getSingleton()->cameraMove_.isEnd();
}

THUMB void __cmd_camera_move_abs::initialize(char* param)
{
    PARAM_CAMERA_MOVE_ABS* data = (PARAM_CAMERA_MOVE_ABS*)param;
    dss::Fix32Vector3 target;
    target.vx.value = data->posX;
    target.vy.value = data->posY;
    target.vz.value = data->posZ;
    TownCamera::getSingleton()->setMoveTo(target, data->frame, true);
}

THUMB int __cmd_camera_move_abs::isEnd()
{
    return TownCamera::getSingleton()->cameraMove_.isEnd();
}

THUMB void __cmd_map_camera_angle::initialize(char* param)
{
    PARAM_MAP_CAMERA_ANGLE* data = (PARAM_MAP_CAMERA_ANGLE*)param;
    dss::Vector3<short> angle;
    TownActionCalculate::setAngle(data->axis, data->angle, angle);
    TownCamera::getSingleton()->setRotTo(angle, data->frame, false);
}

THUMB int __cmd_map_camera_angle::isEnd()
{
    return TownCamera::getSingleton()->cameraMove_.isEnd();
}

THUMB void __cmd_map_camera_gaze::initialize(char* param)
{
    PARAM_MAP_CAMERA_GAZE* data = (PARAM_MAP_CAMERA_GAZE*)param;
    TownCamera::getSingleton()->resetCameraMove(data->frame);
}

THUMB int __cmd_map_camera_gaze::isEnd()
{
    return TownCamera::getSingleton()->cameraMove_.isEnd();
}

THUMB void __cmd_map_event_camera::initialize(char* param)
{
    PARAM_MAP_EVENT_CAMERA* data = (PARAM_MAP_EVENT_CAMERA*)param;
    TownStageManager::getSingleton()->setCameraNo(data->channel, data->screen);
    TownCamera::getSingleton()->setCameraLock(true);
    countFrame_ = data->frame;
    count_ = 0;
}

THUMB void __cmd_map_event_camera::execute()
{
    count_++;
}

THUMB int __cmd_map_event_camera::isEnd()
{
    if (count_ >= countFrame_) {
        TownStageManager::getSingleton()->setCameraNo(0, 0);
        TownStageManager::getSingleton()->setCameraNo(0, 1);
        TownCamera::getSingleton()->setCameraLock(false);
        return true;
    }
    return false;
}

THUMB void __cmd_riseup_move::initialize(char* scriptParam)
{
    PARAM_RISEUP_MOVE* param = (PARAM_RISEUP_MOVE*)scriptParam;
    dss::Fix32Vector3 startPos;
    dss::Fix32Vector3 endPos;
    startPos.vx.value = param->startX;
    startPos.vy.value = param->startY;
    startPos.vz.value = param->startZ;
    endPos.vx.value = param->endX;
    endPos.vy.value = param->endY;
    endPos.vz.value = param->endZ;
    m_index = TownRiseupManager::getSingleton()->setupScript(param->item, startPos, endPos, param->frame);
}

THUMB int __cmd_riseup_move::isEnd()
{
    return TownRiseupManager::getSingleton()->isFinish(m_index);
}

THUMB void __cmd_menu_event_imuru::initialize(char* scriptParam)
{
    PARAM_MENU_EVENT_IMURU* param = (PARAM_MENU_EVENT_IMURU*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(0);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->extraInnType_ = 1;
    g_cmnPartyInfo.partyTalk = ctrl;
    type_ = param->type;
    index_ = param->index;
    waitCounter_ = 0;
}

THUMB int __cmd_menu_event_imuru::isEnd()
{
    if (waitCounter_ < 1) {
        waitCounter_++;
        return false;
    }
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu()) {
        if (MaterielMenu_WINDOW_MANAGER::getSingleton()->extraImuruEnd_) {
            setFlag(true);
        } else {
            setFlag(false);
        }
        return true;
    }
    return false;
}

THUMB void __cmd_menu_event_imuru::setFlag(bool flag)
{
    switch (type_) {
    case 0:
        if (flag) {
            g_AreaFlag.set(index_);
        } else {
            g_AreaFlag.remove(index_);
        }
        break;
    case 1:
        if (flag) {
            g_LocalFlag.set(index_);
        } else {
            g_LocalFlag.remove(index_);
        }
        break;
    case 2:
        if (flag) {
            g_GlobalFlag.set(index_);
        } else {
            g_GlobalFlag.remove(index_);
        }
        break;
    }
}

THUMB void __cmd_map_set_back_color::initialize(char* param)
{
    PARAM_MAP_SET_BACK_COLOR* data = (PARAM_MAP_SET_BACK_COLOR*)param;
    current_ = TownStageManager::getSingleton()->townData_.getCurrentBackColor();
    TownStageManager::getSingleton()->setNextBackColor(data->index);
    index_ = data->index;
    countFrame_ = data->frame;
    count_ = 0;
}

THUMB void __cmd_map_set_back_color::execute()
{
    param::FloorBackColor* current = &status::excelParam.floorBackColor_[current_];
    param::FloorBackColor* next = &status::excelParam.floorBackColor_[index_];
    dss::Fix32 ratio;
    dss::Fix32 one;
    one.value = 0x1000;
    count_++;
    ratio.value = (count_ << 12) / countFrame_;
    unsigned char color[24];
    for (int i = 0; i < 24; i++) {
        color[i] = ((one - ratio) * current->color[i] + ratio * next->color[i]).value / 0x1000;
    }
    func_02084cec(&color[12], &color[15], &color[18], &color[21], &color[0], &color[3], &color[6], &color[9]);
}

THUMB int __cmd_map_set_back_color::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_map_restore_back_color::initialize(char* param)
{
    PARAM_MAP_RESTORE_BACK_COLOR* data = (PARAM_MAP_RESTORE_BACK_COLOR*)param;
    current_ = TownStageManager::getSingleton()->townData_.getCurrentBackColor();
    index_ = TownStageManager::getSingleton()->getNextBackColor();
    countFrame_ = data->frame;
    count_ = 0;
}

THUMB void __cmd_map_restore_back_color::execute()
{
    param::FloorBackColor* current = &status::excelParam.floorBackColor_[current_];
    param::FloorBackColor* next = &status::excelParam.floorBackColor_[index_];
    dss::Fix32 ratio;
    dss::Fix32 one;
    one.value = 0x1000;
    count_++;
    ratio.value = (count_ << 12) / countFrame_;
    unsigned char color[24];
    for (int i = 0; i < 24; i++) {
        color[i] = ((one - ratio) * next->color[i] + ratio * current->color[i]).value / 0x1000;
    }
    func_02084cec(&color[12], &color[15], &color[18], &color[21], &color[0], &color[3], &color[6], &color[9]);
}

THUMB int __cmd_map_restore_back_color::isEnd()
{
    if (count_ >= countFrame_) {
        return true;
    }
    return false;
}

THUMB void __cmd_party_move_overlap::initialize(char* scriptParam)
{
    TownPlayerManager::getSingleton()->party_.moveFirstFlag_ = 1;
    TownPlayerManager::getSingleton()->party_.setMoveToFirstHalfSpeed(SPEED_TYPE1);
}

THUMB int __cmd_party_move_overlap::isEnd()
{
    if (TownPlayerManager::getSingleton()->party_.moveFirstFlag_ == 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_furniture_open::initialize(char* scriptParam)
{
    PARAM_FURNITURE_OPEN* param = (PARAM_FURNITURE_OPEN*)scriptParam;
    TownFurnitureManager::getSingleton()->force_ = 1;
    TownFurnitureManager::getSingleton()->checkObject(param->target, 0, 0, 0);
    uid_ = param->target;
}

THUMB int __cmd_furniture_open::isEnd()
{
    if (!TownFurnitureManager::getSingleton()->isProcess()) {
        int objectId = TownStageManager::getSingleton()->getObjectIDfromMapUid(uid_);
        int common = TownStageManager::getSingleton()->getMapObjCommonId(objectId);
        switch (common) {
        case 0xef:
        case 0x106:
        case 0x107:
            TownActionWalk::getSingleton()->searchObjectId_ = -1;
            TownPlayerManager::getSingleton()->searchMapUid_ = 0;
            break;
        }
        return true;
    }
    return false;
}

THUMB void __cmd_set_party_order::initialize(char* scriptParam)
{
    PARAM_SET_PARTY_ORDER* param = (PARAM_SET_PARTY_ORDER*)scriptParam;
    int party[4] = { 0, 0, 0, 0 };
    party[0] = param->order1;
    status::g_Party.setMemberShiftMode();
    int tmp = 0;
    for (int i = 1; i < 4; i++) {
        if (party[0] == status::g_Party.getPlayerIndex(tmp)) {
            tmp++;
        }
        if (tmp > status::g_Party.getCarriageOutCount()) {
            party[i] = 0;
        } else {
            party[i] = status::g_Party.getPlayerIndex(tmp);
        }
        tmp++;
    }
    change_ = 1;
    for (int i = 0; i < 4; i++) {
        if (party[i] != status::g_Party.getPlayerIndex(i)) {
            change_ = 0;
        }
    }
    if (change_ == 0) {
        status::g_Party.reorder(party[0], party[1], party[2], party[3]);
        cmn::GameManager::getSingleton()->resetParty();
        TownPlayerManager::getSingleton()->party_.moveFirstFlag_ = 1;
        TownPlayerManager::getSingleton()->party_.setMoveToFirstHalfSpeed(SPEED_TYPE1);
    }
}

THUMB int __cmd_set_party_order::isEnd()
{
    if (change_ == 0) {
        if (TownPlayerManager::getSingleton()->party_.moveFirstFlag_ == 0) {
            return true;
        }
        return false;
    }
    return true;
}

THUMB void __cmd_character_action_jump::initialize(char* scriptParam)
{
    int ctrl = getPlacementCtrlId();
    dss::Fix32Vector3 pos(TownCharacterManager::getSingleton()->getPosition(ctrl));
    TownCharacterManager::getSingleton()->setJumpMove(ctrl, pos, 0x10);
}

THUMB int __cmd_character_action_jump::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd();
}

THUMB void __cmd_character_normal_jump::initialize(char* scriptParam)
{
    PARAM_CHARACTER_NORMAL_JUMP* param = (PARAM_CHARACTER_NORMAL_JUMP*)scriptParam;
    int ctrl = getPlacementCtrlId();
    dss::Fix32Vector3 pos;
    pos.vx.value = param->endX;
    pos.vy.value = param->endY;
    pos.vz.value = param->endZ;
    TownCharacterManager::getSingleton()->setJumpMove(ctrl, pos, param->frame);
}

THUMB int __cmd_character_normal_jump::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd();
}

THUMB void __cmd_camera_change_distance::initialize(char* scriptParam)
{
    PARAM_CAMERA_CHANGE_DISTANCE* param = (PARAM_CAMERA_CHANGE_DISTANCE*)scriptParam;
    dss::Fix32 distance;
    distance.value = param->distance;
    TownCamera::getSingleton()->setChangeDistance(param->frame, distance);
}

THUMB int __cmd_camera_change_distance::isEnd()
{
    return TownCamera::getSingleton()->isEndChangeDistance();
}

THUMB void __cmd_player_rot::initialize(char* scriptParam)
{
    PARAM_PLAYER_ROT* param = (PARAM_PLAYER_ROT*)scriptParam;
    TownPlayerManager::getSingleton()->setScriptRot(param->frame, param->idx, param->rotFlag);
    endFlag_ = param->endFlag;
}

THUMB int __cmd_player_rot::isEnd()
{
    if (endFlag_ == 0) {
        if (TownPlayerManager::getSingleton()->scriptRotFlag_ == 0) {
            return true;
        }
        return false;
    }
    return true;
}

THUMB void __cmd_camera_reset_distance::initialize(char* scriptParam)
{
    PARAM_CAMERA_RESET_DISTANCE* param = (PARAM_CAMERA_RESET_DISTANCE*)scriptParam;
    TownCamera::getSingleton()->resetDistance(param->frame);
}

THUMB int __cmd_camera_reset_distance::isEnd()
{
    return TownCamera::getSingleton()->isEndChangeDistance();
}

THUMB void __cmd_camera_move_pov::initialize(char* scriptParam)
{
    PARAM_CAMERA_MOVE_POV* param = (PARAM_CAMERA_MOVE_POV*)scriptParam;
    dss::Fix32Vector3 pos = cmn::CommonCalculate::setVecByParam(param->endX, param->endY, param->endZ);
    TownCamera::getSingleton()->setPovMove(pos, param->frame, param->absFlag);
}

THUMB int __cmd_camera_move_pov::isEnd()
{
    if (TownCamera::getSingleton()->isPovMove_ == 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_camera_move_to_player::initialize(char* scriptParam)
{
    PARAM_CAMERA_MOVE_TO_PLAYER* param = (PARAM_CAMERA_MOVE_TO_PLAYER*)scriptParam;
    TownCamera::getSingleton()->setMoveTargetPlayer(param->frame);
}

THUMB int __cmd_camera_move_to_player::isEnd()
{
    if (TownCamera::getSingleton()->cameraMove_.isEnd() == 1) {
        TownCamera::getSingleton()->setCameraLock(false);
        return true;
    }
    return false;
}

THUMB void __cmd_fadein_character::initialize(char* scriptParam)
{
    PARAM_FADEIN_CHARACTER* param = (PARAM_FADEIN_CHARACTER*)scriptParam;
    int type;
    int ctrl = getPlacementCtrlId();
    switch (param->pattern) {
    case 0:
        type = 2;
        break;
    case 1:
        type = 3;
        break;
    }
    TownCharacterManager::getSingleton()->setFadeType(ctrl, type, param->frame);
}

THUMB int __cmd_fadein_character::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isEndFade();
}

THUMB void __cmd_fadeout_character::initialize(char* scriptParam)
{
    PARAM_FADEIN_CHARACTER* param = (PARAM_FADEIN_CHARACTER*)scriptParam;
    int type;
    int ctrl = getPlacementCtrlId();
    switch (param->pattern) {
    case 0:
        type = 4;
        break;
    case 1:
        type = 5;
        break;
    }
    TownCharacterManager::getSingleton()->setFadeType(ctrl, type, param->frame);
}

THUMB int __cmd_fadeout_character::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isEndFade();
}

THUMB void __cmd_charcter_3d_motion::initialize(char* scriptParam)
{
    PARAM_CHARCTER_3D_MOTION* param = (PARAM_CHARCTER_3D_MOTION*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setMotion(ctrl, param->motion, param->flag == 0);
}

THUMB int __cmd_charcter_3d_motion::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isMotion();
}

THUMB void __cmd_charcter_motion::initialize(char* scriptParam)
{
    PARAM_CHARCTER_MOTION* param = (PARAM_CHARCTER_MOTION*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setMotion(ctrl, param->motion, param->flag == 0);
}

THUMB int __cmd_charcter_motion::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isMotion();
}

THUMB void __cmd_menu_shop::initialize(char* scriptParam)
{
    PARAM_MENU_SHOP* param = (PARAM_MENU_SHOP*)scriptParam;
    shop_ = param->shop;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(shop_);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->extraInnType_ = 0;
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_menu_shop::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_menu_extra_shop::initialize(char* scriptParam)
{
    PARAM_MENU_SHOP* param = (PARAM_MENU_SHOP*)scriptParam;
    int ctrl = getPlacementCtrlId();
    int type = 0;
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    if (param->shop == 0) {
        type = MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_FOX_TOWN;
    }
    if (param->shop == 1) {
        type = MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_BONMOL_CASTLE;
    }
    if (param->shop == 2) {
        type = MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_IMUL;
    }
    TownWindowSystem::getSingleton()->changeShopMenuPhase(type);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_menu_extra_shop::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_menu_present_exp::initialize(char* scriptParam)
{
    PARAM_MENU_PRESENT_EXP* param = (PARAM_MENU_PRESENT_EXP*)scriptParam;
    int ctrl = getPlacementCtrlId();
    int index = status::g_Party.getSortIndex(param->index);
    if (param->index <= 2 || index != -1) {
        if (param->index == 1 && index == -1) {
            index = status::g_Party.getSortIndex(2);
        } else if (param->index == 2 && index == -1) {
            index = status::g_Party.getSortIndex(1);
        }
        func_ov016_0216ff2c()->activeChara_ = index;
        func_ov016_0216ff2c()->setExtraExp(param->exp);
        TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
        TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_PRESENT_EXP);
        g_cmnPartyInfo.partyTalk = ctrl;
    }
}

THUMB int __cmd_menu_present_exp::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_menu_colosseum::initialize(char* scriptParam)
{
    PARAM_MENU_COLOSSEUM* param = (PARAM_MENU_COLOSSEUM*)scriptParam;
    int ctrl = getPlacementCtrlId();
    func_ov016_0216ff34(func_ov016_0216ff2c());
    func_ov016_0216ff2c()->setWins(param->wins);
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_COLOSSEUM);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_menu_colosseum::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_menu_hostage::initialize(char* scriptParam)
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    m_end.init();
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_HOSTAGE);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_menu_hostage::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_menu_nene::initialize(char* scriptParam)
{
    m_end.init();
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_EXTRA_NENE);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_menu_nene::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_player_line_move::initialize(char* scriptParam)
{
    PARAM_PLAYER_LINE_MOVE* param = (PARAM_PLAYER_LINE_MOVE*)scriptParam;
    dss::Fix32Vector3 start = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32Vector3 target = cmn::CommonCalculate::getAxisMoveTargetByParam(param->axis, param->absFlag, param->value, start);
    TownPlayerManager::getSingleton()->setSimpleMove(start, target, param->frame);
}

THUMB void __cmd_player_line_move::execute()
{
}

THUMB int __cmd_player_line_move::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_player_line_move2::initialize(char* scriptParam)
{
    PARAM_PLAYER_LINE_MOVE2* param = (PARAM_PLAYER_LINE_MOVE2*)scriptParam;
    dss::Fix32Vector3 start = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32Vector3 target = cmn::CommonCalculate::getAxisMoveTargetByParam(param->axis, param->absFlag, param->value, start);
    dss::Fix32 speed;
    speed.value = param->rate;
    TownPlayerManager::getSingleton()->setSpeedMove(start, target, speed);
}

THUMB void __cmd_player_line_move2::execute()
{
}

THUMB int __cmd_player_line_move2::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_ikada_move2_player_get_on::initialize(char* scriptParam)
{
    PARAM_IKADA_MOVE2_PLAYER_GET_ON* param = (PARAM_IKADA_MOVE2_PLAYER_GET_ON*)scriptParam;
    dss::Fix32Vector3 start = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32Vector3 target = cmn::CommonCalculate::setVecByParam(param->posX, param->posY, param->posZ);
    dss::Fix32 speed;
    speed.value = param->rate;
    if (param->absFlag == 1) {
        target += start;
    }
    TownPlayerManager::getSingleton()->setIkadaSpeedMove(start, target, speed);
}

THUMB int __cmd_ikada_move2_player_get_on::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_ikada_move_player_get_on::initialize(char* scriptParam)
{
    PARAM_IKADA_MOVE_PLAYER_GET_ON* param = (PARAM_IKADA_MOVE_PLAYER_GET_ON*)scriptParam;
    dss::Fix32Vector3 start = TownPlayerManager::getSingleton()->getPosition();
    dss::Fix32Vector3 target = cmn::CommonCalculate::setVecByParam(param->posX, param->posY, param->posZ);
    if (param->absFlag == 1) {
        target += start;
    }
    TownPlayerManager::getSingleton()->setIkadaFrameMove(start, target, param->frame);
}

THUMB int __cmd_ikada_move_player_get_on::isEnd()
{
    if (TownPlayerManager::getSingleton()->isFinish() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_set_camera_target_chara_frame::initialize(char* scriptParam)
{
    PARAM_SET_CAMERA_TARGET_CHARA_FRAME* data = (PARAM_SET_CAMERA_TARGET_CHARA_FRAME*)scriptParam;
    objNo_ = data->objId;
    int ctrl = getPlacementCtrlId(objNo_);
    dss::Fix32Vector3 target(TownCharacterManager::getSingleton()->getPosition(ctrl));
    TownCamera::getSingleton()->setMoveTo(target, data->frame, true);
}

THUMB int __cmd_set_camera_target_chara_frame::isEnd()
{
    int ctrl = getPlacementCtrlId(objNo_);
    if (TownCamera::getSingleton()->cameraMove_.isEnd() == 1) {
        TownCamera::getSingleton()->setMoveTragetChara(ctrl);
        return true;
    }
    return false;
}

THUMB void __cmd_set_camera_angle_abs::initialize(char* scriptParam)
{
    PARAM_SET_CAMERA_ANGLE_ABS* data = (PARAM_SET_CAMERA_ANGLE_ABS*)scriptParam;
    dss::Vector3short& nowAngle = TownCamera::getSingleton()->camera_.unk_004.getAngle();
    short x = nowAngle.vx;
    short z = nowAngle.vz;
    dss::Vector3<short> angle;
    angle.set(x, data->angleY, z);
    TownCamera::getSingleton()->setRotTo(angle, data->frame, true);
}

THUMB int __cmd_set_camera_angle_abs::isEnd()
{
    getPlacementCtrlId();
    if (TownCamera::getSingleton()->cameraMove_.isEnd() == 1) {
        return true;
    }
    return false;
}

THUMB void __cmd_door_action::initialize(char* scriptParam)
{
    PARAM_DOOR_ACTION* data = (PARAM_DOOR_ACTION*)scriptParam;
    TownDoorAction::getSingleton()->scriptOpen(data->door1, data->door2, data->type);
}

THUMB int __cmd_door_action::isEnd()
{
    return TownDoorAction::getSingleton()->scriptEnd();
}

THUMB void __cmd_make_surechigai_taishi::initialize(char* scriptParam)
{
    m_end.init();
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SURECHIGAI_MAKE_TAISHI);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_make_surechigai_taishi::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_surechigai_save::initialize(char* scriptParam)
{
    m_end.init();
    type_ = ((int*)scriptParam)[0];
    index_ = ((int*)scriptParam)[1];
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SAVE);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->type_ = 3;
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_surechigai_save::isEnd()
{
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && !m_end.m_flag) {
        m_end.m_flag = 1;
        return false;
    }
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && m_end.m_flag) {
        if (MaterielMenu_WINDOW_MANAGER::getSingleton()->surechigaiStart_ == 1) {
            setFlag(true);
        } else {
            setFlag(false);
        }
        return true;
    }
    return false;
}

THUMB void __cmd_surechigai_save::setFlag(bool flag)
{
    switch (type_) {
    case 0:
        if (flag) {
            g_AreaFlag.set(index_);
        } else {
            g_AreaFlag.remove(index_);
        }
        break;
    case 1:
        if (flag) {
            g_LocalFlag.set(index_);
        } else {
            g_LocalFlag.remove(index_);
        }
        break;
    case 2:
        if (flag) {
            g_GlobalFlag.set(index_);
        } else {
            g_GlobalFlag.remove(index_);
        }
        break;
    }
}

THUMB void __cmd_surechigai_root::initialize(char* scriptParam)
{
    int* param = (int*)scriptParam;
    m_end.init();
    type1_ = param[0];
    type2_ = param[2];
    index1_ = param[1];
    index2_ = param[3];
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SURECHIGAI_ROOT);
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_surechigai_root::isEnd()
{
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && !m_end.m_flag) {
        m_end.m_flag = 1;
        return false;
    }
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && m_end.m_flag) {
        if (MaterielMenu_WINDOW_MANAGER::getSingleton()->surechigaiStart_ == 1) {
            setFlag(true, true);
        } else {
            setFlag(false, true);
        }
        if (MaterielMenu_WINDOW_MANAGER::getSingleton()->changeTaishi_ == 1) {
            setFlag(true, false);
        } else {
            setFlag(false, false);
        }
        MaterielMenu_WINDOW_MANAGER::getSingleton()->surechigaiStart_ = 0;
        MaterielMenu_WINDOW_MANAGER::getSingleton()->changeTaishi_ = 0;
        return true;
    }
    return false;
}

THUMB void __cmd_surechigai_root::setFlag(bool flag, bool first)
{
    int type = type1_;
    int index = index1_;
    if (!first) {
        type = type2_;
        index = index2_;
    }
    switch (type) {
    case 0:
        if (flag) {
            g_AreaFlag.set(index);
        } else {
            g_AreaFlag.remove(index);
        }
        break;
    case 1:
        if (flag) {
            g_LocalFlag.set(index);
        } else {
            g_LocalFlag.remove(index);
        }
        break;
    case 2:
        if (flag) {
            g_GlobalFlag.set(index);
        } else {
            g_GlobalFlag.remove(index);
        }
        break;
    }
}

THUMB void __cmd_surechigai_mapname::initialize(char* scriptParam)
{
    m_end.init();
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SURECHIGAI_MAP_NAME);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->editType_ = MaterielMenu_WINDOW_MANAGER::EDIT_TOWN_NAME;
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_surechigai_mapname::isEnd()
{
    return m_end.check();
}

THUMB void __cmd_surechigai_message::initialize(char* scriptParam)
{
    m_end.init();
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(ctrl);
    TownWindowSystem::getSingleton()->changeShopMenuPhase(MaterielMenu_WINDOW_MANAGER::MENU_SURECHIGAI_MAP_NAME);
    MaterielMenu_WINDOW_MANAGER::getSingleton()->editType_ = MaterielMenu_WINDOW_MANAGER::EDIT_MESSAGE;
    MaterielMenu_WINDOW_MANAGER::getSingleton()->editMessageForScript_ = 1;
    g_cmnPartyInfo.partyTalk = ctrl;
}

THUMB int __cmd_surechigai_message::isEnd()
{
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && !m_end.m_flag) {
        m_end.m_flag = 1;
        return false;
    }
    if (!TownWindowSystem::getSingleton()->cmdWindow_.isShopMenu() && m_end.m_flag) {
        MaterielMenu_WINDOW_MANAGER::getSingleton()->editMessageForScript_ = 0;
        return true;
    }
    return false;
}

THUMB void __cmd_set_wait_enable_lock::initialize(char* scriptParam)
{
    PARAM_SET_WAIT_ENABLE_LOCK* param = (PARAM_SET_WAIT_ENABLE_LOCK*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setMoveWait(ctrl, param->frame);
}

THUMB int __cmd_set_wait_enable_lock::isEnd()
{
    int ctrl = getPlacementCtrlId();
    return TownCharacterManager::getSingleton()->character_[ctrl]->isMoveWaitEnd();
}

THUMB void __cmd_chara_move_line_to_player::initialize(char* scriptParam)
{
    PARAM_CHARA_MOVE_LINE_TO_PLAYER* param = (PARAM_CHARA_MOVE_LINE_TO_PLAYER*)scriptParam;
    int ctrl = getPlacementCtrlId();
    dss::Fix32Vector3 start(TownCharacterManager::getSingleton()->getPosition(ctrl));
    dss::Fix32Vector3 end = TownPlayerManager::getSingleton()->getPosition();
    end.vy = start.vy;
    dss::Fix32Vector3 vec = (end - start);
    if (param->line == 0) {
        if (vec.vx < dss::Fix32(0L)) {
            end.vx.value += param->offset;
        } else {
            end.vx.value -= param->offset;
        }
        end.vz = start.vz;
    } else {
        if (vec.vz < dss::Fix32(0L)) {
            end.vz.value += param->offset;
        } else {
            end.vz.value -= param->offset;
        }
        end.vx = start.vx;
    }
    TOWN_SCRIPT_DATA scriptData;
    dss::memset(&scriptData, 0, sizeof(scriptData));
    scriptData.node[0] = start;
    scriptData.node[1] = end;
    if (param->rate == 0) {
        param->rate = 0x1000;
    }
    scriptData.frame = ((scriptData.node[1] - scriptData.node[0])).length().value / (param->rate * defaultSpeed.value / 0x1000);
    TownCharacterManager::getSingleton()->setScriptData(ctrl, scriptData);
    TownCharacterManager::getSingleton()->character_[ctrl]->setSimpleMove();
}

THUMB int __cmd_chara_move_line_to_player::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (TownCharacterManager::getSingleton()->character_[ctrl]->isScriptEnd() != 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_set_chara_rot::initialize(char* scriptParam)
{
    PARAM_SET_CHARA_ROT* param = (PARAM_SET_CHARA_ROT*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setRotFrame(ctrl, param->frame, param->idx, param->rotFlag, param->endFlag);
}

THUMB int __cmd_set_chara_rot::isEnd()
{
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[ctrl]->isRotFrameEnd();
    return true;
}

THUMB void __cmd_set_end_roll::initialize(char*)
{
    TownEndrollManager::getSingleton()->setup();
}

THUMB int __cmd_set_end_roll::isEnd()
{
    return TownEndrollManager::getSingleton()->isStaffRollEnd();
}

THUMB void __cmd_party_move_to_first2::initialize(char* scriptParam)
{
    PARAM_PARTY_MOVE_TO_FIRST2* param = (PARAM_PARTY_MOVE_TO_FIRST2*)scriptParam;
    SPEED_TYPE rate;
    switch (param->rate) {
    case 0:
        rate = SPEED_TYPE2;
        break;
    case 1:
        rate = SPEED_TYPE1;
        break;
    default:
        rate = SPEED_TYPE1;
        break;
    }
    TownPlayerManager::getSingleton()->party_.moveFirstFlag_ = 1;
    TownPlayerManager::getSingleton()->party_.setMoveToFirstHalfSpeed(rate);
}

THUMB int __cmd_party_move_to_first2::isEnd()
{
    if (TownPlayerManager::getSingleton()->party_.moveFirstFlag_ == 0) {
        return true;
    }
    return false;
}

THUMB void __cmd_character_rgb_anim2::initialize(char* scriptParam)
{
    PARAM_CHARACTER_RGB_ANIM2* param = (PARAM_CHARACTER_RGB_ANIM2*)scriptParam;
    int ctrl = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setChangePaletteRate(ctrl, param->R, param->G, param->B, param->frame);
    endFlag_ = param->flag;
}

THUMB int __cmd_character_rgb_anim2::isEnd()
{
    int ctrl = getPlacementCtrlId();
    if (endFlag_ == 0) {
        return true;
    }
    return TownCharacterManager::getSingleton()->character_[ctrl]->isEndPalletRate();
}

THUMB void __cmd_the_end::initialize(char*)
{
    TownEndrollManager::getSingleton()->startTheEnd();
}

THUMB int __cmd_the_end::isEnd()
{
    return TownEndrollManager::getSingleton()->isEndTheEnd();
}

THUMB int cmd_is_trigger3(int* scriptParam)
{
    PARAM_IS_TRIGGER3* param = (PARAM_IS_TRIGGER3*)scriptParam;
    dss::Fix32Vector3 start;
    dss::Fix32Vector3 end;
    start.vx.value = param->startX;
    start.vy.value = param->startY;
    start.vz.value = param->startZ;
    end.vx.value = param->endX;
    end.vy.value = param->endY;
    end.vz.value = param->endZ;
    dss::Fix32Vector3 pos = TownPlayerManager::getSingleton()->getPosition();
    short idx = TownPlayerManager::getSingleton()->getDirection();
    static dss::Fix32Vector3 returnPos(0, 0, 0);
    static int firstFlag = true;
    if (g_cmnPartyInfo.prevFrameBattle_ == 1) {
        g_cmnPartyInfo.position_ = g_cmnPartyInfo.beforeBattlePos_;
        return false;
    }
    if (cmn::CommonCalculate::areaCheck(pos, idx, start, end, 0, 6) == 1) {
        g_cmnPartyInfo.position_ = g_cmnPartyInfo.prev_position_;
        if (firstFlag == 0) {
            if (cmn::CommonCalculate::areaCheck(g_cmnPartyInfo.position_, idx, start, end, 0, 6) == 1) {
                g_cmnPartyInfo.position_ = returnPos;
            }
        }
        return true;
    }
    returnPos = pos;
    firstFlag = 0;
    return false;
}
