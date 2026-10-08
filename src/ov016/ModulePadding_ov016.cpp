// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x0217f824..0x0217f828
__declspec(module_ctor) extern const unsigned int module_padding_ov016_ctor_0217f824[1] = {0};
}
