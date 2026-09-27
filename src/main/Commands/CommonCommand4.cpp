#include "main/Commands/CommonCommand.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/global/Global.hpp"
#include "main/sound/SoundManager.hpp"
#include "ov000/town/TownPlayerManager.hpp"

THUMB int cmd_stream_play(int* param)
{
    func_02055980(param[0]);
    return 1;
}

THUMB int cmd_is_load_init(int* param)
{
    int type = g_Stage.loadType_;
    if (type == 0 || type == 1 || type == 3) {
        if (param[0] == 1) {
            return 1;
        }
        return 0;
    }
    if (func_ov000_02132a90()->battleLose_ == 1) {
        if (param[0] == 1) {
            return 1;
        }
        return 0;
    }
    if (param[0] != 1) {
        return 1;
    }
    return 0;
}

THUMB int cmd_check_search_action(int* param)
{
    if (func_ov000_02135848(func_ov000_02132a90()) == 1) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_no_search_message(int* param)
{
    func_ov000_02132a90()->searchAction_ = 8;
    return 1;
}

THUMB int cmd_set_timezone_pause(int* param)
{
    g_Stage.timestop_ = param[0];
    return 1;
}

THUMB int cmd_is_party_top(int* param)
{
    status::g_Party.setMemberShiftMode();
    status::g_Party.getPlayerStatus(0);
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(0)->haveStatusInfo_;
    int i = 0;
    for (; i < status::g_Party.getCarriageOutCount(); i++) {
        info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        if (!info->isDeath()) {
            break;
        }
    }
    int player[5];
    player[0] = param[3];
    player[1] = param[4];
    player[2] = param[5];
    player[3] = param[6];
    player[4] = param[7];
    int found = 0;
    for (int j = 0; j < 5; j++) {
        int id = player[j];
        if (id == info->haveStatus_.playerIndex_) {
            found = 1;
        }
    }
    if (found == 0 && param[3] != 0) {
        return 0;
    }
    if (param[0] != 0 && func_020254b8(i, param[0]) == 0) {
        return 0;
    }
    if (param[1] != 0 && func_02025514(i, param[1]) == 0) {
        return 0;
    }
    return 1;
}

THUMB int cmd_is_not_party_top(int* param)
{
    if (cmd_is_party_top(param) == 0) {
        return 1;
    }
    return 0;
}

THUMB int cmd_is_party_all(int* param)
{
    status::g_Party.setNormalMode();
    short matchCount = 0;
    int player[5];
    player[0] = param[3];
    player[1] = param[4];
    player[2] = param[5];
    player[3] = param[6];
    player[4] = param[7];
    short playerCount = 0;
    for (int j = 0; j < 5; j++) {
        if (player[j] != 0) {
            playerCount++;
        }
    }
    int match[5];
    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        status::g_Party.getPlayerStatus(i);
        int k;
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(i)->haveStatusInfo_;
        for (k = 0; k < 5; k++) {
            int id = player[k];
            if (id == info->haveStatus_.playerIndex_) {
                match[matchCount] = i;
                matchCount++;
            }
        }
    }
    if (playerCount == 0) {
        for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
            match[i] = i;
        }
    } else {
        switch (param[2]) {
        case 0:
            if (matchCount == 0) {
                return 0;
            }
            break;
        case 1:
            if (matchCount < playerCount) {
                return 0;
            }
            break;
        case 2:
            if (matchCount != status::g_Party.getCarriageOutCount()) {
                return 0;
            }
            break;
        }
    }
    int result = 0;
    for (int j = 0; j < matchCount; j++) {
        if (param[0] != 0 && func_02025514(match[j], param[0])) {
            result = 1;
        }
        if (param[1] != 0 && func_0202555c(match[j], param[1])) {
            result = 1;
        }
    }
    if (param[0] + param[1] == 0) {
        result = 1;
    }
    return result;
}

THUMB int cmd_is_not_party_all(int* param)
{
    if (cmd_is_party_all(param) == 0) {
        return 1;
    }
    return 0;
}

THUMB int cmd_is_party_head_count(int* param)
{
    unsigned int count = func_0202528c(param);
    if (param[3] == 0) {
        if (count == (unsigned int)param[4]) {
            return 1;
        }
    } else if (param[3] == 1) {
        if (count <= (unsigned int)param[4]) {
            return 1;
        }
    } else if (count >= (unsigned int)param[4]) {
        return 1;
    }
    return 0;
}

THUMB int cmd_is_not_party_head_count(int* param)
{
    if (cmd_is_party_head_count(param) == 0) {
        return 1;
    }
    return 0;
}

extern "C" THUMB short func_0202528c(int* param)
{
    status::g_Party.setNormalMode();
    short normalCount = status::g_Party.getCount();
    short normalOut = status::g_Party.getCarriageOutCount();
    status::g_Party.setPlayerMode();
    short playerCount = status::g_Party.getCount();
    short playerOut = status::g_Party.getCarriageOutCount();
    short playerAlive = 0;
    short playerOutAlive = 0;
    for (int i = 0; i < playerCount; i++) {
        bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
        if (alive) {
            playerAlive++;
            if (playerOut > i) {
                playerOutAlive++;
            }
        }
    }
    status::g_Party.setBattleMode();
    short npcCount = status::g_Party.getCount() - playerCount;
    short npcOut = status::g_Party.getCarriageOutCount() - playerOut;
    short npcAlive = 0;
    short npcOutAlive = 0;
    for (int i = 0; i < status::g_Party.getCount(); i++) {
        bool alive = !status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath();
        if (alive && status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.isBattleNpc_ != 0) {
            npcAlive++;
            if (status::g_Party.getCarriageOutCount() > i) {
                npcOutAlive++;
            }
        }
    }
    if (param[0] == 0) {
        short other = normalCount - (npcCount + playerCount);
        short total = playerAlive + (other + npcAlive);
        short totalOut = playerOutAlive + (other + npcOutAlive);
        if (param[1] == 0) {
            return func_020254a4(normalCount, total, param[2]);
        }
        if (param[1] == 1) {
            return func_020254a4(normalOut, totalOut, param[2]);
        }
        return func_020254a4(normalCount - normalOut, total - totalOut, param[2]);
    }
    if (param[0] == 1) {
        if (param[1] == 0) {
            return func_020254a4(playerCount, playerAlive, param[2]);
        }
        if (param[1] == 1) {
            return func_020254a4(playerOut, playerOutAlive, param[2]);
        }
        return func_020254a4(playerCount - playerOut, playerAlive - playerOutAlive, param[2]);
    }
    if (param[1] == 0) {
        return func_020254a4(npcCount, npcAlive, param[2]);
    }
    if (param[1] == 1) {
        return func_020254a4(npcOut, npcOutAlive, param[2]);
    }
    return func_020254a4(npcCount - npcOut, npcAlive - npcOutAlive, param[2]);
}

extern "C" THUMB short func_020254a4(short count, short alive, int mode)
{
    if (mode == 1) {
        return alive;
    }
    if (mode == 2) {
        return count - alive;
    }
    return count;
}

extern "C" THUMB int func_020254b8(int index, int type)
{
    status::g_Party.setMemberShiftMode();
    status::g_Party.getPlayerStatus(index);
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(index)->haveStatusInfo_;
    if (info->haveStatus_.isBattleNpc_ != 0) {
        if (type != 2) {
            return 0;
        }
    } else if (info->haveStatus_.isPlayer_ != 0) {
        if (type == 2) {
            return 0;
        }
        int playerIndex = info->haveStatus_.playerIndex_;
        if (playerIndex <= 2 && type == 1) {
            return 0;
        }
    } else {
        return 0;
    }
    return 1;
}

extern "C" THUMB int func_02025514(int index, int type)
{
    status::g_Party.setMemberShiftMode();
    status::g_Party.getPlayerStatus(index);
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(index)->haveStatusInfo_;
    if (info->haveStatus_.sex_ == 0) {
        if (type != 1) {
            return 0;
        }
    } else if (info->haveStatus_.sex_ == 1) {
        if (type != 2) {
            return 0;
        }
    } else {
        return 0;
    }
    return 1;
}

extern "C" THUMB int func_0202555c(int index, int type)
{
    status::g_Party.setMemberShiftMode();
    status::PlayerStatus* player = status::g_Party.getPlayerStatus(index);
    status::g_Party.getPlayerStatus(index);
    bool alive = !player->haveStatusInfo_.isDeath();
    if (alive) {
        if (type == 2) {
            return 0;
        }
    } else if (type == 1) {
        return 0;
    }
    return 1;
}

THUMB int cmd_set_se(int* param)
{
    SoundManager::playSe(param[0], 0);
    return 1;
}

THUMB int cmd_cut_se(int* param)
{
    SoundManager::stopSeWithIndex(param[0], 0);
    return 1;
}

THUMB int cmd_set_player_recovery(int* param)
{
    status::g_Party.setBattleMode();
    status::HaveStatusInfo* info = &status::PartyStatus::getPlayerStatusForPlayerIndex(param[0])->haveStatusInfo_;
    if (param[1] == 0) {
        info->recovery();
    } else {
        info->rebirth();
        status::PartyStatus::getPlayerStatusForPlayerIndex(param[0])->setBestCondition();
        info->statusChange_.clear();
        cmn::GameManager::getSingleton()->playerManager_->resetParty();
    }
    return 1;
}
