#pragma once
#include "main/dss/DssUtils.hpp"

namespace dss {
    struct Camera;

    struct CameraSub {
        char unk_00[0xc];
        VecFx32 unk_0c;                         // 0x0C
        VecFx32 unk_18;                         // 0x18
        char unk_24[0xc];
        VecFx32 unk_30;                         // 0x30
        char unk_3c[0x64 - 0x3c];
    };
}

extern "C" {
    void func_02082dc8(void* camera);
    void func_0205788c(dss::Camera* camera, dss::Fx32Vector3* pos, int flag);
    dss::Fx32Vector3* func_02057868(dss::Camera* camera, int index);
    dss::Fx32Vector3* func_020578b0(dss::Camera* camera, int index);
    void func_02083078(void* camera, const dss::Fx32& distance);
    void func_02083054(void* camera, const dss::Vector3short& angle);
    dss::Vector3short* func_02083070(void* camera);
    void func_020830d4(void* camera, short fovy);
    void func_0208311c(void* camera, dss::Fx32 value);
    void func_02083024(void* camera, dss::Fx32Vector3* pos);
    dss::Fx32Vector3* func_02083034(void* camera);
    void func_0208303c(void* camera, dss::Fx32Vector3* target);
    dss::Fx32Vector3* func_0208304c(void* camera);
    void* func_020830b0(void* camera);
    void func_0208718c(dss::Fx32* obj, const dss::Fx32& value);
    void func_020576bc(dss::Camera* camera);
    void func_020576ec(dss::Camera* camera);
    void func_02049984(dss::CameraSub* camera);
}

extern dss::CameraSub* data_0210bd08;

namespace dss {
    struct Camera {
        void* vtable_;                          // 0x00
        CameraSub unk_004;                      // 0x04
        CameraSub unk_068;                      // 0x68
        int unk_cc;                             // 0xCC
        int unk_d0;                             // 0xD0
        int unk_d4;                             // 0xD4
        Fx32 unk_d8;                            // 0xD8
        short unk_dc;                           // 0xDC
        char unk_de[0xf0 - 0xde];
        int unk_f0;                             // 0xF0

        Camera();
        ~Camera() {}

        void setRotXYZ(Vector3short angle) { func_02083054(&unk_004, angle); }
        void setDistance(Fx32 distance)
        {
            func_02083078(&unk_004, distance);
            func_02083078(&unk_068, distance);
        }
        void setNear(Fx32 value)
        {
            func_0208311c(&unk_004, value);
            func_0208311c(&unk_068, value);
        }
        void setOffset(Fx32 offset) { func_0208718c(&unk_d8, offset); }
    };
}
