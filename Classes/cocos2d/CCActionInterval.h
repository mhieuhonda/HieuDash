// ============================================================
// CCActionInterval.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCACTIONINTERVAL_H_
#define COCOS2D_CCACTIONINTERVAL_H_

#include "cocos2d.h"

namespace cocos2d {

class CCActionInterval {
public:
    virtual ~CCActionInterval();
    virtual ~CCActionInterval();
    virtual ~CCActionInterval();

    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void getAmplitudeRate();
    void initWithDuration(float);
    void setAmplitudeRate(float);
    void step(float);
    void create(float);
    void isDone();
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCACTIONINTERVAL_H_
