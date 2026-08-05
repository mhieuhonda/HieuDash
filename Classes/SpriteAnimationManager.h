#ifndef HIEUDASH_SPRITEANIMATIONMANAGER_H_
#define HIEUDASH_SPRITEANIMATIONMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SpriteAnimationManager : public cocos2d::CCObject {
public:
    SpriteAnimationManager();
    void animationFinished();
    void createAnimations(std::string);
    void createWithOwner(CCAnimatedSprite*, std::string);
    void doCleanup();
    void executeAnimation(std::string);
    void finishAnimation(std::string);
    int getActiveAnimation();
    int getAnimType(std::string);
    int getAnimationContainer();
    int getPrio(std::string);
    bool initWithOwner(CCAnimatedSprite*, std::string);
    void loadAnimations(std::string);
    void overridePrio();
    void playSound(std::string);
    void playSoundForAnimation(std::string);
    void queueAnimation(std::string);
    void resetAnimState();
    void runAnimation(std::string);
    void runQueuedAnimation();
    void setActiveAnimation(std::string);
    void setAnimationContainer(cocos2d::CCDictionary*);
    void storeAnimation(cocos2d::CCAnimate*, std::string, int, spriteMode, cocos2d::CCSpriteFrame*);
    void storeSoundForAnimation(cocos2d::CCString*, std::string, float);
    ~SpriteAnimationManager();
};

#endif // HIEUDASH_SPRITEANIMATIONMANAGER_H_
