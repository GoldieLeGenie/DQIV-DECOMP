#pragma once
#include <globaldefs.h>
#include "main/data/DataObject.hpp"

namespace cmn {
    struct CommonEffectData {
        LZDataObject effectData_;   /* 0x00 */
        int m_effect_type;          /* 0x10 */

        CommonEffectData();
        ~CommonEffectData();
        void setup(int index);
        void setupTexture();
        void cleanup();
        void cleanupTexture();
        void* getTextureData();
        void* getAnimationData();
        void* getPaletteAnimData();
        int isPamEnable();
        void* getModelData();
        void* getAnimData(int index);
        int isEnable();
        int getEffectType();
        static int isSecondEffect(int index);
    };
}

extern "C" {
    void func_02086798(void* texture, int flag);   /* load texture */
    void func_02086868(void* texture);             /* release texture */
    void func_02086968(void* texture, int flag);
    int  func_02086a9c(void* texture);
    int  func_02086aac(void* texture);
    void func_020868dc(void* texture);
    void func_020869ec(void* texture, void* src, int b);
    int  func_02086c18(void* texture);             /* width */
    int  func_02086c64(void* texture);             /* height */
}
