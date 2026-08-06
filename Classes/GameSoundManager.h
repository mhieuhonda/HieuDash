#ifndef HIEUDASH_GAMESOUNDMANAGER_H_
#define HIEUDASH_GAMESOUNDMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameSoundManager : public cocos2d::CCObject {
public:
    GameSoundManager();
    void asynchronousSetup();
    void fadeInMusic(bool);
    void fadeOutMusic(bool);
    int getBGVol();
    int getState();
    bool init();
    bool isLoopedSoundPlaying(char const*);
    void pauseAllLoopedSounds();
    void pauseLoopedSound(char const*);
    void playEffect(char const*);
    void playEffect(char const*, float, float, float);
    // v0.5: play the given mp3 as the level background music.
    // bgmPath is a path relative to Resources/ (e.g. "HieuLouis.mp3").
    void playBackgroundMusic(char const* bgmPath, float fadeDuration, int loop);
    void playLoopedSound(char const*, char const*, float, float, bool, bool, bool);
    void playUniqueEffect(char const*);
    void playUniqueEffect(char const*, float, float, float);
    void preload();
    void removeLoopedSound(char const*);
    void resetUniqueEffects();
    void resumeAllLoopedSounds();
    void resumeSound();
    void setBGMusicVolume(float);
    void setBGVol(float);
    void setup();
    static GameSoundManager* sharedManager();
    void stopAllLoopedSounds();
    void stopLoopedSound(char const*, bool);
    void updateLoopedVolume(char const*, float);
    ~GameSoundManager();
};

#endif // HIEUDASH_GAMESOUNDMANAGER_H_
