#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/cmn/PlayerManager.hpp"

namespace cmn{
    struct GameManager {
        PlayerManager *playerManager_;
        void initialize();
        void terminate();
        void execute();
    };
    
}