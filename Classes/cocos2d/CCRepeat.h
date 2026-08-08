// ============================================================
// CCRepeat.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCREPEAT_H_
#define COCOS2D_CCREPEAT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCRepeat {
public:
    virtual ~CCRepeat();
    virtual ~CCRepeat();
    virtual ~CCRepeat();

    void copyWithZone(cocos2d::CCZone*);
    void initWithAction(cocos2d::CCFiniteTimeAction*, unsigned int);
    void startWithTarget(cocos2d::CCNode*);
    void stop();
    void create(cocos2d::CCFiniteTimeAction*, unsigned int);
    void isDone();
    void update(float);
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCREPEAT_H_
