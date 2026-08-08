// ============================================================
// CCControlHuePicker.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlHuePicker.h"

namespace cocos2d {
namespace extension {

CCControlHuePicker::CCControlHuePicker() {
    : m_enabled(false)
    // 0xa9d308
}

CCControlHuePicker::CCControlHuePicker() {
    : m_enabled(false)
    // 0xa9d308
}

CCControlHuePicker::~CCControlHuePicker() {
    // 0xa9cfe4
    this->cleanup();
}

CCControlHuePicker::~CCControlHuePicker() {
    // 0xa9cf5c
    this->cleanup();
}

CCControlHuePicker::~CCControlHuePicker() {
    // 0xa9cf5c
    this->cleanup();
}

void CCControlHuePicker::setEnabled(bool) {
    // 0xa9d728
    // TODO: Set m_enabled
}

void CCControlHuePicker::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9d5d8
    // TODO: Implement
}

void CCControlHuePicker::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xa9d6a4
    // TODO: Implement
}

void CCControlHuePicker::setHuePercentage(float) {
    // 0xa9d048
    // TODO: Implement
}

void CCControlHuePicker::checkSliderPosition(cocos2d::CCPoint, bool) {
    // 0xa9d500
    // TODO: Implement
}

void CCControlHuePicker::initWithTargetAndPos(cocos2d::CCNode*, cocos2d::CCPoint) {
    // 0xa9d14c
    // TODO: Implement
}

void CCControlHuePicker::updateSliderPosition(cocos2d::CCPoint) {
    // 0xa9d444
    // TODO: Implement
}

void CCControlHuePicker::registerWithTouchDispatcher() {
    // 0xa9d010
    // TODO: Implement
}

void CCControlHuePicker::create(cocos2d::CCNode*, cocos2d::CCPoint) {
    // 0xa9d398
    CCControlHuePicker* ret = new CCControlHuePicker();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlHuePicker::setHue(float) {
    // 0xa9cf30
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
