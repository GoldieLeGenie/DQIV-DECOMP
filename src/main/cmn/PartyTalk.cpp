#include "main/cmn/PartyTalk.hpp"

cmn::PartyTalk cmn::PartyTalk::s_partyTalk;

THUMB cmn::PartyTalk* cmn::PartyTalk::getSingleton()
{
    return &s_partyTalk;
}

THUMB void cmn::PartyTalk::initialize()
{
    for (int i = 0; i < 10; i++)
    {
        this->partyTalkMessage_[i].mesCount    = 0;
        this->partyTalkMessage_[i].message     = 0;
        this->partyTalkMessage_[i].yesno       = 0;
        this->partyTalkMessage_[i].yesMesCount = 0;
        this->partyTalkMessage_[i].noMesCount  = 0;
        this->partyTalkMessage_[i].playerIndex = 0;
        this->partyTalkMessage_[i].addMesCount = 0;
    }
    for (int i = 0; i < 20; i++)
    {
        saveMessage_[i] = 0;
    }
    for (int i = 0; i < 10; i++)
    {
        preMessage_[i] = 0;
    }

    this->partyTalkNo_              = 0;
    this->mesCount_                 = 0;
    this->saveMessageCount_         = 0;
    this->preMessageCount_          = 0;
    this->floor_                    = 0;
    this->objectNo_                 = 0xFE;
    this->noChangeObjectLimitCount_ = 0;
    this->prevItem_                 = 0;
    this->saveMessageFlag_          = 0;
    this->findPriorityMessage_      = 0;
    this->getChapter6Data_          = 0;
}