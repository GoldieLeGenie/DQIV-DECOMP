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
#include "ov000/town/TownDoorAction.hpp"
#include "ov000/town/TownIkadaAction2.hpp"

THUMB int cmd_copy_party_chara(int* param)
{
    dss::Fix32Vector3 pos;
    int index = getPlacementCtrlId();
    int value;
    short dir;
    if (TownPlayerManager::getSingleton()->getPlayerCopyInfo(param[0], pos, dir, value) == 1) {
        TownCharacterManager::getSingleton()->setCopyPlayerChara(index, pos, dir, value);
    }
    return 1;
}

THUMB int cmd_chara_shadow(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setShadow(index, param[0]);
    return 1;
}

THUMB int cmd_chara_alpha(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->setAlpha(index, param[0]);
    return 1;
}

THUMB int cmd_ikada_set_position(int* param)
{
    dss::Fix32Vector3 pos = cmn::CommonCalculate::setVecByParam(param[0], param[1], param[2]);
    TownIkadaAction2::getSingleton()->setIkadaPosition(pos);
    return 1;
}

THUMB int cmd_crack_key_by_orin(int* param)
{
    TownDoorAction::getSingleton()->crackOrin_ = 1;
    return 1;
}

THUMB int cmd_set_big_rock_move(int* param)
{
    int index = getPlacementCtrlId();
    TownCharacterManager::getSingleton()->character_[index]->setMoveBigRock();
    return 1;
}
