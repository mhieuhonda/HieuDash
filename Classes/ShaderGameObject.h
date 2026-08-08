// ============================================================
// ShaderGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SHADERGAMEOBJECT_H_
#define SHADERGAMEOBJECT_H_

#include <string>
#include <vector>

class ShaderGameObject {
public:
    virtual ~ShaderGameObject();
    virtual ~ShaderGameObject();
    virtual ~ShaderGameObject();

    void customSetup();
    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SHADERGAMEOBJECT_H_
