#pragma once
#include "main/menu/MenuBase.hpp"

struct CommonMenu_YESNO : menu::MenuBase {
    menu::MenuItem menuItem_;   /* 0x1C */
    int wait_;                  /* 0x80 */
    int superCancel_;           /* 0x84 */

    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();

    void setYesNo(int cursor);
    void setPosition(int x, int y);
    void setSuperCancel(int flag);
};

extern "C" {
    void func_02056174(void);
    void func_02056184(int cursor);
    void func_02052a28(void* window, int messageId1, int messageId2);
}

extern CommonMenu_YESNO data_020ed094;
