
#include "DemonInfoPopup.h"

DemonInfoPopup::~DemonInfoPopup() {
    this->cleanup();
}

void DemonInfoPopup::keyBackClicked() {
    // Stub - not yet implemented
}

DemonInfoPopup* DemonInfoPopup::createFromString(std::string) {
    return nullptr;
}

void DemonInfoPopup::init(int, int, int, int, int, int, int, int, int, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void DemonInfoPopup::create(int, int, int, int, int, int, int, int, int, int, int, int) {
    DemonInfoPopup* ret = new DemonInfoPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void DemonInfoPopup::onClose(cocos2d::CCObject*) {
    // Stub - not yet implemented
}

