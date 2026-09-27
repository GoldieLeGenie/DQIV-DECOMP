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

THUMB int cmd_set_monster_talk(int* param)
{
    int index = func_0202375c();
    func_ov000_02137f2c()->setMonsterTalk(index, param[0]);
    return 1;
}

THUMB int cmd_set_monster_talk_all(int* param)
{
    func_0202375c();
    func_ov000_02139158(func_ov000_02137f2c(), param[0]);
    data_ov000_0214eb9c = param[0];
    return 1;
}
