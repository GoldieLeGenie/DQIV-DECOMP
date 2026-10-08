#include "main/dss/DssCore.hpp"
#include "main/dss/UnkDisplay.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/dss/UnkBgBuffer.hpp"
#include "main/dss/UnkMemory.hpp"
#include "main/data/FileLoader.hpp"
#include "nitro/os.hpp"
#include "nitro/gx.h"
#include <stdio.h>

UnkDebugConsole data_02116ce0;

ARM void unkfunc_0207e7e0()
{
}

ARM void unkfunc_0207e7e4()
{
}

ARM int unkfunc_0207e7e8()
{
    return func_02079bf0();
}

ARM void unkfunc_0207e7f4(const char* format, ...)
{
}

ARM void UnkDebugConsole::unkfunc_0207e800()
{
}

ARM void UnkDebugConsole::unkfunc_0207e804()
{
    unkfunc_0207e810();
}

ARM void UnkDebugConsole::unkfunc_0207e810()
{
    unkfunc_0208060c(unkfunc_0208171c(), -1);
}

ARM void UnkDebugConsole::unkfunc_0207e824(int x, int y, int w, int h)
{
    unkfunc_0208062c(unkfunc_0208171c(), x, y, w, h, -1);
}

ARM void UnkDebugConsole::unkfunc_0207e864(int x, int y, const char* str)
{
    unkfunc_020805bc(unkfunc_0208171c(), x, y, str);
}

ARM void UnkDebugConsole::unkfunc_0207e88c(int x, int y, const char* format, ...)
{
    char buf[0x41];
    va_list args;
    va_start(args, format);
    vsnprintf(buf, sizeof(buf), format, args);
    unkfunc_020805bc(unkfunc_0208171c(), x, y, buf);
}

ARM void UnkDebugConsole::unkfunc_0207e8e0(int x, int y, int w, int h)
{
    unkfunc_0207e824(x, y, w, h);
}

ARM void UnkDebugConsole::unkfunc_0207e8f4(int x, int y)
{
    unkfunc_0208066c(unkfunc_0208171c(), x, y, -1);
}

ARM void unkfunc_0207e918()
{
    *(volatile unsigned int*)((unsigned int)data_027e0000 + 0x3ff8) |= 1;
}

ARM void unkfunc_0207e934(int exArena)
{
    if (exArena != 0) {
        OS_EnableMainExArena();
        data_02116ce4 = 1;
    }
    OS_InitAllSystems();
    func_0207b708();
    func_0206366c();
    GX_SetPower(GX_POWER_ALL);
    GX_Init();
    func_02063920(2);
    func_02079b10();
    OS_InitThread();
    GX_DispOff();
    GXS_DispOff();
    func_02077480(1, unkfunc_0207e918);
    func_02077650(1);
    OS_EnableIrq();
    func_02060ddc(3);
    GX_VBlankIntr(TRUE);
    func_0207315c();
}

ARM void unkfunc_0207e9f4()
{
    GX_SetBankForLcdc(GX_VRAM_ALL);
    MI_CpuFill(0, (void*)0x06800000, 0xa4000);
    func_02064abc();
    MI_CpuFill(0xc0, (void*)0x07000000, 0x400);
    MI_CpuFill(0xc0, (void*)0x07000400, 0x400);
    MI_CpuFill(0, (void*)0x05000000, 0x400);
    MI_CpuFill(0, (void*)0x05000400, 0x400);
}

ARM void dss::File::unkfunc_0207ea64(int)
{
    unkfunc_0207ea80();
    unk_4c = 0;
    unk_50 = 0;
}

ARM void dss::File::unkfunc_0207ea80()
{
    unsigned int size = FS_TryLoadTable(NULL, 0);
    FS_TryLoadTable(unkfunc_0207f77c(&data_0211a60c, size, 0x20), size);
    unk_54 = 0x200;
}

ARM int dss::File::unkfunc_0207eac0(const char* fname, void* dst, int a)
{
    int size;
    if (a == 0) {
        size = unkfunc_0207eaf8(fname, dst);
        unk_4c = 0;
    } else {
        size = unkfunc_0207eb10(fname, dst);
    }
    DC_CleanAll();
    return size;
}

ARM int dss::File::unkfunc_0207eaf8(const char* fname, void* dst)
{
    int size = unkfunc_0207ec08(fname, dst);
    DC_CleanAll();
    return size;
}

ARM int dss::File::unkfunc_0207eb10(const char* fname, void* dst)
{
    int size = unkfunc_0207ec08(fname, dst);
    DC_CleanAll();
    return size;
}

ARM void* dss::File::unkfunc_0207eb28(const char* fname, int a, int b)
{
    int size;
    if (b == 0) {
        size = unkfunc_0207ecb0(fname);
    } else {
        size = unkfunc_0207eba0(fname, 0);
    }
    size_ = size;
    void* p;
    if (a != 0) {
        p = unkfunc_0207f834(&data_0211a60c, size, -0x20);
    } else {
        p = unkfunc_0207f834(&data_0211a60c, size, 0x20);
    }
    unkfunc_0207eac0(fname, p, b);
    return p;
}

ARM int dss::File::unkfunc_0207eba0(const char* fname, int align)
{
    int size = unkfunc_0207ecb0(fname);
    if (align == 0) {
        return size;
    }
    return unkfunc_0207ebc0(size, 0x200);
}

ARM unsigned int unkfunc_0207ebc0(unsigned int value, unsigned int align)
{
    return (value + (align - 1)) & ~(align - 1);
}

ARM bool dss::File::isExist(const char* fname)
{
    return unkfunc_0207eba0(fname, 0) != 0;
}

ARM int dss::File::unkfunc_0207ebf0()
{
    return size_;
}

ARM unsigned int unkfunc_0207ebf8(unsigned int value, unsigned int align)
{
    return value & ~(align - 1);
}

ARM int dss::File::unkfunc_0207ec08(const char* fname, void* dst)
{
    func_02060e04(&file_);
    int ok = func_020610e4(&file_, fname);
    if (unk_4c != 0) {
        func_02061280(&file_, unk_4c, 0);
    }
    if (ok) {
        size_ = file_.endRomOffset - file_.startRomOffset;
        if (unk_50 != 0) {
            size_ = unk_50;
            unk_50 = 0;
        }
        size_ = func_02061270(&file_, dst, size_);
        if (size_ == -1) {
            return 0;
        }
        func_0206112c(&file_);
    } else {
        size_ = 0;
    }
    return size_;
}

ARM int dss::File::unkfunc_0207ecb0(const char* fname)
{
    FSFile file;
    func_02060e04(&file);
    if (!func_020610e4(&file, fname)) {
        return 0;
    }
    return file.endRomOffset - file.startRomOffset;
}

ARM void unkfunc_0207ecf4()
{
    func_02065088();
    func_02065228();
    func_0206dfa4();
    *(volatile unsigned int*)0x04000000 &= ~0x07000000;
    *(volatile unsigned int*)0x04000000 &= ~0x38000000;
}

ARM void unkfunc_0207ed24(int brightness)
{
    func_020638f8((void*)0x0400006c, brightness);
}

ARM void unkfunc_0207ed3c(int brightness)
{
    func_020638f8((void*)0x0400106c, brightness);
}

int data_02116ce4;
dss::File dss::g_File;
