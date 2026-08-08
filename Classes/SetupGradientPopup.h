// ============================================================
// SetupGradientPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPGRADIENTPOPUP_H_
#define SETUPGRADIENTPOPUP_H_

#include "cocos2d.h"

class SetupGradientPopup {
public:
    virtual ~SetupGradientPopup();
    virtual ~SetupGradientPopup();
    virtual ~SetupGradientPopup();

    void onBlending(cocos2d::CCObject*);
    void onPlusButton(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void updateBlending();
    void valueDidChange(int, float);
    void updateToggleItem(int, bool);
    void updateBlendingLabel();
    void updateZLayerButtons();
    void determineStartValues();
    void updateGradientLabels(bool);
    void init(GradientTriggerObject*, cocos2d::CCArray*);
    void create(GradientTriggerObject*, cocos2d::CCArray*);
    void onZLayer(cocos2d::CCObject*);

};

#endif // SETUPGRADIENTPOPUP_H_
