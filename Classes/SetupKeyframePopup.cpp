
#include "SetupKeyframePopup.h"

SetupKeyframePopup::~SetupKeyframePopup() {
    this->cleanup();
}

SetupKeyframePopup::~SetupKeyframePopup() {
    this->cleanup();
}

SetupKeyframePopup::~SetupKeyframePopup() {
    this->cleanup();
}

void SetupKeyframePopup::onTimeMode(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupKeyframePopup::onCustomButton(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupKeyframePopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupKeyframePopup::refreshPreviewArt() {
    // TODO: Implement
}

void SetupKeyframePopup::updateTimeModeButtons() {
    // TODO: Implement
}

void SetupKeyframePopup::onCustomToggleTriggerValue(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupKeyframePopup::init(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupKeyframePopup::create(KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*) {
    SetupKeyframePopup* ret = new SetupKeyframePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupKeyframePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

