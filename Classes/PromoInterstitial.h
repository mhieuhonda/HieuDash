// ============================================================
// PromoInterstitial.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PROMOINTERSTITIAL_H_
#define PROMOINTERSTITIAL_H_

#include "cocos2d.h"

class PromoInterstitial {
public:
    virtual ~PromoInterstitial();
    virtual ~PromoInterstitial();
    virtual ~PromoInterstitial();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void keyBackClicked();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void init(bool);
    void show();
    void setup();
    void create(bool);
    void onClick(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // PROMOINTERSTITIAL_H_
