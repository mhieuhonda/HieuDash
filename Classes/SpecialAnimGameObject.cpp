// ============================================================
// SpecialAnimGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SpecialAnimGameObject.h"

SpecialAnimGameObject::~SpecialAnimGameObject() {
    // 0x74a67c
    this->cleanup();
}

SpecialAnimGameObject::~SpecialAnimGameObject() {
    // 0x74a658
    this->cleanup();
}

SpecialAnimGameObject::~SpecialAnimGameObject() {
    // 0x74a658
    this->cleanup();
}

void SpecialAnimGameObject::resetObject() {
    // 0x74ac1c
    // TODO: Implement
}

void SpecialAnimGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x772b7c
    // Save to file/storage
    // TODO: Implement saving
}

void SpecialAnimGameObject::updateMainColor(cocos2d::_ccColor3B const&) {
    // 0x74ae58
    // TODO: Implement
}

void SpecialAnimGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x74a730
    // TODO: Implement
}

void SpecialAnimGameObject::updateSecondaryColor(cocos2d::_ccColor3B const&) {
    // 0x74ae68
    // TODO: Implement
}

void SpecialAnimGameObject::updateSyncedAnimation(float, int) {
    // 0x9b23fc
    // TODO: Implement
}

void SpecialAnimGameObject::init(char const*) {
    // 0x75579c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SpecialAnimGameObject::create(char const*) {
    // 0x7557c8
    SpecialAnimGameObject* ret = new SpecialAnimGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

