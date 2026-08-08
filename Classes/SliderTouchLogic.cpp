
#include "SliderTouchLogic.h"

SliderTouchLogic::~SliderTouchLogic() {
    this->cleanup();
}

SliderTouchLogic::~SliderTouchLogic() {
    this->cleanup();
}

SliderTouchLogic::~SliderTouchLogic() {
    this->cleanup();
}

void SliderTouchLogic::setRotated(bool) {
    // TODO: Implement
}

void SliderTouchLogic::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void SliderTouchLogic::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void SliderTouchLogic::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void SliderTouchLogic::setMaxOffset(float) {
    // TODO: Implement
}

void SliderTouchLogic::registerWithTouchDispatcher() {
    // TODO: Implement
}

void SliderTouchLogic::init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float) {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SliderTouchLogic::create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float) {
    SliderTouchLogic* ret = new SliderTouchLogic();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

