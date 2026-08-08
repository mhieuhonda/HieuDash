
#ifndef SETUPSTOPTRIGGERPOPUP_H_
#define SETUPSTOPTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupStopTriggerPopup {
public:
    virtual ~SetupStopTriggerPopup();

    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPSTOPTRIGGERPOPUP_H_
