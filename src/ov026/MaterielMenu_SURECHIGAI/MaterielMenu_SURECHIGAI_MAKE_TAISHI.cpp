#include "ov026/MaterielMenu_SURECHIGAI/MaterielMenu_SURECHIGAI.hpp"
#include "main/menu/TownMenu_MESSAGE.hpp"
#include "main/param/Param.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/status/PartyStatus.hpp"
#include "main/profile/Profile.hpp"
#include "ov016/MenuTemplate/MenuTemplate_materiel.hpp"
#include "ov016/UnkMaterielMenuDraw/UnkMaterielMenuDraw_0216fb14.hpp"

THUMB void MaterielMenu_SURECHIGAI_MAKE_TAISHI::menuSetup()
{
    status::g_Party.setPlayerMode();
    data_020f0078 = 1;
    menuItem_.setup(menu::MenuItem::MENUITEM_TYPE_TOUCH_PAD_CANCEL, menu::MenuItem::CURSORTYPE_ACTIVE);
    menuItem_.active_ = 0;
    navigator_.setupBase();
    navigator_.setup(6, 2, 50);
    mode_ = 0;
    firstFlag_ = 1;
    changeTaishi_ = 0;
    func_0203aa00(&data_020f0078);
    int level = func_02038140(func_02037da4());
    if (level == 0) {
        level = 1;
    }
    for (int i = 0; i < 48; i++) {
        if (status::excelParam.surechigai_[i].level <= level) {
            func_0203ab20(&data_020f0078, i, 1);
        }
    }
    if (level == 5) {
        func_0203ab20(&data_020f0078, 48, 1);
        func_0203ab20(&data_020f0078, 49, 1);
    }
}

THUMB void MaterielMenu_SURECHIGAI_MAKE_TAISHI::menuExecute()
{
    int count = 12;
    if (navigator_.getPageNo() == 4) {
        count = 2;
    }
    MenuTemplate_materiel::surechigaiSelectObject(&menuItem_, menuItem_.active_, count);
}

THUMB void MaterielMenu_SURECHIGAI_MAKE_TAISHI::menuDraw()
{
    if (data_020ed1bc.isMessageWAITPROG()) {
        int active = menuItem_.active_;
        unkfunc_0216fe9c(mode_, active, navigator_.getPageNo(), navigator_.getPageMaxCount());
        menuItem_.drawActive();
    }
    if (mode_ == 1) {
        unkfunc_0216fe9c(mode_, func_0203a5ec(&data_020f0078), navigator_.getPageNo(), navigator_.getPageMaxCount());
    }
}

THUMB void MaterielMenu_SURECHIGAI_MAKE_TAISHI::menuUpdate()
{
    if (data_020ed1bc.isOpen()) {
        if (data_020ed1bc.isMessageWAITPROG()) {
            if (firstFlag_ == 1) {
                redraw_ = 1;
                firstFlag_ = 0;
                return;
            }
            navigator_.setup(6, 2, 50);
            int result = MenuUpdate_Assist::menuSelect(menuItem_, navigator_);
            if (result != 0) {
                if (result == 2) {
                    int index = navigator_.getIndex(menuItem_.active_);
                    if (func_0203ab30(&data_020f0078, index) == 1) {
                        data_020ed1bc.clearMessageWAITPROG();
                        data_020ed1bc.close();
                        data_020ed1bc.openMessageForTALK();
                        data_020ed1bc.addMessage(0x92a73);
                        func_0203a5bc(&data_020f0078, index);
                        mode_ = 1;
                    }
                }
                if (result == 3 && changeTaishi_ == 1) {
                    data_020ed1bc.close();
                    data_020ed1bc.openMessageForTALK();
                    data_020ed1bc.addMessage(0x92a2f);
                    mode_ = 2;
                    return;
                }
                redraw_ = 1;
            }
            return;
        }
        if ((unsigned int)(data_020ed1bc.stat_ - 1) <= 1) {
            data_020ed1bc.close();
            if (mode_ == 2) {
                close();
                gMaterielMenu_SURECHIGAI_ROOT.open();
                func_0203aa58(&data_020f0078);
                func_0203aaac(&data_020f0078);
                return;
            }
            if (firstFlag_ == 0) {
                close();
                gMaterielMenu_NameEdit.open();
                gMaterielMenu_NameEdit.returnMenu_ = MaterielMenu_NameEdit::RETURN_MENU_SURECHIGAI;
                gMaterielMenu_NameEdit.clearName();
                gMaterielMenu_NameEdit.setNameEditMode();
                if (changeTaishi_ == 1) {
                    gMaterielMenu_NameEdit.unk_98 = 1;
                }
            }
        }
        return;
    }
    if (firstFlag_ == 1) {
        data_020ed1bc.openMessageForTALK();
        if (changeTaishi_ == 1) {
            data_020ed1bc.addMessageNOWAIT(0x92abd);
        } else {
            data_020ed1bc.addMessage(0x92a6e);
            data_020ed1bc.addMessageNOWAIT(0x92a6f);
        }
        data_020ed1bc.addMessageWAITKEY();
    }
}
