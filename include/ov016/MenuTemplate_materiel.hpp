#pragma once
#include "globaldefs.h"
#include "main/menu/MenuBase.hpp"

namespace MenuTemplate_materiel {
    void MATERIEL_POKER_SELECT_CARD(menu::MenuItem* item, int active);
    void MATERIEL_POKER_SELECT_DEAL(menu::MenuItem* item, int active);
    void MATERIEL_POKER_BET_COIN(menu::MenuItem* item, int active);
    void MATERIEL_POKER_HI_AND_LOW(menu::MenuItem* item, int active);
}

// casino coin window (DS-only helpers)
void unkfunc_0216fd48(int coin, int flag);
void unkfunc_0216fd58(int coin, int flag);
void unkfunc_02177bac(int x, int y, int w, int h, int color);
void unkfunc_02177d24(int coin, int bet, int a, int b);
void unkfunc_02177da0(int* cards, int a);
void unkfunc_02177e34(int coin, int a, int b);
