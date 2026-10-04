#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/menu/DebugMenu.hpp"

enum MENUDISPLAY_MODE {
    MENUDISPLAY_OFF = 0,
    MENUDISPLAY_NORMAL = 1,
    MENUDISPLAY_EXTRA = 2
};

struct MenuSubManager {
    menu::MenuBase* m_menu[8];   /* 0x00 */
    menu::MenuBase* m_next[8];   /* 0x20 */
    int m_update;                /* 0x40 */

    void setup();
    void execute();
    void draw(int x, int y);
    void update();
    void addMenu(menu::MenuBase* menu);
    void deleteMenu(menu::MenuBase* menu);
    void clearMenuAll();
    int isOpenMenu(menu::MenuBase* menu);
    int getMenuIndex(menu::MenuBase* menu);
};

struct MenuManager {
    static void setup();
    static void setMenuDisplay(int mode);
    static void requestMenuMode(MENUDISPLAY_MODE mode);
    static int isMenuMode(MENUDISPLAY_MODE mode);
    static int isRequesting();
    static void execute();
    static void addMenu(menu::MenuBase* menu);
    static void deleteMenu(menu::MenuBase* menu);
    static void clearMenuAll();
    static int isOpenMenu(menu::MenuBase* menu);
    static int getUpdateTime();
    static void setMenuEnable(int enable);
    static int isExtraMenu();
};

extern char data_02108518[];
extern char data_0211c4d8[];
extern char data_0211c4c0[];
extern char data_0211c4cc[];
extern char data_0211c4f0[];
extern char data_02116ce0[];

extern "C" {
    void func_02050614(int redraw);
    void func_02050494(void);
    int  func_0207e7e8(void);
    void func_0207e810(void* obj);
    void func_0207e864(void* console, int x, int y, const char* str);
    void func_0207e88c(void* console, int x, int y, const char* format, ...);
    void func_0207e804(void* console);
    void func_0207e8e0(void* console, int x, int y, int w, int h);
    void func_0207e8f4(void* console, int x, int y);
    void func_02081728(int plane);
    void func_0208120c(void* obj);
    void func_02080e90(void* obj);
    void func_0204fea8(void* obj, int flag);
    void func_02050698(int x, int y);
    void func_0205077c(int x, int y, int w, int h);       // draw a frame
}
