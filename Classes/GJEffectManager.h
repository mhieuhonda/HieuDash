// ============================================================
// GJEffectManager.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJEFFECTMANAGER_H_
#define GJEFFECTMANAGER_H_

#include "cocos2d.h"
#include <string>
#include <unordered_map>
#include <vector>

class GJEffectManager {
public:
    virtual ~GJEffectManager();
    virtual ~GJEffectManager();
    virtual ~GJEffectManager();

    void pauseTimer(int);
    void playerDied();
    void spawnGroup(int, float, bool, std::vector<int> const&, int, int);
    void startTimer(int, double, double, bool, bool, bool, float, bool, int, std::vector<int> const&, int, int);
    void colorExists(int);
    void itemWasUsed(int);
    void resumeTimer(int);
    void saveToState(EffectManagerState&);
    void shouldBlend(int);
    void spawnObject(GameObject*, float, std::vector<int> const&, int, int);
    void timeForItem(int);
    void timerExists(int);
    void toggleGroup(int, bool);
    void updateTimer(int, double);
    void countForItem(int);
    void playerButton(bool, bool);
    void resetEffects();
    void setFollowing(int, int, bool);
    void timerWasUsed(int);
    void updateColors(cocos2d::_ccColor3B, cocos2d::_ccColor3B);
    void updateTimers(float, float);
    void wasFollowing(int, int);
    void colorForIndex(int);
    void getMixedColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float);
    void getSaveString();
    void loadFromState(EffectManagerState&);
    void processColors();
    void updateEffects(float);
    void addCountToItem(int, int);
    void checkCollision(int const&, int const&);
    void colorForEffect(cocos2d::_ccColor3B, cocos2d::_ccHSVValue);
    void getColorAction(int);
    void getColorSprite(int);
    void isGroupEnabled(int);
    void runPulseEffect(int, bool, float, float, float, PulseEffectType, cocos2d::_ccColor3B, cocos2d::_ccHSVValue, int, bool, bool, bool, bool, int, int);
    void setColorAction(ColorAction*, int);
    void colorForGroupID(int, cocos2d::_ccColor3B const&, bool);
    void objectsCollided(int, int);
    void opacityForIndex(int);
    void postMoveActions();
    void runCountTrigger(int, int, bool, int, bool, std::vector<int> const&, int, int);
    void runDeathTrigger(int, bool, std::vector<int> const&, int, int);
    void runTimerTrigger(int, double, bool, int, std::vector<int> const&, int, int);
    void setupFromString(std::string);
    void wouldCreateLoop(InheritanceNode*, int);
    void hasBeenTriggered(int, int);
    void resetMoveActions();
    void storeTriggeredID(int, int);
    void createMoveCommand(cocos2d::CCPoint, int, float, int, float, bool, bool, bool, bool, float, float, int, int);
    void preCollisionCheck();
    void removeColorAction(int);
    void removeTriggeredID(int, int);
    void resetTriggeredIDs();
    void saveCompletedMove(int, double, double);
    void updateColorAction(ColorAction*);
    void addMoveCalculation(CCMoveCNode*, cocos2d::CCPoint, GameObject*);
    void colorActionChanged(ColorAction*);
    void getAllColorActions();
    void getAllColorSprites();
    void getMoveCommandNode(GroupCommandObject2*);
    void getPersistentState(std::unordered_map<int, int>, std::equal_to<int>, std::allocator<std::pair<const int, int> > >&, std::unordered_map<int, TimerItem>, std::equal_to<int>, std::allocator<std::pair<const int, TimerItem> > >&);
    void hasActiveDualTouch();
    void keyForGroupIDColor(int, cocos2d::_ccColor3B const&, bool);
    void opacityModForGroup(int);
    void postCollisionCheck();
    void prepareMoveActions(float, bool);
    void resetToggledGroups();
    void resetUsedItemState();
    void updateColorEffects(float);
    void updateCountForItem(int, int);
    void updatePulseEffects(float);
    void activeColorForIndex(int);
    void colorForPulseEffect(cocos2d::_ccColor3B const&, PulseEffectAction*);
    void createFollowCommand(float, float, float, int, int, int, int);
    void createRotateCommand(float, float, int, int, int, float, bool, bool, bool, int, int);
    void getLoadedMoveOffset(std::unordered_map<int, std::pair<double>, std::hash<int>, std::equal_to<int>, std::allocator<std::pair<const int, std::pair<double, double> > > >&);
    void getTempGroupCommand();
    void processPulseActions();
    void updateOpacityAction(OpacityEffectAction*);
    void updateSpawnTriggers(float);
    void getMoveCommandObject();
    void toggleItemPersistent(int, bool);
    void updateOpacityEffects(float);
    void activeOpacityForIndex(int);
    void calculateLightBGColor(cocos2d::_ccColor3B);
    void createKeyframeCommand(int, cocos2d::CCArray*, GameObject*, int, int, bool, float, float, float, float, float, float, std::vector<int> const&);
    void handleObjectCollision(bool, int, int);
    void removeAllPulseActions();
    void toggleTimerPersistent(int, bool);
    void tryGetMoveCommandNode(int);
    void createTransformCommand(double, double, double, double, bool, float, int, int, int, float, bool, bool, int, int);
    void processInheritedColors();
    void resetTempGroupCommands(bool);
    void runTouchTriggerCommand(int, bool, TouchTriggerType, TouchTriggerControl, bool, std::vector<int> const&, int, int);
    void calculateInheritedColor(int, ColorAction*);
    void processMoveCalculations();
    void registerRotationCommand(GroupCommandObject2*, bool);
    void runOpacityActionOnGroup(int, float, float, int, int);
    void transferPersistentItems();
    void controlActionsForTrigger(EffectGameObject*, GJActionCommand);
    void getOpacityActionForGroup(int);
    void getPersistentStateString();
    void hasPulseEffectForGroupID(int);
    void registerCollisionTrigger(int, int, int, bool, bool, std::vector<int> const&, int, int);
    void traverseInheritanceChain(InheritanceNode*);
    void calculateBaseActiveColors();
    void createPlayerFollowCommand(float, float, int, float, float, int, int, int);
    void loadPersistentStateString(std::string);
    void controlActionsForControlID(int, GJActionCommand);
    void updateActiveOpacityEffects();
    void addAllInheritedColorActions(cocos2d::CCArray*);
    void processCopyColorPulseActions();
    void removePersistentFromAllItems();
    void removePersistentFromAllTimers();
    void init();
    void reset();
    void create();

};

#endif // GJEFFECTMANAGER_H_
