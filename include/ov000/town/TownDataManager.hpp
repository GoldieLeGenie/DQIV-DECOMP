#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/data/DataObject.hpp"
#include "main/param/Param.hpp"
#include "main/param/ColorCorrect.hpp"

extern "C" {
    void func_020832b0(int enable);                                         // fog enable
    void func_0208328c(int r, int g, int b);                                // fog color
    void func_020831e8(int side, dss::Fix32 rate);                          // fog rate
    void func_020831d8(int side, int offset);                               // fog offset
    void func_02084cec(unsigned char* bottomUpLeft, unsigned char* bottomUpRight, unsigned char* bottomDownLeft, unsigned char* bottomDownRight,
                       unsigned char* topUpLeft, unsigned char* topUpRight, unsigned char* topDownLeft, unsigned char* topDownRight); // map back color
}

struct TownDataManager {
    int correctTime_;                           // 0x00
    dss::Fix32Vector3 rate_;                    // 0x04
    int nextIndex_;                             // 0x10
    DataObject stageData_;                      // 0x14
    param::ColorCorrect* pCorrect_;             // 0x24
    param::FloorFog* pFloorFog_;                // 0x28
    param::CLUTCode* pCLUTCode_;                // 0x2C
    param::FloorBackColor* pBackColor_;         // 0x30

    TownDataManager();
    ~TownDataManager();
    void initialize();
    void terminate();
    void loadStage(char* filename);
    void setFloorfog(int index);
    void setTimezone(int index);
    dss::Fix32Vector3 getDefaultPaletteRate();
    void setBackcolor(int index);
    int getCurrentBackColor();

    void setNextBackColor(int index) { nextIndex_ = index; }
    int getNextBackColor() { return nextIndex_; }
};
