// ============================================================
// CCParticleBatchNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleBatchNode.h"

namespace cocos2d {

CCParticleBatchNode::CCParticleBatchNode() {
    : m_currentIndex(0)
    // 0xb01fcc
}

CCParticleBatchNode::CCParticleBatchNode() {
    : m_currentIndex(0)
    // 0xb01fcc
}

CCParticleBatchNode::~CCParticleBatchNode() {
    // 0xb01e14
    this->cleanup();
}

CCParticleBatchNode::~CCParticleBatchNode() {
    // 0xb01dd0
    this->cleanup();
}

CCParticleBatchNode::~CCParticleBatchNode() {
    // 0xb01dd0
    this->cleanup();
}

void CCParticleBatchNode::getTexture() {
    // 0xb01d84
    // TODO: Implement
}

void CCParticleBatchNode::setTexture(cocos2d::CCTexture2D*) {
    // 0xb01e38
    // TODO: Implement
}

void CCParticleBatchNode::insertChild(cocos2d::CCParticleSystem*, unsigned int) {
    // 0xb0272c
    // TODO: Implement
}

void CCParticleBatchNode::removeChild(cocos2d::CCNode*, bool) {
    // 0xb02a5c
    // TODO: Implement
}

void CCParticleBatchNode::getBlendFunc() {
    // 0xb01dc0
    // TODO: Implement
}

void CCParticleBatchNode::initWithFile(char const*, unsigned int) {
    // 0xb02128
    // TODO: Implement
}

void CCParticleBatchNode::reorderChild(cocos2d::CCNode*, int) {
    // 0xb025a8
    // TODO: Implement
}

void CCParticleBatchNode::setBlendFunc(cocos2d::_ccBlendFunc) {
    // 0xb01db0
    // TODO: Implement
}

void CCParticleBatchNode::addChildHelper(cocos2d::CCParticleSystem*, int, int) {
    // 0xb02378
    // TODO: Implement
}

void CCParticleBatchNode::disableParticle(unsigned int) {
    // 0xb024c4
    // TODO: Implement
}

void CCParticleBatchNode::getCurrentIndex(unsigned int*, unsigned int*, cocos2d::CCNode*, int) {
    // 0xb021e0
    // TODO: Implement
}

void CCParticleBatchNode::initWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb02008
    // TODO: Implement
}

void CCParticleBatchNode::updateBlendFunc() {
    // 0xb02a08
    // TODO: Implement
}

void CCParticleBatchNode::createWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb020b0
    // TODO: Implement
}

void CCParticleBatchNode::removeChildAtIndex(unsigned int, bool) {
    // 0xb02474
    // TODO: Implement
}

void CCParticleBatchNode::updateAllAtlasIndexes() {
    // 0xb02524
    // TODO: Implement
}

void CCParticleBatchNode::increaseAtlasCapacityTo(unsigned int) {
    // 0xb024bc
    // TODO: Implement
}

void CCParticleBatchNode::removeAllChildrenWithCleanup(bool) {
    // 0xb02b34
    // TODO: Implement
}

void CCParticleBatchNode::searchNewPositionInChildrenForZ(int) {
    // 0xb02300
    // TODO: Implement
}

void CCParticleBatchNode::draw() {
    // 0xb01eb8
    // Render/draw logic
    // TODO: Implement rendering
}

void CCParticleBatchNode::visit() {
    // 0xb01f48
    // TODO: Implement
}

void CCParticleBatchNode::create(char const*, unsigned int) {
    // 0xb02168
    CCParticleBatchNode* ret = new CCParticleBatchNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCParticleBatchNode::addChild(cocos2d::CCNode*) {
    // 0xb02a54
    // TODO: Implement
}

void CCParticleBatchNode::addChild(cocos2d::CCNode*, int) {
    // 0xb02a58
    // TODO: Implement
}

void CCParticleBatchNode::addChild(cocos2d::CCNode*, int, int) {
    // 0xb028b0
    // TODO: Implement
}

} // namespace cocos2d
