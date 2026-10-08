// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x02189d34..0x02189d38
__declspec(module_ctor) extern const unsigned int module_padding_ov030_ctor_02189d34[1] = {0};
// 0x02189d94..0x02189da0
__declspec(module_data) extern const unsigned int module_padding_ov030_data_02189d94[3] = {0};
}
