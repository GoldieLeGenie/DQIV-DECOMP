// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x021396c8..0x021396cc
__declspec(module_ctor) extern const unsigned int module_padding_ov003_ctor_021396c8[1] = {0};
// 0x0213ca50..0x0213ca60
__declspec(module_data) extern const unsigned int module_padding_ov003_data_0213ca50[4] = {0};
}
