// ============================================================
// CCAtlasNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCAtlasNode.h"

namespace cocos2d {

CCAtlasNode::CCAtlasNode() {
    : m_ignoreContentScaleFactor(0.0f)
    // 0xaca204
}

CCAtlasNode::CCAtlasNode() {
    : m_ignoreContentScaleFactor(0.0f)
    // 0xaca204
}

CCAtlasNode::~CCAtlasNode() {
    // 0xaca0a0
    this->cleanup();
}

CCAtlasNode::~CCAtlasNode() {
    // 0xaca054
    this->cleanup();
}

CCAtlasNode::~CCAtlasNode() {
    // 0xaca054
    this->cleanup();
}

void CCAtlasNode::getTexture() {
    // 0xaca010
    // TODO: Implement
}

void CCAtlasNode::setOpacity(unsigned char) {
    // 0xaca6f4
    // TODO: Implement
}

void CCAtlasNode::setTexture(cocos2d::CCTexture2D*) {
    // 0xaca5b0
    // TODO: Implement
}

void CCAtlasNode::getBlendFunc() {
    // 0xac9fe8
    // TODO: Implement
}

void CCAtlasNode::setBlendFunc(cocos2d::_ccBlendFunc) {
    // 0xac9ffc
    // TODO: Implement
}

void CCAtlasNode::getQuadsToDraw() {
    // 0xaca044
    // Render/draw logic
    // TODO: Implement rendering
}

void CCAtlasNode::setQuadsToDraw(unsigned int) {
    // 0xaca04c
    // TODO: Implement
}

void CCAtlasNode::getTextureAtlas() {
    // 0xaca03c
    // TODO: Implement
}

void CCAtlasNode::initWithTexture(cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int) {
    // 0xaca3c4
    // TODO: Implement
}

void CCAtlasNode::setTextureAtlas(cocos2d::CCTextureAtlas*) {
    // 0xaca1c8
    // TODO: Implement
}

void CCAtlasNode::updateBlendFunc() {
    // 0xaca378
    // TODO: Implement
}

void CCAtlasNode::initWithTileFile(char const*, unsigned int, unsigned int, unsigned int) {
    // 0xaca4cc
    // TODO: Implement
}

void CCAtlasNode::calculateMaxItems() {
    // 0xaca268
    // TODO: Implement
}

void CCAtlasNode::updateAtlasValues() {
    // 0xac9f48
    // TODO: Implement
}

void CCAtlasNode::isOpacityModifyRGB() {
    // 0xac9fd8
    // TODO: Implement
}

void CCAtlasNode::setOpacityModifyRGB(bool) {
    // 0xac9f4c
    // TODO: Implement
}

void CCAtlasNode::updateOpacityModifyRGB() {
    // 0xaca338
    // TODO: Implement
}

void CCAtlasNode::setIgnoreContentScaleFactor(bool) {
    // 0xaca370
    // TODO: Set m_ignoreContentScaleFactor
}

void CCAtlasNode::draw() {
    // 0xaca0c4
    // Render/draw logic
    // TODO: Implement rendering
}

void CCAtlasNode::create(char const*, unsigned int, unsigned int, unsigned int) {
    // 0xaca51c
    CCAtlasNode* ret = new CCAtlasNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCAtlasNode::getColor() {
    // 0xaca5f4
    // TODO: Implement
}

void CCAtlasNode::setColor(cocos2d::_ccColor3B const&) {
    // 0xaca610
    // TODO: Set m_color
}

} // namespace cocos2d
