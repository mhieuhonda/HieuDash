// ============================================================
// ColorAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ColorAction.h"

ColorAction::~ColorAction() {
    // 0x8a2584
    this->cleanup();
}

ColorAction::~ColorAction() {
    // 0x8a2570
    this->cleanup();
}

ColorAction::~ColorAction() {
    // 0x8a2570
    this->cleanup();
}

void ColorAction::resetAction() {
    // 0x8a3d10
    // TODO: Implement
}

void ColorAction::saveToState(CAState&) {
    // 0x8a3dec
    // Save to file/storage
    // TODO: Implement saving
}

void ColorAction::setupFromMap(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string> > >&) {
    // 0x8b380c
    // TODO: Implement
}

void ColorAction::loadFromState(CAState&) {
    // 0x8a3e98
    // Load from file/storage
    // TODO: Implement loading
}

void ColorAction::setupFromString(std::string) {
    // 0x8b3ec0
    // TODO: Implement
}

void ColorAction::writeSaveString(fmt::BasicWriter<char>&) {
    // 0x8b8e40
    // Save to file/storage
    // TODO: Implement saving
}

void ColorAction::updateCustomColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B) {
    // 0x8a3d94
    // TODO: Implement
}

void ColorAction::init(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float) {
    // 0x8a3a04
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorAction::step(float) {
    // 0x8a3c14
    // TODO: Implement
}

void ColorAction::create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool) {
    // 0x8a3bfc
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float) {
    // 0x8a3a48
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create(cocos2d::_ccColor3B, bool, int) {
    // 0x8a3bd0
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create() {
    // 0x8a3ba8
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::getCopy() {
    // 0x8a3f44
    // TODO: Implement
}

void ColorAction::isInUse() {
    // 0x8a3d24
    // TODO: Implement
}

