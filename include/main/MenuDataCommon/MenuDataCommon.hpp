#pragma once
#include <globaldefs.h>
#include "GameInfo.hpp"
#include "main/status/HaveStatusInfo.hpp"
#include "main/status/ExcelParam.hpp"


struct MenuDataCommon{
    static int getRootMenuKind(int index);
    static int getRootMenuName(int index);
    static int getEquipKind(int index);
    static int getAbilityKind(int index);
    static int getStatus(int index, status::HaveStatusInfo *statusInfo);
    static int getItemUseCommand(int index);
    static int getRuraName(int index);
    static void getShopCommand(int* command, bool bank);
    static void getHighAndLowCommand(int* command, bool win);
    static void getChurchCommand(int* command, bool extra);
    static int getOpponent(int index);
    static int getSuretigaiRootMenu(int index);
    static int getSuretigaiSex(int index);
    static int getSurechigaiAetas(int index);
    static int getSurechigaiSkill(int index);
    static int getItemMessage(int index);
    static int getItemMessageNo(int itemID);
    static int getItemMessageNo2(int itemID);
    static int convMessage(status::HaveStatusInfo* info, int messageId);
};

extern char takai[]; // data_020bebd8 "@たかい";
extern char hikui[]; // data_020bebe0 "@ひくい";

struct ItemUseCommandTable {
    int cmd[6];
};
struct RuraMoveName {
    int name[42]; 
};
 struct OpponentTable {
    int v[5];
};
struct SuretigaiRootMenuTable {
    int v[5];
};
struct SuretigaiSexTable {
    int v[3];
};

struct ItemMessageTable {
    int v[24];
};

struct AbilityKindTable {
    int v[9];
};

struct EquipKindTable {
    int v[5];
};

struct RootMenuNameTable {
    int v[6];
};

struct RootMenuKindTable {
    int v[6];
};

extern const SuretigaiSexTable       suretigaiSexTable_;       // 0x020b5dbc
extern const OpponentTable           opponentTable_;           // 0x020b5dc8
extern const EquipKindTable          equipKindTable_;          // 0x020b5ddc
extern const SuretigaiRootMenuTable  suretigaiRootMenuTable_;  // 0x020b5df0
extern const ItemUseCommandTable     ItemUseCommand_;          // 0x020b5e04
extern const RootMenuKindTable       rootMenuKindTable_;       // 0x020b5e1c
extern const RootMenuNameTable       rootMenuNameTable_;       // 0x020b5e34
extern const AbilityKindTable        abilityKindTable_;        // 0x020b5e4c
extern const ItemMessageTable        itemMessageTable_;        // 0x020b5e70
extern const RuraMoveName            ruraMoveName_;            // 0x020b5ed0

extern "C" int  func_02033584(void);




