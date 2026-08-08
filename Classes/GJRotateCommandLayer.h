// ============================================================
// GJRotateCommandLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJROTATECOMMANDLAYER_H_
#define GJROTATECOMMANDLAYER_H_

#include "cocos2d.h"

class GJRotateCommandLayer {
public:
    virtual ~GJRotateCommandLayer();
    virtual ~GJRotateCommandLayer();
    virtual ~GJRotateCommandLayer();

    void textChanged(CCTextInputNode*);
    void onEasingRate(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void onLockRotation(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void onUpdateGroupID(cocos2d::CCObject*);
    void onFollowRotation(cocos2d::CCObject*);
    void onUpdateGroupID2(cocos2d::CCObject*);
    void updateTimesLabel();
    void valuePopupClosed(ConfigureValuePopup*, float);
    void updateEasingLabel();
    void sliderTimesChanged(cocos2d::CCObject*);
    void updateCommandTimes();
    void updateDegreesLabel();
    void updateTargetGroupID();
    void determineStartValues();
    void sliderDegreesChanged(cocos2d::CCObject*);
    void updateCommandDegrees();
    void updateTargetGroupID2();
    void updateTextInputLabel();
    void updateEasingRateLabel();
    void updateTextInputLabel2();
    void updateMoveCommandEasing();
    void toggleEasingRateVisibility();
    void updateMoveCommandEasingRate();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void onEasing(cocos2d::CCObject*);

};

#endif // GJROTATECOMMANDLAYER_H_
