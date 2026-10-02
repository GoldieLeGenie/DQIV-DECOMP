#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/ExcelParam.hpp"

namespace param {
    extern const unsigned char EffectParam_array[4024];
}

namespace status {
    struct ExcelParamBis {
    
        static void setupBattle(status::ExcelParam *setup);
        static void cleanupBattle(status::ExcelParam *clean);
        static void setupBattleInitialize(status::ExcelParam *clean);
        static void cleanupBattleInitialize(status::ExcelParam *clean);
    };
}
    
