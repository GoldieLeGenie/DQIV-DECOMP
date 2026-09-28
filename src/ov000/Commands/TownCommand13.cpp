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

THUMB int cmd_change_surechigai_part(int* param)
{
    g_Global.startSurechigai();
    return 1;
}

THUMB int cmd_check_surechigai_success(int* param)
{
    return 0;
}

THUMB int cmd_set_default_map_name(int* param)
{
    char name[42];
    for (int i = 0; i < 42; i++) {
        name[i] = 0;
    }
    func_0208a114(name, 42, param[0]);
    data_020f0078 = 1;
    func_0203a7a8(&data_020f0078, name);
    return 0;
}

THUMB int cmd_check_taishi_max(int* param)
{
    if (func_0203a388(&data_020f0078) == 0x18) {
        return 1;
    }
    return 0;
}

THUMB int cmd_set_ikada_info(int* param)
{
    dss::Fx32Vector3 pos = cmn::CommonCalculate::setVecByParam(param[4], param[5], param[6]);
    func_ov000_02128768(func_ov000_021285c0(), (const char*)param, &pos);
    return 1;
}
