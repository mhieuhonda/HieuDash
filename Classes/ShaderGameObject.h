
#ifndef SHADERGAMEOBJECT_H_
#define SHADERGAMEOBJECT_H_

#include <string>
#include <vector>

class ShaderGameObject {
public:
    virtual ~ShaderGameObject();

    void customSetup();
    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SHADERGAMEOBJECT_H_
