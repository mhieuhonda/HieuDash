
#include "GJRewardObject.h"

GJRewardObject::~GJRewardObject() {
    this->cleanup();
}

GJRewardObject::~GJRewardObject() {
    this->cleanup();
}

GJRewardObject::~GJRewardObject() {
    this->cleanup();
}

void GJRewardObject::dataLoaded(DS_Dictionary*) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJRewardObject::isSpecialType() {
    // TODO: Implement
}

void GJRewardObject::createWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJRewardObject::encodeWithCoder(DS_Dictionary*) {
    // TODO: Implement
}

void GJRewardObject::createItemUnlock(UnlockType, int) {
    // TODO: Implement
}

void GJRewardObject::init(SpecialRewardItem, int, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRewardObject::create(SpecialRewardItem, int, int) {
    GJRewardObject* ret = new GJRewardObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardObject::create() {
    GJRewardObject* ret = new GJRewardObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardObject::canEncode() {
    // TODO: Implement
}

