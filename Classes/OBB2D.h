#ifndef HIEUDASH_OBB2D_H_
#define HIEUDASH_OBB2D_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Oriented bounding box for rotated collision detection

#include "cocos2d.h"
#include "HieuDashEnums.h"

class OBB2D : public cocos2d::CCNode {
public:
    OBB2D();

    cocos2d::CCPoint m_obCenter;
    cocos2d::CCPoint m_obHalfWidths;
    float m_fRotation;
    cocos2d::CCPoint m_obAxisX;
    cocos2d::CCPoint m_obAxisY;
    cocos2d::CCPoint m_obCorners[4];

    static OBB2D* create(cocos2d::CCRect, float);
    bool init(cocos2d::CCRect, float);
    void calculateCorners();
    bool overlaps(OBB2D*);
    bool overlaps1Way(OBB2D*);
    void setCenter(cocos2d::CCPoint);
    void setHalfWidths(cocos2d::CCPoint);
    void setRotation(float);
    cocos2d::CCRect getBoundingBox();
    bool containsPoint(cocos2d::CCPoint);

    ~OBB2D();
};

#endif // HIEUDASH_OBB2D_H_
