
#ifndef SETUPPICKUPTRIGGERPOPUP_H_
#define SETUPPICKUPTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupPickupTriggerPopup {
public:
    virtual ~SetupPickupTriggerPopup();

    void updateState();
    void onPlusButton(cocos2d::CCObject*);
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPPICKUPTRIGGERPOPUP_H_
