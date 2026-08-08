// ============================================================
// CCParticleSystemQuad.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPARTICLESYSTEMQUAD_H_
#define COCOS2D_CCPARTICLESYSTEMQUAD_H_

#include "cocos2d.h"

namespace cocos2d {

class CCParticleSystemQuad {
public:
    CCParticleSystemQuad();
    CCParticleSystemQuad();

    virtual ~CCParticleSystemQuad();
    virtual ~CCParticleSystemQuad();
    virtual ~CCParticleSystemQuad();

    void setTexture(cocos2d::CCTexture2D*);
    void allocMemory();
    void initIndices();
    void setBatchNode(cocos2d::CCParticleBatchNode*);
    void setDisplayFrame(cocos2d::CCSpriteFrame*);
    void updateTexCoords();
    void setTotalParticles(unsigned int);
    void setTextureWithRect(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void initTexCoordsWithRect(cocos2d::CCRect const&);
    void initWithTotalParticles(unsigned int, bool);
    void listenBackToForeground(cocos2d::CCObject*);
    void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&);
    void createWithTotalParticles(unsigned int, bool);
    void draw();
    void create(char const*, bool);
    void create();
    void postStep();
    void setupVBO();

};

} // namespace cocos2d

#endif // COCOS2D_CCPARTICLESYSTEMQUAD_H_
