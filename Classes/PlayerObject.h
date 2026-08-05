#ifndef _PLAYEROBJECT_H_
#define _PLAYEROBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class PlayerObject {
public:
    PlayerObject();
    activateStreak();
    checkSnapJumpToObject(GameObject*);
    collidedWithObject(float, GameObject*);
    create(int, cocos2d::CCLayer*);
    deactivateParticle();
    deactivateStreak();
    flipGravity(bool);
    flipMod();
    getFlyMode();
    getGameLayer();
    getGravityFlipped();
    getHasJumped();
    getHasRingJumped();
    getIsDead();
    getIsLocked();
    getLastGroundPos();
    getLastP();
    getOnGround();
    getPortalObject();
    getPortalP();
    getRealPosition();
    getTouchedRing();
    gravityDown();
    gravityUp();
    hitGround(bool);
    init(int, cocos2d::CCLayer*);
    loadFromCheckpoint(CheckpointObject*);
    lockPlayer();
    logValues();
    playerDestroyed();
    playerIsFalling();
    propellPlayer();
    pushButton(PlayerButton);
    releaseButton(PlayerButton);
    removePendingCheckpoint();
    resetObject();
    resetStreak();
    ringJump();
    runRotateAction();
    saveToCheckpoint(CheckpointObject*);
    setColor(cocos2d::_ccColor3B const&);
    setGameLayer(cocos2d::CCLayer*);
    setLastP(cocos2d::CCPoint);
    setOnGround(bool);
    setOpacity(unsigned char);
    setPortalObject(GameObject*);
    setPortalP(cocos2d::CCPoint);
    setSecondColor(cocos2d::_ccColor3B const&);
    setTouchedRing(GameObject*);
    spawnCircle();
    spawnPortalCircle(cocos2d::_ccColor3B, float);
    speedDown();
    speedUp();
    stopRotation();
    toggleFlyMode(bool);
    toggleGhostEffect(GhostType);
    touchedObject(GameObject*);
    tryPlaceCheckpoint();
    update(float);
    updateJump(float);
    updatePlayerFrame(int);
    updateShipRotation();
    yStartDown();
    yStartUp();
    ~PlayerObject();
};

#endif // _PLAYEROBJECT_H_
