
#include "GJDifficultySprite.h"

GJDifficultySprite::~GJDifficultySprite() {
    this->cleanup();
}

GJDifficultySprite::~GJDifficultySprite() {
    this->cleanup();
}

GJDifficultySprite::~GJDifficultySprite() {
    this->cleanup();
}

void GJDifficultySprite::getDifficultyFrame(int, GJDifficultyName) {
    // TODO: Implement
}

void GJDifficultySprite::updateFeatureState(GJFeatureState) {
    // TODO: Implement
}

void GJDifficultySprite::updateDifficultyFrame(int, GJDifficultyName) {
    // TODO: Implement
}

void GJDifficultySprite::updateFeatureStateFromLevel(GJGameLevel*) {
    // TODO: Implement
}

void GJDifficultySprite::init(int, GJDifficultyName) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJDifficultySprite::create(int, GJDifficultyName) {
    GJDifficultySprite* ret = new GJDifficultySprite();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

