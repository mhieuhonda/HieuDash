#ifndef HIEUDASH_SPRITEDESCRIPTION_H_
#define HIEUDASH_SPRITEDESCRIPTION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SpriteDescription : public cocos2d::CCObject {
public:
    SpriteDescription();
    void createDescription(DS_Dictionary*);
    void createDescription(cocos2d::CCDictionary*);
    int getTransformValues(frameValues*);
    void initDescription(DS_Dictionary*);
    void initDescription(cocos2d::CCDictionary*);
    ~SpriteDescription();
};

#endif // HIEUDASH_SPRITEDESCRIPTION_H_
