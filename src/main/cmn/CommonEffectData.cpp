#pragma ipa file
#include "main/cmn/CommonEffectData.hpp"
#include "main/cmn/CommonEffectResource.hpp"
#include "main/cmn/CommonEffect.hpp"
#include "main/script/ScriptSystem.hpp"
#include "main/script/sys/ScriptParam.hpp"

ARM cmn::CommonEffectResource::CommonEffectResource()
{
}

ARM cmn::CommonEffectResource::~CommonEffectResource()
{
}

ARM void cmn::CommonEffectResource::initialize()
{
    maxStorage_ = 5;
    ResourceStorage::initialize();
}

ARM void cmn::CommonEffectResource::terminate()
{
    ResourceStorage::terminate();
}

ARM cmn::CommonEffectData* cmn::CommonEffectResource::getResource(int id)
{
    return &storage_[ResourceStorage::getResource(id)];
}

ARM int cmn::CommonEffectResource::loadResource(int id)
{
    int area = getEmptyArea();
    storage_[area].setup(id);
    return area;
}

ARM void cmn::CommonEffectResource::releaseResource(int id)
{
    storage_[getResourceArea(id)].cleanup();
}

ARM int cmn::CommonEffectResource::getResourceStock()
{
    int stock = 0;
    for (unsigned int i = 0; i < 5; i++) {
        if (!storage_[i].isEnable()) {
            stock++;
        }
    }
    return stock;
}

ARM cmn::CommonEffectSimple::CommonEffectSimple()
{
    effectData_ = 0;
}

ARM cmn::CommonEffectSimple::~CommonEffectSimple()
{
}

ARM int cmn::CommonEffectSimple::isEnable()
{
    return effectData_ != 0;
}

ARM cmn::CommonEffectFlat::CommonEffectFlat() : paletteTexture_(0)
{
}

ARM cmn::CommonEffectFlat::~CommonEffectFlat()
{
}

ARM void cmn::CommonEffectFlat::setup(CommonEffectData* data, int flag)
{
    effectData_ = data;
    texture_ = data->getTextureData();
    dssaEffect_.setup(effectData_->getAnimationData());
    dssaEffect_.setTexture(texture_);
    dssaEffect_.type_ = DSSAObjectWithCamera::Near;
    if (effectData_->isPamEnable()) {
        paletteAnim_.setup(effectData_->getPaletteAnimData());
        paletteTexture_ = texture_;
        paletteColorCount_ = paletteAnim_.getColorCount();
    }
    rate_.value = 0x1000;
}

ARM void cmn::CommonEffectFlat::cleanup(int flag)
{
    if (!isEnable()) {
        return;
    }
    func_0205b648(&paletteAnim_);
    dssaEffect_.cleanup();
    effectData_ = 0;
}

ARM void cmn::CommonEffectFlat::draw()
{
    dssaEffect_.draw();
    dssaEffect_.execute();
    if (effectData_->isPamEnable()) {
        func_0205b44c(&paletteAnim_);
    }
}

ARM void cmn::CommonEffectFlat::setPosition(dss::Fx32Vector3& position)
{
    dssaEffect_.setPosition(position);
}

ARM void cmn::CommonEffectFlat::setScale(dss::Fx32 scale)
{
    dss::Fx32Vector3 one(1, 1, 1);
    dssaEffect_.setScale(one * scale);
    func_0208718c(&rate_, scale);
}

ARM void cmn::CommonEffectFlat::setDisplayType(int type)
{
    dssaEffect_.type_ = (DSSAObjectWithCamera::CameraType)type;
}

ARM void cmn::CommonEffectFlat::start()
{
    dssaEffect_.start(0);
    if (effectData_->isPamEnable()) {
        func_0205b3d0(&paletteAnim_);
    }
}

ARM int cmn::CommonEffectFlat::isEnd()
{
    return dssaEffect_.isEnd();
}

ARM cmn::CommonEffectCubic::CommonEffectCubic()
{
}

ARM cmn::CommonEffectCubic::~CommonEffectCubic()
{
}

ARM void cmn::CommonEffectCubic::setup(CommonEffectData* data, int flag)
{
    effectData_ = data;
    int count = 0;
    func_02058768(&model_, data->getModelData(), flag);
    for (int i = 0; i < 4; i++) {
        if (effectData_->getAnimData(count)) {
            func_0205887c(&model_, effectData_->getAnimData(count), count);
            count++;
        }
    }
    rate_.value = 0x1000;
}

ARM void cmn::CommonEffectCubic::cleanup(int flag)
{
    if (!isEnable()) {
        return;
    }
    model_.cleanup(flag);
    effectData_ = 0;
}

ARM void cmn::CommonEffectCubic::draw()
{
    model_.draw();
}

ARM void cmn::CommonEffectCubic::setPosition(dss::Fx32Vector3& position)
{
    func_02058bcc(&model_, position);
}

ARM void cmn::CommonEffectCubic::setScale(dss::Fx32 scale)
{
    func_02058af4(&model_, scale);
    func_0208718c(&rate_, scale);
}

ARM void cmn::CommonEffectCubic::start()
{
    func_02058a2c(&model_, 0);
}

ARM int cmn::CommonEffectCubic::isEnd()
{
    return model_.unk_c28 == 0;
}

ARM void cmn::CommonEffectCubic::setDisplayType(int type)
{
    model_.type_ = (ModelObjectWithCamera::CameraType)type;
}

ARM int cmn::CommonEffectCubic::getType()
{
    return 1;
}

ARM int cmn::CommonEffectFlat::getType()
{
    return 0;
}

ARM cmn::CommonEffectData::CommonEffectData()
{
}

ARM cmn::CommonEffectData::~CommonEffectData()
{
}

ARM void cmn::CommonEffectData::setup(int index)
{
    char path[0x80];
    if (index < 10000) {
        func_02088308(path, 0x80, "data/effect/effect%03d.lz", index);
    } else {
        func_02088308(path, 0x80, "data/effect/effect%03db.lz", index - 10000);
    }
    effectData_.setup(path, 1, 1);
    m_effect_type = *(int*)func_0207f8dc(effectData_.getAddr(), 0);
    if (m_effect_type == 0) {
        setupTexture();
    }
}

ARM void cmn::CommonEffectData::setupTexture()
{
    func_02086798(getTextureData(), 0);
}

ARM void cmn::CommonEffectData::cleanup()
{
    if (isEnable()) {
        if (m_effect_type == 0) {
            cleanupTexture();
        }
        effectData_.cleanup();
    }
}

ARM void cmn::CommonEffectData::cleanupTexture()
{
    func_02086868(getTextureData());
}

ARM void* cmn::CommonEffectData::getTextureData()
{
    return func_0207f8dc(effectData_.getAddr(), 1);
}

ARM void* cmn::CommonEffectData::getAnimationData()
{
    return func_0207f8dc(effectData_.getAddr(), 2);
}

ARM void* cmn::CommonEffectData::getPaletteAnimData()
{
    if (!isPamEnable()) {
        return 0;
    }
    return func_0207f8dc(effectData_.getAddr(), 3);
}

ARM int cmn::CommonEffectData::isPamEnable()
{
    return func_0207f8c4(effectData_.getAddr()) > 3;
}

ARM void* cmn::CommonEffectData::getModelData()
{
    return func_0207f8dc(effectData_.getAddr(), 1);
}

ARM void* cmn::CommonEffectData::getAnimData(int index)
{
    if (func_0207f8c4(effectData_.getAddr()) <= index + 2) {
        return 0;
    }
    return func_0207f8dc(effectData_.getAddr(), index + 2);
}

ARM int cmn::CommonEffectData::isEnable()
{
    return effectData_.getAddr() != 0;
}

ARM int cmn::CommonEffectData::getEffectType()
{
    return m_effect_type;
}

ARM int cmn::CommonEffectData::isSecondEffect(int index)
{
    char path[0x100];
    func_02088308(path, 0x80, "data/effect/effect%03db.lz", index);
    return func_0207ebd4(&data_02116ce8, path);
}
