#include "ov016/MaterielMenu_PICTUREBOOK/MaterielMenu_PICTUREBOOK.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/sound/MenuSoundManager.hpp"
#include "main/cmn/ExtraMapLink.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/BattleResult.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/StageStatus.hpp"

THUMB void MaterielMenu_PICTUREBOOK_ROOT::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 5);
    m_bookData = status::excelParam.bookData_;
    m_activeMonster = func_ov016_0216ff2c()->activeItem_;
    m_nowPage = func_ov016_0216ff2c()->activeItemPage_;
    unk_98 = 1;
    m_state = 0;
    menuItem_.active_ = m_activeMonster;
    func_02023324(&navigator_);
    func_02023504(&navigator_, 2, 8, MaterielMenu_PICTUREBOOK_DETAIL::MAX_MONSTER_NO + 1);
    int find = 0;
    data_ov016_02186288.isOpen_ = 0;
    if (m_activeMonster == 0 && m_nowPage == 0) {
        for (int i = 0; i < MaterielMenu_PICTUREBOOK_DETAIL::MAX_MONSTER_NO + 1; i++) {
            for (int j = 0; j < 309; j++) {
                if (j == m_bookData[i].name) {
                    if (status::g_BattleResult.isEncount(i) == true) {
                        m_nowPage = i / 16;
                        m_activeMonster = i % 16;
                        find = 1;
                    }
                    break;
                }
            }
            if (find == 1) {
                break;
            }
        }
    }
    func_02023344(&navigator_, m_nowPage);
    getMonsterFlag();
    int activeItem = m_activeMonster;
    func_ov016_0216ff2c()->activeItem_ = activeItem;
    int activeItemPage = m_nowPage;
    func_ov016_0216ff2c()->activeItemPage_ = activeItemPage;
}

THUMB void MaterielMenu_PICTUREBOOK_ROOT::menuExecute()
{
    if (m_nowPage == 13) {
        func_ov016_02177a5c(&menuItem_, m_activeMonster, 2);
    } else {
        func_ov016_02177a5c(&menuItem_, m_activeMonster, 16);
    }
}

THUMB void MaterielMenu_PICTUREBOOK_ROOT::menuDraw()
{
    if (status::g_BattleResult.getEncountCount() != 0) {
        func_ov016_0216fda0(monsterName_, monsterFlag_);
        if (m_state == 0 && !data_020ed1bc.isOpen()) {
            func_02051968(&menuItem_);
        }
    }
}

THUMB void MaterielMenu_PICTUREBOOK_ROOT::menuUpdate()
{
    if (!MenuSoundManager::getSingleton()->isPlaySound() && m_state == 1) {
        m_state = 0;
        data_020ed1bc.openMessageForMENU();
        data_020ed1bc.addMessage(0xc3d9c, 0xc3d9d);
    }
    if (data_020ed1bc.isOpen()) {
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            close();
            cmn::g_extraMapLink.setMonstarBookLink();
            g_Stage.returnBookFlag_ = 1;
        }
        return;
    }
    if (m_state == 1) {
        return;
    }
    func_02023504(&navigator_, 2, 8, MaterielMenu_PICTUREBOOK_DETAIL::MAX_MONSTER_NO + 1);
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        m_activeMonster = menuItem_.active_;
        int activeItem = m_activeMonster;
        func_ov016_0216ff2c()->activeItem_ = activeItem;
        if (m_nowPage != func_0202333c(&navigator_)) {
            m_nowPage = func_0202333c(&navigator_);
            int activeItemPage = m_nowPage;
            func_ov016_0216ff2c()->activeItemPage_ = activeItemPage;
            getMonsterFlag();
        }
        if (result == 2 && monsterFlag_[m_activeMonster] == 1) {
            close();
            data_ov016_02186288.isOpen_ = 1;
            data_ov016_02186288.open();
        }
        if (result == 3 && !checkCompletePictureBook()) {
            func_ov016_0216ff34(func_ov016_0216ff2c());
            close();
            cmn::g_extraMapLink.setMonstarBookLink();
            g_Stage.returnBookFlag_ = 1;
        }
        if (result == 7) {
            if (status::g_BattleResult.getEncountCount() == 0) {
                m_activeMonster = func_0202339c(&navigator_, m_activeMonster);
                m_nowPage = func_0202333c(&navigator_);
            } else {
                while (!checkPage()) {
                    m_activeMonster = func_02023364(&navigator_, m_activeMonster);
                    m_nowPage = func_0202333c(&navigator_);
                }
                getMonsterFlag();
            }
            int activeItem = m_activeMonster;
            func_ov016_0216ff2c()->activeItem_ = activeItem;
            int activeItemPage = m_nowPage;
            func_ov016_0216ff2c()->activeItemPage_ = activeItemPage;
        }
        if (result == 6) {
            if (status::g_BattleResult.getEncountCount() == 0) {
                m_activeMonster = func_02023364(&navigator_, m_activeMonster);
                m_nowPage = func_0202333c(&navigator_);
            } else {
                while (!checkPage()) {
                    m_activeMonster = func_0202339c(&navigator_, m_activeMonster);
                    m_nowPage = func_0202333c(&navigator_);
                }
                getMonsterFlag();
            }
            int activeItem = m_activeMonster;
            func_ov016_0216ff2c()->activeItem_ = activeItem;
            int activeItemPage = m_nowPage;
            func_ov016_0216ff2c()->activeItemPage_ = activeItemPage;
        }
        redraw_ = 1;
    }
}

THUMB bool MaterielMenu_PICTUREBOOK_ROOT::checkPage()
{
    int start = m_nowPage * 16;
    for (int i = start; i < start + 16; i++) {
        if (status::g_BattleResult.isEncount(i) == true) {
            return true;
        }
    }
    return false;
}

THUMB void MaterielMenu_PICTUREBOOK_ROOT::getMonsterFlag()
{
    int start = m_nowPage * 16;
    int end = start + 16;
    for (int i = 0; i < 16; i++) {
        monsterName_[i] = -1;
        monsterFlag_[i] = 0;
    }
    if (m_nowPage == 13) {
        if (status::g_BattleResult.isEncount(m_nowPage * 16)) {
            monsterName_[0] = m_bookData[m_nowPage * 16].name;
            monsterName_[1] = m_bookData[m_nowPage * 16 + 1].name;
            monsterFlag_[0] = 1;
            monsterFlag_[1] = 1;
        }
        return;
    }
    int index = 0;
    for (int i = start; i < end; index++, i++) {
        if (status::g_BattleResult.isEncount(i) == true) {
            for (int j = 0; j < 309; j++) {
                if (j == m_bookData[i].name) {
                    monsterName_[index] = j;
                    monsterFlag_[index] = 1;
                    break;
                }
            }
        }
    }
}

THUMB bool MaterielMenu_PICTUREBOOK_ROOT::checkCompletePictureBook()
{
    if (status::g_Story.isCompleteCoin() == true) {
        return false;
    }
    if (status::g_BattleResult.getEncountCount() != MaterielMenu_PICTUREBOOK_DETAIL::MAX_MONSTER_NO + 1) {
        return false;
    }
    MenuSoundManager::getSingleton()->setPlaySound(MenuSoundManager::MENU_SOUND_FANFARE_L);
    status::g_Party.addCasinoCoin(300000);
    status::g_Story.setCompleteCoin(true);
    m_state = 1;
    return true;
}
