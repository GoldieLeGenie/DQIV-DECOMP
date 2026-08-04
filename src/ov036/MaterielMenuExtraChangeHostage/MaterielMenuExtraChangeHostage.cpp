#include "ov036/MaterielMenuExtraChangeHostage/MaterielMenuExtraChangeHostage.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/cmn/GameManager.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/global/Global.hpp"


THUMB void MaterielMenuExtraChangeHostage::menuSetup()
{
    status::g_Party.setBattleMode();

    newHostageID_ = 0;
    for (int i = 0; i < 0x1A; i++) {
        if (status::g_Party.isHostage(i) != 0) {
            hostageID_ = i;
        }
    }

    func_02051900(&menuItem_, 3, 5);

    menuItem_.active_ = 0;
    hostageStatus_ = HOSTAGE_ISCHANGE;

    if (g_Global.bookingFlag_ == Global::BOOKING_HOSTAGE) {
        hostageStatus_ = HOSTAGE_END;
    } else {
        ctrlID_ = func_0202375c();
    }
}


THUMB void MaterielMenuExtraChangeHostage::menuClose()
{
    if (hostageStatus_ == HOSTAGE_SELECT) {
        status::g_Party.setNormalMode();
        int active = menuItem_.active_;
        func_ov016_02177350(&menuItem_, active, status::g_Party.getCount());
    }
}

THUMB void MaterielMenuExtraChangeHostage::menuDraw()
{
    if (hostageStatus_ == HOSTAGE_SELECT) {
        func_ov016_0216fdb8();
        func_02051968(&menuItem_);
    }
}


THUMB void MaterielMenuExtraChangeHostage::menuUpdate()
{
    if (func_0200bef8(data_020c7678) == 0) {
        return;
    }

    switch (hostageStatus_) {
    case HOSTAGE_ISCHANGE:
        if (func_0205241c(&data_020ed1bc) != 0) {
            if (data_020ed1bc.stat_ == MenuBase::MENUBASE_STAT_OK) {
                func_02052408(&data_020ed1bc);
                func_020259a8(&data_020ed1bc);
                func_02025a1c(&data_020ed1bc, 0x1A049);
                func_02025b60(&data_020ed1bc);
                hostageStatus_ = HOSTAGE_SELECT;
                break;
            }
            if (data_020ed1bc.stat_ == MenuBase::MENUBASE_STAT_CANCEL) {
                hostageStatus_ = HOSTAGE_END;
                func_02052408(&data_020ed1bc);
            }
        } else {
            func_020259a8(&data_020ed1bc);
            func_02025a34(&data_020ed1bc, 0x1A048);
            func_02025b08(&data_020ed1bc);
        }
        break;

    case HOSTAGE_SELECT:
        if (func_0205241c(&data_020ed1bc) != 0
         && (unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            func_02052408(&data_020ed1bc);
        }
        memberUpdate();
        break;

    case HOSTAGE_CHANGING:
        if (func_0205241c(&data_020ed1bc) != 0) {
            if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
                func_02052408(&data_020ed1bc);
                func_0200bcc4(&g_Global, 0x3C);
            }
        } else {
            memberChange();
        }
        break;

    case HOSTAGE_END:
        if (func_0205241c(&data_020ed1bc) != 0) {
            if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
                func_02052408(this);
                func_02052408(&data_020ed1bc);

                if (g_Global.bookingFlag_ == Global::BOOKING_HOSTAGE) {
                    g_Global.bookingFlag_ = Global::BOOKING_NONE;
                    cmn::GameManager::getSingleton();
                    cmn::PlayerManager::setLock(0);
                    cmn::GameManager::getSingleton()->playerManager_->charaColl_ = 1;
                    func_020499a4(1);
                    func_ov000_021383bc(func_ov000_02137f2c(), ctrlID_, 0x4000);
                }

                func_ov016_0216aca4();
                func_ov016_0216b020();
            }
        } else {
            func_020259a8(&data_020ed1bc);
            func_02025a34(&data_020ed1bc, 0x19E42);
        }
        break;
    }
}
THUMB void MaterielMenuExtraChangeHostage::memberUpdate()
{
    func_02023504(&navigator_, 5, 2, status::g_Party.getCount());

    int r = func_02023274(&menuItem_, &navigator_);

    if (r != 0) {
        redraw_ = 1;

        if (r == 2) {
           newHostageID_ = status::g_Party.getPlayerStatus(menuItem_.active_)->haveStatusInfo_.haveStatus_.playerIndex_;

            if (isHostage() != 0) {
                status::g_Party.setHostage(hostageID_, false);
                status::g_Party.setHostage(newHostageID_, true);
                func_020259a8(&data_020ed1bc);
                func_02054364(0x12, 0x50000000, newHostageID_);
                func_02025a34(&data_020ed1bc, 0x1A051);
                func_02054364(0x10, 0x50000000, hostageID_);
                func_02025a34(&data_020ed1bc, 0x1A052);
                hostageStatus_ = HOSTAGE_CHANGING;
                return;
            }

            func_020259a8(&data_020ed1bc);
            func_02054364(0x12, 0x50000000, newHostageID_);
            func_02025a34(&data_020ed1bc, 0x1A04D);
            func_02025a34(&data_020ed1bc, 0x1A048);
            func_02025b08(&data_020ed1bc);
            hostageStatus_ = HOSTAGE_ISCHANGE;
            return;
        } else if (r == 3) {
            func_02052408(&data_020ed1bc);
            hostageStatus_ = HOSTAGE_END;
        }
    }
}

THUMB void MaterielMenuExtraChangeHostage::memberChange()
{
    status::g_Party.setMemberShiftMode();
    status::g_Party.del(newHostageID_);
    status::g_Party.setMemberShiftMode();

    int order[4] = {0, 0, 0, 0};

    for (int i = 0; i < status::g_Party.getCarriageOutCount(); i++) {
        order[i] = status::g_Party.getPlayerIndex(i);
    }

    status::g_Party.add(hostageID_);
    status::g_Party.reorder(order[0], order[1], order[2], order[3]);

    func_02030f60(cmn::GameManager::getSingleton());

    hostageStatus_ = HOSTAGE_END;

    func_02028944(&data_020ed28c);                 /* g_ExtraMapLink */

    cmn::GameManager::getSingleton();             
    cmn::PlayerManager::setLock(1);

    cmn::GameManager::getSingleton()->playerManager_->charaColl_ = 0;
    func_020499a4(0);

    g_Global.bookingFlag_ = Global::BOOKING_HOSTAGE;
    
    func_ov016_0216aca4();
    func_ov016_0216b020();
}

THUMB int MaterielMenuExtraChangeHostage::isHostage()
{
    status::g_Party.setNormalMode();

    if (status::PartyStatus::getPlayerStatusForPlayerIndex(newHostageID_)->haveStatusInfo_.haveStatus_.isPlayer_ == 0) {
        return 0;
    }

    if (newHostageID_ <= 2) {
        return 0;
    }

    int count = status::g_Party.getSortIndex(newHostageID_);
    int ret = 0;

    for (int i = 0; i < count; i++) {
        if (status::g_Party.getPlayerStatus(i)->haveStatusInfo_.haveStatus_.isPlayer_ != 0
         && status::g_Party.getPlayerStatus(i)->haveStatusInfo_.isDeath() == 0) {
            ret = 1;
            break;
        }
    }

    return ret;
}