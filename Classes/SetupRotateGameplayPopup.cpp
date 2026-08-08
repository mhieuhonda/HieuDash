
#include "SetupRotateGameplayPopup.h"

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    this->cleanup();
}

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    this->cleanup();
}

SetupRotateGameplayPopup::~SetupRotateGameplayPopup() {
    this->cleanup();
}

void SetupRotateGameplayPopup::onPlusButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupRotateGameplayPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupRotateGameplayPopup::init(RotateGameplayGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupRotateGameplayPopup::create(RotateGameplayGameObject*, cocos2d::CCArray*) {
    SetupRotateGameplayPopup* ret = new SetupRotateGameplayPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

