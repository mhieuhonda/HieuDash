// ============================================================
// GJRewardObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJRewardObject.h"

GJRewardObject::~GJRewardObject() {
    // 0x7a1078
    this->cleanup();
}

GJRewardObject::~GJRewardObject() {
    // 0x7a1064
    this->cleanup();
}

GJRewardObject::~GJRewardObject() {
    // 0x7a1064
    this->cleanup();
}

void GJRewardObject::dataLoaded(DS_Dictionary*) {
    // 0x7a6a7c
    // Load from file/storage
    // TODO: Implement loading
}

void GJRewardObject::isSpecialType() {
    // 0x7a6a44
    // TODO: Implement
}

void GJRewardObject::createWithCoder(DS_Dictionary*) {
    // 0x7a6aec
    // TODO: Implement
}

void GJRewardObject::encodeWithCoder(DS_Dictionary*) {
    // 0x7a0f3c
    // TODO: Implement
}

void GJRewardObject::createItemUnlock(UnlockType, int) {
    // 0x7a6a14
    // TODO: Implement
}

void GJRewardObject::init(SpecialRewardItem, int, int) {
    // 0x7a693c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJRewardObject::create(SpecialRewardItem, int, int) {
    // 0x7a6954
    GJRewardObject* ret = new GJRewardObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardObject::create() {
    // 0x7a6a04
    GJRewardObject* ret = new GJRewardObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJRewardObject::canEncode() {
    // 0x7a0edc
    // TODO: Implement
}

