
#ifndef SETUPRESETTRIGGERPOPUP_H_
#define SETUPRESETTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupResetTriggerPopup {
public:
    virtual ~SetupResetTriggerPopup();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPRESETTRIGGERPOPUP_H_
