// ============================================================
// ForceBlockGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef FORCEBLOCKGAMEOBJECT_H_
#define FORCEBLOCKGAMEOBJECT_H_

#include <string>
#include <vector>

class ForceBlockGameObject {
public:
    virtual ~ForceBlockGameObject();
    virtual ~ForceBlockGameObject();
    virtual ~ForceBlockGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void calculateForceToTarget(GameObject*);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // FORCEBLOCKGAMEOBJECT_H_
