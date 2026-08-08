// ============================================================
// SetupItemCompareTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPITEMCOMPARETRIGGERPOPUP_H_
#define SETUPITEMCOMPARETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupItemCompareTriggerPopup {
public:
    virtual ~SetupItemCompareTriggerPopup();
    virtual ~SetupItemCompareTriggerPopup();
    virtual ~SetupItemCompareTriggerPopup();

    void onOpButton(cocos2d::CCObject*);
    void updateOpButton(CCMenuItemSpriteExtra*, int, int);
    void valueDidChange(int, float);
    void updateFormulaLabel();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(ItemTriggerGameObject*, cocos2d::CCArray*);
    void create(ItemTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPITEMCOMPARETRIGGERPOPUP_H_
