#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"
#include "main/dss/Camera.hpp"

/* DS Position (dss base of DSSAObject), vtable 0x020c43a8 */
struct Position {
    virtual void setPosition(const dss::Fix32Vector3& position);    // slot 0
    virtual void setScale(dss::Fix32 scale);                         // slot 1
    virtual void setScale(const dss::Fix32Vector3& scale);          // slot 2
    virtual void setRotation(const dss::Fix32Vector3& rotation);    // slot 3
    virtual void setRotationIdx(const dss::Vector3<short>& rotation); // slot 4

    dss::Fix32Vector3 position_;         /* 0x04 */
    dss::Fix32Vector3 scale_;            /* 0x10 */
    dss::Fix32Vector3 rotation_;         /* 0x1C */
    dss::Vector3<short> unk_28;         /* 0x28 */
    dss::Fix32 unk_30;                   /* 0x30 */

    Position();                         // func_020835e8
    ~Position();                        // func_02083644
};

extern "C" {
    dss::Fix32Vector3* func_02083648(Position* self);   /* getPosition */
    dss::Fix32Vector3* func_02083650(Position* self);   /* getScale */
}

struct DSSAParts {
    unsigned char partsIndex_;          /* 0x00 */
    unsigned char flag_;                /* 0x01 */
    short currentFrame_;                /* 0x02 */
    short posX_;                        /* 0x04 */
    short posY_;                        /* 0x06 */
    unsigned short scaleX_;             /* 0x08 */
    unsigned short scaleY_;             /* 0x0A */
    short angle_;                       /* 0x0C */
    char trans_;                        /* 0x0E */
    char priority_;                     /* 0x0F */

    int getPartsIndex();
    int getType();
    int getPosX();
    int getPosY();
    int getScaleX();
    int getScaleY();
    int getAngle();
    int getTrans();
    int getPriority();
    bool getFlipX();
    bool getFlipY();
    bool getAlpha();
    void print();
};

struct BasicInfo {
    short type_[2];                     /* 0x00 */
    short area_[4];                     /* 0x04 */
    short origin_[2];                   /* 0x0C */
};

struct DSSAHeader {
    unsigned char unk_00[0x10];
    int count_;                         /* 0x10 */
    int frame_;                         /* 0x14 */
    unsigned char unk_18[8];
};

struct DSSABoundingBox {
    short area_[4];
};

struct DSSAFrame {
    int unk_00;
    int currentFrame_;                  /* 0x04 */
    int usableCount_;                   /* 0x08 */
    int unk_0c;
};

struct DSSAData {
    void* data_;                        /* 0x00 */
    int count_;                         /* 0x04 */
    int frame_;                         /* 0x08 */
    BasicInfo* basicInfo_;              /* 0x0C */
    DSSABoundingBox* boundingBox_;      /* 0x10 */
    int* offset_;                       /* 0x14 */
    int currentFrame_;                  /* 0x18 */
    int usableCount_;                   /* 0x1C */
    int defineNullInfo[10];             /* 0x20 */
    DSSAParts* parts_;                  /* 0x48 */
    void* texture_;                     /* 0x4C */

    DSSAData();
    ~DSSAData();
    void setup(void* data);
    static int align(int value, int alignment);
    void cleanup();
    void setParts(int frame);
    void setParts(void* frame);
    DSSAParts* getParts(int index);
    int getAreaTop(int index);
    int getAreaLeft(int index);
    int getAreaBottom(int index);
    int getAreaRight(int index);
    int getOriginX(int index);
    int getOriginY(int index);
    int getNullIndex(int index);
};


struct DSSAObject : Position {
    virtual void draw();                                            
    virtual void execute();                                         
    virtual void setupDraw();                                       
    virtual void setupRoot();                                       
    virtual void setupTRS(DSSAParts* parts);                        
    virtual void drawParts(DSSAParts* parts);                       

    void* data_;                        /* 0x34 */
    DSSAData dssaData_;                 /* 0x38 */
    void* palette_;                     /* 0x88 */
    dss::Fix32 alpha_;                   /* 0x8C */
    int flag_;                          /* 0x90 */
    int frame_;                         /* 0x94 */
    int displayPartsCount_;             /* 0x98 */

    DSSAObject();
    ~DSSAObject();
    void setup(void* data);
    void setTexture(void* texture);
    void setPalette(void* palette);
    void cleanup();
    void start(int frame);
    void pause(bool pause);
    int isEnd();
    int isEnable();
    void setAlpha(dss::Fix32 alpha);
    void setCurrentFrame(int frame);
    dss::Fix32Vector3 getNullPosition(int index);
    dss::Vector3<int> getNullPositionInt(int index);
    static dss::Fix32 getDefaultScale2();
    static void setDefaultScale(dss::Fix32 scale);
    static dss::Fix32 getDefaultScale();
    void setReverse(int reverse);
    int isReverse();
    static void setPriority(int priority);

    static int posX_;
    static int posY_;
    static int sizeX_;
    static int sizeY_;
    static int scaleX_;
    static int scaleY_;
    static int angle_;
    static int priority_;
    static long trans_;
    static int calcType_;
    static dss::Fix32Vector3 baseScale_;
    static int priorityShift_;
};

struct UnkDSSAObject : DSSAObject {
    virtual void setupDraw();
    virtual void setupRoot();
    virtual void setupTRS(DSSAParts* parts);
    virtual void drawParts(DSSAParts* parts);

    UnkDSSAObject() {}                  // func_ov000_02142ec8
};


struct DSSAObjectWithCamera : DSSAObject {
    enum CameraType {
        Normal = 0,
        Follow = 1,
        Standard = 2,
        Near = 3,
        Near2 = 4,
        Far = 5,
        Normal2 = 6,
        Max = 7
    };

    virtual void draw();
    virtual void execute();

    CameraType type_;                   /* 0x9C */

    static dss::Camera* camera_;
    static dss::Fix32 distance_;
    static dss::Fix32 relativeScale_;

    DSSAObjectWithCamera();
    void execNormal2();
    void execNormal();
    void execFollow();
    void execNear();
    void execNear2();
    void execFar();
};

struct PaletteAnimationHeader {
    unsigned short unk_00;              /* 0x00 */
    unsigned short mode_;               /* 0x02, 0: 16 colors, else 256 colors */
    unsigned short frameCount_;         /* 0x04 */
};

struct PaletteFrame16 {
    unsigned short wait_;               /* 0x00 */
    unsigned short color_[16];          /* 0x02 */
};

struct PaletteFrame256 {
    unsigned short wait_;               /* 0x00 */
    unsigned short color_[256];         /* 0x02 */
};

struct PaletteAnimation {
    PaletteAnimationHeader header_;     /* 0x00 */
    PaletteFrame16* frame16_;           /* 0x08 */
    PaletteFrame256* frame256_;         /* 0x0C */

    PaletteAnimation();
    ~PaletteAnimation() {}
    void setup(void* data);
    int getWait(int frame);
    unsigned short* getColor(int frame);
    int getColorCount();
    int getFrameCount();
};

extern "C" {
    int  func_02081254(void);
    void func_020843d4(void);
    void func_020847e8(void);
    void func_0206ae30(VecFx32* scale);                         /* NNS_G3dGlbSetBaseScale */
    void func_0206ae08(dss::Fix32Vector3* trans);                /* NNS_G3dGlbSetBaseTrans */
    void func_0206adcc(void);
    void func_0206dcf0(void);
    void func_02086abc(void* texture);
    void func_02086b3c(void* texture);
    void func_02086b68(void* texture);
    void func_02086bd8(void* texture);
    void func_02086dac(void* palette);
}
