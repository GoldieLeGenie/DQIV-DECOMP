#pragma once
#include "globaldefs.h"

struct FieldSystem {
    char unk_000[0x614];
    int exitSound_;                                                                 // 0x614

    static void unkfunc_02122e80();
    static FieldSystem* getSingleton();
    void initialize();
    void terminate();
    void execute();
    void draw();
};
