#pragma ipa file
#include "main/part/TitlePart.hpp"
#include "main/global/Global.hpp"
#include "main/global/StageLink.hpp"
#include "main/data/DataObject.hpp"
#include "main/data/FileLoader.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/dss/Pad.hpp"
#include "main/menu/MenuAPI.hpp"
#include "main/menu/MenuManager.hpp"

static int s_itemNum;
TitlePart g_TitlePart;

static TITLE_PART_ITEM s_item[] = {
    { TOWN_PART, "Town Part" },
    { SSA_VIEWER_PART, "SSA Viewer Part" },
    { MESSAGEDEBUG_PART, "Message Debug Part" },
    { END_PART, "" },
};

ARM void TitlePart::initialize()
{
    func_0207e804(data_02116ce0);
    x_ = 1;
    cursor_ = 1;
    buildDate_.unkfunc_02057000();
    const char* name = "data/date.dtd";
    dss::g_File.unkfunc_0207eac0(name, &data_0210baf8, 0);
    data_0210baf8.end0_ = 0;
    data_0210baf8.end1_ = 0;
    data_0210baf8.end2_ = 0;
    func_02080e90(data_0211c4cc);
    dss::g_Pad.unkfunc_0207f2b4(0);
    int i = 0;
    TITLE_PART_ITEM* item = s_item;
    while (1) {
        if (item->part == END_PART) break;
        item++;
        i++;
    }
    s_itemNum = i;
    MenuAPI::clearMenuAll();
    g_Global.setMapName("caf1");
    StageLink::resetTownExitIndex();
    g_Global.fadeIn(30);
}

ARM void TitlePart::terminate()
{
    func_0207e810(data_02116ce0);
}

ARM void TitlePart::onExecutePart()
{
    if (dss::g_Pad.edge() & 0x40) {
        cursor_--;
    }
    if (dss::g_Pad.edge() & 0x80) {
        cursor_++;
    }
    cursor_ = dss::loop<int>(cursor_, 1, s_itemNum);
    func_0207e810(data_02116ce0);
    if (dss::g_Pad.edge() & 1) {
        if (cursor_ == 5) {
            g_Global.setMinigame(1);
        }
        if (cursor_ == 6) {
            g_Global.setMinigame(0);
        }
        data_0210bb94.unkfunc_020580fc(s_item[cursor_ - 1].part);
    }
}

ARM void TitlePart::onDrawPart()
{
    func_0207e8e0(data_02116ce0, 0, 0, 0x16, s_itemNum + 2);
    for (int i = 0; i < s_itemNum; i++) {
        func_0207e88c(data_02116ce0, 2, i + 1, "%1d:%s", i + 1, s_item[i].name);
    }
    func_0207e8f4(data_02116ce0, x_, cursor_);
    func_0207e88c(data_02116ce0, 12, 16, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 17, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 18, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 19, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 20, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 21, "Size:0x%08x", data_0211a60c.unk_54);
    func_0207e88c(data_02116ce0, 12, 22, "Build.%s %s", buildDate_.dateString_, buildDate_.time_);
    func_0207e88c(data_02116ce0, 12, 23, "Convt.%s %s", data_0210baf8.date_, data_0210baf8.time_);
}

ARM void TitlePart::onWindowPart()
{
}

ARM void TitlePart::onDebugPart()
{
}
