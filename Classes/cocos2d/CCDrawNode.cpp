// ============================================================
// CCDrawNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCDrawNode.h"

namespace cocos2d {

CCDrawNode::CCDrawNode() {
    // 0xad8f74
}

CCDrawNode::CCDrawNode() {
    // 0xad8f74
}

CCDrawNode::~CCDrawNode() {
    // 0xad8f50
    this->cleanup();
}

CCDrawNode::~CCDrawNode() {
    // 0xad8ee8
    this->cleanup();
}

CCDrawNode::~CCDrawNode() {
    // 0xad8ee8
    this->cleanup();
}

void CCDrawNode::drawCircle(cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, unsigned int) {
    // 0xadafa0
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment) {
    // 0xada5c8
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) {
    // 0xada5bc
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::setBlendFunc(cocos2d::_ccBlendFunc const&) {
    // 0xadb148
    // TODO: Implement
}

void CCDrawNode::drawSegmentEx(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, bool, bool) {
    // 0xad9be8
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::enableDrawArea(cocos2d::CCRect&) {
    // 0xad9894
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::ensureCapacity(unsigned int) {
    // 0xad904c
    // TODO: Implement
}

void CCDrawNode::disableDrawArea() {
    // 0xad98f4
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawCubicBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float) {
    // 0xad9c7c
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::is_circle_on_screen(cocos2d::CCRect const&, cocos2d::CCPoint const&, float) {
    // 0xad98fc
    // TODO: Implement
}

void CCDrawNode::is_segment_on_screen(cocos2d::CCRect const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&) {
    // 0xad9b18
    // TODO: Implement
}

void CCDrawNode::drawCubicBezierDashed(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float, unsigned int, unsigned int) {
    // 0xada198
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawArchLikeHalfCircle(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, unsigned int, cocos2d::_ccColor4F const&, float) {
    // 0xada388
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawPreciseCubicBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float) {
    // 0xad9ea0
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::listenBackToForeground(cocos2d::CCObject*) {
    // 0xad8ecc
    // TODO: Implement
}

void CCDrawNode::draw() {
    // 0xad9828
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::init() {
    // 0xad90a0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCDrawNode::clear() {
    // 0xadb130
    // TODO: Implement
}

void CCDrawNode::create() {
    // 0xad8fdc
    CCDrawNode* ret = new CCDrawNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCDrawNode::render() {
    // 0xad975c
    // TODO: Implement
}

void CCDrawNode::drawDot(cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&) {
    // 0xad9950
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawRect(cocos2d::CCRect const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment) {
    // 0xadae28
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawRect(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment) {
    // 0xadacf0
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::drawLines(cocos2d::CCPoint*, unsigned int, float, cocos2d::_ccColor4F const&) {
    // 0xadaef4
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDrawNode::getBlendFunc()) const {
    // 0xadb140
}

} // namespace cocos2d
