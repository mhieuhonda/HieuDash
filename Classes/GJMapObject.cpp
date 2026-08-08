
#include "GJMapObject.h"

GJMapObject::~GJMapObject() {
    this->cleanup();
}

GJMapObject::~GJMapObject() {
    this->cleanup();
}

GJMapObject::~GJMapObject() {
    this->cleanup();
}

void GJMapObject::playerJump() {
    // TODO: Implement
}

void GJMapObject::monsterIdle() {
    // TODO: Implement
}

void GJMapObject::monsterJump() {
    // TODO: Implement
}

void GJMapObject::moveMonster(cocos2d::CCPoint, float) {
    // TODO: Implement
}

void GJMapObject::moveMonster() {
    // TODO: Implement
}

void GJMapObject::moveFinished() {
    // TODO: Implement
}

void GJMapObject::touchMonster() {
    // TODO: Implement
}

void GJMapObject::updateShadow(float, float, cocos2d::CCPoint) {
    // TODO: Implement
}

void GJMapObject::createMonster(int) {
    // TODO: Implement
}

void GJMapObject::setObjectOrigin(cocos2d::CCPoint, float) {
    // TODO: Implement
}

void GJMapObject::startPlayerJumpLoop() {
    // TODO: Implement
}

void GJMapObject::startMonsterJumpLoop() {
    // TODO: Implement
}

void GJMapObject::init(cocos2d::CCNode*) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJMapObject::create(cocos2d::CCNode*) {
    GJMapObject* ret = new GJMapObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

