// ============================================================
// CCActionTween.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCACTIONTWEEN_H_
#define COCOS2D_CCACTIONTWEEN_H_

#include "cocos2d.h"

namespace cocos2d {

class CCActionTween {
public:
    virtual ~CCActionTween();
    virtual ~CCActionTween();
    virtual ~CCActionTween();

    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, char const*, float, float);
    void updateTargetValue(float);
    void create(float, char const*, float, float);
    void create(float, int, float, float);
    void update(float);
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCACTIONTWEEN_H_
