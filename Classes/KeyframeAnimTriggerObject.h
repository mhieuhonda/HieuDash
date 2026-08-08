// ============================================================
// KeyframeAnimTriggerObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef KEYFRAMEANIMTRIGGEROBJECT_H_
#define KEYFRAMEANIMTRIGGEROBJECT_H_

#include <string>
#include <vector>

class KeyframeAnimTriggerObject {
public:
    virtual ~KeyframeAnimTriggerObject();
    virtual ~KeyframeAnimTriggerObject();
    virtual ~KeyframeAnimTriggerObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // KEYFRAMEANIMTRIGGEROBJECT_H_
