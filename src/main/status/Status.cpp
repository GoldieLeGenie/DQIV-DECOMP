#include "main/status/Status.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/UseAction.hpp"
#include "main/status/BaseAction.hpp"
#include "main/status/BaseActionMessage.hpp"
#include "main/status/HaveBattleStatus.hpp"
#include "main/status/UseItem.hpp"
#include "main/status/BaseItem.hpp"
#include "main/status/ShopList.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/PlayerStatus.hpp"
#include "main/status/BattleHistory.hpp"
#include "main/status/BattleResult.hpp"
#include "main/status/OptionStatus.hpp"
#include "main/cmn/CommonCounterInfo.hpp"
#include "main/status/GameFlag.hpp"
#include "main/param/Event.hpp"
#include "main/global/Global.hpp"
#include "main/param/Fukuro.hpp"
#include "main/param/EventFlag.hpp"
#include "main/cmn/CommonRuraData.hpp"
#include "main/dss/DssUtils.hpp"



int status::Status::flagShopIndex_ = -1;

THUMB void status::Status::initialize()
{
    excelParam.setup();

    UseAction::initialize();
    BaseAction::initialize();
    BaseActionMessage::initialize();
    HaveBattleStatus::initialize();
    UseItem::initialize();
    BaseItem::initialize();
    ShopList::initialize();

    g_Stage.initialize();
    g_Stage.setTimeZone(TIME_ZONE_DAYTIME);

    g_Story.setChapter(0);

    cmn::g_CommonCounterInfo.initialize();

    PartyStatus::initialize();
    g_Party.clear();
    g_Party.fukuro_ = 1;

    g_BattleHistory.initialize();
    g_BattleResult.initialize();
    g_Option.initialize();
}

THUMB void status::Status::initialize_character()
{
    g_Party.clear();
    g_Party.add(1);
    g_Party.setBattleMode();
    g_Party.getCount();

    g_Party.getPlayerStatus(0)->levelup(1);
    g_Party.getPlayerStatus(1)->levelup(99);
    g_Party.getPlayerStatus(2)->levelup(99);

    g_Party.getPlayerStatus(0)->haveStatusInfo_.haveItem_.add(0xA0);
    g_Party.getPlayerStatus(0)->haveStatusInfo_.haveItem_.add(0xA1);
}

THUMB void status::Status::setEventParty(unsigned int index)
{
    param::Event* event = param::Event::getFileData(index);
    param::Fukuro* fukuro = param::Fukuro::getFileData(event->index);

    PartyStatus::initialize();
    g_Party.clear();
    if (index >= 0x82) {
        g_Party.basha_ = 1;
    } else {
        g_Party.basha_ = 0;
    }
    g_Party.add(event->NPC1);
    g_Party.add(event->NPC2);
    g_Party.add(event->NPC3);
    g_Party.setGold(event->gold);
    g_Story.setChapter((char)(event->byte_1 & 7));

    dss::Fx32Vector3 pos;
    switch ((char)(event->byte_1 & 7)) {
        case 1:
            g_Stage.setChurchMapName("hak1f1\0");
            break;
        case 2:
            g_Stage.setChurchMapName("mbk1f1\0");
            break;
        case 3:
            g_Stage.setChurchMapName("mfk1f1\0");
            break;
        case 4:
            g_Stage.setChurchMapName("mhk1f1\0");
            break;
        case 5:
        case 6:
            g_Stage.setChurchMapName("cff1\0\0\0");
            break;
    }

    g_Party.fukuro_ = 1;
    g_Party.haveItemSack_.clear();

    param::Event* member = event;
    int i = 0;
    do {
        if (event->party == 1) {
            if (g_Story.sex_ == 0) {
                g_Party.add(1);
            } else {
                g_Party.add(2);
            }
        } else {
            g_Party.add(event->party);
        }
        event++;
        i++;
    } while (event->index == 0xffff);

    g_Party.setDisplayMode();

    i = 0;
    unsigned int itemMax;
    unsigned int itemCount = data_0208c9fc;
    itemMax = itemCount - 1;
    do {
        int j;
        int playerIndex;
        if (member->party == 1) {
            if (g_Story.sex_ == 0) {
                playerIndex = 1;
            } else {
                playerIndex = 2;
            }
        } else {
            playerIndex = member->party;
        }
        PlayerStatus* player = &originalPlayer_[playerIndex];
        player->setup(playerIndex);
        player->levelup(member->level);
        player->haveStatusInfo_.clearAllItem();
        player->haveStatusInfo_.setItemEquipment(member->weapon);
        player->haveStatusInfo_.setItemEquipment(member->armor);
        player->haveStatusInfo_.setItemEquipment(member->shield);
        player->haveStatusInfo_.setItemEquipment(member->helmet);
        player->haveStatusInfo_.setItemEquipment(member->accessory);
        if (i == 0) {
            j = 0;
            if (j < itemMax) {
                do {
                    unsigned char item = (&fukuro->item1)[j];
                    if (item != 0) {
                        g_Party.haveItemSack_.adds(j + 1, item);
                    }
                    j++;
                } while (j < itemCount - 1);
            }
        }
        if ((int)player->haveStatusInfo_.haveStatus_.playerIndex_ > 2) {
            player->haveStatusInfo_.battleCommand_ = COMMAND_MEIREISASERO;
        }
        i++;
        member++;
    } while (member->index == 0xffff);

    func_02057f80(&data_020c7830);
    func_02057f80(data_020c7980);
    setEventFlag(index);

    if (g_AreaFlag.check(0x13d)) {
        g_Party.ship_ = 1;
    } else {
        g_Party.ship_ = 0;
    }
    if (g_AreaFlag.check(0x172)) {
        g_Party.balloon_ = 1;
    } else {
        g_Party.balloon_ = 0;
    }
}

static inline char checkBit(char flag, int bit)
{
    return (flag & (1 << bit)) >> bit;
}

THUMB void status::Status::setEventFlag(unsigned int index)
{
    param::EventFlag* data = (param::EventFlag*)func_02057f50(func_02057f58(&param::EventFlag::data_, param::EventFlag::filename_[0]), data_020b5d64);

    g_AreaFlag.clear();
    for (unsigned int i = 0; i <= index; i++) {
        if (data[i].scenario1 != 0xffff) {
            g_AreaFlag.set(data[i].scenario1);
        }
        if (data[i].scenario2 != 0xffff) {
            g_AreaFlag.set(data[i].scenario2);
        }
        if (data[i].scenario3 != 0xffff) {
            g_AreaFlag.set(data[i].scenario3);
        }
    }
    if (data[index].flag1 != 0xffff) {
        g_AreaFlag.set(data[index].flag1);
    }
    if (data[index].flag2 != 0xffff) {
        g_AreaFlag.set(data[index].flag2);
    }

    if (checkBit(data[index].byte_1, 0)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(0);
    }
    if (checkBit(data[index].byte_1, 1)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(1);
    }
    if (checkBit(data[index].byte_1, 2)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(2);
    }
    if (checkBit(data[index].byte_1, 3)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(3);
    }
    if (checkBit(data[index].byte_1, 4)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(4);
    }
    if (checkBit(data[index].byte_1, 5)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(5);
    }
    if (checkBit(data[index].byte_1, 6)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(6);
    }
    if (checkBit(data[index].byte_1, 7)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(7);
    }
    if (checkBit(data[index].byte_2, 0)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(8);
    }
    if (checkBit(data[index].byte_2, 1)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(9);
    }
    if (checkBit(data[index].byte_2, 2)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(10);
    }
    if (checkBit(data[index].byte_2, 3)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(11);
    }
    if (checkBit(data[index].byte_2, 4)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(12);
    }
    if (checkBit(data[index].byte_2, 5)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(13);
    }
    if (checkBit(data[index].byte_2, 6)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(14);
    }
    if (checkBit(data[index].byte_2, 7)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(15);
    }
    if (checkBit(data[index].byte_3, 0)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(16);
    }
    if (checkBit(data[index].byte_3, 1)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(17);
    }
    if (checkBit(data[index].byte_3, 2)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(18);
    }
    if (checkBit(data[index].byte_3, 3)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(19);
    }
    if (checkBit(data[index].byte_3, 4)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(20);
    }
    if (checkBit(data[index].byte_3, 5)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(21);
    }
    if (checkBit(data[index].byte_3, 6)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(22);
    }
    if (checkBit(data[index].byte_3, 7)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(23);
    }
    if (checkBit(data[index].byte_4, 0)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(24);
    }
    if (checkBit(data[index].byte_4, 1)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(25);
    }
    if (checkBit(data[index].byte_4, 2)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(26);
    }
    if (checkBit(data[index].byte_4, 3)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(27);
    }
    if (checkBit(data[index].byte_4, 4)) {
        cmn::CommonRuraData::getSingleton()->setEnableRura(28);
    }

    cmn::CommonRuraData::getSingleton()->setGlobalRuraFlagAll();
    func_02057f80(&param::EventFlag::data_);
    g_Stage.timestop_ = 0;
}

THUMB void status::Status::setFlagShopIndex(int index)
{
    flagShopIndex_ = index;
}

THUMB void status::Status::setFlagShopExec()
{
    if (flagShopIndex_ != -1) {
        param::Event* event = param::Event::getFileData(flagShopIndex_);
        char floor[10];
        func_020882d4(floor, 0, 10);
        dss::DssUtils::strcpy_s(floor, 10, event->floor);
        func_02057f80(&data_020c7830);
        func_0200a6c8();
        func_0200a734();
        initialize();
        setEventParty(flagShopIndex_);
        flagShopIndex_ = -1;
    }
}
