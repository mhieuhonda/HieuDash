// ============================================================
// SetupRandAdvTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPRANDADVTRIGGERPOPUP_H_
#define SETUPRANDADVTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupRandAdvTriggerPopup {
public:
    virtual ~SetupRandAdvTriggerPopup();
    virtual ~SetupRandAdvTriggerPopup();
    virtual ~SetupRandAdvTriggerPopup();

    void onAddChance(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void removeGroupID(int);
    void addChanceToObject(RandTriggerGameObject*, int, int);
    void onRemoveFromGroup(cocos2d::CCObject*);
    void callRemoveFromGroup(float);
    void updateGroupIDButtons();
    void removeGroupIDFromObject(RandTriggerGameObject*, int);
    void init(RandTriggerGameObject*, cocos2d::CCArray*);
    void create(RandTriggerGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);
    void addChance(int, int);

};

#endif // SETUPRANDADVTRIGGERPOPUP_H_
