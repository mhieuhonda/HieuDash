#ifndef _GAMESOUNDMANAGER_H_
#define _GAMESOUNDMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameSoundManager {
public:
    GameSoundManager();
    asynchronousSetup();
    fadeInMusic(bool);
    fadeOutMusic(bool);
    getBGVol();
    getState();
    init();
    isLoopedSoundPlaying(char const*);
    pauseAllLoopedSounds();
    pauseLoopedSound(char const*);
    playEffect(char const*);
    playEffect(char const*, float, float, float);
    playLoopedSound(char const*, char const*, float, float, bool, bool, bool);
    playUniqueEffect(char const*);
    playUniqueEffect(char const*, float, float, float);
    preload();
    removeLoopedSound(char const*);
    resetUniqueEffects();
    resumeAllLoopedSounds();
    resumeSound();
    setBGMusicVolume(float);
    setBGVol(float);
    setup();
    sharedManager();
    stopAllLoopedSounds();
    stopLoopedSound(char const*, bool);
    updateLoopedVolume(char const*, float);
    ~GameSoundManager();
};

#endif // _GAMESOUNDMANAGER_H_
