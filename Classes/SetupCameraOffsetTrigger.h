// ============================================================
// SetupCameraOffsetTrigger.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPCAMERAOFFSETTRIGGER_H_
#define SETUPCAMERAOFFSETTRIGGER_H_

#include "cocos2d.h"

class SetupCameraOffsetTrigger {
public:
    virtual ~SetupCameraOffsetTrigger();
    virtual ~SetupCameraOffsetTrigger();
    virtual ~SetupCameraOffsetTrigger();

    void textChanged(CCTextInputNode*);
    void onEasingRate(cocos2d::CCObject*);
    void onTargetMode(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void sliderXChanged(cocos2d::CCObject*);
    void sliderYChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void valuePopupClosed(ConfigureValuePopup*, float);
    void updateEasingLabel();
    void updateValueXLabel();
    void updateValueYLabel();
    void posFromSliderValue(float);
    void sliderValueFromPos(int);
    void determineStartValues();
    void updateEasingRateLabel();
    void updateMoveCommandPosX();
    void updateMoveCommandPosY();
    void updateMoveCommandEasing();
    void toggleEasingRateVisibility();
    void updateMoveCommandEasingRate();
    void init(CameraTriggerGameObject*, cocos2d::CCArray*);
    void create(CameraTriggerGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onEasing(cocos2d::CCObject*);

};

#endif // SETUPCAMERAOFFSETTRIGGER_H_
