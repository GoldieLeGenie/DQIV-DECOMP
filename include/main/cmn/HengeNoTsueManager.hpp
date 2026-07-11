#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "GameInfo.hpp"

namespace cmn
{
    struct HengeNoTsueManager {         
        int index_;
        int charNo_;
        int counter_;
        int change_;
        int locked_;
        int endLess_;
        int nextAction_;
    };
}

extern cmn::HengeNoTsueManager g_HengeNoTsue; // data_020efc6c
