#include "ov000/Commands/TownCommand.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/global/Global.hpp"
#include "main/profile/Profile.hpp"

THUMB int cmd_debug_print(int* param)
{
    func_0207e88c(data_02116ce0, 10, 10, "%d", param[0]);
    return 1;
}

THUMB int cmd_set_item(int* param)
{
    status::g_Party.setPlayerMode();
    if (param[0] == 0x84) {
        status::g_Party.addPlayerMedalCoin(param[1]);
        return 1;
    }

    if (param[2] == 0) {
        int toSack = 1;
        for (int i = 0; i < status::g_Party.getCount(); i++) {
            status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
            if (info->isDeath() == 1) {
                continue;
            }
            int count = info->haveItem_.getCount();
            if (count + param[1] > 12) {
                continue;
            }
            for (unsigned int j = 0; j < (unsigned int)param[1]; j++) {
                status::BaseHaveItem* haveItem = &info->haveItem_;
                haveItem->add(param[0]);
            }
            toSack = 0;
            break;
        }
        if (toSack) {
            status::g_Party.haveItemSack_.adds(param[0], param[1]);
        }
        func_02054364(10, 0x40000000, param[0]);
        return 1;
    }

    int remain = param[1];
    for (int i = 0; i < status::g_Party.getCount(); i++) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        if (info->haveItem_.isItem(param[0])) {
            for (int j = 0; j < info->haveItem_.getCount(); j++) {
                if (param[0] == info->haveItem_.getItem(j)) {
                    info->execThrow(j);
                    remain--;
                    j--;
                    if (remain == 0) {
                        return 1;
                    }
                }
            }
        }
    }

    if (status::g_Party.fukuro_ != 0 && status::g_Party.haveItemSack_.isItem(param[0])) {
        for (int j = 0; j < status::g_Party.haveItemSack_.getCount(); j++) {
            if (param[0] == status::g_Party.haveItemSack_.getItem(j)) {
                int count = status::g_Party.haveItemSack_.getItemCount(j);
                for (int k = 0; k < count; k++) {
                    status::g_Party.haveItemSack_.execThrow(j);
                    if (--remain == 0) {
                        return 1;
                    }
                }
                break;
            }
        }
    }
    return 1;
}

THUMB int cmd_set_gold(int* param)
{
    if (param[1] == 0) {
        status::g_Party.setGold(param[0] + status::g_Party.gold_);
    } else {
        status::g_Party.setGold(status::g_Party.gold_ - param[0]);
    }
    return 1;
}

THUMB int cmd_set_coin(int* param)
{
    if (param[1] == 0) {
        status::g_Party.setCasinoCoin(param[0] + status::g_Party.casinoCoin_);
    } else {
        status::g_Party.setCasinoCoin(status::g_Party.casinoCoin_ - param[0]);
    }
    return 1;
}

THUMB int cmd_is_procure_item(int* param)
{
    for (int i = 0; i < status::g_Party.getCount(); i++) {
        if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveItem_.isItem(param[0])) {
            return 1;
        }
    }
    if (status::g_Party.fukuro_ != 0 && status::g_Party.haveItemSack_.isItem(param[0])) {
        return 1;
    }
    return 0;
}

THUMB int cmd_mini_game(int* param)
{
    if (param[0] != 2) {
        func_ov000_021341ec(func_ov000_02132a90(), 1);
        g_cmnPartyInfo.prevLocation_ = 1;
        g_Global.setMinigame(param[0]);
        func_ov016_02178378(data_ov016_02186a14, param[1]);
        g_Global.startCasino();
    } else {
        int index = func_0202375c();
        func_ov000_02138308(func_ov000_02137f2c(), index);
        func_0202a860(func_ov000_021372e8(), 0xf);
        g_cmnPartyInfo.partyTalk = index;
    }
    return 1;
}

THUMB int cmd_is_hostage(int* param)
{
    if (status::g_Party.isHostage(param[0])) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_ruura_lock(int* param)
{
    g_Stage.setRulaDisable(param[1]);
    g_Stage.setRiremitoDisable(param[0]);
    return 1;
}

THUMB int cmd_set_ranaruta(int* param)
{
    g_Stage.setLanarutaDisable(param[0]);
    return 1;
}

THUMB int cmd_invalidation_rula(int* param)
{
    g_Stage.setRula(param[0]);
    g_Stage.setRiremito(param[0]);
    return 1;
}

THUMB int cmd_check_money(int* param)
{
    int result = 0;
    if (param[1] == 0) {
        if (status::g_Party.gold_ >= (unsigned int)param[0]) {
            result = 1;
        }
    } else {
        if (status::g_Party.gold_ < (unsigned int)param[0]) {
            result = 1;
        }
    }
    return result;
}

THUMB int cmd_set_macro_target_index(int* param)
{
    int index = status::g_Party.getSortIndex(1);
    if (index == -1) {
        index = status::g_Party.getSortIndex(2);
        if (index == -1) {
            return 0;
        }
    }
    unsigned char level = status::g_Party.getPlayerStatus(index)->haveStatusInfo_.haveStatus_.level_;
    if (level >= (unsigned int)param[0] && level <= (unsigned int)param[1]) {
        return 1;
    }
    return 0;
}

THUMB int cmd_reset_sidejob_pay(int* param)
{
    darts[6] = 0;
    return 1;
}

THUMB int cmd_get_sidejob_pay(int* param)
{
    status::g_Party.addGold(darts[6]);
    darts[6] = 0;
    return 1;
}

THUMB int cmd_check_sidejob_pay(int* param)
{
    if (param[0] == 0) {
        if (darts[6] == 0) {
            if (param[1] == 0) {
                return 1;
            }
            return 0;
        }
        if (param[1] != 0) {
            return 1;
        }
        return 0;
    }
    if (darts[6] >= 100) {
        if (param[1] == 0) {
            return 1;
        }
        return 0;
    }
    if (param[1] != 0) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_endor_event_item(int* param)
{
    status::g_Party.setBattleMode();
    int sortIndex = status::g_Party.getSortIndex(7);
    int i = 0;
    int swordCount = 0;
    int armorCount = 0;
    int result = 0;
    status::BaseHaveItem* haveItem = &status::g_Party.getPlayerStatus(sortIndex)->haveStatusInfo_.haveItem_;

    while (i < haveItem->getCount()) {
        if (haveItem->getItem(i) == 7) {
            if (status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI) < 6) {
                status::g_Party.getPlayerStatus(sortIndex)->haveStatusInfo_.execThrow(i);
                status::g_Story.addEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI, 1);
                swordCount++;
                i = 0;
                result = 1;
            } else {
                i++;
            }
        } else if (haveItem->getItem(i) == 0x2f) {
            if (status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI) < 6) {
                status::g_Party.getPlayerStatus(sortIndex)->haveStatusInfo_.execThrow(i);
                status::g_Story.addEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI, 1);
                armorCount++;
                i = 0;
                result = 1;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }

    status::BaseHaveItem* sack = &status::g_Party.haveItemSack_;
    i = 0;
    while (i < sack->getCount()) {
        if (sack->getItem(i) == 7) {
            if (status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI) < 6) {
                status::g_Party.haveItemSack_.execThrow(i);
                status::g_Story.addEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI, 1);
                swordCount++;
                i = 0;
                result = 1;
            } else {
                i++;
            }
        } else if (sack->getItem(i) == 0x2f) {
            if (status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI) < 6) {
                status::g_Party.haveItemSack_.execThrow(i);
                status::g_Story.addEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI, 1);
                armorCount++;
                i = 0;
                result = 1;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }

    status::g_Story.setGiveEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI, swordCount);
    status::g_Story.setGiveEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI, armorCount);
    return result;
}

THUMB int cmd_check_endor_event_item(int* param)
{
    if (status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_HAGANENOTURUGI) >= 6 &&
        status::g_Story.getEndorEventItemCount(status::StoryStatus::EVENT_TETUNOYOROI) >= 6) {
        return 1;
    }
    return 0;
}

THUMB int cmd_furniture_move_request(int* param)
{
    dss::Fx32Vector3 pos;
    dss::Fx32Vector3 base;
    base = func_ov000_02139b74(func_ov000_02139668(), param[0]);
    pos.vx.value = param[1] + base.vx.value;
    pos.vy.value = param[2] + base.vy.value;
    pos.vz.value = param[3] + base.vz.value;
    if (param[4] == 0) {
        param[4] = 0x1000;
    }
    int frame = func_02088e90(func_02088988(base, pos)).value / ((param[4] * data_ov000_021487a8.unk_8) / 4096);
    func_ov000_02122280(func_ov000_021221b4(), param[0], frame, &pos);
    return 1;
}
