// ============================================================
// ColorSelectLiveOverlay.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COLORSELECTLIVEOVERLAY_H_
#define COLORSELECTLIVEOVERLAY_H_

#include "cocos2d.h"
#include <string>

class ColorSelectLiveOverlay {
public:
    virtual ~ColorSelectLiveOverlay();
    virtual ~ColorSelectLiveOverlay();
    virtual ~ColorSelectLiveOverlay();

    void onSelectTab(cocos2d::CCObject*);
    void selectColor(cocos2d::_ccColor3B);
    void textChanged(CCTextInputNode*);
    void getColorValue();
    void sliderChanged(cocos2d::CCObject*);
    void updateOpacity();
    void keyBackClicked();
    void toggleControls(bool);
    void textInputClosed(CCTextInputNode*);
    void closeColorSelect(cocos2d::CCObject*);
    void createWithObject(EffectGameObject*);
    void updateColorLabel();
    void updateColorValue();
    void colorValueChanged(cocos2d::_ccColor3B);
    void createWithActions(ColorAction*, ColorAction*);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void determineStartValues();
    void init(ColorAction*, ColorAction*, EffectGameObject*);
    void show();
    void create(ColorAction*, ColorAction*, EffectGameObject*);

protected:
    cocos2d::_ccColor3B m_colorValue;

};

#endif // COLORSELECTLIVEOVERLAY_H_
