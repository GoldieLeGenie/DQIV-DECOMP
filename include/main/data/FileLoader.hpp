#pragma once
#include <globaldefs.h>

struct FileLoader;

extern FileLoader data_02116ce8;

extern "C" {
    void* func_0207eb28(FileLoader* loader, const char* fname, int a, int b);  // load file
    int   func_0207ebf0(FileLoader* loader);                                    // last loaded size
    int   func_0207ebd4(FileLoader* loader, const char* fname);                 // file exists
}
