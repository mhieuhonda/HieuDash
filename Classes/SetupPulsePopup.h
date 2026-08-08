// ============================================================
// SetupPulsePopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPPULSEPOPUP_H_
#define SETUPPULSEPOPUP_H_

#include "cocos2d.h"

class SetupPulsePopup {
public:
    virtual ~SetupPulsePopup();
    virtual ~SetupPulsePopup();
    virtual ~SetupPulsePopup();

    void onExclusive(cocos2d::CCObject*);
    void selectColor(cocos2d::_ccColor3B);
    void textChanged(CCTextInputNode*);
    void getColorValue();
    void sliderChanged(cocos2d::CCObject*);
    void updateHSVValue();
    void updateHoldTime();
    void updateTargetID();
    void onGroupMainOnly(cocos2d::CCObject*);
    void onHSVLegacyMode(cocos2d::CCObject*);
    void textInputOpened(CCTextInputNode*);
    void updateCopyColor();
    void updateHoldLabel(bool);
    void updatePulseMode();
    void updateColorValue();
    void updateFadeInTime();
    void colorSelectClosed(GJSpecialColorSelect*, int);
    void colorValueChanged(cocos2d::_ccColor3B);
    void onSelectPulseMode(cocos2d::CCObject*);
    void onUpdateCopyColor(cocos2d::CCObject*);
    void updateColorLabels();
    void updateFadeInLabel(bool);
    void updateFadeOutTime();
    void onSelectTargetMode(cocos2d::CCObject*);
    void updateFadeOutLabel(bool);
    void onUpdateCustomColor(cocos2d::CCObject*);
    void updateGroupMainOnly();
    void determineStartValues();
    void onGroupSecondaryOnly(cocos2d::CCObject*);
    void onSelectSpecialColor(cocos2d::CCObject*);
    void updateTextInputLabel();
    void updatePulseTargetType();
    void onSelectSpecialTargetID(cocos2d::CCObject*);
    void updateGroupSecondaryOnly();
    void updateCopyColorTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void show();
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onCopy(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onPaste(cocos2d::CCObject*);

protected:
    cocos2d::_ccColor3B m_colorValue;

};

#endif // SETUPPULSEPOPUP_H_
