// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x02147848..0x0214784c
__declspec(module_ctor) extern const unsigned int module_padding_ov000_ctor_02147848[1] = {0};
}
