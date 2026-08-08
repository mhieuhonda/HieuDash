// ============================================================
// CCBMFontConfiguration.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCBMFontConfiguration.h"

namespace cocos2d {

CCBMFontConfiguration::CCBMFontConfiguration() {
    // 0xae2da4
}

CCBMFontConfiguration::CCBMFontConfiguration() {
    // 0xae2da4
}

CCBMFontConfiguration::~CCBMFontConfiguration() {
    // 0xae4cc4
    this->cleanup();
}

CCBMFontConfiguration::~CCBMFontConfiguration() {
    // 0xae4ba4
    this->cleanup();
}

CCBMFontConfiguration::~CCBMFontConfiguration() {
    // 0xae4ba4
    this->cleanup();
}

void CCBMFontConfiguration::description() {
    // 0xae2df4
    // TODO: Implement
}

void CCBMFontConfiguration::initWithFNTfile(char const*) {
    // 0xae5a6c
    // TODO: Implement
}

void CCBMFontConfiguration::parseConfigFile(char const*) {
    // 0xae4e1c
    // TODO: Implement
}

void CCBMFontConfiguration::parseKerningEntry(std::string) {
    // 0xae3f7c
    // TODO: Implement
}

void CCBMFontConfiguration::parseImageFileName(std::string, char const*) {
    // 0xae3120
    // TODO: Implement
}

void CCBMFontConfiguration::parseInfoArguments(std::string) {
    // 0xae3338
    // TODO: Implement
}

void CCBMFontConfiguration::parseCommonArguments(std::string) {
    // 0xae3480
    // TODO: Implement
}

void CCBMFontConfiguration::purgeFontDefDictionary() {
    // 0xae2fb0
    // TODO: Implement
}

void CCBMFontConfiguration::purgeKerningDictionary() {
    // 0xae2e60
    // TODO: Implement
}

void CCBMFontConfiguration::parseCharacterDefinition(std::string, cocos2d::_BMFontDef*) {
    // 0xae3848
    // TODO: Implement
}

void CCBMFontConfiguration::create(char const*) {
    // 0xae5aa0
    CCBMFontConfiguration* ret = new CCBMFontConfiguration();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCBMFontConfiguration::getCharacterSet()) const {
    // 0xae2d9c
}

} // namespace cocos2d
