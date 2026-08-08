
#include "SetupReverbPopup.h"

SetupReverbPopup::~SetupReverbPopup() {
    this->cleanup();
}

SetupReverbPopup::~SetupReverbPopup() {
    this->cleanup();
}

SetupReverbPopup::~SetupReverbPopup() {
    this->cleanup();
}

void SetupReverbPopup::updateReverbLabel() {
    // TODO: Implement
}

void SetupReverbPopup::init(SFXTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupReverbPopup::create(SFXTriggerGameObject*, cocos2d::CCArray*) {
    SetupReverbPopup* ret = new SetupReverbPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupReverbPopup::onPlay(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupReverbPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupReverbPopup::onReverb(cocos2d::CCObject*) {
    // TODO: Implement
}

