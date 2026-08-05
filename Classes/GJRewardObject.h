#ifndef HIEUDASH_GJREWARDOBJECT_H_
#define HIEUDASH_GJREWARDOBJECT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Individual reward items

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJRewardObject : public cocos2d::CCObject {
public:
    GJRewardObject();

    int m_nRewardID;
    int m_nRewardType;
    int m_nItemID;
    int m_nQuantity;
    bool m_bClaimed;

    static GJRewardObject* create();
    bool init();

    ~GJRewardObject();
};

#endif // HIEUDASH_GJREWARDOBJECT_H_
