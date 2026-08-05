#ifndef HIEUDASH_OPENSLENGINE_H_
#define HIEUDASH_OPENSLENGINE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class OpenSLEngine : public cocos2d::CCObject {
public:
    OpenSLEngine();
    void closeEngine();
    void createEngine(void*);
    int getEffectState(unsigned int);
    int getEffectsVolume();
    void preloadEffect(char const*);
    void recreatePlayer(char const*);
    void resumeAllEffects();
    void resumeEffect(unsigned int);
    void setAllEffectState(int);
    void setEffectLooping(unsigned int, bool);
    void setEffectState(unsigned int, int, bool);
    void setEffectsVolume(float);
    void unloadEffect(char const*);
    ~OpenSLEngine();
};

#endif // HIEUDASH_OPENSLENGINE_H_
