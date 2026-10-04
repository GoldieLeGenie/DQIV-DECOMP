#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/menu/MenuBase.hpp"
#include "main/menu/UiMsg.hpp"
#include "main/menu/UnkMenuDisplay.hpp"

struct TownMenu_MESSAGE : menu::MenuBase
{
    int keyEnable_;
    int yesNo_;
    int ynExec_;
    int yesNoCursor_;
    int ynPosX_;
    int ynPosY_;
    int yesNoSuperCancel_;
    int suspendInput_;
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

struct MessageWindow : UnkMenuDisplay {
    char unk_030[0x978];
    int intervalCursor_;    // 0x9A8
    int lastCursor_;        // 0x9AC
    char unk_9b0[0x20];
    int shake_;             // 0x9D0
    int shakeCount_;        // 0x9D4

    virtual void setup(int id);
    virtual void update(UnkOamBuffer* main, UnkOamBuffer* sub);
    virtual void execute(UnkOamBuffer* main, UnkOamBuffer* sub);
    virtual void draw(UnkOamBuffer* main, UnkOamBuffer* sub);
};

struct Data020f6340;
extern "C" {
    void func_0204f53c(Data020f6340* obj, int flag);
}

struct Data020f6340 : UnkMenuDisplay {
    int unk_30;
    int unk_34;

    virtual void setup(int id);
    virtual void update(UnkOamBuffer* main, UnkOamBuffer* sub);
    virtual void execute(UnkOamBuffer* main, UnkOamBuffer* sub);
    virtual void draw(UnkOamBuffer* main, UnkOamBuffer* sub);
};

extern TownMenu_MESSAGE data_020ed1bc; //gTownMenu_MESSAGE 
extern char data_020f1d88[];
extern Data020f6340 data_020f6340;
extern Data020f6340 data_020f7e10;

extern "C" {
    void func_0203cc20(void* mgr, int messageID);
    void func_0204dfc0(MessageWindow* window);
    void func_0203cc0c(void* mgr);
    bool func_0204e02c(MessageWindow* window);
    void func_0204e064(MessageWindow* window, int flag);
    void func_0204f554(Data020f6340* obj);
    int func_0204dfd8(MessageWindow* window);
    int func_0204e004(MessageWindow* window);
    int func_0204e018(MessageWindow* window);
    void func_0204e040(MessageWindow* window);
    void func_0204e050(MessageWindow* window);
}
