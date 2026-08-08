// ============================================================
// CCControlSwitchSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLSWITCHSPRITE_H_
#define COCOS2D_EXTENSION_CCCONTROLSWITCHSPRITE_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlSwitchSprite {
public:
    CCControlSwitchSprite();
    CCControlSwitchSprite();

    virtual ~CCControlSwitchSprite();
    virtual ~CCControlSwitchSprite();
    virtual ~CCControlSwitchSprite();

    void needsLayout();
    void onSideWidth();
    void offSideWidth();
    void updateTweenAction(float, char const*);
    void initWithMaskSprite(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCLabelTTF*, cocos2d::CCLabelTTF*);
    void setSliderXPosition(float);
    void updateTweenActionInt(float, int);
    void draw();

protected:
    cocos2d::CCPoint m_sliderXPosition;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLSWITCHSPRITE_H_
