// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x021894b0..0x021894b4
__declspec(module_ctor) extern const unsigned int module_padding_ov034_ctor_021894b0[1] = {0};
// 0x021894dc..0x021894e0
__declspec(module_data) extern const unsigned int module_padding_ov034_data_021894dc[1] = {0};
}
