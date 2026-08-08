// ============================================================
// GameEffectsManager.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GameEffectsManager.h"

GameEffectsManager::~GameEffectsManager() {
    // 0x6c6674
    this->cleanup();
}

GameEffectsManager::~GameEffectsManager() {
    // 0x6c6660
    this->cleanup();
}

GameEffectsManager::~GameEffectsManager() {
    // 0x6c6660
    this->cleanup();
}

void GameEffectsManager::scaleParticle(cocos2d::CCParticleSystemQuad*, float) {
    // 0x6c673c
    // TODO: Implement
}

void GameEffectsManager::addParticleEffect(cocos2d::CCParticleSystemQuad*, int) {
    // 0x6c68d4
    // TODO: Implement
}

void GameEffectsManager::init(PlayLayer*) {
    // 0x6c6698
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameEffectsManager::create(PlayLayer*) {
    // 0x6c66a4
    GameEffectsManager* ret = new GameEffectsManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

