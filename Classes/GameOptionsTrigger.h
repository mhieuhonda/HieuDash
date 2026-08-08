// ============================================================
// GameOptionsTrigger.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAMEOPTIONSTRIGGER_H_
#define GAMEOPTIONSTRIGGER_H_

#include <string>
#include <vector>

class GameOptionsTrigger {
public:
    virtual ~GameOptionsTrigger();
    virtual ~GameOptionsTrigger();
    virtual ~GameOptionsTrigger();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // GAMEOPTIONSTRIGGER_H_
