#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"
#include "main/status/HaveStatusInfo.hpp"
#include "main/status/PlayerStatus.hpp"

// materiel menu window drawing (shop, bank, church, picture book, extra menus)
void unkfunc_0216ce4c(bool bank, int type);
void unkfunc_0216ceb4(UnkMenuParts* parts, int* param, int x, int y, int mode);
void unkfunc_0216ced4();
status::HaveStatusInfo* unkfunc_0216cfa4(status::PlayerStatus* player);
void unkfunc_0216cfac();
void unkfunc_0216d058(int* count);
void unkfunc_0216d0bc(UnkMenuParts* parts, int* param, int mode);
void unkfunc_0216d0d4();
void unkfunc_0216d154(int flag);
void unkfunc_0216d26c();
void unkfunc_0216d398();
void unkfunc_0216d554(int y, int flag);
void unkfunc_0216d798();
void unkfunc_0216d8e4(int flag);
void unkfunc_0216da80(int flag);
void unkfunc_0216db94(int mode, int a, int b, int c);
void unkfunc_0216dc54(int item);
void unkfunc_0216ddf4(int quantity);
void unkfunc_0216de34(int coin, int flag);
void unkfunc_0216dea8(int win);
void unkfunc_0216decc(int* monsterName, int* monsterFlag);
void unkfunc_0216df9c(int monsterNo, int monsterName);
void unkfunc_0216e0bc();
void unkfunc_0216e12c(int money, int flag);
void unkfunc_0216e1c4(int flag);
void unkfunc_0216e2bc(int x, int y);
void unkfunc_0216e2d0(int chara);
void unkfunc_0216e844();
void unkfunc_0216e944(int count, int page, int pageMax);
void unkfunc_0216e9fc(int chapter, int chapterEnd);
void unkfunc_0216eac0();
void unkfunc_0216eb18(int a, int b, int c, int d);
void unkfunc_0216edf8(int a, int b, int c);
void unkfunc_0216efdc(int a, int b);
void unkfunc_0216f0c0(int page, int value);
void unkfunc_0216f1b0(int active, int y);
void unkfunc_0216f1e0();
void unkfunc_0216f258();
void unkfunc_0216f318();
void unkfunc_0216f450();
void unkfunc_0216f4bc();
void unkfunc_0216f52c(int chara);
int unkfunc_0216f5f8(status::HaveStatusInfo* status, int* param, int item);
int unkfunc_0216f7d0(status::HaveStatusInfo* status, int* param, int item);
int unkfunc_0216f864(int itemID);
void unkfunc_0216f8f8(int* param, int chara, int index);
void unkfunc_0216f9e8(unsigned char* name, int flag);
void unkfunc_0216fa48(char* line1, char* line2, char* line3, char* comment);

