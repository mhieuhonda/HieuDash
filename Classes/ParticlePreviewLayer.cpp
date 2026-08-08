
#include "ParticlePreviewLayer.h"

ParticlePreviewLayer::~ParticlePreviewLayer() {
    this->cleanup();
}

ParticlePreviewLayer::~ParticlePreviewLayer() {
    this->cleanup();
}

ParticlePreviewLayer::~ParticlePreviewLayer() {
    this->cleanup();
}

void ParticlePreviewLayer::preVisitWithClippingRect(cocos2d::CCRect) {
    // TODO: Implement
}

void ParticlePreviewLayer::draw() {
    // Render/draw logic
    // TODO: Implement rendering
}

void ParticlePreviewLayer::init(cocos2d::CCParticleSystemQuad*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ParticlePreviewLayer::visit() {
    // TODO: Implement
}

void ParticlePreviewLayer::create(cocos2d::CCParticleSystemQuad*) {
    ParticlePreviewLayer* ret = new ParticlePreviewLayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ParticlePreviewLayer::postVisit() {
    // TODO: Implement
}

