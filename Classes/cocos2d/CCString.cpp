// ============================================================
// CCString.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCString.h"

namespace cocos2d {

CCString::CCString(char const*) {
    // 0xad352c
}

CCString::CCString(cocos2d::CCString const&) {
    // 0xad37c4
}

CCString::CCString(std::string const&) {
    // 0xad35cc
}

CCString::CCString() {
    // 0xad34c4
}

CCString::CCString(char const*) {
    // 0xad352c
}

CCString::CCString(cocos2d::CCString const&) {
    // 0xad37c4
}

CCString::CCString(std::string const&) {
    // 0xad35cc
}

CCString::CCString() {
    // 0xad34c4
}

CCString::~CCString() {
    // 0xad34a0
    this->cleanup();
}

CCString::~CCString() {
    // 0xad33d4
    this->cleanup();
}

CCString::~CCString() {
    // 0xad33d4
    this->cleanup();
}

void CCString::copyWithZone(cocos2d::CCZone*) {
    // 0xad3594
    // TODO: Implement
}

void CCString::acceptVisitor(cocos2d::CCDataVisitor&) {
    // 0xad32e8
    // TODO: Implement
}

void CCString::createWithData(unsigned char const*, unsigned long) {
    // 0xad39dc
    // TODO: Implement
}

void CCString::initWithFormat(char const*, ...) {
    // 0xad36d8
    // TODO: Implement
}

void CCString::createWithFormat(char const*, ...) {
    // 0xad3ae8
    // TODO: Implement
}

void CCString::initWithFormatAndValist(char const*, std::__va_list) {
    // 0xad3634
    // TODO: Implement
}

void CCString::createWithContentsOfFile(char const*) {
    // 0xad3c3c
    // TODO: Implement
}

void CCString::create(std::string const&) {
    // 0xad39a0
    CCString* ret = new CCString();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCString::isEqual(cocos2d::CCObject const*) {
    // 0xad3310
    // TODO: Implement
}

void CCString::operator=(cocos2d::CCString const&) {
    // 0xad3608
    // TODO: Implement
}

void CCString::floatValue()) const {
    // 0xad38ac
    // TODO: Implement
}

void CCString::getCString()) const {
    // 0xad37bc
}

void CCString::doubleValue()) const {
    // 0xad38e0
    // TODO: Implement
}

void CCString::length()) const {
    // 0xad3838
    // TODO: Implement
}

void CCString::compare(char const*)) const {
    // 0xad3984
    // TODO: Implement
}

void CCString::intValue()) const {
    // 0xad3844
    // TODO: Implement
}

void CCString::boolValue()) const {
    // 0xad3918
    // TODO: Implement
}

void CCString::uintValue()) const {
    // 0xad3878
    // TODO: Implement
}

} // namespace cocos2d
