
#include "GJRobotSprite.h"

GJRobotSprite::~GJRobotSprite() {
    this->cleanup();
}

GJRobotSprite::~GJRobotSprite() {
    this->cleanup();
}

GJRobotSprite::~GJRobotSprite() {
    this->cleanup();
}

void GJRobotSprite::setOpacity(unsigned char) {
    // TODO: Implement
}

void GJRobotSprite::updateFrame(int) {
    // TODO: Implement
}

void GJRobotSprite::updateColors() {
    // TODO: Implement
}

void GJRobotSprite::hideSecondary() {
    // TODO: Implement
}

void GJRobotSprite::updateColor01(cocos2d::_ccColor3B) {
    // TODO: Implement
}

void GJRobotSprite::updateColor02(cocos2d::_ccColor3B) {
    // TODO: Implement
}

void GJRobotSprite::updateGlowColor(cocos2d::_ccColor3B, bool) {
    // TODO: Implement
}

void GJRobotSprite::init(int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRobotSprite::init(int, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRobotSprite::create(int) {
    GJRobotSprite* ret = new GJRobotSprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRobotSprite::hideGlow() {
    // TODO: Implement
}

void GJRobotSprite::showGlow() {
    // TODO: Implement
}

