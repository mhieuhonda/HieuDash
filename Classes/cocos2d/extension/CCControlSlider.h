// ============================================================
// CCControlSlider.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLSLIDER_H_
#define COCOS2D_EXTENSION_CCCONTROLSLIDER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlSlider {
public:
    CCControlSlider();
    CCControlSlider();

    virtual ~CCControlSlider();
    virtual ~CCControlSlider();
    virtual ~CCControlSlider();

    void setEnabled(bool);
    void needsLayout();
    void sliderBegan(cocos2d::CCPoint);
    void sliderEnded(cocos2d::CCPoint);
    void sliderMoved(cocos2d::CCPoint);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void isTouchInside(cocos2d::CCTouch*);
    void initWithSprites(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
    void setMaximumValue(float);
    void setMinimumValue(float);
    void valueForLocation(cocos2d::CCPoint);
    void locationFromTouch(cocos2d::CCTouch*);
    void create(char const*, char const*, char const*);
    void create(cocos2d::CCSprite*, cocos2d::CCSprite*, cocos2d::CCSprite*);
    void setValue(float);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLSLIDER_H_
