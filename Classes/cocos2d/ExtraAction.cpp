// ============================================================
// ExtraAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ExtraAction.h"

namespace cocos2d {

ExtraAction::~ExtraAction() {
    // 0xabfa68
    this->cleanup();
}

ExtraAction::~ExtraAction() {
    // 0xabfa54
    this->cleanup();
}

ExtraAction::~ExtraAction() {
    // 0xabfa54
    this->cleanup();
}

void ExtraAction::copyWithZone(cocos2d::CCZone*) {
    // 0xabee30
    // TODO: Implement
}

void ExtraAction::step(float) {
    // 0xabe850
    // TODO: Implement
}

void ExtraAction::create() {
    // 0xac0f88
    ExtraAction* ret = new ExtraAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ExtraAction::update(float) {
    // 0xabe84c
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void ExtraAction::reverse() {
    // 0xac0fec
    // TODO: Implement
}

} // namespace cocos2d
