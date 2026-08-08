// ============================================================
// DashRingObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef DASHRINGOBJECT_H_
#define DASHRINGOBJECT_H_

#include <string>
#include <vector>

class DashRingObject {
public:
    virtual ~DashRingObject();
    virtual ~DashRingObject();
    virtual ~DashRingObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // DASHRINGOBJECT_H_
