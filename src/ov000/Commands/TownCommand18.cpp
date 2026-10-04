#include "main/cmn/CommonEffectLocation.hpp"
#include "main/dss/DssUtils.hpp"
#include "ov000/town/TownWindowSystem.hpp"
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

THUMB int cmd_set_unused_extra_chara(int* param)
{
    func_02037f98(func_02037da4());
    return 1;
}

THUMB int cmd_check_shoplist(int* param)
{
    char name[3] = {0, 0, 0};
    const char* cc = "cc";
    const char* mc = "mc";
    name[0] = g_Global.getMapName()[0];
    name[1] = g_Global.getMapName()[1];

    if (dss::strcmp(name, mc) == 0 && !g_AreaFlag.check(0x57)) {
        TownWindowSystem::getSingleton()->cmdWindow_.setShoplistPermit(false);
    }
    if (dss::strcmp(name, cc) == 0 && status::g_Story.chapter_ != 2) {
        TownWindowSystem::getSingleton()->cmdWindow_.setShoplistPermit(false);
    }
    return 1;
}
