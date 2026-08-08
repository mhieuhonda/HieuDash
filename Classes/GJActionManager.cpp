// ============================================================
// GJActionManager.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJActionManager.h"

GJActionManager::~GJActionManager() {
    // 0xa263e4
    this->cleanup();
}

GJActionManager::~GJActionManager() {
    // 0xa263a8
    this->cleanup();
}

GJActionManager::~GJActionManager() {
    // 0xa263a8
    this->cleanup();
}

void GJActionManager::getInternalAction(int) {
    // 0xa26448
    // TODO: Implement
}

void GJActionManager::runInternalAction(cocos2d::CCAction*, cocos2d::CCNode*) {
    // 0xa26408
    // TODO: Implement
}

void GJActionManager::stopInternalAction(int) {
    // 0xa26454
    // TODO: Implement
}

void GJActionManager::updateInternalActions(float, bool) {
    // 0xa264a4
    // TODO: Implement
}

void GJActionManager::stopAllInternalActions() {
    // 0xa26584
    // TODO: Implement
}

void GJActionManager::init() {
    // 0xa26590
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJActionManager::create() {
    // 0xa265cc
    GJActionManager* ret = new GJActionManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

