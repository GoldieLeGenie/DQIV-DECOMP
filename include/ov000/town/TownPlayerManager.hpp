#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/MoveBase.hpp"

struct TownPartyDraw;
struct TownPartyAction;
extern "C" void func_ov000_0213b55c(TownPartyDraw* draw, int sleep);
extern "C" dss::Fix32Vector3 func_ov000_0213beec(TownPartyAction* party, int index);

struct TownPartyDraw {
    char unk_0000[0x12a4];
    int count_;                             // 0x12A4

    void setSleep(int sleep) { func_ov000_0213b55c(this, sleep); }
};

struct TownPartyAction {
    char unk_0[0xc];
    int moveFirstFlag_;                     // 0x0C
    char unk_10[0x16c4 - 0x135c];
};

struct TownPlayerManager : cmn::PlayerManager {
    virtual void setPosition(dss::Fix32Vector3& pos);
    virtual dss::Fix32Vector3 getPosition();
    virtual short getDirection();
    virtual void resetParty();

    TownPartyDraw partyDraw_;               // 0x000C
    char unk_12b4[0x12fc - 0x12b4];
    int actionType_;                        // 0x12FC player_.actionType_
    char unk_1300[0x134c - 0x1300];
    TownPartyAction party_;                 // 0x134C
    int rotLock_;                           // 0x16C4
    int scriptType_;                        // 0x16C8
    cmn::MoveBase scriptMove_;              // 0x16CC
    int searchMapUid_;                      // 0x1720
    char unk_1724[0x174c - 0x1724];
    int scriptRotFlag_;                     // 0x174C
    int scriptColl_;                        // 0x1750
    int riseupIndex_;                       // 0x1754
    int mapChangeCounter_;                  // 0x1758
    int nextEncount_;                       // 0x175C
    int encountTile_;                       // 0x1760
    int searchAction_;                      // 0x1764
    int wait_;                              // 0x1768
    int church_;                            // 0x176C
    int walkCounter_;                       // 0x1770
    int menuSearch_;                        // 0x1774
    int defaultClip_;                       // 0x1778
    int mapFKLock_;                         // 0x177C
    int effectPosFlag_;                     // 0x1780
    int eventEncount_;                      // 0x1784
    int battleLose_;                        // 0x1788
    int notIntoTenkujou_;                   // 0x178C

    void setLockRot(int lock) { rotLock_ = lock; }
    dss::Fix32Vector3 getPartyDrawPosition(int index) { return func_ov000_0213beec(&party_, index); }
};
