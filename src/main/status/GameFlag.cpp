#include "main/status/GameFlag.hpp"

THUMB void status::GameFlag::set(unsigned int index) {
    this->flag_[index >> 5].flag_ |= 1 << (index & 0x1f);
    return;
}


THUMB void status::GameFlag::remove(unsigned int index)
{
    unsigned int word_offset = index >> 5;
    unsigned int bit_mask = 1u << (index & 0x1f);

    this->flag_[word_offset].flag_ &= ~bit_mask;
    return;
}

THUMB bool status::GameFlag::check(unsigned int index)
{
    const unsigned int word_offset = index >> 5;
    const unsigned int bit_position = index & 0x1f;
    const unsigned int word_value = this->flag_[word_offset].flag_;
    const unsigned int bit_mask = 1u << bit_position;

    return (word_value & bit_mask) != 0;
}


THUMB void status::GameFlag::clear() {
    for (unsigned int i = 0; i < 32; i++)
    {
        this->flag_[i].flag_ = 0;
    }
    return;
}






