// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x02189bb8..0x02189bbc
__declspec(module_ctor) extern const unsigned int module_padding_ov035_ctor_02189bb8[1] = {0};
// 0x02189bdc..0x02189be0
__declspec(module_data) extern const unsigned int module_padding_ov035_data_02189bdc[1] = {0};
}
