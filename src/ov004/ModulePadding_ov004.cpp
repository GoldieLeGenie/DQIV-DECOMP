// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x021210e0..0x021210e4
__declspec(module_ctor) extern const unsigned int module_padding_ov004_ctor_021210e0[1] = {0};
}
