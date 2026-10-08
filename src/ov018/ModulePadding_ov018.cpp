// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R

extern "C" {
// 0x02189340..0x02189344
__declspec(module_ctor) extern const unsigned int module_padding_ov018_ctor_02189340[1] = {0};
}
