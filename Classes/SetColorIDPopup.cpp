
#include "SetColorIDPopup.h"

SetColorIDPopup::~SetColorIDPopup() {
    this->cleanup();
}

SetColorIDPopup::~SetColorIDPopup() {
    this->cleanup();
}

SetColorIDPopup::~SetColorIDPopup() {
    this->cleanup();
}

void SetColorIDPopup::colorSelectClosed(GJSpecialColorSelect*, int) {
    // TODO: Implement
}

void SetColorIDPopup::onSelectSpecialColor(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetColorIDPopup::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetColorIDPopup::create(int) {
    SetColorIDPopup* ret = new SetColorIDPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

