
#ifndef ENDTRIGGERGAMEOBJECT_H_
#define ENDTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class EndTriggerGameObject : public EffectGameObject {
public:
    virtual ~EndTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init() override;
    void create();

protected:
    std::string m_saveString;

};

#endif // ENDTRIGGERGAMEOBJECT_H_
