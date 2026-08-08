
#ifndef SETUPSHADEREFFECTPOPUP_H_
#define SETUPSHADEREFFECTPOPUP_H_

#include "cocos2d.h"

class SetupShaderEffectPopup {
public:
    virtual ~SetupShaderEffectPopup();

    void setupBulge();
    void setupPinch();
    void setupSepia();
    void setupGlitch();
    void toggleGroup(int, bool);
    void onResetColors(cocos2d::CCObject*);
    void setupHueShift();
    void setupPixelate();
    void setupChromatic();
    void setupGrayscale();
    void setupShockLine();
    void setupShockWave();
    void valueDidChange(int, float);
    void zLayerToString(int);
    void setupLensCircle();
    void setupMotionBlur();
    void setupRadialBlur();
    void setupColorChange();
    void setupInvertColor();
    void setupSplitScreen();
    void setupShaderTrigger();
    void updateZLayerButtons();
    void setupChromaticGlitch();
    void updateDefaultTriggerValues();
    void init(EffectGameObject*, cocos2d::CCArray*, int);
    void create(EffectGameObject*, cocos2d::CCArray*, int);
    void onClose(cocos2d::CCObject*);
    void onZLayer(cocos2d::CCObject*);

};

#endif // SETUPSHADEREFFECTPOPUP_H_
