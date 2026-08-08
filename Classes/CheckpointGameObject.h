
#ifndef CHECKPOINTGAMEOBJECT_H_
#define CHECKPOINTGAMEOBJECT_H_

#include "GameObject.h"
#include <string>
#include <vector>

class CheckpointGameObject : public GameObject {
public:
    virtual ~CheckpointGameObject();

    void resetObject();
    std::string getSaveString(GJBaseGameLayer*);
    void restoreObject();
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void resetCheckpoint();
    void triggerActivated(float);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void setupCustomSprites(std::string);
    void updateSyncedAnimation(float, int);
    void updateCheckpointSpriteVisibility();
    bool init() override;
    void create();

protected:
    std::string m_saveString;

};

#endif // CHECKPOINTGAMEOBJECT_H_
