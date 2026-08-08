// ============================================================
// AudioEffectsLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef AUDIOEFFECTSLAYER_H_
#define AUDIOEFFECTSLAYER_H_

#include <string>

class AudioEffectsLayer {
public:
    virtual ~AudioEffectsLayer();
    virtual ~AudioEffectsLayer();
    virtual ~AudioEffectsLayer();

    void getBGSquare();
    void triggerEffect(float);
    void resetAudioVars();
    void updateTweenAction(float, char const*);
    void draw();
    void init(std::string);
    void create(std::string);
    void audioStep(float);
    void goingDown();

};

#endif // AUDIOEFFECTSLAYER_H_
