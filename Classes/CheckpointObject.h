#ifndef _CHECKPOINTOBJECT_H_
#define _CHECKPOINTOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CheckpointObject {
public:
    CheckpointObject();
    create();
    getActiveEnterEffect();
    getBGColor();
    getCameraPos();
    getCanJump();
    getFlipGravity();
    getFlyMode();
    getGhostType();
    getGroundColor();
    getObject();
    getPlayerPos();
    getPlayerYVel();
    getPortalObject();
    init();
    setActiveEnterEffect(EnterEffect);
    setBGColor(cocos2d::_ccColor3B);
    setCameraPos(cocos2d::CCPoint);
    setCanJump(bool);
    setFlipGravity(bool);
    setFlyMode(bool);
    setGhostType(int);
    setGroundColor(cocos2d::_ccColor3B);
    setObject(GameObject*);
    setPlayerPos(cocos2d::CCPoint);
    setPlayerYVel(float);
    setPortalObject(GameObject*);
    ~CheckpointObject();
};

#endif // _CHECKPOINTOBJECT_H_
