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

THUMB int cmd_set_player_in_carriage(int* param)
{
    int order[4] = {0, 0, 0, 0};
    status::g_Party.setBattleMode();
    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        order[i] = status::g_Party.getPlayerIndex(i);
    }
    status::g_Party.add(param[0]);
    status::g_Party.reorder(order[0], order[1], order[2], order[3]);
    func_ov000_02132a90()->resetParty();
    return 1;
}

THUMB int cmd_set_player_ride_on(int* param)
{
    g_cmnPartyInfo.rideOnType_ = (cmn::PARTY_RIDE_ON_TYPE)param[0];
    return 1;
}

THUMB int cmd_set_ship_pos(int* param)
{
    dss::Fix32Vector3 pos;
    pos.vx.value = param[0];
    pos.vy.value = param[1];
    pos.vz.value = param[2];
    func_02088b3c(&pos, 0x10);
    g_Stage.shipPosition_ = dss::Fix32Vector3(pos);
    return 1;
}

THUMB int cmd_set_title_part(int* param)
{
    g_Global.startTitle();
    return 1;
}
