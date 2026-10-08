// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x0218ad14..0x0218ad18
__declspec(module_ctor) extern const unsigned int module_padding_ov037_ctor_0218ad14[1] = {0};
// 0x0218ad34..0x0218ad40
__declspec(module_data) extern const unsigned int module_padding_ov037_data_0218ad34[3] = {0};
}
