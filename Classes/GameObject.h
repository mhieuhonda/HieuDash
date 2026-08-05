#ifndef HIEUDASH_GAMEOBJECT_H_
#define HIEUDASH_GAMEOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameObject : public cocos2d::CCSprite {
public:
    GameObject();
    void activateObject();
    void addGlow();
    void calculateSpawnXPos();
    GameObject* create(char const*);
    void createAndAddParticle(char const*, int);
    void createObject(char const*);
    void customScaleMod(char const*);
    void customSetup();
    void deactivateObject();
    void frameToKey(char const*);
    int getBallFrame(int);
    int getBlendAdditive();
    int getDontTransform();
    int getEnterEffect();
    int getFrame();
    bool getHasBeenActivated();
    bool getIsDisabled();
    bool getIsInvisible();
    int getM_ID();
    int getObjectKey();
    int getObjectParent();
    int getObjectRect();
    int getObjectRect(float, float);
    int getObjectZ();
    int getRealPosition();
    int getSaveString();
    int getScaleModX();
    int getScaleModY();
    int getSectionIdx();
    int getShouldHide();
    int getShouldSpawn();
    int getSpawnXPos();
    cocos2d::CCPoint getStartPos();
    int getStartRotation();
    int getStartScaleX();
    int getStartScaleY();
    int getStateVar();
    int getTintColor();
    int getTintDuration();
    int getType();
    int getUsePlayerColor();
    bool init(char const*);
    void keyToFrame(char const*);
    void objectFromString(std::string);
    void powerOffObject();
    void powerOnObject();
    void removeGlow();
    void resetObject();
    void setDontTransform(bool);
    void setEnterEffect(int);
    void setFlipX(bool);
    void setFlipY(bool);
    void setM_ID(int);
    void setObjectColor(cocos2d::_ccColor3B);
    void setObjectKey(int);
    void setObjectParent(cocos2d::CCNode*);
    void setObjectZ(int);
    void setOpacity(unsigned char);
    void setPosition(cocos2d::CCPoint const&);
    void setRotation(float);
    void setScale(float);
    void setScaleModX(float);
    void setScaleModY(float);
    void setScaleX(float);
    void setScaleY(float);
    void setSectionIdx(int);
    void setShouldHide(bool);
    void setStartPos(cocos2d::CCPoint);
    void setStartRotation(float);
    void setStartScaleX(float);
    void setStartScaleY(float);
    void setStateVar(bool);
    void setTintColor(cocos2d::_ccColor3B);
    void setTintDuration(float);
    void setVisible(bool);
    void setupTypeFromFrame(char const*);
    void stringSetupToDict(std::string);
    void triggerActivated();
    void triggerObject();
    void update(float);
    void updateState();
    ~GameObject();
};

#endif // HIEUDASH_GAMEOBJECT_H_
