#ifndef _COCOSDENSHION_H_
#define _COCOSDENSHION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CocosDenshion {
public:
    SimpleAudioEngine::SimpleAudioEngine();
    SimpleAudioEngine::end();
    SimpleAudioEngine::getBackgroundMusicVolume();
    SimpleAudioEngine::getEffectsVolume();
    SimpleAudioEngine::isBackgroundMusicPlaying();
    SimpleAudioEngine::pauseAllEffects();
    SimpleAudioEngine::pauseBackgroundMusic();
    SimpleAudioEngine::pauseEffect(unsigned int);
    SimpleAudioEngine::playBackgroundMusic(char const*, bool);
    SimpleAudioEngine::playEffect(char const*, bool, float, float, float);
    SimpleAudioEngine::preloadBackgroundMusic(char const*);
    SimpleAudioEngine::preloadEffect(char const*);
    SimpleAudioEngine::resumeAllEffects();
    SimpleAudioEngine::resumeBackgroundMusic();
    SimpleAudioEngine::resumeEffect(unsigned int);
    SimpleAudioEngine::rewindBackgroundMusic();
    SimpleAudioEngine::setBackgroundMusicTime(float);
    SimpleAudioEngine::setBackgroundMusicVolume(float);
    SimpleAudioEngine::setEffectsVolume(float);
    SimpleAudioEngine::sharedEngine();
    SimpleAudioEngine::stopAllEffects();
    SimpleAudioEngine::stopBackgroundMusic(bool);
    SimpleAudioEngine::stopEffect(unsigned int);
    SimpleAudioEngine::unloadEffect(char const*);
    SimpleAudioEngine::willPlayBackgroundMusic();
    SimpleAudioEngine::~SimpleAudioEngine();
};

#endif // _COCOSDENSHION_H_
