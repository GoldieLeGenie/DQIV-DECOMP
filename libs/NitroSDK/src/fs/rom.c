#include <nitro/fs.h>
#include <nitro/reg.h>
#include <nitro/card.h>

FS_Record fsi_arc_rom;

CartridgeRegion fsi_ovt7;
CartridgeRegion fsi_ovt9;

static u32 fsi_default_dma_no;

s32 fsi_card_lock_id;

static void FSi_OnRomReadDone(void* record) {
    FS_RecordNotifyEnd(record, CARD_IsPulledOut() ? 5 : 0);
}

static FS_CommandResult FSi_ReadRomCallback(FS_Record* record, void* dest, u32 src, u32 size) {
    CARDi_ReadRom(fsi_default_dma_no, (const void*)src, dest, size, FSi_OnRomReadDone, record, TRUE);

    return FS_RESULT_ASYNC;
}

static FS_CommandResult FSi_WriteDummyCallback(FS_Record* record, const void* src, u32 dst, u32 len) {
    return FS_RESULT_FAILURE;
}

static FS_CommandResult FSi_RomArchiveProc(FS_File* p_file, u32 cmd) {
    switch (cmd) {
        case 9:
            CARD_LockRom((u16)fsi_card_lock_id);
            return FS_RESULT_SUCCESS;
        case 10:
            CARD_UnlockRom((u16)fsi_card_lock_id);
            return FS_RESULT_SUCCESS;
        case 1:
            return FS_RESULT_BADCMD;
        default:
            return FS_RESULT_UNKNOWN;
    }
}

static FS_CommandResult FSi_ReadDummyCallback(FS_Record* record, void* dst, u32 src, u32 len) {
    return FS_RESULT_FAILURE;
}

static FS_CommandResult FSi_EmptyArchiveProc(FS_File* file, u32 cmd) {
    return FS_RESULT_BADCMD;
}

void FSi_InitRom(u32 param_1) {
    fsi_default_dma_no           = param_1;
    fsi_card_lock_id           = OS_GetLockID();
    fsi_ovt9.offset = 0;
    fsi_ovt9.size   = 0;
    fsi_ovt7.offset = 0;
    fsi_ovt7.size   = 0;

    CARD_Init();
    FS_RecordInit(&fsi_arc_rom);
    FS_RecordRegister(&fsi_arc_rom, "rom", 3);

    if (BIOS_IsDownloadPlay()) {
        fsi_ovt9.offset = -1;
        fsi_ovt9.size   = 0;
        fsi_ovt7.offset = -1;
        fsi_ovt7.size   = 0;

        FS_RecordSetMethod(&fsi_arc_rom, FSi_EmptyArchiveProc, -1);
        FS_RecordLoad(&fsi_arc_rom, 0, 0, 0, 0, 0, FSi_ReadDummyCallback, FSi_WriteDummyCallback);
    } else {
        CartridgeRegion* const fnt = Cart_GetFileNameTable();
        CartridgeRegion* const fat = Cart_GetFileAllocTable();

        FS_RecordSetMethod(&fsi_arc_rom, FSi_RomArchiveProc, 0x602);

        if (fnt->offset != -1 && fnt->offset != 0 && fat->offset != -1 && fat->offset != 0) {
            FS_RecordLoad(&fsi_arc_rom, 0, fat->offset, fat->size, fnt->offset, fnt->size, FSi_ReadRomCallback, FSi_WriteDummyCallback);
        }
    }
}

u32 FS_TryLoadTable(void* buf, u32 size) {
    return FS_RecordLoadTable(&fsi_arc_rom, buf, size);
}
