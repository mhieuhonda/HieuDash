
#ifndef SETUPINSTANTCOUNTPOPUP_H_
#define SETUPINSTANTCOUNTPOPUP_H_

#include "cocos2d.h"

class SetupInstantCountPopup {
public:
    virtual ~SetupInstantCountPopup();

    void onCountType(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void updateItemID();
    void onEnableGroup(cocos2d::CCObject*);
    void updateTargetID();
    void onTargetIDArrow(cocos2d::CCObject*);
    void onTargetID2Arrow(cocos2d::CCObject*);
    void updateTargetCount();
    void onTargetCountArrow(cocos2d::CCObject*);
    void determineStartValues();
    void updateItemIDInputLabel();
    void updateTargetIDInputLabel();
    void updateCountTextInputLabel();
    void init(CountTriggerGameObject*, cocos2d::CCArray*);
    void create(CountTriggerGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPINSTANTCOUNTPOPUP_H_
