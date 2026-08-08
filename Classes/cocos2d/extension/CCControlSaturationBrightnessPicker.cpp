// ============================================================
// CCControlSaturationBrightnessPicker.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlSaturationBrightnessPicker.h"

namespace cocos2d {
namespace extension {

CCControlSaturationBrightnessPicker::CCControlSaturationBrightnessPicker() {
    : m_enabled(false)
    // 0xa9dad8
}

CCControlSaturationBrightnessPicker::CCControlSaturationBrightnessPicker() {
    : m_enabled(false)
    // 0xa9dad8
}

CCControlSaturationBrightnessPicker::~CCControlSaturationBrightnessPicker() {
    // 0xa9d7f4
    this->cleanup();
}

CCControlSaturationBrightnessPicker::~CCControlSaturationBrightnessPicker() {
    // 0xa9d774
    this->cleanup();
}

CCControlSaturationBrightnessPicker::~CCControlSaturationBrightnessPicker() {
    // 0xa9d774
    this->cleanup();
}

void CCControlSaturationBrightnessPicker::setEnabled(bool) {
    // 0xa9e15c
    // TODO: Set m_enabled
}

void CCControlSaturationBrightnessPicker::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9e00c
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9e0d8
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::updateWithHSV(cocos2d::extension::HSV) {
    // 0xa9d820
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::checkSliderPosition(cocos2d::CCPoint, bool) {
    // 0xa9ded8
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) {
    // 0xa9d920
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::updateDraggerWithHSV(cocos2d::extension::HSV) {
    // 0xa9de18
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::updateSliderPosition(cocos2d::CCPoint) {
    // 0xa9dc24
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::registerWithTouchDispatcher() {
    // 0xa9d8e8
    // TODO: Implement
}

void CCControlSaturationBrightnessPicker::create(cocos2d::CCNode*, cocos2d::CCPoint) {
    // 0xa9db78
    CCControlSaturationBrightnessPicker* ret = new CCControlSaturationBrightnessPicker();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace extension
} // namespace cocos2d
