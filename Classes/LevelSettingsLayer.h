#ifndef _LEVELSETTINGSLAYER_H_
#define _LEVELSETTINGSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelSettingsLayer {
public:
    LevelSettingsLayer();
    audioNext();
    audioPrevious();
    colorPickerClosed(ColorPickerPopup*);
    create(LevelSettingsObject*);
    getDelegate();
    init(LevelSettingsObject*);
    keyBackClicked();
    onBG();
    onClose();
    onG();
    selectSong(int);
    setDelegate(LevelSettingsDelegate*);
    updateAudioLabel();
    ~LevelSettingsLayer();
};

#endif // _LEVELSETTINGSLAYER_H_
