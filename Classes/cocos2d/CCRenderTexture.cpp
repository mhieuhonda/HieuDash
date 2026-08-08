// ============================================================
// CCRenderTexture.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCRenderTexture.h"

namespace cocos2d {

CCRenderTexture::CCRenderTexture() {
    // 0xaf94e8
}

CCRenderTexture::CCRenderTexture() {
    // 0xaf94e8
}

CCRenderTexture::~CCRenderTexture() {
    // 0xaf9354
    this->cleanup();
}

CCRenderTexture::~CCRenderTexture() {
    // 0xaf92a8
    this->cleanup();
}

CCRenderTexture::~CCRenderTexture() {
    // 0xaf92a8
    this->cleanup();
}

void CCRenderTexture::clearDepth(float) {
    // 0xafa194
    // TODO: Implement
}

void CCRenderTexture::newCCImage(bool) {
    // 0xafa26c
    // TODO: Implement
}

void CCRenderTexture::saveToFile(char const*) {
    // 0xafa478
    // Save to file/storage
    // TODO: Implement saving
}

void CCRenderTexture::saveToFile(char const*, cocos2d::eImageFormat) {
    // 0xafa4dc
    // Save to file/storage
    // TODO: Implement saving
}

void CCRenderTexture::setAutoDraw(bool) {
    // 0xaf9608
    // TODO: Implement
}

void CCRenderTexture::clearStencil(int) {
    // 0xafa208
    // TODO: Implement
}

void CCRenderTexture::setClearColor(cocos2d::_ccColor4F const&) {
    // 0xaf95cc
    // TODO: Set m_clearColor
}

void CCRenderTexture::setClearDepth(float) {
    // 0xaf95e4
    // TODO: Implement
}

void CCRenderTexture::setClearFlags(unsigned int) {
    // 0xaf95bc
    // TODO: Implement
}

void CCRenderTexture::beginWithClear(float, float, float, float) {
    // 0xaf9f5c
    // TODO: Implement
}

void CCRenderTexture::beginWithClear(float, float, float, float, float) {
    // 0xaf9f6c
    // TODO: Implement
}

void CCRenderTexture::beginWithClear(float, float, float, float, float, int) {
    // 0xaf9f78
    // TODO: Implement
}

void CCRenderTexture::beginWithClear(float, float, float, float, float, int, unsigned int) {
    // 0xaf9e04
    // TODO: Implement
}

void CCRenderTexture::setClearStencil(float) {
    // 0xaf95f4
    // TODO: Implement
}

void CCRenderTexture::listenToBackground(cocos2d::CCObject*) {
    // 0xafa3e0
    // TODO: Implement
}

void CCRenderTexture::listenToForeground(cocos2d::CCObject*) {
    // 0xaf9378
    // TODO: Implement
}

void CCRenderTexture::updateInternalScale(float, float) {
    // 0xaf9b70
    // TODO: Implement
}

void CCRenderTexture::initWithWidthAndHeight(int, int, cocos2d::CCTexture2DPixelFormat) {
    // 0xaf9adc
    // TODO: Implement
}

void CCRenderTexture::initWithWidthAndHeight(int, int, cocos2d::CCTexture2DPixelFormat, unsigned int) {
    // 0xaf9610
    // TODO: Implement
}

void CCRenderTexture::end() {
    // 0xaf9f80
    // TODO: Implement
}

void CCRenderTexture::draw() {
    // 0xaf9fcc
    // Render/draw logic
    // TODO: Implement rendering
}

void CCRenderTexture::begin() {
    // 0xaf9bc8
    // TODO: Implement
}

void CCRenderTexture::clear(float, float, float, float) {
    // 0xafa170
    // TODO: Implement
}

void CCRenderTexture::visit() {
    // 0xaf9448
    // TODO: Implement
}

void CCRenderTexture::create(int, int) {
    // 0xaf9a5c
    CCRenderTexture* ret = new CCRenderTexture();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRenderTexture::create(int, int, cocos2d::CCTexture2DPixelFormat) {
    // 0xaf9ae4
    CCRenderTexture* ret = new CCRenderTexture();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRenderTexture::create(int, int, cocos2d::CCTexture2DPixelFormat, unsigned int) {
    // 0xaf99c8
    CCRenderTexture* ret = new CCRenderTexture();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCRenderTexture::getSprite() {
    // 0xaf92a0
    // TODO: Implement
}

void CCRenderTexture::setSprite(cocos2d::CCSprite*) {
    // 0xaf9400
    // TODO: Implement
}

void CCRenderTexture::isAutoDraw()) const {
    // 0xaf9600
    // Render/draw logic
    // TODO: Implement rendering
}

void CCRenderTexture::getClearColor()) const {
    // 0xaf95c4
    return m_clearColor;
}

void CCRenderTexture::getClearDepth()) const {
    // 0xaf95dc
}

void CCRenderTexture::getClearFlags()) const {
    // 0xaf95b4
}

void CCRenderTexture::getClearStencil()) const {
    // 0xaf95ec
}

} // namespace cocos2d
