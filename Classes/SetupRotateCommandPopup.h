// ============================================================
// SetupRotateCommandPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPROTATECOMMANDPOPUP_H_
#define SETUPROTATECOMMANDPOPUP_H_

#include "cocos2d.h"

class SetupRotateCommandPopup {
public:
    virtual ~SetupRotateCommandPopup();
    virtual ~SetupRotateCommandPopup();
    virtual ~SetupRotateCommandPopup();

    void valueDidChange(int, float);
    void updateInputNode(int, float);
    void onInfiniteDuration(cocos2d::CCObject*);
    void updateControlVisibility();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPROTATECOMMANDPOPUP_H_
