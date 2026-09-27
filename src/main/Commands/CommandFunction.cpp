#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/CommandParameter/CommandParameter.hpp"
#include "ov000/Commands/TownCommand.hpp"
#include "main/Commands/CommonCommand.hpp"
#include "ov001/Commands/FieldCommand.hpp"




// Data
extern ScriptCommand data_020ec59c; // __cmd_character_action_tremble
extern ScriptCommand data_020ec5a0; // __cmd_character_action_vanish
extern ScriptCommand data_020ec5a4; // __cmd_map_animation_b
extern ScriptCommand data_020ec5e8; // __cmd_wait
extern ScriptCommand data_020ec60c; // __cmd_menu_yes_no
extern ScriptCommand data_020ec61c; // __cmd_count
extern ScriptCommand data_020ec630; // __cmd_message_with_sound
extern ScriptCommand data_020ecf40; // __cmd_event_chapter_title
extern ScriptCommand data_020ecf44; // __cmd_character_palette
extern ScriptCommand data_020ecf48; // __cmd_key_wait_type_b
extern ScriptCommand data_020ecf4c; // __cmd_player_effect_mark
extern ScriptCommand data_020ecf50; // __cmd_fade_out2
extern ScriptCommand data_020ecf58; // __cmd_fade_in
extern ScriptCommand data_020ecf60; // __cmd_fade_in2
extern ScriptCommand data_020ecf68; // __cmd_fade_out
extern ScriptCommand data_020ecfe8; // __cmd_message1_self_closing
extern ScriptCommand data_020ed000; // __cmd_speak_to_player_self_closing
extern ScriptCommand data_020ed024; // __cmd_menu_save
extern ScriptCommand data_020ed034; // __cmd_music_volume
extern ScriptCommand data_020ed04c; // __cmd_play_music
extern ScriptCommand data_ov000_0215fb88; // __cmd_camera_change_distance
extern ScriptCommand data_ov000_0215fb8c; // __cmd_player_move2
extern ScriptCommand data_ov000_0215fb90; // __cmd_character_move2
extern ScriptCommand data_ov000_0215fb94; // __cmd_character_move2_to
extern ScriptCommand data_ov000_0215fb98; // __cmd_door_action
extern ScriptCommand data_ov000_0215fb9c; // __cmd_camera_move_to_player
extern ScriptCommand data_ov000_0215fba0; // __cmd_character_move2_party
extern ScriptCommand data_ov000_0215fba4; // __cmd_character_move
extern ScriptCommand data_ov000_0215fba8; // __cmd_set_camera_angle_abs
extern ScriptCommand data_ov000_0215fbac; // __cmd_ikada_move_player_get_on
extern ScriptCommand data_ov000_0215fbb0; // __cmd_player_move2_to
extern ScriptCommand data_ov000_0215fbb4; // __cmd_character_action_gaze
extern ScriptCommand data_ov000_0215fbb8; // __cmd_character_effect_mark
extern ScriptCommand data_ov000_0215fbbc; // __cmd_charcter_3d_motion
extern ScriptCommand data_ov000_0215fbc0; // __cmd_player_move_jump
extern ScriptCommand data_ov000_0215fbc4; // __cmd_player_move_to
extern ScriptCommand data_ov000_0215fbc8; // __cmd_player_move
extern ScriptCommand data_ov000_0215fbcc; // __cmd_map_camera_position
extern ScriptCommand data_ov000_0215fbd0; // __cmd_character_move_to
extern ScriptCommand data_ov000_0215fbd4; // __cmd_character_normal_jump
extern ScriptCommand data_ov000_0215fbd8; // __cmd_character_move2_z
extern ScriptCommand data_ov000_0215fbdc; // __cmd_set_end_roll
extern ScriptCommand data_ov000_0215fbe0; // __cmd_party_move2_formation
extern ScriptCommand data_ov000_0215fbe4; // __cmd_character_move2_relative
extern ScriptCommand data_ov000_0215fbe8; // __cmd_character_move2_player
extern ScriptCommand data_ov000_0215fbec; // __cmd_charcter_motion
extern ScriptCommand data_ov000_0215fbf0; // __cmd_character_move_party
extern ScriptCommand data_ov000_0215fbf4; // __cmd_player_move2_jump
extern ScriptCommand data_ov000_0215fbf8; // __cmd_character_wait
extern ScriptCommand data_ov000_0215fbfc; // __cmd_camera_move_pov
extern ScriptCommand data_ov000_0215fc00; // __cmd_fadein_character
extern ScriptCommand data_ov000_0215fc04; // __cmd_fadeout_character
extern ScriptCommand data_ov000_0215fc08; // __cmd_character_move2_x
extern ScriptCommand data_ov000_0215fc0c; // __cmd_character_move_player
extern ScriptCommand data_ov000_0215fc10; // __cmd_ikada_move2_player_get_on
extern ScriptCommand data_ov000_0215fc14; // __cmd_player_line_move2
extern ScriptCommand data_ov000_0215fc18; // __cmd_party_move_to_first2
extern ScriptCommand data_ov000_0215fc1c; // __cmd_character_move_x
extern ScriptCommand data_ov000_0215fc24; // __cmd_camera_reset_distance
extern ScriptCommand data_ov000_0215fc28; // __cmd_map_camera_move
extern ScriptCommand data_ov000_0215fc2c; // __cmd_set_chara_rot
extern ScriptCommand data_ov000_0215fc30; // __cmd_character_move_relative
extern ScriptCommand data_ov000_0215fc34; // __cmd_character_action_jump
extern ScriptCommand data_ov000_0215fc38; // __cmd_camera_move_abs
extern ScriptCommand data_ov000_0215fc3c; // __cmd_the_end
extern ScriptCommand data_ov000_0215fc40; // __cmd_character_action_turn
extern ScriptCommand data_ov000_0215fc44; // __cmd_map_camera_gaze
extern ScriptCommand data_ov000_0215fc48; // __cmd_map_camera_angle
extern ScriptCommand data_ov000_0215fc4c; // __cmd_party_move_overlap
extern ScriptCommand data_ov000_0215fc50; // __cmd_player_line_move
extern ScriptCommand data_ov000_0215fc54; // __cmd_character_move_z
extern ScriptCommand data_ov000_0215fc58; // __cmd_furniture_move2
extern ScriptCommand data_ov000_0215fc60; // __cmd_chara_move_line_to_player
extern ScriptCommand data_ov000_0215fc68; // __cmd_furniture_move
extern ScriptCommand data_ov000_0215fc70; // __cmd_effect_wait
extern ScriptCommand data_ov000_0215fc78; // __cmd_effect_fade
extern ScriptCommand data_ov000_0215fc80; // __cmd_set_wait_enable_lock
extern ScriptCommand data_ov000_0215fc88; // __cmd_effect_move
extern ScriptCommand data_ov000_0215fc90; // __cmd_character_rgb_anim2
extern ScriptCommand data_ov000_0215fc98; // __cmd_surechigai_message
extern ScriptCommand data_ov000_0215fca0; // __cmd_riseup_move
extern ScriptCommand data_ov000_0215fca8; // __cmd_surechigai_mapname
extern ScriptCommand data_ov000_0215fcb0; // __cmd_set_camera_target_chara_frame
extern ScriptCommand data_ov000_0215fcb8; // __cmd_menu_extra_shop
extern ScriptCommand data_ov000_0215fcc0; // __cmd_menu_present_exp
extern ScriptCommand data_ov000_0215fcc8; // __cmd_menu_colosseum
extern ScriptCommand data_ov000_0215fcd0; // __cmd_menu_hostage
extern ScriptCommand data_ov000_0215fcd8; // __cmd_menu_nene
extern ScriptCommand data_ov000_0215fce0; // __cmd_set_party_order
extern ScriptCommand data_ov000_0215fce8; // __cmd_make_surechigai_taishi
extern ScriptCommand data_ov000_0215fcf0; // __cmd_player_rot
extern ScriptCommand data_ov000_0215fd10; // __cmd_map_event_camera
extern ScriptCommand data_ov000_0215fda0; // __cmd_map_flash
extern ScriptCommand data_ov000_02160070; // __cmd_menu_shop
extern ScriptCommand data_ov000_021600f4; // __cmd_furniture_open
extern ScriptCommand data_ov000_0216010c; // __cmd_player_wait
extern ScriptCommand data_ov000_02160130; // __cmd_surechigai_save
extern ScriptCommand data_ov000_02160140; // __cmd_menu_event_imuru
extern ScriptCommand data_ov000_02160150; // __cmd_map_texture_scale
extern ScriptCommand data_ov000_02160164; // __cmd_map_set_back_color
extern ScriptCommand data_ov000_02160178; // __cmd_map_restore_back_color
extern ScriptCommand data_ov000_0216018c; // __cmd_surechigai_root
extern ScriptCommand data_ov000_021601a4; // __cmd_map_blend_color
extern ScriptCommand data_ov000_021601bc; // __cmd_map_blend_init
extern ScriptCommand data_ov001_02164a20; // __cmd_field_move_line
extern ScriptCommand data_ov001_02164a24; // __cmd_field_player_move_to
extern ScriptCommand data_ov001_02164a28; // __cmd_field_player_set_ballon
extern ScriptCommand data_ov001_02164a2c; // __cmd_field_get_down_ship



ARM int CommandFunction(CommandParameter *arg0) {
    int var_r4;

    var_r4 = 1;
    switch (arg0->command_) {
    case 2:
        int v0 = func_02020008(arg0);
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
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_message1(arg0->param_);
        }
        break;
    case 4:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_message2(arg0->param_);
        }
        break;
    case 0x18:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_get_flag(arg0->param_);
        }
        break;
    case 0x17:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_flag(arg0->param_);
        }
        break;
    case 0x7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_setup(arg0->param_);
        }
        break;
    case 0x4A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_speaked(arg0->param_);
        }
        break;
    case 0x5:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_speak_to_player(arg0->param_);
        }
        break;
    case 0x6:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_speak_to_player2(arg0->param_);
        }
        break;
    case 0x19:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_timezone(arg0->param_);
        }
        break;
    case 0x1A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_timezone(arg0->param_);
        }
        break;
    case 0x8E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_debug_print(arg0->param_);
        }
        break;
    case 0x8:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_lock(arg0->param_);
        }
        break;
    case 0x4D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_position(arg0->param_);
        }
        break;
    case 0x4E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_direction(arg0->param_);
        }
        break;
    case 0x16D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_overview_point(arg0->param_);
        }
        break;
    case 0x79:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_position(arg0->param_);
        }
        break;
    case 0x7A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_direction(arg0->param_);
        }
        break;
    case 0x11B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_x_wins(arg0->param_);
        }
        break;
    case 0x10E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_battle_end_flag_set(arg0->param_);
        }
        break;
    case 0x11A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_message_sound(arg0->param_);
        }
        break;
    case 0x126:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_monster(arg0->param_);
        }
        break;
    case 0x1D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_animation_a(arg0->param_);
        }
        break;
    case 0x1E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_collision(arg0->param_);
        }
        break;
    case 0x1B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_timezone_pause(arg0->param_);
        }
        break;
    case 0x52:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_stepping(arg0->param_);
        }
        break;
    case 0x53:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_still(arg0->param_);
        }
        break;
    case 0x54:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_wriggle(arg0->param_);
        }
        break;
    case 0x58:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_display(arg0->param_);
        }
        break;
    case 0x55:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_near(arg0->param_);
        }
        break;
    case 0x7B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_wriggle(arg0->param_);
        }
        break;
    case 0x7C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_stepping(arg0->param_);
        }
        break;
    case 0x50:
        if (func_02020008(arg0) != 0) {
            cmd_character_action_sleep(arg0->param_);
            var_r4 = 0;
        }
        break;
    case 0x16E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_sleep_near(arg0->param_);
        }
        break;
    case 0x7D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_still(arg0->param_);
        }
        break;
    case 0x59:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_character_collision(arg0->param_);
        }
        break;
    case 0xA:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger(arg0->param_);
        }
        break;
    case 0xB:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger2(arg0->param_);
        }
        break;
    case 0x5A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_action_pursue(arg0->param_);
        }
        break;
    case 0x5B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_roam(arg0->param_);
        }
        break;
    case 0x78:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_encount(arg0->param_);
        }
        break;
    case 0x88:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_encount_set_flag(arg0->param_);
        }
        break;
    case 0x164:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_encount_first_strike(arg0->param_);
        }
        break;
    case 0x16A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_ride_on(arg0->param_);
        }
        break;
    case 0x64:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_join(arg0->param_);
        }
        break;
    case 0x65:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_quit(arg0->param_);
        }
        break;
    case 0x66:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_join(arg0->param_);
        }
        break;
    case 0x67:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_quit(arg0->param_);
        }
        break;
    case 0xAF:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_hostage();
        }
        break;
    case 0x120:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_actor();
        }
        break;
    case 0x128:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_target();
        }
        break;
    case 0x160:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_target_index(arg0->param_);
        }
        break;
    case 0x140:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_prisoner();
        }
        break;
    case 0x12:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_item(arg0->param_);
        }
        break;
    case 0x49:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_procure_item(arg0->param_);
        }
        break;
    case 0x13:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_gold(arg0->param_);
        }
        break;
    case 0x14:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_coin(arg0->param_);
        }
        break;
    case 0x11:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_mini_game(arg0->param_);
        }
        break;
    case 0x6A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_total_recovery(arg0->param_);
        }
        break;
    case 0x6B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_order(arg0->param_);
        }
        break;
    case 0x6C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_member(arg0->param_);
        }
        break;
    case 0x6D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_ride_carriage(arg0->param_);
        }
        break;
    case 0x80:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_player_status_dead(arg0->param_);
        }
        break;
    case 0x1F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_floor_change(arg0->param_);
        }
        break;
    case 0x20:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_floor_exit(arg0->param_);
        }
        break;
    case 0x6E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_join_carriage();
        }
        break;
    case 0x6F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_top(arg0->param_);
        }
        break;
    case 0x70:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_top(arg0->param_);
        }
        break;
    case 0x71:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_all(arg0->param_);
        }
        break;
    case 0x72:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_all(arg0->param_);
        }
        break;
    case 0x73:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_head_count(arg0->param_);
        }
        break;
    case 0x74:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_head_count(arg0->param_);
        }
        break;
    case 0x28:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_change_timezone(arg0->param_);
        }
        break;
    case 0xC9:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_effect_sepia();
        }
        break;
    case 0xCA:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_disable_demolition();
        }
        break;
    case 0x62:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_se(arg0->param_);
        }
        break;
    case 0x63:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_cut_se(arg0->param_);
        }
        break;
    case 0x10:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_doorway(arg0->param_);
        }
        break;
    case 0x25:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_link_on_off(arg0->param_);
        }
        break;
    case 0x13D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_not_use_load_message();
        }
        break;
    case 0x26:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_change_map_link(arg0->param_);
        }
        break;
    case 0xFF:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_vehicle(arg0->param_);
        }
        break;
    case 0x27:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmn_set_event_door(arg0->param_);
        }
        break;
    case 0x176:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_title_part(arg0->param_);
        }
        break;
    case 0xFD:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_map_texture(arg0->param_);
        }
        break;
    case 0x42:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_forward(arg0->param_);
        }
        break;
    case 0x43:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_character(arg0->param_);
        }
        break;
    case 0x44:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger2_character(arg0->param_);
        }
        break;
    case 0x47:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_town_to_field_link(arg0->param_);
        }
        break;
    case 0x48:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmn_set_field_to_town_link(arg0->param_);
        }
        break;
    case 0x34:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_not_change_direction(arg0->param_);
        }
        break;
    case 0x38:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_not_change_direction(arg0->param_);
        }
        break;
    case 0x35:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_character_direction(arg0->param_);
        }
        break;
    case 0x39:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_player_direction(arg0->param_);
        }
        break;
    case 0x97:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_animation(arg0->param_);
        }
        break;
    case 0x81:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_recovery(arg0->param_);
        }
        break;
    case 0x77:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_in_carriage(arg0->param_);
        }
        break;
    case 0x29:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_shake(arg0->param_);
        }
        break;
    case 0xB2:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_effect_blur(arg0->param_);
        }
        break;
    case 0x3A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_display(arg0->param_);
        }
        break;
    case 0x37:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_character_front(arg0->param_);
        }
        break;
    case 0x36:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_talked_at_shop(arg0->param_);
        }
        break;
    case 0x2A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_search_map_object(arg0->param_);
        }
        break;
    case 0x3E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_encount_disable(arg0->param_);
        }
        break;
    case 0x3F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_encount_stage_disable(arg0->param_);
        }
        break;
    case 0x40:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_demolition_fightingarena(arg0->param_);
        }
        break;
    case 0x41:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_battle_turn(arg0->param_);
        }
        break;
    case 0x45:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_random(arg0->param_);
        }
        break;
    case 0x46:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_random2(arg0->param_);
        }
        break;
    case 0x2B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_floor_map_object(arg0->param_);
        }
        break;
    case 0x16:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_hostage(arg0->param_);
        }
        break;
    case 0x9E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_set_coll_stage(arg0->param_);
        }
        break;
    case 0x9D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_trigger_distance(arg0->param_);
        }
        break;
    case 0xA7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_charcter_3d_rotate(arg0->param_);
        }
        break;
    case 0xAC:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_effect_transfer(arg0->param_);
        }
        break;
    case 0xB1:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_pose_change(arg0->param_);
        }
        break;
    case 0x123:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_furniture_move_request(arg0->param_);
        }
        break;
    case 0xB0:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_display2(arg0->param_);
        }
        break;
    case 0x86:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_music(arg0->param_);
        }
        break;
    case 0x87:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_music_pause(arg0->param_);
        }
        break;
    case 0x146:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_play_music_now_map(arg0->param_);
        }
        break;
    case 0xB5:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmn_camera_lock_pov(arg0->param_);
        }
        break;
    case 0xA5:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_redisplay(arg0->param_);
        }
        break;
    case 0xB7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_action_dance(arg0->param_);
        }
        break;
    case 0xB8:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_enable_event_item(arg0->param_);
        }
        break;
    case 0xBB:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_player_set_coll(arg0->param_);
        }
        break;
    case 0xC2:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_ruura_lock(arg0->param_);
        }
        break;
    case 0x169:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_ranaruta(arg0->param_);
        }
        break;
    case 0xFB:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_invalidation_rula(arg0->param_);
        }
        break;
    case 0xBE:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_link_field_direct(arg0->param_);
        }
        break;
    case 0xC4:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_money(arg0->param_);
        }
        break;
    case 0x100:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_not_play_normal_sound(arg0->param_);
        }
        break;
    case 0x163:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_save_last_party();
        }
        break;
    case 0x101:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_member_type(arg0->param_);
        }
        break;
    case 0x102:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_member_num(arg0->param_);
        }
        break;
    case 0x103:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_priority_sure_appointment(arg0->param_);
        }
        break;
    case 0x104:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_normal_sure_appointment(arg0->param_);
        }
        break;
    case 0x105:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_set_normal_sure(arg0->param_);
        }
        break;
    case 0x106:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_talk_to_player_sure(arg0->param_);
        }
        break;
    case 0x107:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_surechigai_level(arg0->param_);
        }
        break;
    case 0x108:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_copy_party_chara(arg0->param_);
        }
        break;
    case 0x10B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_del2(arg0->param_);
        }
        break;
    case 0x112:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_shadow(arg0->param_);
        }
        break;
    case 0x113:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_alpha(arg0->param_);
        }
        break;
    case 0x118:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_ikada_set_position(arg0->param_);
        }
        break;
    case 0x119:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_crack_key_by_orin(arg0->param_);
        }
        break;
    case 0x11F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_big_rock_move(arg0->param_);
        }
        break;
    case 0x124:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_monster_talk(arg0->param_);
        }
        break;
    case 0x125:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_monster_talk_all(arg0->param_);
        }
        break;
    case 0x127:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_field_symbol_disp(arg0->param_);
        }
        break;
    case 0x129:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_chara_map_uid(arg0->param_);
        }
        break;
    case 0x12A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_my_taishi(arg0->param_);
        }
        break;
    case 0x144:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_forward_counter(arg0->param_);
        }
        break;
    case 0x147:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_setup_music(arg0->param_);
        }
        break;
    case 0x155:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_stream_play(arg0->param_);
        }
        break;
    case 0x157:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_camera_limit(arg0->param_);
        }
        break;
    case 0x161:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_voice(arg0->param_);
        }
        break;
    case 0xBC:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_field_player_set_ship(arg0->param_);
        }
        break;
    case 0x145:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_field_player_pos(arg0->param_);
        }
        break;
    case 0xC7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_camera_clip_distance(arg0->param_);
        }
        break;
    case 0xBF:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_lock_target_player(arg0->param_);
        }
        break;
    case 0xCB:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_near(arg0->param_);
        }
        break;
    case 0x9A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_passive(arg0->param_);
        }
        break;
    case 0x85:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_camera_target(arg0->param_);
        }
        break;
    case 0x9B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_random(arg0->param_);
        }
        break;
    case 0xD4:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_wait_counter(arg0->param_);
        }
        break;
    case 0xD6:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_day_count(arg0->param_);
        }
        break;
    case 0xD8:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_barrier_disruption(arg0->param_);
        }
        break;
    case 0xD9:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_barrier_disruption(arg0->param_);
        }
        break;
    case 0xDC:
        if (func_02020008(arg0) != 0) {
            var_r4 = func_ov000_02141424(arg0->param_);
        }
        break;
    case 0x135:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_sleep(arg0->param_);
        }
        break;
    case 0xEA:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_reserve_order(arg0->param_);
        }
        break;
    case 0xEB:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_party_copy_character(arg0->param_);
        }
        break;
    case 0xEC:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_call_carriage(arg0->param_);
        }
        break;
    case 0xF2:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_map_treasure(arg0->param_);
        }
        break;
    case 0xA2:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_furniture_position(arg0->param_);
        }
        break;
    case 0xF3:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_texture(arg0->param_);
        }
        break;
    case 0xF5:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_effect_dream(arg0->param_);
        }
        break;
    case 0x9C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_move_reverse(arg0->param_);
        }
        break;
    case 0xF6:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_furniture_fadeout(arg0->param_);
        }
        break;
    case 0xD2:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_wait_operation(arg0->param_);
        }
        break;
    case 0xD5:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_wait_counter(arg0->param_);
        }
        break;
    case 0x152:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_push_key(arg0->param_);
        }
        break;
    case 0xD7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_day_count(arg0->param_);
        }
        break;
    case 0xFA:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_chapter(arg0->param_);
        }
        break;
    case 0xFC:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_hero_level(arg0->param_);
        }
        break;
    case 0xEE:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_event_chapter_end(arg0->param_);
        }
        break;
    case 0xF8:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_swing_round(arg0->param_);
        }
        break;
    case 0xF7:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_character_anim(arg0->param_);
        }
        break;
    case 0x75:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_party_item(arg0->param_);
        }
        break;
    case 0x76:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_party_item(arg0->param_);
        }
        break;
    case 0xFE:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_field_erase_symbol(arg0->param_);
        }
        break;
    case 0x10C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_store(arg0->param_);
        }
        break;
    case 0x10D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_restore(arg0->param_);
        }
        break;
    case 0x170:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chapter_restore_coin(arg0->param_);
        }
        break;
    case 0x10F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_reset_sidejob_pay(arg0->param_);
        }
        break;
    case 0x110:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_get_sidejob_pay(arg0->param_);
        }
        break;
    case 0x111:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_sidejob_pay(arg0->param_);
        }
        break;
    case 0x175:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_ship_pos(arg0->param_);
        }
        break;
    case 0x173:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_not_go_into_tenku(arg0->param_);
        }
        break;
    case 0x174:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_black(arg0->param_);
        }
        break;
    case 0x177:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_end_roll_clear(arg0->param_);
        }
        break;
    case 0x114:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_endor_event_item(arg0->param_);
        }
        break;
    case 0x115:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_endor_event_item(arg0->param_);
        }
        break;
    case 0x12E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_change_surechigai_part(arg0->param_);
        }
        break;
    case 0x12F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_surechigai_success(arg0->param_);
        }
        break;
    case 0x132:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_ikada_info(arg0->param_);
        }
        break;
    case 0x131:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_taishi_max(arg0->param_);
        }
        break;
    case 0x134:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_default_map_name(arg0->param_);
        }
        break;
    case 0x136:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_player_henge_endless(arg0->param_);
        }
        break;
    case 0x137:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_open_door(arg0->param_);
        }
        break;
    case 0x138:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_lock_move(arg0->param_);
        }
        break;
    case 0x139:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_random_message(arg0->param_);
        }
        break;
    case 0x13B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_get_reward_tom(arg0->param_);
        }
        break;
    case 0x13E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_add_nene_count(arg0->param_);
        }
        break;
    case 0x141:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_hit_surface(arg0->param_);
        }
        break;
    case 0x143:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_party_mark(arg0->param_);
        }
        break;
    case 0x14B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_door_close(arg0->param_);
        }
        break;
    case 0x14C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_camera_default_angle(arg0->param_);
        }
        break;
    case 0x153:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_start_game(arg0->param_);
        }
        break;
    case 0x14D:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_chara_mortion_lock(arg0->param_);
        }
        break;
    case 0x14E:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_hero_sex(arg0->param_);
        }
        break;
    case 0x154:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_opening_backcolor(arg0->param_);
        }
        break;
    case 0x156:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_fighting_colosseum_mode(arg0->param_);
        }
        break;
    case 0x159:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_van_and_basha(arg0->param_);
        }
        break;
    case 0x15F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_basha_go_into(arg0->param_);
        }
        break;
    case 0x15A:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_is_load_init(arg0->param_);
        }
        break;
    case 0x15B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_search_action(arg0->param_);
        }
        break;
    case 0x15C:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_no_search_message(arg0->param_);
        }
        break;
    case 0x150:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_x_item1(arg0->param_);
        }
        break;
    case 0x14F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_macro_i_name(arg0->param_);
        }
        break;
    case 0x162:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_check_player_item(arg0->param_);
        }
        break;
    case 0x167:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_chara_motion2(arg0->param_);
        }
        break;
    case 0x16B:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_unused_extra_chara(arg0->param_);
        }
        break;
    case 0x16C:
        if (func_02020008(arg0) != 0) {
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
        var_r4 = data_ov001_02164a24.exec(arg0);
        break;
    case 0xBD:
        var_r4 = data_ov001_02164a28.exec(arg0);
        break;
    case 0xC8:
        var_r4 = data_ov001_02164a2c.exec(arg0);
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
        var_r4 = data_ov001_02164a20.exec(arg0);
        break;
    case 0x151:
        var_r4 = data_ov000_0215fc2c.exec(arg0);
        break;
    case 0x168:
        var_r4 = data_ov000_0215fbdc.exec(arg0);
        break;
    case 0x90:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_string_print(arg0->param_);
        }
        break;
    case 0x8F:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_set_script_object_direction(arg0->param_);
        }
        break;
    case 0xC1:
        if (func_02020008(arg0) != 0) {
            var_r4 = cmd_map_clipping(arg0->param_);
        }
        break;
    default:
        if (func_02020008(arg0) != 0) {
            var_r4 = 1;
        }
        break;
    }
    return var_r4;
}