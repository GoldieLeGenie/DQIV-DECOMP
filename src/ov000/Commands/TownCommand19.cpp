#include "main/cmn/CommonEffectLocation.hpp"
#include "ov000/town/TownEndrollManager.hpp"
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

THUMB int cmd_map_black(int* param)
{
    void* obj = func_020835d8();
    dss::Fix32Vector3 pos(0, 0, 0);
    func_020857c8(obj, pos);
    return 1;
}

THUMB int cmd_is_not_go_into_tenku(int* param)
{
    return TownPlayerManager::getSingleton()->notIntoTenkujou_;
}

THUMB int cmd_set_end_roll_clear(int* param)
{
    TownEndrollManager::getSingleton()->clearScroll();
    return 1;
}
