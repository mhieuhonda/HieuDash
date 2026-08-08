// ============================================================
// SetupCollisionTriggerPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupCollisionTriggerPopup.h"

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    // 0x94f540
    this->cleanup();
}

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    // 0x94f3fc
    this->cleanup();
}

SetupCollisionTriggerPopup::~SetupCollisionTriggerPopup() {
    // 0x94f3fc
    this->cleanup();
}

void SetupCollisionTriggerPopup::onTargetP1(cocos2d::CCObject*) {
    // 0x94fac4
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetP2(cocos2d::CCObject*) {
    // 0x94fb64
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetPP(cocos2d::CCObject*) {
    // 0x94fd2c
    // TODO: Implement
}

void SetupCollisionTriggerPopup::textChanged(CCTextInputNode*) {
    // 0x9511bc
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID() {
    // 0x950f48
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onEnableGroup(cocos2d::CCObject*) {
    // 0x94f874
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onItemIDArrow(cocos2d::CCObject*) {
    // 0x950fd4
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID2() {
    // 0x951040
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onItemID2Arrow(cocos2d::CCObject*) {
    // 0x9510cc
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateTargetID() {
    // 0x951138
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onTargetIDArrow(cocos2d::CCObject*) {
    // 0x9513d4
    // TODO: Implement
}

void SetupCollisionTriggerPopup::onActivateOnExit(cocos2d::CCObject*) {
    // 0x94f8f0
    // TODO: Implement
}

void SetupCollisionTriggerPopup::determineStartValues() {
    // 0x94f684
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemIDInputLabel() {
    // 0x94f96c
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateItemID2InputLabel() {
    // 0x94fc04
    // TODO: Implement
}

void SetupCollisionTriggerPopup::updateTargetIDInputLabel() {
    // 0x94fdfc
    // TODO: Implement
}

void SetupCollisionTriggerPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x94ff14
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupCollisionTriggerPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x950d2c
    SetupCollisionTriggerPopup* ret = new SetupCollisionTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupCollisionTriggerPopup::onClose(cocos2d::CCObject*) {
    // 0x94f7ec
    // TODO: Implement
}

