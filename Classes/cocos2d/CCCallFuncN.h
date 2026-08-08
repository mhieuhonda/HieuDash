// ============================================================
// CCCallFuncN.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCCALLFUNCN_H_
#define COCOS2D_CCCALLFUNCN_H_

#include "cocos2d.h"

namespace cocos2d {

class CCCallFuncN {
public:
    virtual ~CCCallFuncN();
    virtual ~CCCallFuncN();
    virtual ~CCCallFuncN();

    void copyWithZone(cocos2d::CCZone*);
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*));
    void getClassTypeInfo();
    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*));
    void create(int);
    void execute();

};

} // namespace cocos2d

#endif // COCOS2D_CCCALLFUNCN_H_
