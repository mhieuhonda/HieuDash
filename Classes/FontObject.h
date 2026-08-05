#ifndef HIEUDASH_FONTOBJECT_H_
#define HIEUDASH_FONTOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class FontObject : public cocos2d::CCObject {
public:
    FontObject();
    void createWithConfigFile(char const*, float);
    int getFontWidth(int);
    bool initWithConfigFile(char const*, float);
    void parseConfigFile(char const*, float);
    ~FontObject();
};

#endif // HIEUDASH_FONTOBJECT_H_
