#include "main/part/FieldPart.hpp"
#include "main/global/Global.hpp"
#include "main/data/DataObject.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/dss/Pad.hpp"
#include "main/dss/UnkVramTransfer.hpp"
#include "main/menu/MenuManager.hpp"
#include "nitro/gx.h"
#include "nitro/gx.hpp"
#include "nitro/os.hpp"
#include "nnsys/g3d.hpp"
#include <nitro/os/interrupt.h>
#include "ov001/fld/FieldSystem.hpp"
#include "ov001/window/FieldWindowSystem.hpp"

FieldPart g_FieldPart;

ARM void FieldPart::initialize()
{
    func_020648cc();
    func_020648b8();
    GX_ResetBankForTex();
    GX_ResetBankForSubObj();
    GX_ResetBankForSubBg();
    GX_SetBankForTex(GX_VRAM_AB);
    data_0211e450.unkfunc_020861c4(0x40000, 0x4000);
    func_02080e90(data_0211c4f0);
    func_02084dd4(0);
    func_02087590((int)&OVERLAY_1_ID);
    FieldSystem::unkfunc_02122e80();
    func_02087590((int)&OVERLAY_16_ID);
    func_ov016_0217ad90();
    FieldSystem::getSingleton()->initialize();
    FieldWindowSystem::getSingleton()->initialize();
    g_Global.fadeIn(30);
    func_0202c25c();
}

ARM void FieldPart::terminate()
{
    FieldWindowSystem::getSingleton()->terminate();
    FieldSystem::getSingleton()->terminate();
    func_020875a4((int)&OVERLAY_1_ID);
    func_020875a4((int)&OVERLAY_16_ID);
    dss::g_Pad.unkfunc_0207f2b4(0);
    data_0211e450.unkfunc_02086278();
}

ARM void FieldPart::onExecutePart()
{
    FieldSystem::getSingleton()->execute();
    FieldWindowSystem::getSingleton()->execute();
}

ARM void FieldPart::onDrawPart()
{
    FieldSystem::getSingleton()->draw();
}

ARM void FieldPart::onWindowPart()
{
}

ARM void FieldPart::onDebugPart()
{
    func_0202c284();
}

ARM void FieldPart::onSwapBuffersPart()
{
    BOOL enable = OS_DisableIME();
    REG_GFX_FIFO_SWAP_BUFFERS = 1;
    OS_RestoreIME(enable);
}
