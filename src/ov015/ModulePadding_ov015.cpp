// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x02176750..0x02176754
__declspec(module_ctor) extern const unsigned int module_padding_ov015_ctor_02176750[1] = {0};
}
