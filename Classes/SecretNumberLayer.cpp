
#include "SecretNumberLayer.h"

SecretNumberLayer::~SecretNumberLayer() {
    this->cleanup();
}

SecretNumberLayer::~SecretNumberLayer() {
    this->cleanup();
}

SecretNumberLayer::~SecretNumberLayer() {
    this->cleanup();
}

void SecretNumberLayer::playNumberEffect(int) {
    // TODO: Implement
}

void SecretNumberLayer::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SecretNumberLayer::create() {
    SecretNumberLayer* ret = new SecretNumberLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

