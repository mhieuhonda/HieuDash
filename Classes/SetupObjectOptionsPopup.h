// ============================================================
// SetupObjectOptionsPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPOBJECTOPTIONSPOPUP_H_
#define SETUPOBJECTOPTIONSPOPUP_H_

#include "cocos2d.h"

class SetupObjectOptionsPopup {
public:
    virtual ~SetupObjectOptionsPopup();
    virtual ~SetupObjectOptionsPopup();
    virtual ~SetupObjectOptionsPopup();

    void onDontFade(cocos2d::CCObject*);
    void onIceBlock(cocos2d::CCObject*);
    void onPassable(cocos2d::CCObject*);
    void onDontBoost(cocos2d::CCObject*);
    void onDontEnter(cocos2d::CCObject*);
    void onGripSlope(cocos2d::CCObject*);
    void onNonStickX(cocos2d::CCObject*);
    void onNonStickY(cocos2d::CCObject*);
    void onAlwaysHide(cocos2d::CCObject*);
    void onDontBoostX(cocos2d::CCObject*);
    void onHighDetail(cocos2d::CCObject*);
    void onNoParticle(cocos2d::CCObject*);
    void onDisableGlow(cocos2d::CCObject*);
    void onExtraSticky(cocos2d::CCObject*);
    void onHideEffects(cocos2d::CCObject*);
    void keyBackClicked();
    void onCenterEffect(cocos2d::CCObject*);
    void onNoAudioScale(cocos2d::CCObject*);
    void onDisableObject(cocos2d::CCObject*);
    void onApplyScaleStick(cocos2d::CCObject*);
    void onToggleAreaParent(cocos2d::CCObject*);
    void onExtendedCollision(cocos2d::CCObject*);
    void onSinglePlayerTouch(cocos2d::CCObject*);
    void onToggleGroupParent(cocos2d::CCObject*);
    void determineStartValues();
    void init(GameObject*, cocos2d::CCArray*, SetGroupIDLayer*);
    void show();
    void create(GameObject*, cocos2d::CCArray*, SetGroupIDLayer*);
    void onClose(cocos2d::CCObject*);
    void onReverse(cocos2d::CCObject*);

};

#endif // SETUPOBJECTOPTIONSPOPUP_H_
