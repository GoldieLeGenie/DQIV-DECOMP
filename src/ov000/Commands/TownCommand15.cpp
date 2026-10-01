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

THUMB int cmd_set_door_close(int* param)
{
    g_Stage.initDoorOpenFlag();
    return 1;
}

THUMB int cmd_map_camera_default_angle(int* param)
{
    status::StageVector3short rot;
    rot.set(param[0], param[1], param[2]);
    TownCamera::getSingleton()->setDefaultAngle(rot);
    return 1;
}

THUMB int cmd_chara_mortion_lock(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setAction(index, param[0]);
    TownCharacterManager::getSingleton()->setAnimation(index, 0);
    return 1;
}

THUMB int cmd_start_game(int* param)
{
    g_Global.startGame();
    func_02055998(0xf);
    return 1;
}

THUMB int cmd_opening_backcolor(int* param)
{
    func_0203e8f8()->start(0x9b, 0);
    return 1;
}

THUMB int cmd_set_fighting_colosseum_mode(int* param)
{
    return 1;
}

THUMB int cmd_set_camera_limit(int* param)
{
    dss::Fix32 limit;
    if (param[0] == 0) {
        limit.value = -0x1000;
        TownCamera::getSingleton()->setLimitL(limit);
        TownCamera::getSingleton()->setLimitR(limit);
    } else {
        limit.value = 0x1e000;
        TownCamera::getSingleton()->setLimitL(limit);
        TownCamera::getSingleton()->setLimitR(limit);
    }
    return 1;
}

THUMB int cmd_set_van_and_basha(int* param)
{
    TownPlayerManager::getSingleton()->setVanAndBasha();
    return 1;
}
