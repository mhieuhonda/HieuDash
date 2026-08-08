// ============================================================
// CollisionBlockPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CollisionBlockPopup.h"

CollisionBlockPopup::~CollisionBlockPopup() {
    // 0x909034
    this->cleanup();
}

CollisionBlockPopup::~CollisionBlockPopup() {
    // 0x908f9c
    this->cleanup();
}

CollisionBlockPopup::~CollisionBlockPopup() {
    // 0x908f9c
    this->cleanup();
}

void CollisionBlockPopup::textChanged(CCTextInputNode*) {
    // 0x90a468
    // TODO: Implement
}

void CollisionBlockPopup::onNextItemID(cocos2d::CCObject*) {
    // 0x90a5a8
    // TODO: Implement
}

void CollisionBlockPopup::updateItemID() {
    // 0x90a3dc
    // TODO: Implement
}

void CollisionBlockPopup::onItemIDArrow(cocos2d::CCObject*) {
    // 0x90a54c
    // TODO: Implement
}

void CollisionBlockPopup::keyBackClicked() {
    // 0x9095e8
    // TODO: Implement
}

void CollisionBlockPopup::onDynamicBlock(cocos2d::CCObject*) {
    // 0x9094e4
    // TODO: Implement
}

void CollisionBlockPopup::textInputClosed(CCTextInputNode*) {
    // 0x908f78
    // TODO: Implement
}

void CollisionBlockPopup::textInputReturn(CCTextInputNode*) {
    // 0x909138
    // TODO: Implement
}

void CollisionBlockPopup::updateEditorLabel() {
    // 0x909478
    // TODO: Implement
}

void CollisionBlockPopup::createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint) {
    // 0x909274
    // TODO: Implement
}

void CollisionBlockPopup::determineStartValues() {
    // 0x9091c0
    // TODO: Implement
}

void CollisionBlockPopup::updateTextInputLabel() {
    // 0x9095f8
    // TODO: Implement
}

void CollisionBlockPopup::textInputShouldOffset(CCTextInputNode*, float) {
    // 0x9090a8
    // TODO: Implement
}

void CollisionBlockPopup::init(EffectGameObject*, cocos2d::CCArray*) {
    // 0x909710
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CollisionBlockPopup::show() {
    // 0x909060
    // TODO: Implement
}

void CollisionBlockPopup::create(EffectGameObject*, cocos2d::CCArray*) {
    // 0x90a29c
    CollisionBlockPopup* ret = new CollisionBlockPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CollisionBlockPopup::onClose(cocos2d::CCObject*) {
    // 0x909568
    // TODO: Implement
}

