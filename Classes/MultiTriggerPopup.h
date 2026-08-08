
#ifndef MULTITRIGGERPOPUP_H_
#define MULTITRIGGERPOPUP_H_

#include "cocos2d.h"

class MultiTriggerPopup {
public:
    virtual ~MultiTriggerPopup();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // MULTITRIGGERPOPUP_H_
