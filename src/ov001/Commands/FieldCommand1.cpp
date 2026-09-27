#include "ov001/Commands/FieldCommand.hpp"
#include "main/Commands/CommonCommand.hpp"
#include "main/cmn/CommonPartyInfo.hpp"

THUMB int cmd_field_erase_symbol(int* param)
{
    func_ov001_0212c300(func_ov001_0212b948(), param[0]);
    return 1;
}

THUMB int cmd_field_player_set_ship(int* param)
{
    dss::Fx32Vector3 pos = func_ov001_02127b28()->getPosition();
    func_ov001_02127b28()->player_.setMoveType(3);
    FieldPlayerManager* mgr = func_ov001_02127b28();
    mgr->shipDraw_.setPosition(pos);
    func_ov001_02127b28()->partyDraw_.setDrawNone();
    func_ov001_02127b28()->shipDraw_.ride_ = 1;
    g_cmnPartyInfo.rideOnType_ = cmn::RIDE_ON_SHIP_IKADA;
    return 1;
}

THUMB int cmd_set_field_player_pos(int* param)
{
    dss::Fx32Vector3 pos = func_02032424(param[0], param[1], param[2]);
    func_ov001_02127b28()->setPosition(pos);
    return 1;
}
