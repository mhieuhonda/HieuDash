
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

bool PulseEffectAction::isFinished() {
    return false;
}

void PulseEffectAction::valueForDelta(float, float, float, float) {
    // Stub - not yet implemented
}

void PulseEffectAction::step(float) {
    // Stub - not yet implemented
}

