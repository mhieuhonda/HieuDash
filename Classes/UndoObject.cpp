
#include "UndoObject.h"

UndoObject::~UndoObject() {
    this->cleanup();
}

UndoObject::~UndoObject() {
    this->cleanup();
}

UndoObject::~UndoObject() {
    this->cleanup();
}

void UndoObject::setObjects(cocos2d::CCArray*) {
    // TODO: Implement
}

void UndoObject::createWithArray(cocos2d::CCArray*, UndoCommand) {
    // TODO: Implement
}

void UndoObject::initWithTransformObjects(cocos2d::CCArray*, UndoCommand) {
    // TODO: Implement
}

void UndoObject::createWithTransformObjects(cocos2d::CCArray*, UndoCommand) {
    // TODO: Implement
}

void UndoObject::init(GameObject*, UndoCommand) {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UndoObject::init(cocos2d::CCArray*, UndoCommand) {
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UndoObject::create(GameObject*, UndoCommand) {
    UndoObject* ret = new UndoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

