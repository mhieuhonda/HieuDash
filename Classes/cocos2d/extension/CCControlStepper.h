// ============================================================
// CCControlStepper.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLSTEPPER_H_
#define COCOS2D_EXTENSION_CCCONTROLSTEPPER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlStepper {
public:
    CCControlStepper();
    CCControlStepper();

    virtual ~CCControlStepper();
    virtual ~CCControlStepper();
    virtual ~CCControlStepper();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void isContinuous();
    void setStepValue(double);
    void stopAutorepeat();
    void setMaximumValue(double);
    void setMinimumValue(double);
    void startAutorepeat();
    void setValueWithSendingEvent(double, bool);
    void updateLayoutUsingTouchLocation(cocos2d::CCPoint);
    void initWithMinusSpriteAndPlusSprite(cocos2d::CCSprite*, cocos2d::CCSprite*);
    void create(cocos2d::CCSprite*, cocos2d::CCSprite*);
    void update(float);
    void getValue();
    void setValue(double);
    void setWraps(bool);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLSTEPPER_H_
