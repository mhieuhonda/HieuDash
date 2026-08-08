// ============================================================
// AnimatedGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AnimatedGameObject.h"

AnimatedGameObject::~AnimatedGameObject() {
    // 0x751d5c
    this->cleanup();
}

AnimatedGameObject::~AnimatedGameObject() {
    // 0x751c58
    this->cleanup();
}

AnimatedGameObject::~AnimatedGameObject() {
    // 0x751c58
    this->cleanup();
}

void AnimatedGameObject::setOpacity(unsigned char) {
    // 0x74af98
    // TODO: Implement
}

void AnimatedGameObject::resetObject() {
    // 0x7568c0
    // TODO: Implement
}

void AnimatedGameObject::getTweenTime(int, int) {
    // 0x757298
    // TODO: Implement
}

void AnimatedGameObject::playAnimation(int) {
    // 0x75757c
    // TODO: Implement
}

void AnimatedGameObject::setChildColor(cocos2d::_ccColor3B const&) {
    // 0x74abc8
    // TODO: Set m_childColor
}

void AnimatedGameObject::activateObject() {
    // 0x756880
    // TODO: Implement
}

void AnimatedGameObject::animationForID(int, int) {
    // 0x7572a4
    // TODO: Implement
}

void AnimatedGameObject::setObjectColor(cocos2d::_ccColor3B const&) {
    // 0x74b194
    // TODO: Set m_objectColor
}

void AnimatedGameObject::deactivateObject(bool) {
    // 0x750a08
    // TODO: Implement
}

void AnimatedGameObject::animationFinished(char const*) {
    // 0x751ed0
    // TODO: Implement
}

void AnimatedGameObject::setupAnimatedSize(int) {
    // 0x756914
    // TODO: Implement
}

void AnimatedGameObject::setupChildSprites() {
    // 0x755eb4
    // TODO: Implement
}

void AnimatedGameObject::displayFrameChanged(cocos2d::CCObject*, std::string) {
    // 0x752ff4
    // TODO: Implement
}

void AnimatedGameObject::updateObjectAnimation() {
    // 0x7566bc
    // TODO: Implement
}

void AnimatedGameObject::updateChildSpriteColor(cocos2d::_ccColor3B) {
    // 0x756644
    // TODO: Implement
}

void AnimatedGameObject::init(int) {
    // 0x756af0
    bool ret = GameObject::init() if "GameObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AnimatedGameObject::create(int) {
    // 0x756cc8
    AnimatedGameObject* ret = new AnimatedGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

