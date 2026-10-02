#pragma ipa file
#include "main/fld/FldStage.hpp"
#include "main/cmn/MoveBase.hpp"
#include "main/data/FileLoader.hpp"
#include "main/text/TextAPI.hpp"
#include "main/script/ScriptSystem.hpp"
#include "main/script/sys/ScriptParam.hpp"
#include "main/menu/MenuManager.hpp"
#include "main/object/DSSAObject.hpp"
#include "nitro/g3.hpp"
#include "nitro/fx/fx_trig.h"
#include "nnsys/g3d.hpp"

static int drawTick;

ARM FldStage::FldStage()
{
    collisionFlag_ = 0;
    collisionDrawFlag_ = 0;
    unk_8a8 = 1;
    unk_8ac = 1;
    unk_8b0 = 1;
    extraObjectNum_ = 0;
    scale_.set(1, 1, 1);
}

ARM FldStage::~FldStage()
{
}

ARM void FldStage::setRender(Render* render)
{
    m_render = render;
}

ARM void FldStage::terminate()
{
}

ARM void FldStage::setup()
{
    func_0208532c(this, m_render);
    func_02083354(&m_anim, m_model.getAddr());
    void* model = m_model.getAddr();
    void* texture = m_texture.getAddr();
    void* coll = m_coll.getAddr();
    func_02042428(&m_fld, model, texture, coll, *func_0207f88c(data_0211a60c));
    dss::Fix32Vector3 scale(1, 1, 1);
    func_020857a8(0, scale);
    int color = m_fld.m_scene->backColor;
    func_02084c78((color & 0xff) >> 3, ((color >> 8) & 0xff) >> 3, ((color >> 16) & 0xff) >> 3);
    extraObjectNum_ = 0;
}

ARM void FldStage::cleanup()
{
    func_02084c78(0, 0, 0);
    func_02085348(this);
    func_02045e10(&m_fld);
    m_model.cleanup();
    m_texture.cleanup();
    m_coll.cleanup();
    func_02083360(&m_anim);
    m_data.cleanup();
}

ARM void FldStage::setPath(const char* path)
{
    func_02088258(path_, "%s", path);
}

ARM bool FldStage::isExist(char* name)
{
    char buf[0x80];
    func_02088258(buf, "%s/%s.lz", path_, name);
    return func_0207ebd4(&data_02116ce8, buf) != 0;
}

ARM void FldStage::load(char* name)
{
    char buf[0x80];
    func_02088308(buf, sizeof(buf), "%s/%s.lz", path_, name);
    m_data.setup(buf, 1, 1);
    m_model.setup(func_0207f8dc(m_data.getAddr(), 0));
    m_texture.setup(func_0207f8dc(m_data.getAddr(), 1));
    if (func_0207f8cc(m_data.getAddr(), 2)) {
        m_coll.setup(func_0207f8dc(m_data.getAddr(), 2));
    }
    if (m_coll.getAddr()) {
        collisionFlag_ = 1;
    }
}

static void resetGlbMatrix();

ARM void FldStage::draw()
{
    drawTick = func_0207e7e8();
    resetGlbMatrix();
    func_02045004(&m_fld);
    resetGlbMatrix();
    if (collisionDrawFlag_ == 0) {
        func_0206ae30((VecFx32*)&scale_);
        func_0204545c(&m_fld);
    }
    resetGlbMatrix();
    drawTick = func_0207e7e8() - drawTick;
}

ARM void FldStage::execAnime()
{
    func_0208336c(&m_anim);
}

static void resetGlbMatrix()
{
    VecFx32 scale = { FX32_ONE, FX32_ONE, FX32_ONE };
    VecFx32 trans = { 0, 0, 0 };
    MtxFx33 rot;
    func_02061b88(&rot);
    func_0206ae30(&scale);
    func_02067940(&rot, &data_0210cfe4);
    data_0210cf28.flag &= ~0xa4;
    func_0206ae08((dss::Fix32Vector3*)&trans);
    func_0206adcc();
}

ARM dss::Fix32 FldStage::getCameraLimitR()
{
    return dss::Fix32(m_fld.m_scene->cameraLimitR);
}

ARM dss::Fix32 FldStage::getCameraLimitL()
{
    return dss::Fix32(m_fld.m_scene->cameraLimitL);
}

ARM void FldStage::eraseObject(int uid, int flag)
{
    func_020463e4(&m_fld, uid);
    func_02046194(&m_fld, uid, flag);
}

ARM void FldStage::setMapUidOnOff(int uid, int flag)
{
    func_02046194(&m_fld, uid, flag);
}

ARM int FldStage::eventAnim(int anim, int frame)
{
    if (frame == 0) {
        func_020465b4(&m_fld, anim);
        return 1;
    }
    if (func_02046e40(&m_fld, frame) != func_02046eac(&m_fld, frame)) {
        return 0;
    }
    func_020465b4(&m_fld, anim);
    return 1;
}

ARM void FldStage::repop(int uid)
{
    int* list = GetMapUidObj(uid);
    for (int i = 0; i < pool_counter; i++) {
        func_02045fd0(&m_fld, list[i], 0);
        func_020468b8(&m_fld, list[i], 0);
        func_02040a8c(m_fld.m_coll, list[i]);
    }
}

ARM void FldStage::commonAnim(int obj, int frame)
{
    func_020468b8(&m_fld, obj, frame);
}

ARM void FldStage::animLocation(int id, int frame, int uidFlag)
{
    if (uidFlag == 1) {
        int* list = GetMapUidObj(id);
        for (int i = 0; i < pool_counter; i++) {
            setAnimLocation(list[i], frame);
        }
        return;
    }
    setAnimLocation(id, frame);
}

ARM void FldStage::setAnimLocation(int obj, int frame)
{
    if (func_02046c20(&m_fld, obj) == 1) {
        func_020468b8(&m_fld, obj, 0);
        func_02040a8c(m_fld.m_coll, obj);
    }
    if (frame == 0) {
        func_020409f0(m_fld.m_coll, obj);
        func_02045fd0(&m_fld, obj, 1);
        return;
    }
    if (func_02046ba4(&m_fld, obj) < frame) {
        return;
    }
    if (frame == func_02046f34(&m_fld, obj)) {
        return;
    }
    func_020468b8(&m_fld, obj, frame);
}

ARM void FldStage::setAlpha(int obj, int alpha)
{
    func_02045f68(&m_fld, obj, alpha, 0);
}

ARM void FldStage::setFldColl(FldCollision* coll)
{
    coll->m_collisionFlag = &collisionFlag_;
    coll->m_fld = &m_fld;
    coll->m_coll = &m_coll;
}

ARM bool FldStage::collGetPolygonPos(int poly, dss::Fix32Vector3* pos)
{
    COLL_POLY p;
    *pos *= 0;
    if (!func_0203f464(m_fld.m_coll, poly, &p)) {
        return false;
    }
    if (p.type & 1) {
        for (int i = 0; i < 4; i++) {
            pos->vx.value += p.vertex[i].x;
            pos->vy.value += p.vertex[i].y;
            pos->vz.value += p.vertex[i].z;
        }
        *pos /= 4;
    } else {
        for (int i = 0; i < 3; i++) {
            pos->vx.value += p.vertex[i].x;
            pos->vy.value += p.vertex[i].y;
            pos->vz.value += p.vertex[i].z;
        }
        *pos /= 3;
    }
    return true;
}

ARM int FldStage::collCrossCheckPoly(dss::Fix32Vector3& start, dss::Fix32Vector3& end, dss::Fix32* dist, int all)
{
    VecFx32 s;
    VecFx32 e;
    fx32 d;
    s.x = start.vx.value;
    s.y = start.vy.value;
    s.z = start.vz.value;
    e.x = end.vx.value;
    e.y = end.vy.value;
    e.z = end.vz.value;

    int poly = 0;
    int ret = -1;
    fx32 min = 0x7ffffff;
    while ((poly = collCrossCheck(s, e, poly, &d)) != -1) {
        if (func_0204098c(m_fld.m_coll, poly) != -1 && !all) {
            poly++;
            continue;
        }
        d = unkfunc_02031e84(d);
        if (d < min) {
            ret = poly;
            min = d;
        }
        poly++;
    }
    dist->value = min;
    return ret;
}

ARM int FldStage::collCrossCheckOtherNo(dss::Fix32Vector3& start, dss::Fix32Vector3& end, int no, dss::Fix32* dist)
{
    VecFx32 s = getVecFx32(start);
    VecFx32 e = getVecFx32(end);
    int poly = 0;
    int ret = -1;
    fx32 min = 0x7ffffff;
    fx32 d = min;
    while ((poly = collCrossCheck(s, e, poly, &d)) != -1) {
        if (d < min && poly != no) {
            ret = poly;
            min = d;
        }
        poly++;
    }
    if (dist) {
        dist->value = min;
    }
    return ret;
}

ARM void FldStage::setRotObjectUid(int uid, dss::Fix32Vector3& rot)
{
    VecFx32 v = getVecFx32(rot);
    func_0204627c(&m_fld, uid, &v);
}

ARM int FldStage::collGetPoly(int poly, COLL_POLY* out)
{
    return func_0203f464(m_fld.m_coll, poly, out);
}

ARM void FldStage::setPosByObjectID(int id, dss::Fix32Vector3& pos)
{
    VecFx32 v = getVecFx32(pos);
    func_02046034(&m_fld, id, &v);
}

ARM dss::Fix32Vector3 FldStage::getFx32Vector3(const VecFx32& vec)
{
    dss::Fix32Vector3 ret;
    ret.vx.value = vec.x;
    ret.vy.value = vec.y;
    ret.vz.value = vec.z;
    return ret;
}

ARM VecFx32 FldStage::getVecFx32(const dss::Fix32Vector3& vec)
{
    VecFx32 ret;
    ret.x = vec.vx.value;
    ret.y = vec.vy.value;
    ret.z = vec.vz.value;
    return ret;
}

ARM bool FldStage::getObjectIn(int uid, dss::Fix32Vector3& pos)
{
    int i;
    bool in = false;
    COLL_POLY poly;
    VecFx32 p = getVecFx32(pos);
    int minX = 0x7fffffff;
    int minZ = 0x7fffffff;
    int maxX = 0x80000000;
    int maxZ = 0x80000000;

    i = func_02040bd4(m_fld.m_coll, uid, 0);
    if (i != -1) do {
        in = true;
        func_0203f464(m_fld.m_coll, i, &poly);
        int lx = poly.bbox[0].x <= poly.bbox[1].x ? poly.bbox[0].x : poly.bbox[1].x;
        int hx = poly.bbox[0].x >= poly.bbox[1].x ? poly.bbox[0].x : poly.bbox[1].x;
        int lz = poly.bbox[0].z <= poly.bbox[1].z ? poly.bbox[0].z : poly.bbox[1].z;
        int hz = poly.bbox[0].z >= poly.bbox[1].z ? poly.bbox[0].z : poly.bbox[1].z;
        if (lx < minX) minX = lx;
        if (hx > maxX) maxX = hx;
        if (lz < minZ) minZ = lz;
        if (hz > maxZ) maxZ = hz;
        i = func_02040bd4(m_fld.m_coll, uid, i + 1);
    } while (i != -1);
    if (in == true) {
        if (p.x < minX || p.x > maxX || p.z < minZ || p.z > maxZ) {
            in = false;
        }
    }
    return in;
}

ARM int FldStage::getObjWallNo(int obj, int wall)
{
    if (obj != func_02040928(m_fld.m_coll, wall)) {
        return -1;
    }
    return func_02053abc(m_fld.m_coll, obj, wall);
}

ARM int FldStage::getObjWallPolyNo(int obj, int wall)
{
    int poly = func_02040bd4(m_fld.m_coll, obj, 0);
    if (poly == -1) {
        return -1;
    }
    poly += wall;
    if (obj != func_02040928(m_fld.m_coll, poly)) {
        poly = -1;
    }
    return poly;
}

ARM short FldStage::getObjectRotIdxY(int obj)
{
    return func_02046e28(&m_fld, obj)->y;
}

ARM VecFx32 FldStage::getUidPos(int uid)
{
    VecFx32 pos;
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;
    fld::FLDObjTable* table = m_fld.m_objTable;
    int* list = GetMapUidObj(uid);
    int count = pool_counter;
    for (int i = 0; i < count; i++) {
        fld::FLDObjEntry* entry = &((fld::FLDObjEntry*)table)[list[i]];
        pos.x += entry->pos.x;
        pos.y += entry->pos.y;
        pos.z += entry->pos.z;
    }
    pos.x /= count;
    pos.y /= count;
    pos.z /= count;
    return pos;
}

ARM int* FldStage::GetMapUidObj(int uid)
{
    pool_counter = 0;
    fld::FLDObjTable* table = m_fld.m_objTable;
    for (int i = 0; i < 128; i++) {
        obj_index[i] = -1;
    }
    if (uid <= 0) {
        return obj_index;
    }
    for (int i = 0; i < table->count; i++) {
        short index = table->index[i];
        if (index >= 0 && uid == ((fld::FLDObjEntry*)table)[index].uid) {
            obj_index[pool_counter] = i;
            pool_counter++;
        }
    }
    return obj_index;
}

ARM bool FldStage::IsCommonAnimationEnd(int uid)
{
    int* list = GetMapUidObj(uid);
    for (int i = 0; i < pool_counter; i++) {
        if (func_02046c20(&m_fld, list[i]) == 0) {
            return false;
        }
    }
    return true;
}

ARM int unkfunc_020484ec(VecFx32* pos, VecFx32* rot, VecFx32* scale, VecFx32* box, dss::Fix32* rate)
{
    int result;
    G3_PushMtx();
    G3_Translate(pos->x, pos->y, pos->z);
    func_02065c60(FX_SinIdx((unsigned short)rot->y), FX_CosIdx((unsigned short)rot->y));
    func_02065c24(FX_SinIdx((unsigned short)rot->x), FX_CosIdx((unsigned short)rot->x));
    func_02065c9c(FX_SinIdx((unsigned short)rot->z), FX_CosIdx((unsigned short)rot->z));
    G3_Scale(scale->x, scale->y, scale->z);
    G3_Scale(rate->value, rate->value, rate->value);
    REG_GFX_FIFO_BOX_TEST = box->x;
    REG_GFX_FIFO_BOX_TEST = box->y;
    REG_GFX_FIFO_BOX_TEST = box->z;
    while (func_02065544(&result)) {
    }
    G3_PopMtx(1);
    return result;
}

ARM int FldStage::addBoxCollistion(dss::Fix32Vector3& pos, dss::Fix32Vector3& size, int* id, int flag)
{
    if (extraObjectNum_ == 0) {
        extraObjectNum_ = m_fld.m_objTable->unk_08 + 100;
    }
    short objId;
    if (*id == -1) {
        objId = extraObjectNum_;
    } else {
        objId = *id;
    }

    dss::Fix32Vector3 p[4];
    dss::Fix32Vector3 normal;
    dss::Fix32Vector3 work;
    COLL_POLY poly;
    int result;

    poly.obj_id = objId;
    poly.type = poly.type | 0x101;
    poly.id = 0;
    poly.flag = 0;

    // face 0
    p[0].vy = p[3].vy = size.vy * -1;
    p[2].vy = p[1].vy = size.vy;
    for (int i = 0; i < 4; i++) {
        p[i].vx = size.vx * -1;
        p[i].vz = size.vz;
    }
    p[3].vz *= -1;
    p[2].vz *= -1;
    normal.set(-FX32_ONE, 0, 0);
    poly.normal = getVecFx32(normal);
    for (int i = 0; i < 4; i++) {
        work = pos + p[i];
        poly.vertex[i] = getVecFx32(work);
    }
    result = func_02041afc(*id, 0, m_fld.m_coll, &poly, m_fld.unk_238, flag);
    if (result != 3) {
        return result;
    }

    // face 1
    for (int i = 0; i < 4; i++) {
        p[i].vx = size.vx;
        p[i].vz = size.vz * -1;
    }
    p[0].vx *= -1;
    p[1].vx *= -1;
    normal.set(0, 0, -FX32_ONE);
    poly.normal = getVecFx32(normal);
    for (int i = 0; i < 4; i++) {
        work = pos + p[i];
        poly.vertex[i] = getVecFx32(work);
    }
    result = func_02041afc(*id, 1, m_fld.m_coll, &poly, m_fld.unk_238, flag);
    if (result != 3) {
        return result;
    }

    // face 2
    for (int i = 0; i < 4; i++) {
        p[i].vx = size.vx;
        p[i].vz = size.vz;
    }
    p[0].vz *= -1;
    p[1].vz *= -1;
    normal.set(FX32_ONE, 0, 0);
    poly.normal = getVecFx32(normal);
    for (int i = 0; i < 4; i++) {
        work = pos + p[i];
        poly.vertex[i] = getVecFx32(work);
    }
    result = func_02041afc(*id, 2, m_fld.m_coll, &poly, m_fld.unk_238, flag);
    if (result != 3) {
        return result;
    }

    // face 3
    for (int i = 0; i < 4; i++) {
        p[i].vx = size.vx;
        p[i].vz = size.vz;
    }
    p[3].vx *= -1;
    p[2].vx *= -1;
    normal.set(0, 0, FX32_ONE);
    poly.normal = getVecFx32(normal);
    for (int i = 0; i < 4; i++) {
        work = pos + p[i];
        poly.vertex[i] = getVecFx32(work);
    }
    result = func_02041afc(*id, 3, m_fld.m_coll, &poly, m_fld.unk_238, flag);
    if (result != 3) {
        return result;
    }

    extraObjectNum_++;
    *id = objId;
    return 3;
}

ARM int FldStage::getPolyNoBySurfaceId(int surface, int index)
{
    return func_02040b28(m_fld.m_coll, surface, index);
}

ARM void FldStage::addMovePosByObjNo(int obj, dss::Fix32Vector3& move)
{
    VecFx32 v = getVecFx32(move);
    func_02046558(&m_fld, obj, &v);
}

ARM int FldStage::getCrossPolygonOtherSurface(dss::Fix32Vector3& start, dss::Fix32Vector3& end, short* surface, int count, int* polyOut, dss::Fix32* dist, int all)
{
    int found = 0;
    fx32 d;
    VecFx32 s = getVecFx32(start);
    VecFx32 e = getVecFx32(end);
    int poly = 0;
    int ret = -1;
    fx32 min = 0x7ffffff;
    int floorNum = m_fld.m_coll->floor_poly_size;

    while ((poly = collCrossCheck(s, e, poly, &d)) != -1) {
        if (!all && poly < floorNum) {
            poly++;
            continue;
        }
        int hit = 0;
        for (int i = 0; i < count; i++) {
            short attr = func_0204098c(m_fld.m_coll, poly);
            if ((attr & 0xf000) == surface[i]) {
                hit = 1;
            }
        }
        if (hit == 1) {
            poly++;
            continue;
        }
        d = unkfunc_02031e84(d);
        if (d < min) {
            ret = poly;
            min = d;
        }
        found++;
        poly++;
    }
    *polyOut = ret;
    if (dist) {
        dist->value = min;
    }
    return found;
}
