// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x0218a3fc..0x0218a400
__declspec(module_ctor) extern const unsigned int module_padding_ov027_ctor_0218a3fc[1] = {0};
// 0x0218a498..0x0218a4a0
__declspec(module_data) extern const unsigned int module_padding_ov027_data_0218a498[2] = {0};
}
