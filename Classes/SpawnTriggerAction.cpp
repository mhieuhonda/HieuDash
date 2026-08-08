
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

bool SpawnTriggerAction::isFinished() {
    return false;
}

void SpawnTriggerAction::step(float) {
    // Stub - not yet implemented
}

