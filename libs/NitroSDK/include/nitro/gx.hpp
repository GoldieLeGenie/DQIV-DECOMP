#pragma once

// GX functions without a name in the libs headers (the named ones are in nitro/gx.h)
extern "C" {
    int func_020648b8(void);                    // reset the BG VRAM bank (GXState.bg)
    int func_020648cc(void);                    // reset the OBJ VRAM bank (GXState.obj)
}
