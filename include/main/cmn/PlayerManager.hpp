#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"


namespace cmn {
    struct PlayerManager{
        virtual void setPosition(dss::Fx32Vector3& pos);
        virtual dss::Fx32Vector3 getPosition();
        virtual short getDirection();
        virtual void resetParty();
        int flagMapLink_;  
        int charaColl_;
        static void initLock(void);
        static void setLock(int flag);
        static bool isLock();
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