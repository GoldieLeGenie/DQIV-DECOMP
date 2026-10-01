#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"

/* TU 0x02142964- not decompiled yet */
struct TownExtraMapObjManager {
    static TownExtraMapObjManager* getSingleton();
    int checkFloorMapUid(dss::Fix32Vector3& pos);
};
