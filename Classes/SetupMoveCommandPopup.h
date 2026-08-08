// ============================================================
// SetupMoveCommandPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPMOVECOMMANDPOPUP_H_
#define SETUPMOVECOMMANDPOPUP_H_

#include "cocos2d.h"

class SetupMoveCommandPopup {
public:
    virtual ~SetupMoveCommandPopup();
    virtual ~SetupMoveCommandPopup();
    virtual ~SetupMoveCommandPopup();

    void valueDidChange(int, float);
    void updateInputNode(int, float);
    void updateInputValue(int, float&);
    void updateControlVisibility();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPMOVECOMMANDPOPUP_H_
