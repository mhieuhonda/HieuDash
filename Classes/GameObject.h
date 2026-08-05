#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameObject {
public:
    GameObject();
    activateObject();
    addGlow();
    calculateSpawnXPos();
    create(char const*);
    createAndAddParticle(char const*, int);
    createObject(char const*);
    customScaleMod(char const*);
    customSetup();
    deactivateObject();
    frameToKey(char const*);
    getBallFrame(int);
    getBlendAdditive();
    getDontTransform();
    getEnterEffect();
    getFrame();
    getHasBeenActivated();
    getIsDisabled();
    getIsInvisible();
    getM_ID();
    getObjectKey();
    getObjectParent();
    getObjectRect();
    getObjectRect(float, float);
    getObjectZ();
    getRealPosition();
    getSaveString();
    getScaleModX();
    getScaleModY();
    getSectionIdx();
    getShouldHide();
    getShouldSpawn();
    getSpawnXPos();
    getStartPos();
    getStartRotation();
    getStartScaleX();
    getStartScaleY();
    getStateVar();
    getTintColor();
    getTintDuration();
    getType();
    getUsePlayerColor();
    init(char const*);
    keyToFrame(char const*);
    objectFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    powerOffObject();
    powerOnObject();
    removeGlow();
    resetObject();
    setDontTransform(bool);
    setEnterEffect(int);
    setFlipX(bool);
    setFlipY(bool);
    setM_ID(int);
    setObjectColor(cocos2d::_ccColor3B);
    setObjectKey(int);
    setObjectParent(cocos2d::CCNode*);
    setObjectZ(int);
    setOpacity(unsigned char);
    setPosition(cocos2d::CCPoint const&);
    setRotation(float);
    setScale(float);
    setScaleModX(float);
    setScaleModY(float);
    setScaleX(float);
    setScaleY(float);
    setSectionIdx(int);
    setShouldHide(bool);
    setStartPos(cocos2d::CCPoint);
    setStartRotation(float);
    setStartScaleX(float);
    setStartScaleY(float);
    setStateVar(bool);
    setTintColor(cocos2d::_ccColor3B);
    setTintDuration(float);
    setVisible(bool);
    setupTypeFromFrame(char const*);
    stringSetupToDict(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    triggerActivated();
    triggerObject();
    update(float);
    updateState();
    ~GameObject();
};

#endif // _GAMEOBJECT_H_
