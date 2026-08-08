// ============================================================
// CCSpriteBatchNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCSpriteBatchNode.h"

namespace cocos2d {

CCSpriteBatchNode::CCSpriteBatchNode() {
    // 0xb171c8
}

CCSpriteBatchNode::CCSpriteBatchNode() {
    // 0xb171c8
}

CCSpriteBatchNode::~CCSpriteBatchNode() {
    // 0xb17010
    this->cleanup();
}

CCSpriteBatchNode::~CCSpriteBatchNode() {
    // 0xb16fc0
    this->cleanup();
}

CCSpriteBatchNode::~CCSpriteBatchNode() {
    // 0xb16fc0
    this->cleanup();
}

void CCSpriteBatchNode::getTexture() {
    // 0xb16f94
    // TODO: Implement
}

void CCSpriteBatchNode::setTexture(cocos2d::CCTexture2D*) {
    // 0xb183d4
    // TODO: Implement
}

void CCSpriteBatchNode::appendChild(cocos2d::CCSprite*) {
    // 0xb17e2c
    // TODO: Implement
}

void CCSpriteBatchNode::insertChild(cocos2d::CCSprite*, unsigned int) {
    // 0xb17b24
    // TODO: Implement
}

void CCSpriteBatchNode::removeChild(cocos2d::CCNode*, bool) {
    // 0xb187c4
    // TODO: Implement
}

void CCSpriteBatchNode::getBlendFunc() {
    // 0xb16f84
    // TODO: Implement
}

void CCSpriteBatchNode::initWithFile(char const*, unsigned int) {
    // 0xb18344
    // TODO: Implement
}

void CCSpriteBatchNode::reorderBatch(bool) {
    // 0xb176c0
    // TODO: Implement
}

void CCSpriteBatchNode::reorderChild(cocos2d::CCNode*, int) {
    // 0xb18754
    // TODO: Implement
}

void CCSpriteBatchNode::setBlendFunc(cocos2d::_ccBlendFunc) {
    // 0xb16f74
    // TODO: Implement
}

void CCSpriteBatchNode::initWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb181d0
    // TODO: Implement
}

void CCSpriteBatchNode::sortAllChildren() {
    // 0xb17564
    // TODO: Implement
}

void CCSpriteBatchNode::updateBlendFunc() {
    // 0xb18180
    // TODO: Implement
}

void CCSpriteBatchNode::getAtlasCapacity() {
    // 0xb17770
    // TODO: Implement
}

void CCSpriteBatchNode::updateAtlasIndex(cocos2d::CCSprite*, int*) {
    // 0xb1734c
    // TODO: Implement
}

void CCSpriteBatchNode::createWithTexture(cocos2d::CCTexture2D*, unsigned int) {
    // 0xb182b4
    // TODO: Implement
}

void CCSpriteBatchNode::atlasIndexForChild(cocos2d::CCSprite*, int) {
    // 0xb179d0
    // TODO: Implement
}

void CCSpriteBatchNode::removeChildAtIndex(unsigned int, bool) {
    // 0xb1720c
    // TODO: Implement
}

void CCSpriteBatchNode::rebuildIndexInOrder(cocos2d::CCSprite*, unsigned int) {
    // 0xb17794
    // TODO: Implement
}

void CCSpriteBatchNode::addSpriteWithoutQuad(cocos2d::CCSprite*, unsigned int, int) {
    // 0xb18690
    // TODO: Implement
}

void CCSpriteBatchNode::getUsedAtlasCapacity() {
    // 0xb17764
    // TODO: Implement
}

void CCSpriteBatchNode::insertQuadFromSprite(cocos2d::CCSprite*, unsigned int) {
    // 0xb18410
    // TODO: Implement
}

void CCSpriteBatchNode::updateQuadFromSprite(cocos2d::CCSprite*, unsigned int) {
    // 0xb1854c
    // TODO: Implement
}

void CCSpriteBatchNode::increaseAtlasCapacity(unsigned int) {
    // 0xb176c8
    // TODO: Implement
}

void CCSpriteBatchNode::increaseAtlasCapacity() {
    // 0xb17718
    // TODO: Implement
}

void CCSpriteBatchNode::manualSortAllChildren() {
    // 0xb17254
    // TODO: Implement
}

void CCSpriteBatchNode::removeSpriteFromAtlas(cocos2d::CCSprite*) {
    // 0xb18008
    // TODO: Implement
}

void CCSpriteBatchNode::lowestAtlasIndexInChild(cocos2d::CCSprite*) {
    // 0xb1797c
    // TODO: Implement
}

void CCSpriteBatchNode::highestAtlasIndexInChild(cocos2d::CCSprite*) {
    // 0xb1792c
    // TODO: Implement
}

void CCSpriteBatchNode::removeAllChildrenWithCleanup(bool) {
    // 0xb18814
    // TODO: Implement
}

void CCSpriteBatchNode::draw() {
    // 0xb17034
    // Render/draw logic
    // TODO: Implement rendering
}

void CCSpriteBatchNode::init() {
    // 0xb18304
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCSpriteBatchNode::swap(int, int) {
    // 0xb17260
    // TODO: Implement
}

void CCSpriteBatchNode::visit() {
    // 0xb1711c
    // TODO: Implement
}

void CCSpriteBatchNode::create(char const*, unsigned int) {
    // 0xb18384
    CCSpriteBatchNode* ret = new CCSpriteBatchNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCSpriteBatchNode::addChild(cocos2d::CCNode*) {
    // 0xb1874c
    // TODO: Implement
}

void CCSpriteBatchNode::addChild(cocos2d::CCNode*, int) {
    // 0xb18750
    // TODO: Implement
}

void CCSpriteBatchNode::addChild(cocos2d::CCNode*, int, int) {
    // 0xb18610
    // TODO: Implement
}

} // namespace cocos2d
