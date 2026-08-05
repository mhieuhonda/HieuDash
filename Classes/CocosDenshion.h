#ifndef HIEUDASH_COCOSDENSHION_H_
#define HIEUDASH_COCOSDENSHION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Fixed: Removed malformed SimpleAudioEngine:: qualifiers, added proper return types.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CocosDenshion {
public:
    CocosDenshion();
    virtual ~CocosDenshion();

    static void end();
    static CocosDenshion* sharedEngine();

    float getBackgroundMusicVolume();
    float getEffectsVolume();
    bool isBackgroundMusicPlaying();
    bool willPlayBackgroundMusic();

    void pauseAllEffects();
    void pauseBackgroundMusic();
    void pauseEffect(unsigned int);
    void playBackgroundMusic(char const*, bool);
    unsigned int playEffect(char const*, bool, float, float, float);
    void preloadBackgroundMusic(char const*);
    void preloadEffect(char const*);
    void resumeAllEffects();
    void resumeBackgroundMusic();
    void resumeEffect(unsigned int);
    void rewindBackgroundMusic();
    void setBackgroundMusicTime(float);
    void setBackgroundMusicVolume(float);
    void setEffectsVolume(float);
    void stopAllEffects();
    void stopBackgroundMusic(bool);
    void stopEffect(unsigned int);
    void unloadEffect(char const*);
};

#endif // HIEUDASH_COCOSDENSHION_H_
