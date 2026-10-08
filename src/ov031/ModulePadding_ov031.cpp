// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x02189728..0x0218972c
__declspec(module_ctor) extern const unsigned int module_padding_ov031_ctor_02189728[1] = {0};
// 0x021897b4..0x021897c0
__declspec(module_data) extern const unsigned int module_padding_ov031_data_021897b4[3] = {0};
}
