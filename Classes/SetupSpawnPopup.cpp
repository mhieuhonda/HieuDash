
#include "SetupSpawnPopup.h"

SetupSpawnPopup::~SetupSpawnPopup() {
    this->cleanup();
}

SetupSpawnPopup::~SetupSpawnPopup() {
    this->cleanup();
}

SetupSpawnPopup::~SetupSpawnPopup() {
    this->cleanup();
}

void SetupSpawnPopup::onAddRemap(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSpawnPopup::onPasteRemap(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSpawnPopup::onDeleteRemap(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSpawnPopup::onSelectRemap(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSpawnPopup::queueUpdateButtons() {
    // TODO: Implement
}

void SetupSpawnPopup::updateRemapButtons(float) {
    // TODO: Implement
}

void SetupSpawnPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupSpawnPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupSpawnPopup* ret = new SetupSpawnPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupSpawnPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupSpawnPopup::addRemap(int, int) {
    // TODO: Implement
}

