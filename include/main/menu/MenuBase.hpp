#pragma once
#include "main/menu/CursorMoveGridLoop.hpp"

namespace menu {

struct MenuBase {
    enum MENUBASE_STAT {
        MENUBASE_STAT_ACTIVE=0,
        MENUBASE_STAT_OK=1,
        MENUBASE_STAT_CANCEL=2
    };
    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuDraw();
    virtual void menuUpdate();
    virtual void menuClose();
    int redraw_;
    int frame_;
    MENUBASE_STAT stat_;
    int exitCode_;
    int lock_;
    int lockRequest_;

    MenuBase();
    void menuBaseSetup();
    void menuBaseExecute();
    void menuBaseDraw();
    void menuBaseUpdate();
    void open();
    void close();
    int isOpen();
};

struct MenuItem {
    enum MENUITEM_TYPE {
        MENUITEM_TYPE_TOUCH,
        MENUITEM_TYPE_TOUCH_PAD,
        MENUITEM_TYPE_TOUCH_CANCEL,
        MENUITEM_TYPE_TOUCH_PAD_CANCEL,
    };
    enum CURSORTYPE {
        CURSORTYPE_NONE,
        CURSORTYPE_UP,
        CURSORTYPE_DOWN,
        CURSORTYPE_LEFT,
        CURSORTYPE_RIGHT,
        CURSORTYPE_ACTIVE,
        CURSORTYPE_INACTIVE,
        CURSORTYPE_WIRELESS,
    };

    int unk_00[6];
    int flagTouch_;
    int enablePad_;
    int enableCancel_;
    int unk_24;
    int enableSE_;
    int unk_2C;
    int enable_;
    int unk_34;
    int active_;
    int unk_3C;
    int unk_40;
    int unk_44;
    int unk_48;
    int lastresult_;
    int result_;
    int reason_;
    int mtype_;
    int bActive_;
    int navMode_;

    void setup(MENUITEM_TYPE type, CURSORTYPE cursor);
    void drawActive();
};

}  // namespace menu

struct MENUITEM_DATA {
    char code;      /* 0x0 */
    char view;      /* 0x1 */
    short x;        /* 0x2 */
    short y;        /* 0x4 */
    short w;        /* 0x6 */
    short h;        /* 0x8 */
};

extern "C" {
    void func_02051a60(menu::MenuItem* menuItem, MENUITEM_DATA* data, int min, int max, int active);
    void func_0201e6c4(menu::MenuItem* menuItem, int count, int active);
    void func_02051a7c(menu::MenuItem*);
    void func_0201e684(menu::MenuItem* menuItem, int active, int max, int x, int y);
}

#include "main/menu/MenuUpdateAssist.hpp"
