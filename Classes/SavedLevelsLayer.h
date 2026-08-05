#ifndef _SAVEDLEVELSLAYER_H_
#define _SAVEDLEVELSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SavedLevelsLayer {
public:
    SavedLevelsLayer();
    create();
    init();
    keyBackClicked();
    onBack();
    scene();
    setupLevelBrowser();
    ~SavedLevelsLayer();
};

#endif // _SAVEDLEVELSLAYER_H_
