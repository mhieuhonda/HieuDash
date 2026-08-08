// ============================================================
// EnhancedGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ENHANCEDGAMEOBJECT_H_
#define ENHANCEDGAMEOBJECT_H_

#include <string>
#include <vector>

class EnhancedGameObject {
public:
    virtual ~EnhancedGameObject();
    virtual ~EnhancedGameObject();
    virtual ~EnhancedGameObject();

    void customSetup();
    void resetObject();
    void updateState(int);
    void getSaveString(GJBaseGameLayer*);
    void powerOnObject(int);
    void restoreObject();
    void powerOffObject();
    void updateUserCoin();
    void canMultiActivate(bool);
    void deactivateObject(bool);
    void hasBeenActivated();
    void saveActiveColors();
    void triggerActivated(float);
    void triggerAnimation();
    void activatedByPlayer(PlayerObject*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void stateSensitiveOff(GJBaseGameLayer*);
    void animationTriggered();
    void createRotateAction(float, int);
    void getHasRotateAction();
    void updateRotateAction(float);
    void refreshRotateAction();
    void resetSyncedAnimation();
    void canAllowMultiActivate();
    void getHasSyncedAnimation();
    void updateSyncedAnimation(float, int);
    void updateAnimateOnTrigger(bool);
    void previewAnimateOnTrigger();
    void setupAnimationVariables();
    void waitForAnimationTrigger();
    void hasBeenActivatedByPlayer(PlayerObject*);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ENHANCEDGAMEOBJECT_H_
