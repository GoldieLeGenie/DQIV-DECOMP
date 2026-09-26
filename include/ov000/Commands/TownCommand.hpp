#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "ov000/TownCharacterManager.hpp"

struct TownStageManager;
struct TownPlayerManager;

struct TownCharaMoveParam {
    dss::Fx32Vector3 pos_[4];
    dss::Fx32 speed_;
    int unk_34;
    int unk_38;
};

int cmd_enable_event_item(int* param);
int cmn_set_event_door(int* param);
int cmd_map_change_timezone(int* param);
int cmd_map_effect_sepia();
int cmd_character_not_change_direction(int* param);
int cmd_player_action_not_change_direction(int* param);
int cmd_is_character_direction(int* param);
int cmd_is_player_direction(int* param);
int cmd_map_animation(int* param);
int cmd_is_party_item(int* param);
int cmd_is_not_party_item(int* param);
int cmd_set_hostage();
int cmd_set_party_reserve_order(int* param);
int cmd_map_texture(int* param);
int cmd_set_map_texture(int* param);
int cmd_map_shake(int* param);
int cmd_effect_blur(int* param);
int cmd_party_display(int* param);
int cmd_is_character_front(int* param);
int cmd_is_talked_at_shop(int* param);
int cmd_search_map_object(int* param);
int cmd_set_floor_map_object(int* param);
int cmd_character_move_passive(int* param);
int cmd_character_move_random(int* param);
int cmd_character_move_reverse(int* param);
int cmd_is_trigger_distance(int* param);
int cmd_character_set_coll_stage(int* param);
int cmd_party_redisplay(int* param);

int cmd_debug_print(int* param);
int cmd_set_item(int* param);
int cmd_set_gold(int* param);
int cmd_set_coin(int* param);
int cmd_is_procure_item(int* param);
int cmd_mini_game(int* param);
int cmd_is_hostage(int* param);
int cmd_set_ruura_lock(int* param);
int cmd_set_ranaruta(int* param);
int cmd_invalidation_rula(int* param);
int cmd_check_money(int* param);
int cmd_set_macro_target_index(int* param);
int cmd_reset_sidejob_pay(int* param);
int cmd_get_sidejob_pay(int* param);
int cmd_check_sidejob_pay(int* param);
int cmd_set_endor_event_item(int* param);
int cmd_check_endor_event_item(int* param);
int cmd_furniture_move_request(int* param);

int cmd_set_overview_point(int* param);
int cmd_set_player_position(int* param);
int cmd_set_player_direction(int* param);
int cmd_is_speaked(int* param);
int cmd_speak_to_player(int* param);
int cmd_speak_to_player2(int* param);
int cmd_set_x_wins(int* param);

int cmd_set_character_position(int* param);
int cmd_set_character_direction(int* param);
int cmd_character_action_sleep(int* param);
int cmd_character_action_display(int* param);
int cmd_character_action_near(int* param);
int cmd_map_animation_a(int* param);
int cmd_set_map_collision(int* param);
int cmd_chara_set_priority_sure_appointment(int* param);
int cmd_chara_set_normal_sure_appointment(int* param);
int cmd_chara_set_normal_sure(int* param);
int cmd_chara_talk_to_player_sure(int* param);
int cmd_set_surechigai_level(int* param);
int cmd_character_action_stepping(int* param);
int cmd_character_action_still(int* param);
int cmd_character_action_wriggle(int* param);
int cmd_player_action_stepping(int* param);
int cmd_player_action_still(int* param);
int cmd_player_action_wriggle(int* param);
int cmd_set_character_collision(int* param);
int cmd_is_trigger(int* param);
int cmd_is_trigger2(int* param);
int cmd_character_action_pursue(int* param);
int cmd_character_move_roam(int* param);
int cmd_is_trigger_character(int* param);
int cmd_is_trigger2_character(int* param);
int cmd_party_join(int* param);
int cmd_party_quit(int* param);

enum TriggerCheck {
    TRIGGER_CHECK_0,
    TRIGGER_CHECK_1,
    TRIGGER_CHECK_2,
    TRIGGER_CHECK_3,
    TRIGGER_CHECK_4,
    TRIGGER_CHECK_5,
};

struct EventItemInfo;
extern "C" EventItemInfo* func_ov016_0216ba40(void);

struct EventItemInfo {
    char item_;
    int enable_;

    static void setItem(int item) { func_ov016_0216ba40()->item_ = item; }
};

struct Data021487a8 {
    long unk_0;
    int unk_4;
    int unk_8;
};

extern char data_02116ce0[];
extern char data_ov016_02186a14[];
extern Data021487a8 data_ov000_021487a8;
extern long data_ov000_021487ac;
extern dss::Fx32 data_ov000_021487b0;
extern char data_020efcc0[];

extern "C" {
    void func_0207e88c(void* console, int x, int y, const char* format, ...);
    void func_02054364(int slot, int type, int value);
    void func_ov016_02178378(void* obj, int value);
    int  func_0202375c(void);
    void func_ov000_02138308(TownCharacterManager* mgr, int index);
    void* func_ov000_021372e8(void);
    void func_0202a860(void* obj, int value);
    TownStageManager* func_ov000_02139668(void);
    dss::Fx32Vector3 func_ov000_02139b74(TownStageManager* mgr, int index);
    dss::Fx32Vector3 func_02088988(const dss::Fx32Vector3& a, const dss::Fx32Vector3& b);
    dss::Fx32 func_02088e90(const dss::Fx32Vector3& v);
    void* func_ov000_021221b4(void);
    void func_ov000_02122280(void* mgr, int index, int frame, dss::Fx32Vector3* pos);

    int  func_0202376c(int id);
    int  func_02023778(int index);
    int  func_020236a8(void);
    void func_ov000_02138598(TownCharacterManager* mgr, int index, dss::Fx32Vector3* pos);
    void func_ov000_021383bc(TownCharacterManager* mgr, int index, int dir);
    void func_ov000_021385b8(TownCharacterManager* mgr, int index, int value);
    void func_ov000_021384c0(TownCharacterManager* mgr, int index, int value);
    void func_ov000_021384a0(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138480(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138460(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138670(TownCharacterManager* mgr, int index, int value);
    dss::Fx32Vector3* func_ov000_021383ac(TownCharacterManager* mgr, int index);
    void func_ov000_02139e90(TownStageManager* mgr, int a, int b, int c);
    void func_ov000_0213a960(TownStageManager* mgr, int id);
    void* func_02037da4(void);
    void func_02037db0(void* obj, int a, int b);
    void func_02037e20(void* obj, int a, int b, int count, int* values);
    int  func_02037ef4(void* obj, int id, int value);
    int  func_02037f40(void* obj, int id, int value);
    int  func_ov000_0212eb90(TownCharacter* chara);
    void func_ov016_0216fa48(char* a, char* b, char* c, int value);
    void func_0205462c(int slot, int value);
    void func_02054380(int slot, int type, int value);
    void func_0205439c(int slot, int type, int value);
    void func_020543b8(int slot, int type, int value);
    void func_ov000_0213747c(void* obj);
    void func_ov000_02137470(void* obj, int value);
    void func_ov000_0213b17c(int* obj, int value);
    void func_ov000_0213b118(int* obj, int value);
    void func_ov000_0213b10c(int* obj, int value);
    void func_ov000_02130f48(int dir, dss::Fx32Vector3* out);
    dss::Fx32Vector3 func_ov000_02131b1c(int dir);
    void func_020872fc(dss::Fx32* obj, dss::Fx32* value);
    void func_0208718c(dss::Fx32* obj, dss::Fx32* value);
    int  func_020320ac(dss::Fx32Vector3* pos, int dir, dss::Fx32Vector3* min, dss::Fx32Vector3* max, TriggerCheck check, int type);
    dss::Fx32Vector3 func_ov000_0213beec(void* obj, int index);
    void func_ov000_02133f3c(TownPlayerManager* mgr, short dir);
    void* func_ov000_021285c0(void);
    void func_ov000_021287e4(void* obj, dss::Fx32Vector3* pos);
    int  func_ov000_0213842c(TownCharacterManager* mgr, int index);
    int  func_ov000_021382a0(TownCharacterManager* mgr, int index);
    int  func_ov000_0212e930(TownCharacter* chara);
    void func_ov000_0213745c(void* obj, int message, int count);
    void* func_ov000_021267dc(void);
    void func_ov000_0212711c(void* obj, int door, int type);
    void func_020835d8(void);
    void func_02085d88(void);
    int  func_0203232c(int param, short dir);
    void func_ov000_02139fa4(TownStageManager* mgr, int flag);
    void* func_ov000_02135c88(void);
    void func_ov000_02136d40(void* obj, int a, int b);
    void func_ov000_0213b010(int* obj);
    void func_ov000_0213afcc(int* obj);
    void func_ov000_0213b0b0(int* obj);
    int  func_ov000_0212e9d8(TownCharacter* chara);
    void* func_ov000_02142964(void);
    void func_ov000_021429c8(void* obj, int id, dss::Fx32Vector3 pos);
    void func_ov000_0212de50(TownCharacter* chara);
    void func_ov000_0212e408(TownCharacter* chara);
    void func_ov000_0212e1a0(TownCharacter* chara);
    dss::Fx32 func_0208908c(const dss::Fx32Vector3& a, const dss::Fx32Vector3& b);
    int  func_02087420(dss::Fx32* a, dss::Fx32* b);
}
