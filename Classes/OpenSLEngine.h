#ifndef _OPENSLENGINE_H_
#define _OPENSLENGINE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class OpenSLEngine {
public:
    OpenSLEngine();
    closeEngine();
    createEngine(void*);
    getEffectState(unsigned int);
    getEffectsVolume();
    preloadEffect(char const*);
    recreatePlayer(char const*);
    resumeAllEffects();
    resumeEffect(unsigned int);
    setAllEffectState(int);
    setEffectLooping(unsigned int, bool);
    setEffectState(unsigned int, int, bool);
    setEffectsVolume(float);
    unloadEffect(char const*);
    ~OpenSLEngine();
};

#endif // _OPENSLENGINE_H_
