
#ifndef SETUPINSTANTCOLLISIONTRIGGERPOPUP_H_
#define SETUPINSTANTCOLLISIONTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupInstantCollisionTriggerPopup {
public:
    virtual ~SetupInstantCollisionTriggerPopup();

    void valueDidChange(int, float);
    void updateSpecialNodes();
    void updateDefaultTriggerValues();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPINSTANTCOLLISIONTRIGGERPOPUP_H_
