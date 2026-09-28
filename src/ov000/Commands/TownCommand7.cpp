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

THUMB int cmd_disable_demolition()
{
    status::g_BattleResult.setDisablePlayerDemolition(true);
    return 1;
}

THUMB int cmd_set_camera_target(int* param)
{
    int index = getPlacementCtrlId();
    TownCamera::getSingleton()->setMoveTragetChara(index);
    return 1;
}

THUMB int cmd_character_swing_round(int* param)
{
    int index = getPlacementCtrlId();
    func_ov000_02137f2c()->setSwingRound(index, param[0]);
    return 1;
}

THUMB int cmd_character_anim(int* param)
{
    int index = getPlacementCtrlId();
    int anim = param[0];
    if (anim == 0) {
        anim = -1;
    }
    func_ov000_02138e20(func_ov000_02137f2c(), index, anim);
    return 1;
}

THUMB int cmd_party_copy_character(int* param)
{
    int index = getPlacementCtrlId(param[1]);
    status::PlayerStatus* player = status::g_Party.getPlayerStatus(param[0]);
    func_ov000_02138248(func_ov000_02137f2c(), index, player->haveStatusInfo_.haveStatus_.charaIndex_);
    return 1;
}

THUMB int cmd_is_map_treasure(int* param)
{
    int open;
    switch (func_ov000_02123144(func_ov000_02122ad8(), param[0])) {
    case 0:
    case 1:
        open = 0;
        break;
    case 2:
    case 3:
    case 4:
        open = 1;
        break;
    }
    if (open == param[1]) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_furniture_position(int* param)
{
    dss::Fx32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    func_ov000_02139c18(func_ov000_02139668(), param[3], &pos);
    return 1;
}
