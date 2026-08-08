// ============================================================
// SongInfoObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SongInfoObject.h"

SongInfoObject::~SongInfoObject() {
    // 0x833340
    this->cleanup();
}

SongInfoObject::~SongInfoObject() {
    // 0x832f2c
    this->cleanup();
}

SongInfoObject::~SongInfoObject() {
    // 0x832f2c
    this->cleanup();
}

void SongInfoObject::copyValues(SongInfoObject*) {
    // 0x82ddc4
    // TODO: Implement
}

void SongInfoObject::containsTag(int) {
    // 0x82de94
    // TODO: Implement
}

void SongInfoObject::getTagsString(bool) {
    // 0x833df0
    // TODO: Implement
}

void SongInfoObject::updateArtists(std::string) {
    // 0x834140
    // TODO: Implement
}

void SongInfoObject::getArtistNames(int) {
    // 0x8335bc
    // TODO: Implement
}

void SongInfoObject::createWithCoder(DS_Dictionary*) {
    // 0x83778c
    // TODO: Implement
}

void SongInfoObject::encodeWithCoder(DS_Dictionary*) {
    // 0x826620
    // TODO: Implement
}

void SongInfoObject::getExtraArtistCount() {
    // 0x82dd44
    // TODO: Implement
}

void SongInfoObject::init(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int) {
    // 0x834414
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SongInfoObject::create(cocos2d::CCDictionary*) {
    // 0x835274
    SongInfoObject* ret = new SongInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoObject::create(int) {
    // 0x834d80
    SongInfoObject* ret = new SongInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoObject::create(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int) {
    // 0x8345f8
    SongInfoObject* ret = new SongInfoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SongInfoObject::addTags(std::string) {
    // 0x833364
    // TODO: Implement
}

void SongInfoObject::canEncode() {
    // 0x826540
    // TODO: Implement
}

