// ============================================================
// GJLevelList.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJLevelList.h"

GJLevelList::~GJLevelList() {
    // 0x6ef054
    this->cleanup();
}

GJLevelList::~GJLevelList() {
    // 0x6eee28
    this->cleanup();
}

GJLevelList::~GJLevelList() {
    // 0x6eee28
    this->cleanup();
}

void GJLevelList::dataLoaded(DS_Dictionary*) {
    // 0x7305d8
    // Load from file/storage
    // TODO: Implement loading
}

void GJLevelList::totalLevels() {
    // 0x719420
    // TODO: Implement
}

void GJLevelList::reorderLevel(int, int) {
    // 0x736750
    // TODO: Implement
}

void GJLevelList::showListInfo() {
    // 0x71948c
    // TODO: Implement
}

void GJLevelList::orderForLevel(int) {
    // 0x7193d4
    // TODO: Implement
}

void GJLevelList::addLevelToList(GJGameLevel*) {
    // 0x736540
    // TODO: Implement
}

void GJLevelList::completedLevels() {
    // 0x719434
    // TODO: Implement
}

void GJLevelList::createWithCoder(DS_Dictionary*) {
    // 0x730a64
    // TODO: Implement
}

void GJLevelList::encodeWithCoder(DS_Dictionary*) {
    // 0x6edfe0
    // TODO: Implement
}

void GJLevelList::parseListLevels(std::string) {
    // 0x72ecdc
    // TODO: Implement
}

void GJLevelList::reorderLevelStep(int, bool) {
    // 0x736838
    // TODO: Implement
}

void GJLevelList::hasMatchingLevels(GJLevelList*) {
    // 0x71a7bc
    // TODO: Implement
}

void GJLevelList::getListLevelsArray(cocos2d::CCArray*) {
    // 0x730c7c
    // TODO: Implement
}

void GJLevelList::updateLevelsString() {
    // 0x736238
    // TODO: Implement
}

void GJLevelList::duplicateListLevels(GJLevelList*) {
    // 0x7366e8
    // TODO: Implement
}

void GJLevelList::handleStatsConflict(GJLevelList*) {
    // 0x7192a4
    // TODO: Implement
}

void GJLevelList::removeLevelFromList(int) {
    // 0x7363c4
    // TODO: Implement
}

void GJLevelList::frameForListDifficulty(int, DifficultyIconType) {
    // 0x719a50
    // TODO: Implement
}

void GJLevelList::getUnpackedDescription() {
    // 0x7192bc
    // TODO: Implement
}

void GJLevelList::init() {
    // 0x6ee2c4
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJLevelList::create(cocos2d::CCDictionary*) {
    // 0x72f128
    GJLevelList* ret = new GJLevelList();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJLevelList::create() {
    // 0x71918c
    GJLevelList* ret = new GJLevelList();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJLevelList::canEncode() {
    // 0x6edd1c
    // TODO: Implement
}

