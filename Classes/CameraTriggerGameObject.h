
#ifndef CAMERATRIGGERGAMEOBJECT_H_
#define CAMERATRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class CameraTriggerGameObject : public EffectGameObject {
public:
    virtual ~CameraTriggerGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // CAMERATRIGGERGAMEOBJECT_H_
