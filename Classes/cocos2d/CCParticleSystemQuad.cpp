// ============================================================
// CCParticleSystemQuad.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSystemQuad.h"

namespace cocos2d {

CCParticleSystemQuad::CCParticleSystemQuad() {
    // 0xb031b8
}

CCParticleSystemQuad::CCParticleSystemQuad() {
    // 0xb031b8
}

CCParticleSystemQuad::~CCParticleSystemQuad() {
    // 0xb02ffc
    this->cleanup();
}

CCParticleSystemQuad::~CCParticleSystemQuad() {
    // 0xb02f78
    this->cleanup();
}

CCParticleSystemQuad::~CCParticleSystemQuad() {
    // 0xb02f78
    this->cleanup();
}

void CCParticleSystemQuad::setTexture(cocos2d::CCTexture2D*) {
    // 0xb03a34
    // TODO: Implement
}

void CCParticleSystemQuad::allocMemory() {
    // 0xb03784
    // TODO: Implement
}

void CCParticleSystemQuad::initIndices() {
    // 0xb034f0
    // TODO: Implement
}

void CCParticleSystemQuad::setBatchNode(cocos2d::CCParticleBatchNode*) {
    // 0xb03b24
    // TODO: Implement
}

void CCParticleSystemQuad::setDisplayFrame(cocos2d::CCSpriteFrame*) {
    // 0xb03acc
    // TODO: Implement
}

void CCParticleSystemQuad::updateTexCoords() {
    // 0xb034dc
    // TODO: Implement
}

void CCParticleSystemQuad::setTotalParticles(unsigned int) {
    // 0xb035fc
    // TODO: Implement
}

void CCParticleSystemQuad::setTextureWithRect(cocos2d::CCTexture2D*, cocos2d::CCRect const&) {
    // 0xb039bc
    // TODO: Implement
}

void CCParticleSystemQuad::initTexCoordsWithRect(cocos2d::CCRect const&) {
    // 0xb03320
    // TODO: Implement
}

void CCParticleSystemQuad::initWithTotalParticles(unsigned int, bool) {
    // 0xb038f4
    // TODO: Implement
}

void CCParticleSystemQuad::listenBackToForeground(cocos2d::CCObject*) {
    // 0xb03780
    // TODO: Implement
}

void CCParticleSystemQuad::updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) {
    // 0xb02bcc
    // TODO: Implement
}

void CCParticleSystemQuad::createWithTotalParticles(unsigned int, bool) {
    // 0xb03294
    // TODO: Implement
}

void CCParticleSystemQuad::draw() {
    // 0xb0306c
    // Render/draw logic
    // TODO: Implement rendering
}

void CCParticleSystemQuad::create(char const*, bool) {
    // 0xb03210
    CCParticleSystemQuad* ret = new CCParticleSystemQuad();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCParticleSystemQuad::create() {
    // 0xb03888
    CCParticleSystemQuad* ret = new CCParticleSystemQuad();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCParticleSystemQuad::postStep() {
    // 0xb03020
    // TODO: Implement
}

void CCParticleSystemQuad::setupVBO() {
    // 0xb03560
    // TODO: Implement
}

} // namespace cocos2d
