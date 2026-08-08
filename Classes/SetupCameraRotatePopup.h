// ============================================================
// SetupCameraRotatePopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPCAMERAROTATEPOPUP_H_
#define SETUPCAMERAROTATEPOPUP_H_

#include "cocos2d.h"

class SetupCameraRotatePopup {
public:
    virtual ~SetupCameraRotatePopup();
    virtual ~SetupCameraRotatePopup();
    virtual ~SetupCameraRotatePopup();

    void textChanged(CCTextInputNode*);
    void onEasingRate(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void valuePopupClosed(ConfigureValuePopup*, float);
    void updateEasingLabel();
    void updateDegreesLabel();
    void determineStartValues();
    void sliderDegreesChanged(cocos2d::CCObject*);
    void updateCommandDegrees();
    void updateEasingRateLabel();
    void updateMoveCommandEasing();
    void toggleEasingRateVisibility();
    void updateMoveCommandEasingRate();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onEasing(cocos2d::CCObject*);

};

#endif // SETUPCAMERAROTATEPOPUP_H_
