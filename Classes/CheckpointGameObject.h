// ============================================================
// CheckpointGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CHECKPOINTGAMEOBJECT_H_
#define CHECKPOINTGAMEOBJECT_H_

#include <string>
#include <vector>

class CheckpointGameObject {
public:
    virtual ~CheckpointGameObject();
    virtual ~CheckpointGameObject();
    virtual ~CheckpointGameObject();

    void resetObject();
    void getSaveString(GJBaseGameLayer*);
    void restoreObject();
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void resetCheckpoint();
    void triggerActivated(float);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void setupCustomSprites(std::string);
    void updateSyncedAnimation(float, int);
    void updateCheckpointSpriteVisibility();
    void init();
    void create();

};

#endif // CHECKPOINTGAMEOBJECT_H_
