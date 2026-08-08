// ============================================================
// SecretNumberLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SecretNumberLayer.h"

SecretNumberLayer::~SecretNumberLayer() {
    // 0x93a71c
    this->cleanup();
}

SecretNumberLayer::~SecretNumberLayer() {
    // 0x93a638
    this->cleanup();
}

SecretNumberLayer::~SecretNumberLayer() {
    // 0x93a638
    this->cleanup();
}

void SecretNumberLayer::playNumberEffect(int) {
    // 0x9415cc
    // TODO: Implement
}

void SecretNumberLayer::init() {
    // 0x943094
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SecretNumberLayer::create() {
    // 0x943098
    SecretNumberLayer* ret = new SecretNumberLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

