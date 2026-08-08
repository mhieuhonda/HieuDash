// ============================================================
// CCInvocation.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCINVOCATION_H_
#define COCOS2D_EXTENSION_CCINVOCATION_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCInvocation {
public:
    CCInvocation(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    CCInvocation(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);

    virtual ~CCInvocation();
    virtual ~CCInvocation();
    virtual ~CCInvocation();

    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*, unsigned int), unsigned int);
    void invoke(cocos2d::CCObject*);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCINVOCATION_H_
