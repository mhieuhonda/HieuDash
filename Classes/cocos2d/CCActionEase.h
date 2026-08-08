// ============================================================
// CCActionEase.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCACTIONEASE_H_
#define COCOS2D_CCACTIONEASE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCActionEase {
public:
    virtual ~CCActionEase();
    virtual ~CCActionEase();
    virtual ~CCActionEase();

    void copyWithZone(cocos2d::CCZone*);
    void getInnerAction();
    void initWithAction(cocos2d::CCActionInterval*);
    void startWithTarget(cocos2d::CCNode*);
    void stop();
    void create(cocos2d::CCActionInterval*);
    void update(float);
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCACTIONEASE_H_
