#pragma once
#include "globaldefs.h"
#include "GameInfo.hpp"
#include "main/dss/DssUtils.hpp"
#include "ov001/fld/FieldStage.hpp"

extern "C" {
    void func_ov001_02125eac(void* obj, int value);
    void func_ov001_02122b28(void* obj, dss::Fx32Vector3 pos);
    void func_ov001_0212b7e0(void* obj);
}

int cmd_field_erase_symbol(int* param);
int cmd_field_player_set_ship(int* param);
int cmd_set_field_player_pos(int* param);
int cmd_field_symbol_disp(int* param);
