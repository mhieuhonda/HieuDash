
#include "EffectManagerState.h"

EffectManagerState::~EffectManagerState() {
    this->cleanup();
}

void EffectManagerState::operator=(EffectManagerState&&) {
    // Stub - not yet implemented
}

