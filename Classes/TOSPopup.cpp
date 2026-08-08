
#include "TOSPopup.h"

TOSPopup::~TOSPopup() {
    this->cleanup();
}

TOSPopup::~TOSPopup() {
    this->cleanup();
}

TOSPopup::~TOSPopup() {
    this->cleanup();
}

void TOSPopup::keyBackClicked() {
    // TODO: Implement
}

void TOSPopup::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TOSPopup::onTOS(cocos2d::CCObject*) {
    // TODO: Implement
}

void TOSPopup::create() {
    TOSPopup* ret = new TOSPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void TOSPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void TOSPopup::onPrivacy(cocos2d::CCObject*) {
    // TODO: Implement
}

