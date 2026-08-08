
#include "GameEffectsManager.h"

GameEffectsManager::~GameEffectsManager() {
    this->cleanup();
}

GameEffectsManager::~GameEffectsManager() {
    this->cleanup();
}

GameEffectsManager::~GameEffectsManager() {
    this->cleanup();
}

void GameEffectsManager::scaleParticle(cocos2d::CCParticleSystemQuad*, float) {
    // TODO: Implement
}

void GameEffectsManager::addParticleEffect(cocos2d::CCParticleSystemQuad*, int) {
    // TODO: Implement
}

void GameEffectsManager::init(PlayLayer*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameEffectsManager::create(PlayLayer*) {
    GameEffectsManager* ret = new GameEffectsManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

