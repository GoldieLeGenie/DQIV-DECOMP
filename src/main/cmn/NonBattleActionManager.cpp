#include "main/cmn/NonBattleActionManager.hpp"
#include "main/global/GlobalDQ4.hpp"
#include "main/dss/DssUtils.hpp"
#include "main/object/SpriteCharacter.hpp"
#include "main/object/DisplayCharacter.hpp"
#include "ov000/town/TownStageManager.hpp"
#include "ov001/fld/FieldStage.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "main/cmn/CommonPartyInfo.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/ExtraMapLink.hpp"
#include "main/status/StageStatus.hpp"
#include "main/sound/SoundManager.hpp"

                  
char data_020c1328[8] = "field";
cmn::NonBattleActionManager cmn::g_NonBattleActionManager;

ARM cmn::NonBattleActionManager* cmn::NonBattleActionManager::getSingleton()
{
    return &g_NonBattleActionManager;
}

ARM void cmn::NonBattleActionManager::execute()
{
    if (startFlag_ != 0) {
        switch (status_) {
            case ACTION_RANARUTA:
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (data_0210bb94.unkfunc_02058114(12) == 1) {
                    TownPlayerManager::getSingleton()->setLock(1);
                } else {
                    FieldPlayerManager::getSingleton();
                    PlayerManager::setLock(1);
                }
                if (data_0210bb94.unkfunc_02058114(12)) {
                    TownStageManager::getSingleton()->stage_.m_fld.m_flag &= ~4;
                    BillboardCharacter::setAllCharaAnim(1);
                    if (g_Stage.getTimeZone() == TIME_ZONE_DAYTIME || g_Stage.getTimeZone() == TIME_ZONE_EVENING) {
                        g_Stage.setTimeZone(TIME_ZONE_NIGHT);
                        g_Stage.setWorldTime(0xa40);
                    } else {
                        g_Stage.setTimeZone(TIME_ZONE_DAYTIME);
                        g_Stage.setWorldTime(0x100);
                    }
                } else if (data_0210bb94.unkfunc_02058114(14)) {
                    fld::FieldStage::getSingleton()->fieldData.pause_ = 0;
                    SpriteCharacter::setAllCharaAnim(1);
                    if (g_Stage.getWorldTime() < 0x840) {
                        g_Stage.setTimeZone(TIME_ZONE_NIGHT);
                        g_Stage.setWorldTime(0xa40);
                    } else {
                        g_Stage.setTimeZone(TIME_ZONE_DAYTIME);
                        g_Stage.setWorldTime(0x100);
                    }
                }
                g_Global.fadeOutBlack(0xf);
                dss::strcmp(g_Global.getMapName(), data_020c1328);
                cmn::g_extraMapLink.setRanaLink();
                g_Global.setRanarutaFlag(false);
                return;
            case ACTION_RIREMITO:
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (data_0210bb94.unkfunc_02058114(12) == 1) {
                    TownPlayerManager::getSingleton()->setLock(0);
                } else {
                    FieldPlayerManager::getSingleton();
                    PlayerManager::setLock(0);
                }
                if (data_0210bb94.unkfunc_02058114(12)) {
                    TownStageManager::getSingleton()->stage_.m_fld.m_flag &= ~4;
                    BillboardCharacter::setAllCharaAnim(1);
                } else if (data_0210bb94.unkfunc_02058114(14)) {
                    fld::FieldStage::getSingleton()->fieldData.pause_ = 0;
                    SpriteCharacter::setAllCharaAnim(1);
                }
                g_cmnPartyInfo.setMenuAction(MENU_RIREMIT);
                g_Global.setRanarutaFlag(false);
                return;
            case ACTION_BATTLE:
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (data_0210bb94.unkfunc_02058114(12) == 1) {
                    TownPlayerManager::getSingleton()->setLock(0);
                } else {
                    FieldPlayerManager::getSingleton();
                    PlayerManager::setLock(0);
                }
                if (data_0210bb94.unkfunc_02058114(12)) {
                    TownStageManager::getSingleton()->stage_.m_fld.m_flag &= ~4;
                    BillboardCharacter::setAllCharaAnim(1);
                } else if (data_0210bb94.unkfunc_02058114(14)) {
                    fld::FieldStage::getSingleton()->fieldData.pause_ = 0;
                    SpriteCharacter::setAllCharaAnim(1);
                }
                g_Global.acceptBattle();
                g_Global.setRanarutaFlag(false);
                return;
            case ACTION_TRAVELDOOR:
                if (waitTurn_ > 0) {
                    if (--waitTurn_ != 0) {
                        return;
                    }
                    func_0208214c(data_0211c4f0, 0x10, 0);
                    func_02082144(data_0211c4f0, 0);
                    g_Global.setRanarutaFlag(false);
                    if (data_0210bb94.unkfunc_02058114(12) == 1) {
                        TownPlayerManager::getSingleton()->setLock(0);
                        TownPlayerManager::getSingleton()->flagMapLink_ = 1;
                    } else {
                        FieldPlayerManager::getSingleton();
                        PlayerManager::setLock(0);
                    }
                    return;
                }
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (data_0210bb94.unkfunc_02058114(12)) {
                    TownStageManager::getSingleton()->stage_.m_fld.m_flag &= ~4;
                    BillboardCharacter::setAllCharaAnim(1);
                } else if (data_0210bb94.unkfunc_02058114(14)) {
                    fld::FieldStage::getSingleton()->fieldData.pause_ = 0;
                    SpriteCharacter::setAllCharaAnim(1);
                }
                if (func_0202adc4()->unk_150 != 0) {
                    TownPlayerManager::getSingleton()->flagMapLink_ = 1;
                    func_0202aea4(func_0202adc4());
                    func_02030278(func_0202adc4()->unk_130, 0);
                    TownPlayerManager::getSingleton()->partyDraw_.requestCharacterReload();
                    TownCharacterManager::getSingleton()->requestCharacterReload();
                    func_02049b94();
                    TownStageManager::getSingleton()->stage_.execAnime();
                    TownSystem::getSingleton()->defaultSELock_ = 0;
                    func_0208214c(data_0211c4f0, 0, 0x10);
                    waitTurn_ = 1;
                    return;
                }
                g_Global.fadeOutBlack(0x14);
                func_0202adc4();
                data_020edc40 = 1;
                TownPlayerManager::getSingleton()->resetMapLink(RESET_EXIT_LOCK_TABI);
                g_Global.setRanarutaFlag(false);
                if (data_0210bb94.unkfunc_02058114(12) == 1) {
                    TownPlayerManager::getSingleton()->setLock(0);
                    TownPlayerManager::getSingleton()->execMapLink();
                } else {
                    FieldPlayerManager::getSingleton();
                    PlayerManager::setLock(0);
                }
                return;
        }
    } else {
        if (data_0210bb94.unkfunc_02058114(12) == 1) {
            TownPlayerManager::getSingleton()->setLock(1);
        } else {
            FieldPlayerManager::getSingleton();
            PlayerManager::setLock(1);
        }
        switch (status_) {
            case ACTION_NONE:
                break;
            case ACTION_RANARUTA:
                SoundManager::playSe(0x23d, 0);
                func_0202aec4(func_0202adc4(), 5);
                if (data_0210bb94.unkfunc_02058114(12)) {
                    if (g_Stage.getTimeZone() == TIME_ZONE_DAYTIME || g_Stage.getTimeZone() == TIME_ZONE_EVENING) {
                        func_0202adc4()->unk_cc = 0;
                    } else {
                        func_0202adc4()->unk_cc = 1;
                    }
                } else if (data_0210bb94.unkfunc_02058114(14)) {
                    if (g_Stage.getWorldTime() < 0x840) {
                        func_0202adc4()->unk_cc = 0;
                    } else {
                        func_0202adc4()->unk_cc = 1;
                    }
                    FieldPlayerManager::getSingleton()->savePartyDrawInfo();
                }
                break;
            case ACTION_RIREMITO:
                func_0202aec4(func_0202adc4(), 6);
                break;
            case ACTION_BATTLE:
                func_0202aec4(func_0202adc4(), 4);
                break;
            case ACTION_TRAVELDOOR:
                SoundManager::playSe(0x464, 0);
                func_0202aec4(func_0202adc4(), 3);
                TownSystem::getSingleton()->defaultSELock_ = 1;
                break;
        }
        startFlag_ = 1;
    }
}




ARM void cmn::NonBattleActionManager::setAction(ACTION_EFFECT action)
{
    waitTurn_ = 0;
    if (data_0210bb94.unkfunc_02058114(12)) {
        TownStageManager::getSingleton()->stage_.m_fld.m_flag |= 4;
        BillboardCharacter::setAllCharaAnim(0);
    } else if (data_0210bb94.unkfunc_02058114(14)) {
        fld::FieldStage::getSingleton()->fieldData.pause_ = 1;
        SpriteCharacter::setAllCharaAnim(0);
    }
    status_ = action;
    startFlag_ = 0;
}