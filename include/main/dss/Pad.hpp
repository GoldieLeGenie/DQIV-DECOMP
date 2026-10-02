#pragma once
#include <globaldefs.h>

namespace dss {
    struct Pad {
        int unkfunc_0207f268();                 // held keys & enable mask
        int unkfunc_0207f278();                 // direction
        int unkfunc_0207f280();                 // triggered keys & enable mask
    };
}

extern dss::Pad data_02116d40;
