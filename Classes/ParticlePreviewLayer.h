// ============================================================
// ParticlePreviewLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PARTICLEPREVIEWLAYER_H_
#define PARTICLEPREVIEWLAYER_H_

#include "cocos2d.h"

class ParticlePreviewLayer {
public:
    virtual ~ParticlePreviewLayer();
    virtual ~ParticlePreviewLayer();
    virtual ~ParticlePreviewLayer();

    void preVisitWithClippingRect(cocos2d::CCRect);
    void draw();
    void init(cocos2d::CCParticleSystemQuad*);
    void visit();
    void create(cocos2d::CCParticleSystemQuad*);
    void postVisit();

};

#endif // PARTICLEPREVIEWLAYER_H_
