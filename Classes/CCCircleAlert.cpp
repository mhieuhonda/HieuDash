
#include "CCCircleAlert.h"

CCCircleAlert::~CCCircleAlert() {
    this->cleanup();
}

CCCircleAlert::~CCCircleAlert() {
    this->cleanup();
}

CCCircleAlert::~CCCircleAlert() {
    this->cleanup();
}

void CCCircleAlert::init(float, float, float) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCCircleAlert::create(float, float, float) {
    CCCircleAlert* ret = new CCCircleAlert();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

