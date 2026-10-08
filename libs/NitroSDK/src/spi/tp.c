#include "../sdk_internal.h"

typedef void (*UnkTpCallback)(u32 command, u8 result, u16 index);

typedef struct UnkTpData {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} UnkTpData;

typedef union UnkTpRawData {
    struct {
        u32 x : 12;
        u32 y : 12;
        u32 touch : 1;
        u32 validity : 2;
        u32 dummy : 5;
    } e;
    u16 half[2];
    u32 raw;
} UnkTpRawData;

typedef struct UnkTpWork {
    u16 initialized;         // 0x00
    u16 unk_02;
    UnkTpCallback callback;  // 0x04
    UnkTpData sample;        // 0x08
    u16 index;               // 0x10
    u16 unk_12;
    UnkTpData* samplingBufs; // 0x14
    u16 bufSize;             // 0x18
    u8 unk_1a[0x34 - 0x1a];
    u16 unk_34;     // 0x34
    u16 state;      // 0x36
    u16 errorFlags; // 0x38
    u16 busyFlags;  // 0x3a
} UnkTpWork;

UnkTpWork data_02116104;

#define TP_RAW_DATA ((vu16*)0x027fffaa)

void func_0207b488(u32 tag, u32 data, BOOL err) {
    u16 result = (u16)data;
    u32 tpResult;
    u16 command = (u16)((result & 0x7f00) >> 8);

    if (err) {
        data_02116104.errorFlags |= 1 << command;
        if (data_02116104.callback) {
            data_02116104.callback(command, 4, 0);
        }
        return;
    }

    if (command == 0x10) {
        UnkTpRawData raw;
        UnkTpData* buf;

        data_02116104.index++;
        if (data_02116104.index >= data_02116104.bufSize) {
            data_02116104.index = 0;
        }
        raw.half[0] = TP_RAW_DATA[0];
        raw.half[1] = TP_RAW_DATA[1];
        buf = &data_02116104.samplingBufs[data_02116104.index];
        buf->x = raw.e.x;
        buf->y = raw.e.y;
        buf->touch = (u8)raw.e.touch;
        buf->validity = (u8)raw.e.validity;
        if (data_02116104.callback) {
            data_02116104.callback(command, 0, (u8)data_02116104.index);
        }
        return;
    }

    if (!(data & 0x1000000)) {
        return;
    }

    switch ((u8)result) {
    case 0:
        switch (command) {
        case 0: {
            UnkTpRawData raw;
            raw.half[0] = TP_RAW_DATA[0];
            raw.half[1] = TP_RAW_DATA[1];
            data_02116104.sample.x = raw.e.x;
            data_02116104.sample.y = raw.e.y;
            data_02116104.sample.touch = (u8)raw.e.touch;
            data_02116104.sample.validity = (u8)raw.e.validity;
            data_02116104.state = 0;
            break;
        }
        case 1:
            data_02116104.state = 2;
            break;
        case 2:
            data_02116104.state = 0;
            break;
        }
        data_02116104.busyFlags &= ~(1 << command);
        if (data_02116104.callback) {
            data_02116104.callback(command, 0, 0);
        }
        return;
    case 4:
        tpResult = 3;
        break;
    case 2:
        tpResult = 1;
        break;
    case 3:
        tpResult = 2;
        break;
    default:
        goto terminate;
    }

    data_02116104.errorFlags |= 1 << command;
    data_02116104.busyFlags &= ~(1 << command);
    if (data_02116104.callback) {
        data_02116104.callback(command, (u8)tpResult, 0);
    }
    return;

terminate:
    OS_Terminate();
}

void func_0207b708(void) {
    if (data_02116104.initialized) {
        return;
    }
    data_02116104.initialized = TRUE;
    func_0207a074();

    data_02116104.index = 0;
    data_02116104.callback = NULL;
    data_02116104.samplingBufs = NULL;
    data_02116104.state = 0;
    data_02116104.unk_34 = 0;
    data_02116104.busyFlags = 0;
    data_02116104.errorFlags = 0;

    while (!func_0207a1cc(6, 1)) {
    }
    func_0207a180(6, func_0207b488);
}
