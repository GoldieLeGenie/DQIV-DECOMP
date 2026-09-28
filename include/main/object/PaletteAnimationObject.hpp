#pragma once
#include <globaldefs.h>
#include "main/object/DSSAObject.hpp"

// DS-only palette animation player (name unknown)
struct PaletteAnimationObject {
    PaletteAnimation anim_;             /* 0x00 */
    void* texture_;                     /* 0x10 */
    int colorCount_;                    /* 0x14 */
    int frame_;                         /* 0x18 */
    int wait_;                          /* 0x1C */
    unsigned short color_[256];         /* 0x20 */

    PaletteAnimationObject() { texture_ = 0; }
};

extern "C" {
    void func_0205b3d0(PaletteAnimationObject* self);   /* start */
    void func_0205b44c(PaletteAnimationObject* self);   /* execute */
    void func_0205b648(PaletteAnimationObject* self);   /* cleanup */
}
