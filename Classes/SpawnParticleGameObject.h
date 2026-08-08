// ============================================================
// SpawnParticleGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SPAWNPARTICLEGAMEOBJECT_H_
#define SPAWNPARTICLEGAMEOBJECT_H_

#include <string>
#include <vector>

class SpawnParticleGameObject {
public:
    virtual ~SpawnParticleGameObject();
    virtual ~SpawnParticleGameObject();
    virtual ~SpawnParticleGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // SPAWNPARTICLEGAMEOBJECT_H_
