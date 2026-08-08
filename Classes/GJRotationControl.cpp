
#include "GJRotationControl.h"

GJRotationControl::~GJRotationControl() {
    this->cleanup();
}

GJRotationControl::~GJRotationControl() {
    this->cleanup();
}

GJRotationControl::~GJRotationControl() {
    this->cleanup();
}

void GJRotationControl::finishTouch() {
    // TODO: Implement
}

void GJRotationControl::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJRotationControl::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJRotationControl::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJRotationControl::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJRotationControl::updateSliderPosition(cocos2d::CCPoint) {
    // TODO: Implement
}

void GJRotationControl::draw() {
    // Render/draw logic
    // TODO: Implement rendering
}

void GJRotationControl::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRotationControl::create() {
    GJRotationControl* ret = new GJRotationControl();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRotationControl::setAngle(float) {
    // TODO: Implement
}

