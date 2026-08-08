
#ifndef SETUPGRAVITYTRIGGERPOPUP_H_
#define SETUPGRAVITYTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupGravityTriggerPopup {
public:
    virtual ~SetupGravityTriggerPopup();

    void valueDidChange(int, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPGRAVITYTRIGGERPOPUP_H_
