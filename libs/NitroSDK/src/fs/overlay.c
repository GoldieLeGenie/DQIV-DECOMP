#include "overlay_internal.h"

/* Size of the overlay image as stored in the file (compressed size if compressed). */
u32 func_02061544(UnkOverlayInfo* info) {
    if (info->flags & 1) {
        return info->compressedSize;
    } else {
        return info->ramSize;
    }
}

void FS_ClearOverlayImage(UnkOverlayInfo* info) {
    u8* addr      = info->addr;
    u32 ramSize   = info->ramSize;
    u32 totalSize = ramSize + info->bssSize;

    IC_InvalidateRange(addr, totalSize);
    DC_InvalidateRange(addr, totalSize);
    MI_CpuSet(addr + ramSize, 0, totalSize - ramSize);
}

FS_FileIdentifier FS_GetOverlayFileID(UnkOverlayInfo* info) {
    FS_FileIdentifier iden;

    iden.record = &fsi_arc_rom;
    iden.fileID = info->fileId;
    return iden;
}

/* Reads the overlay table entry from the card (overlay table not loaded in memory). */
BOOL func_020615c4(UnkOverlayInfo* info, u32 target, u32 id, FS_Record* record, u32 offset9, u32 size9, u32 offset7,
                   u32 size7) {
    CartridgeRegion pr[1];
    FS_File         file[1];
    u32             pos;

    if (target == 0) {
        pr->offset = offset9;
        pr->size   = size9;
    } else {
        pr->offset = offset7;
        pr->size   = size7;
    }

    pos = id * 0x20;
    if (pos >= pr->size) {
        return FALSE;
    }

    func_02060e04(file);
    if (!func_0206102c(file, record, pr->offset + pos, pr->offset + pr->size, (u32)-1)) {
        return FALSE;
    }
    if (func_02061270(file, info, 0x20) != 0x20) {
        func_0206112c(file);
        return FALSE;
    }
    func_0206112c(file);
    info->target = target;

    if (!func_02061074(file, FS_GetOverlayFileID(info))) {
        return FALSE;
    }
    info->filePos = file->startPosition;
    info->fileLen = file->endPosition - file->startPosition;
    func_0206112c(file);
    return TRUE;
}

BOOL FS_LoadOverlayInfo(UnkOverlayInfo* info, u32 target, u32 id) {
    const CartridgeRegion* table;
    FS_File                file[1];

    table = (target == 0) ? &fsi_ovt9 : &fsi_ovt7;

    if (table->offset != 0) {
        const u32 pos = id * 0x20;
        if (pos >= table->size) {
            return FALSE;
        }

        MI_CpuCopyU8((u8*)table->offset + pos, info, 0x20);
        info->target = target;

        func_02060e04(file);
        if (!func_02061074(file, FS_GetOverlayFileID(info))) {
            return FALSE;
        }
        info->filePos = file->startPosition;
        info->fileLen = file->endPosition - file->startPosition;
        func_0206112c(file);
        return TRUE;
    } else {
        const CartridgeRegion* rom = (const CartridgeRegion*)0x027FFE50;
        return func_020615c4(info, target, id, &fsi_arc_rom, rom[0].offset, rom[0].size, rom[1].offset, rom[1].size);
    }
}

BOOL FS_LoadOverlayImage(UnkOverlayInfo* info) {
    FS_File file[1];

    func_02060e04(file);
    if (!func_02061074(file, FS_GetOverlayFileID(info))) {
        return FALSE;
    } else {
        s32 size = func_02061544(info);

        FS_ClearOverlayImage(info);
        if (func_02061270(file, info->addr, size) != size) {
            func_0206112c(file);
            return FALSE;
        }
        func_0206112c(file);
        return TRUE;
    }
}

/* HMAC key of the overlay digests */
const u8 data_020b634c[0x40] = {
    0x21, 0x06, 0xc0, 0xde, 0xba, 0x98, 0xce, 0x3f, 0xa6, 0x92, 0xe3, 0x9d, 0x46, 0xf2, 0xed, 0x01,
    0x76, 0xe3, 0xcc, 0x08, 0x56, 0x23, 0x63, 0xfa, 0xca, 0xd4, 0xec, 0xdf, 0x9a, 0x62, 0x78, 0x34,
    0x8f, 0x6d, 0x63, 0x3c, 0xfe, 0x22, 0xca, 0x92, 0x20, 0x88, 0x97, 0x23, 0xd2, 0xcf, 0xae, 0xc2,
    0x32, 0x67, 0x8d, 0xfe, 0xca, 0x83, 0x64, 0x98, 0xac, 0xfd, 0x3e, 0x37, 0x87, 0x46, 0x58, 0x24,
};

UnkDigestKey data_020c3db0 = {data_020b634c, sizeof(data_020b634c)};

BOOL FSi_CompareDigest(const u8* digest, void* src, u32 size) {
    s32 i;
    u8  hash[20];
    u8  key[64];

    MI_CpuSet(hash, 0, sizeof(hash));
    MI_CpuCopyU8(data_020c3db0.key, key, data_020c3db0.size);
    func_0205f4dc(hash, src, size, key, data_020c3db0.size);

    for (i = 0; i < sizeof(hash); i += sizeof(u32)) {
        if (*(u32*)(hash + i) != *(u32*)(digest + i)) {
            break;
        }
    }
    return i == sizeof(hash);
}

/* Starts a loaded overlay: digest check (multiboot), decompression, static constructors. */
void func_020618dc(UnkOverlayInfo* info) {
    u32 size = func_02061544(info);

    if (*(u16*)0x027FFC40 == 2) {
        BOOL ok = FALSE;

        if (info->flags & 2) {
            if (info->id < (data_020c4a08_end - data_020c4a08) / 20) {
                ok = FSi_CompareDigest(data_020c4a08 + info->id * 20, info->addr, size);
            }
        }
        if (!ok) {
            MI_CpuSet(info->addr, 0, size);
            OS_Terminate();
            return;
        }
    }

    if (info->flags & 1) {
        MIi_UncompressBackward(info->addr + size);
    }
    DC_PurgeRange(info->addr, info->ramSize);

    {
        UnkOverlayCtor* p   = info->ctorStart;
        UnkOverlayCtor* end = info->ctorEnd;
        for (; p < end; p++) {
            if (*p != NULL) {
                (**p)();
            }
        }
    }
}

/* Runs and unlinks all registered destructors of objects that live in the overlay. */
void func_020619d0(UnkOverlayInfo* info) {
    while (TRUE) {
        UnkDestructorChain* head = NULL;
        UnkDestructorChain* tail = NULL;
        u32                 start = (u32)info->addr;
        u32                 end   = start + (info->ramSize + info->bssSize);
        u32                 irq;
        UnkDestructorChain* prev;
        UnkDestructorChain* base;
        UnkDestructorChain* cur;

        irq  = OS_DisableIRQ();
        prev = NULL;
        base = __global_destructor_chain;
        cur  = base;

        while (cur != NULL) {
            UnkDestructorChain* next   = cur->next;
            u32                 dtor   = (u32)cur->dtor;
            u32                 object = (u32)cur->object;

            if ((object == 0 && dtor >= start && dtor < end) || (object >= start && object < end)) {
                if (tail != NULL) {
                    tail->next = cur;
                } else {
                    head = cur;
                }
                if (base == cur) {
                    base = __global_destructor_chain = next;
                }
                tail      = cur;
                cur->next = NULL;
                if (prev != NULL) {
                    prev->next = next;
                }
            } else {
                prev = cur;
            }
            cur = next;
        }

        OS_RestoreIRQ(irq);

        if (head == NULL) {
            return;
        }

        do {
            UnkDestructorChain* next = head->next;
            if (head->dtor != NULL) {
                head->dtor(head->object);
            }
            head = next;
        } while (head != NULL);
    }
}

BOOL FS_UnloadOverlayImage(UnkOverlayInfo* info) {
    func_020619d0(info);
    return TRUE;
}

BOOL FS_LoadOverlay(u32 target, u32 id) {
    UnkOverlayInfo info;

    if (!FS_LoadOverlayInfo(&info, target, id) || !FS_LoadOverlayImage(&info)) {
        return FALSE;
    }
    func_020618dc(&info);
    return TRUE;
}

BOOL FS_UnloadOverlay(u32 target, u32 id) {
    UnkOverlayInfo info;

    if (!FS_LoadOverlayInfo(&info, target, id) || !FS_UnloadOverlayImage(&info)) {
        return FALSE;
    }
    return TRUE;
}
