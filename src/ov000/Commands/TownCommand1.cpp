#include "ov000/Commands/TownCommand.hpp"
#include "ov000/town/TownWindowSystem.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "main/status/StageStatus.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "ov000/town/TownIkadaAction2.hpp"

THUMB int cmd_set_overview_point(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    g_Stage.overviewTempPosition_ = pos;
    return 1;
}

THUMB int cmd_set_player_position(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    TownPlayerManager::getSingleton()->setPosition(pos);
    if (TownPlayerManager::getSingleton()->player_.actionType_ == 9) {
        TownIkadaAction2::getSingleton()->setIkadaPosition(pos);
    }
    return 1;
}

THUMB int cmd_set_player_direction(int* param)
{
    TownPlayerManager::getSingleton()->setDirection(param[0] << 14);
    return 1;
}

THUMB int cmd_is_speaked(int* param)
{
    int index = getPlacementCtrlId();
    int id = getPlacementIndex(index);
    int voice = TownCharacterManager::getSingleton()->getCharaIndex(index);
    if (TownCharacterManager::getSingleton()->isTalked(index) != 0) {
        if (TownCharacterManager::getSingleton()->character_[index]->checkMonsterSpeak() == 0 && g_HengeNoTsue.isMonster() == 1) {
            int message = g_HengeNoTsue.getMessage(voice);
            if (message != -1) {
                func_02056358(cmn::g_talkSound.getCharacterVoice(index));
                TownWindowSystem::getSingleton()->openCommonMessage();
                TownWindowSystem::getSingleton()->addCommonMessage(message);
                cmn::PartyTalk::getSingleton()->resetPartyTalk();
                if (TownCharacterManager::getSingleton()->getCharatType(index) == 0) {
                    TownCharacterManager::getSingleton()->setPlayerDirection(index);
                }
                return 0;
            }
        }
        cmn::g_talkSound.setVoice(voice);
        cmn::PartyTalk::getSingleton()->resetPartyTalk();
        cmn::PartyTalk::getSingleton()->setObjectNo(id);
        g_cmnPartyInfo.playerTalk = 1;
        return 1;
    }
    return 0;
}

THUMB int cmd_speak_to_player(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(index);
    cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(index));
    cmn::g_talkSound.setMessageSound(param[1], index);
    TownWindowSystem::getSingleton()->openMessage(param[0], param[1]);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
    }
    return 1;
}

THUMB int cmd_speak_to_player2(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPlayerDirection(index);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
    }
    cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(index));
    int message[8];
    message[0] = param[0];
    message[1] = param[1];
    message[2] = param[2];
    message[3] = param[3];
    message[4] = param[4];
    message[5] = param[5];
    message[6] = param[6];
    message[7] = param[7];
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (message[i] == 0) {
            break;
        }
        count++;
    }
    cmn::g_talkSound.setMessageSound(count, index);
    if (param[0] != 0) {
        TownWindowSystem::getSingleton()->openCommonMessage();
        TownWindowSystem::getSingleton()->addCommonMessage(param[0]);
    }
    if (param[1] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[1]);
    }
    if (param[2] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[2]);
    }
    if (param[3] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[3]);
    }
    if (param[4] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[4]);
    }
    if (param[5] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[5]);
    }
    if (param[6] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[6]);
    }
    if (param[7] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[7]);
    }
    return 1;
}

THUMB int cmd_set_x_wins(int* param)
{
    TextAPI::setMACRO0(0x55, 0xf0000000, param[0]);
    return 1;
}
