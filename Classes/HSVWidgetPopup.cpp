
#include "HSVWidgetPopup.h"

HSVWidgetPopup::~HSVWidgetPopup() {
    this->cleanup();
}

void HSVWidgetPopup::keyBackClicked() {
    // Stub - not yet implemented
}

void HSVWidgetPopup::init(cocos2d::_ccHSVValue, HSVWidgetDelegate*, std::string) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void HSVWidgetPopup::create(cocos2d::_ccHSVValue, HSVWidgetDelegate*, std::string) {
    HSVWidgetPopup* ret = new HSVWidgetPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void HSVWidgetPopup::onClose(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

