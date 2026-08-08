// ============================================================
// PulseEffectAction.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "PulseEffectAction.h"

PulseEffectAction* PulseEffectAction::create() {
    PulseEffectAction* ret = new PulseEffectAction();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void PulseEffectAction::isFinished() {
    // 0x8a3904
    // TODO: Implement
}

void PulseEffectAction::valueForDelta(float, float, float, float) {
    // 0x8a3930
    // TODO: Implement
}

void PulseEffectAction::step(float) {
    // 0x8a397c
    // TODO: Implement
}

