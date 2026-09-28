#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/cmn/CommonEffectData.hpp"
#include "main/object/DSSAObject.hpp"
#include "main/object/ModelObject.hpp"

extern "C" void func_0207f8ac(void* p);   /* heap free */

namespace cmn {
    struct CommonEffectSimple {
        CommonEffectData* effectData_;      /* 0x04 */
        dss::Fx32 rate_;                    /* 0x08 */

        CommonEffectSimple();
        virtual ~CommonEffectSimple();
        virtual void setup(CommonEffectData* data, int flag) = 0;
        virtual void cleanup(int flag) = 0;
        virtual void draw() = 0;
        virtual void start() = 0;
        virtual void setPosition(dss::Fx32Vector3& position) = 0;
        virtual void setScale(dss::Fx32 scale) = 0;
        virtual int isEnd() = 0;
        virtual int getType() = 0;
        virtual void setDisplayType(int type) = 0;
        int isEnable();

        static void operator delete(void* p) { func_0207f8ac(p); }
    };

    struct CommonEffectFlat : CommonEffectSimple {
        void* texture_;                     /* 0x0C */
        PaletteAnimation paletteAnim_;      /* 0x10 */
        void* paletteTexture_;              /* 0x20 */
        int paletteColorCount_;             /* 0x24 */
        unsigned char unk_28[0x208];        /* 0x28 */
        DSSAObjectWithCamera dssaEffect_;   /* 0x230 */

        CommonEffectFlat();
        virtual ~CommonEffectFlat();
        virtual void setup(CommonEffectData* data, int flag);
        virtual void cleanup(int flag);
        virtual void draw();
        virtual void start();
        virtual void setPosition(dss::Fx32Vector3& position);
        virtual void setScale(dss::Fx32 scale);
        virtual int isEnd();
        virtual int getType();
        virtual void setDisplayType(int type);
    };

    struct CommonEffectCubic : CommonEffectSimple {
        ModelObjectWithCamera model_;       /* 0x0C */

        CommonEffectCubic();
        virtual ~CommonEffectCubic();
        virtual void setup(CommonEffectData* data, int flag);
        virtual void cleanup(int flag);
        virtual void draw();
        virtual void start();
        virtual void setPosition(dss::Fx32Vector3& position);
        virtual void setScale(dss::Fx32 scale);
        virtual int isEnd();
        virtual int getType();
        virtual void setDisplayType(int type);
    };
}
