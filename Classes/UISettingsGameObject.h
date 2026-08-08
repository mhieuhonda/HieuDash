// ============================================================
// UISettingsGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef UISETTINGSGAMEOBJECT_H_
#define UISETTINGSGAMEOBJECT_H_

#include <string>
#include <vector>

class UISettingsGameObject {
public:
    virtual ~UISettingsGameObject();
    virtual ~UISettingsGameObject();
    virtual ~UISettingsGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // UISETTINGSGAMEOBJECT_H_
