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
};

extern "C" {
    void func_02084ef0(Render* self);   // ctor
    void func_02084efc(Render* self);   // initialize
    void func_02084f50(Render* self);   // terminate
    void func_02084fa4(Render* self);   // draw
}
