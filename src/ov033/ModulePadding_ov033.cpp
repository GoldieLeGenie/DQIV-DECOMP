// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x021895d0..0x021895d4
__declspec(module_ctor) extern const unsigned int module_padding_ov033_ctor_021895d0[1] = {0};
// 0x021895fc..0x02189600
__declspec(module_data) extern const unsigned int module_padding_ov033_data_021895fc[1] = {0};
}
