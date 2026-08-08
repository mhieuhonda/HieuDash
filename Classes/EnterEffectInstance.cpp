
#include "EnterEffectInstance.h"

EnterEffectInstance* EnterEffectInstance::create() {
    EnterEffectInstance* ret = new EnterEffectInstance();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

EnterEffectInstance::~EnterEffectInstance() {
    this->cleanup();
}

EnterEffectInstance::~EnterEffectInstance() {
    this->cleanup();
}

void EnterEffectInstance::animateValue(int, float, float, float, int, float, int) {
    // TODO: Implement
}

void EnterEffectInstance::loadTransitions(EnterEffectObject*, float) {
    // Load from file/storage
    // TODO: Implement loading
}

void EnterEffectInstance::updateTransitions(float, GJBaseGameLayer*) {
    // TODO: Implement
}

void EnterEffectInstance::loadValuesFromObject(EnterEffectObject*) {
    // Load from file/storage
    // TODO: Implement loading
}

void EnterEffectInstance::getValue(int) {
    // TODO: Implement
}

void EnterEffectInstance::setValue(int, float) {
    // TODO: Implement
}

