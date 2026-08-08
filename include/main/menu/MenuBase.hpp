#pragma once

namespace menu {

struct MenuBase {
    enum MENUBASE_STAT {
        MENUBASE_STAT_ACTIVE=0,
        MENUBASE_STAT_OK=1,
        MENUBASE_STAT_CANCEL=2
    };
    virtual void menuSetup();
    virtual void menuExecute();
    virtual void menuClose();
    virtual void menuDraw();
    virtual void menuUpdate();
    int redraw_;
    int frame_;
    MENUBASE_STAT stat_;
    int exitCode_;
    int lock_;
    int lockRequest_;
};

struct MenuItem {
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
};

struct MenuNavigator {
    short w_;             /* 0x4 */
    short h_;             /* 0x6 */
    short count_;         /* 0x8 */
};

}  // namespace menu
