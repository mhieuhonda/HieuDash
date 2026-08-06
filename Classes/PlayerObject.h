#ifndef HIEUDASH_PLAYEROBJECT_H_
#define HIEUDASH_PLAYEROBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class PlayerObject : public cocos2d::CCNode {
public:
    PlayerObject();
    void activateStreak();
    void checkSnapJumpToObject(GameObject*);
    void collidedWithObject(float, GameObject*);
    static PlayerObject* create(int, cocos2d::CCLayer*);
    void deactivateParticle();
    void deactivateStreak();
    void flipGravity(bool);
    void flipMod();
    int getFlyMode();
    PlayLayer* getGameLayer();
    int getGravityFlipped();
    bool getHasJumped();
    bool getHasRingJumped();
    bool getIsDead();
    bool getIsLocked();
    int getLastGroundPos();
    int getLastP();
    int getOnGround();
    int getPortalObject();
    int getPortalP();
    int getRealPosition();
    int getTouchedRing();
    void gravityDown();
    void gravityUp();
    void hitGround(bool);
    bool init(int, cocos2d::CCLayer*);
    void loadFromCheckpoint(CheckpointObject*);
    void lockPlayer();
    void logValues();
    void playerDestroyed();
    void playerIsFalling();
    void propellPlayer();
    void pushButton(PlayerButton);
    void releaseButton(PlayerButton);
    void removePendingCheckpoint();
    void resetObject();
    void resetStreak();
    void ringJump();
    void runRotateAction();
    void saveToCheckpoint(CheckpointObject*);
    void setColor(cocos2d::_ccColor3B const&);
    void setGameLayer(cocos2d::CCLayer*);
    void setLastP(cocos2d::CCPoint);
    void setOnGround(bool);
    void setOpacity(unsigned char);
    void setPortalObject(GameObject*);
    void setPortalP(cocos2d::CCPoint);
    void setSecondColor(cocos2d::_ccColor3B const&);
    void setTouchedRing(GameObject*);
    void spawnCircle();
    void spawnPortalCircle(cocos2d::_ccColor3B, float);
    void speedDown();
    void speedUp();
    void stopRotation();
    void toggleFlyMode(bool);
    void toggleGhostEffect(GhostType);
    void touchedObject(GameObject*);
    void tryPlaceCheckpoint();
    void update(float);
    void updateJump(float);
    void updatePlayerFrame(int);
    void updateShipRotation();
    void yStartDown();
    void yStartUp();
    ~PlayerObject();
};

#endif // HIEUDASH_PLAYEROBJECT_H_
