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

THUMB int cmd_copy_party_chara(int* param)
{
    dss::Fix32Vector3 pos;
    int index = getPlacementCtrlId();
    int value;
    short dir;
    if (func_ov000_02135494(func_ov000_02132a90(), param[0], &pos, &dir, &value) == 1) {
        func_ov000_02138f70(func_ov000_02137f2c(), index, &pos, dir, value);
    }
    return 1;
}

THUMB int cmd_chara_shadow(int* param)
{
    int index = getPlacementCtrlId();
    func_ov000_02138440(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_chara_alpha(int* param)
{
    int index = getPlacementCtrlId();
    func_ov000_02138578(func_ov000_02137f2c(), index, param[0]);
    return 1;
}

THUMB int cmd_ikada_set_position(int* param)
{
    dss::Fix32Vector3 pos = cmn::CommonCalculate::setVecByParam(param[0], param[1], param[2]);
    func_ov000_021287e4(func_ov000_021285c0(), &pos);
    return 1;
}

THUMB int cmd_crack_key_by_orin(int* param)
{
    func_ov000_021267dc()->crackOrin_ = 1;
    return 1;
}

THUMB int cmd_set_big_rock_move(int* param)
{
    int index = getPlacementCtrlId();
    func_ov000_02137f2c()->character_[index]->vf7c();
    return 1;
}
