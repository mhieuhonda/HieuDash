
#ifndef SONGTRIGGERGAMEOBJECT_H_
#define SONGTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class SongTriggerGameObject : public EffectGameObject {
public:
    virtual ~SongTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SONGTRIGGERGAMEOBJECT_H_
