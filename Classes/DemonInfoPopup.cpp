
#include "DemonInfoPopup.h"

DemonInfoPopup::~DemonInfoPopup() {
    this->cleanup();
}

DemonInfoPopup::~DemonInfoPopup() {
    this->cleanup();
}

DemonInfoPopup::~DemonInfoPopup() {
    this->cleanup();
}

void DemonInfoPopup::keyBackClicked() {
    // TODO: Implement
}

void DemonInfoPopup::createFromString(std::string) {
    // TODO: Implement
}

void DemonInfoPopup::init(int, int, int, int, int, int, int, int, int, int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
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
    // TODO: Implement
}

