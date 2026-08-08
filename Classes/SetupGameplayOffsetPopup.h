// ============================================================
// SetupGameplayOffsetPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPGAMEPLAYOFFSETPOPUP_H_
#define SETUPGAMEPLAYOFFSETPOPUP_H_

#include "cocos2d.h"

class SetupGameplayOffsetPopup {
public:
    virtual ~SetupGameplayOffsetPopup();
    virtual ~SetupGameplayOffsetPopup();
    virtual ~SetupGameplayOffsetPopup();

    void onDefaultValues(cocos2d::CCObject*);
    void updateInputNode(int, float);
    void updateInputValue(int, float&);
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPGAMEPLAYOFFSETPOPUP_H_
