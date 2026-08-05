#ifndef HIEUDASH_AUDIOEFFECTSLAYER_H_
#define HIEUDASH_AUDIOEFFECTSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AudioEffectsLayer : public cocos2d::CCLayer {
public:
    AudioEffectsLayer();
    void audioStep(float);
    AudioEffectsLayer* create(std::string);
    void draw();
    int getAudioScale();
    int getBGSquare();
    int getRainActive();
    void goingDown();
    bool init(std::string);
    void resetAudioVars();
    void setRainActive(bool);
    void triggerEffect(float);
    void updateTweenAction(float, char const*);
    ~AudioEffectsLayer();
};

#endif // HIEUDASH_AUDIOEFFECTSLAYER_H_
