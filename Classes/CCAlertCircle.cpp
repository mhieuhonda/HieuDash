
#include "CCAlertCircle.h"

CCAlertCircle::~CCAlertCircle() {
    this->cleanup();
}

void CCAlertCircle::draw() {
    // Stub - not yet implemented
}

bool CCAlertCircle::init() {
    bool ret = cocos2d::CCSprite::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void CCAlertCircle::create() {
    CCAlertCircle* ret = new CCAlertCircle();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

