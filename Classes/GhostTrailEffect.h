
#ifndef GHOSTTRAILEFFECT_H_
#define GHOSTTRAILEFFECT_H_

#include "cocos2d.h"

class GhostTrailEffect : public cocos2d::CCNode {
public:
    virtual ~GhostTrailEffect();

    void runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool);
    void trailSnapshot(float);
    void doBlendAdditive();
    void draw();
    bool init();
    void create();
    void stopTrail();

};

#endif // GHOSTTRAILEFFECT_H_
