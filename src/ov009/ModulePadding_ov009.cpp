// Null constructor-table terminator and reserved alignment storage in the original module.
// These ranges contain only zeros; no executable code is defined here.
#pragma define_section module_ctor ".ctor" ".ctor" ".ctor" R
#pragma define_section module_data ".data.keep" ".data.keep" ".data.keep" RW

#pragma define_section module_bss ".bss.keep" ".bss.keep" ".bss.keep" RW

extern "C" {
// 0x0212512c..0x02125130
__declspec(module_ctor) extern const unsigned int module_padding_ov009_ctor_0212512c[1] = {0};
// 0x02125658..0x02125660
__declspec(module_data) extern const unsigned int module_padding_ov009_data_02125658[2] = {0};
// 0x021276dc..0x021276e0
__declspec(module_bss) unsigned int module_padding_ov009_bss_021276dc[1];
}
