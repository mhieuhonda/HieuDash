
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
    // TODO: Implement
}

void SpawnTriggerAction::step(float) {
    // TODO: Implement
}

