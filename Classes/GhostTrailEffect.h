// ============================================================
// GhostTrailEffect.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GHOSTTRAILEFFECT_H_
#define GHOSTTRAILEFFECT_H_

#include "cocos2d.h"

class GhostTrailEffect {
public:
    virtual ~GhostTrailEffect();
    virtual ~GhostTrailEffect();
    virtual ~GhostTrailEffect();

    void runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool);
    void trailSnapshot(float);
    void doBlendAdditive();
    void draw();
    void init();
    void create();
    void stopTrail();

};

#endif // GHOSTTRAILEFFECT_H_
