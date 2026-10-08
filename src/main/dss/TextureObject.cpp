#include "main/dss/TextureObject.hpp"
#include "main/dss/UnkVramTransfer.hpp"
#include "nitro/g3.hpp"

ARM TextureObject::TextureObject()
{
}

ARM TextureObject::~TextureObject()
{
}

ARM void TextureObject::unkfunc_02086798(int flag)
{
    if (unk_14 & 1) {
        return;
    }
    unk_14 |= 1;
    unk_34 = (int)((unsigned char*)this + unk_34);
    unk_3c = (int)((unsigned char*)this + unk_3c);
    unk_30 = unkfunc_0207ebc0(unk_30, 0x400);
    unk_38 = unkfunc_0207ebc0(unk_38, 0x20);
    if (unk_18 == 1 || unk_18 == 2) {
        unk_54 = (int)((unsigned char*)this + unk_54);
        unk_5c = (int)((unsigned char*)this + unk_5c);
        unk_50 = unkfunc_0207ebc0(unk_50, 0x400);
        unk_58 = unkfunc_0207ebc0(unk_58, 0x20);
    }
    unkfunc_020868dc();
    if (flag != 0) {
        unkfunc_02086968(1);
    } else {
        unkfunc_02086968(0);
    }
}

ARM void TextureObject::unkfunc_02086868()
{
    if (!(unk_14 & 1)) {
        return;
    }
    unk_14 &= ~1;
    if (unk_40 != 0) {
        data_0211e450.unkfunc_020862a0(unk_40);
    }
    if (unk_44 != 0) {
        data_0211e450.unkfunc_02086318(unk_44);
    }
    if (unk_18 == 1 || unk_18 == 2) {
        if (unk_64 != 0) {
            data_0211e450.unkfunc_02086318(unk_64);
        }
    }
}

ARM void TextureObject::unkfunc_020868dc()
{
    unk_14 |= 1;
    unk_40 = data_0211e450.unkfunc_0208627c(unk_30);
    unk_44 = data_0211e450.unkfunc_020862e0(unk_38);
    unk_48 = data_0211e450.unkfunc_020862bc(unk_40);
    unk_4c = data_0211e450.unkfunc_02086354(unk_44);
    if (unk_18 == 1 || unk_18 == 2) {
        unk_64 = data_0211e450.unkfunc_020862e0(unk_58);
        unk_6c = data_0211e450.unkfunc_02086354(unk_64);
    }
}

ARM void TextureObject::unkfunc_02086968(int flag)
{
    data_0211e450.unkfunc_02086378(0, (void*)unk_34, unk_48, unk_30, flag);
    data_0211e450.unkfunc_02086378(1, (void*)unk_3c, unk_4c, unk_38, flag);
    if (unk_18 == 1 || unk_18 == 2) {
        data_0211e450.unkfunc_02086378(1, (void*)unk_5c, unk_6c, unk_58, flag);
    }
}

ARM void TextureObject::unkfunc_020869ec(TextureObject* src, int flag)
{
    if (src->unk_14 & 1) {
        data_0211e450.unkfunc_02086378(0, (void*)unk_34, unk_48, unk_30, flag);
        data_0211e450.unkfunc_02086378(1, (void*)unk_3c, unk_4c, unk_38, flag);
    } else {
        data_0211e450.unkfunc_02086378(0, (unsigned char*)src + src->unk_34, unk_48, unk_30, flag);
        data_0211e450.unkfunc_02086378(1, (unsigned char*)src + src->unk_3c, unk_4c, unk_38, flag);
    }
}

ARM int TextureObject::unkfunc_02086a94()
{
    return unk_48;
}

ARM int TextureObject::unkfunc_02086a9c()
{
    return unk_34;
}

ARM int TextureObject::unkfunc_02086aa4()
{
    return unk_4c;
}

ARM int TextureObject::unkfunc_02086aac()
{
    return unk_3c;
}

ARM int TextureObject::unkfunc_02086ab4()
{
    return unk_38;
}

ARM void TextureObject::unkfunc_02086abc()
{
    G3_TexImageParam(unk_20, 1, unk_24, unk_28, 0, 0, 1, unk_48);
}

ARM void TextureObject::unkfunc_02086af4()
{
    G3_TexImageParam(unk_20, 1, unk_24, unk_28, 0, 0, 0, unk_48);
}

ARM void unkfunc_02086b28()
{
    *(volatile unsigned int*)0x040004a8 = 0x60000000;
}

ARM void TextureObject::unkfunc_02086b3c()
{
    *(volatile unsigned int*)0x040004ac = (unsigned int)unk_4c >> (4 - (unk_20 == 2));
}

ARM void TextureObject::unkfunc_02086b68()
{
    if (unk_18 == 1) {
        G3_TexImageParam(1, 1, unk_24, unk_28, 0, 0, 1, unk_48);
    }
    if (unk_18 == 2) {
        G3_TexImageParam(6, 1, unk_24, unk_28, 0, 0, 1, unk_48);
    }
}

ARM void TextureObject::unkfunc_02086bd8()
{
    if (unk_18 == 1) {
        *(volatile unsigned int*)0x040004ac = (unsigned int)unk_6c >> 4;
    }
    if (unk_18 == 2) {
        *(volatile unsigned int*)0x040004ac = (unsigned int)unk_6c >> 4;
    }
}

ARM int TextureObject::unkfunc_02086c18()
{
    int width = 0;
    if (unk_24 == 0) {
        width = 8;
    }
    if (unk_24 == 1) {
        width = 0x10;
    }
    if (unk_24 == 2) {
        width = 0x20;
    }
    if (unk_24 == 3) {
        width = 0x40;
    }
    if (unk_24 == 4) {
        width = 0x80;
    }
    if (unk_24 == 5) {
        width = 0x100;
    }
    if (unk_24 == 6) {
        width = 0x200;
    }
    if (unk_24 == 7) {
        width = 0x400;
    }
    return width;
}

ARM int TextureObject::unkfunc_02086c64()
{
    int height = 0;
    if (unk_28 == 0) {
        height = 8;
    }
    if (unk_28 == 1) {
        height = 0x10;
    }
    if (unk_28 == 2) {
        height = 0x20;
    }
    if (unk_28 == 3) {
        height = 0x40;
    }
    if (unk_28 == 4) {
        height = 0x80;
    }
    if (unk_28 == 5) {
        height = 0x100;
    }
    if (unk_28 == 6) {
        height = 0x200;
    }
    if (unk_28 == 7) {
        height = 0x400;
    }
    return height;
}
