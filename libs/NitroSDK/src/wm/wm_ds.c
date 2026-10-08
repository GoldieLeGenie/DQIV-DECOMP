#include "wm_internal.h"

u32 func_0207da94(UnkWmDataSharingInfo* dsInfo, u16 port, u16 aidBitmap, u16 dataLength, BOOL doubleMode) {
    u16 connectedAIDs = 1;
    u16 aid;
    s32 i;
    u32 result = func_0207c870(2, 9, 10);

    if (result != 0) {
        return result;
    }
    if (dsInfo == NULL) {
        return 6;
    }
    if (port >= 16) {
        return 6;
    }
    if (aidBitmap == 0) {
        return 6;
    }

    aid = func_0207cccc();
    if (aid == 0) {
        connectedAIDs = func_0207cd2c();
    }

    MI_CpuFill(0, dsInfo, sizeof(UnkWmDataSharingInfo));
    dsInfo->writeIndex = 0;
    dsInfo->sendIndex = 0;
    dsInfo->readIndex = 0;
    dsInfo->dataLength = dataLength;
    dsInfo->port = port;
    dsInfo->aidBitmap = 0;
    dsInfo->doubleMode = doubleMode ? TRUE : FALSE;
    dsInfo->aidBitmap = (u16)(aidBitmap | (1 << aid));
    {
        u16 num = func_02066df0((u16)(aidBitmap | (1 << aid)));
        dsInfo->stationNumber = num;
        dsInfo->dataSetLength = (u16)(dataLength * num);
    }
    if (dsInfo->dataSetLength > 508) {
        dsInfo->aidBitmap = 0;
        return 6;
    }
    dsInfo->dataSetLength += 4;
    dsInfo->state = 1;

    if (aid == 0) {
        for (i = 0; i < 4; i++) {
            dsInfo->ds[i].aidBitmap = (u16)(dsInfo->aidBitmap & (connectedAIDs | 1));
        }
        func_0207cdb8(port, func_0207e150, dsInfo);

        for (i = 0; i < ((dsInfo->doubleMode == 1) ? 2 : 1); i++) {
            dsInfo->writeIndex = (u16)((dsInfo->writeIndex + 1) & 3);
            result = func_0207d8e8(func_0207e078, dsInfo, (u16*)&dsInfo->ds[i], dsInfo->dataSetLength,
                                   (u16)(dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
            if (result == 7) {
                dsInfo->seqNum[i] = 0xffff;
                dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 1) & 3);
            } else if (result != 0 && result != 2) {
                dsInfo->state = 5;
                return 1;
            }
        }
    } else {
        dsInfo->sendIndex = 3;
        func_0207cdb8(port, func_0207e27c, dsInfo);
    }
    return 0;
}

u32 func_0207dce8(UnkWmDataSharingInfo* dsInfo) {
    if (dsInfo == NULL) {
        return 6;
    }
    if (dsInfo->aidBitmap == 0) {
        return 3;
    }
    func_0207cdb8(dsInfo->port, NULL, NULL);
    dsInfo->aidBitmap = 0;
    dsInfo->state = 0;
    return 0;
}

u32 func_0207dd30(UnkWmDataSharingInfo* dsInfo, const u16* sendData, UnkWmDataSet* receiveData) {
    u32 result;
    u16 aid;
    u16 connectedAIDs;
    u16 state;
    BOOL isNewData;
    BOOL delayed;

    result = func_0207c870(2, 9, 10);
    if (result != 0) {
        return result;
    }
    if (dsInfo == NULL) {
        return 6;
    }
    if (sendData == NULL) {
        return 6;
    }
    if (receiveData == NULL) {
        return 6;
    }

    aid = func_0207cccc();
    if (aid == 0) {
        connectedAIDs = func_0207cd2c();
    }

    state = dsInfo->state;
    if (state == 5) {
        return 1;
    }
    if (state != 1 && state != 4) {
        return 3;
    }

    result = 5;
    if (aid == 0) {
        isNewData = FALSE;
        delayed = FALSE;

        if (state == 4) {
            u16 index;
            u32 ret;

            dsInfo->state = 1;
            index = (u16)((dsInfo->writeIndex + 3) & 3);
            ret = func_0207d8e8(func_0207e078, dsInfo, (u16*)&dsInfo->ds[index], dsInfo->dataSetLength,
                                (u16)(dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
            if (ret == 7) {
                dsInfo->seqNum[index] = 0xffff;
                dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 1) & 3);
            } else if (ret != 0 && ret != 2) {
                dsInfo->state = 5;
                return 1;
            }
        }

        if (dsInfo->readIndex != dsInfo->sendIndex) {
            dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            MI_CpuCopyU16(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(UnkWmDataSet));
            isNewData = TRUE;
            result = 0;
            dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
            dsInfo->readIndex = (u16)((dsInfo->readIndex + 1) & 3);
            if (dsInfo->doubleMode == FALSE && connectedAIDs != 0 &&
                dsInfo->ds[dsInfo->writeIndex].aidBitmap == 1) {
                delayed = TRUE;
            } else {
                delayed = FALSE;
            }
        }

        func_0207e43c(dsInfo, FALSE);
        if (isNewData) {
            func_0207e370(dsInfo, 0, (u16*)sendData);
            if (dsInfo->doubleMode == FALSE) {
                func_0207e43c(dsInfo, delayed);
            }
        }
    } else {
        isNewData = FALSE;
        if (state == 4) {
            dsInfo->state = 1;
            isNewData = TRUE;
        } else if (dsInfo->readIndex != dsInfo->writeIndex) {
            if (!(dsInfo->ds[dsInfo->readIndex].aidBitmap & 1)) {
                dsInfo->ds[dsInfo->readIndex].aidBitmap |= 1;
            } else {
                MI_CpuCopyU16(&dsInfo->ds[dsInfo->readIndex], receiveData, sizeof(UnkWmDataSet));
                isNewData = TRUE;
                result = 0;
                dsInfo->currentSeqNum = dsInfo->seqNum[dsInfo->readIndex];
                dsInfo->readIndex = (u16)((dsInfo->readIndex + 1) & 3);
            }
        }

        if (isNewData) {
            u32 ret;
            UnkWmDataSet* ds = &dsInfo->ds[dsInfo->sendIndex];

            MI_CpuCopyU16(sendData, ds->childData, dsInfo->dataLength);
            ret = func_0207d8e8(func_0207e078, dsInfo, ds->childData, dsInfo->dataLength, dsInfo->aidBitmap,
                                dsInfo->port, 1);
            dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 1) & 3);
            if (ret != 2 && ret != 0) {
                dsInfo->state = 5;
                result = 1;
            }
        }
    }
    return result;
}

void func_0207e078(void* arg) {
    UnkWmPortSendCallback* cb = (UnkWmPortSendCallback*)arg;
    UnkWmArm9Buf* p = func_0207c7fc();
    UnkWmCallbackFunc callback = p->portCallbackTable[cb->port];
    UnkWmDataSharingInfo* dsInfo = (UnkWmDataSharingInfo*)p->portCallbackArgument[cb->port];
    u16 aid;

    if (callback != func_0207e150 && callback != func_0207e27c) {
        return;
    }
    if (dsInfo == NULL) {
        return;
    }
    if (dsInfo != cb->arg) {
        return;
    }

    aid = func_0207cccc();
    if (cb->errcode == 0) {
        if (aid != 0) {
            return;
        }
        dsInfo->seqNum[dsInfo->sendIndex] = (u16)(cb->seqNo >> 1);
        dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 1) & 3);
    } else if (cb->errcode == 10) {
        if (aid != 0) {
            dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 3) & 3);
        }
        dsInfo->state = 4;
    } else {
        dsInfo->state = 5;
    }
}

void func_0207e150(void* arg) {
    UnkWmPortRecvCallback* cb = (UnkWmPortRecvCallback*)arg;
    UnkWmDataSharingInfo* dsInfo = (UnkWmDataSharingInfo*)cb->arg;

    if (dsInfo == NULL) {
        return;
    }
    if (cb->errcode == 0) {
    switch (cb->state) {
    case 0x15:
        func_0207e370(dsInfo, cb->aid, cb->data);
        func_0207e43c(dsInfo, FALSE);
        break;
    case 7:
        func_0207e43c(dsInfo, FALSE);
        break;
    case 9:
    case 0x1a: {
        u16 aid = cb->aid;
        u32 aidBit = 1U << aid;
        u32 enabled = OS_DisableIRQ();
        u16 index = dsInfo->writeIndex;

        dsInfo->ds[index].aidBitmap &= ~aidBit;
        if (dsInfo->doubleMode == TRUE) {
            dsInfo->ds[(u16)((index + 1) & 3)].aidBitmap &= ~aidBit;
        }
        OS_RestoreIRQ(enabled);

        func_0207e43c(dsInfo, FALSE);
        if (dsInfo->doubleMode == TRUE) {
            func_0207e43c(dsInfo, FALSE);
        }
        break;
    }
    case 0x19:
        break;
    }
    } else {
        dsInfo->state = 5;
    }
}

void func_0207e27c(void* arg) {
    UnkWmPortRecvCallback* cb = (UnkWmPortRecvCallback*)arg;
    UnkWmDataSharingInfo* dsInfo = (UnkWmDataSharingInfo*)cb->arg;

    if (dsInfo == NULL) {
        return;
    }
    if (cb->errcode == 0) {
    switch (cb->state) {
    case 0x15: {
        u16 length;
        u16 aidBitmap;
        u16* data;
        u16 aid;

        data = cb->data;
        length = cb->length;
        aidBitmap = data[0];
        aid = func_0207cccc();

        if (length != dsInfo->dataSetLength) {
            if (length > 512) {
                length = 512;
            }
        }
        if (length < 4) {
            return;
        }
        if (!(aidBitmap & (1 << aid))) {
            return;
        }
        MI_CpuCopyU16(data, &dsInfo->ds[dsInfo->writeIndex], length);
        dsInfo->seqNum[dsInfo->writeIndex] = (u16)(cb->seqNo >> 1);
        dsInfo->writeIndex = (u16)((dsInfo->writeIndex + 1) & 3);
        break;
    }
    case 7:
    case 9:
    case 0x19:
    case 0x1a:
        break;
    }
    } else {
        dsInfo->state = 5;
    }
}

void func_0207e370(UnkWmDataSharingInfo* dsInfo, u16 aid, u16* data) {
    u16 aidBit = (u16)(1 << aid);
    u16 index;
    u32 enabled;

    if (!(dsInfo->aidBitmap & aidBit)) {
        return;
    }
    index = dsInfo->writeIndex;
    if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
        if (dsInfo->doubleMode != TRUE) {
            return;
        }
        index = (u16)((index + 1) & 3);
        if (!(dsInfo->ds[index].aidBitmap & aidBit)) {
            return;
        }
    }

    {
        u16* buf = func_0207e5e4(dsInfo, dsInfo->aidBitmap, dsInfo->ds[index].data, aid);
        if (data != NULL) {
            MI_CpuCopyU16(data, buf, dsInfo->dataLength);
        } else {
            MI_CpuFillU16(0, buf, dsInfo->dataLength);
        }
    }

    enabled = OS_DisableIRQ();
    dsInfo->ds[index].aidBitmap &= ~aidBit;
    dsInfo->ds[index].receivedBitmap |= aidBit;
    OS_RestoreIRQ(enabled);
}

void func_0207e43c(UnkWmDataSharingInfo* dsInfo, BOOL delayed) {
    u32 enabled = OS_DisableIRQ();

    if (dsInfo->ds[dsInfo->writeIndex].aidBitmap == 0) {
        u16 connectedAIDs = func_0207cd2c();
        u16 oldWI = dsInfo->writeIndex;
        u16 nextWI = (u16)((oldWI + 1) & 3);
        u16 newWI;
        u32 result;

        if (dsInfo->doubleMode == TRUE) {
            newWI = (u16)((nextWI + 1) & 3);
        } else {
            newWI = nextWI;
        }
        MI_CpuFillU16(0, &dsInfo->ds[newWI], sizeof(UnkWmDataSet));
        dsInfo->ds[newWI].aidBitmap = (u16)(dsInfo->aidBitmap & (connectedAIDs | 1));
        dsInfo->writeIndex = nextWI;
        dsInfo->ds[oldWI].aidBitmap = dsInfo->aidBitmap;
        if (delayed == TRUE) {
            dsInfo->ds[oldWI].aidBitmap &= ~1;
        }
        OS_RestoreIRQ(enabled);

        result = func_0207d8e8(func_0207e078, dsInfo, (u16*)&dsInfo->ds[oldWI], dsInfo->dataSetLength,
                               (u16)(dsInfo->aidBitmap & connectedAIDs), dsInfo->port, 1);
        if (result == 7) {
            dsInfo->seqNum[oldWI] = 0xffff;
            dsInfo->sendIndex = (u16)((dsInfo->sendIndex + 1) & 3);
        } else if (result != 0 && result != 2) {
            dsInfo->state = 5;
        }
    } else {
        OS_RestoreIRQ(enabled);
    }
}

u16* func_0207e590(UnkWmDataSharingInfo* dsInfo, UnkWmDataSet* receiveData, u16 aid) {
    u16 aidBitmap = receiveData->aidBitmap;
    u16 receivedBitmap = receiveData->receivedBitmap;
    u32 aidBit = 1U << aid;

    if (dsInfo == NULL) {
        return NULL;
    }
    if (receiveData == NULL) {
        return NULL;
    }
    if (!(aidBitmap & aidBit)) {
        return NULL;
    }
    if (!(receivedBitmap & aidBit)) {
        return NULL;
    }
    return func_0207e5e4(dsInfo, aidBitmap, receiveData->data, aid);
}

u16* func_0207e5e4(UnkWmDataSharingInfo* dsInfo, u32 aidBitmap, u16* data, u32 aid) {
    u32 count = func_02066df0(aidBitmap & ((1 << aid) - 1));
    return (u16*)((u8*)data + dsInfo->dataLength * count);
}

u32 func_0207e614(UnkWmDataSharingInfo* dsInfo, u16 port) {
    return func_0207da94(dsInfo, port, 0xffff, 2, TRUE);
}

u32 func_0207e630(UnkWmDataSharingInfo* dsInfo) {
    return func_0207dce8(dsInfo);
}
