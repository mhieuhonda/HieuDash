// ============================================================
// EnterEffectInstance.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

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
    // 0x5d63a0
    this->cleanup();
}

EnterEffectInstance::~EnterEffectInstance() {
    // 0x5d63a0
    this->cleanup();
}

void EnterEffectInstance::animateValue(int, float, float, float, int, float, int) {
    // 0xa6c130
    // TODO: Implement
}

void EnterEffectInstance::loadTransitions(EnterEffectObject*, float) {
    // 0xa6c400
    // Load from file/storage
    // TODO: Implement loading
}

void EnterEffectInstance::updateTransitions(float, GJBaseGameLayer*) {
    // 0xa6bd78
    // TODO: Implement
}

void EnterEffectInstance::loadValuesFromObject(EnterEffectObject*) {
    // 0xa6bf8c
    // Load from file/storage
    // TODO: Implement loading
}

void EnterEffectInstance::getValue(int) {
    // 0xa6be88
    // TODO: Implement
}

void EnterEffectInstance::setValue(int, float) {
    // 0xa6bc60
    // TODO: Implement
}

