// ============================================================
// SetupEnterEffectPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPENTEREFFECTPOPUP_H_
#define SETUPENTEREFFECTPOPUP_H_

#include "cocos2d.h"

class SetupEnterEffectPopup {
public:
    virtual ~SetupEnterEffectPopup();
    virtual ~SetupEnterEffectPopup();
    virtual ~SetupEnterEffectPopup();

    void onEnterType(cocos2d::CCObject*);
    void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue);
    void valueDidChange(int, float);
    void updateHSVButton();
    void updateInputNode(int, float);
    void updateInputValue(int, float&);
    void determineStartValues();
    void onNextFreeEnterChannel(cocos2d::CCObject*);
    void onNextFreeEnterEffectID(cocos2d::CCObject*);
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void init(EnterEffectObject*, cocos2d::CCArray*, int);
    void onHSV(cocos2d::CCObject*);
    void create(EnterEffectObject*, cocos2d::CCArray*, int);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPENTEREFFECTPOPUP_H_
