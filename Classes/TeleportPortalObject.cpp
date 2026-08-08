// ============================================================
// TeleportPortalObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "TeleportPortalObject.h"

TeleportPortalObject::~TeleportPortalObject() {
    // 0x749b20
    this->cleanup();
}

TeleportPortalObject::~TeleportPortalObject() {
    // 0x749afc
    this->cleanup();
}

TeleportPortalObject::~TeleportPortalObject() {
    // 0x749afc
    this->cleanup();
}

void TeleportPortalObject::addToGroup(int) {
    // 0x75093c
    // TODO: Implement
}

void TeleportPortalObject::addToGroup2(int) {
    // 0x74b23c
    // TODO: Implement
}

void TeleportPortalObject::setPosition(cocos2d::CCPoint const&) {
    // 0x7610e4
    // TODO: Set m_position
}

void TeleportPortalObject::setRotation(float) {
    // 0x7508d8
    // TODO: Implement
}

void TeleportPortalObject::setStartPos(cocos2d::CCPoint) {
    // 0x760fec
    // TODO: Implement
}

void TeleportPortalObject::setRotation2(float) {
    // 0x74a91c
    // TODO: Implement
}

void TeleportPortalObject::getSaveString(GJBaseGameLayer*) {
    // 0x77f3c0
    // Save to file/storage
    // TODO: Implement saving
}

void TeleportPortalObject::getTeleportXOff(cocos2d::CCNode*) {
    // 0x760ee8
    // TODO: Implement
}

void TeleportPortalObject::removeFromGroup(int) {
    // 0x7509ac
    // TODO: Implement
}

void TeleportPortalObject::removeFromGroup2(int) {
    // 0x74b240
    // TODO: Implement
}

void TeleportPortalObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x750d00
    // TODO: Implement
}

void TeleportPortalObject::setPositionOverride(cocos2d::CCPoint) {
    // 0x760ee4
    // TODO: Set m_positionOverride
}

void TeleportPortalObject::setStartPosOverride(cocos2d::CCPoint) {
    // 0x760e84
    // TODO: Implement
}

void TeleportPortalObject::init(char const*, bool) {
    // 0x7605c0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void TeleportPortalObject::create(char const*, bool) {
    // 0x7605f8
    TeleportPortalObject* ret = new TeleportPortalObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

