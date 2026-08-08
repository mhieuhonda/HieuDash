
#ifndef SMARTGAMEOBJECT_H_
#define SMARTGAMEOBJECT_H_

#include <string>
#include <vector>

class SmartGameObject {
public:
    virtual ~SmartGameObject();

    void getSaveString(GJBaseGameLayer*);
    void updateSmartFrame();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SMARTGAMEOBJECT_H_
