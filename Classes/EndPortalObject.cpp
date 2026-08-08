// ============================================================
// EndPortalObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "EndPortalObject.h"

EndPortalObject::~EndPortalObject() {
    // 0x789f80
    this->cleanup();
}

EndPortalObject::~EndPortalObject() {
    // 0x789f5c
    this->cleanup();
}

EndPortalObject::~EndPortalObject() {
    // 0x789f5c
    this->cleanup();
}

void EndPortalObject::setVisible(bool) {
    // 0x78aa0c
    // TODO: Set m_visible
}

void EndPortalObject::getSpawnPos() {
    // 0x78a6b8
    // TODO: Implement
}

void EndPortalObject::setPosition(cocos2d::CCPoint const&) {
    // 0x789e1c
    // TODO: Set m_position
}

void EndPortalObject::updateColors(cocos2d::_ccColor3B) {
    // 0x78a4fc
    // TODO: Implement
}

void EndPortalObject::updateEndPos(bool) {
    // 0x78a724
    // TODO: Implement
}

void EndPortalObject::triggerObject(GJBaseGameLayer*) {
    // 0x78a618
    // TODO: Implement
}

void EndPortalObject::init() {
    // 0x789b18
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void EndPortalObject::create() {
    // 0x789fc4
    EndPortalObject* ret = new EndPortalObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

