// ============================================================
// ObjectControlGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef OBJECTCONTROLGAMEOBJECT_H_
#define OBJECTCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class ObjectControlGameObject {
public:
    virtual ~ObjectControlGameObject();
    virtual ~ObjectControlGameObject();
    virtual ~ObjectControlGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // OBJECTCONTROLGAMEOBJECT_H_
