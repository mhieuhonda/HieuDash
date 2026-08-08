// ============================================================
// CCTransitionSlideInL.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTransitionSlideInL.h"

namespace cocos2d {

CCTransitionSlideInL::CCTransitionSlideInL() {
    // 0xaee254
}

CCTransitionSlideInL::CCTransitionSlideInL() {
    // 0xaee254
}

CCTransitionSlideInL::~CCTransitionSlideInL() {
    // 0xaecefc
    this->cleanup();
}

CCTransitionSlideInL::~CCTransitionSlideInL() {
    // 0xaecc64
    this->cleanup();
}

CCTransitionSlideInL::~CCTransitionSlideInL() {
    // 0xaecc64
    this->cleanup();
}

void CCTransitionSlideInL::initScenes() {
    // 0xaed624
    // TODO: Implement
}

void CCTransitionSlideInL::sceneOrder() {
    // 0xaeca7c
    // TODO: Implement
}

void CCTransitionSlideInL::easeActionWithAction(cocos2d::CCActionInterval*) {
    // 0xaedafc
    // TODO: Implement
}

void CCTransitionSlideInL::action() {
    // 0xaed8d4
    // TODO: Implement
}

void CCTransitionSlideInL::create(float, cocos2d::CCScene*) {
    // 0xaee28c
    CCTransitionSlideInL* ret = new CCTransitionSlideInL();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCTransitionSlideInL::onEnter() {
    // 0xaef498
    // TODO: Implement
}

} // namespace cocos2d
