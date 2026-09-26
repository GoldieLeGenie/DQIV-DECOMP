#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/status/GameStatus.hpp"

THUMB void TownMenu_MESSAGE::openMessageForTEST()
{
    openMessage(TEST_MESSAGE_WINDOW);
}

THUMB void TownMenu_MESSAGE::openMessageForTALK()
{
    openMessage(TALK_MESSAGE_WINDOW);
}

THUMB void TownMenu_MESSAGE::openMessageForMENU()
{
    openMessage(MENU_MESSAGE_WINDOW);
}

THUMB void TownMenu_MESSAGE::openMessageForENCOUNT()
{
    openMessage(ENCOUNT_MESSAGE_WINDOW);
}

THUMB void TownMenu_MESSAGE::openMessageForBATTLE()
{
    openMessage(BATTLE_MESSAGE_WINDOW);
}

THUMB void TownMenu_MESSAGE::openMessage(eMessageWindow type)
{
    int language = 0;
    if (status::g_Game.language == Japanese) {
        language = 0;
    }
    if (status::g_Game.language == English) {
        language = 1;
    }
    if (status::g_Game.language == French) {
        language = 2;
    }
    if (status::g_Game.language == German) {
        language = 3;
    }
    if (status::g_Game.language == Italian) {
        language = 4;
    }
    if (status::g_Game.language == Spanish) {
        language = 5;
    }
    func_02056040(type, language);
    func_02052400(this);
    unk_38 = 0;
}

THUMB void TownMenu_MESSAGE::addMessageNOWAIT(int messageID)
{
    func_02056074(messageID);
    func_0203cc20(data_020f1d88, messageID);
}

THUMB void TownMenu_MESSAGE::addMessage(int messageID)
{
    if (messageID > 2000000) {
        addMessage((const char*)messageID);
        return;
    }
    func_02056074(messageID);
    func_0205614c();
    func_0203cc20(data_020f1d88, messageID);
}

THUMB void TownMenu_MESSAGE::addMessage(int messageID1, int messageID2)
{
    addMessage(messageID1);
    addMessage(messageID2);
}

THUMB void TownMenu_MESSAGE::addMessage(int messageID1, int messageID2, int messageID3)
{
    addMessage(messageID1);
    addMessage(messageID2);
    addMessage(messageID3);
}

THUMB void TownMenu_MESSAGE::addMessage(int messageID1, int messageID2, int messageID3, int messageID4)
{
    addMessage(messageID1);
    addMessage(messageID2);
    addMessage(messageID3);
    addMessage(messageID4);
}

THUMB void TownMenu_MESSAGE::addMessageCount(int messageID, int count)
{
    for (int i = 0; i < count; i++) {
        addMessage(messageID + i);
    }
}

THUMB void TownMenu_MESSAGE::addMessageSerial(int messageID)
{
    func_0205607c(messageID);
}

THUMB void TownMenu_MESSAGE::addMessage(const char* message)
{
    func_020560b8(message);
    func_0205614c();
    func_0203cc20(data_020f1d88, 99999999);
}

THUMB void TownMenu_MESSAGE::setYesNo()
{
    yesNo_ = 1;
    yesNoCursor_ = 0;
}

THUMB void TownMenu_MESSAGE::setYesNo(int cursor)
{
    yesNo_ = 1;
    yesNoCursor_ = cursor;
}

THUMB void TownMenu_MESSAGE::setYesNoPosition(int x, int y)
{
    ynPosX_ = x;
    ynPosY_ = y;
}

THUMB void TownMenu_MESSAGE::setYesNoSuperCancel(bool flag)
{
    yesNoSuperCancel_ = flag;
}

THUMB void TownMenu_MESSAGE::restartMessage()
{
    stat_ = MENUBASE_STAT_ACTIVE;
    keyEnable_ = 0;
    yesNo_ = 0;
    ynExec_ = 0;
    ynPosX_ = 0xc0;
    ynPosY_ = 0x40;
    func_0204dfc0(data_0210b380);
    data_0210b384 = 0;
    func_0203cc0c(data_020f1d88);
}

THUMB void TownMenu_MESSAGE::addMessageWAITKEY()
{
    func_02056160();
}

THUMB bool TownMenu_MESSAGE::isMessageWAITPROG()
{
    return func_0204e02c(data_0210b380);
}

THUMB void TownMenu_MESSAGE::clearMessageWAITPROG()
{
    func_0204e064(data_0210b380, 0);
}

THUMB void TownMenu_MESSAGE::setMessageCursor(bool flag)
{
    data_0210b380->intervalCursor_ = flag;
    data_0210b380->lastCursor_ = flag;
}

THUMB void TownMenu_MESSAGE::setMessageIntervalCursor(bool flag)
{
    data_0210b380->intervalCursor_ = flag;
}

THUMB void TownMenu_MESSAGE::setMessageLastCursor(bool flag)
{
    data_0210b380->lastCursor_ = flag;
}

THUMB void TownMenu_MESSAGE::SetNoClose(bool flag)
{
    noClose_ = flag;
    Data020f6340* obj = &data_020f6340;
    if (noClose_ != 0) {
        func_0204f554(obj);
        obj->unk_34 = 0xb;
        return;
    }
    obj->unk_34 = 0;
}
