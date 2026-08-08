// ============================================================
// SetupItemEditTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPITEMEDITTRIGGERPOPUP_H_
#define SETUPITEMEDITTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupItemEditTriggerPopup {
public:
    virtual ~SetupItemEditTriggerPopup();
    virtual ~SetupItemEditTriggerPopup();
    virtual ~SetupItemEditTriggerPopup();

    void onOpButton(cocos2d::CCObject*);
    void updateOpButton(CCMenuItemSpriteExtra*, int, int);
    void valueDidChange(int, float);
    void updateFormulaLabel();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(ItemTriggerGameObject*, cocos2d::CCArray*);
    void create(ItemTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPITEMEDITTRIGGERPOPUP_H_
