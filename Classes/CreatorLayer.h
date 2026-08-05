#ifndef _CREATORLAYER_H_
#define _CREATORLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CreatorLayer {
public:
    CreatorLayer();
    create();
    init();
    keyBackClicked();
    onBack();
    onFeaturedLevels();
    onMyLevels();
    onOnlineLevels();
    onSavedLevels();
    scene();
    ~CreatorLayer();
};

#endif // _CREATORLAYER_H_
