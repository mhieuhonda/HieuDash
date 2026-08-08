// ============================================================
// CCScene.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCScene.h"

namespace cocos2d {

CCScene::CCScene() {
    // 0xaec680
}

CCScene::CCScene() {
    // 0xaec680
}

CCScene::~CCScene() {
    // 0xaec5d8
    this->cleanup();
}

CCScene::~CCScene() {
    // 0xaec5c4
    this->cleanup();
}

CCScene::~CCScene() {
    // 0xaec5c4
    this->cleanup();
}

void CCScene::getHighestChildZ() {
    // 0xaec778
    // TODO: Implement
}

void CCScene::init() {
    // 0xaec5fc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCScene::create() {
    // 0xaec70c
    CCScene* ret = new CCScene();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
