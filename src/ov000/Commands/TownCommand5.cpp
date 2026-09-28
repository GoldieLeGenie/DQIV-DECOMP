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

THUMB int cmn_camera_lock_pov(int* param)
{
    TownCamera::getSingleton()->setLockPov(param[0]);
    return 1;
}

THUMB int cmd_furniture_fadeout(int* param)
{
    func_ov000_021222e4(func_ov000_021221b4(), param[0], param[1], param[2], param[3]);
    return 1;
}

THUMB int cmd_effect_dream(int* param)
{
    return 1;
}

THUMB int cmd_set_script_object_direction(int* param)
{
    int index = getPlacementCtrlId(param[0]);
    func_ov000_021383bc(func_ov000_02137f2c(), index, param[1] << 14);
    return 1;
}

THUMB int cmd_charcter_3d_rotate(int* param)
{
    dss::Vector3short rot;
    rot.vx = 0;
    rot.vy = 0;
    rot.vz = 0;
    rot.vx = param[0];
    rot.vy = param[1];
    rot.vz = param[2];
    int index = getPlacementCtrlId();
    func_ov000_021383dc(func_ov000_02137f2c(), index, &rot);
    return 1;
}

THUMB int cmd_effect_transfer(int* param)
{
    dss::Fx32Vector3 pos;
    pos.vx.value = param[1];
    pos.vy.value = param[2];
    pos.vz.value = param[3];
    func_ov000_02124028(func_ov000_02123e28(), param[0], pos, param[4], 0);
    return 1;
}

THUMB int cmd_character_pose_change(int* param)
{
    int index = getPlacementCtrlId();
    func_ov000_02138248(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_player_action_dance(int* param)
{
    func_ov000_02135158(func_ov000_02132a90(), param[0]);
    return 1;
}

THUMB int cmd_map_camera_lock_target_player(int* param)
{
    TownCamera::getSingleton()->setTargetPlayer(param[0]);
    return 1;
}

THUMB int cmd_player_set_coll(int* param)
{
    int flag = 0;
    if (param[0] == 1) {
        flag |= 2;
    }
    if (param[1] == 1) {
        flag |= 1;
    }
    func_ov000_02132a90()->scriptColl_ = flag;
    return 1;
}

THUMB int cmd_map_clipping(int* param)
{
    func_ov000_02139668()->setClipping(param[0]);
    return 1;
}
