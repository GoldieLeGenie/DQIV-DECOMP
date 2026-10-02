#pragma once
#include "main/menu/MenuBase.hpp"

struct TownMenu_TOWN : menu::MenuBase {
    void unkfunc_020273a8(int camera, int map, int shop, int menuIcon);   // icon setup (DS-only)
};

extern TownMenu_TOWN data_020ed11c;             /* gTownMenu_TOWN */
