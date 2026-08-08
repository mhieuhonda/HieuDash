
#ifndef SETUPAREAFADETRIGGERPOPUP_H_
#define SETUPAREAFADETRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupAreaFadeTriggerPopup {
public:
    virtual ~SetupAreaFadeTriggerPopup();

    void init(EnterEffectObject*, cocos2d::CCArray*);
    void create(EnterEffectObject*, cocos2d::CCArray*);

};

#endif // SETUPAREAFADETRIGGERPOPUP_H_
