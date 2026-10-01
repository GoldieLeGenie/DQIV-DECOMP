#pragma once
#include <globaldefs.h>

namespace window {
    struct ImageMap;

    struct CommandWindow {
        char unk_00[0x70];

        CommandWindow();
        ~CommandWindow();
        void initialize();
        void terminate();
        void changeShopMenuPhase(int type);
        bool isMessage();
        void execute();
        void registImageMap(ImageMap* imageMap);
        void registShopList(ImageMap* shoplist);
        void MESSAGEWINDOW(int index, int count);
        void MESSAGECOMMONWINDOW();
        void ADDCOMMONWINDOW(int index);
        void WAITCOMMONWINDOW();
        void CLEARCOMMONWINDOW();
        void SERIALCOMMONWINDOW(int index);
        bool isWAITWINDOW();
        bool isOPENWINDOW();
    };
}
