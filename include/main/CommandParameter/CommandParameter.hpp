#include "globaldefs.h"
#include "GameInfo.hpp"


struct CommandParameter {
    unsigned short command_;
    unsigned char flag_;
    unsigned char reserved_;
    char param_[4];
};