#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/data/DataObject.hpp"
#include "main/dss/Camera.hpp"

struct UnkModelObjectBase {
    virtual void vf00();                    // slot 0
    virtual void vf04();                    // slot 1
    virtual void draw();                    // slot 2
    virtual void cleanup(int flag);         // slot 3

    unsigned char unk_004[0xa8c];           /* 0x004 */
    dss::Fx32Vector3 m_scl;                 /* 0xA90 */
    dss::Fx32Vector3 m_pos;                 /* 0xA9C */
    dss::Fx32Vector3 m_rgb;                 /* 0xAA8 */
    dss::Vector3<short> m_rot;              /* 0xAB4 */
    MtxFx43 m_matrix;                       /* 0xABC */

    UnkModelObjectBase() { func_020885f8(&m_matrix); }
    dss::Fx32Vector3& getPosition() { return m_pos; }
    dss::Fx32Vector3& getScale() { return m_scl; }
};

struct UnkModelMember {
    void* unk_00;
    void* unk_04;

    UnkModelMember();                       // func_02083344
};

/* vtable 0x020c3ad4 */
struct ModelObject : UnkModelObjectBase {
    virtual void vf00();
    virtual void draw();
    virtual void cleanup(int flag);

    DataObject modelData_;                  /* 0xAEC */
    DataObject animData_[6];                /* 0xAFC */
    UnkModelMember unk_b5c;                 /* 0xB5C */
    unsigned char unk_b64[0xc4];            /* 0xB64 */
    int unk_c28;                            /* 0xC28 */
    int unk_c2c;                            /* 0xC2C */
    int unk_c30;                            /* 0xC30 */

    ModelObject() {}
};

/* vtable 0x020c3c08 */
struct ModelObjectWithCamera : ModelObject {
    enum CameraType {
        Normal = 0,
        Follow = 1,
        Standard = 2,
        Near = 3,
        Near2 = 4,
        Far = 5,
        Max = 6
    };

    virtual void draw();

    CameraType type_;                       /* 0xC34 */

    static dss::Camera* camera_;
    static dss::Fx32 distance_;
    static dss::Fx32 relativeScale_;

    ModelObjectWithCamera();
    void execNormal();
    void execFollow();
    void execNear();
    void execNear2();
    void execFar();
};

extern "C" {
    void func_02058768(ModelObjectWithCamera* self, void* model, int flag);        /* setup */
    void func_0205887c(ModelObjectWithCamera* self, void* animation, int index);   /* setAnimation */
    void func_02058a2c(ModelObjectWithCamera* self, int flag);                     /* start */
    void func_020589a4(ModelObjectWithCamera* self);                               /* ModelObject::draw */
    void func_02058af4(ModelObjectWithCamera* self, dss::Fx32 scale);              /* setScale */
    void func_02058b88(ModelObjectWithCamera* self, const dss::Fx32Vector3& scale);     /* setScale */
    void func_02058bcc(ModelObjectWithCamera* self, const dss::Fx32Vector3& position);  /* setPosition */
}
