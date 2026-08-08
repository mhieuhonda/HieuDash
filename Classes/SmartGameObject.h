// ============================================================
// SmartGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SMARTGAMEOBJECT_H_
#define SMARTGAMEOBJECT_H_

#include <string>
#include <vector>

class SmartGameObject {
public:
    virtual ~SmartGameObject();
    virtual ~SmartGameObject();
    virtual ~SmartGameObject();

    void getSaveString(GJBaseGameLayer*);
    void updateSmartFrame();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SMARTGAMEOBJECT_H_
