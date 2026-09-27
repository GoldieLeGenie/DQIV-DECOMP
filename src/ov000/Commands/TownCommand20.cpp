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

THUMB int cmd_set_player_sleep(int* param)
{
    func_ov000_02132a90()->partyDraw_.setSleep(param[0]);
    return 1;
}

THUMB int cmd_is_open_door(int* param)
{
    int open = func_ov000_02122dc8(func_ov000_02122ad8(), param[1]);
    if (param[0] == 1) {
        return open;
    }
    if (open == 0) {
        return 1;
    }
    return 0;
}

THUMB int cmd_chara_lock_move(int* param)
{
    int index = func_0202376c(param[1]);
    func_ov000_02137f2c()->setLockMove(index, param[0]);
    return 1;
}

THUMB int cmd_get_reward_tom(int* param)
{
    int gold = dssrand::rand(11);
    status::g_Party.addGold(gold + 2);
    func_02054364(0x35, 0xf0000000, gold + 2);
    return 1;
}
