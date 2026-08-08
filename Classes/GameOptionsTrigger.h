
#ifndef GAMEOPTIONSTRIGGER_H_
#define GAMEOPTIONSTRIGGER_H_

#include <string>
#include <vector>

class GameOptionsTrigger {
public:
    virtual ~GameOptionsTrigger();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // GAMEOPTIONSTRIGGER_H_
