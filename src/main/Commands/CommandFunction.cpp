#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/CommandParameter/CommandParameter.hpp"
#include "ov000/Commands/TownCommand.hpp"
#include "main/Commands/CommonCommand.hpp"
#include "ov001/Commands/FieldCommand.hpp"
#include "main/Commands/ScriptCommand.hpp"
#include "main/Commands/CommonScriptCommand.hpp"
#include "ov000/Commands/TownScriptCommand.hpp"
#include "ov001/Commands/FieldScriptCommand.hpp"

ARM int CommandFunction(CommandParameter *arg0) {
    int var_r4;

    var_r4 = 1;
    switch (arg0->command_) {
    case 2:
        int v0 = unkfunc_02020008(arg0);
        if (v0 == 0 || v0 == 1)
        {
            break;
        }
        /* fallthrough */
    case 0:
        break;
    case 1:
        break;
    case 3:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_message1(arg0->param_);
        }
        break;
    case 4:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_message2(arg0->param_);
        }
        break;
    case 0x18:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_get_flag(arg0->param_);
        }
        break;
    case 0x17:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_flag(arg0->param_);
        }
        break;
    case 0x7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_setup(arg0->param_);
        }
        break;
    case 0x4A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_speaked(arg0->param_);
        }
        break;
    case 0x5:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_speak_to_player(arg0->param_);
        }
        break;
    case 0x6:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_speak_to_player2(arg0->param_);
        }
        break;
    case 0x19:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_timezone(arg0->param_);
        }
        break;
    case 0x1A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_timezone(arg0->param_);
        }
        break;
    case 0x8E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_debug_print(arg0->param_);
        }
        break;
    case 0x8:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_lock(arg0->param_);
        }
        break;
    case 0x4D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_position(arg0->param_);
        }
        break;
    case 0x4E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_direction(arg0->param_);
        }
        break;
    case 0x16D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_overview_point(arg0->param_);
        }
        break;
    case 0x79:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_position(arg0->param_);
        }
        break;
    case 0x7A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_direction(arg0->param_);
        }
        break;
    case 0x11B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_x_wins(arg0->param_);
        }
        break;
    case 0x10E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_battle_end_flag_set(arg0->param_);
        }
        break;
    case 0x11A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_message_sound(arg0->param_);
        }
        break;
    case 0x126:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_monster(arg0->param_);
        }
        break;
    case 0x1D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_animation_a(arg0->param_);
        }
        break;
    case 0x1E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_collision(arg0->param_);
        }
        break;
    case 0x1B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_timezone_pause(arg0->param_);
        }
        break;
    case 0x52:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_stepping(arg0->param_);
        }
        break;
    case 0x53:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_still(arg0->param_);
        }
        break;
    case 0x54:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_wriggle(arg0->param_);
        }
        break;
    case 0x58:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_display(arg0->param_);
        }
        break;
    case 0x55:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_near(arg0->param_);
        }
        break;
    case 0x7B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_wriggle(arg0->param_);
        }
        break;
    case 0x7C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_stepping(arg0->param_);
        }
        break;
    case 0x50:
        if (unkfunc_02020008(arg0) != 0) {
            cmd_character_action_sleep(arg0->param_);
            var_r4 = 0;
        }
        break;
    case 0x16E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_sleep_near(arg0->param_);
        }
        break;
    case 0x7D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_still(arg0->param_);
        }
        break;
    case 0x59:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_collision(arg0->param_);
        }
        break;
    case 0xA:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger(arg0->param_);
        }
        break;
    case 0xB:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger2(arg0->param_);
        }
        break;
    case 0x5A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_pursue(arg0->param_);
        }
        break;
    case 0x5B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_roam(arg0->param_);
        }
        break;
    case 0x78:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_encount(arg0->param_);
        }
        break;
    case 0x88:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_encount_set_flag(arg0->param_);
        }
        break;
    case 0x164:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_encount_first_strike(arg0->param_);
        }
        break;
    case 0x16A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_ride_on(arg0->param_);
        }
        break;
    case 0x64:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_join(arg0->param_);
        }
        break;
    case 0x65:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_quit(arg0->param_);
        }
        break;
    case 0x66:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_join(arg0->param_);
        }
        break;
    case 0x67:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_quit(arg0->param_);
        }
        break;
    case 0xAF:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_hostage();
        }
        break;
    case 0x120:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_actor();
        }
        break;
    case 0x128:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_target();
        }
        break;
    case 0x160:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_target_index(arg0->param_);
        }
        break;
    case 0x140:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_prisoner();
        }
        break;
    case 0x12:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_item(arg0->param_);
        }
        break;
    case 0x49:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_procure_item(arg0->param_);
        }
        break;
    case 0x13:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_gold(arg0->param_);
        }
        break;
    case 0x14:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_coin(arg0->param_);
        }
        break;
    case 0x11:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_mini_game(arg0->param_);
        }
        break;
    case 0x6A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_total_recovery(arg0->param_);
        }
        break;
    case 0x6B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_order(arg0->param_);
        }
        break;
    case 0x6C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_member(arg0->param_);
        }
        break;
    case 0x6D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_ride_carriage(arg0->param_);
        }
        break;
    case 0x80:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_player_status_dead(arg0->param_);
        }
        break;
    case 0x1F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_floor_change(arg0->param_);
        }
        break;
    case 0x20:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_floor_exit(arg0->param_);
        }
        break;
    case 0x6E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_join_carriage();
        }
        break;
    case 0x6F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_top(arg0->param_);
        }
        break;
    case 0x70:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_top(arg0->param_);
        }
        break;
    case 0x71:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_all(arg0->param_);
        }
        break;
    case 0x72:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_all(arg0->param_);
        }
        break;
    case 0x73:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_head_count(arg0->param_);
        }
        break;
    case 0x74:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_head_count(arg0->param_);
        }
        break;
    case 0x28:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_change_timezone(arg0->param_);
        }
        break;
    case 0xC9:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_effect_sepia();
        }
        break;
    case 0xCA:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_disable_demolition();
        }
        break;
    case 0x62:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_se(arg0->param_);
        }
        break;
    case 0x63:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_cut_se(arg0->param_);
        }
        break;
    case 0x10:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_doorway(arg0->param_);
        }
        break;
    case 0x25:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_link_on_off(arg0->param_);
        }
        break;
    case 0x13D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_not_use_load_message();
        }
        break;
    case 0x26:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_change_map_link(arg0->param_);
        }
        break;
    case 0xFF:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_vehicle(arg0->param_);
        }
        break;
    case 0x27:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmn_set_event_door(arg0->param_);
        }
        break;
    case 0x176:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_title_part(arg0->param_);
        }
        break;
    case 0xFD:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_texture(arg0->param_);
        }
        break;
    case 0x42:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_forward(arg0->param_);
        }
        break;
    case 0x43:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_character(arg0->param_);
        }
        break;
    case 0x44:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger2_character(arg0->param_);
        }
        break;
    case 0x47:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_town_to_field_link(arg0->param_);
        }
        break;
    case 0x48:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmn_set_field_to_town_link(arg0->param_);
        }
        break;
    case 0x34:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_not_change_direction(arg0->param_);
        }
        break;
    case 0x38:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_not_change_direction(arg0->param_);
        }
        break;
    case 0x35:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_character_direction(arg0->param_);
        }
        break;
    case 0x39:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_player_direction(arg0->param_);
        }
        break;
    case 0x97:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_animation(arg0->param_);
        }
        break;
    case 0x81:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_recovery(arg0->param_);
        }
        break;
    case 0x77:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_in_carriage(arg0->param_);
        }
        break;
    case 0x29:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_shake(arg0->param_);
        }
        break;
    case 0xB2:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_effect_blur(arg0->param_);
        }
        break;
    case 0x3A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_display(arg0->param_);
        }
        break;
    case 0x37:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_character_front(arg0->param_);
        }
        break;
    case 0x36:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_talked_at_shop(arg0->param_);
        }
        break;
    case 0x2A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_search_map_object(arg0->param_);
        }
        break;
    case 0x3E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_encount_disable(arg0->param_);
        }
        break;
    case 0x3F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_encount_stage_disable(arg0->param_);
        }
        break;
    case 0x40:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_demolition_fightingarena(arg0->param_);
        }
        break;
    case 0x41:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_battle_turn(arg0->param_);
        }
        break;
    case 0x45:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_random(arg0->param_);
        }
        break;
    case 0x46:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_random2(arg0->param_);
        }
        break;
    case 0x2B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_floor_map_object(arg0->param_);
        }
        break;
    case 0x16:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_hostage(arg0->param_);
        }
        break;
    case 0x9E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_set_coll_stage(arg0->param_);
        }
        break;
    case 0x9D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_distance(arg0->param_);
        }
        break;
    case 0xA7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_charcter_3d_rotate(arg0->param_);
        }
        break;
    case 0xAC:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_effect_transfer(arg0->param_);
        }
        break;
    case 0xB1:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_pose_change(arg0->param_);
        }
        break;
    case 0x123:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_furniture_move_request(arg0->param_);
        }
        break;
    case 0xB0:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_display2(arg0->param_);
        }
        break;
    case 0x86:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_music(arg0->param_);
        }
        break;
    case 0x87:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_music_pause(arg0->param_);
        }
        break;
    case 0x146:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_play_music_now_map(arg0->param_);
        }
        break;
    case 0xB5:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmn_camera_lock_pov(arg0->param_);
        }
        break;
    case 0xA5:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_redisplay(arg0->param_);
        }
        break;
    case 0xB7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_dance(arg0->param_);
        }
        break;
    case 0xB8:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_enable_event_item(arg0->param_);
        }
        break;
    case 0xBB:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_player_set_coll(arg0->param_);
        }
        break;
    case 0xC2:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_ruura_lock(arg0->param_);
        }
        break;
    case 0x169:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_ranaruta(arg0->param_);
        }
        break;
    case 0xFB:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_invalidation_rula(arg0->param_);
        }
        break;
    case 0xBE:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_link_field_direct(arg0->param_);
        }
        break;
    case 0xC4:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_money(arg0->param_);
        }
        break;
    case 0x100:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_not_play_normal_sound(arg0->param_);
        }
        break;
    case 0x163:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_save_last_party();
        }
        break;
    case 0x101:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_member_type(arg0->param_);
        }
        break;
    case 0x102:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_member_num(arg0->param_);
        }
        break;
    case 0x103:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_priority_sure_appointment(arg0->param_);
        }
        break;
    case 0x104:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_normal_sure_appointment(arg0->param_);
        }
        break;
    case 0x105:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_normal_sure(arg0->param_);
        }
        break;
    case 0x106:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_talk_to_player_sure(arg0->param_);
        }
        break;
    case 0x107:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_surechigai_level(arg0->param_);
        }
        break;
    case 0x108:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_copy_party_chara(arg0->param_);
        }
        break;
    case 0x10B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_del2(arg0->param_);
        }
        break;
    case 0x112:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_shadow(arg0->param_);
        }
        break;
    case 0x113:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_alpha(arg0->param_);
        }
        break;
    case 0x118:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_ikada_set_position(arg0->param_);
        }
        break;
    case 0x119:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_crack_key_by_orin(arg0->param_);
        }
        break;
    case 0x11F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_big_rock_move(arg0->param_);
        }
        break;
    case 0x124:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_monster_talk(arg0->param_);
        }
        break;
    case 0x125:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_monster_talk_all(arg0->param_);
        }
        break;
    case 0x127:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_field_symbol_disp(arg0->param_);
        }
        break;
    case 0x129:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_chara_map_uid(arg0->param_);
        }
        break;
    case 0x12A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_my_taishi(arg0->param_);
        }
        break;
    case 0x144:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_forward_counter(arg0->param_);
        }
        break;
    case 0x147:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_setup_music(arg0->param_);
        }
        break;
    case 0x155:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_stream_play(arg0->param_);
        }
        break;
    case 0x157:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_camera_limit(arg0->param_);
        }
        break;
    case 0x161:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_voice(arg0->param_);
        }
        break;
    case 0xBC:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_field_player_set_ship(arg0->param_);
        }
        break;
    case 0x145:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_field_player_pos(arg0->param_);
        }
        break;
    case 0xC7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_camera_clip_distance(arg0->param_);
        }
        break;
    case 0xBF:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_lock_target_player(arg0->param_);
        }
        break;
    case 0xCB:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_near(arg0->param_);
        }
        break;
    case 0x9A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_passive(arg0->param_);
        }
        break;
    case 0x85:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_camera_target(arg0->param_);
        }
        break;
    case 0x9B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_random(arg0->param_);
        }
        break;
    case 0xD4:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_wait_counter(arg0->param_);
        }
        break;
    case 0xD6:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_day_count(arg0->param_);
        }
        break;
    case 0xD8:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_barrier_disruption(arg0->param_);
        }
        break;
    case 0xD9:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_barrier_disruption(arg0->param_);
        }
        break;
    case 0xDC:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = func_ov000_02141424(arg0->param_);
        }
        break;
    case 0x135:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_sleep(arg0->param_);
        }
        break;
    case 0xEA:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_reserve_order(arg0->param_);
        }
        break;
    case 0xEB:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_party_copy_character(arg0->param_);
        }
        break;
    case 0xEC:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_call_carriage(arg0->param_);
        }
        break;
    case 0xF2:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_map_treasure(arg0->param_);
        }
        break;
    case 0xA2:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_furniture_position(arg0->param_);
        }
        break;
    case 0xF3:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_texture(arg0->param_);
        }
        break;
    case 0xF5:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_effect_dream(arg0->param_);
        }
        break;
    case 0x9C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_reverse(arg0->param_);
        }
        break;
    case 0xF6:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_furniture_fadeout(arg0->param_);
        }
        break;
    case 0xD2:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_wait_operation(arg0->param_);
        }
        break;
    case 0xD5:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_wait_counter(arg0->param_);
        }
        break;
    case 0x152:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_push_key(arg0->param_);
        }
        break;
    case 0xD7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_day_count(arg0->param_);
        }
        break;
    case 0xFA:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_chapter(arg0->param_);
        }
        break;
    case 0xFC:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_hero_level(arg0->param_);
        }
        break;
    case 0xEE:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_event_chapter_end(arg0->param_);
        }
        break;
    case 0xF8:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_swing_round(arg0->param_);
        }
        break;
    case 0xF7:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_character_anim(arg0->param_);
        }
        break;
    case 0x75:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_item(arg0->param_);
        }
        break;
    case 0x76:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_item(arg0->param_);
        }
        break;
    case 0xFE:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_field_erase_symbol(arg0->param_);
        }
        break;
    case 0x10C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_store(arg0->param_);
        }
        break;
    case 0x10D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_restore(arg0->param_);
        }
        break;
    case 0x170:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_restore_coin(arg0->param_);
        }
        break;
    case 0x10F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_reset_sidejob_pay(arg0->param_);
        }
        break;
    case 0x110:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_get_sidejob_pay(arg0->param_);
        }
        break;
    case 0x111:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_sidejob_pay(arg0->param_);
        }
        break;
    case 0x175:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_ship_pos(arg0->param_);
        }
        break;
    case 0x173:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_go_into_tenku(arg0->param_);
        }
        break;
    case 0x174:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_black(arg0->param_);
        }
        break;
    case 0x177:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_end_roll_clear(arg0->param_);
        }
        break;
    case 0x114:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_endor_event_item(arg0->param_);
        }
        break;
    case 0x115:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_endor_event_item(arg0->param_);
        }
        break;
    case 0x12E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_change_surechigai_part(arg0->param_);
        }
        break;
    case 0x12F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_surechigai_success(arg0->param_);
        }
        break;
    case 0x132:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_ikada_info(arg0->param_);
        }
        break;
    case 0x131:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_taishi_max(arg0->param_);
        }
        break;
    case 0x134:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_default_map_name(arg0->param_);
        }
        break;
    case 0x136:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_henge_endless(arg0->param_);
        }
        break;
    case 0x137:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_open_door(arg0->param_);
        }
        break;
    case 0x138:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_lock_move(arg0->param_);
        }
        break;
    case 0x139:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_random_message(arg0->param_);
        }
        break;
    case 0x13B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_get_reward_tom(arg0->param_);
        }
        break;
    case 0x13E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_add_nene_count(arg0->param_);
        }
        break;
    case 0x141:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_hit_surface(arg0->param_);
        }
        break;
    case 0x143:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_mark(arg0->param_);
        }
        break;
    case 0x14B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_door_close(arg0->param_);
        }
        break;
    case 0x14C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_default_angle(arg0->param_);
        }
        break;
    case 0x153:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_start_game(arg0->param_);
        }
        break;
    case 0x14D:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_chara_mortion_lock(arg0->param_);
        }
        break;
    case 0x14E:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_hero_sex(arg0->param_);
        }
        break;
    case 0x154:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_opening_backcolor(arg0->param_);
        }
        break;
    case 0x156:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_fighting_colosseum_mode(arg0->param_);
        }
        break;
    case 0x159:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_van_and_basha(arg0->param_);
        }
        break;
    case 0x15F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_basha_go_into(arg0->param_);
        }
        break;
    case 0x15A:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_is_load_init(arg0->param_);
        }
        break;
    case 0x15B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_search_action(arg0->param_);
        }
        break;
    case 0x15C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_no_search_message(arg0->param_);
        }
        break;
    case 0x150:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_x_item1(arg0->param_);
        }
        break;
    case 0x14F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_i_name(arg0->param_);
        }
        break;
    case 0x162:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_player_item(arg0->param_);
        }
        break;
    case 0x167:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_chara_motion2(arg0->param_);
        }
        break;
    case 0x16B:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_unused_extra_chara(arg0->param_);
        }
        break;
    case 0x16C:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_check_shoplist(arg0->param_);
        }
        break;
    case 0x8D:
        var_r4 = data_020ec61c.exec(arg0);
        break;
    case 0x4B:
        var_r4 = data_ov000_0215fba4.exec(arg0);
        break;
    case 0x4C:
        var_r4 = data_ov000_0215fb90.exec(arg0);
        break;
    case 0x4F:
        var_r4 = data_ov000_0215fbf8.exec(arg0);
        break;
    case 0x94:
        var_r4 = data_ov000_0215fbc8.exec(arg0);
        break;
    case 0x95:
        var_r4 = data_ov000_0215fb8c.exec(arg0);
        break;
    case 0x96:
        var_r4 = data_ov000_0216010c.exec(arg0);
        break;
    case 0x9:
        var_r4 = data_020ec5e8.exec(arg0);
        break;
    case 0x51:
        var_r4 = data_ov000_0215fbb8.exec(arg0);
        break;
    case 0x1C:
        var_r4 = data_020ec5a4.exec(arg0);
        break;
    case 0x98:
        var_r4 = data_ov000_02160070.exec(arg0);
        break;
    case 0x3C:
        var_r4 = data_ov000_0215fcb8.exec(arg0);
        break;
    case 0x8A:
        var_r4 = data_ov000_0215fcc0.exec(arg0);
        break;
    case 0x3D:
        var_r4 = data_ov000_0215fcc8.exec(arg0);
        break;
    case 0x8B:
        var_r4 = data_ov000_0215fcd0.exec(arg0);
        break;
    case 0x8C:
        var_r4 = data_ov000_0215fcd8.exec(arg0);
        break;
    case 0x56:
        var_r4 = data_020ec59c.exec(arg0);
        break;
    case 0x57:
        var_r4 = data_020ec5a0.exec(arg0);
        break;
    case 0x99:
        var_r4 = data_020ec60c.exec(arg0);
        break;
    case 0xC:
        var_r4 = data_020ecf58.exec(arg0);
        break;
    case 0xD:
        var_r4 = data_020ecf68.exec(arg0);
        break;
    case 0xE:
        var_r4 = data_020ecf60.exec(arg0);
        break;
    case 0xF:
        var_r4 = data_020ecf50.exec(arg0);
        break;
    case 0x68:
        var_r4 = data_ov000_0215fc68.exec(arg0);
        break;
    case 0x69:
        var_r4 = data_ov000_0215fc58.exec(arg0);
        break;
    case 0x11C:
        var_r4 = data_ov000_021600f4.exec(arg0);
        break;
    case 0xAB:
        var_r4 = data_ov000_0215fc70.exec(arg0);
        break;
    case 0xAD:
        var_r4 = data_ov000_0215fc88.exec(arg0);
        break;
    case 0xAE:
        var_r4 = data_ov000_0215fc78.exec(arg0);
        break;
    case 0xA8:
        var_r4 = data_ov000_0215fda0.exec(arg0);
        break;
    case 0xA9:
        var_r4 = data_ov000_021601a4.exec(arg0);
        break;
    case 0xAA:
        var_r4 = data_ov000_021601bc.exec(arg0);
        break;
    case 0xB3:
        var_r4 = data_020ecf40.exec(arg0);
        break;
    case 0xA3:
        var_r4 = data_ov000_0215fce0.exec(arg0);
        break;
    case 0x5C:
        var_r4 = data_ov000_0215fbd0.exec(arg0);
        break;
    case 0x5D:
        var_r4 = data_ov000_0215fb94.exec(arg0);
        break;
    case 0x7E:
        var_r4 = data_ov000_0215fbc4.exec(arg0);
        break;
    case 0x7F:
        var_r4 = data_ov000_0215fbb0.exec(arg0);
        break;
    case 0xA6:
        var_r4 = data_ov000_0215fc4c.exec(arg0);
        break;
    case 0x166:
        var_r4 = data_ov000_0215fc18.exec(arg0);
        break;
    case 0x5E:
        var_r4 = data_ov000_0215fbf0.exec(arg0);
        break;
    case 0x5F:
        var_r4 = data_ov000_0215fba0.exec(arg0);
        break;
    case 0x60:
        var_r4 = data_ov000_0215fc0c.exec(arg0);
        break;
    case 0x61:
        var_r4 = data_ov000_0215fbe8.exec(arg0);
        break;
    case 0x2E:
        var_r4 = data_ov000_0215fc30.exec(arg0);
        break;
    case 0x2F:
        var_r4 = data_ov000_0215fbe4.exec(arg0);
        break;
    case 0x30:
        var_r4 = data_ov000_0215fc1c.exec(arg0);
        break;
    case 0x31:
        var_r4 = data_ov000_0215fc08.exec(arg0);
        break;
    case 0x32:
        var_r4 = data_ov000_0215fc54.exec(arg0);
        break;
    case 0x33:
        var_r4 = data_ov000_0215fbd8.exec(arg0);
        break;
    case 0x91:
        var_r4 = data_ov000_0215fbe0.exec(arg0);
        break;
    case 0x21:
        var_r4 = data_ov000_0215fc28.exec(arg0);
        break;
    case 0x22:
        var_r4 = data_ov000_0215fbcc.exec(arg0);
        break;
    case 0xB6:
        var_r4 = data_ov000_0215fc38.exec(arg0);
        break;
    case 0x23:
        var_r4 = data_ov000_0215fc48.exec(arg0);
        break;
    case 0x24:
        var_r4 = data_ov000_0215fc44.exec(arg0);
        break;
    case 0x15:
        var_r4 = data_020ecfe8.exec(arg0);
        break;
    case 0x2C:
        var_r4 = data_ov000_0215fc40.exec(arg0);
        break;
    case 0x2D:
        var_r4 = data_ov000_0215fbb4.exec(arg0);
        break;
    case 0x92:
        var_r4 = data_ov000_0215fbc0.exec(arg0);
        break;
    case 0x93:
        var_r4 = data_ov000_0215fbf4.exec(arg0);
        break;
    case 0xA4:
        var_r4 = data_ov000_0215fd10.exec(arg0);
        break;
    case 0xB4:
        var_r4 = data_ov000_0215fb88.exec(arg0);
        break;
    case 0xC6:
        var_r4 = data_ov000_0215fc24.exec(arg0);
        break;
    case 0xBA:
        var_r4 = data_ov000_0215fcf0.exec(arg0);
        break;
    case 0xC5:
        var_r4 = data_ov000_02160140.exec(arg0);
        break;
    case 0xCC:
        var_r4 = data_ov000_02160164.exec(arg0);
        break;
    case 0x171:
        var_r4 = data_ov000_0215fc90.exec(arg0);
        break;
    case 0xCD:
        var_r4 = data_ov000_02160178.exec(arg0);
        break;
    case 0xC3:
        var_r4 = data_ov000_0215fbfc.exec(arg0);
        break;
    case 0xB9:
        var_r4 = data_ov000_0215fb9c.exec(arg0);
        break;
    case 0xC0:
        var_r4 = g_cmd_field_player_move_to.exec(arg0);
        break;
    case 0xBD:
        var_r4 = g_cmd_field_player_set_ballon.exec(arg0);
        break;
    case 0xC8:
        var_r4 = g_cmd_field_get_down_ship.exec(arg0);
        break;
    case 0xCF:
        var_r4 = data_020ed024.exec(arg0);
        break;
    case 0xDB:
        var_r4 = data_020ed000.exec(arg0);
        break;
    case 0xDD:
        var_r4 = data_ov000_0215fca0.exec(arg0);
        break;
    case 0xE7:
        var_r4 = data_ov000_0215fbbc.exec(arg0);
        break;
    case 0x14A:
        var_r4 = data_ov000_0215fbec.exec(arg0);
        break;
    case 0xE8:
        var_r4 = data_020ecf44.exec(arg0);
        break;
    case 0xEF:
        var_r4 = data_020ed034.exec(arg0);
        break;
    case 0xF4:
        var_r4 = data_ov000_02160150.exec(arg0);
        break;
    case 0x82:
        var_r4 = data_ov000_0215fc34.exec(arg0);
        break;
    case 0xF9:
        var_r4 = data_ov000_0215fbd4.exec(arg0);
        break;
    case 0x83:
        var_r4 = data_ov000_0215fc00.exec(arg0);
        break;
    case 0x84:
        var_r4 = data_ov000_0215fc04.exec(arg0);
        break;
    case 0xED:
        var_r4 = data_020ecf4c.exec(arg0);
        break;
    case 0x109:
        var_r4 = data_ov000_0215fc50.exec(arg0);
        break;
    case 0x10A:
        var_r4 = data_ov000_0215fc14.exec(arg0);
        break;
    case 0x116:
        var_r4 = data_ov000_0215fc10.exec(arg0);
        break;
    case 0x117:
        var_r4 = data_ov000_0215fbac.exec(arg0);
        break;
    case 0x121:
        var_r4 = data_ov000_0215fcb0.exec(arg0);
        break;
    case 0x122:
        var_r4 = data_ov000_0215fba8.exec(arg0);
        break;
    case 0x11D:
        var_r4 = data_ov000_0215fb98.exec(arg0);
        break;
    case 0x130:
        var_r4 = data_ov000_0215fca8.exec(arg0);
        break;
    case 0x12B:
        var_r4 = data_ov000_0215fce8.exec(arg0);
        break;
    case 0x12C:
        var_r4 = data_ov000_02160130.exec(arg0);
        break;
    case 0x12D:
        var_r4 = data_ov000_0216018c.exec(arg0);
        break;
    case 0x133:
        var_r4 = data_ov000_0215fc98.exec(arg0);
        break;
    case 0x11E:
        var_r4 = data_020ecf48.exec(arg0);
        break;
    case 0x172:
        var_r4 = data_ov000_0215fc3c.exec(arg0);
        break;
    case 0x13A:
        var_r4 = data_020ed04c.exec(arg0);
        break;
    case 0x13F:
        var_r4 = data_ov000_0215fc80.exec(arg0);
        break;
    case 0x142:
        var_r4 = data_020ec630.exec(arg0);
        break;
    case 0x148:
        var_r4 = data_ov000_0215fc60.exec(arg0);
        break;
    case 0x15D:
        var_r4 = g_cmd_field_move_line.exec(arg0);
        break;
    case 0x151:
        var_r4 = data_ov000_0215fc2c.exec(arg0);
        break;
    case 0x168:
        var_r4 = data_ov000_0215fbdc.exec(arg0);
        break;
    case 0x90:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_string_print(arg0->param_);
        }
        break;
    case 0x8F:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_set_script_object_direction(arg0->param_);
        }
        break;
    case 0xC1:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = cmd_map_clipping(arg0->param_);
        }
        break;
    default:
        if (unkfunc_02020008(arg0) != 0) {
            var_r4 = 1;
        }
        break;
    }
    return var_r4;
}