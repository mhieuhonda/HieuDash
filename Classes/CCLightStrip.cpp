
#include "CCLightStrip.h"

CCLightStrip::~CCLightStrip() {
    this->cleanup();
}

void CCLightStrip::updateTweenAction(float, char const*) {
    // Update/refresh operation - stub
}

void CCLightStrip::draw() {
    // Stub - not yet implemented
}

void CCLightStrip::init(float, float, float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
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

