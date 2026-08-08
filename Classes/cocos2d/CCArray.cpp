// ============================================================
// CCArray.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCArray.h"

namespace cocos2d {

CCArray::CCArray(unsigned int) {
    // 0xad3ed0
}

CCArray::CCArray() {
    // 0xad3f18
}

CCArray::CCArray(unsigned int) {
    // 0xad3ed0
}

CCArray::CCArray() {
    // 0xad3f18
}

CCArray::~CCArray() {
    // 0xad3d3c
    this->cleanup();
}

CCArray::~CCArray() {
    // 0xad3d08
    this->cleanup();
}

CCArray::~CCArray() {
    // 0xad3d08
    this->cleanup();
}

void CCArray::lastObject() {
    // 0xad4060
    // TODO: Implement
}

void CCArray::addObjectNew(cocos2d::CCObject*) {
    // 0xad4590
    // TODO: Implement
}

void CCArray::copyWithZone(cocos2d::CCZone*) {
    // 0xad44ec
    // TODO: Implement
}

void CCArray::insertObject(cocos2d::CCObject*, unsigned int) {
    // 0xad45f8
    // TODO: Implement
}

void CCArray::randomObject() {
    // 0xad4084
    // TODO: Implement
}

void CCArray::removeObject(cocos2d::CCObject*, bool) {
    // 0xad4618
    // TODO: Implement
}

void CCArray::acceptVisitor(cocos2d::CCDataVisitor&) {
    // 0xad3ce0
    // TODO: Implement
}

void CCArray::initWithArray(cocos2d::CCArray*) {
    // 0xad45a4
    // TODO: Implement
}

void CCArray::objectAtIndex(unsigned int) {
    // 0xad404c
    // TODO: Implement
}

void CCArray::stringAtIndex(unsigned int) {
    // 0xad405c
    // TODO: Implement
}

void CCArray::exchangeObject(cocos2d::CCObject*, cocos2d::CCObject*) {
    // 0xad4664
    // TODO: Implement
}

void CCArray::initWithObject(cocos2d::CCObject*) {
    // 0xad42d4
    // TODO: Implement
}

void CCArray::isEqualToArray(cocos2d::CCArray*) {
    // 0xad4108
    // TODO: Implement
}

void CCArray::reverseObjects() {
    // 0xad470c
    // TODO: Implement
}

void CCArray::createWithArray(cocos2d::CCArray*) {
    // 0xad3d60
    // TODO: Implement
}

void CCArray::initWithObjects(cocos2d::CCObject*, ...) {
    // 0xad439c
    // TODO: Implement
}

void CCArray::createWithObject(cocos2d::CCObject*) {
    // 0xad432c
    // TODO: Implement
}

void CCArray::fastRemoveObject(cocos2d::CCObject*) {
    // 0xad465c
    // TODO: Implement
}

void CCArray::initWithCapacity(unsigned int) {
    // 0xad3e94
    // TODO: Implement
}

void CCArray::removeAllObjects() {
    // 0xad463c
    // TODO: Implement
}

void CCArray::removeLastObject(bool) {
    // 0xad4600
    // TODO: Implement
}

void CCArray::createWithCapacity(unsigned int) {
    // 0xad3fb8
    // TODO: Implement
}

void CCArray::recreateNewIndexes() {
    // 0xad4190
    // TODO: Implement
}

void CCArray::addObjectsFromArray(cocos2d::CCArray*) {
    // 0xad4598
    // TODO: Implement
}

void CCArray::removeObjectAtIndex(unsigned int, bool) {
    // 0xad4620
    // TODO: Implement
}

void CCArray::removeObjectsInArray(cocos2d::CCArray*) {
    // 0xad4630
    // TODO: Implement
}

void CCArray::replaceObjectAtIndex(unsigned int, cocos2d::CCObject*, bool) {
    // 0xad46d0
    // TODO: Implement
}

void CCArray::exchangeObjectAtIndex(unsigned int, unsigned int) {
    // 0xad46c8
    // TODO: Implement
}

void CCArray::reduceMemoryFootprint() {
    // 0xad4784
    // TODO: Implement
}

void CCArray::fastRemoveObjectAtIndex(unsigned int) {
    // 0xad4644
    // TODO: Implement
}

void CCArray::createWithContentsOfFile(char const*) {
    // 0xad3e68
    // TODO: Implement
}

void CCArray::removeObjectAtIndexChild(unsigned int, bool) {
    // 0xad4628
    // TODO: Implement
}

void CCArray::fastRemoveObjectAtIndexNew(unsigned int) {
    // 0xad464c
    // TODO: Implement
}

void CCArray::fastRemoveObjectAtIndexChild(unsigned int) {
    // 0xad4654
    // TODO: Implement
}

void CCArray::createWithContentsOfFileThreadSafe(char const*) {
    // 0xad3d88
    // TODO: Implement
}

void CCArray::init() {
    // 0xad3f10
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCArray::create(cocos2d::CCObject*, ...) {
    // 0xad41a0
    CCArray* ret = new CCArray();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCArray::create() {
    // 0xad3f50
    CCArray* ret = new CCArray();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCArray::addObject(cocos2d::CCObject*) {
    // 0xad4198
    // TODO: Implement
}

void CCArray::indexOfObject(cocos2d::CCObject*)) const {
    // 0xad4044
    // TODO: Implement
}

void CCArray::containsObject(cocos2d::CCObject*)) const {
    // 0xad4100
    // TODO: Implement
}

void CCArray::count()) const {
    // 0xad402c
    // TODO: Implement
}

void CCArray::capacity()) const {
    // 0xad4038
    // TODO: Implement
}

} // namespace cocos2d
