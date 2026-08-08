// ============================================================
// CCSpeed.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSPEED_H_
#define COCOS2D_CCSPEED_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSpeed {
public:
    virtual ~CCSpeed();
    virtual ~CCSpeed();
    virtual ~CCSpeed();

    void copyWithZone(cocos2d::CCZone*);
    void initWithAction(cocos2d::CCActionInterval*, float);
    void setInnerAction(cocos2d::CCActionInterval*);
    void startWithTarget(cocos2d::CCNode*);
    void step(float);
    void stop();
    void create(cocos2d::CCActionInterval*, float);
    void isDone();
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCSPEED_H_
