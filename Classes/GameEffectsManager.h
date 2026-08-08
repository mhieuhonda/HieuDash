// ============================================================
// GameEffectsManager.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAMEEFFECTSMANAGER_H_
#define GAMEEFFECTSMANAGER_H_

#include "cocos2d.h"

class GameEffectsManager {
public:
    virtual ~GameEffectsManager();
    virtual ~GameEffectsManager();
    virtual ~GameEffectsManager();

    void scaleParticle(cocos2d::CCParticleSystemQuad*, float);
    void addParticleEffect(cocos2d::CCParticleSystemQuad*, int);
    void init(PlayLayer*);
    void create(PlayLayer*);

};

#endif // GAMEEFFECTSMANAGER_H_
