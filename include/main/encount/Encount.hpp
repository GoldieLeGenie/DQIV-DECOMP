#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"

struct Encount{
    enum BattleMode {
        Normal=0,
        CrusingTrader=1,
        CrusingInnKeeper=2
    };
    BattleMode battleMode_;
    LandType landType_;
    int tileId_;
    TIME_ZONE timeZone_;
    int chapter_;
    int partyCount_;
    int enable_;
    int brewCount_;
};