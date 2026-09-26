#pragma once
#include "globaldefs.h"

struct FieldStage {
    char unk_0000[0x20dc];
    int pause_;                                                                     // 0x20DC fieldData.pause_
};

extern "C" {
    FieldStage* func_ov001_0212b948(void);                                          // FieldStage::getSingleton
}
