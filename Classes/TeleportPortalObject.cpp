
#include "TeleportPortalObject.h"

TeleportPortalObject::~TeleportPortalObject() {
    this->cleanup();
}

TeleportPortalObject::~TeleportPortalObject() {
    this->cleanup();
}

TeleportPortalObject::~TeleportPortalObject() {
    this->cleanup();
}

void TeleportPortalObject::addToGroup(int) {
    // TODO: Implement
}

void TeleportPortalObject::addToGroup2(int) {
    // TODO: Implement
}

void TeleportPortalObject::setPosition(cocos2d::CCPoint const&) {
    // TODO: Set m_position
}

void TeleportPortalObject::setRotation(float) {
    // TODO: Implement
}

void TeleportPortalObject::setStartPos(cocos2d::CCPoint) {
    // TODO: Implement
}

void TeleportPortalObject::setRotation2(float) {
    // TODO: Implement
}

void TeleportPortalObject::getSaveString(GJBaseGameLayer*) {
    // Save to file/storage
    // TODO: Implement saving
}

void TeleportPortalObject::getTeleportXOff(cocos2d::CCNode*) {
    // TODO: Implement
}

void TeleportPortalObject::removeFromGroup(int) {
    // TODO: Implement
}

void TeleportPortalObject::removeFromGroup2(int) {
    // TODO: Implement
}

void TeleportPortalObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // TODO: Implement
}

void TeleportPortalObject::setPositionOverride(cocos2d::CCPoint) {
    // TODO: Set m_positionOverride
}

void TeleportPortalObject::setStartPosOverride(cocos2d::CCPoint) {
    // TODO: Implement
}

void TeleportPortalObject::init(char const*, bool) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TeleportPortalObject::create(char const*, bool) {
    TeleportPortalObject* ret = new TeleportPortalObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

