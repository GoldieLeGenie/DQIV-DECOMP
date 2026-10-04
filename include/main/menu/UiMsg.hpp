#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"

struct MessageWindow;

void ui_MsgSystemInit();
void ui_MsgSetup(eMessageWindow type, int lang);
void ui_MsgAdd(int strNo);
void ui_MsgAddSerial(int no);
void ui_MsgAdd(const char* str);
void unkfunc_0205614c();
void ui_MsgAddWait();
void unkfunc_02056174();
void unkfunc_02056184(int cursor);
void unkfunc_02056194(int strNo);
void unkfunc_02056300();
int unkfunc_02056328(int no);
void ui_MsgSndSet(int no);
void ui_MsgSndSet(int* pms);
int ui_MsgSndGet();

extern MessageWindow* s_draw;
extern int s_msgCount;

extern char data_020f641c[];    /* message window object */

extern "C" {
    void func_0204de2c(MessageWindow* window, int type, const char* name, const char* text);
    void func_0204de50(MessageWindow* window, const char* text);
    void func_0204de6c(MessageWindow* window);
    void func_0204de7c(MessageWindow* window);
    void func_0204def4(MessageWindow* window);
    void func_0204df1c(MessageWindow* window, const char* name);
    void func_02052aa4(void* item, int cursor);
}
