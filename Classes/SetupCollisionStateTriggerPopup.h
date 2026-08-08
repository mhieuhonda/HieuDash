
#ifndef SETUPCOLLISIONSTATETRIGGERPOPUP_H_
#define SETUPCOLLISIONSTATETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupCollisionStateTriggerPopup {
public:
    virtual ~SetupCollisionStateTriggerPopup();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPCOLLISIONSTATETRIGGERPOPUP_H_
