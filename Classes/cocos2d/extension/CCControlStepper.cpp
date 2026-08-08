// ============================================================
// CCControlStepper.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCControlStepper.h"

namespace cocos2d {
namespace extension {

CCControlStepper::CCControlStepper() {
    // 0xaa4378
}

CCControlStepper::CCControlStepper() {
    // 0xaa4378
}

CCControlStepper::~CCControlStepper() {
    // 0xaa42a4
    this->cleanup();
}

CCControlStepper::~CCControlStepper() {
    // 0xaa4208
    this->cleanup();
}

CCControlStepper::~CCControlStepper() {
    // 0xaa4208
    this->cleanup();
}

void CCControlStepper::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa4c2c
    // TODO: Implement
}

void CCControlStepper::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa49b4
    // TODO: Implement
}

void CCControlStepper::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa4d30
    // TODO: Implement
}

void CCControlStepper::isContinuous() {
    // 0xaa40a8
    // TODO: Implement
}

void CCControlStepper::setStepValue(double) {
    // 0xaa40a0
    // TODO: Implement
}

void CCControlStepper::stopAutorepeat() {
    // 0xaa4998
    // TODO: Implement
}

void CCControlStepper::setMaximumValue(double) {
    // 0xaa4054
    // TODO: Implement
}

void CCControlStepper::setMinimumValue(double) {
    // 0xaa4030
    // TODO: Implement
}

void CCControlStepper::startAutorepeat() {
    // 0xaa4960
    // TODO: Implement
}

void CCControlStepper::setValueWithSendingEvent(double, bool) {
    // 0xaa40b0
    // TODO: Implement
}

void CCControlStepper::updateLayoutUsingTouchLocation(cocos2d::CCPoint) {
    // 0xaa4ae8
    // TODO: Implement
}

void CCControlStepper::initWithMinusSpriteAndPlusSprite(cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xaa4418
    // TODO: Implement
}

void CCControlStepper::create(cocos2d::CCSprite*, cocos2d::CCSprite*) {
    // 0xaa48c8
    CCControlStepper* ret = new CCControlStepper();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCControlStepper::update(float) {
    // 0xaa42d0
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCControlStepper::getValue() {
    // 0xaa4098
    // TODO: Implement
}

void CCControlStepper::setValue(double) {
    // 0xaa4078
    // TODO: Implement
}

void CCControlStepper::setWraps(bool) {
    // 0xaa3f74
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
