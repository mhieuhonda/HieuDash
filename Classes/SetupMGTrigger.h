// ============================================================
// SetupMGTrigger.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPMGTRIGGER_H_
#define SETUPMGTRIGGER_H_

#include "cocos2d.h"

class SetupMGTrigger {
public:
    virtual ~SetupMGTrigger();
    virtual ~SetupMGTrigger();
    virtual ~SetupMGTrigger();

    void textChanged(CCTextInputNode*);
    void onEasingRate(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void sliderYChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void valuePopupClosed(ConfigureValuePopup*, float);
    void updateEasingLabel();
    void updateValueYLabel();
    void posFromSliderValue(float);
    void sliderValueFromPos(int);
    void determineStartValues();
    void updateEasingRateLabel();
    void updateMoveCommandPosY();
    void updateMoveCommandEasing();
    void toggleEasingRateVisibility();
    void updateMoveCommandEasingRate();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onEasing(cocos2d::CCObject*);

};

#endif // SETUPMGTRIGGER_H_
