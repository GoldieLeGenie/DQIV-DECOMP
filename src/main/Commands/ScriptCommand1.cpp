#include "main/Commands/CommonCommand.hpp"
#include "main/global/GlobalDQ4.hpp"
#include "ov001/window/FieldWindowSystem.hpp"
#include "ov000/town/TownWindowSystem.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/global/Global.hpp"
#include "main/dss/Random.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownStageManager.hpp"

ARM int cmd_setup(int* param)
{
    ScriptObjectId id;
    id.id_ = param[0];
    setScriptObjectEnable(*(int*)&id, true);
    return 1;
}

ARM int cmd_message1(int* param)
{
    int index = getPlacementCtrlId();
    if (getObjectCount() > index) {
        if (data_0210bb94.unkfunc_02058114(0xc) != 0) {
            cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(index));
        }
    } else {
        cmn::g_talkSound.setVoice(0);
        index = -1;
    }
    cmn::g_talkSound.setMessageSound(param[1], index);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
    }
    if (data_0210bb94.unkfunc_02058114(0xe) != 0) {
        FieldWindowSystem::getSingleton()->openMessage(param[0], param[1]);
    } else {
        TownWindowSystem::getSingleton()->openMessage(param[0], param[1]);
    }
    return 1;
}

ARM int cmd_message2(int* param)
{
    int index = getPlacementCtrlId();
    if (getObjectCount() > index) {
        if (data_0210bb94.unkfunc_02058114(0xc) != 0) {
            cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(index));
        }
    } else {
        cmn::g_talkSound.setVoice(0);
        index = -1;
    }
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
    TownWindowSystem::getSingleton()->openCommonMessage();
    if (param[0] != 0) {
        TownWindowSystem::getSingleton()->addCommonMessage(param[0]);
        if (!g_HengeNoTsue.isMonster()) {
            cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
        }
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

ARM int cmd_random_message(int* param)
{
    int index = getPlacementCtrlId();
    if (getObjectCount() > index) {
        if (data_0210bb94.unkfunc_02058114(0xc) != 0) {
            cmn::g_talkSound.setVoice(TownCharacterManager::getSingleton()->getCharaIndex(index));
        }
    } else {
        cmn::g_talkSound.setVoice(0);
        index = -1;
    }
    int message[7];
    message[0] = param[1];
    message[1] = param[2];
    message[2] = param[3];
    message[3] = param[4];
    message[4] = param[5];
    message[5] = param[6];
    message[6] = param[7];
    int select = dssrand::rand(param[0]);
    cmn::g_talkSound.setMessageSound(param[0], index);
    TownWindowSystem::getSingleton()->openCommonMessage();
    int mes = message[select];
    TownWindowSystem::getSingleton()->addCommonMessage(mes);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(mes);
    }
    return 1;
}
