#pragma once
#include <globaldefs.h>
#include "main/status/ExcelParam.hpp"
#include "main/status/UseItem.hpp"

namespace status{
    struct BaseItem {
        int itemIndex_;
        int available_;
        void initialize();
    };
}

extern param::ItemData* dataItem_;