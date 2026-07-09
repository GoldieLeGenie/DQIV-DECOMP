#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/CharacterStatus.hpp"


namespace status {
    struct MonsterStatus : CharacterStatus {
        int ctrlId_;
        int sortIndex_;
        int mosyasIndex_;
        dss::BitFlaguint eventFlag_;
        CharacterStatus* mosyasTarget_;
    };
}