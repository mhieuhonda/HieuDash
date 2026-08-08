// ============================================================
// GJPathPage.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJPATHPAGE_H_
#define GJPATHPAGE_H_

#include "cocos2d.h"

class GJPathPage {
public:
    virtual ~GJPathPage();
    virtual ~GJPathPage();
    virtual ~GJPathPage();

    void onIconInfo(cocos2d::CCObject*);
    void keyBackClicked();
    void onActivatePath(cocos2d::CCObject*);
    void didPurchaseItem(GJStoreItem*);
    void playUnlockAnimation();
    void unlockAnimationStep2();
    void unlockAnimationStep3();
    void showCantAffordMessage(GJStoreItem*);
    void unlockAnimationFinished();
    void registerWithTouchDispatcher();
    void init(int, GJPathsLayer*);
    void show();
    void create(int, GJPathsLayer*);
    void onBack(cocos2d::CCObject*);
    void onUnlock(cocos2d::CCObject*);

};

#endif // GJPATHPAGE_H_
