#include "ov000/Commands/TownCommand.hpp"
#include "ov000/TownPlayerManager.hpp"
#include "ov000/TownStageManager.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/NonBattleActionManager.hpp"

extern "C" void func_02030f60(cmn::GameManager* mgr);

void searchItem(int index, int* found, int* items);

THUMB int cmd_enable_event_item(int* param)
{
    if (func_ov016_0216ba40()->enable_ != 0) {
        func_ov016_0216ba40()->item_ = 0;
        func_ov016_0216ba40()->enable_ = 0;
        return 1;
    }
    EventItemInfo::setItem(param[0]);
    return 0;
}

THUMB int cmn_set_event_door(int* param)
{
    int type;
    switch (param[1]) {
    case 1:
        type = 4;
        break;
    case 2:
        type = 2;
        break;
    case 3:
        type = 5;
        break;
    default:
        type = 1;
        break;
    }
    func_ov000_0212711c(func_ov000_021267dc(), param[0], type);
    return 1;
}

THUMB int cmd_map_change_timezone(int* param)
{
    g_Stage.setTimeZoneEnable(1);
    g_Stage.setTimeZone((TIME_ZONE)param[0]);
    return 1;
}

THUMB int cmd_map_effect_sepia()
{
    func_020835d8();
    func_02085d88();
    func_ov000_02139668()->fldObject_.SetSepia();
    return 1;
}

THUMB int cmd_character_not_change_direction(int* param)
{
    int index = func_0202375c();
    func_ov000_02137f2c()->setLockRot(index, param[0]);
    return 1;
}

THUMB int cmd_player_action_not_change_direction(int* param)
{
    func_ov000_02132a90()->setLockRot(param[0]);
    return 1;
}

THUMB int cmd_is_character_direction(int* param)
{
    int index = func_0202375c();
    return func_0203232c(param[0], func_ov000_02137f2c()->getDirection(index));
}

THUMB int cmd_is_player_direction(int* param)
{
    return func_0203232c(param[0], func_ov000_02132a90()->getDirection());
}

THUMB int cmd_map_animation(int* param)
{
    func_ov000_02139668()->eventAnim(param[0], 0);
    return 1;
}

THUMB int cmd_is_party_item(int* param)
{
    status::g_Party.setAllPlayerMode();
    int found[4] = {0, 0, 0, 0};
    int items[4];
    items[0] = param[3];
    items[1] = param[4];
    items[2] = param[5];
    items[3] = param[6];
    switch (param[0]) {
    case 0:
        for (int i = 0; i < status::g_Party.getCount(); i++) {
            searchItem(i, found, items);
        }
        break;
    case 1:
        for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
            searchItem(i, found, items);
        }
        break;
    case 2:
        if (status::g_Party.basha_ != 0) {
            int start = status::g_Party.getCarriageOutCount();
            int count = status::g_Party.getCount();
            for (int i = start; i < count; i++) {
                searchItem(i, found, items);
            }
        }
        break;
    }
    if (param[1] == 0) {
        for (int j = 0; j < status::g_Party.haveItemSack_.getCount(); j++) {
            for (int k = 0; k < 4; k++) {
                if (items[k] == status::g_Party.haveItemSack_.getItem(j)) {
                    found[k] = 1;
                }
            }
        }
    }
    if (param[2] == 0) {
        if (found[0] == 1 || found[1] == 1 || found[2] == 1 || found[3] == 1) {
            return 1;
        }
    } else {
        if (found[0] == 1 && found[1] == 1 && found[2] == 1 && found[3] == 1) {
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_is_not_party_item(int* param)
{
    if (cmd_is_party_item(param) == 0) {
        return 1;
    }
    return 0;
}

THUMB void searchItem(int index, int* found, int* items)
{
    int count;
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(index)->haveStatusInfo_;
    if (info->haveStatus_.isPlayer() != 0) {
        count = info->haveItem_.getCount();
        for (int j = 0; j < count; j++) {
            for (int k = 0; k < 4; k++) {
                if (items[k] == info->haveItem_.getItem(j)) {
                    found[k] = 1;
                }
            }
        }
    }
}

THUMB int cmd_set_hostage()
{
    status::g_Party.setBattleMode();
    int count = status::g_Party.getCarriageOutCount();
    int player = -1;
    for (int i = 0; i < count; i++) {
        if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.isPlayer_ != 0) {
            player++;
        }
    }
    int start = 1;
    if (player > 0) {
        start = status::g_Party.getCarriageOutCount();
    }
    int hostage = -1;
    int max = status::g_Party.getCount();
    for (int i = start; i < max; i++) {
        int playerIndex = status::g_Party.getPlayerIndex(i);
        if (playerIndex != 1 && playerIndex != 2 &&
            status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.isPlayer_ != 0) {
            hostage = playerIndex;
        }
    }
    if (hostage != -1) {
        status::g_Party.del(hostage);
        status::g_Party.setHostage(hostage, true);
        return 1;
    }
    return 0;
}

THUMB int cmd_set_party_reserve_order(int* param)
{
    status::g_Party.setBattleMode();
    int order[4] = {0, 0, 0, 0};
    int count = status::g_Party.getCarriageOutCount();
    int dead = 0;
    if (count < 4) {
        return 1;
    }
    for (int i = 0; i < count; i++) {
        order[i] = status::g_Party.getPlayerIndex(i);
        if (dead == 0 && status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath()) {
            order[i] = 0;
            dead = 1;
        }
    }
    if (dead == 0) {
        order[3] = 0;
    }
    status::g_Party.reorder(order[0], order[1], order[2], order[3]);
    func_02030f60(cmn::GameManager::getSingleton());
    return 1;
}

THUMB int cmd_map_texture(int* param)
{
    func_ov000_02139668()->setMapTexture(param[0]);
    return 1;
}

THUMB int cmd_set_map_texture(int* param)
{
    switch (param[0]) {
    case 0:
        func_ov000_02139fa4(func_ov000_02139668(), 0);
        break;
    case 1:
        func_ov000_02139fa4(func_ov000_02139668(), 1);
        break;
    }
    return 1;
}

THUMB int cmd_map_shake(int* param)
{
    func_ov000_02136d40(func_ov000_02135c88(), param[0], param[1]);
    return 1;
}

THUMB int cmd_effect_blur(int* param)
{
    if (param[0] == 1) {
        func_02082144(data_0211c4f0, 0);
    } else {
        func_02082144(data_0211c4f0, 1);
        func_0208214c(data_0211c4f0, param[1], param[2]);
    }
    return 1;
}

THUMB int cmd_party_display(int* param)
{
    if (param[0] == 1) {
        func_ov000_0213b010(&func_ov000_02132a90()->unk_c);
        func_ov000_0213afcc(&func_ov000_02132a90()->unk_c);
    } else {
        func_ov000_0213b0b0(&func_ov000_02132a90()->unk_c);
    }
    return 1;
}

THUMB int cmd_is_character_front(int* param)
{
    int index = func_0202375c();
    dss::Fx32Vector3 playerPos = func_ov000_02132a90()->getPosition();
    dss::Fx32Vector3 charaPos = *func_ov000_021383ac(func_ov000_02137f2c(), index);
    dss::Fx32Vector3 front;
    func_ov000_02130f48((short)func_ov000_02138744(func_ov000_02137f2c(), index), &front);
    if (front * func_02088988(playerPos, charaPos) >= dss::Fx32(data_ov000_021487a8.unk_0)) {
        if (param[0] == 1) {
            return 1;
        }
    } else {
        if (param[0] == 0) {
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_is_talked_at_shop(int* param)
{
    int index = func_0202375c();
    if (param[0] == 1) {
        if (func_ov000_0212e9d8(func_ov000_02137f2c()->chara_[index]) == 1 &&
            func_ov000_0213842c(func_ov000_02137f2c(), index) == 1) {
            return 1;
        }
    } else {
        if (func_ov000_0212e9d8(func_ov000_02137f2c()->chara_[index]) == 0 &&
            func_ov000_0213842c(func_ov000_02137f2c(), index) == 1) {
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_search_map_object(int* param)
{
    if (param[0] == func_ov000_02132a90()->unk_1720) {
        func_ov000_02132a90()->unk_1764 = 5;
        cmn::PartyTalk::getSingleton()->resetPartyTalk();
        return 1;
    }
    return 0;
}

THUMB int cmd_set_floor_map_object(int* param)
{
    dss::Fx32Vector3 pos;
    pos.vx.value = param[1];
    pos.vy.value = param[2];
    pos.vz.value = param[3];
    func_ov000_021429c8(func_ov000_02142964(), param[0], pos);
    return 1;
}

THUMB int cmd_character_move_passive(int* param)
{
    int index = func_0202375c();
    func_ov000_0212de50(func_ov000_02137f2c()->chara_[index]);
    return 1;
}

THUMB int cmd_character_move_random(int* param)
{
    int index = func_0202375c();
    func_ov000_0212e408(func_ov000_02137f2c()->chara_[index]);
    return 1;
}

THUMB int cmd_character_move_reverse(int* param)
{
    int index = func_0202375c();
    func_ov000_0212e1a0(func_ov000_02137f2c()->chara_[index]);
    return 1;
}

THUMB int cmd_is_trigger_distance(int* param)
{
    int index = func_0202375c();
    dss::Fx32Vector3 playerPos = func_ov000_02132a90()->getPosition();
    dss::Fx32Vector3 charaPos = *func_ov000_021383ac(func_ov000_02137f2c(), index);
    dss::Fx32 distance;
    distance.value = param[0];
    func_020872fc(&distance, &distance);
    if (((TownSystem*)func_ov000_02132228())->unk_614 == 1) {
        dss::Fx32 length = func_0208908c(playerPos, charaPos);
        if (func_02087420(&length, &distance)) {
            ((TownSystem*)func_ov000_02132228())->unk_614 = 0;
            return 1;
        }
    }
    return 0;
}

THUMB int cmd_character_set_coll_stage(int* param)
{
    int index = func_0202375c();
    signed char flag = 0;
    if (param[0] == 1) {
        flag |= 2;
    }
    if (param[1] == 1) {
        flag |= 1;
    }
    if (param[2] == 1) {
        flag |= 4;
    }
    func_ov000_02137f2c()->chara_[index]->unk_161 = flag;
    return 1;
}

THUMB int cmd_party_redisplay(int* param)
{
    func_ov000_0213b010(&func_ov000_02132a90()->unk_c);
    func_ov000_0213afcc(&func_ov000_02132a90()->unk_c);
    return 1;
}
