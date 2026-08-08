// ============================================================
// SetupAdvFollowPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPADVFOLLOWPOPUP_H_
#define SETUPADVFOLLOWPOPUP_H_

#include "cocos2d.h"

class SetupAdvFollowPopup {
public:
    virtual ~SetupAdvFollowPopup();
    virtual ~SetupAdvFollowPopup();
    virtual ~SetupAdvFollowPopup();

    void updateMode(int);
    void valueDidChange(int, float);
    void selectPremadeClosed(SelectPremadeLayer*, int);
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void updateDefaultTriggerValues();
    void init(AdvancedFollowTriggerObject*, cocos2d::CCArray*);
    void create(AdvancedFollowTriggerObject*, cocos2d::CCArray*);
    void onMode(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onPremade(cocos2d::CCObject*);

};

#endif // SETUPADVFOLLOWPOPUP_H_
