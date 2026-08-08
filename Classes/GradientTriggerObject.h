// ============================================================
// GradientTriggerObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GRADIENTTRIGGEROBJECT_H_
#define GRADIENTTRIGGEROBJECT_H_

#include <string>
#include <vector>

class GradientTriggerObject {
public:
    virtual ~GradientTriggerObject();
    virtual ~GradientTriggerObject();
    virtual ~GradientTriggerObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // GRADIENTTRIGGEROBJECT_H_
