// ============================================================
// SetupCountTriggerPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPCOUNTTRIGGERPOPUP_H_
#define SETUPCOUNTTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupCountTriggerPopup {
public:
    virtual ~SetupCountTriggerPopup();
    virtual ~SetupCountTriggerPopup();
    virtual ~SetupCountTriggerPopup();

    void textChanged(CCTextInputNode*);
    void updateItemID();
    void onEnableGroup(cocos2d::CCObject*);
    void onItemIDArrow(cocos2d::CCObject*);
    void updateTargetID();
    void onMultiActivate(cocos2d::CCObject*);
    void onTargetIDArrow(cocos2d::CCObject*);
    void updateTargetCount();
    void onTargetCountArrow(cocos2d::CCObject*);
    void determineStartValues();
    void updateItemIDInputLabel();
    void updateTargetIDInputLabel();
    void updateCountTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPCOUNTTRIGGERPOPUP_H_
