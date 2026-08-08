
#ifndef SPRITEANIMATIONMANAGER_H_
#define SPRITEANIMATIONMANAGER_H_

#include "cocos2d.h"
#include <string>

class SpriteAnimationManager {
public:
    virtual ~SpriteAnimationManager();

    void getAnimType(std::string);
    void overridePrio();
    void runAnimation(std::string);
    void initWithOwner(CCAnimatedSprite*, std::string);
    void loadAnimations(std::string);
    void queueAnimation(std::string);
    void resetAnimState();
    void stopAnimations();
    void storeAnimation(cocos2d::CCAnimate*, cocos2d::CCAnimate*, std::string, int, spriteMode, cocos2d::CCSpriteFrame*);
    SpriteAnimationManager* createWithOwner(CCAnimatedSprite*, std::string);
    void finishAnimation(std::string);
    SpriteAnimationManager* createAnimations(std::string);
    void executeAnimation(std::string);
    void animationFinished();
    void runQueuedAnimation();
    void updateAnimationSpeed(float);
    void callAnimationFinished();
    void playSoundForAnimation(std::string);
    void offsetCurrentAnimation(float);
    void storeSoundForAnimation(cocos2d::CCString*, std::string, float);
    void switchToFirstFrameOfAnimation(std::string);
    void getPrio(std::string);
    void doCleanup();
    void playSound(std::string);

};

#endif // SPRITEANIMATIONMANAGER_H_
