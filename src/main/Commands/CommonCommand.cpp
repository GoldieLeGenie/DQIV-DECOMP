#include "main/Commands/CommonCommand.hpp"
#include "main/btl/BattleScriptManager.hpp"
#include "main/status/BattleResult.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/GameFlag.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/ExtraMapLink.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/global/Global.hpp"
#include "main/sound/SoundManager.hpp"
#include "main/dss/Random.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/BattleHistory.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownCharacterManager.hpp"

THUMB int cmd_encount(int* param)
{
    if (param[0] == 0) {
        func_0200acc8(func_0200a6c8(), param[1]);
    } else if (param[0] == 1) {
        btl::BattleScriptManager::getSingleton()->setEncountMap(param[1]);
        func_0200acec(func_0200a6c8(), param[1]);
    }
    ScriptSystem::getSingleton()->executeEnable_ = 0;
    if (func_02058114(data_0210bb94, 0xe) == 1) {
        func_ov001_0212a620(func_ov001_02127b28(), 1);
    } else {
        func_ov000_02135ac0(func_ov000_02132a90(), 1);
    }
    return 1;
}

THUMB int cmd_encount_set_flag(int* param)
{
    if (param[0] == 0) {
        func_0200acc8(func_0200a6c8(), param[1]);
    } else if (param[0] == 1) {
        btl::BattleScriptManager::getSingleton()->setEncountMap(param[1]);
        func_0200acec(func_0200a6c8(), param[1]);
    }
    if (func_02058114(data_0210bb94, 0xe) == 1) {
        func_ov001_0212a620(func_ov001_02127b28(), 1);
    } else {
        func_ov000_02135ac0(func_ov000_02132a90(), 1);
    }
    ScriptSystem::getSingleton()->executeEnable_ = 0;
    return 1;
}

THUMB int cmd_encount_first_strike(int* param)
{
    if (param[2] == 1) {
        status::g_BattleResult.playerFirstAttack_ = 1;
        status::g_BattleResult.monsterFirstAttack_ = 0;
    } else if (param[2] == 2) {
        status::g_BattleResult.playerFirstAttack_ = 0;
        status::g_BattleResult.monsterFirstAttack_ = 1;
    }
    if (param[0] == 0) {
        func_0200acc8(func_0200a6c8(), param[1]);
    } else if (param[0] == 1) {
        btl::BattleScriptManager::getSingleton()->setEncountMap(param[1]);
        func_0200acec(func_0200a6c8(), param[1]);
    }
    if (func_02058114(data_0210bb94, 0xe) == 1) {
        func_ov001_0212a620(func_ov001_02127b28(), 1);
    } else {
        func_ov000_02135ac0(func_ov000_02132a90(), 1);
    }
    ScriptSystem::getSingleton()->executeEnable_ = 0;
    return 1;
}

THUMB int cmd_set_party_join_carriage()
{
    status::g_Party.basha_ = 1;
    func_02030f60(cmn::GameManager::getSingleton());
    return 1;
}

THUMB int cmd_set_town_to_field_link(int* param)
{
    dss::Fix32Vector3 offset;
    offset.set(param[2], param[3], 0);
    cmn::g_extraMapLink.setLinkData(param[5], param[1], cmn::LINK_TOWN_TO_FIELD, g_Global.getMapName(), 0, offset);
    return 1;
}

THUMB int cmn_set_field_to_town_link(int* param)
{
    cmn::g_extraMapLink.setLinkData(param[5], param[4], cmn::LINK_FIELD_TO_TOWN, 0, (const char*)param);
    return 1;
}

THUMB int cmd_is_trigger_forward(int* param)
{
    dss::Fix32Vector3 pos = cmn::GameManager::getSingleton()->playerManager_->getPosition();
    short dir = cmn::GameManager::getSingleton()->playerManager_->getDirection();
    dss::Fix32Vector3 min;
    dss::Fix32Vector3 max;
    min.set(param[0], param[1], param[2]);
    max.set(param[3], param[4], param[5]);
    dss::Fix32Vector3 diff = func_02088988(func_02088bdc(min + max, 2), pos);
    TriggerCheck check = param[6] == 0 ? TRIGGER_CHECK_0 : TRIGGER_CHECK_1;
    int type = param[7] == 0 ? 7 : 6;
    return cmn::CommonCalculate::areaCheck(pos, dir, min, max, check, type);
}

THUMB int cmd_set_encount_disable(int* param)
{
    int flag = param[0] == 0 ? 1 : 0;
    func_0200a6c8()->enable_ = flag;
    return 1;
}

THUMB int cmd_set_encount_stage_disable(int* param)
{
    g_Stage.setEncount(param[0] == 0 ? 1 : 0);
    return 1;
}

THUMB int cmd_set_demolition_fightingarena(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[4];
    pos.vy.value = param[5];
    pos.vz.value = param[6];
    g_Global.setFightingArenaMapName((const char*)param, pos);
    return 1;
}

THUMB int cmd_event_chapter_end(int* param)
{
    return 1;
}

THUMB int cmd_set_chapter(int* param)
{
    int top = 0;
    MapNameTable6 church = data_020b4fe8;
    MapNameTable5 map = data_020b4fd4;
    status::g_Story.setChapter(param[0]);
    dss::Fix32Vector3 pos;
    dss::Fix32Vector3 unused;
    switch (param[0]) {
    case 1: {
        top = 3;
        g_Global.setMapName(map.name_[0]);
        g_Stage.setChurchMapName((char*)church.name_[0]);
        func_0208718c(&pos.vx, dss::Fix32(data_020be07c));
        func_0208718c(&pos.vy, dss::Fix32(data_020be070));
        func_0208718c(&pos.vz, dss::Fix32(data_020be06c));
        status::BaseHaveItem* haveItem = &status::g_Party.getPlayerStatus(0)->haveStatusInfo_.haveItem_;
        if (status::g_Party.haveItemSack_.getCount() != 0) {
            status::HaveItemSack* sack = &status::g_Party.haveItemSack_;
            do {
                for (int i = 0; i < sack->getCount(); i++) {
                    haveItem->add(sack->getItem(i));
                    sack->execThrow(i);
                }
            } while (sack->getCount() != 0);
        }
        status::g_Party.setGold(0);
        break;
    }
    case 2:
        top = 4;
        g_Global.setMapName(map.name_[1]);
        g_Stage.setChurchMapName((char*)church.name_[1]);
        break;
    case 3:
        top = 7;
        g_Global.setMapName(map.name_[2]);
        g_Stage.setChurchMapName((char*)church.name_[2]);
        func_0208718c(&pos.vx, dss::Fix32(data_020be088));
        func_0208718c(&pos.vy, dss::Fix32(data_020be074));
        func_0208718c(&pos.vz, dss::Fix32(data_020be09c));
        break;
    case 4:
        top = 9;
        g_Global.setMapName(map.name_[3]);
        g_Stage.setChurchMapName((char*)church.name_[3]);
        func_0208718c(&pos.vx, dss::Fix32(data_020be084));
        func_0208718c(&pos.vy, dss::Fix32(data_020be064));
        func_0208718c(&pos.vz, dss::Fix32(data_020be058));
        break;
    case 5:
        top = 1;
        if (status::g_Story.sex_ == 1) {
            top = 2;
        }
        g_Global.setMapName(map.name_[4]);
        g_Stage.setChurchMapName((char*)church.name_[4]);
        break;
    default:
        g_Stage.setChurchMapName((char*)church.name_[5]);
        break;
    }
    g_Stage.overviewTempPosition_ = pos;
    if ((unsigned int)param[0] <= 5) {
        g_Stage.ruraEnable_.flag_ = 0;
        status::g_Party.clear();
        status::g_Party.add(top);
        status::g_BattleHistory.setChapterBattleCount(0);
        status::g_BattleHistory.setChapterWipeoutCount(0);
        status::g_BattleHistory.setChapterEscapeCount(0);
    }
    if ((unsigned int)param[0] <= 6) {
        func_0200a6c8()->enable_ = 1;
        status::g_BattleResult.setDisablePlayerDemolition(false);
    }
    return 1;
}

THUMB int cmd_chapter_store(int* param)
{
    status::g_Party.setPlayerMode();
    int count = status::g_Party.getCount();
    for (int i = 0; i < count; i++) {
        int k;
        status::BaseHaveItem* haveItem = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveItem_;
        for (int j = 0; j < haveItem->getMaxCount(); j++) {
            for (k = 0; k < haveItem->getCount(); k++) {
                if (haveItem->getItem(k) == 0x85 || haveItem->getItem(k) == 0x89 ||
                    haveItem->getItem(k) == 0x8e || haveItem->getItem(k) == 0x7b) {
                    ((status::BaseHaveItem*)&status::g_Party.haveItemSack_)->add(haveItem->getItem(k));
                    haveItem->del(k);
                    break;
                }
            }
        }
    }
    status::g_Story.store();
    return 1;
}

THUMB int cmd_chapter_restore(int* param)
{
    status::g_Story.restoreSack(param[0]);
    return 1;
}

THUMB int cmd_chapter_restore_coin(int* param)
{
    status::g_Story.restoreCoin(param[0]);
    return 1;
}

THUMB int cmd_is_battle_turn(int* param)
{
    unsigned int turn = status::g_BattleResult.battleTurnCount_;
    if (param[1] == 0) {
        if ((unsigned int)param[0] < turn) {
            return 1;
        }
        return 0;
    }
    if ((unsigned int)param[0] >= turn) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_random(int* param)
{
    if (dssrand::rand(param[1]) % param[1] == 0) {
        g_GlobalFlag.set(param[0]);
    } else {
        g_GlobalFlag.remove(param[0]);
    }
    return 1;
}

THUMB int cmd_set_random2(int* param)
{
    if ((unsigned int)(dssrand::rand(param[2]) % param[2]) < (unsigned int)param[1]) {
        g_GlobalFlag.set(param[0]);
    } else {
        g_GlobalFlag.remove(param[0]);
    }
    return 1;
}

THUMB int cmd_set_music(int* param)
{
    SoundManager::play(param[0], 0xf);
    return 1;
}

THUMB int cmd_music_pause(int* param)
{
    if (param[0] == 1) {
        SoundManager::stop(0xf);
    }
    return 1;
}

THUMB int cmd_play_music_now_map(int* param)
{
    if (func_02058114(data_0210bb94, 0xc) == 1) {
        SoundManager::townPlay();
    } else if (func_02058114(data_0210bb94, 0xe) == 1) {
        SoundManager::fieldPlay();
    }
    return 1;
}

THUMB int cmd_set_wait_counter(int* param)
{
    cmn::g_CommonCounterInfo.setWaitZero(param[0]);
    return 1;
}

THUMB int cmd_is_wait_counter(int* param)
{
    return cmn::g_CommonCounterInfo.isEndWaitCounter();
}

THUMB int cmd_is_push_key(int* param)
{
    return cmn::g_CommonCounterInfo.checkBottun();
}

THUMB int cmd_wait_operation(int* param)
{
    return cmn::g_CommonCounterInfo.checkBottun();
}

THUMB int cmd_set_day_count(int* param)
{
    cmn::g_CommonCounterInfo.setDayCounter(param[0], param[1]);
    return 1;
}

THUMB int cmd_is_day_count(int* param)
{
    return cmn::g_CommonCounterInfo.isEndDayCounter(param[0]);
}

THUMB int cmd_add_nene_count(int* param)
{
    cmn::g_CommonCounterInfo.freeCounter_[0]++;
    return 1;
}

THUMB int cmd_map_link_field_direct(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[1];
    pos.vy.value = param[2];
    pos.vz = 0L;
    cmn::g_extraMapLink.setExtraExitField(param[0], pos);
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        data_ov000_0214eb98 = 0;
        func_020499a4(1);
        func_ov000_02138ed0(func_ov000_02137f2c());
        func_ov000_0213b118(&func_ov000_02132a90()->partyDraw_, 2);
        if (param[3] == 1) {
            func_ov000_02132228()->playExitSE_ = 1;
        }
    } else if (param[3] == 1) {
        func_ov001_02127458()->exitSound_ = 1;
    }
    return 1;
}

THUMB int cmd_floor_change(int* param)
{
    dss::Fix32Vector3 pos = cmn::CommonCalculate::setVecByParam(param[4], param[5], param[6]);
    cmn::g_extraMapLink.setExtraLinkTown((const char*)param, pos, cmn::CommonCalculate::getIdxByParam((unsigned char)param[7]));
    ScriptSystem::getSingleton()->executeEnable_ = 0;
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        data_ov000_0214eb98 = 0;
        func_020499a4(1);
        func_ov000_02138ed0(func_ov000_02137f2c());
        func_ov000_0213b118(&func_ov000_02132a90()->partyDraw_, 2);
        if (param[8] == 1) {
            func_ov000_02132228()->playExitSE_ = 1;
        }
    } else if (param[8] == 1) {
        func_ov001_02127458()->exitSound_ = 1;
    }
    return 1;
}

THUMB int cmd_floor_exit(int* param)
{
    cmn::g_extraMapLink.setExtraExitTown((const char*)param, param[4]);
    ScriptSystem::getSingleton()->executeEnable_ = 0;
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        data_ov000_0214eb98 = 0;
        func_020499a4(1);
        func_ov000_02138ed0(func_ov000_02137f2c());
        func_ov000_0213b118(&func_ov000_02132a90()->partyDraw_, 2);
        if (param[5] == 1) {
            func_ov000_02132228()->playExitSE_ = 1;
        }
    } else if (param[5] == 1) {
        func_ov001_02127458()->exitSound_ = 1;
    }
    return 1;
}

THUMB int cmd_set_map_link_on_off(int* param)
{
    cmn::LINK_TYPE type = param[1] == 0 ? cmn::NOT_LINK_THIS_TOWN : cmn::LINK_DEFAULT;
    if (func_02058114(data_0210bb94, 0xe) != 0) {
        cmn::g_extraMapLink.setLinkData(param[0], -1, type, 0, 0);
    }
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        cmn::g_extraMapLink.setLinkData(param[0], -1, type, g_Global.getMapName(), 0);
    }
    return 1;
}

THUMB int cmd_change_map_link(int* param)
{
    cmn::g_extraMapLink.setLinkData(param[5], param[4], cmn::LINK_TOWN_TO_TOWN, g_Global.getMapName(), (const char*)param);
    return 1;
}

THUMB int cmd_set_vehicle(int* param)
{
    int value = param[1];
    switch (param[0]) {
    case 0:
        if (value == 1) {
            status::g_Party.basha_ = 1;
        } else {
            status::g_Party.basha_ = 0;
        }
        break;
    case 1:
        status::g_Party.ship_ = value;
        break;
    case 2:
        status::g_Party.balloon_ = value;
        break;
    }
    return 1;
}

THUMB int cmd_not_play_normal_sound(int* param)
{
    SoundManager::setTownPlayDisable();
    return 1;
}

THUMB int cmd_check_member_type(int* param)
{
    return func_02037d6c(func_02037da4(), param[0]);
}

THUMB int cmd_check_member_num(int* param)
{
    unsigned int count = *(unsigned int*)func_02037da4();
    if (count < (unsigned int)param[1] && count >= (unsigned int)param[0]) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_sleep_near(int* param)
{
    dss::Fix32 x(data_020be068);
    x.value = param[1];
    dss::Fix32 y(data_020be054);
    y.value = param[2];
    dss::Fix32 z(data_020be04c);
    z.value = param[3];
    if (param[0] == 0) {
        if (x == dss::Fix32(data_020be060)) {
            func_0208718c(&x, dss::Fix32(data_020be08c));
        }
        if (y == dss::Fix32(data_020be090)) {
            func_0208718c(&y, dss::Fix32(data_020be094));
        }
        if (z == dss::Fix32(data_020be05c)) {
            func_0208718c(&z, dss::Fix32(data_020be0a8));
        }
    } else if (param[0] == 1) {
        if (x == dss::Fix32(data_020be0a0)) {
            func_0208718c(&x, dss::Fix32(data_020be0a4));
        }
        if (y == dss::Fix32(data_020be098)) {
            func_0208718c(&y, dss::Fix32(data_020be078));
        }
        if (z == dss::Fix32(data_020be080)) {
            func_0208718c(&z, dss::Fix32(data_020be050));
        }
    }
    func_0208718c(&data_020f4e18, dss::Fix32(x));
    func_0208718c(&data_020f4e2c, dss::Fix32(y));
    func_0208718c(&data_020f4e28, dss::Fix32(z));
    return 1;
}

THUMB int cmd_string_print(int* param)
{
    return 1;
}

THUMB int cmd_player_lock(int* param)
{
    if (param[0] != 0) {
        data_020ecf3c++;
        if (func_02058114(data_0210bb94, 0xc) != 0) {
            func_ov000_021341ec(func_ov000_02132a90(), 1);
            func_ov000_02132a90()->charaColl_ = 0;
        } else {
            func_ov001_02127b28();
            cmn::PlayerManager::setLock(1);
        }
        cmn::PartyTalk::getSingleton()->resetPartyTalk();
    } else {
        data_020ecf3c--;
        if (func_02058114(data_0210bb94, 0xc) != 0) {
            func_ov000_021341ec(func_ov000_02132a90(), 0);
            if (!cmn::PlayerManager::isLock()) {
                func_ov000_02132a90()->charaColl_ = 1;
                func_ov000_02132a90()->flagMapLink_ = 1;
            }
        } else {
            func_ov001_02127b28();
            cmn::PlayerManager::setLock(0);
        }
    }
    return 1;
}

THUMB int cmd_set_macro_actor()
{
    TextAPI::setMACRO0(1, 0x50000000, g_cmnPartyInfo.actorIndex_);
    return 1;
}

THUMB int cmd_set_macro_target()
{
    status::g_Party.setPlayerMode();
    int i = 0;
    int target = 0;
    int first = 0;
    for (; i < status::g_Party.getCount(); i++) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        if (!info->isDeath()) {
            if (info->haveStatus_.isPlayer() == 1 && first == 0) {
                first = status::g_Party.getPlayerIndex(i);
            }
            if (info->haveItem_.getCount() != 12) {
                target = status::g_Party.getPlayerIndex(i);
                TextAPI::setMACRO0(0x12, 0x50000000, target);
                break;
            }
        }
    }
    if (target == 0) {
        TextAPI::setMACRO0(0x12, 0x50000000, first);
    }
    return 1;
}

THUMB int cmd_set_macro_target_index(int* param)
{
    int index = param[0];
    if (index == 1 || index == 2) {
        if (status::g_Story.sex_ == 0) {
            index = 1;
        }
        if (status::g_Story.sex_ == 1) {
            index = 2;
        }
    }
    TextAPI::setMACRO0(0x12, 0x50000000, index);
    return 1;
}

THUMB int cmd_set_macro_prisoner()
{
    status::g_Party.setBattleMode();
    int i = 0;
    int index = status::g_Party.getPlayerIndex(i);
    for (; i < 0x1a; i++) {
        if (status::g_Party.isHostage(i)) {
            index = i;
            break;
        }
    }
    TextAPI::setMACRO0(0x10, 0x50000000, index);
    return 1;
}

THUMB int cmd_set_macro_x_item1(int* param)
{
    int sword;
    int armor;
    if (param[0] == 0) {
        sword = status::g_Story.getGiveEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI);
        armor = status::g_Story.getGiveEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI);
    } else {
        sword = 6 - status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI);
        armor = 6 - status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI);
    }
    TextAPI::setMACRO1(0x4f, 0xf0000000, sword);
    TextAPI::setMACRO2(0x4f, 0xf0000000, armor);
    return 1;
}

THUMB int cmd_set_macro_i_name(int* param)
{
    TextAPI::setMACRO0(10, 0x40000000, param[0]);
    return 1;
}

THUMB int cmd_barrier_disruption(int* param)
{
    g_Stage.maxKekai--;
    return 1;
}

THUMB int cmd_is_barrier_disruption(int* param)
{
    if (param[0] == 4 - g_Stage.maxKekai) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_party_join(int* param)
{
    status::g_Party.add(param[0]);
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        func_ov000_02132a90()->resetParty();
    } else {
        func_ov001_02127b28()->resetParty();
    }
    return 1;
}

THUMB int cmd_set_party_quit(int* param)
{
    status::g_Party.del(param[0]);
    if (func_02058114(data_0210bb94, 0xc) != 0) {
        func_ov000_02132a90()->resetParty();
    } else {
        func_ov001_02127b28()->resetParty();
    }
    return 1;
}

THUMB int cmd_party_del2(int* param)
{
    if (func_ov000_0213556c(func_ov000_02132a90(), param[0]) == 1) {
        int index = param[0];
        cmd_set_party_quit(&index);
    }
    return 1;
}

THUMB int cmd_battle_end_flag_set(int* param)
{
    if (param[0] == 0) {
        func_0200acc8(func_0200a6c8(), param[1]);
    } else if (param[0] == 1) {
        btl::BattleScriptManager::getSingleton()->setEncountMap(param[1]);
        func_0200acec(func_0200a6c8(), param[1]);
    }
    if (func_02058114(data_0210bb94, 0xe) == 1) {
        func_ov001_0212a620(func_ov001_02127b28(), 1);
    } else {
        func_ov000_02135ac0(func_ov000_02132a90(), 1);
    }
    btl::BattleScriptManager::getSingleton()->setScriptBattleResult(param[3], param[2], 0);
    btl::BattleScriptManager::getSingleton()->setScriptBattleResult(param[5], param[4], 1);
    return 1;
}

THUMB int cmd_not_use_load_message()
{
    g_Stage.chapterLoad_ = 1;
    return 1;
}

THUMB int cmd_set_message_sound(int* param)
{
    cmn::TalkSoundManager::MESSAGESOUND sound;
    int type[7];
    type[0] = param[1];
    type[1] = param[2];
    type[2] = param[3];
    type[3] = param[4];
    type[4] = param[5];
    type[5] = param[6];
    type[6] = param[7];
    for (unsigned int i = 0; i < (unsigned int)param[0]; i++) {
        switch (type[i]) {
        case 0:
            sound = cmn::TalkSoundManager::MESSAGESOUND_NONE;
            break;
        case 1:
            sound = cmn::TalkSoundManager::MESSAGESOUND_HIGH;
            break;
        case 2:
            sound = cmn::TalkSoundManager::MESSAGESOUND_MIDDLE;
            break;
        case 3:
            sound = cmn::TalkSoundManager::MESSAGESOUND_LOW;
            break;
        case 4:
            sound = cmn::g_talkSound.getPlayerVoice();
            break;
        case 5:
            sound = cmn::g_talkSound.getMostHeroicVoice();
            break;
        }
        cmn::g_talkSound.setOrderMessage(sound);
    }
    return 1;
}

THUMB int cmd_is_monster(int* param)
{
    int monster = g_HengeNoTsue.isMonster();
    if (param[0] == 1) {
        return monster;
    }
    if (monster == 0) {
        return 1;
    }
    return 0;
}
