
#include "SetupBGSpeedTrigger.h"

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    this->cleanup();
}

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    this->cleanup();
}

SetupBGSpeedTrigger::~SetupBGSpeedTrigger() {
    this->cleanup();
}

void SetupBGSpeedTrigger::init(EffectGameObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupBGSpeedTrigger::create(EffectGameObject*, cocos2d::CCArray*, int) {
    SetupBGSpeedTrigger* ret = new SetupBGSpeedTrigger();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

