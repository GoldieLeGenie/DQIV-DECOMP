#pragma once
#include <globaldefs.h>
#include "main/dss/Billboard.hpp"
#include "main/dss/Camera.hpp"
#include "main/data/DataObject.hpp"
#include "nitro/g3.hpp"

struct PolygonObject : RenderObject3D {
    virtual void draw();                        // func_0208383c

    dss::Vector3<short> vertex_[4];             // 0x48
    dss::Vector2<dss::Fix32> texCoord_[4];      // 0x60
    unsigned char unk_80;                       // 0x80
    unsigned char unk_81;                       // 0x81
    unsigned char unk_82;                       // 0x82
};

struct CharacterShadow : PolygonObject {
    virtual void draw();                        // func_02049f74
    ~CharacterShadow();
};

struct BillboardCharacter : Billboard {
    virtual void draw();
    virtual void setPosition(const dss::Fix32Vector3& position);

    int unk_b4;                                 // 0xB4
    unsigned short direction_;                  // 0xB8
    unsigned short preDirection_;               // 0xBA
    int textureNum_;                            // 0xBC
    int dispDirection_;                         // 0xC0
    int reverse_;                               // 0xC4
    unsigned short flag_;                       // 0xC8
    DataObject data_;                           // 0xCC
    void* textures_[8];                         // 0xDC
    dss::Fix32Vector3 shadowPos_;               // 0xFC
    short textureIndex_;                        // 0x108
    dss::Vector2<dss::Fix32> uvOffset;          // 0x10C
    int anmIndex_;                              // 0x114
    int anmTime_;                               // 0x118
    CharacterShadow shadow_;                    // 0x11C

    BillboardCharacter();
    ~BillboardCharacter() {}
};

extern "C" {
    void func_020490ec(BillboardCharacter* self, void* data);                   /* setTexture */
    void func_02049164(BillboardCharacter* self);                               /* resetTexture */
    void func_020491a0(BillboardCharacter* self, const char* name);             /* setup */
    void func_0204925c(BillboardCharacter* self);                               /* cleanup */
    void func_02049190(BillboardCharacter* self);
    void func_0204948c(BillboardCharacter* self, unsigned short dir);           /* setRotate */
    void func_020497a4(BillboardCharacter* self, int flag);                     /* setDisplayEnable */
    void func_020497bc(BillboardCharacter* self, int flag);
    void func_0204977c(BillboardCharacter* self, int enable);                   /* setEnable */
    void func_02049814(BillboardCharacter* self, int flag);                     /* setAnimFlag */
    void func_02049880(BillboardCharacter* self, int flag);                     /* setShadowFlag */
    void func_020498d0(BillboardCharacter* self, int flag);                     /* setWriggleFlag */
    void func_020499f0(BillboardCharacter* self, dss::Fix32Vector3* rate);      /* DS-only: palette rate (0xFC) */
    void func_02049a00(BillboardCharacter* self, int flag);                     /* DS-only: palette rate enable (flag 0x400) */
    void func_02049a18(BillboardCharacter* self);
    void func_02049374(BillboardCharacter* self);                               /* execute animation */
    int  func_020499d4(void);                                                   /* BillboardCharacter::isAllAnimation (static) */
    void func_0204941c(BillboardCharacter* self, int index);                    /* startAnimation */
    void func_020494e0(BillboardCharacter* self, dss::Fix32Vector3* direction); /* setCameraDirection */
    void func_02049764(BillboardCharacter* self, dss::Fix32Vector3* pos);       /* setShadowPos */
    void func_0204978c(BillboardCharacter* self, int alpha);                    /* setShadowAlpha */
    void func_020497fc(BillboardCharacter* self, int flag);                     /* setShadowStay */
    int  func_020497d4(BillboardCharacter* self);
    int  func_020497e8(BillboardCharacter* self);                               /* isDisplayEnable */
    void func_02049868(BillboardCharacter* self, int flag);                     /* setNearFlag */
    void func_02049898(BillboardCharacter* self, int flag);                     /* setSleepFlag */
    void func_020498e8(BillboardCharacter* self, dss::Fix32 scale);             /* setScale by camera distance */
    dss::Camera* func_02049994(void);                                           /* getCamera */
}

extern dss::Fix32 data_020f22c4;

/* vtable 0x020c1d70 */
struct DisplayCharacter : BillboardCharacter {
    virtual void draw();
    virtual void setAlpha(int alpha);
    virtual void setRender(Render* render);
    virtual void removeRender();

    Billboard head_;                            // 0x1A0

    static int shadowType_;
    static int headEnable_;
    static dss::Fix32 workScale_;
    static dss::Fix32Vector3 boxTestRotate_;
    static dss::Fix32Vector3 boxTestScale_;
    static GXBoxTestParam boxTestParam_;
    static dss::Fix32 boxTestRate_;
    static dss::Fix32 nearBodyOffset_;
    static dss::Fix32 nearHeadOffset_;
    static dss::Fix32 sleepHeight_;
    static dss::Fix32 sleepBodyOffset_;
    static dss::Fix32 sleepHeadOffset_;
    static dss::Fix32Vector3 sleepOffset_[4];

    static void setShadowType(int type);
    static void setEnable(int enable);
    DisplayCharacter();
    ~DisplayCharacter();
    void setTexture(void* data);
    void resetTexture();
    void setup(const char* name, int sleep);
    void cleanup();
    int box_testx1();
    void drawSleepCharacter();
    void drawQuad(dss::Fix32Vector3& position, BillboardVertex* vertex, BillboardTexCoord* texCoord);
    void execScale();
    void exec();
    void setColor(int color);
    void setBoxTestOff(bool off);
    void setSleep(int sleep);
};
