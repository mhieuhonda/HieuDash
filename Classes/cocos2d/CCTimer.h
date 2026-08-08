// ============================================================
// CCTimer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTIMER_H_
#define COCOS2D_CCTIMER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTimer {
public:
    CCTimer();
    CCTimer();

    virtual ~CCTimer();
    virtual ~CCTimer();
    virtual ~CCTimer();

    void setInterval(float);
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float));
    void initWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float), float, unsigned int, float);
    void timerWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float));
    void timerWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)(float), float);
    void initWithScriptHandler(int, float);
    void timerWithScriptHandler(int, float);
    void update(float);
    void getInterval()) const;
    void getSelector()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCTIMER_H_
