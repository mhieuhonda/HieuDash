
#include "SetLevelOrderPopup.h"

SetLevelOrderPopup::~SetLevelOrderPopup() {
    this->cleanup();
}

SetLevelOrderPopup::~SetLevelOrderPopup() {
    this->cleanup();
}

SetLevelOrderPopup::~SetLevelOrderPopup() {
    this->cleanup();
}

void SetLevelOrderPopup::onOrderButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetLevelOrderPopup::init(int, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetLevelOrderPopup::create(int, int, int) {
    SetLevelOrderPopup* ret = new SetLevelOrderPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

