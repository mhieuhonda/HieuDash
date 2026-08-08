// ============================================================
// CCTextureAtlas.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTextureAtlas.h"

namespace cocos2d {

CCTextureAtlas::CCTextureAtlas() {
    // 0xb32e7c
}

CCTextureAtlas::CCTextureAtlas() {
    // 0xb32e7c
}

CCTextureAtlas::~CCTextureAtlas() {
    // 0xb32e1c
    this->cleanup();
}

CCTextureAtlas::~CCTextureAtlas() {
    // 0xb32da0
    this->cleanup();
}

CCTextureAtlas::~CCTextureAtlas() {
    // 0xb32da0
    this->cleanup();
}

void CCTextureAtlas::getTexture() {
    // 0xb32d7c
    // TODO: Implement
}

void CCTextureAtlas::insertQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int) {
    // 0xb33310
    // TODO: Implement
}

void CCTextureAtlas::mapBuffers() {
    // 0xb32f50
    // TODO: Implement
}

void CCTextureAtlas::setTexture(cocos2d::CCTexture2D*) {
    // 0xb32e40
    // TODO: Implement
}

void CCTextureAtlas::updateQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int) {
    // 0xb332ac
    // TODO: Implement
}

void CCTextureAtlas::description() {
    // 0xb32ec0
    // TODO: Implement
}

void CCTextureAtlas::getCapacity() {
    // 0xb32d74
    // TODO: Implement
}

void CCTextureAtlas::insertQuads(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int, unsigned int) {
    // 0xb333e0
    // TODO: Implement
}

void CCTextureAtlas::initWithFile(char const*, unsigned int) {
    // 0xb331b8
    // TODO: Implement
}

void CCTextureAtlas::setupIndices() {
    // 0xb32ee0
    // TODO: Implement
}

void CCTextureAtlas::getTotalQuads() {
    // 0xb32d6c
    // TODO: Implement
}

void CCTextureAtlas::removeAllQuads() {
    // 0xb336d0
    // TODO: Implement
}

void CCTextureAtlas::resizeCapacity(unsigned int) {
    // 0xb336d8
    // TODO: Implement
}

void CCTextureAtlas::initWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb33004
    // TODO: Implement
}

void CCTextureAtlas::createWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb33140
    // TODO: Implement
}

void CCTextureAtlas::drawNumberOfQuads(unsigned int) {
    // 0xb33c4c
    // Render/draw logic
    // TODO: Implement rendering
}

void CCTextureAtlas::drawNumberOfQuads(unsigned int, unsigned int) {
    // 0xb33af0
    // Render/draw logic
    // TODO: Implement rendering
}

void CCTextureAtlas::removeQuadAtIndex(unsigned int) {
    // 0xb335f0
    // TODO: Implement
}

void CCTextureAtlas::moveQuadsFromIndex(unsigned int, unsigned int) {
    // 0xb339f4
    // TODO: Implement
}

void CCTextureAtlas::moveQuadsFromIndex(unsigned int, unsigned int, unsigned int) {
    // 0xb338e4
    // TODO: Implement
}

void CCTextureAtlas::removeQuadsAtIndex(unsigned int, unsigned int) {
    // 0xb33664
    // TODO: Implement
}

void CCTextureAtlas::insertQuadFromIndex(unsigned int, unsigned int) {
    // 0xb334f4
    // TODO: Implement
}

void CCTextureAtlas::increaseTotalQuadsWith(unsigned int) {
    // 0xb338c4
    // TODO: Implement
}

void CCTextureAtlas::listenBackToForeground(cocos2d::CCObject*) {
    // 0xb33284
    // TODO: Implement
}

void CCTextureAtlas::fillWithEmptyQuadsFromIndex(unsigned int, unsigned int) {
    // 0xb33a2c
    // TODO: Implement
}

void CCTextureAtlas::create(char const*, unsigned int) {
    // 0xb3320c
    CCTextureAtlas* ret = new CCTextureAtlas();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTextureAtlas::getQuads() {
    // 0xb32d84
    // TODO: Implement
}

void CCTextureAtlas::setQuads(cocos2d::_ccV3F_C4B_T2F_Quad*) {
    // 0xb32d98
    // TODO: Implement
}

void CCTextureAtlas::setupVBO() {
    // 0xb32fd8
    // TODO: Implement
}

void CCTextureAtlas::drawQuads() {
    // 0xb33c40
    // Render/draw logic
    // TODO: Implement rendering
}

} // namespace cocos2d
