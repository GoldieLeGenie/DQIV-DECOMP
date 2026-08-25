#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/ExcelParam.hpp"

namespace status {
    struct ExcelParamBis {
    
        static void setupBattle(status::ExcelParam *setup);
        static void cleanupBattle(status::ExcelParam *clean);
        void setupBattleInitialize(status::ExcelParam *clean);
        void cleanupBattleInitialize(status::ExcelParam *clean);
    };
}
    
