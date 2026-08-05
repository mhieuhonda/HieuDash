#ifndef HIEUDASH_INSTANTSECTION_H_
#define HIEUDASH_INSTANTSECTION_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// MultilineBitmapFont instant text section

#include "cocos2d.h"
#include "HieuDashEnums.h"

class InstantSection : public cocos2d::CCObject {
public:
    InstantSection();

    std::string m_sText;
    float m_fWidth;
    float m_fHeight;
    int m_nFontIndex;
    cocos2d::_ccColor3B m_obColor;
    float m_fScale;

    static InstantSection* create();
    bool init();
    std::string getText();
    float getWidth();

    ~InstantSection();
};

#endif // HIEUDASH_INSTANTSECTION_H_
