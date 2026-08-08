// ============================================================
// SetupOpacityPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPOPACITYPOPUP_H_
#define SETUPOPACITYPOPUP_H_

#include "cocos2d.h"

class SetupOpacityPopup {
public:
    virtual ~SetupOpacityPopup();
    virtual ~SetupOpacityPopup();
    virtual ~SetupOpacityPopup();

    void textChanged(CCTextInputNode*);
    void sliderChanged(cocos2d::CCObject*);
    void updateOpacity();
    void updateDurLabel(bool);
    void updateDuration();
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void updateOpacityLabel();
    void determineStartValues();
    void updateTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPOPACITYPOPUP_H_
