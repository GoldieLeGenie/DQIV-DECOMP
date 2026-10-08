// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x02189a30..0x02189a34
__declspec(module_ctor) extern const unsigned int module_padding_ov025_ctor_02189a30[1] = {0};
// 0x02189a94..0x02189aa0
__declspec(module_data) extern const unsigned int module_padding_ov025_data_02189a94[3] = {0};
}
