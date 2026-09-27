#include "main/Commands/CommonCommand.hpp"
#include "main/status/GameFlag.hpp"
#include "main/cmn/CommonRuraData.hpp"

THUMB int cmd_get_flag(int* param)
{
    switch (param[0]) {
    case 0:
        if (param[2] != 0) {
            if (g_AreaFlag.check(param[1])) {
                return 1;
            }
        } else if (!g_AreaFlag.check(param[1])) {
            return 1;
        }
        return 0;
    case 1:
        if (param[2] != 0) {
            if (g_LocalFlag.check(param[1])) {
                return 1;
            }
        } else if (!g_LocalFlag.check(param[1])) {
            return 1;
        }
        return 0;
    case 2:
        if (param[2] != 0) {
            if (g_GlobalFlag.check(param[1])) {
                return 1;
            }
        } else if (!g_GlobalFlag.check(param[1])) {
            return 1;
        }
        return 0;
    }
    return 0;
}

THUMB int cmd_set_flag(int* param)
{
    switch (param[0]) {
    case 0:
        if (param[2] != 0) {
            cmn::CommonRuraData::getSingleton();
            int id = param[1];
            if ((unsigned int)id < 0x2a) {
                cmn::CommonRuraData::getSingleton()->setEnableRuraMap(id);
            }
            g_AreaFlag.set(param[1]);
        } else {
            g_AreaFlag.remove(param[1]);
        }
        break;
    case 1:
        if (param[2] != 0) {
            g_LocalFlag.set(param[1]);
        } else {
            g_LocalFlag.remove(param[1]);
        }
        break;
    case 2:
        if (param[2] != 0) {
            g_GlobalFlag.set(param[1]);
        } else {
            g_GlobalFlag.remove(param[1]);
        }
        break;
    }
    return 1;
}
