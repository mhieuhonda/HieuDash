
#ifndef SPAWNPARTICLEGAMEOBJECT_H_
#define SPAWNPARTICLEGAMEOBJECT_H_

#include <string>
#include <vector>

class SpawnParticleGameObject : public GameObject {
public:
    virtual ~SpawnParticleGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // SPAWNPARTICLEGAMEOBJECT_H_
