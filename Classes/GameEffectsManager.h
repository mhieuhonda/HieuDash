#ifndef _GAMEEFFECTSMANAGER_H_
#define _GAMEEFFECTSMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameEffectsManager {
public:
    GameEffectsManager();
    addParticleEffect(cocos2d::CCParticleSystemQuad*, int);
    create(PlayLayer*);
    init(PlayLayer*);
    scaleParticle(cocos2d::CCParticleSystemQuad*, float);
    ~GameEffectsManager();
};

#endif // _GAMEEFFECTSMANAGER_H_
