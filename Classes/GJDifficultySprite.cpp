// ============================================================
// GJDifficultySprite.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJDifficultySprite.h"

GJDifficultySprite::~GJDifficultySprite() {
    // 0x8c3ac0
    this->cleanup();
}

GJDifficultySprite::~GJDifficultySprite() {
    // 0x8c3a9c
    this->cleanup();
}

GJDifficultySprite::~GJDifficultySprite() {
    // 0x8c3a9c
    this->cleanup();
}

void GJDifficultySprite::getDifficultyFrame(int, GJDifficultyName) {
    // 0x8d9cb4
    // TODO: Implement
}

void GJDifficultySprite::updateFeatureState(GJFeatureState) {
    // 0x8da124
    // TODO: Implement
}

void GJDifficultySprite::updateDifficultyFrame(int, GJDifficultyName) {
    // 0x8d9f70
    // TODO: Implement
}

void GJDifficultySprite::updateFeatureStateFromLevel(GJGameLevel*) {
    // 0x8da49c
    // TODO: Implement
}

void GJDifficultySprite::init(int, GJDifficultyName) {
    // 0x8d9dc4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJDifficultySprite::create(int, GJDifficultyName) {
    // 0x8d9eb4
    GJDifficultySprite* ret = new GJDifficultySprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

