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
        func_ov000_0213b054(&func_ov000_02132a90()->partyDraw_);
    } else {
        func_ov000_02132a90();
        dss::Fix32Vector3 pos = func_ov000_02132a90()->getPosition();
        func_ov000_02133f10(func_ov000_02132a90(), &pos);
        func_ov000_0213b010(&func_ov000_02132a90()->partyDraw_);
        func_ov000_0213afcc(&func_ov000_02132a90()->partyDraw_);
    }
    return 1;
}
