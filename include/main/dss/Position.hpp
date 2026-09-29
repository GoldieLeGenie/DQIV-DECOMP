#pragma once
#include <globaldefs.h>
#include "main/dss/DssUtils.hpp"

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
    dss::Fix32Vector3* getPosition();
    dss::Fix32Vector3* getScale();
};
