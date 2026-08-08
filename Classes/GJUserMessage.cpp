// ============================================================
// GJUserMessage.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJUserMessage.h"

GJUserMessage::~GJUserMessage() {
    // 0x6eec64
    this->cleanup();
}

GJUserMessage::~GJUserMessage() {
    // 0x6eea9c
    this->cleanup();
}

GJUserMessage::~GJUserMessage() {
    // 0x6eea9c
    this->cleanup();
}

void GJUserMessage::init() {
    // 0x6ee21c
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUserMessage::create(cocos2d::CCDictionary*) {
    // 0x713b6c
    GJUserMessage* ret = new GJUserMessage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJUserMessage::create() {
    // 0x713aac
    GJUserMessage* ret = new GJUserMessage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

