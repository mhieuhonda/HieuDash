// ============================================================
// PlayLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PLAYLAYER_H_
#define PLAYLAYER_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class PlayLayer {
public:
    virtual ~PlayLayer();
    virtual ~PlayLayer();
    virtual ~PlayLayer();

    void playReplay(std::string);
    void posForTime(float);
    void postUpdate(float);
    void resetLevel();
    void startMusic();
    void timeForPos(cocos2d::CCPoint, int, int, bool, int);
    void checkForEnd();
    void colorObject(int, cocos2d::_ccColor3B);
    void commitJumps();
    void shouldBlend(int);
    void showNewBest(bool, int, int, bool, bool, bool);
    void spawnCircle();
    void updateColor(cocos2d::_ccColor3B&, float, int, bool, float, cocos2d::_ccHSVValue&, int, bool, EffectGameObject*, int, int);
    void canPauseGame();
    void dialogClosed(DialogLayer*);
    void prepareMusic(bool);
    void showEndLayer();
    void addToGroupOld(GameObject*);
    void checkSnapshot();
    void destroyPlayer(PlayerObject*, GameObject*);
    void levelComplete();
    void spawnFirework();
    void stopRecording();
    void toggleGlitter(bool);
    void getEndPosition();
    void getRelativeMod(cocos2d::CCPoint, float, float, float);
    void incrementJumps();
    void markCheckpoint();
    void showRetryLayer();
    void startRecording();
    void tryStartRecord();
    void updateAttempts();
    void updateTimeWarp(float);
    void queueCheckpoint();
    void shouldDebugDraw();
    void storeCheckpoint(CheckpointObject*);
    void toggleDebugDraw();
    void toggleInfoLabel();
    void updateInfoLabel();
    void updateTimeLabel(int, int, bool);
    void applyEnterEffect(GameObject*, int, bool);
    void checkpointWithID(int);
    void createCheckpoint();
    void currencyWillExit(CurrencyRewardLayer*);
    void delayedFullReset();
    void getTempMilliTime();
    void isGameplayActive();
    void opacityForObject(GameObject*);
    void removeAllObjects();
    void removeCheckpoint(bool);
    void resetSPTriggered();
    void resumeAndRestart(bool);
    void showCompleteText();
    void startGameDelayed();
    void updateVisibility(float);
    void delayedResetLevel();
    void getCurrentPercent();
    void getLastCheckpoint();
    void getRelativeModNew(cocos2d::CCPoint, float, float, bool, bool);
    void loadDefaultColors();
    void playGravityEffect(bool);
    void setupHasCompleted();
    void takeStateSnapshot();
    void toggleGhostEffect(int);
    void toggleProgressbar();
    void updateAttemptTime(float);
    void updateProgressbar();
    void activateEndTrigger(int, bool, bool);
    void loadFromCheckpoint(CheckpointObject*);
    void loadLastCheckpoint();
    void processCheckpoints();
    void removeFromGroupOld(GameObject*);
    void showCompleteEffect();
    void showTwoPlayerGuide();
    void toggleHideAttempts(bool);
    void toggleIgnoreDamage(bool);
    void toggleMGVisibility(bool);
    void togglePracticeMode(bool);
    void updateVerifyDamage();
    void checkpointActivated(CheckpointGameObject*);
    void optimizeColorGroups();
    void resetLevelFromStart();
    void updateTestModeLabel();
    void compareStateSnapshot();
    void getCurrentPercentInt();
    void removeAllCheckpoints();
    void updateScreenRotation(int, bool, bool, float, int, float, int, int);
    void gravityEffectFinished();
    void loadActiveSaveObjects(std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&);
    void optimizeOpacityGroups();
    void playEndAnimationToPos(cocos2d::CCPoint);
    void saveActiveSaveObjects(std::vector<SavedActiveObjectState>&, std::vector<SavedSpecialObjectState>&);
    void scanActiveSaveObjects();
    void startRecordingDelayed();
    void toggleMusicInPractice();
    void updateEffectPositions();
    void applyCustomEnterEffect(GameObject*, bool);
    void loadDynamicSaveObjects(std::vector<SavedObjectStateRef>&);
    void saveDynamicSaveObjects(std::vector<SavedObjectStateRef>&);
    void scanDynamicSaveObjects();
    void toggleGroundVisibility(bool);
    void circleWaveWillBeRemoved(CCCircleWave*);
    void updateDebugDrawSettings();
    void manualUpdateObjectColors(GameObject*);
    void processLoadedMoveActions();
    void toggleBGEffectVisibility(bool);
    void onEnterTransitionDidFinish();
    void activatePlatformerEndTrigger(EndTriggerGameObject*, std::vector<int> const&);
    void prepareCreateObjectsFromSetup(std::string&);
    void processCreateObjectsFromSetup();
    void createObjectsFromSetupFinished();
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint, bool);
    void init(GJGameLevel*, bool, bool);
    void scene(GJGameLevel*, bool, bool);
    void create(GJGameLevel*, bool, bool);
    void onExit();
    void onQuit();
    void resume();
    void flipArt(bool);
    void showHint();
    void testTime();
    void addCircle(CCCircleWave*);
    void addObject(GameObject*);
    void fullReset();
    void pauseGame(bool);
    void startGame();

};

#endif // PLAYLAYER_H_
