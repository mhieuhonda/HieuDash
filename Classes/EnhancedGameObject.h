
#ifndef ENHANCEDGAMEOBJECT_H_
#define ENHANCEDGAMEOBJECT_H_

#include <string>
#include <vector>

class EnhancedGameObject {
public:
    virtual ~EnhancedGameObject();

    void customSetup();
    void resetObject();
    void updateState(int);
    std::string getSaveString(GJBaseGameLayer*);
    void powerOnObject(int);
    void restoreObject();
    void powerOffObject();
    void updateUserCoin();
    bool canMultiActivate(bool);
    void deactivateObject(bool);
    bool hasBeenActivated();
    void saveActiveColors();
    void triggerActivated(float);
    void triggerAnimation();
    void activatedByPlayer(PlayerObject*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void stateSensitiveOff(GJBaseGameLayer*);
    void animationTriggered();
    EnhancedGameObject* createRotateAction(float, int);
    void getHasRotateAction();
    void updateRotateAction(float);
    void refreshRotateAction();
    void resetSyncedAnimation();
    bool canAllowMultiActivate();
    void getHasSyncedAnimation();
    void updateSyncedAnimation(float, int);
    void updateAnimateOnTrigger(bool);
    void previewAnimateOnTrigger();
    void setupAnimationVariables();
    void waitForAnimationTrigger();
    bool hasBeenActivatedByPlayer(PlayerObject*);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ENHANCEDGAMEOBJECT_H_
