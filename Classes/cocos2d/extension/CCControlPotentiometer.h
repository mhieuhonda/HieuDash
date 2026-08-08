// ============================================================
// CCControlPotentiometer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLPOTENTIOMETER_H_
#define COCOS2D_EXTENSION_CCCONTROLPOTENTIOMETER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlPotentiometer {
public:
    CCControlPotentiometer();
    CCControlPotentiometer();

    virtual ~CCControlPotentiometer();
    virtual ~CCControlPotentiometer();
    virtual ~CCControlPotentiometer();

    void setEnabled(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void isTouchInside(cocos2d::CCTouch*);
    void getMaximumValue();
    void getMinimumValue();
    void setMaximumValue(float);
    void setMinimumValue(float);
    void potentiometerBegan(cocos2d::CCPoint);
    void potentiometerEnded(cocos2d::CCPoint);
    void potentiometerMoved(cocos2d::CCPoint);
    void distanceBetweenPointAndPoint(cocos2d::CCPoint, cocos2d::CCPoint);
    void initWithTrackSprite_ProgressTimer_ThumbSprite(cocos2d::CCSprite*, cocos2d::CCProgressTimer*, cocos2d::CCSprite*);
    void angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
    void create(char const*, char const*, char const*);
    void getValue();
    void setValue(float);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLPOTENTIOMETER_H_
