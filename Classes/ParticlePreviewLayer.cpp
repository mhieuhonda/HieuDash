// ============================================================
// ParticlePreviewLayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ParticlePreviewLayer.h"

ParticlePreviewLayer::~ParticlePreviewLayer() {
    // 0x9c12a4
    this->cleanup();
}

ParticlePreviewLayer::~ParticlePreviewLayer() {
    // 0x9c1250
    this->cleanup();
}

ParticlePreviewLayer::~ParticlePreviewLayer() {
    // 0x9c1250
    this->cleanup();
}

void ParticlePreviewLayer::preVisitWithClippingRect(cocos2d::CCRect) {
    // 0x9c9860
    // TODO: Implement
}

void ParticlePreviewLayer::draw() {
    // 0x9c0d20
    // Render/draw logic
    // TODO: Implement rendering
}

void ParticlePreviewLayer::init(cocos2d::CCParticleSystemQuad*) {
    // 0x9c5288
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ParticlePreviewLayer::visit() {
    // 0x9c0c14
    // TODO: Implement
}

void ParticlePreviewLayer::create(cocos2d::CCParticleSystemQuad*) {
    // 0x9c5330
    ParticlePreviewLayer* ret = new ParticlePreviewLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ParticlePreviewLayer::postVisit() {
    // 0x9c993c
    // TODO: Implement
}

