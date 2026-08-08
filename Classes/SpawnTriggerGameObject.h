
#ifndef SPAWNTRIGGERGAMEOBJECT_H_
#define SPAWNTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class SpawnTriggerGameObject : public EffectGameObject {
public:
    virtual ~SpawnTriggerGameObject();

    void changeRemap(int, int, bool);
    void removeRemap(int, int);
    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void updateRemapKeys(std::vector<int> const&);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void getRemapWithSource(int);
    void getRemapWithTarget(int);
    void init() override;
    void create();
    void addRemap(int, int);

protected:
    std::string m_saveString;

};

#endif // SPAWNTRIGGERGAMEOBJECT_H_
