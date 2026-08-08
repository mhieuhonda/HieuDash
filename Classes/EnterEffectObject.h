// ============================================================
// EnterEffectObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ENTEREFFECTOBJECT_H_
#define ENTEREFFECTOBJECT_H_

#include <string>
#include <vector>

class EnterEffectObject {
public:
    virtual ~EnterEffectObject();
    virtual ~EnterEffectObject();
    virtual ~EnterEffectObject();

    void customSetup();
    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void resetEnterAnimValues();
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ENTEREFFECTOBJECT_H_
