// ============================================================
// SetupAreaAnimTriggerPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPAREAANIMTRIGGERPOPUP_H_
#define SETUPAREAANIMTRIGGERPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetupAreaAnimTriggerPopup {
public:
    virtual ~SetupAreaAnimTriggerPopup();
    virtual ~SetupAreaAnimTriggerPopup();
    virtual ~SetupAreaAnimTriggerPopup();

    void valueDidChange(int, float);
    void updateTargetIDLabel();
    void onDeactivateAnimValue(cocos2d::CCObject*);
    void updateDefaultTriggerValues();
    void createValueControlAdvancedAnim(int, std::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle);
    void init(EnterEffectObject*, cocos2d::CCArray*, int);
    void create(EnterEffectObject*, cocos2d::CCArray*, int);

};

#endif // SETUPAREAANIMTRIGGERPOPUP_H_
