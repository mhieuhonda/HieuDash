// ============================================================
// CCControlPotentiometer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlPotentiometer.h"

namespace cocos2d {
namespace extension {

CCControlPotentiometer::CCControlPotentiometer() {
    : m_enabled(false)
    // 0xaa3570
}

CCControlPotentiometer::CCControlPotentiometer() {
    : m_enabled(false)
    // 0xaa3570
}

CCControlPotentiometer::~CCControlPotentiometer() {
    // 0xaa3544
    this->cleanup();
}

CCControlPotentiometer::~CCControlPotentiometer() {
    // 0xaa34c4
    this->cleanup();
}

CCControlPotentiometer::~CCControlPotentiometer() {
    // 0xaa34c4
    this->cleanup();
}

void CCControlPotentiometer::setEnabled(bool) {
    // 0xaa3f28
    // TODO: Set m_enabled
}

void CCControlPotentiometer::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa3ba0
    // TODO: Implement
}

void CCControlPotentiometer::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa3eb8
    // TODO: Implement
}

void CCControlPotentiometer::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa3de8
    // TODO: Implement
}

void CCControlPotentiometer::isTouchInside(cocos2d::CCTouch*) {
    // 0xaa3988
    // TODO: Implement
}

void CCControlPotentiometer::getMaximumValue() {
    // 0xaa3938
    // TODO: Implement
}

void CCControlPotentiometer::getMinimumValue() {
    // 0xaa390c
    // TODO: Implement
}

void CCControlPotentiometer::setMaximumValue(float) {
    // 0xaa3914
    // TODO: Implement
}

void CCControlPotentiometer::setMinimumValue(float) {
    // 0xaa38e8
    // TODO: Implement
}

void CCControlPotentiometer::potentiometerBegan(cocos2d::CCPoint) {
    // 0xaa3b58
    // TODO: Implement
}

void CCControlPotentiometer::potentiometerEnded(cocos2d::CCPoint) {
    // 0xaa3e68
    // TODO: Implement
}

void CCControlPotentiometer::potentiometerMoved(cocos2d::CCPoint) {
    // 0xaa3c94
    // TODO: Implement
}

void CCControlPotentiometer::distanceBetweenPointAndPoint(cocos2d::CCPoint, cocos2d::CCPoint) {
    // 0xaa3940
    // TODO: Implement
}

void CCControlPotentiometer::initWithTrackSprite_ProgressTimer_ThumbSprite(cocos2d::CCSprite*, cocos2d::CCProgressTimer*, cocos2d::CCSprite*) {
    // 0xaa36a0
    // TODO: Implement
}

void CCControlPotentiometer::angleInDegreesBetweenLineFromPoint_toPoint_toLineFromPoint_toPoint(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint) {
    // 0xaa3ab8
    // TODO: Implement
}

void CCControlPotentiometer::create(char const*, char const*, char const*) {
    // 0xaa381c
    CCControlPotentiometer* ret = new CCControlPotentiometer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlPotentiometer::getValue() {
    // 0xaa38e0
    // TODO: Implement
}

void CCControlPotentiometer::setValue(float) {
    // 0xaa3604
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
