#pragma ipa file
#include "ov000/town/TownImageMap.hpp"
#include "ov000/town/TownCamera.hpp"
#include "ov000/town/TownPlayerManager.hpp"
#include "main/dss/Camera.hpp"
#include "main/global/Global.hpp"
#include "main/status/StageStatus.hpp"
#include "main/status/StoryStatus.hpp"
#include "main/status/GameFlag.hpp"
#include "main/status/ExcelParam.hpp"
#include "main/data/FileLoader.hpp"

static dss::Camera camera;
static char mapdata[0x80];

ARM TownImageMap::TownImageMap()
    : isEnable_(0), frame_(0), phase_(0)
{
}

ARM TownImageMap::~TownImageMap()
{
}

ARM void TownImageMap::setup()
{
    char filename[0x80];
    checkData();
    phase_ = 0;
    if (!isEnable_) {
        return;
    }
    func_02057d60(&mapSprite_, mapdata, 0);
    func_02057ee8(&mapSprite_);
    func_02057f00(&mapSprite_, 0);
    func_02057f18(&mapSprite_, 0x3f);
    mapSprite_.sprite_.unk_32 = 1;
    func_02088308(filename, 0x80, "data/field/2d/point_s.tex");
    func_02057d60(&pointSprite_, filename, 0);
    func_02057ee8(&pointSprite_);
    func_02057f00(&pointSprite_, 0);
    func_02057f18(&pointSprite_, 0x3d);
    func_02057f30(&pointSprite_, 0x18);
    func_02057ea8(&pointSprite_, 8, 7, 0x18, 0x18);
    func_02057e98(&pointSprite_, 0x10, 0x10);
}

ARM void TownImageMap::cleanup()
{
    if (isEnable_) {
        func_02057e34(&mapSprite_);
        func_02057e34(&pointSprite_);
    }
    isEnable_ = 0;
}

ARM void TownImageMap::execute()
{
    if (!isEnable_) {
        return;
    }
    switch (phase_) {
    case 0:
        frame_ = 0;
        break;
    case 1:
        calcTargetPos();
        func_02057ed4(&mapSprite_, 1);
        if (frame_ >= 2) {
            func_02057ed4(&pointSprite_, 1);
            unkfunc_02137c00();
        }
        if (++frame_ == 0x1f) {
            phase_ = 2;
        }
        break;
    case 2:
        break;
    case 3:
        if (--frame_ <= 0) {
            func_02057ed4(&mapSprite_, 0);
            cleanup();
            phase_ = 0;
        }
        break;
    }
    int x = unk_04.vx;
    int y = unk_04.vy;
    if (x > 0xf0) {
        x = 0xf0;
    }
    if (y > 0xc0) {
        y = 0xc0;
    }
    if (y < 0x10) {
        if (y > 0) {
            y = 0x10;
        }
    }
    func_02057e88(&pointSprite_, x, y - 0x10);
    func_02057f00(&mapSprite_, frame_);
    func_02057f00(&pointSprite_, frame_);
}

ARM void TownImageMap::exitFloor()
{
    dss::Fix32Vector3 pos;
    param::MapCamera& mapcamera = status::excelParam.mapCamera_[index_];
    const char* pm = g_Global.getPrevMapName();
    if (!func_020882bc(pm, mapcamera.floor, func_02088280(mapcamera.floor))) {
        pos = TownPlayerManager::getSingleton()->getPosition();
        g_Stage.overviewTempPosition_ = pos;
    } else if (!func_020882bc(g_Global.getPrevMapName(), "mpout", 5)) {
        pos = TownPlayerManager::getSingleton()->getPosition();
        g_Stage.overviewTempPosition_ = pos;
    }
}

ARM void TownImageMap::checkData()
{
    if (g_Stage.isMapIcon()) {
        const char* str = g_Stage.getMapName();
        char head[2];
        head[0] = str[0];
        head[1] = str[1];
        if (head[0] == 'c' && head[1] == 'a') {
            head[0] = 'h';
            head[1] = 'a';
        } else if (head[0] == 'c' && head[1] == 'c') {
            head[0] = 'h';
            head[1] = 'c';
        } else if (head[0] == 'c' && head[1] == 'h') {
            head[0] = 'h';
            head[1] = 'h';
        }
        if (g_AreaFlag.check(0x147) && head[0] == 'm' && head[1] == 'b') {
            func_02088308(mapdata, 0x80, "data/2d/map/%c%c_map2.tex", head[0], head[1]);
        } else if (g_AreaFlag.check(0x147) && head[0] == 'h' && head[1] == 'c') {
            func_02088308(mapdata, 0x80, "data/2d/map/%c%c_map3.tex", head[0], head[1]);
        } else if (status::g_Story.chapter_ >= 5 && head[0] == 'h' && head[1] == 'c') {
            func_02088308(mapdata, 0x80, "data/2d/map/%c%c_map2.tex", head[0], head[1]);
        } else {
            func_02088308(mapdata, 0x80, "data/2d/map/%c%c_map1.tex", head[0], head[1]);
        }
        if (func_0207ebd4(&data_02116ce8, mapdata)) {
            isEnable_ = 1;
        } else {
            func_02088308(mapdata, 0x80, "data/2d/map/ha_map1.tex");
            isEnable_ = 1;
        }
        func_020882b0(g_Stage.getMapName(), "mcout2");
    } else {
        isEnable_ = 0;
    }
}

ARM void TownImageMap::draw()
{
    if (!isEnable_) {
        return;
    }
    camera.applyCamera();
    func_020847e8();
    func_02057ec0(&mapSprite_);
    func_02057ec0(&pointSprite_);
}

ARM void TownImageMap::open()
{
    setup();
    camera.applyCamera();
    func_020847e8();
    phase_ = 1;
}

ARM void TownImageMap::close()
{
    phase_ = 3;
}

ARM int TownImageMap::isOpen()
{
    return phase_ == 2;
}

ARM int TownImageMap::isClose()
{
    return phase_ == 0;
}

ARM void TownImageMap::calcTargetPos()
{
    dss::Fix32Vector3 pos;
    param::MapCamera& mapcamera = status::excelParam.mapCamera_[index_];
    const char* mn = g_Global.getMapName();
    if (!func_020882bc(mn, mapcamera.floor, func_02088280(mapcamera.floor))) {
        pos = TownPlayerManager::getSingleton()->getPosition();
    } else if (!func_020882bc(g_Global.getMapName(), "mpout", 5)) {
        pos = TownPlayerManager::getSingleton()->getPosition();
    } else if (!func_020882bc(g_Global.getMapName(), "mcout2", 6)) {
        pos.vx.value = 0;
        pos.vy.value = 0;
        pos.vz.value = -0xfa67;
    } else {
        pos = dss::Fix32Vector3(g_Stage.overviewTempPosition_);
    }
    func_0205710c(0, &pos);
}

ARM void TownImageMap::unkfunc_02137c00()
{
    unk_04 = *func_02057128(0);
}

ARM void TownImageMap::initialize()
{
    dss::Fix32Vector3 zero(0, 0, 0);
    dss::Fix32Vector3 rot;
    dss::Fix32 distance(0L);
    dss::Vector3<short> angle;
    dss::Fix32Vector3 target;
    TownCamera* townCamera = TownCamera::getSingleton();
    camera = townCamera->camera_.unk_004;
    camera.setTarget(zero);
    unsigned int i;
    param::MapCamera* mapcamera = status::excelParam.mapCamera_;
    char mapname[32];
    func_0208828c(mapname, g_Stage.getMapName());
    for (i = 0; i < param::MapCamera::size_; i++) {
        if (mapname[0] == 'c' && mapname[1] == 'a') {
            mapname[0] = 'h';
            mapname[1] = 'a';
        }
        if (mapname[0] == 'c' && mapname[1] == 'c') {
            mapname[0] = 'h';
            mapname[1] = 'c';
        }
        if (mapname[0] == 'c' && mapname[1] == 'h') {
            mapname[0] = 'h';
            mapname[1] = 'h';
        }
        const char* floor = mapcamera[i].floor;
        if (floor[0] == mapname[0] && floor[1] == mapname[1]) {
            rot.vx = mapcamera[i].angleX;
            rot.vy = mapcamera[i].angleY;
            rot.vz = mapcamera[i].angleZ;
            distance = mapcamera[i].distance;
            target.vx = mapcamera[i].targetX;
            target.vy = mapcamera[i].targetY;
            target.vz = mapcamera[i].targetZ;
            index_ = i;
            break;
        }
    }
    angle.vx = rot.vx.value * 0xb6 / 0x1000;
    angle.vy = rot.vy.value * 0xb6 / 0x1000;
    angle.vz = rot.vz.value * 0xb6 / 0x1000;
    camera.setTarget(target);
    camera.setAngle(angle);
    camera.setDistance(distance);
}
