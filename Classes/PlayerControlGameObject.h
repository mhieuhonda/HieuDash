
#ifndef PLAYERCONTROLGAMEOBJECT_H_
#define PLAYERCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class PlayerControlGameObject {
public:
    virtual ~PlayerControlGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // PLAYERCONTROLGAMEOBJECT_H_
