#pragma once
#include <globaldefs.h>

namespace dss {
    struct File {
        char unk_00[0x4c];
        int unk_4c;                             // 0x4C offset of the next unkfunc_0207eac0 read
        int unk_50;                             // 0x50 size of the next unkfunc_0207eac0 read

        void* unkfunc_0207eb28(const char* fname, int a, int b);   // load file
        int unkfunc_0207ebf0();                                     // last loaded size
        bool isExist(const char* fname);
        void unkfunc_0207eac0(const char* fname, void* dst, int a); // load file into buffer
    };

    extern File g_File;
}
