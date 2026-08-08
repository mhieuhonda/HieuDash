// ============================================================
// SetupRandTriggerPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPRANDTRIGGERPOPUP_H_
#define SETUPRANDTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupRandTriggerPopup {
public:
    virtual ~SetupRandTriggerPopup();
    virtual ~SetupRandTriggerPopup();
    virtual ~SetupRandTriggerPopup();

    void textChanged(CCTextInputNode*);
    void updateChance();
    void sliderChanged(cocos2d::CCObject*);
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void updateTargetID2();
    void onTargetID2Arrow(cocos2d::CCObject*);
    void updateChanceLabel(bool);
    void determineStartValues();
    void updateTextInputLabel();
    void updateTextInputLabel2();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPRANDTRIGGERPOPUP_H_
