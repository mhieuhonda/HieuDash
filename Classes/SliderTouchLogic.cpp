// ============================================================
// SliderTouchLogic.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SliderTouchLogic.h"

SliderTouchLogic::~SliderTouchLogic() {
    // 0x5938dc
    this->cleanup();
}

SliderTouchLogic::~SliderTouchLogic() {
    // 0x593890
    this->cleanup();
}

SliderTouchLogic::~SliderTouchLogic() {
    // 0x593890
    this->cleanup();
}

void SliderTouchLogic::setRotated(bool) {
    // 0x59415c
    // TODO: Implement
}

void SliderTouchLogic::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x594a08
    // TODO: Implement
}

void SliderTouchLogic::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x594b08
    // TODO: Implement
}

void SliderTouchLogic::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0x594664
    // TODO: Implement
}

void SliderTouchLogic::setMaxOffset(float) {
    // 0x594110
    // TODO: Implement
}

void SliderTouchLogic::registerWithTouchDispatcher() {
    // 0x593948
    // TODO: Implement
}

void SliderTouchLogic::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float) {
    // 0x593e74
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SliderTouchLogic::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float) {
    // 0x593f98
    SliderTouchLogic* ret = new SliderTouchLogic();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

