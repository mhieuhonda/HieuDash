// ============================================================
// CCLightning.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCLIGHTNING_H_
#define COCOS2D_CCLIGHTNING_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLightning {
public:
    CCLightning();
    CCLightning();

    virtual ~CCLightning();
    virtual ~CCLightning();
    virtual ~CCLightning();

    void getOpacity();
    void setOpacity(unsigned char);
    void strikeRandom();
    void strikeFinished();
    void strikeWithSeed(unsigned long);
    void getDisplayedColor();
    void isOpacityModifyRGB();
    void getDisplayedOpacity();
    void initWithStrikePoint(cocos2d::CCPoint);
    void initWithStrikePoint(cocos2d::CCPoint, cocos2d::CCPoint, float);
    void setOpacityModifyRGB(bool);
    void updateDisplayedColor(cocos2d::_ccColor3B const&);
    void isCascadeColorEnabled();
    void setCascadeColorEnabled(bool);
    void updateDisplayedOpacity(unsigned char);
    void isCascadeOpacityEnabled();
    void lightningWithStrikePoint(cocos2d::CCPoint);
    void lightningWithStrikePoint(cocos2d::CCPoint, cocos2d::CCPoint, float);
    void setCascadeOpacityEnabled(bool);
    void draw();
    void strike();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

protected:
    bool m_cascadeColorEnabled;
    bool m_cascadeOpacityEnabled;
    cocos2d::_ccColor3B m_color;
    cocos2d::_ccColor3B m_displayedColor;

};

} // namespace cocos2d

#endif // COCOS2D_CCLIGHTNING_H_
