#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/dss/Position.hpp"
#include "main/dss/Render.hpp"

/* vtable 0x020c43c4 */
struct RenderObject {
    virtual void draw() {}                      // slot 0, 0x0204a044
    virtual void setPolygonID(int id);          // slot 1
    virtual void setAlpha(int alpha);           // slot 2
    virtual void setRender(Render* render);     // slot 3
    virtual void removeRender();                // slot 4
    virtual Render* getRender();                // slot 5

    Render* render_;                            // 0x04
    void* texture_;                             // 0x08
    unsigned char polygonID_;                   // 0x0C
    unsigned char alpha_;                       // 0x0D
    int enable_;                                // 0x10

    RenderObject();                             // C2 func_02083658
};

/* vtable 0x020c1c88 */
struct RenderObject3D : RenderObject, Position {
    virtual void draw();                        // never defined: key function so the main vtable is not re-emitted (Multiply-defined)
    ~RenderObject3D() {}
};

struct BillboardVertex {
    dss::Vector2<dss::Fix16> v[4];
};

struct BillboardTexCoord {
    dss::Vector2<dss::Fix32> v[4];
};

/* vtable 0x020c4404 */
struct Billboard : RenderObject3D {
    virtual void draw();                        // func_020842c0

    BillboardVertex vertex_;                    // 0x48
    BillboardTexCoord texCoord_;                // 0x58
    BillboardVertex drawVertex_;                // 0x78
    BillboardTexCoord drawTexCoord_;            // 0x88
    dss::Fix32 offsetX_;                        // 0xA8
    dss::Fix32 offsetY_;                        // 0xAC
    unsigned short color_;                      // 0xB0

    Billboard();                                // C2 func_02083da8
    ~Billboard() {}
};

extern "C" {
    void func_02083680(RenderObject* self);                                     /* set polygon attr */
    BillboardVertex* func_02084134(Billboard* self);                            /* getVertex */
    BillboardTexCoord* func_020841a8(Billboard* self);                          /* getTexCoord */
    void func_020840c8(Billboard* self, const BillboardVertex* vertex);         /* setVertex */
    void func_0208413c(Billboard* self, const BillboardTexCoord* texCoord);     /* setTexCoord */
    void func_020841b0(Billboard* self, const dss::Vector2<dss::Fix32>* offset); /* setTexCoordOffset */
    void func_020841d4(Billboard* self);                                        /* calc draw vertex/texcoord */
    void func_020842b8(Billboard* self, int color);                             /* setColor */
    void func_02086b28(void);                                                   /* no texture */
}
