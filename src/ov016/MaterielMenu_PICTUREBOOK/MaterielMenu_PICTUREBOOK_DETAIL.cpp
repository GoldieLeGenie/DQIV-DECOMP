#include "ov016/MaterielMenu_PICTUREBOOK/MaterielMenu_PICTUREBOOK.hpp"
#include "ov006/BookMonsterDraw.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/BattleResult.hpp"

THUMB void MaterielMenu_PICTUREBOOK_DETAIL::menuSetup()
{
    status::g_Party.setPlayerMode();
    func_02051900(&menuItem_, 3, 0);
    menuItem_.enableSE_ = 0;
    bookData_ = status::excelParam.bookData_;
    int activeItem = func_ov016_0216ff2c()->activeItem_;
    activeMonster_ = activeItem + func_ov016_0216ff2c()->activeItemPage_ * MONSTER_COUNT_IN_PAGE;
    func_02023324(&navigator_);
    func_02023504(&navigator_, 1, 1, MAX_MONSTER_NO + 1);
    func_02023344(&navigator_, activeMonster_);
    BookMonsterDraw::getSingleton()->setup(bookData_[activeMonster_].name);
}

THUMB void MaterielMenu_PICTUREBOOK_DETAIL::menuExecute()
{
    func_ov016_02177a78(&menuItem_);
}

THUMB void MaterielMenu_PICTUREBOOK_DETAIL::menuDraw()
{
    func_ov016_0216fda8(activeMonster_, bookData_[activeMonster_].name);
    func_02051968(&menuItem_);
}

THUMB void MaterielMenu_PICTUREBOOK_DETAIL::menuUpdate()
{
    func_02023504(&navigator_, 1, 1, MAX_MONSTER_NO + 1);
    int result = func_02023274(&menuItem_, &navigator_);
    if (result != 0) {
        if (result == 3) {
            int activeItem = activeMonster_ % MONSTER_COUNT_IN_PAGE;
            func_ov016_0216ff2c()->activeItem_ = activeItem;
            int activeItemPage = activeMonster_ / MONSTER_COUNT_IN_PAGE;
            func_ov016_0216ff2c()->activeItemPage_ = activeItemPage;
            close();
            data_ov016_0218727c.open();
        }
        if (result == 7) {
            activeMonster_ = func_020233cc(&navigator_, 0);
            checkPage(true);
            BookMonsterDraw::getSingleton()->setup(bookData_[activeMonster_].name);
        }
        if (result == 6) {
            activeMonster_ = func_020233cc(&navigator_, 0);
            checkPage(false);
            BookMonsterDraw::getSingleton()->setup(bookData_[activeMonster_].name);
        }
        redraw_ = 1;
    }
}

THUMB void MaterielMenu_PICTUREBOOK_DETAIL::checkPage(bool next)
{
    while (!status::g_BattleResult.isEncount(activeMonster_)) {
        if (next) {
            activeMonster_++;
            if (activeMonster_ > MAX_MONSTER_NO) {
                activeMonster_ = 0;
            }
        } else {
            activeMonster_--;
            if (activeMonster_ < 0) {
                activeMonster_ = MAX_MONSTER_NO;
            }
        }
    }
    func_02023344(&navigator_, activeMonster_);
}
