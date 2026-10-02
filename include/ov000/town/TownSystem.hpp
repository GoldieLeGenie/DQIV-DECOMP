#pragma once
#include "main/sound/SoundManager.hpp"
#include "globaldefs.h"
#include "main/dss/Render.hpp"
#include "main/status/ExcelParam.hpp"

struct TownSystem;
struct TownStageManager;
struct TownFurnitureManager;
struct TownPlayerManager;
struct UnkManager_0202adc4;
namespace encount { struct Encount; }

extern "C" {
    void func_ov000_02142858(status::ExcelParam* param);                   // ExcelParam::setupTown
    void func_ov000_021428b4(status::ExcelParam* param);                   // ExcelParam::setupTownInitialize
    void func_ov000_021428b8(status::ExcelParam* param);                   // ExcelParam::cleanupTownInitialize
    void func_ov000_02142898(status::ExcelParam* param);                   // ExcelParam::cleanupTown
    void* func_ov000_02143030(void);                                       // TownOpeningManager::getSingleton
    void func_ov000_02143084(void* self);                                  // TownOpeningManager::setup
    void func_ov000_02143600(void* self);                                  // TownOpeningManager::cleanup
    void func_ov000_02143978(void* self);                                  // TownOpeningManager::execute
    void func_ov000_021436b0(void* self);                                  // TownOpeningManager::draw
    void func_02049ba4(void);
    void func_02049eb4(void);
    void func_0202ace4(UnkManager_0202adc4* self);
    void func_0202adb4(UnkManager_0202adc4* self);
    void func_0202ad28(UnkManager_0202adc4* self);
    void func_0202ad98(UnkManager_0202adc4* self);
    int  func_0202af54(UnkManager_0202adc4* self);
    int  func_0200c020(void);                                              // StageLink::getTownExitIndex
}

struct TownSystem {
    Render render_;                                                                 // 0x000
    int playExitSE_;                                                                // 0x608
    int defaultSELock_;                                                             // 0x60C
    int scriptLock_;                                                                // 0x610
    int trigger_;                                                                   // 0x614
    int fadeCount_;                                                                 // 0x618

    TownSystem();
    static TownSystem* getSingleton();
    void unkfunc_02132210();
    void initialize();
    void terminate();
    void execute();
    void draw();
    void bookingMenu();
    void playTownExitSE()
    {
        if (playExitSE_ && !defaultSELock_) {
            func_02055a04(0x131);
        }
    }
};
