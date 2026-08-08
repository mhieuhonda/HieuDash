// ============================================================
// CCLayerMultiplex.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLayerMultiplex.h"

namespace cocos2d {

CCLayerMultiplex::CCLayerMultiplex() {
    // 0xaebeb4
}

CCLayerMultiplex::CCLayerMultiplex() {
    // 0xaebeb4
}

CCLayerMultiplex::~CCLayerMultiplex() {
    // 0xaeb6e4
    this->cleanup();
}

CCLayerMultiplex::~CCLayerMultiplex() {
    // 0xaeb678
    this->cleanup();
}

CCLayerMultiplex::~CCLayerMultiplex() {
    // 0xaeb678
    this->cleanup();
}

void CCLayerMultiplex::initWithArray(cocos2d::CCArray*) {
    // 0xaec1dc
    // TODO: Implement
}

void CCLayerMultiplex::initWithLayers(cocos2d::CCLayer*, std::__va_list) {
    // 0xaebf8c
    // TODO: Implement
}

void CCLayerMultiplex::createWithArray(cocos2d::CCArray*) {
    // 0xaec260
    // TODO: Implement
}

void CCLayerMultiplex::createWithLayer(cocos2d::CCLayer*) {
    // 0xaec1d4
    // TODO: Implement
}

void CCLayerMultiplex::switchToAndReleaseMe(unsigned int) {
    // 0xaec348
    // TODO: Implement
}

void CCLayerMultiplex::create(cocos2d::CCLayer*, ...) {
    // 0xaec0c8
    CCLayerMultiplex* ret = new CCLayerMultiplex();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayerMultiplex::create() {
    // 0xaebf14
    CCLayerMultiplex* ret = new CCLayerMultiplex();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayerMultiplex::addLayer(cocos2d::CCLayer*) {
    // 0xaebf84
    // TODO: Implement
}

void CCLayerMultiplex::switchTo(unsigned int) {
    // 0xaec2d0
    // TODO: Implement
}

} // namespace cocos2d
