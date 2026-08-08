
#ifndef ITEMTRIGGERGAMEOBJECT_H_
#define ITEMTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class ItemTriggerGameObject {
public:
    virtual ~ItemTriggerGameObject();

    void customSetup();
    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ITEMTRIGGERGAMEOBJECT_H_
