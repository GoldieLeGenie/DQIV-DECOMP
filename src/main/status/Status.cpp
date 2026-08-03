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
