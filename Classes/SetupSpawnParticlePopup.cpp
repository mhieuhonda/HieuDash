
#include "SetupSpawnParticlePopup.h"

SetupSpawnParticlePopup::~SetupSpawnParticlePopup() {
    this->cleanup();
}

void SetupSpawnParticlePopup::init(EffectGameObject*, cocos2d::CCArray*) {
    bool ret = true;
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SetupSpawnParticlePopup::create(EffectGameObject*, cocos2d::CCArray*) {
    SetupSpawnParticlePopup* ret = new SetupSpawnParticlePopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

