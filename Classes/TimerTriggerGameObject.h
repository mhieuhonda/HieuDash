
#ifndef TIMERTRIGGERGAMEOBJECT_H_
#define TIMERTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class TimerTriggerGameObject : public EffectGameObject {
public:
    virtual ~TimerTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // TIMERTRIGGERGAMEOBJECT_H_
