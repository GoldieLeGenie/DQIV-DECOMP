// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x0218d03c..0x0218d040
__declspec(module_ctor) extern const unsigned int module_padding_ov028_ctor_0218d03c[1] = {0};
// 0x0218d1b8..0x0218d1c0
__declspec(module_data) extern const unsigned int module_padding_ov028_data_0218d1b8[2] = {0};
}
