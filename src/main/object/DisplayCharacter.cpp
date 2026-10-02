#pragma ipa file
#include "main/object/DisplayCharacter.hpp"
#include "main/fld/FldStage.hpp"
#include "main/object/DSSAObject.hpp"
#include "nitro/fx/fx_trig.h"

dss::Fix32 DisplayCharacter::workScale_(2.0f);
int DisplayCharacter::headEnable_ = 1;
int DisplayCharacter::shadowType_ = 0xe10000;
dss::Fix32Vector3 DisplayCharacter::boxTestRotate_;
dss::Fix32Vector3 DisplayCharacter::boxTestScale_(1.25f, 1.25f, 1.25f);
GXBoxTestParam DisplayCharacter::boxTestParam_;
dss::Fix32 DisplayCharacter::boxTestRate_(FX32_ONE);
dss::Fix32 DisplayCharacter::nearBodyOffset_(0.375f);
dss::Fix32 DisplayCharacter::nearHeadOffset_(0.28f);
dss::Fix32 DisplayCharacter::sleepHeight_(0.194f);
dss::Fix32 DisplayCharacter::sleepBodyOffset_(0.27f);
dss::Fix32 DisplayCharacter::sleepHeadOffset_(0.173f);
dss::Fix32Vector3 DisplayCharacter::sleepOffset_[4] = {
    dss::Fix32Vector3(0.0f, 0.0f, 0.5f),
    dss::Fix32Vector3(0.5f, 0.0f, 0.0f),
    dss::Fix32Vector3(0.0f, 0.0f, -0.5f),
    dss::Fix32Vector3(-0.5f, 0.0f, 0.0f),
};

ARM void DisplayCharacter::setShadowType(int type)
{
    shadowType_ = type;
}

ARM void DisplayCharacter::setEnable(int enable)
{
    headEnable_ = enable;
}

ARM DisplayCharacter::DisplayCharacter()
{
}

ARM DisplayCharacter::~DisplayCharacter()
{
}

ARM void DisplayCharacter::setTexture(void* data)
{
    func_020490ec(this, data);
    head_.texture_ = texture_;
}

ARM void DisplayCharacter::resetTexture()
{
    func_02049164(this);
    head_.texture_ = texture_;
}

ARM void DisplayCharacter::setup(const char* name, int sleep)
{
    func_020491a0(this, name);

    BillboardVertex vertex = *func_02084134(this);
    BillboardTexCoord texCoord = *func_020841a8(this);
    vertex.v[0].vy = vertex.v[3].vy * 7 / 16;
    vertex.v[1].vy = vertex.v[2].vy * 7 / 16;
    texCoord.v[0].vy = texCoord.v[0].vy * 9 / 16;
    texCoord.v[1].vy = texCoord.v[1].vy * 9 / 16;
    func_020840c8(&head_, &vertex);
    func_0208413c(&head_, &texCoord);
    head_.texture_ = texture_;
    head_.setScale(workScale_);
    head_.setPolygonID(1);

    BillboardVertex bodyVertex = *func_02084134(this);
    BillboardTexCoord bodyTexCoord = *func_020841a8(this);
    bodyVertex.v[3].vy = bodyVertex.v[3].vy * 1 / 2;
    bodyVertex.v[2].vy = bodyVertex.v[2].vy * 1 / 2;
    bodyTexCoord.v[2].vy = bodyTexCoord.v[0].vy * 1 / 2;
    bodyTexCoord.v[3].vy = bodyTexCoord.v[1].vy * 1 / 2;
    func_020840c8(this, &bodyVertex);
    func_0208413c(this, &bodyTexCoord);
    RenderObject::setPolygonID(1);

    if (sleep) {
        func_02049868(this, 1);
        func_02049898(this, 1);
    }
    boxTestParam_.x = 0;
    boxTestParam_.y = 0;
    boxTestParam_.z = 0;
    boxTestParam_.width = FX32_ONE;
    boxTestParam_.height = FX32_ONE;
    boxTestParam_.depth = FX32_ONE;
}

ARM void DisplayCharacter::cleanup()
{
    func_0204925c(this);
}

ARM void DisplayCharacter::setRender(Render* render)
{
    RenderObject::setRender(render);
}

ARM void DisplayCharacter::removeRender()
{
    RenderObject::removeRender();
}

ARM void DisplayCharacter::setAlpha(int alpha)
{
    RenderObject::setAlpha(alpha);
    head_.setAlpha(alpha);
    func_0204978c(this, (unsigned char)(alpha * 12 / 31));
}

ARM int DisplayCharacter::box_testx1()
{
    if (flag_ & 0x2000) {
        return 0;
    }
    dss::Fix32Vector3 position = *getPosition();
    position.vx.value -= 0x800;
    unkfunc_020484ec((VecFx32*)&position, (VecFx32*)&boxTestRotate_, (VecFx32*)&boxTestScale_, (VecFx32*)&boxTestParam_, &boxTestRate_);
    int result;
    while (func_02065544(&result)) {
    }
    return result == 0;
}

ARM void DisplayCharacter::draw()
{
    if (!func_020497e8(this) || !func_020497d4(this) || !enable_ || !alpha_) {
        flag_ |= 0x1000;
        return;
    }
    if (box_testx1()) {
        if (!((flag_ & 0x80) ? 1 : 0)) {
            func_02049374(this);
        }
        flag_ |= 0x1000;
        return;
    }
    dss::Fix32Vector3 position = *getPosition();
    exec();
    if (flag_ & 0x80) {
        func_0204941c(this, 1);
        drawSleepCharacter();
    } else {
        BillboardCharacter::draw();
        if (headEnable_) {
            execScale();
            func_020841b0(&head_, &uvOffset);
            head_.draw();
        }
    }
    setPosition(position);
}

ARM void DisplayCharacter::drawSleepCharacter()
{
    if (!enable_) {
        return;
    }
    setScale(data_020f22c4);
    func_020498e8(this, data_020f22c4);
    func_020494e0(this, &func_02049994()->getDirection());
    for (int i = 0; i < 4; i++) {
        sleepOffset_[i].vy = sleepHeight_;
    }
    dss::Fix32Vector3 position = *head_.getPosition() + sleepOffset_[(direction_ / 0x4000) & 3];

    BillboardVertex* vertex = func_02084134(this);
    BillboardTexCoord texCoord = *func_020841a8(this);
    dss::Vector2<dss::Fix32> offset = uvOffset;
    for (int i = 0; i < 4; i++) {
        texCoord.v[i].vx += offset.vx;
        texCoord.v[i].vy += offset.vy;
    }
    drawQuad(position, vertex, &texCoord);

    BillboardVertex* headVertex = func_02084134(&head_);
    BillboardTexCoord headTexCoord = *func_020841a8(&head_);
    dss::Vector2<dss::Fix32> headOffset = uvOffset;
    for (int i = 0; i < 4; i++) {
        headTexCoord.v[i].vx += headOffset.vx;
        headTexCoord.v[i].vy += headOffset.vy;
    }
    drawQuad(position, headVertex, &headTexCoord);
}

ARM void DisplayCharacter::drawQuad(dss::Fix32Vector3& position, BillboardVertex* vertex, BillboardTexCoord* texCoord)
{
    G3_PushMtx();
    G3_Translate(position.vx.value, position.vy.value, position.vz.value);
    func_020843d4();
    G3_Scale(scale_.vx.value, scale_.vx.value, scale_.vx.value);
    if (texture_) {
        func_02086abc(texture_);
        func_02086b3c(texture_);
    } else {
        func_02086b28();
    }
    func_02083680(this);
    func_020841d4(this);
    G3_PushMtx();
    unsigned short angle = 0xa000 - dispDirection_;
    func_02065c9c(FX_SinIdx(angle), FX_CosIdx(angle));
    if (reverse_) {
        G3_Begin(1);
        G3_Color(0x7fff);
        for (int i = 0; i < 4; i++) {
            G3_TexCoord(texCoord->v[i].vx.value, texCoord->v[i].vy.value);
            G3_Vtx(vertex->v[i].vx.value, vertex->v[i].vy.value, 0);
        }
        G3_End();
    } else {
        G3_Begin(1);
        G3_Color(0x7fff);
        for (int i = 0; i < 4; i++) {
            G3_TexCoord(texCoord->v[i].vx.value, texCoord->v[i].vy.value);
            G3_Vtx(vertex->v[i].vx.value, vertex->v[i].vy.value, 0);
        }
        G3_End();
    }
    G3_PopMtx(1);
    G3_PopMtx(1);
}

ARM void DisplayCharacter::execScale()
{
    dss::Fix32Vector3& cameraPosition = func_02049994()->getPosition();
    dss::Fix32Vector3 position = *getPosition();
    dss::Fix32Vector3 distance = cameraPosition - position;
    dss::Fix32 length = distance.length();
    dss::Fix32 offset;
    if (!(flag_ & 0x80)) {
        offset = nearBodyOffset_;
    } else {
        offset = sleepBodyOffset_;
    }
    dss::Fix32 rate = length - offset.value;
    workScale_ = getScale()->vx * rate / length;
    setScale(workScale_);

    dss::Fix32 headOffset;
    if (!(flag_ & 0x80)) {
        headOffset = nearHeadOffset_;
    } else {
        headOffset = sleepHeadOffset_;
    }
    dss::Fix32 headRate = length - headOffset.value;
    workScale_ = getScale()->vx * headRate / length;
    head_.setScale(workScale_);
}

ARM void DisplayCharacter::exec()
{
    dss::Fix32Vector3& cameraPosition = func_02049994()->getPosition();
    dss::Fix32Vector3 position = *getPosition();
    dss::Fix32Vector3 distance = cameraPosition - position;
    dss::Fix32 length = distance.length();
    distance.normalize();
    dss::Fix32 offset;
    if (!(flag_ & 0x80)) {
        offset = nearBodyOffset_;
    } else {
        offset = sleepBodyOffset_;
    }
    dss::Fix32Vector3 move = distance * offset;
    position = *getPosition() + move;
    setPosition(position);
    dss::Fix32 rate = length - offset.value;
    workScale_ = getScale()->vx * rate / length;
    setScale(workScale_);

    dss::Fix32 headOffset;
    if (!(flag_ & 0x80)) {
        headOffset = nearHeadOffset_;
    } else {
        headOffset = sleepHeadOffset_;
    }
    dss::Fix32Vector3 headMove = distance * headOffset;
    position = *getPosition() + headMove;
    head_.setPosition(position);
    dss::Fix32 headRate = length - headOffset.value;
    workScale_ = getScale()->vx * headRate / length;
    head_.setScale(workScale_);
}

ARM void DisplayCharacter::setColor(int color)
{
    func_020842b8(this, color);
    func_020842b8(&head_, color);
}

ARM void DisplayCharacter::setBoxTestOff(bool off)
{
    if (off) {
        flag_ |= 0x2000;
    } else {
        flag_ &= ~0x2000;
    }
}
