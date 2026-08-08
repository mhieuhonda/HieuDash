// ============================================================
// EffectGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef EFFECTGAMEOBJECT_H_
#define EFFECTGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class EffectGameObject {
public:
    EffectGameObject();
    EffectGameObject();

    virtual ~EffectGameObject();
    virtual ~EffectGameObject();
    virtual ~EffectGameObject();

    void canReverse();
    void firstSetup();
    void setOpacity(unsigned char);
    void setRScaleX(float);
    void setRScaleY(float);
    void customSetup();
    void setTargetID(int);
    void canBeOrdered();
    void setTargetID2(int);
    void getSaveString(GJBaseGameLayer*);
    void restoreObject();
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void getObjectLabel();
    void setObjectLabel(cocos2d::CCLabelBMFont*);
    void spawnXPosition();
    void canSpawnTriggers();
    void hasSpawnTargetID(int);
    void triggerActivated(float);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void playTriggerEffect();
    void resetSpawnTrigger();
    void stateSensitiveOff(GJBaseGameLayer*);
    void updateSpecialColor();
    void updateSpeedModType();
    void getTargetColorIndex();
    void isSpecialSpawnObject();
    void triggerEffectFinished();
    void updateInteractiveHover(float);
    void init(char const*);
    void create(char const*);

};

#endif // EFFECTGAMEOBJECT_H_
