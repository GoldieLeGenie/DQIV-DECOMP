#include "main/cmn/CommonEffectLocation.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/PartyTalk.hpp"
#include "main/dss/Random.hpp"
#include "main/global/Global.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/BattleResult.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "ov000/Commands/TownCommand.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "ov000/town/TownStageManager.hpp"

THUMB int cmd_set_basha_go_into(int* param)
{
    g_Stage.setBashaEnter(param[0]);
    return 1;
}

THUMB int cmd_chara_voice(int* param)
{
    int index = func_0202375c();
    int voice;
    switch (param[0]) {
    case 0:
        voice = 0x30;
        break;
    case 1:
        voice = 0x31;
        break;
    case 2:
        voice = 0x32;
        break;
    case 3:
        voice = 0x33;
        break;
    case 4:
        voice = 0x39;
        break;
    default:
        voice = 0x32;
        break;
    }
    func_ov000_0212eb9c(func_ov000_02137f2c()->character_[index], voice);
    return 1;
}

THUMB int cmd_check_player_item(int* param)
{
    status::g_Party.setPlayerMode();
    int i = 0;
    int end;
    if (param[0] == 0) {
        end = status::g_Party.getCarriageOutCount();
    } else if (param[0] == 1) {
        i = status::g_Party.getCarriageOutCount();
        end = status::g_Party.getCount();
    } else {
        end = status::g_Party.getCount();
    }
    for (; i < end; i++) {
        if (param[1] == 0) {
            if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveItem_.getCount() < 12) {
                return 1;
            }
        } else if (param[1] == status::g_Party.getPlayerIndex(i)) {
            if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveItem_.getCount() < 12) {
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

THUMB int cmd_save_last_party()
{
    g_Stage.setBashaEnable(true);
    status::g_Party.basha_ = 1;
    status::g_Party.setNormalMode();
    for (int i = 0; i < 10; i++) {
        if (status::g_Party.getCount() > i) {
            g_Stage.lastParty_[i] = status::g_Party.getPlayerIndex(i);
        } else {
            g_Stage.lastParty_[i] = 0;
        }
    }
    return 1;
}
