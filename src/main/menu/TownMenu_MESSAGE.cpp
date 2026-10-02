#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/dss/Pad.hpp"
#include "main/menu/CommonMenu_YESNO.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/status/GameStatus.hpp"

static MENUITEM_DATA yesNoItemData[] = {
    {1, 2, 0, 0, 0x100, 0xc0},
    {-1, -1, 0, 0, 0, 0},
};

THUMB void TownMenu_MESSAGE::menuSetup()
{
    yesNoItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH, menu::MenuItem::CURSORTYPE_NONE);
    keyEnable_ = 0;
    yesNo_ = 0;
    ynExec_ = 0;
    ynPosX_ = 0xc0;
    ynPosY_ = 0x40;
    yesNoSuperCancel_ = 1;
    suspendInput_ = 0;
    noClose_ = 0;
    func_0203cc0c(data_020f1d88);
}

THUMB void TownMenu_MESSAGE::menuExecute()
{
    if (ynExec_ == 0) {
        func_02051a60(&yesNoItem_, yesNoItemData, 1, 1, 1);
    }
    if (noClose_ != 0) {
        Data020f6340* const busy = &data_020f6340;
        busy->unk_34 = 0xb;
        func_0204f53c(busy, 0);
        func_0204f270(busy, 0xe0, 0x164);
        func_0204f264(busy, 1);
    }
}

THUMB void TownMenu_MESSAGE::menuDraw()
{
    func_0204f264(data_0210b380, 1);
}

THUMB void TownMenu_MESSAGE::menuUpdate()
{
    if (frame_ >= 2 && suspendInput_ == 0) {
        if (ynExec_ == 0) {
            yesNoItem_.result_ = 0;
            yesNoItem_.lastresult_ = 0;
            func_02051a7c(&yesNoItem_);
            int key = 0;
            if ((data_02116d40.unkfunc_0207f280() & 0x1) || (data_02116d40.unkfunc_0207f280() & 0x2) ||
                (data_02116d40.unkfunc_0207f280() & 0x400) || (data_02116d40.unkfunc_0207f280() & 0x800) ||
                (data_02116d40.unkfunc_0207f280() & 0x40) || (data_02116d40.unkfunc_0207f280() & 0x10) ||
                (data_02116d40.unkfunc_0207f280() & 0x80) || (data_02116d40.unkfunc_0207f280() & 0x20) ||
                (data_02116d40.unkfunc_0207f280() & 0x200) || (data_02116d40.unkfunc_0207f280() & 0x100)) {
                key = 1;
            }
            if (keyEnable_ != 0) {
                if (yesNo_ != 0) {
                    if (func_0204dfd8(data_0210b380) && key == 1) {
                        func_0204e040(data_0210b380);
                        keyEnable_ = 0;
                    }
                    if (func_0204e004(data_0210b380)) {
                        data_020ed094.open();
                        data_020ed094.setYesNo(yesNoCursor_);
                        data_020ed094.setPosition(ynPosX_, ynPosY_);
                        data_020ed094.setSuperCancel(yesNoSuperCancel_);
                        ynExec_ = 1;
                        keyEnable_ = 0;
                    }
                } else {
                    if (func_0204dfd8(data_0210b380) && key == 1) {
                        func_0204e040(data_0210b380);
                        keyEnable_ = 0;
                    }
                    if (func_0204e004(data_0210b380) && key == 1) {
                        func_0204e040(data_0210b380);
                        keyEnable_ = 0;
                    }
                }
            } else {
                if (func_0204dfd8(data_0210b380) && key == 0) {
                    keyEnable_ = 1;
                }
                if (func_0204e004(data_0210b380) && key == 0) {
                    keyEnable_ = 1;
                }
            }
            if (func_0204e018(data_0210b380)) {
                stat_ = MENUBASE_STAT_OK;
            }
        } else {
            if (data_020ed094.stat_ == MENUBASE_STAT_OK) {
                stat_ = MENUBASE_STAT_OK;
            }
            if (data_020ed094.stat_ == MENUBASE_STAT_CANCEL) {
                stat_ = MENUBASE_STAT_CANCEL;
            }
        }
    }
}

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
    open();
    suspendInput_ = 0;
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
