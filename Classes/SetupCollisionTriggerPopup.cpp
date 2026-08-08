
#include "SetupCollisionTriggerPopup.h"

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    this->cleanup();
}

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    this->cleanup();
}

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    this->cleanup();
}

void SetupCollisionTriggerPopup::onTargetP1(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetP2(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetPP(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::textChanged(CCTextInputNode*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onEnableGroup(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onItemIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID2() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onItemID2Arrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateTargetID() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onActivateOnExit(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::determineStartValues() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemIDInputLabel() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID2InputLabel() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateTargetIDInputLabel() {
    // TODO: Implement
}

void SetupCollisionTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupCollisionTriggerPopup* ret = new SetupCollisionTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCollisionTriggerPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

