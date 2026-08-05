#ifndef HIEUDASH_GAMEEFFECTSMANAGER_H_
#define HIEUDASH_GAMEEFFECTSMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameEffectsManager : public cocos2d::CCObject {
public:
    GameEffectsManager();
    void addParticleEffect(cocos2d::CCParticleSystemQuad*, int);
    GameEffectsManager* create(PlayLayer*);
    bool init(PlayLayer*);
    void scaleParticle(cocos2d::CCParticleSystemQuad*, float);
    ~GameEffectsManager();
};

#endif // HIEUDASH_GAMEEFFECTSMANAGER_H_
