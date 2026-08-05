#ifndef _SIMPLEAUDIOENGINEOPENSL_H_
#define _SIMPLEAUDIOENGINEOPENSL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SimpleAudioEngineOpenSL {
public:
    SimpleAudioEngineOpenSL();
    end();
    getEffectsVolume();
    initEngine();
    pauseAllEffects();
    pauseEffect(unsigned int);
    playEffect(char const*, bool);
    preloadEffect(char const*);
    resumeAllEffects();
    resumeEffect(unsigned int);
    setEffectsVolume(float);
    sharedEngine();
    stopAllEffects();
    stopEffect(unsigned int);
    unloadEffect(char const*);
    ~SimpleAudioEngineOpenSL();
};

#endif // _SIMPLEAUDIOENGINEOPENSL_H_
