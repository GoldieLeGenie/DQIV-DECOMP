#pragma once
#include "main/text/TextAPI.hpp"
struct TownPartyDraw;
#include "main/cmn/CommonCalculate.hpp"
#include "main/script/ScriptBaseCommand.hpp"
#include "main/window/CommandWindow.hpp"
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "ov000/town/TownCharacterManager.hpp"
#include "ov000/town/TownCamera.hpp"
#include "ov000/town/TownDoorAction.hpp"
#include "main/Commands/CommonCommand.hpp"
#include "main/cmn/CommonEffectLocation.hpp"
#include "ov016/MaterielMenu_SLOT/MaterielMenu_SLOT.hpp"

struct TownFurnitureManager;
struct TownStageManager;
struct TownPlayerManager;

struct TownCharaMoveParam {
    dss::Fix32Vector3 pos_[4];
    dss::Fix32 speed_;
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

int cmd_party_display2(int* param);
int cmn_camera_lock_pov(int* param);
int cmd_furniture_fadeout(int* param);
int cmd_effect_dream(int* param);
int cmd_set_script_object_direction(int* param);
int cmd_charcter_3d_rotate(int* param);
int cmd_effect_transfer(int* param);
int cmd_character_pose_change(int* param);
int cmd_player_action_dance(int* param);
int cmd_map_camera_lock_target_player(int* param);
int cmd_player_set_coll(int* param);
int cmd_map_clipping(int* param);
int cmd_camera_clip_distance(int* param);
int cmd_map_camera_near(int* param);
int cmd_disable_demolition();
int cmd_set_camera_target(int* param);
int cmd_character_swing_round(int* param);
int cmd_character_anim(int* param);
int cmd_party_copy_character(int* param);
int cmd_is_map_treasure(int* param);
int cmd_set_furniture_position(int* param);
int cmd_is_doorway(int* param);
int cmd_copy_party_chara(int* param);
int cmd_chara_shadow(int* param);
int cmd_chara_alpha(int* param);
int cmd_ikada_set_position(int* param);
int cmd_crack_key_by_orin(int* param);
int cmd_set_big_rock_move(int* param);
int cmd_set_monster_talk(int* param);
int cmd_set_monster_talk_all(int* param);
int cmd_set_chara_map_uid(int* param);
int cmd_change_surechigai_part(int* param);
int cmd_check_surechigai_success(int* param);
int cmd_set_default_map_name(int* param);
int cmd_set_ikada_info(int* param);
int cmd_set_player_sleep(int* param);
int cmd_is_open_door(int* param);
int cmd_chara_lock_move(int* param);
int cmd_get_reward_tom(int* param);
int cmd_check_hit_surface(int* param);
int cmd_set_door_close(int* param);
int cmd_start_game(int* param);
int cmd_opening_backcolor(int* param);
int cmd_set_camera_limit(int* param);
int cmd_set_van_and_basha(int* param);
int cmd_set_basha_go_into(int* param);
int cmd_chara_voice(int* param);
int cmd_check_player_item(int* param);
int cmd_save_last_party();
int cmd_set_chara_motion2(int* param);
int cmd_set_unused_extra_chara(int* param);
int cmd_check_shoplist(int* param);
int cmd_is_not_go_into_tenku(int* param);
int cmd_set_end_roll_clear(int* param);

int cmd_set_my_taishi(int* param);
int cmd_check_taishi_max(int* param);
int cmd_map_camera_default_angle(int* param);
int cmd_chara_mortion_lock(int* param);
int cmd_set_fighting_colosseum_mode(int* param);
int cmd_map_black(int* param);

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
int cmd_check_hero_level(int* param);
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
    int unk_c;
    int unk_10;
    int unk_14;
};

extern char data_02116ce0[];
extern int data_ov000_0214eb9c;
extern char data_ov000_02148fa4[];
extern char data_ov000_02148fa8[];
extern Data021487a8 data_ov000_021487a8;
extern long data_ov000_021487ac;
extern dss::Fix32 data_ov000_021487b0;

extern "C" {
    int func_ov000_02141424(int* param);
    void func_0207e88c(void* console, int x, int y, const char* format, ...);
    void func_ov000_02138308(TownCharacterManager* mgr, int index);
    window::CommandWindow* func_ov000_021372e8(void);
    TownStageManager* func_ov000_02139668(void);
    dss::Fix32Vector3 func_ov000_02139b74(TownStageManager* mgr, int index);
    void* func_ov000_021221b4(void);
    int func_ov000_02122280(void* mgr, int index, int frame, dss::Fix32Vector3* pos);

    void func_ov000_02138598(TownCharacterManager* mgr, int index, dss::Fix32Vector3* pos);
    void func_ov000_021383bc(TownCharacterManager* mgr, int index, int dir);
    void func_ov000_021385b8(TownCharacterManager* mgr, int index, int value);
    void func_ov000_021384c0(TownCharacterManager* mgr, int index, int value);
    void func_ov000_021384a0(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138480(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138460(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138670(TownCharacterManager* mgr, int index, int value);
    dss::Fix32Vector3* func_ov000_021383ac(TownCharacterManager* mgr, int index);
    void func_ov000_02139e90(TownStageManager* mgr, int a, int b, int c);
    void func_ov000_0213a960(TownStageManager* mgr, int id);
    void func_02037db0(void* obj, int a, int b);
    void func_02037e20(void* obj, int a, int b, int count, int* values);
    int  func_02037ef4(void* obj, int id, int value);
    int  func_02037f40(void* obj, int id, int value);
    int  func_ov000_0212eb90(TownCharacterBase* chara);
    void func_ov016_0216fa48(char* a, char* b, char* c, int value);
    void func_ov000_0213747c(void* obj);
    void func_ov000_02137470(void* obj, int value);
    void func_ov000_0213b17c(TownPartyDraw* draw, int value);
    void func_ov000_0213b118(TownPartyDraw* draw, int value);
    void func_ov000_0213b10c(TownPartyDraw* draw, int value);
    void func_ov000_02130f48(int dir, dss::Fix32Vector3* out);
    dss::Fix32Vector3 func_ov000_02131b1c(int dir);
    void func_ov000_02133f3c(TownPlayerManager* mgr, short dir);
    void* func_ov000_021285c0(void);
    void func_ov000_021287e4(void* obj, dss::Fix32Vector3* pos);
    int  func_ov000_0213842c(TownCharacterManager* mgr, int index);
    int  func_ov000_021382a0(TownCharacterManager* mgr, int index);
    int  func_ov000_0212e930(TownCharacterBase* chara);
    void func_ov000_0213745c(void* obj, int message, int count);
    void* func_020835d8(void);
    void func_02085d88(void);
    void func_ov000_02139fa4(TownStageManager* mgr, int flag);
    void func_ov000_0213b010(TownPartyDraw* draw);
    void func_ov000_0213afcc(TownPartyDraw* draw);
    void func_ov000_0213b0b0(TownPartyDraw* draw);
    int  func_ov000_0212e9d8(TownCharacterBase* chara);
    void* func_ov000_02142964(void);
    void func_ov000_021429c8(void* obj, int id, dss::Fix32Vector3 pos);
    void func_ov000_0212de50(TownCharacterBase* chara);
    void func_ov000_0212e408(TownCharacterBase* chara);
    void func_ov000_0212e1a0(TownCharacterBase* chara);
    dss::Fix32 func_0208908c(const dss::Fix32Vector3& a, const dss::Fix32Vector3& b);
    void func_ov000_0213b054(TownPartyDraw* draw);
    void func_ov000_02133f10(TownPlayerManager* mgr, dss::Fix32Vector3* pos);
    void func_ov000_021222e4(void* obj, int a, int b, int c, int d);
    void func_ov000_021383dc(TownCharacterManager* mgr, int index, dss::Vector3short* rot);
    void* func_ov000_02123e28(void);
    int func_ov000_02124028(void* obj, int id, dss::Fix32Vector3 pos, int a, int b);
    void func_ov000_02138248(TownCharacterManager* mgr, int index, int pose);
    void func_ov000_02135158(TownPlayerManager* mgr, int value);
    void func_ov000_0212ea00(TownCharacterBase* chara, int value);
    void func_ov000_02138e20(TownCharacterManager* mgr, int index, short anim);
    TownFurnitureManager* func_ov000_02122ad8(void);
    int func_ov000_02123144(void* obj, int id);
    void func_ov000_02139c18(TownStageManager* mgr, int id, dss::Fix32Vector3* pos);
    int func_0200c020(void);
    int func_ov000_02135494(TownPlayerManager* mgr, int id, dss::Fix32Vector3* pos, short* dir, int* value);
    void func_ov000_02138f70(TownCharacterManager* mgr, int index, dss::Fix32Vector3* pos, short dir, int value);
    void func_ov000_02138440(TownCharacterManager* mgr, int index, int value);
    void func_ov000_02138578(TownCharacterManager* mgr, int index, unsigned char alpha);
    void func_ov000_0212e918(TownCharacterBase* chara, int value);
    void func_ov000_02139158(TownCharacterManager* mgr, int value);
    int func_02037f84(void* obj, int type);
    void func_0208a114(char* dst, int size, int id);
    void func_0203a7a8(void* mgr, char* name);
    int func_0203a388(void* mgr);
    void func_ov000_02128768(void* obj, const char* name, dss::Fix32Vector3* pos);
    int func_ov000_02122dc8(void* obj, int id);
    void func_ov000_0212e900(TownCharacterBase* chara, int value);
    void func_ov000_0212ea4c(TownCharacterBase* chara, int value);
    void func_02055998(int value);
    void func_ov000_02135ab0(TownPlayerManager* mgr);
    void func_ov000_0212eb9c(TownCharacterBase* chara, int voice);
    void func_02037f98(void* obj);
    void func_0202a81c(void* obj, int value);
    void func_020857c8(void* obj, dss::Fix32Vector3 pos);
    char* func_ov000_021439fc(void);
}
