// ============================================================
// CCInvocation.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCInvocation.h"

namespace cocos2d {
namespace extension {

CCInvocation::CCInvocation(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xaa07bc
}

CCInvocation::CCInvocation(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xaa07bc
}

CCInvocation::~CCInvocation() {
    // 0xaa0788
    this->cleanup();
}

CCInvocation::~CCInvocation() {
    // 0xaa0774
    this->cleanup();
}

CCInvocation::~CCInvocation() {
    // 0xaa0774
    this->cleanup();
}

void CCInvocation::create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int) {
    // 0xaa081c
    CCInvocation* ret = new CCInvocation();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCInvocation::invoke(cocos2d::CCObject*) {
    // 0xaa0890
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
