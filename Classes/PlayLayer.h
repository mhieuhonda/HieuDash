#ifndef HIEUDASH_PLAYLAYER_H_
#define HIEUDASH_PLAYLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "GJBaseGameLayer.h"

class PlayLayer : public GJBaseGameLayer {
public:
    PlayLayer();

    // --- Level and player ---
    GJGameLevel* m_pLevel;
    PlayerObject* m_pPlayer1;
    PlayerObject* m_pPlayer2;

    // --- Game state ---
    int m_nAttempts;
    bool m_bPracticeMode;
    bool m_bTestMode;
    bool m_bDead;
    double m_dTime;
    int m_nBestPercent;

    // --- Checkpoints ---
    cocos2d::CCArray* m_pCheckpointArray;

    // --- Visual ---
    GJGroundLayer* m_pGround;
    UILayer* m_pUILayer;

    // --- Methods ---
    void addToSection(GameObject*);
    void animateInGround(bool);
    void animateOutGround(bool);
    void animateOutGroundFinished();
    void applyEnterEffect(GameObject*);
    void cameraMoveX(float, float, float);
    void cameraMoveY(float, float, float);
    void checkCollisions(float);
    void checkSpawnObjects();
    PlayLayer* create(GJGameLevel*);
    void createCheckpoint();
    void createObjectsFromSetup(std::string);
    void destroyPlayer();
    void fullReset();
    int getActiveBGColor();
    int getAttempts();
    cocos2d::CCSpriteBatchNode* getBatchNode();
    cocos2d::CCSpriteBatchNode* getBatchNodeAdd();
    cocos2d::CCPoint getCameraPos();
    bool getCleanReset();
    float getClkTimer();
    float getGEM();
    PlayLayer* getGameLayer();
    int getJumps();
    CheckpointObject* getLastCheckpoint();
    GJGameLevel* getLevel();
    PlayerObject* getPlayer();
    bool getPracticeMode();
    int getRelativeMod(cocos2d::CCPoint, float, float, float);
    cocos2d::CCPoint getStartPos();
    bool getTestMode();
    UILayer* getUILayer();
    bool init(GJGameLevel*);
    void levelComplete();
    void loadLastCheckpoint();
    void markCheckpoint();
    void moveCameraToPos(cocos2d::CCPoint);
    void onEnterTransitionDidFinish();
    void onExit();
    void onQuit();
    void pauseGame();
    void playGravityEffect(bool);
    void registerActiveObject(GameObject*);
    void registerStateObject(GameObject*);
    void removeLastCheckpoint();
    void removeObjectFromSection(GameObject*);
    void reorderObjectSection(GameObject*);
    void resetLevel();
    void resume();
    cocos2d::CCScene* scene(GJGameLevel*);
    int sectionForPos(cocos2d::CCPoint);
    void setActiveEnterEffect(EnterEffect);
    void setCleanReset(bool);
    void setJumps(int);
    void setStartPos(cocos2d::CCPoint);
    void shakeCamera(float);
    void showCompleteEffect();
    void showCompleteText();
    void showEndLayer();
    void showHint();
    void spawnCircle();
    void spawnFirework();
    void startGame();
    void stopCameraShake();
    void storeCheckpoint(CheckpointObject*);
    void switchToFlyMode(GameObject*, bool);
    void tintBackground(cocos2d::_ccColor3B, float);
    void tintGround(cocos2d::_ccColor3B, float);
    void toggleAudioRain(bool);
    void toggleGlitter(bool);
    void togglePracticeMode(bool);
    void unregisterActiveObject(GameObject*);
    void unregisterStateObject(GameObject*);
    void update(float);
    void updateAttempts();
    void updateCamera(float);
    void updateTweenAction(float, char const*);
    void updateVisibility();
    ~PlayLayer();
};

#endif // HIEUDASH_PLAYLAYER_H_
