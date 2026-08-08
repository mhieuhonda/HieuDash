// ============================================================
// GJMapObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GJMapObject.h"

GJMapObject::~GJMapObject() {
    // 0x97d120
    this->cleanup();
}

GJMapObject::~GJMapObject() {
    // 0x97d0e4
    this->cleanup();
}

GJMapObject::~GJMapObject() {
    // 0x97d0e4
    this->cleanup();
}

void GJMapObject::playerJump() {
    // 0x97d1b4
    // TODO: Implement
}

void GJMapObject::monsterIdle() {
    // 0x97dae0
    // TODO: Implement
}

void GJMapObject::monsterJump() {
    // 0x97e290
    // TODO: Implement
}

void GJMapObject::moveMonster(cocos2d::CCPoint, float) {
    // 0x97e070
    // TODO: Implement
}

void GJMapObject::moveMonster() {
    // 0x97e228
    // TODO: Implement
}

void GJMapObject::moveFinished() {
    // 0x97d8b8
    // TODO: Implement
}

void GJMapObject::touchMonster() {
    // 0x97e5e8
    // TODO: Implement
}

void GJMapObject::updateShadow(float, float, cocos2d::CCPoint) {
    // 0x97e694
    // TODO: Implement
}

void GJMapObject::createMonster(int) {
    // 0x97e700
    // TODO: Implement
}

void GJMapObject::setObjectOrigin(cocos2d::CCPoint, float) {
    // 0x97e030
    // TODO: Implement
}

void GJMapObject::startPlayerJumpLoop() {
    // 0x97dfdc
    // TODO: Implement
}

void GJMapObject::startMonsterJumpLoop() {
    // 0x97e484
    // TODO: Implement
}

void GJMapObject::init(cocos2d::CCNode*) {
    // 0x97ddcc
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJMapObject::create(cocos2d::CCNode*) {
    // 0x97df08
    GJMapObject* ret = new GJMapObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

