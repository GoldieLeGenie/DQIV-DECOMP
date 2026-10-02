#pragma once
#include <globaldefs.h>

// BattleSystem2::render_ (type Render)
struct Render {
    int unk_000;                // 0x000
    int unk_004[32];            // 0x004
    int unk_084[64];            // 0x084
    int unk_184[32];            // 0x184
    int unk_204[128];           // 0x204
    int unk_404[128];           // 0x404
    int unk_604;                // 0x604

    Render();
    void unkfunc_02084efc();
    void unkfunc_02084f50();
    void unkfunc_02084fa4();
};
