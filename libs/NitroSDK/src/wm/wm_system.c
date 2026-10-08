#include "wm_internal.h"

static u16 data_021161c0;
static UnkWmArm9Buf* data_021161c4;
static UnkMessageQueue data_021161c8;
static void* data_021161e8[10];
static UnkWmPortRecvCallback data_02116210;
static u16 data_02116260[10][0x80] __attribute__((aligned(32)));

#define WM_FIFO_FLAG (*(u16*)0x027fff96)

u32 func_0207c3f0(void* buf, u16 dmaNo) {
    u32 result = func_0207c41c(buf, dmaNo, 0xf00);

    if (result != 0) {
        return result;
    }
    data_021161c4->unk_016 = 0;
    return result;
}

u32 func_0207c41c(void* buf, u16 dmaNo, u32 size) {
    u32 enabled = OS_DisableIRQ();
    s32 i;

    if (data_021161c0) {
        OS_RestoreIRQ(enabled);
        return 3;
    }
    if (buf == NULL) {
        OS_RestoreIRQ(enabled);
        return 6;
    }
    if (dmaNo > 3) {
        OS_RestoreIRQ(enabled);
        return 6;
    }
    if ((u32)buf & 0x1f) {
        OS_RestoreIRQ(enabled);
        return 6;
    }

    func_0207a074();
    if (!func_0207a1cc(10, 1)) {
        OS_RestoreIRQ(enabled);
        return 4;
    }

    DC_InvalidateRange(buf, size);
    func_020670cc(dmaNo, buf, 0, size);

    data_021161c4 = (UnkWmArm9Buf*)buf;
    data_021161c4->unk_000 = (u8*)buf + 0x200;
    data_021161c4->status = (UnkWmStatus*)((u8*)data_021161c4->unk_000 + 0x300);
    data_021161c4->unk_00c = (u8*)data_021161c4->status + 0x800;
    data_021161c4->unk_010 = (u8*)data_021161c4->unk_00c + 0x100;

    func_0207ccb0();

    data_021161c4->dmaNo = dmaNo;
    data_021161c4->connectedAidBitmap = 0;
    data_021161c4->myAid = 0;
    {
        s32 j;
        for (j = 0; j < 16; j++) {
            data_021161c4->portCallbackTable[j] = NULL;
            data_021161c4->portCallbackArgument[j] = NULL;
        }
    }

    func_02078d60(&data_021161c8, data_021161e8, 10);
    for (i = 0; i < 10; i++) {
        data_02116260[i][0] = 0x8000;
        DC_CleanRange(data_02116260[i], 2);
        func_02078d88(&data_021161c8, data_02116260[i], 1);
    }

    func_0207a180(10, (PxiCallback)func_0207c904);
    data_021161c0 = TRUE;
    OS_RestoreIRQ(enabled);
    return 0;
}

u32 func_0207c600(void) {
    u32 result;
    u32 enabled = OS_DisableIRQ();

    if (func_0207c80c() != 0) {
        OS_RestoreIRQ(enabled);
        return 3;
    }
    result = func_0207c870(1, 0);
    if (result != 0) {
        return result;
    }

    func_0207ccb0();
    func_0207a180(10, NULL);
    data_021161c4 = NULL;
    data_021161c0 = FALSE;
    OS_RestoreIRQ(enabled);
    return 0;
}

void func_0207c670(u32 id, UnkWmCallbackFunc callback) {
    data_021161c4->callbackTable[id] = callback;
}

u32* func_0207c688(void) {
    u32* buf;

    if (!func_02078e1c(&data_021161c8, &buf, 0)) {
        return NULL;
    }
    DC_InvalidateRange(buf, 2);
    if (*(u16*)buf & 0x8000) {
        return buf;
    }
    func_02078ec0(&data_021161c8, buf, 1);
    return NULL;
}

u32 func_0207c6e0(u16 id, u16 paramNum, ...) {
    va_list args;
    s32 i;
    s32 result;
    u32* buf = func_0207c688();

    if (buf == NULL) {
        return 8;
    }
    *(u16*)buf = id;

    va_start(args, paramNum);
    for (i = 0; i < paramNum; i++) {
        buf[i + 1] = va_arg(args, u32);
    }
    va_end(args);

    DC_CleanRange(buf, 0x100);
    result = PXI_SendWordByFifo(10, (u32)buf, FALSE);
    func_02078d88(&data_021161c8, buf, 1);
    if (result < 0) {
        return 8;
    }
    return 2;
}

u32 func_0207c78c(void* data, u32 length) {
    s32 result;
    u32* buf = func_0207c688();

    if (buf == NULL) {
        return 8;
    }
    MI_CpuCopyU8(data, buf, length);
    DC_CleanRange(buf, length);
    result = PXI_SendWordByFifo(10, (u32)buf, FALSE);
    func_02078d88(&data_021161c8, buf, 1);
    if (result < 0) {
        return 8;
    }
    return 2;
}

UnkWmArm9Buf* func_0207c7fc(void) {
    return data_021161c4;
}

u32 func_0207c80c(void) {
    if (data_021161c0) {
        return 0;
    }
    return 3;
}

u32 func_0207c828(void) {
    u32 result = func_0207c80c();

    if (result != 0) {
        return result;
    }
    DC_InvalidateRange(&data_021161c4->status->state, 2);
    if (data_021161c4->status->state <= 1) {
        return 3;
    }
    return 0;
}

u32 func_0207c870(s32 paramNum, ...) {
    u32 result;
    u16 now;
    va_list args;

    result = func_0207c80c();
    if (result != 0) {
        return result;
    }
    DC_InvalidateRange(&data_021161c4->status->state, 2);
    now = data_021161c4->status->state;

    result = 3;
    va_start(args, paramNum);
    for (; paramNum; paramNum--) {
        if (va_arg(args, u32) == now) {
            result = 0;
        }
    }
    va_end(args);
    return result;
}

void func_0207c904(u32 tag, u32 data, BOOL err) {
    UnkWmArm9Buf* p = data_021161c4;
    UnkWmCallback* cb = (UnkWmCallback*)data;

    if (err) {
        return;
    }

    DC_InvalidateRange(p->unk_010, 0x100);
    if (p->unk_016 == 0) {
        DC_InvalidateRange(p->status, 0x800);
    }
    if ((void*)cb != p->unk_010) {
        DC_InvalidateRange(cb, 0x100);
    }

    if (cb->apiid >= 0x2c) {
        if (cb->apiid == 0x80) {
            if (cb->errcode == 0x13) {
                OS_Terminate();
            }
            if (p->indCallback) {
                p->indCallback(cb);
            }
        } else if (cb->apiid == 0x82) {
            UnkWmPortRecvCallback* cbPort = (UnkWmPortRecvCallback*)cb;
            if (p->portCallbackTable[cbPort->port]) {
                cbPort->arg = p->portCallbackArgument[cbPort->port];
                cbPort->connectedAidBitmap = (u16)p->connectedAidBitmap;
                DC_InvalidateRange(cbPort->recvBuf, p->status->unk_072);
                p->portCallbackTable[cbPort->port](cb);
            }
        } else if (cb->apiid == 0x81) {
            UnkWmUnknownCallback* cbUnknown = (UnkWmUnknownCallback*)cb;
            cb->apiid = 0xf;
            if (cbUnknown->callback) {
                cbUnknown->callback(cb);
            }
        }
    } else {
        if (cb->apiid == 0xe) {
            UnkWmStartMPCallback* cbStartMP = (UnkWmStartMPCallback*)cb;
            if ((cbStartMP->state == 11 || cbStartMP->state == 12) && cb->errcode == 0) {
                DC_InvalidateRange(cbStartMP->recvBuf, p->status->unk_072);
            }
        }

        if (cb->apiid == 2 && cb->errcode == 0) {
            UnkWmCallbackFunc callback = p->callbackTable[cb->apiid];
            func_0207c600();
            if (callback) {
                callback(cb);
            }
            return;
        }

        if (p->callbackTable[cb->apiid]) {
            p->callbackTable[cb->apiid](cb);
            if (!data_021161c0) {
                return;
            }
        }

        if (cb->apiid == 8 || cb->apiid == 0xc) {
            u16 state;
            u16 aid;
            u16 myAid;
            u16 reason;
            u8* macAddress;
            u8* ssid;
            u16 parentSize;
            u16 childSize;

            if (cb->apiid == 8) {
                UnkWmStartParentCallback* cbParent = (UnkWmStartParentCallback*)cb;
                macAddress = cbParent->macAddress;
                state = cbParent->state;
                aid = cbParent->aid;
                reason = cbParent->reason;
                ssid = cbParent->ssid;
                myAid = 0;
                parentSize = cbParent->parentSize;
                childSize = cbParent->childSize;
            } else if (cb->apiid == 0xc) {
                UnkWmStartConnectCallback* cbConnect = (UnkWmStartConnectCallback*)cb;
                state = cbConnect->state;
                myAid = cbConnect->aid;
                reason = cbConnect->reason;
                aid = 0;
                ssid = NULL;
                macAddress = cbConnect->macAddress;
                parentSize = cbConnect->parentSize;
                childSize = cbConnect->childSize;
            }

            if (state == 7 || state == 9 || state == 0x1a) {
                u16 i;

                if (state == 7) {
                    p->connectedAidBitmap |= (1 << aid);
                } else {
                    p->connectedAidBitmap &= ~(1 << aid);
                }
                p->myAid = myAid;

                MI_CpuSet(&data_02116210, 0, sizeof(UnkWmPortRecvCallback));
                data_02116210.apiid = 0x82;
                data_02116210.errcode = 0;
                data_02116210.state = state;
                data_02116210.recvBuf = NULL;
                data_02116210.data = NULL;
                data_02116210.length = 0;
                data_02116210.aid = aid;
                data_02116210.myAid = myAid;
                data_02116210.connectedAidBitmap = (u16)p->connectedAidBitmap;
                data_02116210.seqNo = 0xffff;
                data_02116210.reason = reason;
                MI_CpuCopyU8(macAddress, data_02116210.macAddress, 6);
                if (ssid) {
                    MI_CpuCopyU16(ssid, data_02116210.ssid, 24);
                } else {
                    MI_CpuFillU16(0, data_02116210.ssid, 24);
                }
                data_02116210.maxSendDataSize = (myAid == 0) ? parentSize : childSize;
                data_02116210.maxRecvDataSize = (myAid == 0) ? childSize : parentSize;

                for (i = 0; i < 16; i++) {
                    data_02116210.port = i;
                    if (p->portCallbackTable[i]) {
                        data_02116210.arg = p->portCallbackArgument[i];
                        p->portCallbackTable[i](&data_02116210);
                    }
                }
            }
        }
    }

    DC_InvalidateRange(p->unk_010, 0x100);
    func_0207ccb0();
    if ((void*)cb != p->unk_010) {
        cb->apiid |= 0x8000;
        DC_CleanRange(cb, 0x100);
    }
}

void func_0207ccb0(void) {
    u16* flag = &WM_FIFO_FLAG;

    if (*flag & 1) {
        *flag &= ~1;
    }
}

u16 func_0207cccc(void) {
    u16 aid;
    u32 enabled = OS_DisableIRQ();

    if (data_021161c4 != NULL) {
        aid = data_021161c4->myAid;
    } else {
        aid = 0;
    }
    OS_RestoreIRQ(enabled);
    return aid;
}

u16 func_0207ccfc(void) {
    u32 bitmap;
    u32 enabled = OS_DisableIRQ();

    if (data_021161c4 != NULL) {
        bitmap = data_021161c4->connectedAidBitmap;
    } else {
        bitmap = 0;
    }
    OS_RestoreIRQ(enabled);
    return (u16)bitmap;
}

u16 func_0207cd2c(void) {
    u16 bitmap;
    u32 enabled = OS_DisableIRQ();

    if (data_021161c4 == NULL) {
        bitmap = 0;
    } else {
        UnkWmStatus* status = data_021161c4->status;
        DC_InvalidateRange(&status->unk_086, 2);
        bitmap = status->unk_086;
    }
    OS_RestoreIRQ(enabled);
    return bitmap;
}

u32 func_0207cd74(UnkWmCallbackFunc callback) {
    u32 result;
    u32 enabled = OS_DisableIRQ();

    result = func_0207c80c();
    if (result != 0) {
        OS_RestoreIRQ(enabled);
        return result;
    }
    func_0207c7fc()->indCallback = callback;
    OS_RestoreIRQ(enabled);
    return 0;
}

u32 func_0207cdb8(u16 port, UnkWmCallbackFunc callback, void* arg) {
    u32 enabled;
    u32 result;
    UnkWmArm9Buf* p;
    UnkWmPortRecvCallback cbParam;

    if (callback) {
        MI_CpuSet(&cbParam, 0, sizeof(UnkWmPortRecvCallback));
        cbParam.apiid = 0x82;
        cbParam.errcode = 0;
        cbParam.state = 0x19;
        cbParam.port = port;
        cbParam.recvBuf = NULL;
        cbParam.data = NULL;
        cbParam.length = 0;
        cbParam.seqNo = 0xffff;
        cbParam.arg = arg;
        cbParam.aid = 0;
        func_02079e24(cbParam.macAddress);
    }

    enabled = OS_DisableIRQ();
    result = func_0207c80c();
    if (result != 0) {
        OS_RestoreIRQ(enabled);
        return result;
    }
    p = func_0207c7fc();
    p->portCallbackTable[port] = callback;
    p->portCallbackArgument[port] = arg;
    if (callback) {
        cbParam.connectedAidBitmap = func_0207ccfc();
        cbParam.myAid = func_0207cccc();
        callback(&cbParam);
    }
    OS_RestoreIRQ(enabled);
    return 0;
}

s32 func_0207ce90(void) {
    UnkWmArm9Buf* p = func_0207c7fc();

    if (func_0207c870(2, 7, 8) != 0) {
        return 0;
    }
    DC_InvalidateRange(&p->status->unk_00c, 4);
    if (p->status->unk_00c == 1) {
        return 0;
    }
    DC_InvalidateRange(&p->status->unk_03c, 4);
    return (p->status->unk_03c + 0x1f) & ~0x1f;
}

s32 func_0207cefc(void) {
    UnkWmArm9Buf* p = func_0207c7fc();
    BOOL isParent;
    u32 maxSize;

    if (func_0207c870(2, 7, 8) != 0) {
        return 0;
    }
    DC_InvalidateRange(&p->status->unk_00c, 4);
    if (p->status->unk_00c == 1) {
        return 0;
    }
    DC_InvalidateRange(&p->status->unk_188, 2);
    if (p->status->unk_188 == 0) {
        isParent = TRUE;
    } else {
        isParent = FALSE;
    }
    DC_InvalidateRange(&p->status->unk_03e, 2);
    maxSize = p->status->unk_03e;
    if (isParent == TRUE) {
        DC_InvalidateRange(&p->status->unk_0f8, 2);
        return (((maxSize + 0xc) * p->status->unk_0f8 + 0x29) & ~0x1f) << 1;
    }
    return ((maxSize + 0x51) & ~0x1f) << 1;
}

u16 func_0207cfc0(void) {
    if (func_0207c80c() != 0) {
        return 0x8000;
    }
    return *(u16*)0x027ffcfa;
}

u16 func_0207cfe0(void) {
    UnkWmArm9Buf* p = func_0207c7fc();

    if (func_0207c80c() != 0) {
        return 0;
    }
    DC_InvalidateRange(&p->status->state, 2);
    switch (p->status->state) {
    case 9:
        DC_InvalidateRange(&p->status->unk_182, 2);
        if (p->status->unk_182 == 0) {
            return 0;
        }
    case 10:
    case 11:
        DC_InvalidateRange(&p->status->unk_0bc, 2);
        return p->status->unk_0bc;
    }
    return 0;
}

u16 func_0207d070(void) {
    u8 mac[6];
    u16 sum;
    s32 i;

    func_02079e24(mac);
    for (i = 0, sum = 0; i < 6; i++) {
        sum += mac[i];
    }
    sum += *(vu32*)0x027ffc3c;
    sum *= 7;
    return (u16)(200 + (sum % 20));
}

u16 func_0207d100(void) {
    u8 mac[6];
    u16 sum;
    s32 i;

    func_02079e24(mac);
    for (i = 0, sum = 0; i < 6; i++) {
        sum += mac[i];
    }
    sum += *(vu32*)0x027ffc3c;
    sum *= 13;
    return (u16)(30 + (sum % 10));
}
