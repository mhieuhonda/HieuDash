// ============================================================
// SetupAreaTintTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPAREATINTTRIGGERPOPUP_H_
#define SETUPAREATINTTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAreaTintTriggerPopup {
public:
    virtual ~SetupAreaTintTriggerPopup();
    virtual ~SetupAreaTintTriggerPopup();
    virtual ~SetupAreaTintTriggerPopup();

    void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue);
    void valueDidChange(int, float);
    void updateHSVButton();
    void determineStartValues();
    void init(EnterEffectObject*, cocos2d::CCArray*);
    void onHSV(cocos2d::CCObject*);
    void create(EnterEffectObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPAREATINTTRIGGERPOPUP_H_
