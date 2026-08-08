// ============================================================
// MenuGameLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MENUGAMELAYER_H_
#define MENUGAMELAYER_H_

#include "cocos2d.h"

class MenuGameLayer {
public:
    virtual ~MenuGameLayer();
    virtual ~MenuGameLayer();
    virtual ~MenuGameLayer();

    void getBGColor(int);
    void resetPlayer();
    void updateColor(float);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void updateColors();
    void destroyPlayer();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void registerWithTouchDispatcher();
    void init();
    void create();
    void update(float);
    void tryJump(float);

protected:
    cocos2d::_ccColor3B m_bGColor;

};

#endif // MENUGAMELAYER_H_
