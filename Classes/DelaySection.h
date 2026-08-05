#ifndef HIEUDASH_DELAYSECTION_H_
#define HIEUDASH_DELAYSECTION_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// MultilineBitmapFont delayed text section

#include "cocos2d.h"
#include "HieuDashEnums.h"

class DelaySection : public cocos2d::CCObject {
public:
    DelaySection();

    std::string m_sText;
    float m_fWidth;
    float m_fHeight;
    float m_fDelay;
    int m_nFontIndex;
    cocos2d::_ccColor3B m_obColor;
    float m_fScale;

    static DelaySection* create();
    bool init();
    std::string getText();
    float getWidth();
    float getDelay();

    ~DelaySection();
};

#endif // HIEUDASH_DELAYSECTION_H_
