// ============================================================
// CCCallFuncND.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCCALLFUNCND_H_
#define COCOS2D_CCCALLFUNCND_H_

#include "cocos2d.h"

namespace cocos2d {

class CCCallFuncND {
public:
    virtual ~CCCallFuncND();
    virtual ~CCCallFuncND();
    virtual ~CCCallFuncND();

    void copyWithZone(cocos2d::CCZone*);
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*);
    void getClassTypeInfo();
    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*);
    void execute();

};

} // namespace cocos2d

#endif // COCOS2D_CCCALLFUNCND_H_
