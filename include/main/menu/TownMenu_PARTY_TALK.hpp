#pragma once
#include "main/text/TextAPI.hpp"
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"

struct TownStageManager;

struct TownMenu_PARTY_TALK : menu::MenuBase
{
    char unk_1c;                            /* 0x1C */

    virtual void menuSetup();
    virtual void menuDraw() {}
    virtual void menuExecute() {}
    virtual void menuUpdate();
    void setLeaderMacro(int sortIndex);
};

extern TownMenu_PARTY_TALK data_ov016_02187b28;
extern menu::MenuBase data_ov016_02187c60;

extern "C" {
    int  func_02058114(void* global, int partId);
}
