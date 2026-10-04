#pragma once
#include <globaldefs.h>

namespace dss {
    struct Pad {
        int pad();                              // held keys & enable mask
        int padDir();                           // direction
        int edge();                             // triggered keys & enable mask
        int unkfunc_0207f290();                 // repeat keys & enable mask
        void unkfunc_0207f2b4(int flag);        // flag != 0: mask out the L button
    };

    extern Pad g_Pad;
}
