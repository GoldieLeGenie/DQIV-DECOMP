#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/cmn/PlayerManager.hpp"
#include "main/cmn/MoveBase.hpp"
#include "main/object/SpriteCharacter.hpp"

struct FieldPlayer;
struct FieldPartyDraw;
struct FieldCarrirerDraw;
struct FieldPlayerManager;

extern "C" {
    void func_ov001_02125eac(FieldPlayer* self, int type);                          // FieldPlayer::setMoveType
    void func_ov001_02122b28(FieldCarrirerDraw* self, dss::Fix32Vector3 pos);        // FieldCarrirerDraw::setPosition
    void func_ov001_0212b7e0(FieldPartyDraw* self);                                 // FieldPartyDraw::setDrawNone
    int func_ov001_02125eb4(FieldPlayer* self);                                     // FieldPlayer::getMoveType
    void func_ov001_02129fa8(FieldPlayerManager* self, int flag);                   // FieldPlayerManager::setScriptBalloon
    void func_ov001_0212a080(FieldPlayerManager* self, dss::Fix32Vector3 target, dss::Fix32 rate, int absFlag); // FieldPlayerManager::setSimpleMove
    void func_ov001_0212a108(FieldPlayerManager* self, dss::Fix32 target, int line); // FieldPlayerManager::setDirectionMove
    void func_ov001_0212a18c(FieldPlayerManager* self, int direction);              // FieldPlayerManager::setScriptGetDownShip
    int func_ov001_0212a2a4(FieldPlayerManager* self);                              // FieldPlayerManager::isEndScriptGetDownShip
}

struct FieldPlayer {
    char unk_0000[0xb0];

};

struct FieldParty {
    char unk_0000[0x60];
};


struct FieldPartyDraw {
    SpriteCharacter partyCharacter_[8];                                             // 0x000
    char unk_6e0[0x2c];                                                             // 0x6E0
};

struct FieldCarrirerDraw {
    char unk_0000[0x18];

};

struct FieldShipDraw : FieldCarrirerDraw {
    char unk_0018[0x1b4];
    int ride_;                                                                      // 0x1CC
};

struct FieldBalloonDraw : FieldCarrirerDraw {
};

struct FieldPlayerManager : cmn::PlayerManager {
    cmn::MoveBase scriptMove_;                                                      // 0x00C
    int scriptMoveFlag_;                                                            // 0x060
    FieldPlayer player_;                                                            // 0x064
    FieldParty party_;                                                              // 0x114
    FieldPartyDraw partyDraw_;                                                      // 0x174
    FieldShipDraw shipDraw_;                                                        // 0x880
    FieldBalloonDraw balloonDraw_;                                                  // 0xA50

    virtual void setPosition(dss::Fix32Vector3& pos);
    virtual dss::Fix32Vector3 getPosition();
    virtual short getDirection();
    virtual void resetParty();
    static FieldPlayerManager* getSingleton();
    int getDamageColor(int type);
    void inputPad(int padDir);
    void inputClear();
};
