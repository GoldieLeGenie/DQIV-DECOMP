#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/menu/MenuBase.hpp"

struct TownMenu_MESSAGE : menu::MenuBase
{
    int keyEnable_;
    int yesNo_;
    int ynExec_;
    int yesNoCursor_;
    int ynPosX_;
    int ynPosY_;
    int yesNoSuperCancel_;
    int unk_38;
    menu::MenuItem yesNoItem_;
    int noClose_;

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();

    void openMessageForTEST();
    void openMessageForTALK();
    void openMessageForMENU();
    void openMessageForENCOUNT();
    void openMessageForBATTLE();
    void openMessage(eMessageWindow type);
    void addMessageNOWAIT(int messageID);
    void addMessage(int messageID);
    void addMessage(int messageID1, int messageID2);
    void addMessage(int messageID1, int messageID2, int messageID3);
    void addMessage(int messageID1, int messageID2, int messageID3, int messageID4);
    void addMessageCount(int messageID, int count);
    void addMessageSerial(int messageID);
    void addMessage(const char* message);
    void setYesNo();
    void setYesNo(int cursor);
    void setYesNoPosition(int x, int y);
    void setYesNoSuperCancel(bool flag);
    void restartMessage();
    void addMessageWAITKEY();
    bool isMessageWAITPROG();
    void clearMessageWAITPROG();
    void setMessageCursor(bool flag);
    void setMessageIntervalCursor(bool flag);
    void setMessageLastCursor(bool flag);
    void SetNoClose(bool flag);
};

struct MessageWindow {
    char unk_000[0x9a8];
    int intervalCursor_;
    int lastCursor_;
};

struct Data020f6340 {
    char unk_00[0x34];
    int unk_34;
};

extern TownMenu_MESSAGE data_020ed1bc;
extern MessageWindow* data_0210b380;
extern int data_0210b384;
extern char data_020f1d88[];
extern Data020f6340 data_020f6340;

extern "C" {
    void func_02056040(int type, int language);
    void func_02052400(void* menu);
    void func_02056074(int messageID);
    void func_0203cc20(void* mgr, int messageID);
    void func_0205614c(void);
    void func_0205607c(int messageID);
    void func_020560b8(const char* message);
    void func_0204dfc0(MessageWindow* window);
    void func_0203cc0c(void* mgr);
    void func_02056160(void);
    bool func_0204e02c(MessageWindow* window);
    void func_0204e064(MessageWindow* window, int flag);
    void func_0204f554(Data020f6340* obj);
}
