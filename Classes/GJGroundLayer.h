#ifndef HIEUDASH_GJGROUNDLAYER_H_
#define HIEUDASH_GJGROUNDLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Ground rendering layer

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJGroundLayer : public cocos2d::CCLayer {
public:
    GJGroundLayer();

    cocos2d::CCSprite* m_pGroundSprite;
    cocos2d::CCSprite* m_pGroundSprite2;
    int m_nGroundID;
    float m_fGroundWidth;
    cocos2d::_ccColor3B m_obGroundColor;
    float m_fSpeed;

    static GJGroundLayer* create();
    bool init();
    void update(float);
    void setColor(cocos2d::_ccColor3B);
    void setSpeed(float);
    void updateGroundSprites();
    void loadGround(int);
    void scrollGround(float);
    void resetPosition();

    ~GJGroundLayer();
};

#endif // HIEUDASH_GJGROUNDLAYER_H_
