
#include "FindObjectPopup.h"

FindObjectPopup::~FindObjectPopup() {
    this->cleanup();
}

FindObjectPopup::~FindObjectPopup() {
    this->cleanup();
}

FindObjectPopup::~FindObjectPopup() {
    this->cleanup();
}

void FindObjectPopup::onFindObjectID(cocos2d::CCObject*) {
    // TODO: Implement
}

void FindObjectPopup::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void FindObjectPopup::create() {
    FindObjectPopup* ret = new FindObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

