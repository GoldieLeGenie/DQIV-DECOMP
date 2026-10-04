#pragma once
#include <globaldefs.h>
#include "main/dss/Position.hpp"
#include "main/object/DSSAObject.hpp"
#include "main/object/DSSACharacter.hpp"

struct GameMonster : DSSACharacter {
    int index_;                                 // 0xD30
    DSSACharacterData* dssaCharacterData_;      // 0xD34

    GameMonster();
    ~GameMonster();
};

extern "C" {
    void func_0204d04c(GameMonster* self, int index);                       /* setup */
    void func_0204d084(GameMonster* self);                                  /* cleanup */
    dss::Fix32 func_0204d0ac(GameMonster* self);                            /* getWidth */
    int  func_0204d0b8(GameMonster* self);                                  /* getWidthInt */
}
