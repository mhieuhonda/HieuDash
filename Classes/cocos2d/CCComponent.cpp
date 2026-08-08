// ============================================================
// CCComponent.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCComponent.h"

namespace cocos2d {

CCComponent::CCComponent() {
    : m_enabled(false), m_name("")
    // 0xb2e958
}

CCComponent::CCComponent() {
    : m_enabled(false), m_name("")
    // 0xb2e958
}

CCComponent::~CCComponent() {
    // 0xb2e934
    this->cleanup();
}

CCComponent::~CCComponent() {
    // 0xb2e87c
    this->cleanup();
}

CCComponent::~CCComponent() {
    // 0xb2e87c
    this->cleanup();
}

void CCComponent::setEnabled(bool) {
    // 0xb2e874
    // TODO: Set m_enabled
}

void CCComponent::init() {
    // 0xb2e850
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCComponent::create() {
    // 0xb2e9a4
    CCComponent* ret = new CCComponent();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCComponent::onExit() {
    // 0xb2e85c
    // TODO: Implement
}

void CCComponent::update(float) {
    // 0xb2e860
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCComponent::onEnter() {
    // 0xb2e858
    // TODO: Implement
}

void CCComponent::setName(char const*) {
    // 0xb2ea1c
    // TODO: Set m_name
}

void CCComponent::setOwner(cocos2d::CCNode*) {
    // 0xb2ea58
    // TODO: Implement
}

void CCComponent::serialize(void*) {
    // 0xb2e864
    // TODO: Implement
}

void CCComponent::getName()) const {
    // 0xb2ea14
    return m_name;
}

void CCComponent::getOwner()) const {
    // 0xb2ea50
}

void CCComponent::isEnabled()) const {
    // 0xb2e86c
    // TODO: Implement
}

} // namespace cocos2d
