
#include "CCLightFlash.h"

CCLightFlash::~CCLightFlash() {
    this->cleanup();
}

CCLightFlash::~CCLightFlash() {
    this->cleanup();
}

CCLightFlash::~CCLightFlash() {
    this->cleanup();
}

void CCLightFlash::playEffect(cocos2d::CCPoint, cocos2d::_ccColor3B, float, float, float, float, float, float, float, float, float, float, float, float, float, float, int, bool, bool, float) {
    // TODO: Implement
}

void CCLightFlash::cleanupFlash() {
    // TODO: Implement
}

void CCLightFlash::removeLights() {
    // TODO: Implement
}

void CCLightFlash::fadeAndRemove() {
    // TODO: Implement
}

void CCLightFlash::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLightFlash::create() {
    CCLightFlash* ret = new CCLightFlash();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLightFlash::showFlash() {
    // TODO: Implement
}

