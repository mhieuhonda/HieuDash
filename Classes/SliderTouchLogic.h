// ============================================================
// SliderTouchLogic.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SLIDERTOUCHLOGIC_H_
#define SLIDERTOUCHLOGIC_H_

#include "cocos2d.h"

class SliderTouchLogic {
public:
    virtual ~SliderTouchLogic();
    virtual ~SliderTouchLogic();
    virtual ~SliderTouchLogic();

    void setRotated(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setMaxOffset(float);
    void registerWithTouchDispatcher();
    void init(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float);
    void create(cocos2d::CCNode*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, char const*, float);

};

#endif // SLIDERTOUCHLOGIC_H_
