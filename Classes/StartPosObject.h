// ============================================================
// StartPosObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef STARTPOSOBJECT_H_
#define STARTPOSOBJECT_H_

#include <string>
#include <vector>

class StartPosObject {
public:
    virtual ~StartPosObject();
    virtual ~StartPosObject();
    virtual ~StartPosObject();

    void setSettings(LevelSettingsObject*);
    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void loadSettingsFromString(std::string);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // STARTPOSOBJECT_H_
