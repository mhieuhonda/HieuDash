// ============================================================
// CCRepeatForever.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCREPEATFOREVER_H_
#define COCOS2D_CCREPEATFOREVER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCRepeatForever {
public:
    virtual ~CCRepeatForever();
    virtual ~CCRepeatForever();
    virtual ~CCRepeatForever();

    void copyWithZone(cocos2d::CCZone*);
    void initWithAction(cocos2d::CCActionInterval*);
    void startWithTarget(cocos2d::CCNode*);
    void step(float);
    void create(cocos2d::CCActionInterval*);
    void isDone();
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCREPEATFOREVER_H_
