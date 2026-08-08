// ============================================================
// ShareLevelLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SHARELEVELLAYER_H_
#define SHARELEVELLAYER_H_

#include "cocos2d.h"

class ShareLevelLayer {
public:
    virtual ~ShareLevelLayer();
    virtual ~ShareLevelLayer();
    virtual ~ShareLevelLayer();

    void onSettings(cocos2d::CCObject*);
    void setupStars();
    void selectRating(cocos2d::CCObject*);
    void getStarsButton(int, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float);
    void keyBackClicked();
    void init(GJGameLevel*);
    void create(GJGameLevel*);
    void onClose(cocos2d::CCObject*);
    void onShare(cocos2d::CCObject*);

};

#endif // SHARELEVELLAYER_H_
