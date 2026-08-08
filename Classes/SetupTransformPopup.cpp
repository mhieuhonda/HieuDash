
#include "SetupTransformPopup.h"

SetupTransformPopup::~SetupTransformPopup() {
    this->cleanup();
}

void SetupTransformPopup::init(TransformTriggerGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupTransformPopup::create(TransformTriggerGameObject*, cocos2d::CCArray*) {
    SetupTransformPopup* ret = new SetupTransformPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

