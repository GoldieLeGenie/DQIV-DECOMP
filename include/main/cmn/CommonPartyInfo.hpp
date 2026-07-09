#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "GameInfo.hpp"

namespace cmn
{
    enum PARTY_RIDE_ON_TYPE
    {
        RIDE_ON_NONE = 0,
        RIDE_ON_TOWN_BALLOON = 1,
        RIDE_ON_SHIP_IKADA = 2
    };

    enum MENU_ACTION
    {
        MENU_ACTION_NONE = 0,
        MENU_RURA_SUCCESS = 1,
        MENU_RURA_FAILED = 2,
        MENU_RIREMIT = 3,
        MENU_TALK = 4,
        MENU_SEARCH = 5,
        MENU_HENGE_NO_TSUE = 6,
        BALLON_HORN = 7
    };
    struct CommonPartyInfo {
        char pad_[0x1c];
        PARTY_RIDE_ON_TYPE rideOnType_;
        bool roadFlag_;
        bool prevLocation_;
        MENU_ACTION menuAction_;
        dss::Fx32Vector3 townShipPos_;
        short shipDirection_;
        char mapNameAtShip_[10];
        dss::Fx32Vector3 townIkadaPos_;
        char mapNameAtIkada_[10];
        int actorIndex_;
        int targetIndex_;
        bool barron_;
        bool prevFrameBattle_;
        dss::Fx32Vector3 collVec_;
        bool collFlag_;
        bool partyTalk;
        int ctrlID_;
        dss::Fx32Vector3 tempBalloonPos_;
        dss::Fx32Vector3 tempShipPos_;
        int tempBalloonFieldType_;
        bool playerTalk;
    };
}

struct Ov000unkstruct {
    char pad_[0x610];
    int flag_;
};

extern cmn::CommonPartyInfo g_cmnPartyInfo; //data_020ef650
