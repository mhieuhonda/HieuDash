// ============================================================
// PlayerControlGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PLAYERCONTROLGAMEOBJECT_H_
#define PLAYERCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class PlayerControlGameObject {
public:
    virtual ~PlayerControlGameObject();
    virtual ~PlayerControlGameObject();
    virtual ~PlayerControlGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // PLAYERCONTROLGAMEOBJECT_H_
