
#include "SetupAreaTransformTriggerPopup.h"

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    this->cleanup();
}

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    this->cleanup();
}

SetupAreaTransformTriggerPopup::~SetupAreaTransformTriggerPopup() {
    this->cleanup();
}

void SetupAreaTransformTriggerPopup::init(EnterEffectObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupAreaTransformTriggerPopup::create(EnterEffectObject*, cocos2d::CCArray*) {
    SetupAreaTransformTriggerPopup* ret = new SetupAreaTransformTriggerPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

