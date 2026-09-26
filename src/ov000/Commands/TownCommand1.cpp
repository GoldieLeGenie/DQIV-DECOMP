#include "ov000/Commands/TownCommand.hpp"
#include "ov000/TownPlayerManager.hpp"
#include "main/status/StageStatus.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/PartyTalk.hpp"

THUMB int cmd_set_overview_point(int* param)
{
    dss::Fx32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    g_Stage.overviewTempPosition_ = pos;
    return 1;
}

THUMB int cmd_set_player_position(int* param)
{
    dss::Fx32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    func_ov000_02132a90()->setPosition(pos);
    if (func_ov000_02132a90()->unk_12fc == 9) {
        func_ov000_021287e4(func_ov000_021285c0(), &pos);
    }
    return 1;
}

THUMB int cmd_set_player_direction(int* param)
{
    func_ov000_02133f3c(func_ov000_02132a90(), param[0] << 14);
    return 1;
}

THUMB int cmd_is_speaked(int* param)
{
    int index = func_0202375c();
    int id = func_02023778(index);
    int voice = func_ov000_02138eb8(func_ov000_02137f2c(), index);
    if (func_ov000_0213842c(func_ov000_02137f2c(), index) != 0) {
        if (func_ov000_0212e930(func_ov000_02137f2c()->chara_[index]) == 0 && g_HengeNoTsue.isMonster() == 1) {
            int message = g_HengeNoTsue.getMessage(voice);
            if (message != -1) {
                func_02056358(((cmn::TalkSoundManager*)data_020efcc0)->getCharacterVoice(index));
                func_ov000_0213747c(func_ov000_021372e8());
                func_ov000_02137470(func_ov000_021372e8(), message);
                cmn::PartyTalk::getSingleton()->resetPartyTalk();
                if (func_ov000_021382a0(func_ov000_02137f2c(), index) == 0) {
                    func_ov000_02138308(func_ov000_02137f2c(), index);
                }
                return 0;
            }
        }
        ((cmn::TalkSoundManager*)data_020efcc0)->setVoice(voice);
        cmn::PartyTalk::getSingleton()->resetPartyTalk();
        cmn::PartyTalk::getSingleton()->setObjectNo(id);
        g_cmnPartyInfo.playerTalk = 1;
        return 1;
    }
    return 0;
}

THUMB int cmd_speak_to_player(int* param)
{
    int index = func_0202375c();
    func_ov000_02138308(func_ov000_02137f2c(), index);
    ((cmn::TalkSoundManager*)data_020efcc0)->setVoice(func_ov000_02138eb8(func_ov000_02137f2c(), index));
    ((cmn::TalkSoundManager*)data_020efcc0)->setMessageSound(param[1], index);
    func_ov000_0213745c(func_ov000_021372e8(), param[0], param[1]);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
    }
    return 1;
}

THUMB int cmd_speak_to_player2(int* param)
{
    int index = func_0202375c();
    func_ov000_02138308(func_ov000_02137f2c(), index);
    if (!g_HengeNoTsue.isMonster()) {
        cmn::PartyTalk::getSingleton()->setPreMessageNo(param[0]);
    }
    ((cmn::TalkSoundManager*)data_020efcc0)->setVoice(func_ov000_02138eb8(func_ov000_02137f2c(), index));
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
    ((cmn::TalkSoundManager*)data_020efcc0)->setMessageSound(count, index);
    if (param[0] != 0) {
        func_ov000_0213747c(func_ov000_021372e8());
        func_ov000_02137470(func_ov000_021372e8(), param[0]);
    }
    if (param[1] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[1]);
    }
    if (param[2] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[2]);
    }
    if (param[3] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[3]);
    }
    if (param[4] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[4]);
    }
    if (param[5] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[5]);
    }
    if (param[6] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[6]);
    }
    if (param[7] != 0) {
        func_ov000_02137470(func_ov000_021372e8(), param[7]);
    }
    return 1;
}

THUMB int cmd_set_x_wins(int* param)
{
    func_02054364(0x55, 0xf0000000, param[0]);
    return 1;
}
