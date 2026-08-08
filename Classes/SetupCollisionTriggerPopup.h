
#ifndef SETUPCOLLISIONTRIGGERPOPUP_H_
#define SETUPCOLLISIONTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupCollisionTriggerPopup {
public:
    virtual ~SetupCollisionTriggerPopup();

    void onTargetP1(cocos2d::CCObject*);
    void onTargetP2(cocos2d::CCObject*);
    void onTargetPP(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateItemID();
    void onEnableGroup(cocos2d::CCObject*);
    void onItemIDArrow(cocos2d::CCObject*);
    void updateItemID2();
    void onItemID2Arrow(cocos2d::CCObject*);
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void onActivateOnExit(cocos2d::CCObject*);
    void determineStartValues();
    void updateItemIDInputLabel();
    void updateItemID2InputLabel();
    void updateTargetIDInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPCOLLISIONTRIGGERPOPUP_H_
