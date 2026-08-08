
#include "SimpleObject.h"

SimpleObject::~SimpleObject() {
    this->cleanup();
}

bool SimpleObject::init() {
    bool ret = cocos2d::CCNode::init();
    if (!ret) return false;
    // Initialize members and UI - stub
    return true;
}

void SimpleObject::create() {
    SimpleObject* ret = new SimpleObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

