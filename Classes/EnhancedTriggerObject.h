// ============================================================
// EnhancedTriggerObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ENHANCEDTRIGGEROBJECT_H_
#define ENHANCEDTRIGGEROBJECT_H_

#include <string>
#include <vector>

class EnhancedTriggerObject {
public:
    virtual ~EnhancedTriggerObject();
    virtual ~EnhancedTriggerObject();
    virtual ~EnhancedTriggerObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ENHANCEDTRIGGEROBJECT_H_
