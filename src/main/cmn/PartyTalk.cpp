#include "main/cmn/PartyTalk.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/global/Global.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/param/FloorParam.hpp"
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


THUMB void cmn::PartyTalk::setPartyTalkMessage()
{
    status::g_Party.setNormalMode();
    carriageOutCount_ = status::g_Party.getCarriageOutCount();

    for (int i = 0; i < status::g_Party.getCount(); i++)
    {
        status::PlayerStatus *player = status::g_Party.getPlayerStatus(i);
        if (player->haveStatusInfo_.haveStatus_.isNoBattleNpc_ != 0)
        {
            carriageOutCount_++;
        }
    }

    for (int j = 0; j < 10; j++)
    {
        partyTalkMessage_[j].mesCount    = 0;
        partyTalkMessage_[j].message     = 0;
        partyTalkMessage_[j].yesno       = 0;
        partyTalkMessage_[j].yesMesCount = 0;
        partyTalkMessage_[j].noMesCount  = 0;
        partyTalkMessage_[j].playerIndex = 0;
        partyTalkMessage_[j].addMesCount = 0;
    }

    partyTalkNo_         = 0;
    mesCount_            = 0;
    saveMessageFlag_     = 0;
    findPriorityMessage_ = 0;
    getChapter6Data_     = 0;

    param::FloorParam *floorParam = status::excelParam.floorParam_;
    floor_ = param::FloorParam::getFloorIndex(floorParam, g_Global.getMapName());
    if (floor_ == -1)
    {
        char* mapname = "field";
        func_020882b0(mapname, g_Global.getMapName());
        if (g_Global.getFieldType() == 2)
        {
            floor_ = 0x221;
        }
        else
        {
            floor_ = 0x220;
        }
    }

    partyTalkMessage_[0].mesCount = 1;
    partyTalkMessage_[0].message  = 0xC3DF2;
}

THUMB void cmn::PartyTalk::resetPartyTalk()
{
    for (int i = 0; i < 10; i++)
    {
        this->preMessage_[i] = 0;
    }
    this->preMessageCount_ = 0;
    this->noChangeObjectLimitCount_ = 0;
    if (g_cmnPartyInfo.playerTalk == 0)
    {
        this->objectNo_ = 0xFE;
    }
}

THUMB void cmn::PartyTalk::setPreMessageNo(int mesNo)
{
    for (int i = 0; i < preMessageCount_; i++)
    {
        if (mesNo == preMessage_[i])
        {
            return;
        }
    }
    if (preMessageCount_ == 10)
    {
        for (int j = 0; j < 9; j++)
        {
            preMessage_[j] = preMessage_[j + 1];
        }
        preMessage_[preMessageCount_ - 1] = mesNo;
    }
    else
    {
        preMessage_[preMessageCount_] = mesNo;
    }
    preMessageCount_++;
    if (preMessageCount_ > 10)
    {
        preMessageCount_ = 10;
    }
}

THUMB void cmn::PartyTalk::setObjectNo(int objNo)
{
  this->objectNo_ = objNo;
}

THUMB void cmn::PartyTalk::setExitNo(int exitNo)
{
    if (g_Stage.returnBookFlag_ == 1)
    {
        g_Stage.returnBookFlag_ = 0;
        return;
    }
    lastExit_ = exitNo;
    prevItem_ = 0;
}

THUMB void cmn::PartyTalk::setPreItem(int itemId)
{
    if (itemId == 0x50 || itemId == 0x7C || itemId == 0x86 || itemId == 0x87 ||
        itemId == 0x92 || itemId == 0x94 || itemId == 0x96 || itemId == 0x9C)
    {
        prevItem_ = itemId;
    }
}

THUMB void cmn::PartyTalk::setPreMessage(int count, int message)
{
    preMessage_[count] = message;
    if (message != 0)
    {
        preMessageCount_++;
    }
}

