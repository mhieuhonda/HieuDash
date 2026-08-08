
#ifndef SETUPSPAWNPARTICLEPOPUP_H_
#define SETUPSPAWNPARTICLEPOPUP_H_

#include "cocos2d.h"

class SetupSpawnParticlePopup {
public:
    virtual ~SetupSpawnParticlePopup();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPSPAWNPARTICLEPOPUP_H_
