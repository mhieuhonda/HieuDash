// ============================================================
// SetupAdvFollowEditPhysicsPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupAdvFollowEditPhysicsPopup.h"

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    // 0xa174e4
    this->cleanup();
}

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    // 0xa17478
    this->cleanup();
}

SetupAdvFollowEditPhysicsPopup::~SetupAdvFollowEditPhysicsPopup() {
    // 0xa17478
    this->cleanup();
}

void SetupAdvFollowEditPhysicsPopup::valueDidChange(int, float) {
    // 0xa17678
    // TODO: Implement
}

void SetupAdvFollowEditPhysicsPopup::init(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    // 0xa1d344
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAdvFollowEditPhysicsPopup::create(AdvancedFollowEditObject*, cocos2d::CCArray*) {
    // 0xa1e3b4
    SetupAdvFollowEditPhysicsPopup* ret = new SetupAdvFollowEditPhysicsPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

