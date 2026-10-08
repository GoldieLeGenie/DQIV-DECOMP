// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x0218a180..0x0218a184
__declspec(module_ctor) extern const unsigned int module_padding_ov026_ctor_0218a180[1] = {0};
// 0x0218a22c..0x0218a240
__declspec(module_data) extern const unsigned int module_padding_ov026_data_0218a22c[5] = {0};
}
