#ifndef _PAUSELAYER_H_
#define _PAUSELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class PauseLayer {
public:
    PauseLayer();
    create();
    customSetup();
    keyBackClicked();
    onAutoCheck();
    onEdit();
    onFX();
    onHelp();
    onMusic();
    onNormalMode();
    onPracticeMode();
    onQuit();
    onRestart();
    onResume();
    setupProgressBars();
    ~PauseLayer();
};

#endif // _PAUSELAYER_H_
