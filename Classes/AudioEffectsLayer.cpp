// ============================================================
// AudioEffectsLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "AudioEffectsLayer.h"

AudioEffectsLayer::~AudioEffectsLayer() {
    // 0x78ec20
    this->cleanup();
}

AudioEffectsLayer::~AudioEffectsLayer() {
    // 0x78eb98
    this->cleanup();
}

AudioEffectsLayer::~AudioEffectsLayer() {
    // 0x78eb98
    this->cleanup();
}

void AudioEffectsLayer::getBGSquare() {
    // 0x78f66c
    // TODO: Implement
}

void AudioEffectsLayer::triggerEffect(float) {
    // 0x78f460
    // TODO: Implement
}

void AudioEffectsLayer::resetAudioVars() {
    // 0x78ee70
    // TODO: Implement
}

void AudioEffectsLayer::updateTweenAction(float, char const*) {
    // 0x78ec90
    // TODO: Implement
}

void AudioEffectsLayer::draw() {
    // 0x78eb94
    // Render/draw logic
    // TODO: Implement rendering
}

void AudioEffectsLayer::init(std::string) {
    // 0x78eebc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void AudioEffectsLayer::create(std::string) {
    // 0x78f2b4
    AudioEffectsLayer* ret = new AudioEffectsLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void AudioEffectsLayer::audioStep(float) {
    // 0x78f5b8
    // TODO: Implement
}

void AudioEffectsLayer::goingDown() {
    // 0x78eb88
    // TODO: Implement
}

