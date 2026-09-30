#pragma once
#include "globaldefs.h"

struct Casino_Slot {
    int m_slot_tbl_type;        /* 0x00 */
    int unk_04;
    int m_bet_coin;             /* 0x08 */
    int m_result_coin;          /* 0x0C */

    static Casino_Slot* getSingleton();
    void resetSlot();
    void setSlotType(int type);
    void addCoin(int& coin);
    void subCoin(int& coin);
    int startSlot();
    bool runningSlot();
    bool showEffect();
    int getResultAllCoin();
    void cashCoin(int& coin);
    void cashAllCoin(int& coin);
};

extern "C" {
    void func_ov009_02123944(Casino_Slot* slot);    /* clears the bet coins and the line lamps */
}
