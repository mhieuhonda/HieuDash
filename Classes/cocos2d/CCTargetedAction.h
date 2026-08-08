// ============================================================
// CCTargetedAction.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTARGETEDACTION_H_
#define COCOS2D_CCTARGETEDACTION_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTargetedAction {
public:
    CCTargetedAction();
    CCTargetedAction();

    virtual ~CCTargetedAction();
    virtual ~CCTargetedAction();
    virtual ~CCTargetedAction();

    void copyWithZone(cocos2d::CCZone*);
    void initWithTarget(cocos2d::CCNode*, cocos2d::CCFiniteTimeAction*);
    void startWithTarget(cocos2d::CCNode*);
    void stop();
    void create(cocos2d::CCNode*, cocos2d::CCFiniteTimeAction*);
    void update(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCTARGETEDACTION_H_
