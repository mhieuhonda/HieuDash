// ============================================================
// CCFollow.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCFOLLOW_H_
#define COCOS2D_CCFOLLOW_H_

#include "cocos2d.h"

namespace cocos2d {

class CCFollow {
public:
    virtual ~CCFollow();
    virtual ~CCFollow();
    virtual ~CCFollow();

    void copyWithZone(cocos2d::CCZone*);
    void initWithTarget(cocos2d::CCNode*, cocos2d::CCRect const&);
    void step(float);
    void stop();
    void create(cocos2d::CCNode*, cocos2d::CCRect const&);
    void isDone();

};

} // namespace cocos2d

#endif // COCOS2D_CCFOLLOW_H_
