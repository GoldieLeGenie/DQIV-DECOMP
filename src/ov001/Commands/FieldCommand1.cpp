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
    dss::Fx32Vector3 pos = func_ov001_02127b28()->vf04();
    func_ov001_02125eac((char*)func_ov001_02127b28() + 0x64, 3);
    FieldPlayerManager* mgr = func_ov001_02127b28();
    func_ov001_02122b28((char*)mgr + 0x880, pos);
    func_ov001_0212b7e0((char*)func_ov001_02127b28() + 0x174);
    *(int*)((char*)func_ov001_02127b28() + 0xa4c) = 1;
    g_cmnPartyInfo.rideOnType_ = (cmn::PARTY_RIDE_ON_TYPE)2;
    return 1;
}

THUMB int cmd_set_field_player_pos(int* param)
{
    dss::Fx32Vector3 pos = func_02032424(param[0], param[1], param[2]);
    func_ov001_02127b28()->setPosition(pos);
    return 1;
}
