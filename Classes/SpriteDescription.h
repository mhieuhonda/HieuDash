#ifndef _SPRITEDESCRIPTION_H_
#define _SPRITEDESCRIPTION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SpriteDescription {
public:
    SpriteDescription();
    createDescription(DS_Dictionary*);
    createDescription(cocos2d::CCDictionary*);
    getTransformValues(frameValues*);
    initDescription(DS_Dictionary*);
    initDescription(cocos2d::CCDictionary*);
    ~SpriteDescription();
};

#endif // _SPRITEDESCRIPTION_H_
