#pragma once

// C++ subset of nitro/fs.h
extern "C" {
    int FS_LoadOverlay(void* overlay, unsigned int overlayID);
    int FS_UnloadOverlay(void* overlay, unsigned int overlayID);
}
