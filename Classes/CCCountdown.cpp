
#include "CCCountdown.h"

CCCountdown::~CCCountdown() {
    this->cleanup();
}

CCCountdown::~CCCountdown() {
    this->cleanup();
}

CCCountdown::~CCCountdown() {
    this->cleanup();
}

void CCCountdown::setOpacity(unsigned char) {
    // TODO: Implement
}

void CCCountdown::lapFinished() {
    // TODO: Implement
}

void CCCountdown::startTimerWithSeconds(float, void (cocos2d::CCObject::*)(), cocos2d::CCNode*) {
    // TODO: Implement
}

void CCCountdown::init() {
    bool ret = cocos2d::CCLabelTTF::init() if "cocos2d::CCLabelTTF" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCCountdown::create() {
    CCCountdown* ret = new CCCountdown();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

