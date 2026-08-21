#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/formation/FormationIdManager.hpp"
#include "main/encount/EncountParam.hpp"
#include "main/SpecialParty/SpecialParty.hpp"
#include "main/CountDown/CountDown.hpp"

namespace encount {

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
        unsigned short walkCount_;
        unsigned short disableCount_;
        int disableFlag_;
        int disableAction_;
        unsigned short easyCount_;
        int easyFlag_;
        unsigned short differentCount_;
        int differentFlag_;
        int monsterIndex_[4];
        int monsterCount_[4];
        formation::FormationIdManager formationIdMng_;
        encount::EncountParam encountParam_;
        SpecialParty specialParty_;
        CountDown countDown_;
        int monsterGroupWidth_[4];
        int encountNumberIndex_;
        int encountCountType_[4];
    };
}  // namespace encount
