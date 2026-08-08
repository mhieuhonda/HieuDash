// ============================================================
// CCLayerGradient.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCLayerGradient.h"

namespace cocos2d {

CCLayerGradient::~CCLayerGradient() {
    // 0xaeb604
    this->cleanup();
}

CCLayerGradient::~CCLayerGradient() {
    // 0xaeb5b0
    this->cleanup();
}

CCLayerGradient::~CCLayerGradient() {
    // 0xaeb5b0
    this->cleanup();
}

void CCLayerGradient::getEndColor() {
    // 0xae9eac
    // TODO: Implement
}

void CCLayerGradient::setEndColor(cocos2d::_ccColor3B const&) {
    // 0xae9e7c
    // TODO: Set m_endColor
}

void CCLayerGradient::updateColor() {
    // 0xaea4ac
    // TODO: Implement
}

void CCLayerGradient::getEndOpacity() {
    // 0xae9efc
    // TODO: Implement
}

void CCLayerGradient::getStartColor() {
    // 0xae9e58
    // TODO: Implement
}

void CCLayerGradient::initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&) {
    // 0xae9f34
    // TODO: Implement
}

void CCLayerGradient::initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&) {
    // 0xaea3c0
    // TODO: Implement
}

void CCLayerGradient::setEndOpacity(unsigned char) {
    // 0xae9edc
    // TODO: Implement
}

void CCLayerGradient::setStartColor(cocos2d::_ccColor3B const&) {
    // 0xae9e60
    // TODO: Set m_startColor
}

void CCLayerGradient::getStartOpacity() {
    // 0xae9ed4
    // TODO: Implement
}

void CCLayerGradient::setStartOpacity(unsigned char) {
    // 0xae9eb4
    // TODO: Implement
}

void CCLayerGradient::isCompressedInterpolation() {
    // 0xae9f0c
    // TODO: Implement
}

void CCLayerGradient::setCompressedInterpolation(bool) {
    // 0xae9f14
    // TODO: Implement
}

void CCLayerGradient::init() {
    // 0xae9de4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCLayerGradient::visit() {
    // 0xaea6f0
    // TODO: Implement
}

void CCLayerGradient::create(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&) {
    // 0xaebb98
    CCLayerGradient* ret = new CCLayerGradient();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayerGradient::create(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&) {
    // 0xaebc80
    CCLayerGradient* ret = new CCLayerGradient();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayerGradient::create() {
    // 0xaebd70
    CCLayerGradient* ret = new CCLayerGradient();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCLayerGradient::getVector() {
    // 0xae9f04
    // TODO: Implement
}

void CCLayerGradient::setValues(cocos2d::_ccColor3B const&, unsigned char, cocos2d::_ccColor3B const&, unsigned char, cocos2d::CCPoint const&) {
    // 0xaebe40
    // TODO: Implement
}

void CCLayerGradient::setVector(cocos2d::CCPoint const&) {
    // 0xaea478
    // TODO: Implement
}

} // namespace cocos2d
