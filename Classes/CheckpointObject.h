#ifndef HIEUDASH_CHECKPOINTOBJECT_H_
#define HIEUDASH_CHECKPOINTOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CheckpointObject : public cocos2d::CCObject {
public:
    CheckpointObject();

    // --- Player checkpoints ---
    PlayerCheckpoint* m_pPlayer1Checkpoint;
    PlayerCheckpoint* m_pPlayer2Checkpoint;
    bool m_bTwoPlayer;

    // --- Camera/state ---
    cocos2d::CCPoint m_obCameraPos;
    double m_dTime;

    // --- Legacy properties ---
    CheckpointObject* create();
    EnterEffect getActiveEnterEffect();
    int getBGColor();
    cocos2d::CCPoint getCameraPos();
    bool getCanJump();
    int getFlipGravity();
    int getFlyMode();
    int getGhostType();
    int getGroundColor();
    int getObject();
    int getPlayerPos();
    int getPlayerYVel();
    int getPortalObject();
    bool init();
    void setActiveEnterEffect(EnterEffect);
    void setBGColor(cocos2d::_ccColor3B);
    void setCameraPos(cocos2d::CCPoint);
    void setCanJump(bool);
    void setFlipGravity(bool);
    void setFlyMode(bool);
    void setGhostType(int);
    void setGroundColor(cocos2d::_ccColor3B);
    void setObject(GameObject*);
    void setPlayerPos(cocos2d::CCPoint);
    void setPlayerYVel(float);
    void setPortalObject(GameObject*);
    ~CheckpointObject();
};

#endif // HIEUDASH_CHECKPOINTOBJECT_H_
