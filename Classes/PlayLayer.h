#ifndef _PLAYLAYER_H_
#define _PLAYLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class PlayLayer {
public:
    PlayLayer();
    addToSection(GameObject*);
    animateInGround(bool);
    animateOutGround(bool);
    animateOutGroundFinished();
    applyEnterEffect(GameObject*);
    cameraMoveX(float, float, float);
    cameraMoveY(float, float, float);
    checkCollisions(float);
    checkSpawnObjects();
    create(GJGameLevel*);
    createCheckpoint();
    createObjectsFromSetup(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    destroyPlayer();
    fullReset();
    getActiveBGColor();
    getAttempts();
    getBatchNode();
    getBatchNodeAdd();
    getCameraPos();
    getCleanReset();
    getClkTimer();
    getGEM();
    getGameLayer();
    getJumps();
    getLastCheckpoint();
    getLevel();
    getPlayer();
    getPracticeMode();
    getRelativeMod(cocos2d::CCPoint, float, float, float);
    getStartPos();
    getTestMode();
    getUILayer();
    init(GJGameLevel*);
    levelComplete();
    loadLastCheckpoint();
    markCheckpoint();
    moveCameraToPos(cocos2d::CCPoint);
    onEnterTransitionDidFinish();
    onExit();
    onQuit();
    pauseGame();
    playGravityEffect(bool);
    registerActiveObject(GameObject*);
    registerStateObject(GameObject*);
    removeLastCheckpoint();
    removeObjectFromSection(GameObject*);
    reorderObjectSection(GameObject*);
    resetLevel();
    resume();
    scene(GJGameLevel*);
    sectionForPos(cocos2d::CCPoint);
    setActiveEnterEffect(EnterEffect);
    setCleanReset(bool);
    setJumps(int);
    setStartPos(cocos2d::CCPoint);
    shakeCamera(float);
    showCompleteEffect();
    showCompleteText();
    showEndLayer();
    showHint();
    spawnCircle();
    spawnFirework();
    startGame();
    stopCameraShake();
    storeCheckpoint(CheckpointObject*);
    switchToFlyMode(GameObject*, bool);
    tintBackground(cocos2d::_ccColor3B, float);
    tintGround(cocos2d::_ccColor3B, float);
    toggleAudioRain(bool);
    toggleGlitter(bool);
    togglePracticeMode(bool);
    unregisterActiveObject(GameObject*);
    unregisterStateObject(GameObject*);
    update(float);
    updateAttempts();
    updateCamera(float);
    updateTweenAction(float, char const*);
    updateVisibility();
    ~PlayLayer();
};

#endif // _PLAYLAYER_H_
