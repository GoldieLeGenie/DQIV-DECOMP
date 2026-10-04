#pragma once
#include "globaldefs.h"

struct CatalogView {
    int useFlag_;               /* 0x00 */
    int id_;                    /* 0x04 */
    char name_[32];             /* 0x08 */
    char restart_[32];          /* 0x28 */
    int savetype_;              /* 0x48 */
    int chapter_;               /* 0x4C */
    int level_;                 /* 0x50 */
    int town_;                  /* 0x54 */
    int time_;                  /* 0x58 */
};

struct DiaryInfo {
    char* name_;
    int chapter_;
    int level_;
    int town_;
    int time_;
    int savetype_;
};

extern "C" {
    int func_0202b684(int diary);
    CatalogView* func_0202b6d8(void);
    int func_0202b854(void);
    int func_0202b860(int diary);
    bool func_0202b8b8(int diary, int saveType);
    bool func_0202b9f8(int diary);
    void func_0202bc10(CatalogView* view);
    int func_0202c040(void);
    int func_0202c058(void);                    // card check result (1 ok, <0 error)
    void func_0202b928(int diary, int saveType);
    int func_0202b990(void);
    int func_0202b9a8(void);
}
