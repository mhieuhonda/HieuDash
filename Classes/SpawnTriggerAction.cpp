// ============================================================
// SpawnTriggerAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SpawnTriggerAction.h"

SpawnTriggerAction* SpawnTriggerAction::create() {
    SpawnTriggerAction* ret = new SpawnTriggerAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SpawnTriggerAction::isFinished() {
    // 0x8a39fc
    // TODO: Implement
}

void SpawnTriggerAction::step(float) {
    // 0x8a39c8
    // TODO: Implement
}

