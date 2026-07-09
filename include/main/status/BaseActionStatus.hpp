#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"



namespace status {
    struct BaseActionStatus {
        int unk_00;         
        int unk_04;
        int unk_08;
        int unk_0c;
    };   
}
extern status::BaseActionStatus BaseActionStatus_;   // data_020eeccc