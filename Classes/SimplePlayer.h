#ifndef HIEUDASH_SIMPLEPLAYER_H_
#define HIEUDASH_SIMPLEPLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Player icon renderer (used in leaderboards, profiles, etc.)

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SimplePlayer : public cocos2d::CCSprite {
public:
    SimplePlayer();

    cocos2d::CCSprite* m_pMainSprite;
    cocos2d::CCSprite* m_pSecondarySprite;
    cocos2d::CCSprite* m_pOutlineSprite;
    int m_nIconType;
    int m_nIconID;
    cocos2d::_ccColor3B m_obPrimaryColor;
    cocos2d::_ccColor3B m_obSecondaryColor;

    static SimplePlayer* create(int);
    bool init(int);
    void updateColors();
    void setPrimaryColor(cocos2d::_ccColor3B);
    void setSecondaryColor(cocos2d::_ccColor3B);
    void setIconID(int);
    void setIconType(int);
    void updateIcon();

    ~SimplePlayer();
};

#endif // HIEUDASH_SIMPLEPLAYER_H_
