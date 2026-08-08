// ============================================================
// ColorSelectPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COLORSELECTPOPUP_H_
#define COLORSELECTPOPUP_H_

#include "cocos2d.h"
#include <string>

class ColorSelectPopup : public cocos2d::CCLayer {
public:
    virtual ~ColorSelectPopup();
    virtual ~ColorSelectPopup();
    virtual ~ColorSelectPopup();

    void colorToHex(cocos2d::_ccColor3B);
    void hexToColor(std::string);
    void selectColor(cocos2d::_ccColor3B);
    void textChanged(CCTextInputNode*);
    void onTintGround(cocos2d::CCObject*);
    void getColorValue();
    void onCopyOpacity(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void updateHSVMode();
    void updateOpacity();
    void keyBackClicked() override;
    void onPlayerColor1(cocos2d::CCObject*);
    void onPlayerColor2(cocos2d::CCObject*);
    void updateDurLabel();
    void updateDuration();
    void updateHSVValue();
    void onHSVLegacyMode(cocos2d::CCObject*);
    void onToggleHSVMode(cocos2d::CCObject*);
    void updateCopyColor();
    void closeColorSelect(cocos2d::CCObject*);
    void onToggleTintMode(cocos2d::CCObject*);
    void updateColorValue();
    void colorSelectClosed(GJSpecialColorSelect*, int);
    void colorValueChanged(cocos2d::_ccColor3B);
    void onUpdateCopyColor(cocos2d::CCObject*);
    void updateColorLabels();
    void updateOpacityLabel();
    void onUpdateCustomColor(cocos2d::CCObject*);
    void determineStartValues();
    void onSelectSpecialColor(cocos2d::CCObject*);
    void updateCustomColorIdx();
    void updateTextInputLabel();
    void updateCopyColorTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*, ColorAction*) override;
    void show();
    void create(cocos2d::_ccColor3B);
    void create(ColorAction*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*, ColorAction*);
    void onCopy(cocos2d::CCObject*);
    void onPaste(cocos2d::CCObject*);
    void onDefault(cocos2d::CCObject*);

protected:
    cocos2d::_ccColor3B m_colorValue;

};

#endif // COLORSELECTPOPUP_H_
