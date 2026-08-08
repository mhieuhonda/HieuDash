
#ifndef SETUPBGSPEEDTRIGGER_H_
#define SETUPBGSPEEDTRIGGER_H_

#include "cocos2d.h"

class SetupBGSpeedTrigger {
public:
    virtual ~SetupBGSpeedTrigger();

    void init(EffectGameObject*, cocos2d::CCArray*, int);
    void create(EffectGameObject*, cocos2d::CCArray*, int);

};

#endif // SETUPBGSPEEDTRIGGER_H_
