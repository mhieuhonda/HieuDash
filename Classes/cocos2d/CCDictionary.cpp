// ============================================================
// CCDictionary.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCDictionary.h"

namespace cocos2d {

CCDictionary::CCDictionary() {
    : m_firstKey("")
    // 0xacf334
}

CCDictionary::CCDictionary() {
    : m_firstKey("")
    // 0xacf334
}

CCDictionary::~CCDictionary() {
    // 0xad1520
    this->cleanup();
}

CCDictionary::~CCDictionary() {
    // 0xad14ec
    this->cleanup();
}

CCDictionary::~CCDictionary() {
    // 0xad14ec
    this->cleanup();
}

void CCDictionary::charForKey(std::string const&) {
    // 0xacfbf0
    // TODO: Implement
}

void CCDictionary::getFirstKey() {
    // 0xacf4c0
    // TODO: Implement
}

void CCDictionary::valueForKey(std::string const&) {
    // 0xacfb04
    // TODO: Implement
}

void CCDictionary::valueForKey(long) {
    // 0xacfc04
    // TODO: Implement
}

void CCDictionary::writeToFile(char const*) {
    // 0xad17b8
    // TODO: Implement
}

void CCDictionary::copyWithZone(cocos2d::CCZone*) {
    // 0xad0ab4
    // TODO: Implement
}

void CCDictionary::objectForKey(std::string const&) {
    // 0xacf6b4
    // TODO: Implement
}

void CCDictionary::objectForKey(long) {
    // 0xacf978
    // TODO: Implement
}

void CCDictionary::randomObject() {
    // 0xad1544
    // TODO: Implement
}

void CCDictionary::acceptVisitor(cocos2d::CCDataVisitor&) {
    // 0xacf27c
    // TODO: Implement
}

void CCDictionary::setObjectUnSafe(cocos2d::CCObject*, std::string const&) {
    // 0xacfcf0
    // TODO: Implement
}

void CCDictionary::setObjectUnSafe(cocos2d::CCObject*, long) {
    // 0xad053c
    // TODO: Implement
}

void CCDictionary::allKeysForObject(cocos2d::CCObject*) {
    // 0xacf568
    // TODO: Implement
}

void CCDictionary::removeAllObjects() {
    // 0xad1358
    // TODO: Implement
}

void CCDictionary::removeObjectForKey(std::string const&) {
    // 0xad0da8
    // TODO: Implement
}

void CCDictionary::removeObjectForKey(long) {
    // 0xad11bc
    // TODO: Implement
}

void CCDictionary::createWithDictionary(cocos2d::CCDictionary*) {
    // 0xad1688
    // TODO: Implement
}

void CCDictionary::removeObjectsForKeys(cocos2d::CCArray*) {
    // 0xad108c
    // TODO: Implement
}

void CCDictionary::removeObjectForElememt(cocos2d::CCDictElement*) {
    // 0xad0c44
    // TODO: Implement
}

void CCDictionary::createWithContentsOfFile(char const*) {
    // 0xad1790
    // TODO: Implement
}

void CCDictionary::createWithContentsOfFileThreadSafe(char const*) {
    // 0xad16b0
    // TODO: Implement
}

void CCDictionary::count() {
    // 0xacf36c
    // TODO: Implement
}

void CCDictionary::create() {
    // 0xad1654
    CCDictionary* ret = new CCDictionary();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCDictionary::allKeys() {
    // 0xacf388
    // TODO: Implement
}

void CCDictionary::setObject(cocos2d::CCObject*, std::string const&) {
    // 0xad0228
    // TODO: Implement
}

void CCDictionary::setObject(cocos2d::CCObject*, long) {
    // 0xad08e8
    // TODO: Implement
}

} // namespace cocos2d
