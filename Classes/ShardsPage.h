// ============================================================
// ShardsPage.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SHARDSPAGE_H_
#define SHARDSPAGE_H_

#include "cocos2d.h"

class ShardsPage {
public:
    virtual ~ShardsPage();
    virtual ~ShardsPage();
    virtual ~ShardsPage();

    void onIconInfo(cocos2d::CCObject*);
    void onSwitchPage(cocos2d::CCObject*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void registerWithTouchDispatcher();
    void init();
    void show();
    void create();
    void onClose(cocos2d::CCObject*);
    void goToPage(int);

};

#endif // SHARDSPAGE_H_
