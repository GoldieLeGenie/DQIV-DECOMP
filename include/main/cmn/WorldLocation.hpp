#pragma once
#include "globaldefs.h"
#include "main/param/Param.hpp"
#include "main/dss/DssUtils.hpp"
#include "GameInfo.hpp"


namespace cmn
{
    struct WorldLocation
    {
        param::CLUTCode *pCLUTCode_;
        void initialize();
        void terminate();
        static void calcWorldPos(dss::fx32* x, dss::fx32* y);
        dss::Fx32Vector3 calcPaletteRate(int prev, int next, dss::Fx32 ratio);
        dss::Fx32Vector3 calcPaletteRate(int time);
        dss::Fx32Vector3 calcYamiPaletteRate();
        static void setCurrentTimeZone();
        TIME_ZONE getCurrentTimeZone();
    };
    
}