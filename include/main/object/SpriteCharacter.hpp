#pragma once
#include <globaldefs.h>

struct SpriteCharacter {
    char unk_00[0xdc];

    void setColor(int color);
    static void setAllCharaAnim(int flag);
    static int getAllCharaAnim();
};
