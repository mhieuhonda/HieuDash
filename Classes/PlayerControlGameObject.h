
#ifndef PLAYERCONTROLGAMEOBJECT_H_
#define PLAYERCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class PlayerControlGameObject : public GameObject {
public:
    virtual ~PlayerControlGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // PLAYERCONTROLGAMEOBJECT_H_
