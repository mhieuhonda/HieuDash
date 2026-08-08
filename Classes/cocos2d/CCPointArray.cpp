// ============================================================
// CCPointArray.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCPointArray.h"

namespace cocos2d {

CCPointArray::CCPointArray() {
    : m_controlPointAtIndex(0)
    // 0xab4e34
}

CCPointArray::CCPointArray() {
    : m_controlPointAtIndex(0)
    // 0xab4e34
}

CCPointArray::~CCPointArray() {
    // 0xab4bcc
    this->cleanup();
}

CCPointArray::~CCPointArray() {
    // 0xab4b50
    this->cleanup();
}

CCPointArray::~CCPointArray() {
    // 0xab4b50
    this->cleanup();
}

void CCPointArray::copyWithZone(cocos2d::CCZone*) {
    // 0xab5cc4
    // TODO: Implement
}

void CCPointArray::reverseInline() {
    // 0xab5128
    // TODO: Implement
}

void CCPointArray::addControlPoint(cocos2d::CCPoint) {
    // 0xab5dec
    // TODO: Implement
}

void CCPointArray::getControlPoints() {
    // 0xab4edc
    // TODO: Implement
}

void CCPointArray::initWithCapacity(unsigned int) {
    // 0xab4df8
    // TODO: Implement
}

void CCPointArray::setControlPoints(std::vector<cocos2d::CCPoint*>*) {
    // 0xab4ee4
    // TODO: Set m_controlPoints
}

void CCPointArray::insertControlPoint(cocos2d::CCPoint&, unsigned int) {
    // 0xab5b58
    // TODO: Implement
}

void CCPointArray::replaceControlPoint(cocos2d::CCPoint&, unsigned int) {
    // 0xab4fb8
    // TODO: Implement
}

void CCPointArray::getControlPointAtIndex(unsigned int) {
    // 0xab4f54
    // TODO: Implement
}

void CCPointArray::removeControlPointAtIndex(unsigned int) {
    // 0xab5010
    // TODO: Implement
}

void CCPointArray::count() {
    // 0xab506c
    // TODO: Implement
}

void CCPointArray::create(unsigned int) {
    // 0xab4e68
    CCPointArray* ret = new CCPointArray();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCPointArray::reverse() {
    // 0xab5e90
    // TODO: Implement
}

} // namespace cocos2d
