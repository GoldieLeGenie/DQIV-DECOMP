#pragma once
#include <globaldefs.h>
#include "main/dss/Position.hpp"
#include "main/data/DataObject.hpp"
#include "main/object/DSSAObject.hpp"

struct UnkCharacterPalette {
    unsigned char unk_000[0x404];               // 0x000
    int unk_404;                                // 0x404
    int unk_408;                                // 0x408
    int unk_40c;                                // 0x40C
    int enable_;                                // 0x410

    UnkCharacterPalette();
    ~UnkCharacterPalette();
    void unkfunc_02086ccc(void* texture, int flag);
    void unkfunc_02086d4c();
};

struct DSSACharacter : Position {
    int unk_34;                                 // 0x034
    int currentAnimationIndex_;                 // 0x038
    int nextAnimationIndex_;                    // 0x03C
    int firstAnimationIndex_;                   // 0x040
    DSSAObjectWithCamera dssaObject_[14];       // 0x044
    void* texture_;                             // 0x904
    UnkCharacterPalette palette_;               // 0x908
    DataObject* dataObject_;                    // 0xD1C
    dss::Flag flag_;                            // 0xD20
    long flagCount_;                            // 0xD24
    int flagIndex_;                             // 0xD28
    int specialIndex_;                          // 0xD2C

    DSSACharacter();
    ~DSSACharacter();
    void setup(void* texture, DataObject* data);
    void cleanup();
    void draw();
    bool start(int index, int loop);
    void setAlpha(int alpha);
    bool isEnable(int index);
    int getCurrentFrame();
    int getMaxFrame();
    dss::Fix32Vector3 getNullPosition(int index, int type);
    dss::Fix32 getWidth();
    int getWidthInt();
    dss::Fix32Vector3 getBoundingBox(int index);
    void setPositionInt(dss::Vector3int position);
    void setCurrentFrame(int index, int frame);
    void setCameraType(DSSAObjectWithCamera::CameraType type);
    void pause(bool pause);
};

extern "C" {
    void func_02086868(void* texture);                                      /* release texture */
    void func_02086034(void* texture, dss::Fix32* rgb);                     /* DS-only palette rate */
}
