#include "main/text/TextAPI.hpp"
#include "main/dss/DssUtils.hpp"

THUMB MACRO_STAT macro_checkVowel(void* macro, char* text)
{
    int result = MST_NULL;
    if (text == 0) {
        return (MACRO_STAT)result;
    }
    Utf8Iterator it;
    func_020876f4(&it);
    func_020875ec(&it, text);
    switch (func_0208771c(&it)) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 0xc0: case 0xc1: case 0xc2: case 0xc4: case 0xc8: case 0xc9: case 0xca: case 0xcb:
        case 0xcc: case 0xcd: case 0xce: case 0xcf: case 0xd2: case 0xd3: case 0xd4: case 0xd6:
        case 0xd9: case 0xda: case 0xdb: case 0xdc:
        case 0xe0: case 0xe1: case 0xe2: case 0xe4: case 0xe8: case 0xe9: case 0xea: case 0xeb:
        case 0xec: case 0xed: case 0xee: case 0xef: case 0xf2: case 0xf3: case 0xf4: case 0xf6:
        case 0xf9: case 0xfa: case 0xfb: case 0xfc:
            result |= MST_VOWEL | MST_VOWEL_FR;
            break;
    }
    return (MACRO_STAT)result;
}

THUMB MACRO_STAT macro_checkLastS(void* macro, char* text)
{
    int result = MST_NULL;
    if (text == 0) {
        return (MACRO_STAT)result;
    }
    Utf8Iterator it;
    func_020876f4(&it);
    func_020875ec(&it, text);
    int c = func_0208771c(&it);
    int last = 0;
    while (c != 0) {
        last = c;
        c = func_0208771c(&it);
        func_020877b8(&it);
    }
    switch (last) {
        case 'S': case 'X': case 'Z':
        case 's': case 'x': case 'z':
        case 0xdf:
            result |= MST_LASTLETTER_S | MST_LASTLETTER_S_DE;
            break;
    }
    return (MACRO_STAT)result;
}

THUMB void TextAPI::setLanguage(int language)
{
    data_02109e48.language_ = language;
    if (language == 0) {
        data_021098c4 = 0;
    } else {
        data_021098c4 = 1;
    }
}

THUMB void TextAPI::setMACRO0(int slot, int type, int value, int value2, int value3)
{
    func_02053d60(data_0210a464, slot, 0, type, value, value2, value3);
}

THUMB void TextAPI::setMACRO0(int slot, int type, int value, int value2)
{
    func_02053d48(data_0210a464, slot, 0, type, value, value2);
}

THUMB void TextAPI::setMACRO0(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 0, type, value);
}

THUMB void TextAPI::setMACRO1(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 1, type, value);
}

THUMB void TextAPI::setMACRO2(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 2, type, value);
}

THUMB void TextAPI::setMACRO3(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 3, type, value);
}

THUMB void TextAPI::setMACRO4(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 4, type, value);
}

THUMB void TextAPI::setMACRO5(int slot, int type, int value)
{
    func_02053d30(data_0210a464, slot, 5, type, value);
}

THUMB void TextAPI::resetMacro()
{
    func_02053d24(data_0210a464);
}

THUMB int TextAPI::isExistMessage(int messageID)
{
    return func_02054970(messageID, data_02109e48.language_);
}

THUMB void TextAPI::getMessage(char* message, int messageSize, char* name, int nameSize, int messageID)
{
    func_02054984(messageID, data_02109e48.language_);
    dss::DssUtils::strcpy_s(data_02109ed4, 0x200, func_020549a8());
    dss::DssUtils::strcpy_s(data_02109e54, 0x80, func_02054998());
    data_02109e48.messageSound_ = func_020549b8();
    func_02053dbc(data_0210a464, message, messageSize, data_02109ed4);
    func_02053dbc(data_0210a464, name, nameSize, data_02109e54);
}

THUMB int TextAPI::getMessageSound()
{
    return data_02109e48.messageSound_;
}

THUMB void TextAPI::getMonsterNamePlateTextImitation(char* text, int monsterIndex, int flag)
{
    MsgVar var;
    char work[0x200];
    char upper[0x200];
    char name[0x200];

    func_02053afc(&var, 1, 0, 0x60000000, monsterIndex, 0, -1);
    int opt = 0;
    if (isGermanMonsterException(monsterIndex)) {
        opt = 2;
    }
    func_02053b44(&var, work, 0x200, opt);
    func_02087fbc(data_020c45b0, data_020c4618, upper, 0x200, work, 1);
    func_02054a6c(data_0210a240, name, 0x200, 0xf0000000, flag);
    if (flag == 1) {
        func_02088258(text, data_020c2c2c, upper);
    } else {
        func_02088258(text, data_020c2c30, upper, data_020c2c3c, name);
    }
}

THUMB void TextAPI::getPlayerNamePlateTextImitation(char* text, int playerIndex, int flag)
{
    MsgVar var;
    char work[0x200];
    char upper[0x200];
    char name[0x200];

    func_02053afc(&var, 1, 0, 0x50000000, playerIndex, 1, -1);
    func_02053b44(&var, work, 0x200, 0);
    func_02087fbc(data_020c45b0, data_020c4618, upper, 0x200, work, 1);
    func_02054a6c(data_0210a240, name, 0x200, 0xf0000000, flag);
    if (flag == 1) {
        func_02088258(text, data_020c2c2c, upper);
    } else {
        func_02088258(text, data_020c2c30, upper, data_020c2c3c, name);
    }
}

THUMB void TextAPI::extractText(char* text, int size, int type, int value)
{
    func_02054a6c(data_0210a240, text, size, type, value);
}

THUMB void TextAPI::setHeroName(char* name)
{
    func_020551f0(data_0210a240, name);
}

THUMB void TextAPI::setUserString(int index, char* string)
{
    func_0205521c(data_0210a240, index, string);
}

THUMB int TextAPI::isGermanMonsterException(int monsterIndex)
{
    int result = 0;
    if (data_02109e48.language_ == 3) {
        switch (monsterIndex) {
            case 0xae:
            case 0xaf:
            case 0xc1:
            case 0xcd:
            case 0xce:
            case 0xcf:
            case 0xd0:
            case 0xd1:
            case 0xd2:
                result = 1;
                break;
        }
    }
    return result;
}
