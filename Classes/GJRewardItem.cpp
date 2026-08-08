
#include "GJRewardItem.h"

GJRewardItem::~GJRewardItem() {
    this->cleanup();
}

GJRewardItem::~GJRewardItem() {
    this->cleanup();
}

GJRewardItem::~GJRewardItem() {
    this->cleanup();
}

void GJRewardItem::dataLoaded(DS_Dictionary*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJRewardItem::isShardType(SpecialRewardItem) {
    // TODO: Implement
}

void GJRewardItem::createSpecial(GJRewardType, int, int, SpecialRewardItem, int, SpecialRewardItem, int, int, int) {
    // TODO: Implement
}

void GJRewardItem::getRewardCount(SpecialRewardItem) {
    // TODO: Implement
}

void GJRewardItem::createWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJRewardItem::encodeWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJRewardItem::createWithObject(GJRewardType, GJRewardObject*) {
    // TODO: Implement
}

void GJRewardItem::getNextShardType(SpecialRewardItem) {
    // TODO: Implement
}

void GJRewardItem::rewardItemToStat(SpecialRewardItem) {
    // TODO: Implement
}

void GJRewardItem::createWithObjects(GJRewardType, cocos2d::CCArray*) {
    // TODO: Implement
}

void GJRewardItem::getRandomShardType() {
    // TODO: Implement
}

void GJRewardItem::getRewardObjectForType(SpecialRewardItem) {
    // TODO: Implement
}

void GJRewardItem::getRandomNonMaxShardType() {
    // TODO: Implement
}

void GJRewardItem::init(int, int, std::string) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRewardItem::create(int, int, std::string) {
    GJRewardItem* ret = new GJRewardItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardItem::create() {
    GJRewardItem* ret = new GJRewardItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardItem::canEncode() {
    // TODO: Implement
}

