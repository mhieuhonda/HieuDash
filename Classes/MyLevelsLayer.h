#ifndef _MYLEVELSLAYER_H_
#define _MYLEVELSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MyLevelsLayer {
public:
    MyLevelsLayer();
    create();
    init();
    keyBackClicked();
    onBack();
    onNew();
    scene();
    setupLevelBrowser();
    ~MyLevelsLayer();
};

#endif // _MYLEVELSLAYER_H_
