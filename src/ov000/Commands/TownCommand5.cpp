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
#include "ov000/town/TownFurnitureControl.hpp"
#include "ov000/town/riseup/TownRiseup.hpp"

THUMB int cmn_camera_lock_pov(int* param)
{
    TownCamera::getSingleton()->setLockPov(param[0]);
    return 1;
}

THUMB int cmd_furniture_fadeout(int* param)
{
    TownFurnitureControlManager::getSingleton()->setFurnitureFade(param[0], param[1], param[2], param[3]);
    return 1;
}

THUMB int cmd_effect_dream(int* param)
{
    return 1;
}

THUMB int cmd_set_script_object_direction(int* param)
{
    int index = getPlacementCtrlId(param[0]);
    TownCharacterManager::getSingleton()->setRotate(index, param[1] << 14);
    return 1;
}

THUMB int cmd_charcter_3d_rotate(int* param)
{
    dss::Vector3<short> rot;
    rot.vx = param[0];
    rot.vy = param[1];
    rot.vz = param[2];
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setRotate(index, rot);
    return 1;
}

THUMB int cmd_effect_transfer(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[1];
    pos.vy.value = param[2];
    pos.vz.value = param[3];
    TownRiseupManager::getSingleton()->setupSprite(param[0], pos, param[4], 0);
    return 1;
}

THUMB int cmd_character_pose_change(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setPosing(index, param[0]);
    return 1;
}

THUMB int cmd_player_action_dance(int* param)
{
    TownPlayerManager::getSingleton()->setManyaDance(param[0]);
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
    TownPlayerManager::getSingleton()->scriptColl_ = flag;
    return 1;
}

THUMB int cmd_map_clipping(int* param)
{
    TownStageManager::getSingleton()->setClipping(param[0]);
    return 1;
}
