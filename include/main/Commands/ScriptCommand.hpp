#pragma once
#include "globaldefs.h"
#include "main/dss/DssUtils.hpp"
#include "main/Commands/CommonCommand.hpp"

struct PARAM_COUNT {
    unsigned int start;          // 0x00
    unsigned int end;            // 0x04
    unsigned int add;            // 0x08
};

struct PARAM_WAIT {
    unsigned int frame;          // 0x00
};

struct PARAM_MAP_ANIMATION_B {
    unsigned int target;         // 0x00
    unsigned int animation;      // 0x04
};

struct PARAM_CHARACTER_ACTION_TREMBLE {
    unsigned int frame;          // 0x00
    unsigned int dir;            // 0x04
    unsigned int mode;           // 0x08
    unsigned int sycle;          // 0x0C
};

struct PARAM_CHARACTER_ACTION_VANISH {
    unsigned int frame;          // 0x00
    unsigned int flash;          // 0x04
};

struct PARAM_MENU_YES_NO {
    unsigned int type;           // 0x00
    unsigned int index;          // 0x04
    unsigned int position;       // 0x08
};

struct PARAM_MESSAGE_WITH_SOUND {
    unsigned int message;        // 0x00
    unsigned int count;          // 0x04
    unsigned int sound;          // 0x08
    unsigned int frame;          // 0x0C
    unsigned int flag;           // 0x10
    unsigned int automes;        // 0x14
};

/* vtable 0x020be010, object 0x020ec61c */
struct __cmd_count : ScriptCommand {
    unsigned int count_;         // 0x04
    unsigned int start_;         // 0x08
    unsigned int end_;           // 0x0C
    unsigned int add_;           // 0x10

    virtual void initialize(char* scriptParam);
    virtual void execute();
    virtual void terminate() {}
    virtual int isEnd();
};

/* vtable 0x020bdfb0, object 0x020ec5e8 */
struct __cmd_wait : ScriptCommand {
    int count_;                  // 0x04
    int countFrame_;             // 0x08

    virtual void initialize(char* scriptParam);
    virtual void execute();
    virtual void terminate() {}
    virtual int isEnd();
};

/* vtable 0x020bdfe0, object 0x020ec5a4 */
struct __cmd_map_animation_b : ScriptCommand {
    int m_target;                // 0x04

    virtual void initialize(char* scriptParam);
    virtual void execute() {}
    virtual void terminate() {}
    virtual int isEnd();
};

/* vtable 0x020bdfc8, object 0x020ec59c */
struct __cmd_character_action_tremble : ScriptCommand {
    virtual void initialize(char* scriptParam);
    virtual void execute();
    virtual void terminate() {}
    virtual int isEnd();
};

/* vtable 0x020bdf98, object 0x020ec5a0 */
struct __cmd_character_action_vanish : ScriptCommand {
    virtual void initialize(char* scriptParam);
    virtual void execute();
    virtual void terminate() {}
    virtual int isEnd();
};

/* vtable 0x020bdf80, object 0x020ec60c */
struct __cmd_menu_yes_no : ScriptCommand {
    unsigned int type_;          // 0x04
    unsigned int index_;         // 0x08
    unsigned int position_;      // 0x0C

    virtual void initialize(char* scriptParam);
    virtual void execute() {}
    virtual void terminate() {}
    virtual int isEnd();
    void setFlag(bool flag);
};

/* vtable 0x020bdff8, object 0x020ec630 */
struct __cmd_message_with_sound : ScriptCommand {
    static const int STOP_WAIT_COUNT = 30;

    int musicNo_;                // 0x04
    int playTime_;               // 0x08
    int soundCount_;             // 0x0C
    int preMusicNo_;             // 0x10
    int lastMessage_;            // 0x14
    int stopSound_;              // 0x18
    int playEnd_;                // 0x1C
    int flag_;                   // 0x20
    int wait_;                   // 0x24

    virtual void initialize(char* scriptParam);
    virtual void execute();
    virtual int isEnd();
};

extern __cmd_character_action_tremble data_020ec59c;
extern __cmd_character_action_vanish data_020ec5a0;
extern __cmd_map_animation_b data_020ec5a4;
extern __cmd_wait data_020ec5e8;
extern __cmd_menu_yes_no data_020ec60c;
extern __cmd_count data_020ec61c;
extern __cmd_message_with_sound data_020ec630;
