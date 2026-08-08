
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
    // TODO: Implement
}

void PulseEffectAction::valueForDelta(float, float, float, float) {
    // TODO: Implement
}

void PulseEffectAction::step(float) {
    // TODO: Implement
}

