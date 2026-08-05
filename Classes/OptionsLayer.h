#ifndef _OPTIONSLAYER_H_
#define _OPTIONSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class OptionsLayer {
public:
    FLAlert_Clicked(FLAlertLayer*, bool);
    OptionsLayer();
    create();
    customSetup();
    exitLayer();
    layerHidden();
    onFX();
    onGC();
    onHelp();
    onMusic();
    onRate();
    onSoundtracks();
    onSupport();
    ~OptionsLayer();
};

#endif // _OPTIONSLAYER_H_
