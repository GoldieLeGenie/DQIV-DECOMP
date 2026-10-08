#include "wm_internal.h"

u32 func_0207d194(void* buf, UnkWmCallbackFunc callback, u16 dmaNo) {
    UnkWmArm9Buf* p;
    u32 result = func_0207c3f0(buf, dmaNo);

    if (result != 0) {
        return result;
    }
    func_0207c670(0, callback);
    p = func_0207c7fc();
    result = func_0207c6e0(0, 3, p->unk_000, p->status, p->unk_010);
    if (result != 0) {
        return result;
    }
    return 2;
}

u32 func_0207d1f0(UnkWmCallbackFunc callback) {
    u32 result = func_0207c828();

    if (result != 0) {
        return result;
    }
    func_0207c670(1, callback);
    result = func_0207c6e0(1, 0);
    if (result != 0) {
        return result;
    }
    return 2;
}

u32 func_0207d228(UnkWmCallbackFunc callback) {
    u32 result = func_0207c870(1, 2);

    if (result != 0) {
        return result;
    }
    func_0207c670(2, callback);
    result = func_0207c6e0(2, 0);
    if (result != 0) {
        return result;
    }
    return 2;
}
