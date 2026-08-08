// ============================================================
// LoadingCircle.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LOADINGCIRCLE_H_
#define LOADINGCIRCLE_H_

#include "cocos2d.h"

class LoadingCircle {
public:
    virtual ~LoadingCircle();
    virtual ~LoadingCircle();
    virtual ~LoadingCircle();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void fadeAndRemove();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void registerWithTouchDispatcher();
    void draw();
    void init();
    void show();
    void create();

};

#endif // LOADINGCIRCLE_H_
