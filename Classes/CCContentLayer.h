#ifndef _CCCONTENTLAYER_H_
#define _CCCONTENTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCContentLayer {
public:
    CCContentLayer();
    create(cocos2d::_ccColor4B const&, float, float);
    setPosition(cocos2d::CCPoint const&);
    ~CCContentLayer();
};

#endif // _CCCONTENTLAYER_H_
