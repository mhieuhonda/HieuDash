// ============================================================
// CCBlink.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCBLINK_H_
#define COCOS2D_CCBLINK_H_

#include "cocos2d.h"

namespace cocos2d {

class CCBlink {
public:
    virtual ~CCBlink();
    virtual ~CCBlink();
    virtual ~CCBlink();

    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, unsigned int);
    void stop();
    void create(float, unsigned int);
    void update(float);
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCBLINK_H_
