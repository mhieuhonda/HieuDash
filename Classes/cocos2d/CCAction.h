// ============================================================
// CCAction.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCACTION_H_
#define COCOS2D_CCACTION_H_

#include "cocos2d.h"

namespace cocos2d {

class CCAction {
public:
    CCAction();
    CCAction();

    virtual ~CCAction();
    virtual ~CCAction();
    virtual ~CCAction();

    void description();
    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void step(float);
    void stop();
    void create();
    void isDone();
    void setTag(int);
    void update(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCACTION_H_
