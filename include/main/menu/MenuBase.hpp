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
    int unk_00;
    short w_;             /* 0x4 */
    short h_;             /* 0x6 */
    short count_;         /* 0x8 */
    short unk_0a;
};

}  // namespace menu

extern "C" {
    void func_02023324(menu::MenuNavigator* navigator);
    int  func_0202333c(menu::MenuNavigator* navigator);
    int  func_020231c8(menu::MenuItem* menuItem, menu::MenuNavigator* navigator, int* active);
    void func_02023344(menu::MenuNavigator* navigator, int page);
    int  func_02023348(menu::MenuNavigator* navigator);
    int  func_020233cc(menu::MenuNavigator* navigator, int active);
    int  func_02023364(menu::MenuNavigator* navigator, int active);
    int  func_0202339c(menu::MenuNavigator* navigator, int active);
    void func_0201e6c4(menu::MenuItem* menuItem, int count, int active);
    void func_02023504(void* cursor, int a, int b, int count);
    int  func_02023274(void* list, void* cursor);                /* poll -> 0/2/3/4/5 */
    void func_02051900(menu::MenuItem*, int, int);
    void func_02051968(menu::MenuItem*);
    void func_02051a7c(menu::MenuItem*);
    int  func_02023230(menu::MenuItem*);
    int  func_02023204(menu::MenuItem* menuItem, menu::MenuNavigator* navigator, int* active);
    int  func_020233e4(menu::MenuNavigator* navigator);
    int  func_020233f0(menu::MenuNavigator* navigator);
    void func_0201e684(menu::MenuItem* menuItem, int active, int max, int x, int y);
}
