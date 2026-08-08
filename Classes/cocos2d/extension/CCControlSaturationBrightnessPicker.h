// ============================================================
// CCControlSaturationBrightnessPicker.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLSATURATIONBRIGHTNESSPICKER_H_
#define COCOS2D_EXTENSION_CCCONTROLSATURATIONBRIGHTNESSPICKER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlSaturationBrightnessPicker {
public:
    CCControlSaturationBrightnessPicker();
    CCControlSaturationBrightnessPicker();

    virtual ~CCControlSaturationBrightnessPicker();
    virtual ~CCControlSaturationBrightnessPicker();
    virtual ~CCControlSaturationBrightnessPicker();

    void setEnabled(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateWithHSV(cocos2d::extension::HSV);
    void checkSliderPosition(cocos2d::CCPoint, bool);
    void initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint);
    void updateDraggerWithHSV(cocos2d::extension::HSV);
    void updateSliderPosition(cocos2d::CCPoint);
    void registerWithTouchDispatcher();
    void create(cocos2d::CCNode*, cocos2d::CCPoint);

protected:
    bool m_enabled;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLSATURATIONBRIGHTNESSPICKER_H_
