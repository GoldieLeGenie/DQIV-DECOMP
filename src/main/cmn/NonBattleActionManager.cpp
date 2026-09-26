#include "main/cmn/NonBattleActionManager.hpp"
#include "ov000/TownStageManager.hpp"
#include "ov001/FieldStage.hpp"
#include "ov000/TownPlayerManager.hpp"
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
                if (func_02058114(data_0210bb94, 12) == 1) {
                    func_ov000_021341ec(func_ov000_02132a90(), 1);
                } else {
                    func_ov001_02127b28();
                    PlayerManager::setLock(1);
                }
                if (func_02058114(data_0210bb94, 12)) {
                    func_ov000_02139668()->fldObject_.m_flag &= ~4;
                    func_020499a4(1);
                    if (g_Stage.getTimeZone() == TIME_ZONE_DAYTIME || g_Stage.getTimeZone() == TIME_ZONE_EVENING) {
                        g_Stage.setTimeZone(TIME_ZONE_NIGHT);
                        g_Stage.setWorldTime(0xa40);
                    } else {
                        g_Stage.setTimeZone(TIME_ZONE_DAYTIME);
                        g_Stage.setWorldTime(0x100);
                    }
                } else if (func_02058114(data_0210bb94, 14)) {
                    func_ov001_0212b948()->pause_ = 0;
                    func_0204b694(1);
                    if (g_Stage.getWorldTime() < 0x840) {
                        g_Stage.setTimeZone(TIME_ZONE_NIGHT);
                        g_Stage.setWorldTime(0xa40);
                    } else {
                        g_Stage.setTimeZone(TIME_ZONE_DAYTIME);
                        g_Stage.setWorldTime(0x100);
                    }
                }
                g_Global.fadeOutBlack(0xf);
                func_020882b0(g_Global.getMapName(), data_020c1328);
                ((ExtraMapLink*)&data_020ed28c)->setRanaLink();
                g_Global.setRanarutaFlag(false);
                return;
            case ACTION_RIREMITO:
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (func_02058114(data_0210bb94, 12) == 1) {
                    func_ov000_021341ec(func_ov000_02132a90(), 0);
                } else {
                    func_ov001_02127b28();
                    PlayerManager::setLock(0);
                }
                if (func_02058114(data_0210bb94, 12)) {
                    func_ov000_02139668()->fldObject_.m_flag &= ~4;
                    func_020499a4(1);
                } else if (func_02058114(data_0210bb94, 14)) {
                    func_ov001_0212b948()->pause_ = 0;
                    func_0204b694(1);
                }
                g_cmnPartyInfo.setMenuAction(MENU_RIREMIT);
                g_Global.setRanarutaFlag(false);
                return;
            case ACTION_BATTLE:
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (func_02058114(data_0210bb94, 12) == 1) {
                    func_ov000_021341ec(func_ov000_02132a90(), 0);
                } else {
                    func_ov001_02127b28();
                    PlayerManager::setLock(0);
                }
                if (func_02058114(data_0210bb94, 12)) {
                    func_ov000_02139668()->fldObject_.m_flag &= ~4;
                    func_020499a4(1);
                } else if (func_02058114(data_0210bb94, 14)) {
                    func_ov001_0212b948()->pause_ = 0;
                    func_0204b694(1);
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
                    if (func_02058114(data_0210bb94, 12) == 1) {
                        func_ov000_021341ec(func_ov000_02132a90(), 0);
                        func_ov000_02132a90()->flagMapLink_ = 1;
                    } else {
                        func_ov001_02127b28();
                        PlayerManager::setLock(0);
                    }
                    return;
                }
                if (!func_0202adc4()->unk_c->vf08()) {
                    return;
                }
                if (func_02058114(data_0210bb94, 12)) {
                    func_ov000_02139668()->fldObject_.m_flag &= ~4;
                    func_020499a4(1);
                } else if (func_02058114(data_0210bb94, 14)) {
                    func_ov001_0212b948()->pause_ = 0;
                    func_0204b694(1);
                }
                if (func_0202adc4()->unk_150 != 0) {
                    func_ov000_02132a90()->flagMapLink_ = 1;
                    func_0202aea4(func_0202adc4());
                    func_02030278(func_0202adc4()->unk_130, 0);
                    func_ov000_0213b5a0(&func_ov000_02132a90()->unk_c);
                    func_ov000_02137f2c();
                    func_ov000_02138210();
                    func_02049b94();
                    func_02047a28(func_ov000_02139668());
                    ((TownSystem*)func_ov000_02132228())->defaultSELock_ = 0;
                    func_0208214c(data_0211c4f0, 0, 0x10);
                    waitTurn_ = 1;
                    return;
                }
                g_Global.fadeOutBlack(0x14);
                func_0202adc4();
                data_020edc40 = 1;
                func_ov000_02133eac(func_ov000_02132a90(), 4);
                g_Global.setRanarutaFlag(false);
                if (func_02058114(data_0210bb94, 12) == 1) {
                    func_ov000_021341ec(func_ov000_02132a90(), 0);
                    func_ov000_02133bfc(func_ov000_02132a90());
                } else {
                    func_ov001_02127b28();
                    PlayerManager::setLock(0);
                }
                return;
        }
    } else {
        if (func_02058114(data_0210bb94, 12) == 1) {
            func_ov000_021341ec(func_ov000_02132a90(), 1);
        } else {
            func_ov001_02127b28();
            PlayerManager::setLock(1);
        }
        switch (status_) {
            case ACTION_NONE:
                break;
            case ACTION_RANARUTA:
                SoundManager::playSe(0x23d, 0);
                func_0202aec4(func_0202adc4(), 5);
                if (func_02058114(data_0210bb94, 12)) {
                    if (g_Stage.getTimeZone() == TIME_ZONE_DAYTIME || g_Stage.getTimeZone() == TIME_ZONE_EVENING) {
                        func_0202adc4()->unk_cc = 0;
                    } else {
                        func_0202adc4()->unk_cc = 1;
                    }
                } else if (func_02058114(data_0210bb94, 14)) {
                    if (g_Stage.getWorldTime() < 0x840) {
                        func_0202adc4()->unk_cc = 0;
                    } else {
                        func_0202adc4()->unk_cc = 1;
                    }
                    func_ov001_02129bfc(func_ov001_02127b28());
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
                ((TownSystem*)func_ov000_02132228())->defaultSELock_ = 1;
                break;
        }
        startFlag_ = 1;
    }
}




ARM void cmn::NonBattleActionManager::setAction(ACTION_EFFECT action)
{
    waitTurn_ = 0;
    if (func_02058114(data_0210bb94, 12)) {
        func_ov000_02139668()->fldObject_.m_flag |= 4;
        func_020499a4(0);
    } else if (func_02058114(data_0210bb94, 14)) {
        func_ov001_0212b948()->pause_ = 1;
        func_0204b694(0);
    }
    status_ = action;
    startFlag_ = 0;
}