// ============================================================
// CCCallFunc.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCCALLFUNC_H_
#define COCOS2D_CCCALLFUNC_H_

#include "cocos2d.h"

namespace cocos2d {

class CCCallFunc {
public:
    virtual ~CCCallFunc();
    virtual ~CCCallFunc();
    virtual ~CCCallFunc();

    void copyWithZone(cocos2d::CCZone*);
    void initWithTarget(cocos2d::CCObject*);
    void create(cocos2d::CCObject*, void (cocos2d::CCObject::*)());
    void create(int);
    void update(float);
    void execute();

};

} // namespace cocos2d

#endif // COCOS2D_CCCALLFUNC_H_
