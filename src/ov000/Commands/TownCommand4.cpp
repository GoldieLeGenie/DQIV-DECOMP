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

THUMB int cmd_party_display2(int* param)
{
    if (param[0] == 0) {
        TownPlayerManager::getSingleton()->partyDraw_.setDrawPartyOne();
    } else {
        TownPlayerManager::getSingleton();
        dss::Fix32Vector3 pos = TownPlayerManager::getSingleton()->getPosition();
        TownPlayerManager::getSingleton()->setPartyToFirst(pos);
        TownPlayerManager::getSingleton()->partyDraw_.resetDrawPartyCount();
        TownPlayerManager::getSingleton()->partyDraw_.resetAlpha();
    }
    return 1;
}
