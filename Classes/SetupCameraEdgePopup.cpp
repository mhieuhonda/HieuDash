
#include "SetupCameraEdgePopup.h"

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    this->cleanup();
}

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    this->cleanup();
}

SetupCameraEdgePopup::~SetupCameraEdgePopup() {
    this->cleanup();
}

void SetupCameraEdgePopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupCameraEdgePopup::onCameraEdge(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraEdgePopup::onUnlockEdge(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraEdgePopup::updateTargetID() {
    // TODO: Implement
}

void SetupCameraEdgePopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCameraEdgePopup::determineStartValues() {
    // TODO: Implement
}

void SetupCameraEdgePopup::updateTextInputLabel() {
    // TODO: Implement
}

void SetupCameraEdgePopup::init(CameraTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCameraEdgePopup::create(CameraTriggerGameObject*, cocos2d::CCArray*) {
    SetupCameraEdgePopup* ret = new SetupCameraEdgePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCameraEdgePopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

