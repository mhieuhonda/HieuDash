// ============================================================
// GJRewardItem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJRewardItem.h"

GJRewardItem::~GJRewardItem() {
    // 0x7a0ff8
    this->cleanup();
}

GJRewardItem::~GJRewardItem() {
    // 0x7a0fbc
    this->cleanup();
}

GJRewardItem::~GJRewardItem() {
    // 0x7a0fbc
    this->cleanup();
}

void GJRewardItem::dataLoaded(DS_Dictionary*) {
    // 0x7ad6a8
    // Load from file/storage
    // TODO: Implement loading
}

void GJRewardItem::isShardType(SpecialRewardItem) {
    // 0x7ad48c
    // TODO: Implement
}

void GJRewardItem::createSpecial(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int) {
    // 0x7a71b8
    // TODO: Implement
}

void GJRewardItem::getRewardCount(SpecialRewardItem) {
    // 0x7ad544
    // TODO: Implement
}

void GJRewardItem::createWithCoder(DS_Dictionary*) {
    // 0x7ad730
    // TODO: Implement
}

void GJRewardItem::encodeWithCoder(DS_Dictionary*) {
    // 0x7a10ac
    // TODO: Implement
}

void GJRewardItem::createWithObject(GJRewardType, GJRewardObject*) {
    // 0x7a718c
    // TODO: Implement
}

void GJRewardItem::getNextShardType(SpecialRewardItem) {
    // 0x7ad4c0
    // TODO: Implement
}

void GJRewardItem::rewardItemToStat(SpecialRewardItem) {
    // 0x7ad288
    // TODO: Implement
}

void GJRewardItem::createWithObjects(GJRewardType, cocos2d::CCArray*) {
    // 0x7a70b8
    // TODO: Implement
}

void GJRewardItem::getRandomShardType() {
    // 0x7ad4e0
    // TODO: Implement
}

void GJRewardItem::getRewardObjectForType(SpecialRewardItem) {
    // 0x7ad5e4
    // TODO: Implement
}

void GJRewardItem::getRandomNonMaxShardType() {
    // 0x7b3fec
    // TODO: Implement
}

void GJRewardItem::init(int, int, std::string) {
    // 0x7a6b1c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRewardItem::create(int, int, std::string) {
    // 0x7a6cc0
    GJRewardItem* ret = new GJRewardItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardItem::create() {
    // 0x7a6fc0
    GJRewardItem* ret = new GJRewardItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardItem::canEncode() {
    // 0x7a0ee4
    // TODO: Implement
}

