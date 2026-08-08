// ============================================================
// AdvancedFollowEditObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ADVANCEDFOLLOWEDITOBJECT_H_
#define ADVANCEDFOLLOWEDITOBJECT_H_

#include <string>
#include <vector>

class AdvancedFollowEditObject {
public:
    virtual ~AdvancedFollowEditObject();
    virtual ~AdvancedFollowEditObject();
    virtual ~AdvancedFollowEditObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ADVANCEDFOLLOWEDITOBJECT_H_
