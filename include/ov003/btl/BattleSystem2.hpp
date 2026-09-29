#pragma once
#include <globaldefs.h>
#include "main/dss/Render.hpp"

namespace btl {
    struct BattleSystem2 {
        Render render_;                 // 0x000

        BattleSystem2();
        ~BattleSystem2();
        static BattleSystem2* getSingleton();
        void initialize();
        void terminate();
        void execute();
        void draw();
    };
}

extern "C" {
    void func_ov003_021212d4();   // BattleMonsterMask::initialize (this = func_ov003_02121298())
    void func_ov003_021213d8();   // BattleMonsterMask::terminate
    void func_ov003_021213f8();   // BattleMonsterMask::draw
    void func_ov003_02121f0c();   // BattleMonsterDraw2::cleanup (this = func_ov003_02121d04())
    void func_ov003_0212203c();   // BattleMonsterDraw2::draw
}
