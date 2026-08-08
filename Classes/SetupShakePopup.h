// ============================================================
// SetupShakePopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPSHAKEPOPUP_H_
#define SETUPSHAKEPOPUP_H_

#include "cocos2d.h"

class SetupShakePopup {
public:
    virtual ~SetupShakePopup();
    virtual ~SetupShakePopup();
    virtual ~SetupShakePopup();

    void textChanged(CCTextInputNode*);
    void updateShake();
    void sliderChanged(cocos2d::CCObject*);
    void updateDurLabel(bool);
    void updateDuration();
    void updateInterval();
    void updateShakeLabel(bool);
    void updateIntervalLabel(bool);
    void determineStartValues();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPSHAKEPOPUP_H_
