// ============================================================
// SetupTimeWarpPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPTIMEWARPPOPUP_H_
#define SETUPTIMEWARPPOPUP_H_

#include "cocos2d.h"

class SetupTimeWarpPopup {
public:
    virtual ~SetupTimeWarpPopup();
    virtual ~SetupTimeWarpPopup();
    virtual ~SetupTimeWarpPopup();

    void sliderChanged(cocos2d::CCObject*);
    void updateTimeWarp();
    void updateTimeWarpLabel();
    void determineStartValues();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPTIMEWARPPOPUP_H_
