#include "ov015/btl/BattleMenu.hpp"
#include "ov015/btl/BattleMenuPlayerControl.hpp"
#include "ov003/btl/BattleMonsterMask.hpp"
#include "ov003/status/MonsterPartyWithDraw.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/profile/Profile.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/UseItem.hpp"

THUMB void BattleMenu_ITEM::menuSetup()
{
    status::g_Party.setBattleMode();
    func_02051900(&menuItem_, 1, 5);
    func_02051900(&cancelItem_, 2, 0);
    func_02051900(&unk_ec, 0, 0);
    int i;
    unk_1c = btl::BattleMenuPlayerControl::getSingleton()->activeChara_;
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
    func_02023324(&navigator_);
    func_02023504(&navigator_, 2, 3, info->haveItem_.getCount());
    int pos = 0;
    for (i = 0; i < info->haveItem_.getCount(); i++) {
        if (info->haveItem_.isEquipment(i) == 0) {
            pos = i;
            break;
        }
    }
    if (btl::BattleMenuPlayerControl::getSingleton()->activeItem_ != -1) {
        pos = btl::BattleMenuPlayerControl::getSingleton()->activeItem_;
    } else {
        btl::BattleMenuPlayerControl::getSingleton()->activeItem_ = pos;
    }
    int page = pos / 6;
    pos = pos % 6;
    menuItem_.active_ = pos;
    func_02023344(&navigator_, page);
    BattleMonsterMask::getSingleton()->select(-1);
}

THUMB void BattleMenu_ITEM::menuExecute()
{
    status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
    int count = info->haveItem_.getCount();
    func_02023504(&navigator_, 2, 3, info->haveItem_.getCount());
    int num = (count - 1) % 6 + 1;
    int page;
    int last = func_02023348(&navigator_) - 1;
    page = func_0202333c(&navigator_);
    if (page != last) {
        num = 6;
    }
    func_0201e6c4(&menuItem_, num, menuItem_.active_);
    func_ov015_0216c5c4(&cancelItem_);
    int max = func_02023348(&navigator_) - 1;
    func_0201e684(&unk_ec, unk_ec.active_, max, 0xd8, 0x78);
}

THUMB void BattleMenu_ITEM::menuDraw()
{
    if (!data_020ed1bc.isOpen()) {
        status::HaveStatusInfo* info = &status::g_Party.getPlayerStatus(btl::BattleMenuPlayerControl::getSingleton()->activeChara_)->haveStatusInfo_;
        int count = info->haveItem_.getCount();
        int items[12];
        func_020882d4(items, 0, sizeof(items));
        for (int i = 0; i < count; i++) {
            items[i] = info->haveItem_.getItem(i);
        }
        func_ov015_0216ba60(items, count, func_0202333c(&navigator_));
        func_02051968(&menuItem_);
    }
}

THUMB void BattleMenu_ITEM::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
        }
        return;
    }
    if (func_02023230(&cancelItem_)) {
        close();
        BattleMenuJudge::getSingleton()->backActionMenu(2);
        return;
    }
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        redraw_ = 1;
        if (result == 2) {
            if (isSelectEquipEnable()) {
                close();
                data_ov015_02179c10.open();
            } else {
                selectUseItem();
            }
            int item = func_020233cc(&navigator_, menuItem_.active_);
            btl::BattleMenuPlayerControl::getSingleton()->activeItem_ = item;
            return;
        }
        int item = func_020233cc(&navigator_, menuItem_.active_);
        btl::BattleMenuPlayerControl::getSingleton()->activeItem_ = item;
    }
    int active = menuItem_.active_;
    if (func_02023204(&unk_ec, &navigator_, &active) == 2) {
        menuItem_.active_ = active;
        int item = func_020233cc(&navigator_, menuItem_.active_);
        btl::BattleMenuPlayerControl::getSingleton()->activeItem_ = item;
        redraw_ = 1;
    }
}

THUMB void BattleMenu_ITEM::selectUseItem()
{
    int index = func_020233cc(&navigator_, menuItem_.active_);
    int action = status::UseItem::getBattleUseAction(status::g_Party.getPlayerStatus(unk_1c)->haveStatusInfo_.haveItem_.getItem(index));
    status::UseItem::UseArea area = status::UseAction::getUseArea(action);
    switch (status::UseAction::getUseType(action)) {
    case status::UseItem::Myself:
        BattleMenuJudge::getSingleton()->setItemParty(index, unk_1c);
        BattleMenuJudge::getSingleton()->setNextPlayer();
        close();
        return;
    case status::UseItem::Friend:
        if (area == status::UseItem::One) {
            btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = 0;
            gBattleMenu_ITEMUSE2PARTY.open();
            gBattleMenu_ITEMUSE2PARTY.unk_e4 = unk_1c;
            gBattleMenu_ITEMUSE2PARTY.unk_e8 = index;
            BattleMenuJudge::getSingleton()->setItemParty(index, -1);
            close();
            return;
        }
        BattleMenuJudge::getSingleton()->setItemPartyAll(index);
        BattleMenuJudge::getSingleton()->setNextPlayer();
        close();
        return;
    case status::UseItem::Enemy:
        if (area != status::UseItem::All) {
            if (g_monster.getGroupCount() == 1) {
                int group = 0;
                for (int i = 0; i < g_monster.getCount(); i++) {
                    if (g_monster.getMonsterStatus(i)->isBattleEnable()) {
                        group = g_monster.getMonsterGroup(i);
                        break;
                    }
                }
                BattleMenuJudge::getSingleton()->setItemEnemy(index, group);
                BattleMenuJudge::getSingleton()->setNextPlayer();
            } else {
                func_ov015_0216aa34(func_ov015_0216aa2c());
                func_ov015_0216aa54(func_ov015_0216aa2c());
                int target = BattleMenuJudge::getSingleton()->getLiveMonsterID();
                btl::BattleMenuPlayerControl::getSingleton()->targetChara_ = target;
                gBattleMenu_ITEMUSE2ENEMY.open();
                gBattleMenu_ITEMUSE2ENEMY.unk_148 = unk_1c;
                gBattleMenu_ITEMUSE2ENEMY.unk_14c = index;
            }
            close();
            return;
        }
        BattleMenuJudge::getSingleton()->setItemEnemyAll(index);
        BattleMenuJudge::getSingleton()->setNextPlayer();
        close();
        return;
    default:
        status::g_Party.getPlayerStatus(unk_1c);
        BattleMenuJudge::getSingleton()->setItemPartyAll(index);
        BattleMenuJudge::getSingleton()->setNextPlayer();
        close();
        return;
    }
}

THUMB bool BattleMenu_ITEM::isSelectEquipEnable()
{
    int index = btl::BattleMenuPlayerControl::getSingleton()->activeItem_;
    int item = status::g_Party.getPlayerStatus(unk_1c)->haveStatusInfo_.haveItem_.getItem(index);
    return status::g_Party.getPlayerStatus(unk_1c)->haveStatusInfo_.isEquipEnable(item);
}
