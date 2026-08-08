
#include "SetupInteractObjectPopup.h"

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    this->cleanup();
}

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    this->cleanup();
}

SetupInteractObjectPopup::~SetupInteractObjectPopup() {
    this->cleanup();
}

void SetupInteractObjectPopup::updateItems() {
    // TODO: Implement
}

void SetupInteractObjectPopup::onPlusButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupInteractObjectPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupInteractObjectPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupInteractObjectPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupInteractObjectPopup* ret = new SetupInteractObjectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupInteractObjectPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

