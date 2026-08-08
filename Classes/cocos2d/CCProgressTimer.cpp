// ============================================================
// CCProgressTimer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCProgressTimer.h"

namespace cocos2d {

CCProgressTimer::CCProgressTimer() {
    // 0xaf8164
}

CCProgressTimer::CCProgressTimer() {
    // 0xaf8164
}

CCProgressTimer::~CCProgressTimer() {
    // 0xaf7ecc
    this->cleanup();
}

CCProgressTimer::~CCProgressTimer() {
    // 0xaf7e78
    this->cleanup();
}

CCProgressTimer::~CCProgressTimer() {
    // 0xaf7e78
    this->cleanup();
}

void CCProgressTimer::setOpacity(unsigned char) {
    // 0xaf859c
    // TODO: Implement
}

void CCProgressTimer::getMidpoint() {
    // 0xaf7ef0
    // TODO: Implement
}

void CCProgressTimer::setMidpoint(cocos2d::CCPoint) {
    // 0xaf7f18
    // TODO: Implement
}

void CCProgressTimer::updateColor() {
    // 0xaf84f8
    // TODO: Implement
}

void CCProgressTimer::updateRadial() {
    // 0xaf8c1c
    // TODO: Implement
}

void CCProgressTimer::setPercentage(float) {
    // 0xaf90e4
    // TODO: Implement
}

void CCProgressTimer::initWithSprite(cocos2d::CCSprite*) {
    // 0xaf9130
    // TODO: Implement
}

void CCProgressTimer::setAnchorPoint(cocos2d::CCPoint) {
    // 0xaf85d8
    // TODO: Implement
}

void CCProgressTimer::updateProgress() {
    // 0xaf90c8
    // TODO: Implement
}

void CCProgressTimer::boundaryTexCoord(char) {
    // 0xaf8b54
    // TODO: Implement
}

void CCProgressTimer::setReverseProgress(bool) {
    // 0xaf82b4
    // TODO: Implement
}

void CCProgressTimer::vertexFromAlphaPoint(cocos2d::CCPoint) {
    // 0xaf840c
    // TODO: Implement
}

void CCProgressTimer::textureCoordFromAlphaPoint(cocos2d::CCPoint) {
    // 0xaf82f8
    // TODO: Implement
}

void CCProgressTimer::draw() {
    // 0xaf7fa8
    // Render/draw logic
    // TODO: Implement rendering
}

void CCProgressTimer::create(cocos2d::CCSprite*) {
    // 0xaf9230
    CCProgressTimer* ret = new CCProgressTimer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCProgressTimer::setType(cocos2d::CCProgressTimerType) {
    // 0xaf8270
    // TODO: Implement
}

void CCProgressTimer::setColor(cocos2d::_ccColor3B const&) {
    // 0xaf8560
    // TODO: Set m_color
}

void CCProgressTimer::setSprite(cocos2d::CCSprite*) {
    // 0xaf81e0
    // TODO: Implement
}

void CCProgressTimer::updateBar() {
    // 0xaf85dc
    // TODO: Implement
}

void CCProgressTimer::getOpacity()) const {
    // 0xaf7e54
}

void CCProgressTimer::getColor()) const {
    // 0xaf7e30
    return m_color;
}

} // namespace cocos2d
