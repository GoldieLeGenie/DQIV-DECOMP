#include "main/menu/UnkMenuIconData.hpp"
#include "main/menu/UnkMenuBg.hpp"
#include "main/data/DataObject.hpp"
#include "main/data/FileLoader.hpp"
#include "main/text/TextAPI.hpp"

static DataObject s_item32;
static DataObject s_char32;
static DataObject s_command32;
static DataObject s_command24;
static DataObject s_face48;
static DataObject s_wireless48;
static DataObject s_loading48;
static int s_itemIconType;

THUMB void unkfunc_02051740()
{
    s_item32.setup("data/G2D/icon/item32.mptp", 0, 0);
    s_char32.setup("data/G2D/icon/char32.mptp", 0, 0);
    s_command32.setup("data/G2D/icon/command32.mptp", 0, 0);
    s_command24.setup("data/G2D/icon/command24.mptp", 0, 0);
    s_face48.setup("data/G2D/icon/face48.mpt", 0, 0);
    s_wireless48.setup("data/G2D/icon/wireless48.mpt", 0, 0);
    s_loading48.setup("data/G2D/icon/loading48.mpt", 0, 0);
    s_itemIconType = 0;
}

THUMB void unkfunc_020517dc(int type)
{
    if (s_itemIconType != type) {
        const char* path = NULL;
        s_itemIconType = type;
        if (type == 0) {
            path = "data/G2D/icon/item32.mptp";
        }
        if (type == 1) {
            path = "data/G2D/icon/sure32.mptp";
        }
        if (path != NULL) {
            dss::g_File.unkfunc_0207eac0(path, s_item32.getAddr(), 1);
            data_020facb8.icon_.unkfunc_0204fef8();
        }
    }
}

THUMB void* unkfunc_0205182c(int type, int index)
{
    if (index != 9999) {
        if (type == 0xf0000000) {
            unkfunc_020517dc(0);
        }
        if (type == 0xf7000000) {
            unkfunc_020517dc(1);
        }
    }
    DataObject* data;
    switch (type) {
    case 0xf0000000:
        data = &s_item32;
        break;
    case 0xf1000000:
        data = &s_char32;
        break;
    case 0xf3000000:
        data = &s_command32;
        break;
    case 0xf4000000:
        data = &s_command24;
        break;
    case 0xf5000000:
        data = &s_face48;
        break;
    case 0xf8000000:
        data = &s_wireless48;
        break;
    case 0xf9000000:
        data = &s_loading48;
        break;
    case 0xf7000000:
        data = &s_item32;
        break;
    default:
        return NULL;
    }
    return (void*)unkfunc_02088484((char*)data->getAddr(), index);
}
