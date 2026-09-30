#pragma once
#include "globaldefs.h"

struct BookMonsterDraw {
    static BookMonsterDraw* getSingleton();
    void setup(int monster);
};
