// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x021606bc..0x021606c0
__declspec(module_ctor) extern const unsigned int module_padding_ov001_ctor_021606bc[1] = {0};
// 0x02160e44..0x02160e60
__declspec(module_data) extern const unsigned int module_padding_ov001_data_02160e44[7] = {0};
}
