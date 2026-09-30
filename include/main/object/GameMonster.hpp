#pragma once
#include <globaldefs.h>
#include "main/dss/Position.hpp"

struct UnkCharacterPalette {
    unsigned char unk_000[0x404];               // 0x000
    int unk_404;                                // 0x404
    int unk_408;                                // 0x408
    int unk_40c;                                // 0x40C
    int enable_;                                // 0x410
};

struct DSSACharacter : Position {
    int unk_34;                                 // 0x034
    int currentAnimationIndex_;                 // 0x038
    unsigned char unk_03c[0x8cc];               // 0x03C
    UnkCharacterPalette palette_;               // 0x908
    void* dataObject_;                          // 0xD1C
    unsigned int flag_;                         // 0xD20
    int flagCount_;                             // 0xD24
    int flagIndex_;                             // 0xD28
    int specialIndex_;                          // 0xD2C
};

struct GameMonster : DSSACharacter {
    int index_;                                 // 0xD30
    void* dssaCharacterData_;                   // 0xD34

    GameMonster();
    ~GameMonster();
};

extern "C" {
    void func_0205aa8c(DSSACharacter* self);                                /* draw */
    void func_0205af20(DSSACharacter* self, int animIndex, int loop);       /* startAnimation */
    int  func_0205b1b8(DSSACharacter* self);
    int  func_0205b1cc(DSSACharacter* self);
    void func_0205b368(DSSACharacter* self, int a, int frame);
    void func_0205b384(DSSACharacter* self, int cameraType);
    dss::Fix32Vector3 func_0205b1e0(DSSACharacter* self, int index, int type);  /* getNullPosition */
    void func_0204d04c(GameMonster* self, int index);                       /* setup */
    void func_0204d084(GameMonster* self);                                  /* cleanup */
    dss::Fix32 func_0204d0ac(GameMonster* self);                            /* getWidth */
    int  func_0204d0b8(GameMonster* self);                                  /* getWidthInt */
}
