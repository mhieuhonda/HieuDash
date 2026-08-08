
#include "GJUserMessage.h"

GJUserMessage::~GJUserMessage() {
    this->cleanup();
}

bool GJUserMessage::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
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

