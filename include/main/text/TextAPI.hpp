#pragma once
#include "globaldefs.h"

struct TextAPI {
    static void setLanguage(int language);
    static void setMACRO0(int slot, int type, int value, int value2, int value3);
    static void setMACRO0(int slot, int type, int value, int value2);
    static void setMACRO0(int slot, int type, int value);
    static void setMACRO1(int slot, int type, int value);
    static void setMACRO2(int slot, int type, int value);
    static void setMACRO3(int slot, int type, int value);
    static void setMACRO4(int slot, int type, int value);
    static void setMACRO5(int slot, int type, int value);
    static void resetMacro();
    static int isExistMessage(int messageID);
    static void getMessage(char* message, int messageSize, char* name, int nameSize, int messageID);
    static int getMessageSound();
    static void getMonsterNamePlateTextImitation(char* text, int monsterIndex, int flag);
    static void getPlayerNamePlateTextImitation(char* text, int playerIndex, int flag);
    static void extractText(char* text, int size, int type, int value);
    static void setHeroName(char* name);
    static void setUserString(int index, char* string);
    static int isGermanMonsterException(int monsterIndex);
};

enum MACRO_STAT {
    MST_NULL            = 0x0,
    MST_MALE            = 0x1,
    MST_FEMALE          = 0x2,
    MST_NEUTER          = 0x4,
    MST_SOLO            = 0x8,
    MST_PROPER          = 0x10,
    MST_VOWEL           = 0x20,
    MST_VOWEL_FR        = 0x40,
    MST_SINGLE          = 0x80,
    MST_SINGLE_FR       = 0x100,
    MST_LASTLETTER_S    = 0x200,
    MST_LASTLETTER_S_DE = 0x400,
    MST_SISTER          = 0x800,
    MST_PLRNOUN         = 0x1000,
    MST_ACTTGT          = 0x2000,
    MST_LEADER          = 0x4000,
    MST_PLUS            = 0x8000,
    MST_TALKER          = 0x10000,
    MST_ALLMEMBER       = 0x20000
};

inline MACRO_STAT& operator|=(MACRO_STAT& a, MACRO_STAT b) { a = (MACRO_STAT)(a | b); return a; }

/* DS MsgVar (0x1C) */
struct MsgVar {
    int m_def;          /* 0x00 */
    int m_type;         /* 0x04 */
    int m_kind;         /* 0x08 */
    int m_no;           /* 0x0C */
    int m_index;        /* 0x10 */
    int m_fake;         /* 0x14 */
    int m_tmp;          /* 0x18 */
};

struct Utf8Iterator {
    unsigned char unk_00[0x24];
};

MACRO_STAT macro_checkVowel(void* macro, char* text);
MACRO_STAT macro_checkLastS(void* macro, char* text);

/* 0x02109e48 */
struct TextAPIWork {
    unsigned char messageSound_;
    int language_;
};

extern TextAPIWork data_02109e48;
extern int data_021098c4;
extern char data_02109e54[0x80];
extern char data_02109ed4[0x200];
extern char data_0210a240[];    /* text extractor object */
extern char data_0210a464[];    /* macro table object */
extern char data_020c2c2c[];    /* "%s" */
extern char data_020c2c30[];    /* "%s  %s%s" */
extern char data_020c2c3c[];
extern unsigned short data_020c45b0[];  /* uppercase table */
extern unsigned short data_020c4618[];  /* lowercase table */

extern "C" {
    void func_02053afc(MsgVar* var, int def, int type, int kind, int no, int fake, int index);
    void func_02053b44(MsgVar* var, char* text, int size, int opt);                         /* MsgVar::extract_var */
    void func_02087fbc(unsigned short* upper, unsigned short* lower, char* dst, int size, char* src, int count);
    int  func_02088258(char* dst, const char* format, ...);                                 /* sprintf */
    void func_020876f4(Utf8Iterator* it);
    void func_020875ec(Utf8Iterator* it, char* text);
    int  func_0208771c(Utf8Iterator* it);                                                   /* current char */
    void func_020877b8(Utf8Iterator* it);                                                   /* next */
    void func_02053d24(void* macro);                                                        /* resetMacro */
    void func_02053d30(void* macro, int slot, int kind, int type, int value);
    void func_02053d48(void* macro, int slot, int kind, int type, int value, int value2);
    void func_02053d60(void* macro, int slot, int kind, int type, int value, int value2, int value3);
    void func_02053dbc(void* macro, char* dst, int size, const char* src);                  /* process_msg */
    int  func_02054970(int messageID, int language);                                        /* msg_find */
    void func_02054984(int messageID, int language);
    char* func_02054998(void);
    char* func_020549a8(void);
    unsigned char func_020549b8(void);
    void func_02054a6c(void* extractor, char* text, int size, int type, int value);         /* extract_text */
    void func_020551f0(void* extractor, char* name);
    void func_0205521c(void* extractor, int index, char* string);
}
