#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/CharacterStatus.hpp"


namespace status {
    struct MonsterStatus : CharacterStatus {
        int ctrlId_;                    // +0x00 (abs 0x4f8)
        int sortIndex_;                 // +0x04 (abs 0x4fc)
        dss::BitFlaguint eventFlag_;    // +0x08 (abs 0x500)
        int mosyasIndex_;               // +0x0c (abs 0x504)
        CharacterStatus* mosyasTarget_; // +0x10 (abs 0x508)
    };
}