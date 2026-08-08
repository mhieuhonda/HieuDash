// ============================================================
// CCControlHuePicker.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLHUEPICKER_H_
#define COCOS2D_EXTENSION_CCCONTROLHUEPICKER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlHuePicker {
public:
    CCControlHuePicker();
    CCControlHuePicker();

    virtual ~CCControlHuePicker();
    virtual ~CCControlHuePicker();
    virtual ~CCControlHuePicker();

    void setEnabled(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setHuePercentage(float);
    void checkSliderPosition(cocos2d::CCPoint, bool);
    void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint);
    void updateSliderPosition(cocos2d::CCPoint);
    void registerWithTouchDispatcher();
    void create(cocos2d::CCNode*, cocos2d::CCPoint);
    void setHue(float);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLHUEPICKER_H_
