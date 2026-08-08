
#ifndef SETUPAREAMOVETRIGGERPOPUP_H_
#define SETUPAREAMOVETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAreaMoveTriggerPopup {
public:
    virtual ~SetupAreaMoveTriggerPopup();

    void getModeValues(int, int&, bool&, bool&);
    void valueDidChange(int, float);
    void onSpecialTarget(cocos2d::CCObject*);
    void updateInputNode(int, float);
    void updateInputValue(int, float&);
    void onNextFreeEffectID(cocos2d::CCObject*);
    void addAreaDefaultControls(int);
    void updateEnterTargetIDState();
    void updateDefaultTriggerValues();
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void init(EnterEffectObject*, cocos2d::CCArray*);
    void create(EnterEffectObject*, cocos2d::CCArray*);
    void onMode(cocos2d::CCObject*);

};

#endif // SETUPAREAMOVETRIGGERPOPUP_H_
