#pragma once
#include "main/menu/CursorMoveGridLoop.hpp"

struct MENUITEM_DATA;

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
    enum MENUITEM_RESULT {
        MENUITEM_RESULT_NONE,
        MENUITEM_RESULT_CHANGE,
        MENUITEM_RESULT_OK,
        MENUITEM_RESULT_CANCEL,
        MENUITEM_RESULT_SUPERCANCEL,
        MENUITEM_RESULT_UP,
        MENUITEM_RESULT_DOWN,
        MENUITEM_RESULT_LEFT,
        MENUITEM_RESULT_RIGHT,
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
    void setMenuItem(MENUITEM_DATA* menu, int w, int h, int num);
    int getActive() { return active_; }
};

}  // namespace menu

// DS menu parts draw list entry (list terminated by type_ 0xff)
struct UnkMenuParts {
    unsigned char type_;    /* 0x0 */
    unsigned char unk_1;    /* 0x1 */
    short unk_2;            /* 0x2 */
    short unk_4;            /* 0x4 */
    short x_;               /* 0x6 */
    short y_;               /* 0x8 */
    short unk_a;            /* 0xA */
    short unk_c;            /* 0xC */
};

struct MENUITEM_DATA {
    char code;      /* 0x0 */
    char view;      /* 0x1 */
    short x;        /* 0x2 */
    short y;        /* 0x4 */
    short w;        /* 0x6 */
    short h;        /* 0x8 */
};

extern "C" {
    void func_020518f8(MENUITEM_DATA* data, int x, int y);     /* sets data->x/y */
    void func_0201e6c4(menu::MenuItem* menuItem, int count, int active);
    int func_02051a7c(menu::MenuItem*);
    void func_0201e684(menu::MenuItem* menuItem, int active, int max, int x, int y);
    void func_0201e194(int x, int y, int w, int h, int arg);
    void func_0201e1c4(int x, int y, int w);
    int func_02050e20(int index, const char* text);    /* width of a text */
    void func_02050e44(int index, int x, int y, int priority, int flag);  /* draws a monster name plate */
    void func_02050ea8(UnkMenuParts* parts, int* param);   /* draws a parts list, param = per-part values (text/msg ids) */
    void func_02050ebc(UnkMenuParts* parts, int* param, int x, int y);
    void func_02050ed0(UnkMenuParts* parts, int* param, int flag);
    void func_02050ee0(UnkMenuParts* parts, int* param, int x, int y, int flag);
    void func_02050f1c(UnkMenuParts* part, int* param, int x, int y);       /* draws a single part at x/y */
    extern int data_020be244[];      /* draw flags passed as the last argument of func_02050ee0 */
    void func_0201e234(void);
    void func_0201e260(void);
    void func_0201e3f4(int chara, int flag);
    int func_0201e674(int action);                  /* action name message */
    void func_0201e350(int x, int y, int flag);     /* money window draw */
}

#include "main/menu/MenuUpdateAssist.hpp"
