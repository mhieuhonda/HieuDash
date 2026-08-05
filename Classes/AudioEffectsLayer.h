#ifndef _AUDIOEFFECTSLAYER_H_
#define _AUDIOEFFECTSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AudioEffectsLayer {
public:
    AudioEffectsLayer();
    audioStep(float);
    create(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    draw();
    getAudioScale();
    getBGSquare();
    getRainActive();
    goingDown();
    init(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    resetAudioVars();
    setRainActive(bool);
    triggerEffect(float);
    updateTweenAction(float, char const*);
    ~AudioEffectsLayer();
};

#endif // _AUDIOEFFECTSLAYER_H_
