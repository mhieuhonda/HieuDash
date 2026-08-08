
#ifndef FORCEBLOCKGAMEOBJECT_H_
#define FORCEBLOCKGAMEOBJECT_H_

#include <string>
#include <vector>

class ForceBlockGameObject {
public:
    virtual ~ForceBlockGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void calculateForceToTarget(GameObject*);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // FORCEBLOCKGAMEOBJECT_H_
