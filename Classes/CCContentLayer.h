#ifndef HIEUDASH_CCCONTENTLAYER_H_
#define HIEUDASH_CCCONTENTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCContentLayer : public cocos2d::CCLayer {
public:
    CCContentLayer();
    static CCContentLayer* create(cocos2d::_ccColor4B const&, float, float);
    void setPosition(cocos2d::CCPoint const&);
    ~CCContentLayer();
};

#endif // HIEUDASH_CCCONTENTLAYER_H_
