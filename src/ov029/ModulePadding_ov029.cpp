// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

extern "C" {
// 0x02189980..0x02189984
__declspec(module_ctor) extern const unsigned int module_padding_ov029_ctor_02189980[1] = {0};
// 0x021899d8..0x021899e0
__declspec(module_data) extern const unsigned int module_padding_ov029_data_021899d8[2] = {0};
}
