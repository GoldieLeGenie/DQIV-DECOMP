#include "fs_internal.h"

BOOL data_0210cde0; /* file system initialized flag */

void func_02060ddc(u32 dmaNo) {
    if (data_0210cde0 == FALSE) {
        data_0210cde0 = TRUE;
        FSi_InitRom(dmaNo);
    }
}

void func_02060e04(FS_File* file) {
    file->link.prev   = NULL;
    file->link.next   = NULL;
    file->unk_18.tail = NULL;
    file->unk_18.head = NULL;
    file->record      = NULL;
    file->unk_10      = 14;
    file->status      = 0;
}

BOOL func_02060e2c(FS_File* file, const char* path, FS_FileIdentifier* iden, FS_FilePosition* dirPosition) {
    FS_FilePosition position;

    if (*(u8*)path == '/' || *(u8*)path == '\\') {
        position.record   = data_0210cdd4.record;
        position.id       = 0;
        position.position = 0;
        position.index    = 0;
        path++;
    } else {
        s32 idx;
        position = data_0210cdd4;

        for (idx = 0; idx <= 3; idx++) {
            u8 nextChar = *(u8*)(path + idx);

            if (nextChar == 0 || nextChar == '/' || nextChar == '\\') {
                break;
            } else if (nextChar == ':') {
                FS_Record* rec = func_02060ab0(path, idx);

                if (rec == NULL) {
                    return FALSE;
                }
                if (FS_IsRecordLoaded(rec) == FALSE) {
                    return FALSE;
                }
                position.record   = rec;
                position.position = 0;
                position.index    = 0;
                position.id       = 0;
                path += idx + 1;
                if (*(u8*)path == '/' || *(u8*)path == '\\') {
                    path++;
                }
                break;
            }
        }
    }

    file->record                        = position.record;
    file->methodArgs.normalize.path     = path;
    file->methodArgs.normalize.position = position;

    if (dirPosition != NULL) {
        file->methodArgs.normalize.isDirectory        = TRUE;
        file->methodArgs.normalize.response.directory = dirPosition;
    } else {
        file->methodArgs.normalize.isDirectory   = FALSE;
        file->methodArgs.normalize.response.file = iden;
    }

    return func_020608e0(file, 4);
}

s32 func_02060f70(FS_File* file, void* dest, s32 size, BOOL async) {
    s32 currentPos    = (s32)file->currentPosition;
    s32 remainingSize = file->endPosition - currentPos;
    u32 sizeExpected  = (u32)size;

    if (size > remainingSize) {
        size = remainingSize;
    }

    if (size < 0) {
        size = 0;
    }

    file->methodArgs.read.dest         = dest;
    file->methodArgs.read.sizeExpected = sizeExpected;
    file->methodArgs.read.sizeActual   = size;

    if (async == FALSE) {
        file->status |= 4;
    }

    func_020608e0(file, 0);

    if (async == FALSE) {
        if (func_02061168(file)) {
            size = file->currentPosition - currentPos;
        } else {
            size = -1;
        }
    }

    return size;
}

BOOL func_02060fec(FS_FileIdentifier* iden, const char* path) {
    FS_File file;

    func_02060e04(&file);
    return func_02060e2c(&file, path, iden, NULL) != FALSE;
}

BOOL func_0206102c(FS_File* file, FS_Record* record, u32 startPos, u32 endPos, u32 fileIdx) {
    file->record                         = record;
    file->methodArgs.openImmediate.idx   = fileIdx;
    file->methodArgs.openImmediate.start = startPos;
    file->methodArgs.openImmediate.end   = endPos;
    if (func_020608e0(file, 7) == FALSE) {
        return FALSE;
    }

    file->status |= 0x10;
    file->status &= ~0x20;

    return TRUE;
}

BOOL func_02061074(FS_File* file, FS_FileIdentifier iden) {
    if (iden.record == NULL) {
        return FALSE;
    }

    file->record                     = iden.record;
    file->methodArgs.openFromId.iden = iden;

    if (func_020608e0(file, 6) == FALSE) {
        return FALSE;
    }

    file->status |= 0x10;
    file->status &= ~0x20;

    return TRUE;
}

BOOL func_020610e4(FS_File* file, const char* path) {
    FS_FileIdentifier iden;

    return func_02060fec(&iden, path) != FALSE && func_02061074(file, iden) != FALSE;
}

BOOL func_0206112c(FS_File* file) {
    if (func_020608e0(file, 8) == FALSE) {
        return FALSE;
    }

    file->record = NULL;
    file->unk_10 = 14;
    file->status &= 0xFFFFFFCF;
    return TRUE;
}

BOOL func_02061168(FS_File* file) {
    BOOL cond = FALSE;
    ENTER_CRITICAL_SECTION();

    if (FS_IsFileBusy(file)) {
        cond = (file->status & 0x44) == 0;

        if (cond) {
            file->status |= 4;
            do {
                OS_PauseThread(&file->unk_18);
            } while ((file->status & 0x40) == 0);
        } else {
            do {
                OS_PauseThread(&file->unk_18);
            } while (FS_IsFileBusy(file));
        }
    }

    LEAVE_CRITICAL_SECTION();

    if (cond) {
        return func_0206089c(file);
    }
    return file->result == 0;
}

void func_02061228(FS_File* file) {
    ENTER_CRITICAL_SECTION();

    if (FS_IsFileBusy(file)) {
        file->status |= 2;
        file->record->flags |= 0x20;
    }
    LEAVE_CRITICAL_SECTION();
}

s32 func_02061270(FS_File* file, void* dest, s32 size) {
    return func_02060f70(file, dest, size, FALSE);
}

BOOL func_02061280(FS_File* file, s32 offset, s32 mode) {
    switch (mode) {
        case 0:
            offset += file->startPosition;
            break;
        case 1:
            offset += file->currentPosition;
            break;
        case 2:
            offset += file->endPosition;
            break;
        default:
            return FALSE;
    }

    if (offset < (s32)file->startPosition) {
        offset = file->startPosition;
    }
    if (offset > (s32)file->endPosition) {
        offset = file->endPosition;
    }
    file->currentPosition = offset;
    return TRUE;
}
