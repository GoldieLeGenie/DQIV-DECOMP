#include "fs_internal.h"

#define ALIGN_MASK(align)         ((align) - 1)
#define ALIGN_BYTE(target, align) (((u32)target + ALIGN_MASK(align)) & ~ALIGN_MASK(align))

FS_Record*      data_0210cdd0; /* archive list head */
FS_FilePosition data_0210cdd4; /* current directory */

void func_0205f9bc(FS_File* file, FS_CommandResult result) {
    ENTER_CRITICAL_SECTION();
    FS_FileListCut(&file->link);
    file->link.prev = NULL;
    file->link.next = NULL;
    file->status &= ~0x4F;
    file->result = result;
    OS_UnpauseThread(&file->unk_18);
    LEAVE_CRITICAL_SECTION();
}

FS_CommandResult func_0205fa18(FS_File* file, u32 command) {
    FS_CommandResult ret;
    FS_Record* const record = file->record;
    const int        bit    = (1 << command);

    if (FS_IsFileSynchronous(file)) {
        record->flags |= FS_RECORD_FLAG_SYNC;
    } else {
        record->flags |= FS_RECORD_FLAG_ASYNC;
    }

    if (record->methodFlags & bit) {
        ret = record->methodCB(file, command);
        switch (ret) {
            case FS_RESULT_SUCCESS:
            case FS_RESULT_FAILURE:
            case FS_RESULT_BADCMD:
                file->result = ret;
                break;
            case FS_RESULT_UNKNOWN:
                record->methodFlags &= ~bit;
                ret = 7;
                break;
        }
    } else {
        ret = 7;
    }

    if (ret == 7) {
        ret = data_020b6328[command](file);
    }

    if (ret == FS_RESULT_ASYNC) {
        if (FS_IsFileSynchronous(file)) {
            ENTER_CRITICAL_SECTION();
            while (FSi_IsRecordSync(record)) {
                OS_PauseThread(&record->unk_0C);
            }
            ret = file->result;
            LEAVE_CRITICAL_SECTION();
        }
    } else if (!FS_IsFileSynchronous(file)) {
        record->flags &= ~FS_RECORD_FLAG_ASYNC;
        func_0205f9bc(file, ret);
    } else {
        record->flags &= ~FS_RECORD_FLAG_SYNC;
        file->result = ret;
    }
    return ret;
}

int func_0205fba8(const char* a, const char* b, u32 len) {
    u32 i;
    for (i = 0; i < len; ++i) {
        u32 c = (u32)(*(u8*)(a + i) - 'A');
        u32 d = (u32)(*(u8*)(b + i) - 'A');
        if (c <= 'Z' - 'A') {
            c += 'a' - 'A';
        }
        if (d <= 'Z' - 'A') {
            d += 'a' - 'A';
        }
        if (c != d) {
            return (int)(c - d);
        }
    }
    return 0;
}

FS_CommandResult func_0205fbf8(UnkFsTableCursor* cursor, void* dest, u32 size) {
    FS_Record* const record = cursor->unk_00;
    FS_CommandResult ret;

    record->flags |= FS_RECORD_FLAG_SYNC;
    ret = record->tableCB(record, dest, cursor->unk_04, size);
    switch (ret) {
        case FS_RESULT_SUCCESS:
        case FS_RESULT_FAILURE:
            record->flags &= ~FS_RECORD_FLAG_SYNC;
            break;
        case FS_RESULT_ASYNC: {
            ENTER_CRITICAL_SECTION();
            while (FSi_IsRecordSync(record)) {
                OS_PauseThread(&record->unk_0C);
            }
            LEAVE_CRITICAL_SECTION();
            ret = record->fileList.next->result;
        } break;
    }
    cursor->unk_04 += size;
    return ret;
}

FS_CommandResult func_0205fcb8(UnkFsFile* file, u32 dirId) {
    file->status |= FS_FILE_STATUS_SYNC;
    file->arg.cmd2.unk_30.record   = file->record;
    file->arg.cmd2.unk_30.position = 0;
    file->arg.cmd2.unk_30.index    = 0;
    file->arg.cmd2.unk_30.id       = dirId;
    return func_0205fa18((FS_File*)file, 2);
}

FS_CommandResult func_0205fcec(UnkFsFile* file) {
    FS_Record* const record = file->record;
    const u32        pos    = file->prop.file.unk_2c;
    const u32        len    = file->arg.cmd0.unk_38;
    void* const      dst    = file->arg.cmd0.unk_30;
    file->prop.file.unk_2c += len;
    return record->readCB(record, dst, pos, len);
}

FS_CommandResult func_0205fd18(UnkFsFile* file) {
    FS_Record* const  record = file->record;
    const u32         pos    = file->prop.file.unk_2c;
    const u32         len    = file->arg.cmd1.unk_38;
    const void* const src    = file->arg.cmd1.unk_30;
    file->prop.file.unk_2c += len;
    return record->writeCB(record, src, pos, len);
}

FS_CommandResult func_0205fd44(UnkFsFile* file) {
    FS_Record* const       record = file->record;
    FS_FilePosition* const pos    = &file->arg.cmd2.unk_30;
    FSFntDirectory         entry;
    UnkFsTableCursor       cursor;
    FS_CommandResult       ret;

    cursor.unk_00 = record;
    cursor.unk_04 = record->fntOffset + pos->id * sizeof(entry);
    ret           = func_0205fbf8(&cursor, &entry, sizeof(entry));
    if (ret == FS_RESULT_SUCCESS) {
        file->prop.dir.unk_20 = *pos;
        if (pos->index == 0 && pos->position == 0) {
            file->prop.dir.unk_20.index    = entry.firstFileId;
            file->prop.dir.unk_20.position = record->fntOffset + entry.subtableOffset;
        }
        file->prop.dir.unk_2c = entry.parentId & 0xFFF;
    }
    return ret;
}

FS_CommandResult func_0205fddc(UnkFsFile* file) {
    UnkFsDirEntry* const entry = file->arg.cmd3.unk_30;
    FS_CommandResult     ret;
    UnkFsTableCursor     cursor;
    u8                   len;

    cursor.unk_00 = file->record;
    cursor.unk_04 = file->prop.dir.unk_20.position;
    ret           = func_0205fbf8(&cursor, &len, sizeof(len));
    if (ret != FS_RESULT_SUCCESS) {
        return ret;
    }
    entry->unk_10 = (u32)(len & 0x7F);
    entry->unk_0c = (u32)((len >> 7) & 1);
    if (entry->unk_10 == 0) {
        return FS_RESULT_FAILURE;
    }

    if (!file->arg.cmd3.unk_34) {
        ret = func_0205fbf8(&cursor, entry->unk_14, entry->unk_10);
        if (ret != FS_RESULT_SUCCESS) {
            return ret;
        }
        entry->unk_14[entry->unk_10] = 0;
    } else {
        cursor.unk_04 += entry->unk_10;
    }

    if (entry->unk_0c) {
        u16 id;
        ret = func_0205fbf8(&cursor, &id, sizeof(id));
        if (ret != FS_RESULT_SUCCESS) {
            return ret;
        }
        entry->unk_00.unk_dir.record   = file->record;
        entry->unk_00.unk_dir.id       = (u16)(id & 0x0FFF);
        entry->unk_00.unk_dir.index    = 0;
        entry->unk_00.unk_dir.position = 0;
    } else {
        entry->unk_00.unk_file.record = file->record;
        entry->unk_00.unk_file.fileID = file->prop.dir.unk_20.index;
        ++file->prop.dir.unk_20.index;
    }
    file->prop.dir.unk_20.position = cursor.unk_04;
    return ret;
}

FS_CommandResult func_0205ff08(UnkFsFile* file) {
    const u8*     path   = (const u8*)file->arg.cmd4.unk_3c;
    const BOOL    is_dir = file->arg.cmd4.unk_40;
    UnkFsDirEntry entry;

    func_0205fa18((FS_File*)file, 2);

    while (*path != '\0') {
        u32 c;
        s32 len;

        for (len = 0; c = path[len], FSi_IsPathChar(c); ++len) {
        }
        if (c != '\0' || is_dir) {
            c = TRUE;
        }

        if (len == 0) {
            return FS_RESULT_FAILURE;
        }
        if (*path == '.') {
            if (len == 1) {
                path += 1;
                goto next;
            } else if ((len == 2) & (path[1] == '.')) {
                if (file->prop.dir.unk_20.id != 0) {
                    func_0205fcb8(file, file->prop.dir.unk_2c);
                }
                path += 2;
                goto next;
            }
        }
        if (len > 127) {
            return FS_RESULT_FAILURE;
        }

        file->arg.cmd3.unk_30 = &entry;
        file->arg.cmd3.unk_34 = FALSE;
        for (;;) {
            if (func_0205fa18((FS_File*)file, 3) != FS_RESULT_SUCCESS) {
                return FS_RESULT_FAILURE;
            }
            if (c == entry.unk_0c && len == entry.unk_10 && func_0205fba8((const char*)path, entry.unk_14, (u32)len) == 0) {
                break;
            }
        }

        if (c) {
            file->arg.cmd2.unk_30 = entry.unk_00.unk_dir;
            path += len;
            func_0205fa18((FS_File*)file, 2);
        } else {
            if (is_dir) {
                return FS_RESULT_FAILURE;
            }
            *(FS_FileIdentifier*)file->arg.cmd4.unk_44 = entry.unk_00.unk_file;
            return FS_RESULT_SUCCESS;
        }
    next:
        path += (*path != '\0') ? 1 : 0;
    }

    if (!is_dir) {
        return FS_RESULT_FAILURE;
    }
    *(FS_FilePosition*)file->arg.cmd4.unk_44 = file->prop.dir.unk_20;
    return FS_RESULT_SUCCESS;
}

FS_CommandResult func_020600ec(UnkFsFile* file) {
    FS_Record* const record = file->record;
    UnkFsDirEntry    entry;
    UnkFsFile        tmp;
    u32              file_id;
    u32              pos;
    u32              num_dir;
    u32              dir_id;

    func_02060e04((FS_File*)&tmp);
    tmp.record = file->record;

    if (FSi_IsFileDir(file)) {
        dir_id  = file->prop.dir.unk_20.id;
        file_id = 0x10000;
    } else {
        file_id = file->prop.file.unk_20;
        if (file->arg.cmd5.unk_38 != 0) {
            dir_id = file->arg.cmd5.unk_3a;
        } else {
            pos     = 0;
            num_dir = 0;
            dir_id  = 0x10000;
            do {
                func_0205fcb8(&tmp, pos);
                if (pos == 0) {
                    num_dir = tmp.prop.dir.unk_2c;
                }
                tmp.arg.cmd3.unk_30 = &entry;
                tmp.arg.cmd3.unk_34 = TRUE;
                while (func_0205fa18((FS_File*)&tmp, 3) == FS_RESULT_SUCCESS) {
                    if (!entry.unk_0c && entry.unk_00.unk_file.fileID == file_id) {
                        dir_id = tmp.prop.dir.unk_20.id;
                        break;
                    }
                }
            } while (dir_id == 0x10000 && ++pos < num_dir);
        }
    }

    if (dir_id == 0x10000) {
        file->arg.cmd5.unk_38 = 0;
        return FS_RESULT_FAILURE;
    }

    if (file->arg.cmd5.unk_38 == 0) {
        u32 id;
        u32 total = 0;
        {
            const u32 name = record->name;
            if (name <= 0xFF) {
                total += 1;
            } else if (name <= 0xFF00) {
                total += 2;
            } else {
                total += 3;
            }
        }
        total += 2;
        if (file_id != 0x10000) {
            total += entry.unk_10;
        }
        id = dir_id;
        if (id != 0) {
            func_0205fcb8(&tmp, id);
            do {
                func_0205fcb8(&tmp, tmp.prop.dir.unk_2c);
                tmp.arg.cmd3.unk_30 = &entry;
                tmp.arg.cmd3.unk_34 = TRUE;
                while (func_0205fa18((FS_File*)&tmp, 3) == FS_RESULT_SUCCESS) {
                    if (entry.unk_0c && entry.unk_00.unk_dir.id == id) {
                        total += entry.unk_10 + 1;
                        break;
                    }
                }
                id = tmp.prop.dir.unk_20.id;
            } while (id != 0);
        }
        file->arg.cmd5.unk_38 = (u16)(total + 1);
        file->arg.cmd5.unk_3a = (u16)dir_id;
    }

    {
        u32       total;
        u8* const buf = file->arg.cmd5.unk_30;
        if (buf == NULL) {
            return FS_RESULT_SUCCESS;
        }
        total = file->arg.cmd5.unk_38;
        if (file->arg.cmd5.unk_34 < total) {
            return FS_RESULT_FAILURE;
        }
        {
            u32 pos = 0;
            u32 len = FSi_GetNameLength(record->name);
            MI_CpuCopyU8(record, buf + pos, len);
            pos += len;
            MI_CpuCopyU8(":/", buf + pos, 2);
        }
        func_0205fcb8(&tmp, dir_id);
        if (file_id != 0x10000) {
            u32 n;
            tmp.arg.cmd3.unk_30 = &entry;
            tmp.arg.cmd3.unk_34 = FALSE;
            while (func_0205fa18((FS_File*)&tmp, 3) == FS_RESULT_SUCCESS) {
                if (!entry.unk_0c && entry.unk_00.unk_file.fileID == file_id) {
                    break;
                }
            }
            n = entry.unk_10 + 1;
            MI_CpuCopyU8(entry.unk_14, buf + total - n, n);
            total -= n;
        } else {
            *(buf + total - 1) = 0;
            total -= 1;
        }
        while (dir_id != 0) {
            func_0205fcb8(&tmp, tmp.prop.dir.unk_2c);
            tmp.arg.cmd3.unk_30 = &entry;
            tmp.arg.cmd3.unk_34 = FALSE;
            buf[total - 1] = '/';
            total -= 1;
            while (func_0205fa18((FS_File*)&tmp, 3) == FS_RESULT_SUCCESS) {
                if (entry.unk_0c && entry.unk_00.unk_dir.id == dir_id) {
                    u32 n = entry.unk_10;
                    MI_CpuCopyU8(entry.unk_14, buf + total - n, n);
                    total -= n;
                    break;
                }
            }
            dir_id = tmp.prop.dir.unk_20.id;
        }
    }
    return FS_RESULT_SUCCESS;
}

FS_CommandResult func_02060498(UnkFsFile* file) {
    FS_Record* const record = file->record;
    const u32        index  = file->arg.cmd6.unk_30.fileID;
    u32              pos    = index;
    u32              fat[2];
    UnkFsTableCursor cursor;
    FS_CommandResult ret;

    pos *= 8;
    if (pos >= record->fatSize) {
        return FS_RESULT_FAILURE;
    }
    cursor.unk_00 = record;
    cursor.unk_04 = record->fatOffset + pos;
    ret           = func_0205fbf8(&cursor, fat, sizeof(fat));
    if (ret != FS_RESULT_SUCCESS) {
        return ret;
    }
    file->arg.cmd7.unk_30 = fat[0];
    file->arg.cmd7.unk_34 = fat[1];
    file->arg.cmd7.unk_38 = index;
    return func_0205fa18((FS_File*)file, 7);
}

FS_CommandResult func_02060518(UnkFsFile* file) {
    file->prop.file.unk_24 = file->arg.cmd7.unk_30;
    file->prop.file.unk_2c = file->arg.cmd7.unk_30;
    file->prop.file.unk_28 = file->arg.cmd7.unk_34;
    file->prop.file.unk_20 = file->arg.cmd7.unk_38;
    return FS_RESULT_SUCCESS;
}

FS_CommandResult func_02060540(UnkFsFile* file) {
    return FS_RESULT_SUCCESS;
}

/* default archive command handlers, indexed by command number (used by func_0205fa18) */
const UnkFsCommandFunc data_020b6328[9] = {
    (UnkFsCommandFunc)func_0205fcec, (UnkFsCommandFunc)func_0205fd18, (UnkFsCommandFunc)func_0205fd44,
    (UnkFsCommandFunc)func_0205fddc, (UnkFsCommandFunc)func_0205ff08, (UnkFsCommandFunc)func_020600ec,
    (UnkFsCommandFunc)func_02060498, (UnkFsCommandFunc)func_02060518, (UnkFsCommandFunc)func_02060540,
};

u32 func_02060548(const char* name, s32 nameLen) {
    u32 ret = 0;
    if (nameLen <= 3) {
        int i = 0;
        for (; i < nameLen; ++i) {
            u32 c = (u32)(*(u8*)(name + i));
            if (c == 0) {
                break;
            }
            c = (u32)(c - 'A');
            if (c <= (u32)('Z' - 'A'))
                c = (u32)(c + 'a');
            else
                c = (u32)(c + 'A');
            ret |= (u32)(c << (i * 8));
        }
    }
    return ret;
}

FS_CommandResult func_020605a0(FS_Record* record, void* dest, u32 pos, u32 size) {
    MI_CpuCopyU8((void*)(record->baseOffset + pos), dest, size);
    return FS_RESULT_SUCCESS;
}

FS_CommandResult func_020605bc(FS_Record* record, const void* src, u32 pos, u32 size) {
    MI_CpuCopyU8(src, (void*)(record->baseOffset + pos), size);
    return FS_RESULT_SUCCESS;
}

FS_CommandResult func_020605dc(FS_Record* record, void* dest, u32 pos, u32 size) {
    MI_CpuCopyU8((void*)pos, dest, size);
    return FS_RESULT_SUCCESS;
}

FS_File* func_020605f4(FS_Record* record) {
    ENTER_CRITICAL_SECTION();

    if (FS_IsRecordCanceling(record)) {
        FS_File *p, *q;

        record->flags &= ~FS_RECORD_FLAG_CANCELING;

        for (p = record->fileList.next; p; p = q) {
            q = p->link.next;
            if (FS_IsFileCanceling(p)) {
                if (record->fileList.next == p) {
                    record->fileList.next = q;
                }

                func_0205f9bc(p, FS_RESULT_CANCELED);
                if (q == NULL) {
                    q = record->fileList.next;
                }
            }
        }
    }

    if (FS_IsRecordWaiting(record) == FALSE && FS_IsRecordHalted(record) == FALSE && record->fileList.next) {
        FS_File*   file       = record->fileList.next;
        const BOOL isInactive = !FS_IsRecordActive(record);

        if (isInactive) {
            record->flags |= FS_RECORD_FLAG_ACTIVE;
        }

        LEAVE_CRITICAL_SECTION();

        if (isInactive) {
            if ((record->methodFlags & 0x200) != 0) {
                record->methodCB(file, 9);
            }
        }

        prevIRQState = OS_DisableIRQ();

        file->status |= FS_FILE_STATUS_ACTIVE;

        if (FS_IsFileSynchronous(file)) {
            OS_UnpauseThread(&file->unk_18);
            LEAVE_CRITICAL_SECTION();
            return NULL;
        } else {
            LEAVE_CRITICAL_SECTION();
            return file;
        }
    }

    if (FS_IsRecordActive(record)) {
        record->flags &= ~FS_RECORD_FLAG_ACTIVE;
        if ((record->methodFlags & 0x400) != 0) {
            FS_File tmp;
            func_02060e04(&tmp);
            tmp.record = record;
            record->methodCB(&tmp, 10);
        }
    }

    if (FS_IsRecordWaiting(record)) {
        record->flags &= ~FS_RECORD_FLAG_WAITING;
        record->flags |= FS_RECORD_FLAG_HALTED;
        OS_UnpauseThread(&record->unk_14);
    }
    LEAVE_CRITICAL_SECTION();

    return NULL;
}

void func_02060808(FS_File* file) {
    FS_Record* const record = file->record;

    while (file != NULL) {
        ENTER_CRITICAL_SECTION();

        file->status |= FS_FILE_STATUS_ACTIVE;
        if (FS_IsFileSynchronous(file)) {
            OS_UnpauseThread(&file->unk_18);
            LEAVE_CRITICAL_SECTION();
            break;
        } else {
            file->status |= FS_FILE_STATUS_ASYNC;
        }
        LEAVE_CRITICAL_SECTION();
        if (func_0205fa18(file, file->unk_10) == FS_RESULT_ASYNC) {
            break;
        }
        file = func_020605f4(record);
    }
}

BOOL func_0206089c(FS_File* file) {
    FS_CommandResult ret = func_0205fa18(file, file->unk_10);
    FS_File*         p_target;

    func_0205f9bc(file, ret);

    p_target = func_020605f4(file->record);
    if (p_target != NULL) {
        func_02060808(p_target);
    }
    return FS_IsFileSuccessful(file);
}

BOOL func_020608e0(FS_File* file, u32 command) {
    FS_Record* const record = file->record;
    const int        bit    = (1 << command);
    u32              prevIRQState;

    file->unk_10 = command;
    file->result = FS_RESULT_BUSY;
    file->status |= FS_FILE_STATUS_BUSY;

    prevIRQState = OS_DisableIRQ();

    if (record->flags & FS_RECORD_FLAG_UNLOADING) {
        func_0205f9bc(file, FS_RESULT_CANCELED);
        LEAVE_CRITICAL_SECTION();
        return FALSE;
    }

    if ((bit & 0x1FC) != 0) {
        file->status |= FS_FILE_STATUS_SYNC;
    }
    FS_FileListAppend(file, (FS_File*)&record->fileList);

    if (FS_IsRecordHalted(record) == FALSE && FS_IsRecordActive(record) == FALSE) {
        record->flags |= 0x10;
        LEAVE_CRITICAL_SECTION();
        if ((record->methodFlags & 0x200) != 0)
            record->methodCB(file, 9);
        prevIRQState = OS_DisableIRQ();
        file->status |= 0x40;

        if (FS_IsFileSynchronous(file) == FALSE) {
            LEAVE_CRITICAL_SECTION();
            func_02060808(file);
            return TRUE;
        }

        LEAVE_CRITICAL_SECTION();
    } else if (FS_IsFileSynchronous(file) == FALSE) {
        LEAVE_CRITICAL_SECTION();
        return TRUE;
    } else {
        do {
            OS_PauseThread(&file->unk_18);
        } while ((file->status & FS_FILE_STATUS_ACTIVE) == FALSE);
        LEAVE_CRITICAL_SECTION();
    }

    return func_0206089c(file);
}

void FS_RecordInit(FS_Record* record) {
    MI_CpuSet(record, 0, sizeof(FS_Record));
    record->unk_0C.head = record->unk_0C.tail = NULL;
    record->unk_14.head = record->unk_14.tail = NULL;
}

FS_Record* func_02060ab0(const char* name, s32 name_len) {
    u32        pack = func_02060548(name, name_len);
    FS_Record* record;
    ENTER_CRITICAL_SECTION();
    record = data_0210cdd0;

    while (record != NULL && record->name != pack) {
        record = record->next;
    }

    LEAVE_CRITICAL_SECTION();

    return record;
}

BOOL FS_RecordRegister(FS_Record* record, const char* name, u32 name_len) {
    BOOL result = FALSE;
    ENTER_CRITICAL_SECTION();

    if (func_02060ab0(name, name_len) == FALSE) {
        FS_Record* listNode = data_0210cdd0;
        if (listNode == NULL) {
            data_0210cdd0 = record;
            data_0210cdd4.record   = record;
            data_0210cdd4.position = 0;
            data_0210cdd4.index    = 0;
            data_0210cdd4.id       = 0;
        } else {
            while (listNode->next) {
                listNode = listNode->next;
            }
            listNode->next = record;
            record->prev   = listNode;
        }
        record->name = func_02060548(name, name_len);
        record->flags |= 1;
        result = TRUE;
    }

    LEAVE_CRITICAL_SECTION();
    return result;
}

BOOL FS_RecordLoad(FS_Record* record, u32 baseOffset, u32 fat, u32 fatSize, u32 fnt, u32 fntSize, FS_RecordReadCB readCB,
                   FS_RecordWriteCB writeCB) {
    record->baseOffset = baseOffset;
    record->fatSize    = fatSize;
    record->fatOffset = record->fatBase = fat;
    record->fntSize                     = fntSize;
    record->fntOffset = record->fntBase = fnt;
    record->readCB                      = (readCB != NULL) ? readCB : func_020605a0;
    record->writeCB                     = (writeCB != NULL) ? writeCB : func_020605bc;
    record->tableCB                     = record->readCB;
    record->loaded                      = NULL;
    record->flags |= FS_RECORD_FLAG_LOADED;
    return TRUE;
}

u32 FS_RecordLoadTable(FS_Record* record, void* buffer, u32 max_size) {
    u32 total_size = ALIGN_BYTE(record->fatSize + record->fntSize + 32, 32);
    if (total_size <= max_size) {
        u8*     cache = (u8*)ALIGN_BYTE(buffer, 32);
        FS_File tmp;
        func_02060e04(&tmp);
        if (func_0206102c(&tmp, record, record->fatOffset, record->fatOffset + record->fatSize, -1)) {
            if (func_02061270(&tmp, cache, record->fatSize) < 0) {
                MI_CpuSet(cache, 0, record->fatSize);
            }
            func_0206112c(&tmp);
        }
        record->fatOffset = (u32)cache;
        cache += record->fatSize;
        if (func_0206102c(&tmp, record, record->fntOffset, record->fntOffset + record->fntSize, -1)) {
            if (func_02061270(&tmp, cache, record->fntSize) < 0) {
                MI_CpuSet(cache, 0, record->fntSize);
            }
            func_0206112c(&tmp);
        }
        record->fntOffset = (u32)cache;
        record->loaded    = buffer;
        record->tableCB   = func_020605dc;
        record->flags |= FS_RECORD_FLAG_TABLE_LOADED;
    }
    return total_size;
}

void FS_RecordSetMethod(FS_Record* record, FS_RecordMethodCB callback, u32 flags) {
    if (flags == 0) {
        callback = NULL;
    } else if (callback == NULL) {
        flags = 0;
    }
    record->methodCB    = callback;
    record->methodFlags = flags;
}

void FS_RecordNotifyEnd(FS_Record* record, FS_CommandResult result) {
    if (FS_IsRecordAsync(record)) {
        FS_File* file = record->fileList.next;
        record->flags &= ~FS_RECORD_FLAG_ASYNC;
        func_0205f9bc(file, result);
        file = func_020605f4(record);
        if (file != NULL) {
            func_02060808(file);
        }
    } else {
        FS_File* file = record->fileList.next;
        ENTER_CRITICAL_SECTION();
        file->result = result;
        record->flags &= ~FS_RECORD_FLAG_SYNC;
        OS_UnpauseThread(&record->unk_0C);
        LEAVE_CRITICAL_SECTION();
    }
}
