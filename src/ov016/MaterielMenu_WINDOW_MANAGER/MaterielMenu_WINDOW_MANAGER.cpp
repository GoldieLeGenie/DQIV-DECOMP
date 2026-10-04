#include "ov016/MaterielMenu_WINDOW_MANAGER/MaterielMenu_WINDOW_MANAGER.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/TalkSoundManager.hpp"
#include "main/global/Global.hpp"
#include "main/status/StageStatus.hpp"
#include "ov003/btl/BattleActorManager2.hpp"

THUMB MaterielMenu_WINDOW_MANAGER* MaterielMenu_WINDOW_MANAGER::getSingleton()
{
    static MaterielMenu_WINDOW_MANAGER windowManager;
    return &windowManager;
}

THUMB void MaterielMenu_WINDOW_MANAGER::openMaterielWindow(int menuType)
{
    menuType_ = (MATERIEL_MENU_WINDOW)menuType;
    int chara = g_cmnPartyInfo.partyTalk;
    switch (menuType) {
    case MENU_INN:
    case MENU_INN_TYPE2:
        if (extraInnType_ != TYPE_BATTLE) {
            func_ov016_0216ff34(func_ov016_0216ff2c());
            ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        }
        func_02039460(1);
        data_ov016_02185b28.open();
        break;
    case MENU_CHURCH:
    case MENU_CHURCH_TYPE2:
        func_02039460(2);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_021877a4.open();
        break;
    case MENU_CHURCH_MIRACLE:
        func_02039460(2);
        data_ov016_02187050.open();
        break;
    case MENU_SHOP_WEAPON:
    case MENU_SHOP_PROTECTOR:
    case MENU_SHOP_ITEM:
    case MENU_SHOP_WEAPON_TYPE2:
    case MENU_SHOP_PROTECTOR_TYPE2:
    case MENU_SHOP_ITEM_TYPE2:
        func_02039460(3);
        if (extraInnType_ != TYPE_BATTLE) {
            ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        }
        MaterielMenu_SHOP_MANAGER::getSingleton()->allClear();
        MaterielMenu_SHOP_MANAGER::getSingleton()->openShopMenu(menuType);
        break;
    case MENU_CHANGE_GIFT:
    case MENU_CHANGE_GIFT_TYPE2:
        func_02039460(3);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        MaterielMenu_SHOP_MANAGER::getSingleton()->allClear();
        MaterielMenu_SHOP_MANAGER::getSingleton()->setShopType(menuType);
        data_ov016_02185928.open();
        break;
    case MENU_COIN_SALEROOM:
        func_02039460(4);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_021861ec.open();
        break;
    case MENU_CASINO_SLOT:
        data_ov016_02186a14.open();
        break;
    case MENU_CASINO_SLOT_ENTER:
        data_ov016_021859b8.open();
        break;
    case MENU_CASINO_POKER:
        data_ov016_02186324.open();
        break;
    case MENU_CASINO_FIGHTSTADIUM:
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02186914.open();
        break;
    case MENU_BANK:
        func_02039460(5);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02186150.open();
        break;
    case MENU_MEDAL_KING:
        func_02039460(6);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02185a60.open();
        break;
    case MENU_EXTRA_FOX_TOWN:
        func_02039460(3);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        MaterielMenu_SHOP_MANAGER::getSingleton()->allClear();
        MaterielMenu_SHOP_MANAGER::getSingleton()->openShopMenu(MENU_SHOP_ITEM);
        MaterielMenu_SHOP_MANAGER::getSingleton()->setExtraShop(1);
        break;
    case MENU_EXTRA_BONMOL_CASTLE:
        func_02039460(3);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        MaterielMenu_SHOP_MANAGER::getSingleton()->allClear();
        MaterielMenu_SHOP_MANAGER::getSingleton()->setExtraShop(2);
        data_ov016_02186d28.open();
        break;
    case MENU_EXTRA_IMUL:
        break;
    case MENU_EXTRA_PRESENT_EXP:
        func_02039460(7);
        data_ov016_02186460.open();
        break;
    case MENU_EXTRA_COLOSSEUM:
        func_02039460(8);
        data_ov016_02185a34.open();
        break;
    case MENU_EXTRA_HOSTAGE:
        func_02039460(9);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02186020.open();
        break;
    case MENU_EXTRA_NENE:
        func_02039460(10);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_021860b8.open();
        break;
    case MENU_EXTRA_CHAPTER_TITLE:
        func_02039460(11);
        data_ov016_02185a90.setChapterTitleInfo(chapter_, titleFlag_);
        data_ov016_02185a90.open();
        break;
    case MENU_SAVE:
        func_02039460(2);
        data_ov016_02186728.open();
        if (type_ == 0) {
            data_ov016_02186728.saveType_ = MaterielMenu_SAVE::TYPE_CHAPTER;
        }
        if (type_ == 1) {
            ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
            data_ov016_02186728.saveType_ = MaterielMenu_SAVE::TYPE_LASTDUNGEON;
        }
        if (type_ == 2) {
            data_ov016_02186728.saveType_ = MaterielMenu_SAVE::TYPE_CLEAR;
        }
        if (type_ == 3) {
            data_ov016_02186728.saveType_ = MaterielMenu_SAVE::TYPE_SURECHIGAI;
        }
        break;
    case MENU_EXTRA_SIDEJOB:
        func_02039460(12);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02185948.open();
        break;
    case MENU_SURECHIGAI_MAKE_TAISHI:
        func_02039460(13);
        data_ov016_02185e58.open();
        break;
    case MENU_SURECHIGAI_ROOT:
        func_02039460(13);
        ui_MsgSndSet(cmn::g_talkSound.getCharacterVoice(chara));
        data_ov016_02185dc4.open();
        break;
    case MENU_SURECHIGAI_MAP_NAME:
        func_02039460(13);
        data_ov016_021865a4.open();
        func_0203b6cc(&data_ov016_021865a4);
        if (editType_ == EDIT_TOWN_NAME) {
            data_ov016_021865a4.returnMenu_ = MaterielMenu_NameEdit::RETURN_MENU_SURECHIGAI_TOWNNAME;
            func_0203aff0(&data_ov016_021865a4);
        } else if (editType_ == EDIT_MESSAGE) {
            data_ov016_021865a4.returnMenu_ = MaterielMenu_NameEdit::RETURN_MENU_SURECHIGAI_MESSAGE;
            func_0203b004(&data_ov016_021865a4);
        }
        break;
    }
    endWindow_ = 0;
}

THUMB void MaterielMenu_WINDOW_MANAGER::closeMaterielWindow()
{
    switch (menuType_) {
    case MENU_INN:
    case MENU_INN_TYPE2:
        data_ov016_02185b28.close();
        data_ov016_02185b28.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        g_Stage.crusingPeopleEncount_ = 0;
        break;
    case MENU_CHURCH:
    case MENU_CHURCH_TYPE2:
    case MENU_CHURCH_MIRACLE:
        data_ov016_021877a4.close();
        data_ov016_02187050.close();
        data_ov016_021877a4.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_SHOP_WEAPON:
    case MENU_SHOP_PROTECTOR:
    case MENU_SHOP_ITEM:
    case MENU_SHOP_WEAPON_TYPE2:
    case MENU_SHOP_PROTECTOR_TYPE2:
    case MENU_SHOP_ITEM_TYPE2:
    case MENU_EXTRA_FOX_TOWN:
        MaterielMenu_SHOP_MANAGER::getSingleton()->setExtraShop(0);
        data_ov016_02185c10.close();
        data_ov016_02185c10.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        g_Stage.crusingPeopleEncount_ = 0;
        break;
    case MENU_CHANGE_GIFT:
    case MENU_CHANGE_GIFT_TYPE2:
        data_ov016_02185928.close();
        data_ov016_02185928.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_COIN_SALEROOM:
        data_ov016_021861ec.close();
        data_ov016_021859e0.close();
        data_ov016_021861ec.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_CASINO_SLOT:
        data_ov016_02186a14.close();
        data_ov016_02186a14.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        g_Global.startTown(g_Global.getPrevMapName());
        g_Stage.returnBookFlag_ = 1;
        break;
    case MENU_CASINO_SLOT_ENTER:
        data_ov016_021859b8.close();
        data_ov016_021859b8.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        g_Stage.returnBookFlag_ = 1;
        break;
    case MENU_CASINO_POKER:
        data_ov016_02186324.close();
        data_ov016_0218739c.close();
        data_ov016_02186e34.close();
        data_ov016_02186324.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_0218739c.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02186e34.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        g_Global.startTown(g_Global.getPrevMapName());
        g_Stage.returnBookFlag_ = 1;
        break;
    case MENU_CASINO_FIGHTSTADIUM:
        data_ov016_02186914.close();
        data_ov016_02186914.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_BANK:
        data_ov016_02186150.close();
        data_ov016_02186500.close();
        data_ov016_021863c0.close();
        data_ov016_02186150.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_MEDAL_KING:
        data_ov016_02185a60.close();
        data_ov016_02185a60.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_EXTRA_BONMOL_CASTLE:
        data_ov016_02186b14.close();
        data_ov016_02186d28.close();
        data_ov016_02186b14.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02186d28.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_EXTRA_IMUL:
    case MENU_EXTRA_HOSTAGE:
        break;
    case MENU_EXTRA_PRESENT_EXP:
        data_ov016_02186460.close();
        data_ov016_02186460.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_EXTRA_COLOSSEUM:
        data_ov016_02185a34.close();
        data_ov016_02185a34.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_EXTRA_NENE:
        data_ov016_021860b8.close();
        data_ov016_021860b8.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_EXTRA_CHAPTER_TITLE:
        data_ov016_02185a90.close();
        data_ov016_02185a90.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_SAVE:
        data_ov016_02186728.close();
        data_ov016_02186728.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        if (type_ == 3 && surechigaiStart_ == 0) {
            data_ov016_02185dc4.open();
            menuType_ = MENU_SURECHIGAI_ROOT;
            return;
        }
        break;
    case MENU_EXTRA_SIDEJOB:
        data_ov016_02185948.close();
        data_ov016_02185948.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02185990.close();
        data_ov016_02185990.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02185a08.close();
        data_ov016_02185a08.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_SURECHIGAI_MAKE_TAISHI:
        data_ov016_02185e58.close();
        data_ov016_02185e58.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02185ef0.close();
        data_ov016_02185ef0.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02185dc4.close();
        data_ov016_02185dc4.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_SURECHIGAI_ROOT:
        data_ov016_02185e58.close();
        data_ov016_02185e58.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        data_ov016_02185dc4.close();
        data_ov016_02185dc4.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    case MENU_SURECHIGAI_MAP_NAME:
        data_ov016_021865a4.close();
        data_ov016_021865a4.stat_ = menu::MenuBase::MENUBASE_STAT_OK;
        break;
    }
    if (extraInnType_ != TYPE_BATTLE) {
        func_ov016_0216ff34(func_ov016_0216ff2c());
    }
    endWindow_ = 1;
}
