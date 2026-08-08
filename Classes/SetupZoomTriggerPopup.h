
#ifndef SETUPZOOMTRIGGERPOPUP_H_
#define SETUPZOOMTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupZoomTriggerPopup {
public:
    virtual ~SetupZoomTriggerPopup();

    void determineStartValues();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPZOOMTRIGGERPOPUP_H_
