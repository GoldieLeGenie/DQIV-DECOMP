#pragma once
#include "main/menu/MenuAPI.hpp"
#include "main/menu/MenuBase.hpp"
#include "main/menu/CursorMoveGridLoop.hpp"

namespace MenuUpdate_Assist {
    int isPageFlip(menu::MenuItem& item, CursorMoveBase& cursor, int& active);
    int isPageFlipOne(menu::MenuItem& item, CursorMoveBase& cursor, int& active);
    int isCancel(menu::MenuItem& item);
    int menuSelect(menu::MenuItem& item, CursorMoveBase& cursor);
}
