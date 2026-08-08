
#include "GJActionManager.h"

GJActionManager::~GJActionManager() {
    this->cleanup();
}

GJActionManager::~GJActionManager() {
    this->cleanup();
}

GJActionManager::~GJActionManager() {
    this->cleanup();
}

void GJActionManager::getInternalAction(int) {
    // TODO: Implement
}

void GJActionManager::runInternalAction(cocos2d::CCAction*, cocos2d::CCNode*) {
    // TODO: Implement
}

void GJActionManager::stopInternalAction(int) {
    // TODO: Implement
}

void GJActionManager::updateInternalActions(float, bool) {
    // TODO: Implement
}

void GJActionManager::stopAllInternalActions() {
    // TODO: Implement
}

void GJActionManager::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJActionManager::create() {
    GJActionManager* ret = new GJActionManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

