// ============================================================
// SetupSequenceTriggerPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPSEQUENCETRIGGERPOPUP_H_
#define SETUPSEQUENCETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupSequenceTriggerPopup {
public:
    virtual ~SetupSequenceTriggerPopup();
    virtual ~SetupSequenceTriggerPopup();
    virtual ~SetupSequenceTriggerPopup();

    void onAddChance(cocos2d::CCObject*);
    void onChangeOrder(cocos2d::CCObject*);
    void onDeleteSelected(cocos2d::CCObject*);
    void updateGroupIDButtons();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(SequenceTriggerGameObject*);
    void create(SequenceTriggerGameObject*);
    void onSelect(cocos2d::CCObject*);

};

#endif // SETUPSEQUENCETRIGGERPOPUP_H_
