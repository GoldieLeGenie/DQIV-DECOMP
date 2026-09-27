#include "main/Commands/CommonCommand.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/HengeNoTsueManager.hpp"
#include "main/global/Global.hpp"
#include "main/sound/SoundManager.hpp"
#include "ov000/town/TownPlayerManager.hpp"

THUMB int cmd_set_player_henge_endless(int* param)
{
    g_HengeNoTsue.endLess_ = param[0];
    return 1;
}

THUMB int cmd_set_party_call_carriage(int* param)
{
    g_cmnPartyInfo.callCarriage();
    return 1;
}

THUMB int cmd_set_forward_counter(int* param)
{
    cmn::g_CommonCounterInfo.setChangeDay();
    status::g_Story.setTarot(0);
    return 1;
}

THUMB int cmd_setup_music(int* param)
{
    if (param[0] == 0) {
        SoundManager::stop(param[0]);
    } else {
        SoundManager::play(param[0], 0xf);
    }
    SoundManager::setTownPlayDisable();
    return 1;
}

THUMB int cmd_check_hero_sex(int* param)
{
    if (param[0] == 0) {
        if (status::g_Story.sex_ == 0) {
            return 1;
        }
    } else if (status::g_Story.sex_ == 1) {
        return 1;
    }
    return 0;
}
