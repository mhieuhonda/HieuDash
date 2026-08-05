#ifndef HIEUDASH_RATELEVELDELEGATE_H_
#define HIEUDASH_RATELEVELDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class RateLevelDelegate : public cocos2d::CCObject {
public:
    virtual ~RateLevelDelegate() {}
    RateLevelDelegate();
    void rateLevelClosed();
};

#endif // HIEUDASH_RATELEVELDELEGATE_H_
