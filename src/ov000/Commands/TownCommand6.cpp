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

THUMB int cmd_camera_clip_distance(int* param)
{
    dss::Fix32 dist;
    dist.value = param[0];
    func_ov000_02139668()->setClipDistance(dist);
    return 1;
}

THUMB int cmd_map_camera_near(int* param)
{
    TownCamera::getSingleton()->camera_.setNear(param[0]);
    return 1;
}
