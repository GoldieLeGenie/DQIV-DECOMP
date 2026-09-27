#include "main/CommandParameter/CommandParameter.hpp"
#include "main/Commands/CommonCommand.hpp"
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

ARM int cmd_is_timezone(int* param)
{
    TIME_ZONE zone = (TIME_ZONE)(param[0] + 1);
    if (zone == 2 || zone == 3) {
        if (g_Stage.getTimeZone() == 3 || g_Stage.getTimeZone() == 2) {
            return 1;
        }
        return 0;
    }
    if (g_Stage.getTimeZone() == 1 || g_Stage.getTimeZone() == 4) {
        return 1;
    }
    return 0;
}

ARM int cmd_set_timezone(int* param)
{
    g_Stage.setTimeZone((TIME_ZONE)(param[0] + 1));
    func_ov000_02139e30(func_ov000_02139668(), g_Global.getMapName());
    return 1;
}

ARM int cmd_is_player_status_dead(int* param)
{
    if (param[1] == 0) {
        return !status::PartyStatus::getPlayerStatusForPlayerIndex(param[0])->haveStatusInfo_.isDeath() == 1;
    }
    return status::PartyStatus::getPlayerStatusForPlayerIndex(param[0])->haveStatusInfo_.isDeath() == 1;
}

ARM int cmd_is_party_ride_carriage(int* param)
{
    return status::PartyStatus::isInsideCarriageForPlayerIndex(param[0]) != 0;
}

ARM int cmd_is_party_member(int* param)
{
    status::g_Party.setNormalMode();
    return status::g_Party.getSortIndex(param[0]) != -1;
}

ARM int cmd_is_party_order(int* param)
{
    status::g_Party.setNormalMode();
    return param[0] == status::g_Party.getSortIndex(param[1]);
}

ARM int cmd_set_party_total_recovery(int* param)
{
    status::g_Party.setBattleMode();
    for (int i = 0; i < status::g_Party.getCount(); i++) {
        if (param[0] == 1) {
            status::g_Party.getPlayerStatus(i)->haveStatusInfo_.revival();
            status::g_Party.getPlayerStatus(i)->haveStatusInfo_.statusChange_.clear();
        } else if (!status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath()) {
            status::g_Party.getPlayerStatus(i)->haveStatusInfo_.revival();
        }
    }
    if (param[0] == 1) {
        if (func_02058114(data_0210bb94, 0xc) != 0) {
            func_ov000_02132a90()->resetParty();
        } else {
            func_ov001_02127b28()->vf0C();
        }
    }
    return 1;
}

extern "C" ARM int func_02020008(CommandParameter* command)
{
    if (command->flag_ & 1) {
        if (command->flag_ & 0x40) {
            return 0;
        }
        command->flag_ |= 0x40;
    }
    return 1;
}
