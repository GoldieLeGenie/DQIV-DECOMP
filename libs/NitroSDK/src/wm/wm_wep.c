#include "wm_internal.h"

u32 func_0207e63c(UnkWmCallbackFunc callback, u16 wepMode, const u16* wepKey) {
    u32 result = func_0207c828();

    if (result != 0) {
        return result;
    }
    if (wepMode > 3) {
        return 6;
    }
    if (wepMode != 0) {
        if (wepKey == NULL) {
            return 6;
        }
        DC_CleanRange((void*)wepKey, 0x50);
    }
    func_0207c670(20, callback);
    result = func_0207c6e0(20, 2, wepMode, wepKey);
    if (result != 0) {
        return result;
    }
    return 2;
}
