#pragma once
#include "globaldefs.h"
#include "main/param/Param.hpp"
#include "GameInfo.hpp"

namespace cmn
{
    struct PartyTalk {
        struct PARTY_TALK_MESSAGE 
        {                                      
            int mesCount;
            int message;
            int yesno;
            int yesMesCount;
            int noMesCount;
            int playerIndex;
            int addMesCount;
        };
        param::PartyTalk *partyTalk_;
        int size_;
        PARTY_TALK_MESSAGE partyTalkMessage_[10];
        int mesCount_;
        int partyTalkNo_;
        int saveMessage_[20];
        int saveMessageCount_;
        int preMessage_[10];
        int preMessageCount_;
        int noChangeObjectLimitCount_;
        int floor_;
        int objectNo_;
        int lastExit_;
        int prevItem_;
        int carriageOutCount_;
        int saveMessageFlag_;
        int findPriorityMessage_;
        int getChapter6Data_;
        static cmn::PartyTalk s_partyTalk; //data_020ef9d4
        static cmn::PartyTalk* getSingleton();
        void initialize();
    };
}

extern "C" cmn::PartyTalk* func_02037494();                                  // PartyTalk::getSingleton
