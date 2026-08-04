#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"


namespace cmn {
    struct PlayerManager{
        void* unk;
        int flagMapLink_;  
        int charaColl_;
        void initLock(void);
        static void setLock(int flag);
        bool isLock();
        int getLockCount();
        static void setPlayerCommand(PLAYER_COMMAND command);
        PLAYER_COMMAND getPlayerCommand();
        void checkCommandEnd();
    };
}

struct PlayerManagerData{
    int checkCommand_;
    PLAYER_COMMAND command_;
    int locked_;
};

extern PlayerManagerData playerManagerData_; //data_020eed20