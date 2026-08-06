#ifndef HIEUDASH_GHOSTTRAILEFFECT_H_
#define HIEUDASH_GHOSTTRAILEFFECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GhostTrailEffect : public cocos2d::CCNode {
public:
    GhostTrailEffect();

    // --- Trail properties ---
    float m_fInterval;
    float m_fDuration;
    cocos2d::CCSprite* m_pIcon;
    cocos2d::_ccBlendFunc m_eBlendFunc;
    cocos2d::CCSpriteBatchNode* m_pBatchNode;

    // --- Methods ---
    static GhostTrailEffect* create();
    void doBlendAdditive();
    void draw();
    int getBlendFunc();
    int getDelegate();
    int getGhostColor();
    int getPTarget();
    int getPosTarget();
    int getStartAlpha();
    int getTarget();
    bool init();
    void runWithTarget(cocos2d::CCSprite*, float, float, float, float, bool);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void setDelegate(GhostTrailDelegate*);
    void setGhostColor(cocos2d::_ccColor3B);
    void setPTarget(cocos2d::CCNode*);
    void setPosTarget(cocos2d::CCSprite*);
    void setStartAlpha(float);
    void setTarget(cocos2d::CCSprite*);
    void stopTrail();
    void trailSnapshot();
    ~GhostTrailEffect();
};

#endif // HIEUDASH_GHOSTTRAILEFFECT_H_
