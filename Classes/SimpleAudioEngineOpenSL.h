#ifndef HIEUDASH_SIMPLEAUDIOENGINEOPENSL_H_
#define HIEUDASH_SIMPLEAUDIOENGINEOPENSL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SimpleAudioEngineOpenSL : public cocos2d::CCObject {
public:
    SimpleAudioEngineOpenSL();
    void end();
    int getEffectsVolume();
    void initEngine();
    void pauseAllEffects();
    void pauseEffect(unsigned int);
    void playEffect(char const*, bool);
    void preloadEffect(char const*);
    void resumeAllEffects();
    void resumeEffect(unsigned int);
    void setEffectsVolume(float);
    SimpleAudioEngineOpenSL* sharedEngine();
    void stopAllEffects();
    void stopEffect(unsigned int);
    void unloadEffect(char const*);
    ~SimpleAudioEngineOpenSL();
};

#endif // HIEUDASH_SIMPLEAUDIOENGINEOPENSL_H_
