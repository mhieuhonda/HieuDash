// ============================================================
// ScrollingLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SCROLLINGLAYER_H_
#define SCROLLINGLAYER_H_

#include "cocos2d.h"

class ScrollingLayer {
public:
    virtual ~ScrollingLayer();
    virtual ~ScrollingLayer();
    virtual ~ScrollingLayer();

    void getViewRect();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void setStartOffset(cocos2d::CCPoint);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void draw();
    void init(cocos2d::CCSize, cocos2d::CCPoint, float);
    void visit();
    void create(cocos2d::CCSize, cocos2d::CCPoint, float);

};

#endif // SCROLLINGLAYER_H_
