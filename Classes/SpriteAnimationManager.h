#ifndef _SPRITEANIMATIONMANAGER_H_
#define _SPRITEANIMATIONMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SpriteAnimationManager {
public:
    SpriteAnimationManager();
    animationFinished();
    createAnimations(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    createWithOwner(CCAnimatedSprite*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    doCleanup();
    executeAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    finishAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    getActiveAnimation();
    getAnimType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    getAnimationContainer();
    getPrio(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    initWithOwner(CCAnimatedSprite*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    loadAnimations(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    overridePrio();
    playSound(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    playSoundForAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    queueAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    resetAnimState();
    runAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    runQueuedAnimation();
    setActiveAnimation(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setAnimationContainer(cocos2d::CCDictionary*);
    storeAnimation(cocos2d::CCAnimate*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int, spriteMode, cocos2d::CCSpriteFrame*);
    storeSoundForAnimation(cocos2d::CCString*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float);
    ~SpriteAnimationManager();
};

#endif // _SPRITEANIMATIONMANAGER_H_
