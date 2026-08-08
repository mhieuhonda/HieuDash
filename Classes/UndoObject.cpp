// ============================================================
// UndoObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "UndoObject.h"

UndoObject::~UndoObject() {
    // 0x65b3c8
    this->cleanup();
}

UndoObject::~UndoObject() {
    // 0x65b380
    this->cleanup();
}

UndoObject::~UndoObject() {
    // 0x65b380
    this->cleanup();
}

void UndoObject::setObjects(cocos2d::CCArray*) {
    // 0x664758
    // TODO: Implement
}

void UndoObject::createWithArray(cocos2d::CCArray*, UndoCommand) {
    // 0x66462c
    // TODO: Implement
}

void UndoObject::initWithTransformObjects(cocos2d::CCArray*, UndoCommand) {
    // 0x664a94
    // TODO: Implement
}

void UndoObject::createWithTransformObjects(cocos2d::CCArray*, UndoCommand) {
    // 0x664b10
    // TODO: Implement
}

void UndoObject::init(GameObject*, UndoCommand) {
    // 0x664928
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UndoObject::init(cocos2d::CCArray*, UndoCommand) {
    // 0x6645e0
    bool ret = cocos2d::CCObject::init() if "cocos2d::CCObject" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void UndoObject::create(GameObject*, UndoCommand) {
    // 0x664968
    UndoObject* ret = new UndoObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

