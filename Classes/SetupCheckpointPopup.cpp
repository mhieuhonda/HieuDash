
#include "SetupCheckpointPopup.h"

SetupCheckpointPopup::~SetupCheckpointPopup() {
    this->cleanup();
}

void SetupCheckpointPopup::init(CheckpointGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupCheckpointPopup::create(CheckpointGameObject*, cocos2d::CCArray*) {
    SetupCheckpointPopup* ret = new SetupCheckpointPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

