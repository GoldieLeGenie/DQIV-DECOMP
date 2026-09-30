#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/cmn/PlayerManager.hpp"

struct FieldPlayer;
struct FieldPartyDraw;
struct FieldCarrirerDraw;
struct FieldPlayerManager;

extern "C" {
    FieldPlayerManager* func_ov001_02127b28(void);                                  // FieldPlayerManager::getSingleton
    void func_ov001_02125eac(FieldPlayer* self, int type);                          // FieldPlayer::setMoveType
    void func_ov001_02122b28(FieldCarrirerDraw* self, dss::Fix32Vector3 pos);        // FieldCarrirerDraw::setPosition
    void func_ov001_0212b7e0(FieldPartyDraw* self);                                 // FieldPartyDraw::setDrawNone
}

struct FieldPlayer {
    char unk_0000[0xb0];

};

struct FieldParty {
    char unk_0000[0x60];
};

struct FieldPartyDraw {
    char unk_0000[0x70c];

};

struct FieldCarrirerDraw {
    char unk_0000[0x18];

};

struct FieldShipDraw : FieldCarrirerDraw {
    char unk_0018[0x1b4];
    int ride_;                                                                      // 0x1CC
};

struct FieldPlayerManager : cmn::PlayerManager {
    char unk_000c[0x58];
    FieldPlayer player_;                                                            // 0x064
    FieldParty party_;                                                              // 0x114
    FieldPartyDraw partyDraw_;                                                      // 0x174
    FieldShipDraw shipDraw_;                                                        // 0x880
};
