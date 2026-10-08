#include "../sdk_internal.h"

typedef struct UnkNvramUserInfo {
    u8 unk_00;
    u8 unk_01;
    u8 favoriteColor : 4;
    u8 : 4;
    u8 birthMonth;
    u8 birthDay;
    u8 unk_05;
    u16 nickName[10];
    u8 nickNameLength;
    u8 unk_1b;
    u16 comment[26];
    u8 commentLength;
    u8 unk_51;
    u8 unk_52[0x12];
    u16 language : 3;
    u16 : 13;
} UnkNvramUserInfo;

typedef struct UnkOwnerInfo {
    u8 language;
    u8 favoriteColor;
    u8 birthMonth;
    u8 birthDay;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} UnkOwnerInfo;

#define NVRAM_USER_INFO ((UnkNvramUserInfo*)0x027ffc80)

/* Copies the 6-byte MAC address. */
void func_02079e24(u8* mac) {
    MI_CpuCopyU8((void*)0x027ffcf4, mac, 6);
}

/* Fills the owner info from the firmware user settings. */
void func_02079e40(UnkOwnerInfo* info) {
    UnkNvramUserInfo* src = NVRAM_USER_INFO;

    info->language = src->language;
    info->favoriteColor = src->favoriteColor;
    info->birthMonth = src->birthMonth;
    info->birthDay = src->birthDay;
    info->nickNameLength = src->nickNameLength;
    info->commentLength = src->commentLength;
    MI_CpuCopyU16(src->nickName, info->nickName, 10 * sizeof(u16));
    MI_CpuCopyU16(src->comment, info->comment, 26 * sizeof(u16));
    info->nickName[10] = 0;
    info->comment[26] = 0;
}
