#ifndef _GHOSTTRAILEFFECT_H_
#define _GHOSTTRAILEFFECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GhostTrailEffect {
public:
    GhostTrailEffect();
    create();
    doBlendAdditive();
    draw();
    getBlendFunc();
    getDelegate();
    getGhostColor();
    getPTarget();
    getPosTarget();
    getStartAlpha();
    getTarget();
    init();
    runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool);
    setBlendFunc(cocos2d::_ccBlendFunc);
    setDelegate(GhostTrailDelegate*);
    setGhostColor(cocos2d::_ccColor3B);
    setPTarget(cocos2d::CCNode*);
    setPosTarget(cocos2d::CCSprite*);
    setStartAlpha(float);
    setTarget(cocos2d::CCSprite*);
    stopTrail();
    trailSnapshot();
    ~GhostTrailEffect();
};

#endif // _GHOSTTRAILEFFECT_H_
