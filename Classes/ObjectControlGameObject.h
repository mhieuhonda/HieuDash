
#ifndef OBJECTCONTROLGAMEOBJECT_H_
#define OBJECTCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class ObjectControlGameObject : public GameObject {
public:
    virtual ~ObjectControlGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // OBJECTCONTROLGAMEOBJECT_H_
