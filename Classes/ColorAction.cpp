
#include "ColorAction.h"

ColorAction::~ColorAction() {
    this->cleanup();
}

ColorAction::~ColorAction() {
    this->cleanup();
}

ColorAction::~ColorAction() {
    this->cleanup();
}

void ColorAction::resetAction() {
    // TODO: Implement
}

void ColorAction::saveToState(CAState&) {
    // Save to file/storage
    // TODO: Implement saving
}

void ColorAction::setupFromMap(std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string> > >&) {
    // TODO: Implement
}

void ColorAction::loadFromState(CAState&) {
    // Load from file/storage
    // TODO: Implement loading
}

void ColorAction::setupFromString(std::string) {
    // TODO: Implement
}

void ColorAction::writeSaveString(fmt::BasicWriter<char>&) {
    // Save to file/storage
    // TODO: Implement saving
}

void ColorAction::updateCustomColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B) {
    // TODO: Implement
}

void ColorAction::init(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float) {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ColorAction::step(float) {
    // TODO: Implement
}

void ColorAction::create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool) {
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float) {
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create(cocos2d::_ccColor3B, bool, int) {
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::create() {
    ColorAction* ret = new ColorAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ColorAction::getCopy() {
    // TODO: Implement
}

void ColorAction::isInUse() {
    // TODO: Implement
}

