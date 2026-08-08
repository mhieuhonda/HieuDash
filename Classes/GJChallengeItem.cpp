
#include "GJChallengeItem.h"

GJChallengeItem::~GJChallengeItem() {
    this->cleanup();
}

GJChallengeItem::~GJChallengeItem() {
    this->cleanup();
}

GJChallengeItem::~GJChallengeItem() {
    this->cleanup();
}

void GJChallengeItem::dataLoaded(DS_Dictionary*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJChallengeItem::incrementCount(int) {
    // TODO: Implement
}

void GJChallengeItem::createWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJChallengeItem::encodeWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJChallengeItem::createFromString(std::string) {
    // TODO: Implement
}

void GJChallengeItem::init(GJChallengeType, int, int, int, std::string) {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJChallengeItem::create(GJChallengeType, int, int, int, std::string) {
    GJChallengeItem* ret = new GJChallengeItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJChallengeItem::create() {
    GJChallengeItem* ret = new GJChallengeItem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJChallengeItem::canEncode() {
    // TODO: Implement
}

