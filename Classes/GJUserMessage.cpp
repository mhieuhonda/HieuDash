
#include "GJUserMessage.h"

GJUserMessage::~GJUserMessage() {
    this->cleanup();
}

GJUserMessage::~GJUserMessage() {
    this->cleanup();
}

GJUserMessage::~GJUserMessage() {
    this->cleanup();
}

void GJUserMessage::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJUserMessage::create(cocos2d::CCDictionary*) {
    GJUserMessage* ret = new GJUserMessage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void GJUserMessage::create() {
    GJUserMessage* ret = new GJUserMessage();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

