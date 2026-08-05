#ifndef _TUTORIALLAYER_H_
#define _TUTORIALLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class TutorialLayer {
public:
    TutorialLayer();
    create();
    init();
    keyBackClicked();
    loadPage(int);
    onClose();
    onNext();
    ~TutorialLayer();
};

#endif // _TUTORIALLAYER_H_
