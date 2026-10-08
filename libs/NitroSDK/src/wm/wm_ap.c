#include "wm_internal.h"

typedef struct UnkWmParentParam {
    u16* userGameInfo;       // 0x00
    u16 userGameInfoLength;  // 0x04
    u8 unk_06[0xe];
    u16 KS_Flag;             // 0x14
    u8 unk_16[2];
    u16 beaconPeriod;        // 0x18
    u8 unk_1a[0x18];
    u16 channel;             // 0x32
    u16 parentMaxSize;       // 0x34
    u16 childMaxSize;        // 0x36
    u8 unk_38[8];
} UnkWmParentParam;

u32 func_0207d268(UnkWmCallbackFunc callback, UnkWmParentParam* param) {
    u32 result = func_0207c870(1, 2);

    if (result != 0) {
        return result;
    }
    if (param == NULL) {
        return 6;
    }
    if (param->userGameInfoLength != 0 && param->userGameInfo == NULL) {
        return 6;
    }
    if (param->parentMaxSize + (param->KS_Flag ? 42 : 0) > 512 ||
        param->childMaxSize + (param->KS_Flag ? 6 : 0) > 512) {
        return 6;
    }

    func_0207d344(param);
    func_0207c670(7, callback);
    DC_CleanRange(param, sizeof(UnkWmParentParam));
    if (param->userGameInfoLength != 0) {
        DC_CleanRange(param->userGameInfo, param->userGameInfoLength);
    }
    result = func_0207c6e0(7, 1, param);
    if (result != 0) {
        return result;
    }
    return 2;
}

BOOL func_0207d344(void* param_) {
    UnkWmParentParam* param = (UnkWmParentParam*)param_;

    if (param->userGameInfoLength > 0x70) {
        return FALSE;
    }
    if (param->beaconPeriod < 10 || param->beaconPeriod > 1000) {
        return FALSE;
    }
    if (param->channel < 1 || param->channel > 14) {
        return FALSE;
    }
    return TRUE;
}

u32 func_0207d394(UnkWmCallbackFunc callback, BOOL powerSave) {
    UnkWmArm9Buf* p;
    u32 result = func_0207c870(1, 2);

    if (result != 0) {
        return result;
    }
    p = func_0207c7fc();
    p->myAid = 0;
    p->connectedAidBitmap = 0;
    func_0207c670(8, callback);
    result = func_0207c6e0(8, 1, powerSave);
    if (result != 0) {
        return result;
    }
    return 2;
}

u32 func_0207d3f0(UnkWmCallbackFunc callback) {
    return func_0207d394(callback, TRUE);
}

u32 func_0207d400(UnkWmCallbackFunc callback) {
    u32 result = func_0207c870(1, 7);

    if (result != 0) {
        return result;
    }
    func_0207c670(9, callback);
    result = func_0207c6e0(9, 0);
    if (result != 0) {
        return result;
    }
    return 2;
}
