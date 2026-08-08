// ============================================================
// CCObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCObject.h"

namespace cocos2d {

CCObject::CCObject() {
    : m_tag(0)
    // 0xad2a4c
}

CCObject::CCObject() {
    : m_tag(0)
    // 0xad2a4c
}

CCObject::~CCObject() {
    // 0xad2a28
    this->cleanup();
}

CCObject::~CCObject() {
    // 0xad2970
    this->cleanup();
}

CCObject::~CCObject() {
    // 0xad2970
    this->cleanup();
}

void CCObject::autorelease() {
    // 0xad2b00
    // TODO: Implement
}

void CCObject::acceptVisitor(cocos2d::CCDataVisitor&) {
    // 0xad292c
    // TODO: Implement
}

void CCObject::createWithCoder(DS_Dictionary*) {
    // 0xad2b44
    // TODO: Implement
}

void CCObject::encodeWithCoder(DS_Dictionary*) {
    // 0xad2964
    // TODO: Implement
}

void CCObject::copy() {
    // 0xad2aa4
    // TODO: Implement
}

void CCObject::retain() {
    // 0xad2af0
    // TODO: Implement
}

void CCObject::setTag(int) {
    // 0xad295c
    // TODO: Set m_tag
}

void CCObject::update(float) {
    // 0x56a7d4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCObject::isEqual(cocos2d::CCObject const*) {
    // 0xad2920
    // TODO: Implement
}

void CCObject::release() {
    // 0xad2ac4
    // TODO: Implement
}

void CCObject::canEncode() {
    // 0xad2968
    // TODO: Implement
}

void CCObject::retainCount()) const {
    // 0xad2b3c
    // TODO: Implement
}

void CCObject::isSingleReference()) const {
    // 0xad2b2c
    // TODO: Implement
}

void CCObject::getTag()) const {
    // 0xad2954
    return m_tag;
}

} // namespace cocos2d
