#include "wm_internal.h"

u16 data_02116c60[0x40] ATTRIBUTE_ALIGN(32); // game info send buffer

typedef struct UnkWmSetLifeTimeReq {
    u16 apiid;
    u16 arg0;
    u16 arg1;
    u16 arg2;
    u16 arg3;
} UnkWmSetLifeTimeReq;

u32 func_0207e6b0(UnkWmCallbackFunc callback, const u16* userGameInfo, u16 size, u32 ggid, u16 tgid, u8 attr) {
    u32 result = func_0207c870(2, 7, 9);

    if (result != 0) {
        return result;
    }
    if (userGameInfo == NULL) {
        return 6;
    }
    if (size > 0x70) {
        return 6;
    }
    MI_CpuCopyU16(userGameInfo, data_02116c60, size);
    DC_CleanRange(data_02116c60, size);
    func_0207c670(24, callback);
    result = func_0207c6e0(24, 5, data_02116c60, size, ggid, tgid, attr);
    if (result != 0) {
        return result;
    }
    return 2;
}

u32 func_0207e768(UnkWmCallbackFunc callback, u16 arg0, u16 arg1, u16 arg2, u16 arg3) {
    UnkWmSetLifeTimeReq req;
    UnkWmArm9Buf* p = func_0207c7fc();
    u32 result = func_0207c870(1, 2);

    if (result != 0) {
        return result;
    }
    func_0207c670(30, callback);
    req.apiid = 30;
    req.arg0 = arg0;
    req.arg1 = arg1;
    req.arg2 = arg2;
    req.arg3 = arg3;
    result = func_0207c78c(&req, sizeof(UnkWmSetLifeTimeReq));
    if (result != 0) {
        return result;
    }
    return 2;
}
