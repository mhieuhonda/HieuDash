
#ifndef TRANSFORMTRIGGERGAMEOBJECT_H_
#define TRANSFORMTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class TransformTriggerGameObject {
public:
    virtual ~TransformTriggerGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // TRANSFORMTRIGGERGAMEOBJECT_H_
