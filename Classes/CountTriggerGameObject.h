
#ifndef COUNTTRIGGERGAMEOBJECT_H_
#define COUNTTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class CountTriggerGameObject : public EffectGameObject {
public:
    virtual ~CountTriggerGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // COUNTTRIGGERGAMEOBJECT_H_
