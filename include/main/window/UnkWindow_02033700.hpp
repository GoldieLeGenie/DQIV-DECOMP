#pragma once
#include <globaldefs.h>
#include "main/dss/UnkSprite2D.hpp"

struct TownSystem;

/* DS-only window class (main 0x02033700-0x02033d14, vtable 0x020bed08), used by UnkImageMap_02141f6c */
struct UnkWindow_02033700 {
    char unk_04[0xfc];                          // 0x004
    UnkMenuSprite sprite_;                      // 0x100

    UnkWindow_02033700();
    ~UnkWindow_02033700();
    virtual void unkfunc_02033768(TownSystem* system);
    virtual void unkfunc_020337b4();
    virtual void unkfunc_02033788();
    virtual void unkfunc_02033928();
    virtual void unkfunc_02033c3c();
    virtual void unkfunc_02033c6c();
    virtual void unkfunc_02033d10();
    virtual void unkfunc_02033cd4(unsigned char alpha);
};
