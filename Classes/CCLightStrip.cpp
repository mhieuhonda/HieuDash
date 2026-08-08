
#include "CCLightStrip.h"

CCLightStrip::~CCLightStrip() {
    this->cleanup();
}

CCLightStrip::~CCLightStrip() {
    this->cleanup();
}

CCLightStrip::~CCLightStrip() {
    this->cleanup();
}

void CCLightStrip::updateTweenAction(float, char const*) {
    // TODO: Implement
}

void CCLightStrip::draw() {
    // Render/draw logic
    // TODO: Implement rendering
}

void CCLightStrip::init(float, float, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLightStrip::create(float, float, float, float, float) {
    CCLightStrip* ret = new CCLightStrip();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

