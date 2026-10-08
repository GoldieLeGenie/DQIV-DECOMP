// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x021894e4..0x021894e8
__declspec(module_ctor) extern const unsigned int module_padding_ov032_ctor_021894e4[1] = {0};
// 0x0218951c..0x02189520
__declspec(module_data) extern const unsigned int module_padding_ov032_data_0218951c[1] = {0};
}
